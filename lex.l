%option noyywrap
%option yylineno

%{
#define YY_NO_UNISTD_H
#include "tree_nodes.h"
#include "utils.h"
#include "parser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int in_control_context;
void remove_underscores(char* str);
int is_valid_number_format(const char* s);

%}

DIGIT       [0-9]
HEX_DIGIT   [0-9A-Fa-f]
OCT_DIGIT   [0-7]
BIN_DIGIT   [01]
ID          [a-zA-Z_][a-zA-Z0-9_]*
WHITESPACE  [ \t\r]

%x DOUBLE_QUOTES BRACED_STRING BRACKETS CONTROL_BRACE

%%
%{

int brace_count = 0;
int control_brace_count = 0;
char string_buffer[1024];

%}

{WHITESPACE}+   { /* skip whitespace */ }
\n              { return NEWLINE; }
#.* { printf("Comment: %s\n", yytext + 1); }


"if"            { in_control_context = 1; return IF; }
"else"          { return ELSE; }
"elseif"        { in_control_context = 1; return ELSEIF; }
"while"         { in_control_context = 1; return WHILE; }
"for"           { in_control_context = 1; return FOR; }
"foreach"       { in_control_context = 1; return FOREACH; }
"proc"          { return PROC; }
"return"        { return RETURN; }
"set"           { return SET; }
"expr"          { in_control_context = 1; return EXPR; }
"switch"        { in_control_context = 1; return SWITCH; }
"break"         { return BREAK; }
"continue"      { return CONTINUE; }
"in"            { return IN; }

"true"          { yylval.int_val = 1; return BOOLEAN; }
"false"         { yylval.int_val = 0; return BOOLEAN; }
"yes"           { yylval.int_val = 1; return BOOLEAN; }
"no"            { yylval.int_val = 0; return BOOLEAN; }
"on"            { yylval.int_val = 1; return BOOLEAN; }
"off"           { yylval.int_val = 0; return BOOLEAN; }

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

{DIGIT}(_?{DIGIT})* {
    if (!is_valid_number_format(yytext)) {
        fprintf(stderr, "ERROR: invalid decimal number: %s\n", yytext);
        return ERROR;
    }
    char temp[256];
    strcpy(temp, yytext);
    remove_underscores(temp);
    yylval.int_val = atoi(temp);
    return INTEGER;
}

0[bB]{BIN_DIGIT}(_?{BIN_DIGIT})* {
    if (!is_valid_number_format(yytext + 2)) {
        fprintf(stderr, "ERROR: invalid binary number: %s\n", yytext);
        return ERROR;
    }
    char temp[256];
    strcpy(temp, yytext + 2);
    remove_underscores(temp);
    yylval.int_val = strtol(temp, NULL, 2);
    return INTEGER;
}

0[oO]{OCT_DIGIT}(_?{OCT_DIGIT})* {
    if (!is_valid_number_format(yytext + 2)) {
        fprintf(stderr, "ERROR: invalid octal number (0o/0O): %s\n", yytext);
        return ERROR;
    }
    char temp[256];
    strcpy(temp, yytext + 2);
    remove_underscores(temp);
    yylval.int_val = strtol(temp, NULL, 8);
    return INTEGER;
}

0[xX]{HEX_DIGIT}(_?{HEX_DIGIT})* {
    if (!is_valid_number_format(yytext + 2)) {
        fprintf(stderr, "ERROR: invalid hex number: %s\n", yytext);
        return ERROR;
    }
    char temp[256];
    strcpy(temp, yytext + 2);
    remove_underscores(temp);
    yylval.int_val = strtol(temp, NULL, 16);
    return INTEGER;
}

{DIGIT}(_?{DIGIT})*\.{DIGIT}(_?{DIGIT})* {
    if (!is_valid_number_format(yytext)) {
        fprintf(stderr, "ERROR: invalid float number: %s\n", yytext);
        return ERROR;
    }
    char temp[256];
    strcpy(temp, yytext);
    remove_underscores(temp);
    yylval.double_val = atof(temp);
    return DOUBLE;
}

