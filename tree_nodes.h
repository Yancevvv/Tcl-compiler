/* tree_nodes.h */
#ifndef TREE_NODES_H
#define TREE_NODES_H

#include <stdlib.h>

/* Типы выражений */
typedef enum {
    EXPR_INTEGER,
    EXPR_DOUBLE,
    EXPR_STRING,
    EXPR_VARIABLE,
    EXPR_COMMAND,
    EXPR_BINARY_OP,
    EXPR_UNARY_OP
} expr_type;

/* Типы операторов */
typedef enum {
    STMT_SET,
    STMT_IF,
    STMT_WHILE,
    STMT_FOR,
    STMT_FOREACH,
    STMT_PROC,
    STMT_RETURN,
    STMT_BREAK,
    STMT_CONTINUE,
    STMT_BLOCK,
    STMT_EXPR
} stmt_type;

/* Узел выражения */
typedef struct expr_struct {
    expr_type type;
    union {
        int int_val;
        double double_val;
        char* string_val;
        char* name; /* для переменных, команд, идентификаторов */
    } value;
    struct expr_struct* left;
    struct expr_struct* right;
    struct expr_list_struct* list; /* для списков аргументов */
    int op_type; /* тип оператора для бинарных/унарных операций */
} expr_struct;

/* Список выражений */
typedef struct expr_list_struct {
    expr_struct* first;
    expr_struct* last;
    struct expr_list_struct* next;
} expr_list_struct;

/* Elseif блок */
typedef struct elsif_struct {
    expr_struct* condition;
    struct stmt_list_struct* body;
    struct elsif_struct* next;
} elsif_struct;

/* Elseif список */
typedef struct elsif_list_struct {
    elsif_struct* first;
    elsif_struct* last;
} elsif_list_struct;

/* Список параметров процедуры */
typedef struct param_list_struct {
    char* first;
    char* last;
    struct param_list_struct* next;
} param_list_struct;

/* Список операторов */
typedef struct stmt_list_struct {
    struct stmt_struct* first;
    struct stmt_struct* last;
    struct stmt_list_struct* next;
} stmt_list_struct;

/* Структура оператора */
typedef struct stmt_struct {
    stmt_type type;
    union {
        struct { char* var_name; expr_struct* value; } set_stmt;
        struct { expr_struct* condition; stmt_list_struct* then_block;
                elsif_list_struct* elsif_list; stmt_list_struct* else_block; } if_stmt;
        struct { expr_struct* condition; stmt_list_struct* body; } while_stmt;
        struct { expr_struct* init; expr_struct* condition;
                expr_struct* increment; stmt_list_struct* body; } for_stmt;
        struct { char* var_name; char* list_name; stmt_list_struct* body; } foreach_stmt;
        struct { char* name; param_list_struct* params; stmt_list_struct* body; } proc_stmt;
        expr_struct* return_expr;
        expr_struct* expr_stmt;
        stmt_list_struct* block_stmt;
    } u;
    struct stmt_struct* next;
} stmt_struct;

/* Корневая структура программы */
typedef struct program_struct {
    stmt_list_struct* statements;
} program_struct;

#endif /* TREE_NODES_H */