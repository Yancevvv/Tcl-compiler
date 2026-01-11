#ifndef PRINT_TREE_H
#define PRINT_TREE_H

#include "tree_nodes.h"

void print_expr(expr_struct* expr, int indent);
void print_stmt(stmt_struct* stmt, int indent);
void print_stmt_list(stmt_list_struct* list, int indent);
void print_program(program_struct* program);

#endif