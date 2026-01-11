%define parse.error verbose

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree_nodes.h"
#include "create_tree.h"

extern int yylex(void);
extern int yylineno;
extern char* yytext;
extern FILE* yyin;

program_struct* program_root = NULL;
void yyerror(const char* s);

stmt_list_struct* stmt_list_result = NULL;
%}

%union {
    int int_val;
    double double_val;
    char* string_val;
    expr_struct* expr_un;
    stmt_struct* stmt_un;
    stmt_list_struct* stmt_list_un;
    expr_list_struct* expr_list_un;
    elsif_list_struct* elsif_list_un;
    param_list_struct* param_list_un;
    program_struct* program_un;
}

%type <expr_un> expr arithmetic_expr boolean_expr string_expr brace_expr
%type <stmt_un> statement top_level_statement control_statement
%type <stmt_un> assignment if_statement while_statement for_statement foreach_statement
%type <stmt_un> proc_definition return_statement break_statement continue_statement
%type <stmt_list_un> program
%type <stmt_list_un> block_body
%type <elsif_list_un> elsif_list
%type <param_list_un> parameter_list
%type <stmt_list_un> block

%token <int_val> INTEGER BOOLEAN
%token <double_val> DOUBLE
%token <string_val> STRING COMMAND VARIABLE IDENTIFIER BRACED_EXPR

%token IF ELSE ELSEIF WHILE FOR FOREACH PROC RETURN SET EXPR SWITCH BREAK CONTINUE IN
%token EQ NE LT GT LE GE STREQ STRNE
%token AND OR NOT
%token PLUS MINUS MULT DIV MOD POW
%token BITAND BITOR BITXOR BITNOT LSHIFT RSHIFT
%token ASSIGN DOLLAR LPAREN RPAREN SEMICOLON COMMA DOT COLON
%token LBRACE RBRACE NEWLINE ERROR
%token CASE DEFAULT

%left DOT
%left OR
%left AND
%right NOT
%left EQ NE LT GT LE GE STREQ STRNE
%left BITOR BITXOR BITAND
%left LSHIFT RSHIFT
%left PLUS MINUS
%left MULT DIV MOD
%right POW
%right UNARY_BITNOT UNARY_BITAND UNARY_MINUS UNARY_PLUS  

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE ELSEIF

%start program

%%

program:
    %empty { stmt_list_result = create_stmt_list(NULL); }
    | program top_level_statement NEWLINE {
        stmt_list_result = add_to_stmt_list(stmt_list_result, $2);
      }
    ;

top_level_statement:
    proc_definition { $$ = $1; }
    | statement     { $$ = $1; }
    ;

statement:
    control_statement { $$ = $1; }
    | assignment      { $$ = $1; }
    | expr SEMICOLON  { $$ = create_expr_stmt($1); }
    | error           { $$ = NULL; }
    ;

assignment:
    SET IDENTIFIER expr { $$ = create_set_stmt($2, $3); }
    ;

expr:
    arithmetic_expr { $$ = $1; }
    | boolean_expr  { $$ = $1; }
    | string_expr   { $$ = $1; }
    | VARIABLE      { $$ = create_variable_expr($1); }
    | COMMAND       { $$ = create_command_expr($1); }
    | brace_expr    { $$ = $1; }
    ;

arithmetic_expr:
    INTEGER { $$ = create_const_int_expr($1); }
    | DOUBLE { $$ = create_const_double_expr($1); }
    | arithmetic_expr PLUS arithmetic_expr { $$ = create_binary_op_expr(OP_PLUS, $1, $3); }
    | arithmetic_expr MINUS arithmetic_expr { $$ = create_binary_op_expr(OP_MINUS, $1, $3); }
    | arithmetic_expr MULT arithmetic_expr { $$ = create_binary_op_expr(OP_MULT, $1, $3); }
    | arithmetic_expr DIV arithmetic_expr { $$ = create_binary_op_expr(OP_DIV, $1, $3); }
    | arithmetic_expr MOD arithmetic_expr { $$ = create_binary_op_expr(OP_MOD, $1, $3); }
    | arithmetic_expr POW arithmetic_expr { $$ = create_binary_op_expr(OP_POW, $1, $3); }
    | MINUS arithmetic_expr %prec UNARY_MINUS { $$ = create_unary_op_expr(OP_MINUS, $2); }
    | PLUS arithmetic_expr %prec UNARY_PLUS { $$ = create_unary_op_expr(OP_PLUS, $2); }
    | BITAND arithmetic_expr %prec UNARY_BITAND { $$ = create_unary_op_expr(OP_BITAND, $2); }
    | BITNOT arithmetic_expr %prec UNARY_BITNOT { $$ = create_unary_op_expr(OP_BITNOT, $2); }
    | arithmetic_expr BITAND arithmetic_expr { $$ = create_binary_op_expr(OP_BITAND, $1, $3); }
    | arithmetic_expr BITOR arithmetic_expr { $$ = create_binary_op_expr(OP_BITOR, $1, $3); }
    | arithmetic_expr BITXOR arithmetic_expr { $$ = create_binary_op_expr(OP_BITXOR, $1, $3); }
    | arithmetic_expr LSHIFT arithmetic_expr { $$ = create_binary_op_expr(OP_LSHIFT, $1, $3); }
    | arithmetic_expr RSHIFT arithmetic_expr { $$ = create_binary_op_expr(OP_RSHIFT, $1, $3); }
    | LPAREN arithmetic_expr RPAREN { $$ = $2; }
    ;

