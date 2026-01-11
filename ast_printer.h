/* ast_printer.h */
#ifndef AST_PRINTER_H
#define AST_PRINTER_H

#include <stdio.h>
#include "tree_nodes.h"
#include "create_tree.h"

void print_expr_to_dot(expr_struct* expr, FILE* file, int* node_counter);
void print_stmt_to_dot(stmt_struct* stmt, FILE* file, int* node_counter);
void print_stmt_list_to_dot(stmt_list_struct* list, FILE* file, int* node_counter);
void print_program_to_dot(program_struct* program, const char* filename);

#endif /* AST_PRINTER_H */