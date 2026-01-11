#include <stdlib.h>
#include <string.h>
#include "tree_nodes.h"

// --- Выражения ---
expr_struct* create_const_int_expr(int val) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_INTEGER;
    e->value.int_val = val;
    e->left = e->right = NULL;
    e->list = NULL;
    e->op_type = -1;
    return e;
}

expr_struct* create_const_double_expr(double val) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_DOUBLE;
    e->value.double_val = val;
    e->left = e->right = NULL;
    e->list = NULL;
    e->op_type = -1;
    return e;
}

expr_struct* create_const_string_expr(char* str) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_STRING;
    e->value.string_val = str ? strdup(str) : NULL;
    e->left = e->right = NULL;
    e->list = NULL;
    e->op_type = -1;
    return e;
}

expr_struct* create_variable_expr(char* name) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_VARIABLE;
    e->value.name = name ? strdup(name) : NULL;
    e->left = e->right = NULL;
    e->list = NULL;
    e->op_type = -1;
    return e;
}

expr_struct* create_command_expr(char* cmd) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_COMMAND;
    e->value.name = cmd ? strdup(cmd) : NULL;
    e->left = e->right = NULL;
    e->list = NULL;
    e->op_type = -1;
    return e;
}

expr_struct* create_binary_op_expr(int op, expr_struct* left, expr_struct* right) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_BINARY_OP;
    e->op_type = op;
    e->left = left;
    e->right = right;
    e->value.string_val = NULL;
    e->list = NULL;
    return e;
}

expr_struct* create_unary_op_expr(int op, expr_struct* operand) {
    expr_struct* e = malloc(sizeof(expr_struct));
    e->type = EXPR_UNARY_OP;
    e->op_type = op;
    e->left = operand;
    e->right = NULL;
    e->value.string_val = NULL;
    e->list = NULL;
    return e;
}

// --- Операторы ---
stmt_struct* create_set_stmt(char* var_name, expr_struct* value) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_SET;
    s->u.set_stmt.var_name = var_name ? strdup(var_name) : NULL;
    s->u.set_stmt.value = value;
    s->next = NULL;
    return s;
}

stmt_struct* create_expr_stmt(expr_struct* expr) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_EXPR;
    s->u.expr_stmt = expr;
    s->next = NULL;
    return s;
}

stmt_struct* create_if_stmt(expr_struct* cond, stmt_list_struct* then_block,
                            elsif_list_struct* elsif_list, stmt_list_struct* else_block) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_IF;
    s->u.if_stmt.condition = cond;
    s->u.if_stmt.then_block = then_block;
    s->u.if_stmt.elsif_list = elsif_list;
    s->u.if_stmt.else_block = else_block;
    s->next = NULL;
    return s;
}

stmt_struct* create_while_stmt(expr_struct* cond, stmt_list_struct* body) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_WHILE;
    s->u.while_stmt.condition = cond;
    s->u.while_stmt.body = body;
    s->next = NULL;
    return s;
}

stmt_struct* create_for_stmt(expr_struct* init, expr_struct* cond,
                             expr_struct* incr, stmt_list_struct* body) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_FOR;
    s->u.for_stmt.init = init;
    s->u.for_stmt.condition = cond;
    s->u.for_stmt.increment = incr;
    s->u.for_stmt.body = body;
    s->next = NULL;
    return s;
}

stmt_struct* create_foreach_stmt(char* var_name, char* list_name, stmt_list_struct* body) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_FOREACH;
    s->u.foreach_stmt.var_name = var_name ? strdup(var_name) : NULL;
    s->u.foreach_stmt.list_name = list_name ? strdup(list_name) : NULL;
    s->u.foreach_stmt.body = body;
    s->next = NULL;
    return s;
}

stmt_struct* create_proc_stmt(char* name, param_list_struct* params, stmt_list_struct* body) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_PROC;
    s->u.proc_stmt.name = name ? strdup(name) : NULL;
    s->u.proc_stmt.params = params;
    s->u.proc_stmt.body = body;
    s->next = NULL;
    return s;
}

stmt_struct* create_return_stmt(expr_struct* expr) {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_RETURN;
    s->u.return_expr = expr;
    s->next = NULL;
    return s;
}

stmt_struct* create_break_stmt() {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_BREAK;
    s->next = NULL;
    return s;
}

stmt_struct* create_continue_stmt() {
    stmt_struct* s = malloc(sizeof(stmt_struct));
    s->type = STMT_CONTINUE;
    s->next = NULL;
    return s;
}

// --- Списки ---
stmt_list_struct* create_stmt_list(stmt_struct* stmt) {
    stmt_list_struct* list = malloc(sizeof(stmt_list_struct));
    list->first = list->last = stmt;
    list->next = NULL;
    return list;
}

stmt_list_struct* add_to_stmt_list(stmt_list_struct* list, stmt_struct* stmt) {
    if (!list) return create_stmt_list(stmt);
    if (!list->first) {
        list->first = list->last = stmt;
    } else {
        list->last->next = stmt;
        list->last = stmt;
    }
    return list;
}

param_list_struct* create_param_list(char* param) {
    param_list_struct* p = malloc(sizeof(param_list_struct));
    p->first = p->last = param ? strdup(param) : NULL;
    p->next = NULL;
    return p;
}

param_list_struct* add_to_param_list(param_list_struct* list, char* param) {
    if (!list) return create_param_list(param);
    param_list_struct* new_node = malloc(sizeof(param_list_struct));
    new_node->first = new_node->last = param ? strdup(param) : NULL;
    new_node->next = NULL;
    // Простая односвязная цепочка параметров
    if (!list->next) {
        list->next = new_node;
    } else {
        param_list_struct* cur = list;
        while (cur->next) cur = cur->next;
        cur->next = new_node;
    }
    return list;
}

elsif_list_struct* create_elsif_list(expr_struct* cond, stmt_list_struct* body) {
    elsif_list_struct* list = malloc(sizeof(elsif_list_struct));
    elsif_struct* node = malloc(sizeof(elsif_struct));
    node->condition = cond;
    node->body = body;
    node->next = NULL;
    list->first = list->last = node;
    return list;
}

elsif_list_struct* add_to_elsif_list(elsif_list_struct* list, expr_struct* cond, stmt_list_struct* body) {
    elsif_struct* node = malloc(sizeof(elsif_struct));
    node->condition = cond;
    node->body = body;
    node->next = NULL;
    if (!list->first) {
        list->first = list->last = node;
    } else {
        list->last->next = node;
        list->last = node;
    }
    return list;
}

program_struct* create_program(stmt_list_struct* stmts) {
    program_struct* p = malloc(sizeof(program_struct));
    p->statements = stmts;
    return p;
}