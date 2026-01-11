/* ast_printer.c */
#include "ast_printer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void escape_string(char* dest, const char* src, size_t max_len) {
    size_t j = 0;
    for (size_t i = 0; src[i] != '\0' && j < max_len - 1; i++) {
        switch (src[i]) {
            case '"': dest[j++] = '\\'; dest[j++] = '"'; break;
            case '\\': dest[j++] = '\\'; dest[j++] = '\\'; break;
            case '\n': dest[j++] = '\\'; dest[j++] = 'n'; break;
            case '\t': dest[j++] = '\\'; dest[j++] = 't'; break;
            case '\r': dest[j++] = '\\'; dest[j++] = 'r'; break;
            default: dest[j++] = src[i]; break;
        }
    }
    dest[j] = '\0';
}

static void print_expr_to_dot_internal(expr_struct* expr, FILE* file, int* node_counter, int parent_id) {
    if (!expr) return;
    
    int current_id = (*node_counter)++;
    char escaped_str[256];
    
    switch (expr->type) {
        case EXPR_INTEGER:
            fprintf(file, "    Id%06d [label=\"Integer: %d\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, expr->value.int_val);
            break;
        case EXPR_DOUBLE:
            fprintf(file, "    Id%06d [label=\"Double: %g\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, expr->value.double_val);
            break;
        case EXPR_STRING:
            escape_string(escaped_str, expr->value.string_val, sizeof(escaped_str));
            fprintf(file, "    Id%06d [label=\"String: \\\"%s\\\"\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, escaped_str);
            break;
        case EXPR_VARIABLE:
            fprintf(file, "    Id%06d [label=\"Variable: $%s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, expr->value.name);
            break;
        case EXPR_COMMAND:
            escape_string(escaped_str, expr->value.name, sizeof(escaped_str));
            fprintf(file, "    Id%06d [label=\"Command: [%s]\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, escaped_str);
            break;
        case EXPR_BINARY_OP: {
            const char* op_str;
            switch (expr->op_type) {
                case OP_PLUS: op_str = "+"; break;
                case OP_MINUS: op_str = "-"; break;
                case OP_MULT: op_str = "*"; break;
                case OP_DIV: op_str = "/"; break;
                case OP_MOD: op_str = "%"; break;
                case OP_POW: op_str = "**"; break;
                case OP_EQ: op_str = "=="; break;
                case OP_NE: op_str = "!="; break;
                case OP_LT: op_str = "<"; break;
                case OP_GT: op_str = ">"; break;
                case OP_LE: op_str = "<="; break;
                case OP_GE: op_str = ">="; break;
                case OP_STREQ: op_str = "eq"; break;
                case OP_STRNE: op_str = "ne"; break;
                case OP_AND: op_str = "&&"; break;
                case OP_OR: op_str = "||"; break;
                case OP_BITAND: op_str = "&"; break;
                case OP_BITOR: op_str = "|"; break;
                case OP_BITXOR: op_str = "^"; break;
                case OP_LSHIFT: op_str = "<<"; break;
                case OP_RSHIFT: op_str = ">>"; break;
                case OP_DOT: op_str = "."; break;
                default: op_str = "??"; break;
            }
            fprintf(file, "    Id%06d [label=\"BinaryOp: %s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, op_str);
            print_expr_to_dot_internal(expr->left, file, node_counter, current_id);
            print_expr_to_dot_internal(expr->right, file, node_counter, current_id);
            break;
        }
        case EXPR_UNARY_OP: {
            const char* op_str;
            switch (expr->op_type) {
                case OP_MINUS: op_str = "-"; break;
                case OP_PLUS: op_str = "+"; break;
                case OP_NOT: op_str = "!"; break;
                case OP_BITNOT: op_str = "~"; break;
                default: op_str = "??"; break;
            }
            fprintf(file, "    Id%06d [label=\"UnaryOp: %s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    current_id, op_str);
            print_expr_to_dot_internal(expr->left, file, node_counter, current_id);
            break;
        }
        default:
            fprintf(file, "    Id%06d [label=\"Unknown Expr\", shape=box, style=filled, fillcolor=\"#ffcdd2\"];\n", 
                    current_id);
            break;
    }
    
    if (parent_id >= 0) {
        fprintf(file, "    Id%06d -> Id%06d;\n", parent_id, current_id);
    }
}

void print_expr_to_dot(expr_struct* expr, FILE* file, int* node_counter) {
    print_expr_to_dot_internal(expr, file, node_counter, -1);
}

static void print_stmt_to_dot_internal(stmt_struct* stmt, FILE* file, int* node_counter, int parent_id) {
    if (!stmt) return;
    
    int current_id = (*node_counter)++;
    int child_id;
    
    switch (stmt->type) {
        case STMT_SET:
            fprintf(file, "    Id%06d [label=\"Set\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Variable name
            child_id = (*node_counter)++;
            fprintf(file, "    Id%06d [label=\"Var: %s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    child_id, stmt->u.set_stmt.var_name);
            fprintf(file, "    Id%06d -> Id%06d [label=\"var\"];\n", current_id, child_id);
            
            // Value expression
            if (stmt->u.set_stmt.value) {
                child_id = *node_counter;
                print_expr_to_dot_internal(stmt->u.set_stmt.value, file, node_counter, current_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"value\"];\n", current_id, child_id);
            }
            break;
            
        case STMT_IF:
            fprintf(file, "    Id%06d [label=\"If\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Condition
            if (stmt->u.if_stmt.condition) {
                child_id = *node_counter;
                print_expr_to_dot_internal(stmt->u.if_stmt.condition, file, node_counter, current_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"cond\"];\n", current_id, child_id);
            }
            
            // Then block
            if (stmt->u.if_stmt.then_block) {
                child_id = (*node_counter)++;
                fprintf(file, "    Id%06d [label=\"Block\", shape=ellipse, style=filled, fillcolor=\"#f3e5f5\"];\n", child_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"then\"];\n", current_id, child_id);
                print_stmt_list_to_dot(stmt->u.if_stmt.then_block, file, node_counter);
            }
            
            // Else block
            if (stmt->u.if_stmt.else_block) {
                child_id = (*node_counter)++;
                fprintf(file, "    Id%06d [label=\"Block\", shape=ellipse, style=filled, fillcolor=\"#f3e5f5\"];\n", child_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"else\"];\n", current_id, child_id);
                print_stmt_list_to_dot(stmt->u.if_stmt.else_block, file, node_counter);
            }
            break;
            
        case STMT_WHILE:
            fprintf(file, "    Id%06d [label=\"While\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Condition
            if (stmt->u.while_stmt.condition) {
                child_id = *node_counter;
                print_expr_to_dot_internal(stmt->u.while_stmt.condition, file, node_counter, current_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"cond\"];\n", current_id, child_id);
            }
            
            // Body
            if (stmt->u.while_stmt.body) {
                child_id = (*node_counter)++;
                fprintf(file, "    Id%06d [label=\"Block\", shape=ellipse, style=filled, fillcolor=\"#f3e5f5\"];\n", child_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"body\"];\n", current_id, child_id);
                print_stmt_list_to_dot(stmt->u.while_stmt.body, file, node_counter);
            }
            break;
            
        case STMT_FOR:
            fprintf(file, "    Id%06d [label=\"For\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Init expression (as string)
            if (stmt->u.for_stmt.init) {
                child_id = (*node_counter)++;
                if (stmt->u.for_stmt.init->type == EXPR_STRING) {
                    fprintf(file, "    Id%06d [label=\"String: \\\"%s\\\"\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                            child_id, stmt->u.for_stmt.init->value.string_val);
                } else {
                    fprintf(file, "    Id%06d [label=\"Init Expr\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", child_id);
                }
                fprintf(file, "    Id%06d -> Id%06d [label=\"init\"];\n", current_id, child_id);
            }
            
            // Condition expression (as string)
            if (stmt->u.for_stmt.condition) {
                child_id = (*node_counter)++;
                if (stmt->u.for_stmt.condition->type == EXPR_STRING) {
                    fprintf(file, "    Id%06d [label=\"String: \\\"%s\\\"\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                            child_id, stmt->u.for_stmt.condition->value.string_val);
                } else {
                    fprintf(file, "    Id%06d [label=\"Cond Expr\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", child_id);
                }
                fprintf(file, "    Id%06d -> Id%06d [label=\"cond\"];\n", current_id, child_id);
            }
            
            // Increment expression (as string)
            if (stmt->u.for_stmt.increment) {
                child_id = (*node_counter)++;
                if (stmt->u.for_stmt.increment->type == EXPR_STRING) {
                    fprintf(file, "    Id%06d [label=\"String: \\\"%s\\\"\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                            child_id, stmt->u.for_stmt.increment->value.string_val);
                } else {
                    fprintf(file, "    Id%06d [label=\"Incr Expr\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", child_id);
                }
                fprintf(file, "    Id%06d -> Id%06d [label=\"incr\"];\n", current_id, child_id);
            }
            
            // Body
            if (stmt->u.for_stmt.body) {
                child_id = (*node_counter)++;
                fprintf(file, "    Id%06d [label=\"Block\", shape=ellipse, style=filled, fillcolor=\"#f3e5f5\"];\n", child_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"body\"];\n", current_id, child_id);
                print_stmt_list_to_dot(stmt->u.for_stmt.body, file, node_counter);
            }
            break;
            
        case STMT_FOREACH:
            fprintf(file, "    Id%06d [label=\"Foreach\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Variable name
            child_id = (*node_counter)++;
            fprintf(file, "    Id%06d [label=\"Var: %s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    child_id, stmt->u.foreach_stmt.var_name);
            fprintf(file, "    Id%06d -> Id%06d [label=\"var\"];\n", current_id, child_id);
            
            // List name
            child_id = (*node_counter)++;
            fprintf(file, "    Id%06d [label=\"List: %s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    child_id, stmt->u.foreach_stmt.list_name);
            fprintf(file, "    Id%06d -> Id%06d [label=\"list\"];\n", current_id, child_id);
            
            // Body
            if (stmt->u.foreach_stmt.body) {
                child_id = (*node_counter)++;
                fprintf(file, "    Id%06d [label=\"Block\", shape=ellipse, style=filled, fillcolor=\"#f3e5f5\"];\n", child_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"body\"];\n", current_id, child_id);
                print_stmt_list_to_dot(stmt->u.foreach_stmt.body, file, node_counter);
            }
            break;
            
        case STMT_PROC:
            fprintf(file, "    Id%06d [label=\"Proc\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Procedure name
            child_id = (*node_counter)++;
            fprintf(file, "    Id%06d [label=\"Name: %s\", shape=box, style=filled, fillcolor=\"#e0f7fa\"];\n", 
                    child_id, stmt->u.proc_stmt.name);
            fprintf(file, "    Id%06d -> Id%06d [label=\"name\"];\n", current_id, child_id);
            
            // Body
            if (stmt->u.proc_stmt.body) {
                child_id = (*node_counter)++;
                fprintf(file, "    Id%06d [label=\"Block\", shape=ellipse, style=filled, fillcolor=\"#f3e5f5\"];\n", child_id);
                fprintf(file, "    Id%06d -> Id%06d [label=\"body\"];\n", current_id, child_id);
                print_stmt_list_to_dot(stmt->u.proc_stmt.body, file, node_counter);
            }
            break;
            
        case STMT_RETURN:
            fprintf(file, "    Id%06d [label=\"Return\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Return expression
            if (stmt->u.return_expr) {
                child_id = *node_counter;
                print_expr_to_dot_internal(stmt->u.return_expr, file, node_counter, current_id);
                fprintf(file, "    Id%06d -> Id%06d;\n", current_id, child_id);
            }
            break;
            
        case STMT_BREAK:
            fprintf(file, "    Id%06d [label=\"Break\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            break;
            
        case STMT_CONTINUE:
            fprintf(file, "    Id%06d [label=\"Continue\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            break;
            
        case STMT_EXPR:
            fprintf(file, "    Id%06d [label=\"ExprStmt\", shape=ellipse, style=filled, fillcolor=\"#fff9c4\"];\n", current_id);
            
            // Expression
            if (stmt->u.expr_stmt) {
                child_id = *node_counter;
                print_expr_to_dot_internal(stmt->u.expr_stmt, file, node_counter, current_id);
                fprintf(file, "    Id%06d -> Id%06d;\n", current_id, child_id);
            }
            break;
            
        default:
            fprintf(file, "    Id%06d [label=\"Unknown Stmt\", shape=ellipse, style=filled, fillcolor=\"#ffcdd2\"];\n", 
                    current_id);
            break;
    }
    
    if (parent_id >= 0) {
        fprintf(file, "    Id%06d -> Id%06d;\n", parent_id, current_id);
    }
}

void print_stmt_to_dot(stmt_struct* stmt, FILE* file, int* node_counter) {
    print_stmt_to_dot_internal(stmt, file, node_counter, -1);
}

void print_stmt_list_to_dot(stmt_list_struct* list, FILE* file, int* node_counter) {
    if (!list) return;
    
    stmt_struct* current = list->first;
    while (current) {
        print_stmt_to_dot_internal(current, file, node_counter, -1);
        current = current->next;
    }
}

void print_program_to_dot(program_struct* program, const char* filename) {
    if (!program) return;
    
    FILE* file = fopen(filename, "w");
    if (!file) {
        fprintf(stderr, "Cannot open file for writing: %s\n", filename);
        return;
    }
    
    fprintf(file, "digraph TCL_AST {\n");
    fprintf(file, "    // Корень программы\n");
    fprintf(file, "    Id000001 [label=\"Program\", shape=doublecircle, style=filled, fillcolor=\"#c8e6c9\"];\n");
    
    int node_counter = 2; // Начинаем с 2, так как 1 уже занят корнем
    
    // Печатаем все операторы
    if (program->statements) {
        stmt_struct* current = program->statements->first;
        while (current) {
            print_stmt_to_dot_internal(current, file, &node_counter, 1);
            current = current->next;
        }
    }
    
    fprintf(file, "}\n");
    fclose(file);
    printf("AST saved to %s\n", filename);
}