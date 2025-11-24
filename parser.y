%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern int yylex(void);
extern int yylineno;
extern char* yytext;
extern FILE* yyin;

void yyerror(const char* s);
int yyparse(void);
%}

%union {
    int int_val;
    double double_val;
    char* string_val;
}

/* === ОБЪЯВЛЕНИЕ ТОКЕНОВ === */
%token NEWLINE IF ELSE ELSEIF WHILE FOR FOREACH PROC RETURN SET EXPR SWITCH BREAK CONTINUE
%token FUNC_ABS FUNC_SIN FUNC_COS FUNC_TAN FUNC_EXP FUNC_LOG FUNC_SQRT FUNC_RAND FUNC_INT FUNC_DOUBLE FUNC_ROUND
%token EQ NE LT GT LE GE STREQ STRNE
%token AND OR NOT
%token PLUS MINUS MULT DIV MOD POW
%token BITAND BITOR BITXOR BITNOT LSHIFT RSHIFT
%token ASSIGN DOLLAR
%token LPAREN RPAREN SEMICOLON COMMA DOT COLON LBRACE RBRACE

/* Недостающие токены */
%token IN
%token CASE DEFAULT

/* Литералы */
%token <int_val> INTEGER
%token <int_val> BOOLEAN
%token <double_val> DOUBLE
%token <string_val> STRING
%token <string_val> COMMAND
%token <string_val> VARIABLE
%token <string_val> IDENTIFIER
%token ERROR

/* Ассоциативность и приоритет */
%left OR
%left AND
%left BITOR
%left BITXOR
%left BITAND
%left EQ NE STREQ STRNE
%left LT GT LE GE
%left LSHIFT RSHIFT
%left PLUS MINUS
%left MULT DIV MOD
%right POW
%right UNARY_MINUS NOT BITNOT
%left DOT

/* Типы нетерминалов */
%type <int_val> boolean_expr
%type <double_val> arithmetic_expr
%type <string_val> string_expr command_expr variable identifier
%type <double_val> function_call
%type <string_val> block
%type <string_val> primary_expr

%start program

%%

program:
    /* empty */
    | program line
    ;

line:
    statement NEWLINE
    | NEWLINE
    | error NEWLINE
    ;

statement:
    expression
    | control_statement
    | assignment_statement
    ;

assignment_statement:
    SET variable expression { printf("Assignment: %s = ...\n", $2); free($2); }
    | EXPR variable ASSIGN expression { printf("Expr assignment: %s = ...\n", $2); free($2); }
    ;

expression:
    arithmetic_expr
    | boolean_expr
    | string_expr
    | command_expr
    ;

/* Убираем неоднозначность - variable только в primary_expr */
primary_expr:
    STRING     { $$ = $1; }
    | VARIABLE { $$ = $1; }
    | COMMAND  { $$ = $1; }
    | DOLLAR identifier { $$ = $2; }
    | LPAREN expression RPAREN { 
        /* Обработка выражения в скобках - временное решение */
        if ($$) free($$);
        $$ = strdup("parenthesized_expr"); 
    }
    ;