{DIGIT}(_?{DIGIT})*(\.{DIGIT}(_?{DIGIT})*)?[eE][+-]?{DIGIT}(_?{DIGIT})* {
    if (!is_valid_number_format(yytext)) {
        fprintf(stderr, "ERROR: invalid float with exponent: %s\n", yytext);
        return ERROR;
    }
    char temp[256];
    strcpy(temp, yytext);
    remove_underscores(temp);
    yylval.double_val = atof(temp);
    return DOUBLE;
}

"inf"|"Inf"|"INF" { yylval.double_val = get_infinity(); return DOUBLE; }
"nan"|"NaN"|"NAN" { yylval.double_val = get_nan(); return DOUBLE; }

"{" {
    if (in_control_context) {
        // В управляющих конструкциях обрабатываем отдельно
        control_brace_count = 1;
        string_buffer[0] = '\0';
        BEGIN(CONTROL_BRACE);
    } else {
        // Обычная braced-строка
        string_buffer[0] = '\0';
        brace_count = 1;
        BEGIN(BRACED_STRING);
    }
}

"}" {
    if (in_control_context) {
        // Только для закрытия блока кода
        in_control_context = 0;
        return RBRACE;
    } else {
        fprintf(stderr, "ERROR: unexpected '}'\n");
        return ERROR;
    }
}

\" {
    string_buffer[0] = '\0';
    BEGIN(DOUBLE_QUOTES);
}


<DOUBLE_QUOTES>[^"\\$]+ {
    strcat(string_buffer, yytext);
}

<DOUBLE_QUOTES>\\. {
    switch(yytext[1]) {
        case 'n': strcat(string_buffer, "\n"); break;
        case 't': strcat(string_buffer, "\t"); break;
        case 'r': strcat(string_buffer, "\r"); break;
        case '\\': strcat(string_buffer, "\\"); break;
        case '"': strcat(string_buffer, "\""); break;
        case 'u': {
            if (strlen(yytext) >= 6) {
                char hex[5];
                strncpy(hex, &yytext[2], 4);
                hex[4] = '0';
                wchar_t unicode_char = (wchar_t)strtol(hex, NULL, 16);
                char mb_char[4];
                int len = wctomb(mb_char, unicode_char);
                if (len > 0) {
                    mb_char[len] = '0';
                    strcat(string_buffer, mb_char);
                }
            }
            break;
        }
        default: strcat(string_buffer, yytext); break;
    }
}

<DOUBLE_QUOTES>\$[a-zA-Z_][a-zA-Z0-9_]* {
    strcat(string_buffer, yytext);
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

<BRACED_STRING>[^{}]+ {
    strcat(string_buffer, yytext);
}

<BRACED_STRING>"{" {
    brace_count++;
    strcat(string_buffer, "{");
}

<BRACED_STRING>"}" {
    brace_count--;
    if (brace_count == 0) {
        yylval.string_val = strdup(string_buffer);
        BEGIN(INITIAL);
        return STRING;
    } else {
        strcat(string_buffer, "}");
    }
}

<BRACED_STRING><<EOF>> {
    fprintf(stderr, "ERROR: Unclosed braced string\n");
    BEGIN(INITIAL);
    return ERROR;
}

<CONTROL_BRACE>[^{}]+ {
    strcat(string_buffer, yytext);
}

<CONTROL_BRACE>"{" {
    control_brace_count++;
    strcat(string_buffer, "{");
}

<CONTROL_BRACE>"}" {
    control_brace_count--;
    if (control_brace_count == 0) {
        yylval.string_val = strdup(string_buffer);
        BEGIN(INITIAL);
        return BRACED_EXPR;  // Новый токен для выражений в фигурных скобках
    } else {
        strcat(string_buffer, "}");
    }
}

<CONTROL_BRACE><<EOF>> {
    fprintf(stderr, "ERROR: Unclosed control brace\n");
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

int in_control_context = 0;

void set_control_context(int ctx) {
    in_control_context = ctx;
}

int is_valid_number_format(const char* s) {
    int len = strlen(s);
    if (len == 0) return 0;
    if (s[0] == '_' || s[len-1] == '_') return 0;
    if (strstr(s, "__")) return 0;
    return 1;
}