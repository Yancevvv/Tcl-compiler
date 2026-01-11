#include "print_tree.h"
#include <stdio.h>

static const char* op_to_string(int op) {
    switch(op) {
        case OP_PLUS: return "+";
        case OP_MINUS: return "-";
        case OP_MULT: return "*";
        case OP_DIV: return "/";
        case OP_MOD: return "%";
        case OP_POW: return "**";
        case OP_EQ: return "==";
        case OP_NE: return "!=";
        case OP_LT: return "<";
        case OP_GT: return ">";
        case OP_LE: return "<=";
        case OP_GE: return ">=";
        case OP_STREQ: return "eq";
        case OP_STRNE: return "ne";
        case OP_AND: return "&&";
        case OP_OR: return "||";
        case OP_NOT: return "!";
        case OP_BITAND: return "&";
        case OP_BITOR: return "|";
        case OP_BITXOR: return "^";
        case OP_BITNOT: return "~";
        case OP_LSHIFT: return "<<";
        case OP_RSHIFT: return ">>";
        case OP_DOT: return ".";
        default: return "?";
    }
}

static void print_indent(int indent) {
    for (int i = 0; i < indent; i++) {
        printf("  ");
    }
}

void print_expr(expr_struct* expr, int indent) {
    if (!expr) {
        print_indent(indent);
        printf("NULL\n");
        return;
    }
    
    print_indent(indent);
    
    switch(expr->type) {
        case EXPR_INTEGER:
            printf("INTEGER: %d\n", expr->value.int_val);
            break;
        case EXPR_DOUBLE:
            printf("DOUBLE: %f\n", expr->value.double_val);
            break;
        case EXPR_STRING:
            printf("STRING: \"%s\"\n", expr->value.string_val);
            break;
        case EXPR_VARIABLE:
            printf("VARIABLE: %s\n", expr->value.name);
            break;
        case EXPR_COMMAND:
            printf("COMMAND: %s\n", expr->value.name);
            break;
        case EXPR_BINARY_OP:
            printf("BINARY_OP: %s\n", op_to_string(expr->op_type));
            print_indent(indent);
            printf("  left:\n");
            print_expr(expr->left, indent + 2);
            print_indent(indent);
            printf("  right:\n");
            print_expr(expr->right, indent + 2);
            break;
        case EXPR_UNARY_OP:
            printf("UNARY_OP: %s\n", op_to_string(expr->op_type));
            print_indent(indent);
            printf("  operand:\n");
            print_expr(expr->left, indent + 2);
            break;
        default:
            printf("UNKNOWN_EXPR\n");
    }
}

void print_stmt_list(stmt_list_struct* list, int indent) {
    if (!list) return;
    
    stmt_struct* current = list->first;
    while (current) {
        print_stmt(current, indent);
        current = current->next;
    }
}

void print_stmt(stmt_struct* stmt, int indent) {
    if (!stmt) return;
    
    print_indent(indent);
    
    switch(stmt->type) {
        case STMT_SET:
            printf("SET_STMT:\n");
            print_indent(indent + 1);
            printf("var: %s\n", stmt->u.set_stmt.var_name);
            print_indent(indent + 1);
            printf("value:\n");
            print_expr(stmt->u.set_stmt.value, indent + 2);
            break;
            
        case STMT_IF:
            printf("IF_STMT:\n");
            print_indent(indent + 1);
            printf("condition:\n");
            print_expr(stmt->u.if_stmt.condition, indent + 2);
            print_indent(indent + 1);
            printf("then:\n");
            print_stmt_list(stmt->u.if_stmt.then_block, indent + 2);
            
            if (stmt->u.if_stmt.elsif_list) {
                elsif_struct* elsif = stmt->u.if_stmt.elsif_list->first;
                int i = 1;
                while (elsif) {
                    print_indent(indent + 1);
                    printf("elsif[%d]:\n", i++);
                    print_indent(indent + 2);
                    printf("condition:\n");
                    print_expr(elsif->condition, indent + 3);
                    print_indent(indent + 2);
                    printf("body:\n");
                    print_stmt_list(elsif->body, indent + 3);
                    elsif = elsif->next;
                }
            }
            
            if (stmt->u.if_stmt.else_block) {
                print_indent(indent + 1);
                printf("else:\n");
                print_stmt_list(stmt->u.if_stmt.else_block, indent + 2);
            }
            break;
            
        case STMT_WHILE:
            printf("WHILE_STMT:\n");
            print_indent(indent + 1);
            printf("condition:\n");
            print_expr(stmt->u.while_stmt.condition, indent + 2);
            print_indent(indent + 1);
            printf("body:\n");
            print_stmt_list(stmt->u.while_stmt.body, indent + 2);
            break;
            
        case STMT_FOR:
            printf("FOR_STMT:\n");
            print_indent(indent + 1);
            printf("init:\n");
            print_expr(stmt->u.for_stmt.init, indent + 2);
            print_indent(indent + 1);
            printf("condition:\n");
            print_expr(stmt->u.for_stmt.condition, indent + 2);
            print_indent(indent + 1);
            printf("increment:\n");
            print_expr(stmt->u.for_stmt.increment, indent + 2);
            print_indent(indent + 1);
            printf("body:\n");
            print_stmt_list(stmt->u.for_stmt.body, indent + 2);
            break;
            
        case STMT_FOREACH:
            printf("FOREACH_STMT:\n");
            print_indent(indent + 1);
            printf("var: %s\n", stmt->u.foreach_stmt.var_name);
            print_indent(indent + 1);
            printf("list: %s\n", stmt->u.foreach_stmt.list_name);
            print_indent(indent + 1);
            printf("body:\n");
            print_stmt_list(stmt->u.foreach_stmt.body, indent + 2);
            break;
            
        case STMT_PROC:
            printf("PROC_STMT:\n");
            print_indent(indent + 1);
            printf("name: %s\n", stmt->u.proc_stmt.name);
            print_indent(indent + 1);
            printf("body:\n");
            print_stmt_list(stmt->u.proc_stmt.body, indent + 2);
            break;
            
        case STMT_RETURN:
            printf("RETURN_STMT:\n");
            if (stmt->u.return_expr) {
                print_indent(indent + 1);
                printf("value:\n");
                print_expr(stmt->u.return_expr, indent + 2);
            }
            break;
            
        case STMT_BREAK:
            printf("BREAK_STMT\n");
            break;
            
        case STMT_CONTINUE:
            printf("CONTINUE_STMT\n");
            break;
            
        case STMT_BLOCK:
            printf("BLOCK_STMT:\n");
            print_stmt_list(stmt->u.block_stmt, indent + 1);
            break;
            
        case STMT_EXPR:
            printf("EXPR_STMT:\n");
            print_expr(stmt->u.expr_stmt, indent + 1);
            break;
            
        default:
            printf("UNKNOWN_STMT\n");
    }
}

void print_program(program_struct* program) {
    if (!program) {
        printf("Empty program\n");
        return;
    }
    
    printf("PROGRAM:\n");
    print_stmt_list(program->statements, 1);
}