arithmetic_expr:
    INTEGER                { $$ = $1; }
    | DOUBLE               { $$ = $1; }
    | primary_expr         { $$ = 0; /* временно - нужно lookup переменной */ }
    | arithmetic_expr PLUS arithmetic_expr    { $$ = $1 + $3; }
    | arithmetic_expr MINUS arithmetic_expr   { $$ = $1 - $3; }
    | arithmetic_expr MULT arithmetic_expr    { $$ = $1 * $3; }
    | arithmetic_expr DIV arithmetic_expr     { 
        if ($3 == 0.0) {
            yyerror("Division by zero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
    }
    | arithmetic_expr MOD arithmetic_expr     { $$ = fmod($1, $3); }
    | arithmetic_expr POW arithmetic_expr     { $$ = pow($1, $3); }
    | MINUS arithmetic_expr %prec UNARY_MINUS { $$ = -$2; }
    | function_call                          { $$ = $1; }
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
    | boolean_expr OR boolean_expr  { $$ = $1 || $3; }
    | NOT boolean_expr              { $$ = !$2; }
    ;

string_expr:
    primary_expr { $$ = $1; }
    | string_expr DOT string_expr {
        char* result = malloc(strlen($1) + strlen($3) + 1);
        strcpy(result, $1);
        strcat(result, $3);
        free($1);
        free($3);
        $$ = result;
    }
    ;

command_expr:
    COMMAND { $$ = $1; }
    ;

variable:
    VARIABLE { $$ = $1; }
    | DOLLAR identifier { $$ = $2; }
    ;

identifier:
    IDENTIFIER { $$ = $1; }
    ;

function_call:
    FUNC_ABS LPAREN arithmetic_expr RPAREN { $$ = fabs($3); }
    | FUNC_SIN LPAREN arithmetic_expr RPAREN { $$ = sin($3); }
    | FUNC_COS LPAREN arithmetic_expr RPAREN { $$ = cos($3); }
    | FUNC_TAN LPAREN arithmetic_expr RPAREN { $$ = tan($3); }
    | FUNC_EXP LPAREN arithmetic_expr RPAREN { $$ = exp($3); }
    | FUNC_LOG LPAREN arithmetic_expr RPAREN { $$ = log($3); }
    | FUNC_SQRT LPAREN arithmetic_expr RPAREN { $$ = sqrt($3); }
    | FUNC_RAND LPAREN RPAREN { $$ = (double)rand() / RAND_MAX; }
    | FUNC_INT LPAREN arithmetic_expr RPAREN { $$ = (double)((int)$3); }
    | FUNC_DOUBLE LPAREN arithmetic_expr RPAREN { $$ = (double)$3; }
    | FUNC_ROUND LPAREN arithmetic_expr RPAREN { $$ = round($3); }
    ;

control_statement:
    if_statement
    | while_statement
    | for_statement
    | foreach_statement
    | switch_statement
    | return_statement
    | break_statement
    | continue_statement
    ;

if_statement:
    IF boolean_expr block { printf("If statement\n"); }
    | IF boolean_expr block ELSE block { printf("If-else statement\n"); }
    | IF boolean_expr block else_if_list ELSE block { printf("If-elseif-else statement\n"); }
    | IF boolean_expr block else_if_list { printf("If-elseif statement\n"); }
    ;

else_if_list:
    ELSEIF boolean_expr block
    | else_if_list ELSEIF boolean_expr block
    ;

while_statement:
    WHILE boolean_expr block { printf("While loop\n"); }
    ;

for_statement:
    FOR LPAREN assignment_statement SEMICOLON boolean_expr SEMICOLON assignment_statement RPAREN block 
    { printf("For loop\n"); }
    ;

foreach_statement:
    FOREACH variable IN variable block { printf("Foreach loop\n"); }
    ;

switch_statement:
    SWITCH expression LBRACE case_list RBRACE { printf("Switch statement\n"); }
    | SWITCH expression LBRACE case_list default_case RBRACE { printf("Switch with default\n"); }
    | SWITCH expression block { printf("Simple switch\n"); }
    ;

case_list:
    /* empty */
    | case_list CASE expression COLON block
    ;

default_case:
    DEFAULT COLON block
    ;

return_statement:
    RETURN expression { printf("Return: "); 
        if (yylval.string_val) printf("%s\n", yylval.string_val);
        else printf("%f\n", yylval.double_val);
    }
    | RETURN { printf("Return void\n"); }
    ;

break_statement:
    BREAK { printf("Break\n"); }
    ;

continue_statement:
    CONTINUE { printf("Continue\n"); }
    ;

block:
    LBRACE program RBRACE { $$ = "block"; }
    | STRING { $$ = $1; }
    ;

%%

void yyerror(const char* s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
    if (yytext) {
        fprintf(stderr, "Near token: %s\n", yytext);
    }
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Cannot open file: %s\n", argv[1]);
            return 1;
        }
    }
    
    printf("Starting TCL parser...\n");
    int result = yyparse();
    printf("Parsing completed with result: %d\n", result);
    
    if (yyin != stdin) {
        fclose(yyin);
    }
    
    return result;
}