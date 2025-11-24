%option noyywrap
%option never-interactive
%option yylineno

%{
#define YY_NO_UNISTD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utils.h"
#include "parser.tab.h"

void remove_underscores(char* str);

/* Глобальные переменные состояния для строк */
char string_buffer[1000];
int brace_count = 0;
%}

DIGIT       [0-9]
HEX_DIGIT   [0-9A-Fa-f]
OCT_DIGIT   [0-7]
BIN_DIGIT   [01]
ID          [a-zA-Z_][a-zA-Z0-9_]*
WHITESPACE  [ \t\r]

%x DOUBLE_QUOTES BRACES BRACKETS

%%

{WHITESPACE}+   { /* Skip whitespace */ }
\n              { return NEWLINE; }
#.*             { /* Skip comments */ }

"if"            { return IF; }
"else"          { return ELSE; }
"elseif"        { return ELSEIF; }
"while"         { return WHILE; }
"for"           { return FOR; }
"foreach"       { return FOREACH; }
"proc"          { return PROC; }
"return"        { return RETURN; }
"set"           { return SET; }
"expr"          { return EXPR; }
"switch"        { return SWITCH; }
"break"         { return BREAK; }
"continue"      { return CONTINUE; }
"in"            { return IN; }

"true"          { yylval.int_val = 1; return BOOLEAN; }
"false"         { yylval.int_val = 0; return BOOLEAN; }
"yes"           { yylval.int_val = 1; return BOOLEAN; }
"no"            { yylval.int_val = 0; return BOOLEAN; }
"on"            { yylval.int_val = 1; return BOOLEAN; }
"off"           { yylval.int_val = 0; return BOOLEAN; }

"abs"           { return FUNC_ABS; }
"sin"           { return FUNC_SIN; }
"cos"           { return FUNC_COS; }
"tan"           { return FUNC_TAN; }
"exp"           { return FUNC_EXP; }
"log"           { return FUNC_LOG; }
"sqrt"          { return FUNC_SQRT; }
"rand"          { return FUNC_RAND; }
"int"           { return FUNC_INT; }
"double"        { return FUNC_DOUBLE; }
"round"         { return FUNC_ROUND; }

"=="            { return EQ; }
"!="            { return NE; }
"<"             { return LT; }
">"             { return GT; }
"<="            { return LE; }
">="            { return GE; }
"eq"            { return STREQ; }
"ne"            { return STRNE; }

"&&"            { return AND; }
"||"            { return OR; }
"!"             { return NOT; }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULT; }
"/"             { return DIV; }
"%"             { return MOD; }
"**"            { return POW; }

"&"             { return BITAND; }
"|"             { return BITOR; }
"^"             { return BITXOR; }
"~"             { return BITNOT; }
"<<"            { return LSHIFT; }
">>"            { return RSHIFT; }

"="             { return ASSIGN; }
"$"             { return DOLLAR; }
"("             { return LPAREN; }
")"             { return RPAREN; }
";"             { return SEMICOLON; }
","             { return COMMA; }
"."             { return DOT; }
":"             { return COLON; }

"{"             { 
    string_buffer[0] = '\0';
    brace_count = 1;
    BEGIN(BRACES);
}
"}"             { 
    /* Одиночная закрывающая скобка - ошибка в обычном режиме */
    fprintf(stderr, "ERROR: Unexpected '}'\n");
    return ERROR;
}

0[bB]{BIN_DIGIT}+(_?{BIN_DIGIT}+)* {
    char temp[100];
    strcpy(temp, yytext + 2);
    remove_underscores(temp);
    yylval.int_val = strtol(temp, NULL, 2);
    return INTEGER;
}

0[oO]?{OCT_DIGIT}+(_?{OCT_DIGIT}+)* {
    char temp[100];
    char* start = yytext;
    if (yytext[1] == 'o' || yytext[1] == 'O') {
        start += 2;
    } else {
        start += 1;
    }
    strcpy(temp, start);
    remove_underscores(temp);
    yylval.int_val = strtol(temp, NULL, 8);
    return INTEGER;
}

