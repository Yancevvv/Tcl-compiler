%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern int yylineno;
extern char* yytext;

// Для передачи контекста лексеру
extern void set_control_context(int in_control);

void yyerror(const char* s);
%}

%union {
    int int_val;
    double double_val;
    char* string_val;
}

/* Токены с типами */
%token <int_val> INTEGER BOOLEAN
%token <double_val> DOUBLE
%token <string_val> STRING COMMAND VARIABLE IDENTIFIER

%token IF ELSE ELSEIF WHILE FOR FOREACH PROC RETURN SET EXPR SWITCH BREAK CONTINUE IN
%token FUNC_ABS FUNC_SIN FUNC_COS FUNC_TAN FUNC_EXP FUNC_LOG FUNC_SQRT FUNC_RAND FUNC_INT FUNC_DOUBLE FUNC_ROUND

%token EQ NE LT GT LE GE STREQ STRNE
%token AND OR NOT
%token PLUS MINUS MULT DIV MOD POW
%token BITAND BITOR BITXOR BITNOT LSHIFT RSHIFT
%token ASSIGN DOLLAR LPAREN RPAREN SEMICOLON COMMA DOT COLON
%token LBRACE RBRACE NEWLINE ERROR

%token CASE DEFAULT

/* Типы для нетерминалов */
%type <int_val> boolean_expr
%type <double_val> arithmetic_expr
%type <string_val> string_expr
%type <string_val> block

%left OR
%left AND
%left PLUS MINUS
%left MULT DIV
%right POW
%right UNARY_MINUS

%start program

%%

program:
    %empty
    | program statement NEWLINE
    ;

statement:
    control_statement
    | assignment
    | expression
    | error
    ;

assignment:
    SET IDENTIFIER expression { printf("Assign: %s = expr\n", $2); free($2); }
    ;

expression:
    arithmetic_expr
    | boolean_expr
    | string_expr
    | VARIABLE { printf("Variable: %s\n", $1); free($1); }
    | COMMAND { printf("Command: %s\n", $1); free($1); }
    ;

arithmetic_expr:
    INTEGER { $$ = $1; }
    | DOUBLE { $$ = $1; }
    | arithmetic_expr PLUS arithmetic_expr { $$ = $1 + $3; }
    | arithmetic_expr MINUS arithmetic_expr { $$ = $1 - $3; }
    | arithmetic_expr MULT arithmetic_expr { $$ = $1 * $3; }
    | arithmetic_expr DIV arithmetic_expr { 
        if ($3 == 0.0) {
            yyerror("Division by zero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
    }
    | MINUS arithmetic_expr %prec UNARY_MINUS { $$ = -$2; }
    | LPAREN arithmetic_expr RPAREN { $$ = $2; }
    ;

boolean_expr:
    BOOLEAN { $$ = $1; }
    | arithmetic_expr EQ arithmetic_expr { $$ = $1 == $3; }
    | arithmetic_expr NE arithmetic_expr { $$ = $1 != $3; }
    | arithmetic_expr LT arithmetic_expr { $$ = $1 < $3; }
    | arithmetic_expr GT arithmetic_expr { $$ = $1 > $3; }
    | arithmetic_expr LE arithmetic_expr { $$ = $1 <= $3; }
    | arithmetic_expr GE arithmetic_expr { $$ = $1 >= $3; }
    | string_expr STREQ string_expr { $$ = strcmp($1, $3) == 0; }
    | string_expr STRNE string_expr { $$ = strcmp($1, $3) != 0; }
    | boolean_expr AND boolean_expr { $$ = $1 && $3; }
    | boolean_expr OR boolean_expr { $$ = $1 || $3; }
    | NOT boolean_expr { $$ = !$2; }
    | LPAREN boolean_expr RPAREN { $$ = $2; }
    ;

string_expr:
    STRING { $$ = $1; }
    | IDENTIFIER { $$ = $1; }
    | string_expr DOT string_expr {
        char* result = malloc(strlen($1) + strlen($3) + 1);
        strcpy(result, $1);
        strcat(result, $3);
        free($1);
        free($3);
        $$ = result;
    }
    ;

control_statement:
    if_statement
    | while_statement
    | for_statement
    | proc_definition
    | return_statement
    | break_statement
    | continue_statement
    ;

if_statement:
    IF boolean_expr block { printf("If statement\n"); }
    | IF boolean_expr block ELSE block { printf("If-Else statement\n"); }
    | IF boolean_expr block ELSEIF boolean_expr block { printf("If-ElseIf statement\n"); }
    ;

while_statement:
    WHILE boolean_expr block { printf("While loop\n"); }
    ;

for_statement:
    FOR LPAREN assignment SEMICOLON boolean_expr SEMICOLON assignment RPAREN block { printf("For loop\n"); }
    ;

foreach_statement:
    FOREACH VARIABLE IN VARIABLE block { printf("Foreach loop\n"); free($2); free($4); }
    ;

proc_definition:
    PROC IDENTIFIER LPAREN RPAREN block { printf("Procedure: %s\n", $2); free($2); }
    | PROC IDENTIFIER LPAREN parameter_list RPAREN block { printf("Procedure with params: %s\n", $2); free($2); }
    ;

parameter_list:
    IDENTIFIER { free($1); }
    | parameter_list COMMA IDENTIFIER { free($3); }
    ;

return_statement:
    RETURN expression { printf("Return with value\n"); }
    | RETURN { printf("Return void\n"); }
    ;

break_statement:
    BREAK { printf("Break\n"); }
    ;

continue_statement:
    CONTINUE { printf("Continue\n"); }
    ;

block:
    LBRACE { set_control_context(1); } program RBRACE { set_control_context(0); $$ = "block"; }
    | STRING { $$ = $1; }  /* для обратной совместимости */
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
    
    printf("Starting TCL parser...\n");
    int result = yyparse();
    printf("Parsing completed.\n");
    
    return result;
}