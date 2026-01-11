/* create_tree.h */
#ifndef CREATE_TREE_H
#define CREATE_TREE_H

#include "tree_nodes.h"

/* Константы для типов операторов */
#define OP_PLUS 1
#define OP_MINUS 2
#define OP_MULT 3
#define OP_DIV 4
#define OP_MOD 5
#define OP_POW 6
#define OP_EQ 7
#define OP_NE 8
#define OP_LT 9
#define OP_GT 10
#define OP_LE 11
#define OP_GE 12
#define OP_STREQ 13
#define OP_STRNE 14
#define OP_AND 15
#define OP_OR 16
#define OP_NOT 17
#define OP_BITAND 18
#define OP_BITOR 19
#define OP_BITXOR 20
#define OP_BITNOT 21
#define OP_LSHIFT 22
#define OP_RSHIFT 23
#define OP_DOT 24 /* конкатенация строк */

/* Функции создания узлов AST */
expr_struct* create_const_int_expr(int value);
expr_struct* create_const_double_expr(double value);
expr_struct* create_const_string_expr(char* value);
expr_struct* create_variable_expr(char* name);
expr_struct* create_command_expr(char* name);
expr_struct* create_binary_op_expr(int op, expr_struct* left, expr_struct* right);
expr_struct* create_unary_op_expr(int op, expr_struct* operand);
expr_list_struct* create_expr_list(expr_struct* expr);
expr_list_struct* add_to_expr_list(expr_list_struct* list, expr_struct* expr);

stmt_struct* create_set_stmt(char* var_name, expr_struct* value);
stmt_struct* create_if_stmt(expr_struct* condition, stmt_list_struct* then_block, 
                           elsif_list_struct* elsif_list, stmt_list_struct* else_block);
stmt_struct* create_while_stmt(expr_struct* condition, stmt_list_struct* body);
stmt_struct* create_for_stmt(expr_struct* init, expr_struct* condition, 
                            expr_struct* increment, stmt_list_struct* body);
stmt_struct* create_foreach_stmt(char* var_name, char* list_name, stmt_list_struct* body);
stmt_struct* create_proc_stmt(char* name, param_list_struct* params, stmt_list_struct* body);
stmt_struct* create_return_stmt(expr_struct* expr);
stmt_struct* create_break_stmt(void);
stmt_struct* create_continue_stmt(void);
stmt_struct* create_block_stmt(stmt_list_struct* statements);
stmt_struct* create_expr_stmt(expr_struct* expr);

stmt_list_struct* create_stmt_list(stmt_struct* stmt);
stmt_list_struct* add_to_stmt_list(stmt_list_struct* list, stmt_struct* stmt);

elsif_list_struct* create_elsif_list(expr_struct* condition, stmt_list_struct* body);
elsif_list_struct* add_to_elsif_list(elsif_list_struct* list, expr_struct* condition, stmt_list_struct* body);

param_list_struct* create_param_list(char* param);
param_list_struct* add_to_param_list(param_list_struct* list, char* param);

program_struct* create_program(stmt_list_struct* statements);

#endif /* CREATE_TREE_H */