0[xX]{HEX_DIGIT}+(_?{HEX_DIGIT}+)* {
    char temp[100];
    strcpy(temp, yytext + 2);
    remove_underscores(temp);
    yylval.int_val = strtol(temp, NULL, 16);
    return INTEGER;
}

{DIGIT}+\.{DIGIT}*([eE][+-]?{DIGIT}+)? {
    char temp[100];
    strcpy(temp, yytext);
    remove_underscores(temp);
    yylval.double_val = atof(temp);
    return DOUBLE;
}

{DIGIT}+[eE][+-]?{DIGIT}+ {
    char temp[100];
    strcpy(temp, yytext);
    remove_underscores(temp);
    yylval.double_val = atof(temp);
    return DOUBLE;
}

{DIGIT}+(_?{DIGIT}+)* {
    char temp[100];
    strcpy(temp, yytext);
    remove_underscores(temp);
    yylval.int_val = atoi(temp);
    return INTEGER;
}

"inf"|"Inf"|"INF" { yylval.double_val = get_infinity(); return DOUBLE; }
"nan"|"NaN"|"NAN" { yylval.double_val = get_nan(); return DOUBLE; }

\" {
    string_buffer[0] = '\0';
    BEGIN(DOUBLE_QUOTES);
}

<DOUBLE_QUOTES>[^"\\]+ {
    strcat(string_buffer, yytext);
}

<DOUBLE_QUOTES>\\. {
    switch(yytext[1]) {
        case 'n': strcat(string_buffer, "\n"); break;
        case 't': strcat(string_buffer, "\t"); break;
        case 'r': strcat(string_buffer, "\r"); break;
        case '\\': strcat(string_buffer, "\\"); break;
        case '"': strcat(string_buffer, "\""); break;
        default: strcat(string_buffer, yytext); break;
    }
}

<DOUBLE_QUOTES>\" {
    yylval.string_val = strdup(string_buffer);
    BEGIN(INITIAL);
    return STRING;
}

<DOUBLE_QUOTES><<EOF>> {
    fprintf(stderr, "ERROR: Unclosed double-quoted string\n");
    BEGIN(INITIAL);
    return ERROR;
}

<BRACES>[^{}]+ {
    strcat(string_buffer, yytext);
}

<BRACES>"{" {
    brace_count++;
    strcat(string_buffer, "{");
}

<BRACES>"}" {
    brace_count--;
    if (brace_count == 0) {
        yylval.string_val = strdup(string_buffer);
        BEGIN(INITIAL);
        return STRING;
    } else {
        strcat(string_buffer, "}");
    }
}

<BRACES><<EOF>> {
    fprintf(stderr, "ERROR: Unclosed braced string\n");
    BEGIN(INITIAL);
    return ERROR;
}

\[ {
    string_buffer[0] = '\0';
    BEGIN(BRACKETS);
}

<BRACKETS>[^\[\]]+ {
    strcat(string_buffer, yytext);
}

<BRACKETS>"[" {
    strcat(string_buffer, "[");
}

<BRACKETS>"]" {
    yylval.string_val = strdup(string_buffer);
    BEGIN(INITIAL);
    return COMMAND;
}

<BRACKETS><<EOF>> {
    fprintf(stderr, "ERROR: Unclosed command bracket\n");
    BEGIN(INITIAL);
    return ERROR;
}

\$[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.string_val = strdup(yytext + 1);
    return VARIABLE;
}

\$\{[^}]+\} {
    int len = strlen(yytext) - 3;
    char* var_name = malloc(len + 1);
    strncpy(var_name, yytext + 2, len);
    var_name[len] = '\0';
    yylval.string_val = var_name;
    return VARIABLE;
}

{ID} {
    yylval.string_val = strdup(yytext);
    return IDENTIFIER;
}

. {
    fprintf(stderr, "ERROR: Invalid character '%c'\n", yytext[0]);
    return ERROR;
}

%%

void remove_underscores(char* str) {
    char* src = str;
    char* dst = str;
    while (*src) {
        if (*src != '_') {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}