boolean_expr:
    BOOLEAN { $$ = create_const_int_expr($1); }
    | arithmetic_expr EQ arithmetic_expr { $$ = create_binary_op_expr(OP_EQ, $1, $3); }
    | arithmetic_expr NE arithmetic_expr { $$ = create_binary_op_expr(OP_NE, $1, $3); }
    | arithmetic_expr LT arithmetic_expr { $$ = create_binary_op_expr(OP_LT, $1, $3); }
    | arithmetic_expr GT arithmetic_expr { $$ = create_binary_op_expr(OP_GT, $1, $3); }
    | arithmetic_expr LE arithmetic_expr { $$ = create_binary_op_expr(OP_LE, $1, $3); }
    | arithmetic_expr GE arithmetic_expr { $$ = create_binary_op_expr(OP_GE, $1, $3); }
    | string_expr STREQ string_expr { $$ = create_binary_op_expr(OP_STREQ, $1, $3); }
    | string_expr STRNE string_expr { $$ = create_binary_op_expr(OP_STRNE, $1, $3); }
    | boolean_expr AND boolean_expr { $$ = create_binary_op_expr(OP_AND, $1, $3); }
    | boolean_expr OR boolean_expr { $$ = create_binary_op_expr(OP_OR, $1, $3); }
    | NOT boolean_expr { $$ = create_unary_op_expr(OP_NOT, $2); }
    | LPAREN boolean_expr RPAREN { $$ = $2; }
    ;

string_expr:
    STRING { $$ = create_const_string_expr($1); }
    | IDENTIFIER { $$ = create_const_string_expr($1); }
    | BRACED_EXPR { $$ = create_const_string_expr($1); }
    | string_expr DOT string_expr { $$ = create_binary_op_expr(OP_DOT, $1, $3); }
    ;

brace_expr:
    LBRACE expr RBRACE { $$ = $2; }
    | LBRACE RBRACE { $$ = NULL; }
    ;

control_statement:
    if_statement
    | while_statement
    | for_statement
    | foreach_statement
    | return_statement
    | break_statement
    | continue_statement
    ;

if_statement:
    IF boolean_expr block %prec LOWER_THAN_ELSE {
        $$ = create_if_stmt($2, $3, NULL, NULL);
    }
    | IF boolean_expr block ELSE block {
        $$ = create_if_stmt($2, $3, NULL, $5);
    }
    | IF boolean_expr block elsif_list {
        $$ = create_if_stmt($2, $3, $4, NULL);
    }
    | IF boolean_expr block elsif_list ELSE block {
        $$ = create_if_stmt($2, $3, $4, $6);
    }
    ;

elsif_list:
    ELSEIF boolean_expr block { $$ = create_elsif_list($2, $3); }
    | elsif_list ELSEIF boolean_expr block { $$ = add_to_elsif_list($1, $3, $4); }
    ;

while_statement:
    WHILE boolean_expr block {
        $$ = create_while_stmt($2, $3);
    }
    ;

for_statement:
    FOR BRACED_EXPR BRACED_EXPR BRACED_EXPR block {
        expr_struct* init = create_const_string_expr($2);
        expr_struct* cond = create_const_string_expr($3);
        expr_struct* incr = create_const_string_expr($4);
        $$ = create_for_stmt(init, cond, incr, $5);
    }
    ;

foreach_statement:
    FOREACH VARIABLE IN VARIABLE block {
        $$ = create_foreach_stmt($2, $4, $5);
    }
    ;

proc_definition:
    PROC IDENTIFIER LPAREN RPAREN block {
        $$ = create_proc_stmt($2, NULL, $5);
    }
    | PROC IDENTIFIER LPAREN parameter_list RPAREN block {
        $$ = create_proc_stmt($2, $4, $6);
    }
    ;

parameter_list:
    IDENTIFIER { $$ = create_param_list($1); }
    | parameter_list COMMA IDENTIFIER { $$ = add_to_param_list($1, $3); }
    ;

return_statement:
    RETURN expr { $$ = create_return_stmt($2); }
    | RETURN { $$ = create_return_stmt(NULL); }
    ;

break_statement:
    BREAK { $$ = create_break_stmt(); }
    ;

continue_statement:
    CONTINUE { $$ = create_continue_stmt(); }
    ;

block:
    LBRACE block_body RBRACE { $$ = $2; }
    ;

block_body:
    %empty { $$ = create_stmt_list(NULL); }
    | block_body statement NEWLINE { $$ = add_to_stmt_list($1, $2); }
    ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Parse error at line %d: %s\n", yylineno, s);
    if (yytext) {
        fprintf(stderr, "Near token: %s\n", yytext);
    }
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        FILE* input = fopen(argv[1], "r");
        if (!input) {
            fprintf(stderr, "Cannot open file: %s\n", argv[1]);
            return 1;
        }
        yyin = input;
    }
    
    printf("Starting TCL parser with AST...\n");
    int result = yyparse();
    
    if (result == 0) {
        program_root = create_program(stmt_list_result);
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }
    
    return result;
}