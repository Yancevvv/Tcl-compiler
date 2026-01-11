#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tree_nodes.h"
#include "parser.tab.h"

double get_infinity(void);
double get_nan(void);
int is_infinity(double x);
int is_nan(double x);

extern int yylineno;

int yylex(void);


const char* get_token_name(int token) {
    switch (token) {
        case IF: return "IF";
        case ELSE: return "ELSE";
        case ELSEIF: return "ELSEIF";
        case WHILE: return "WHILE";
        case FOR: return "FOR";
        case FOREACH: return "FOREACH";
        case PROC: return "PROC";
        case RETURN: return "RETURN";
        case SET: return "SET";
        case EXPR: return "EXPR";
        case SWITCH: return "SWITCH";
        case BREAK: return "BREAK";
        case CONTINUE: return "CONTINUE";
        
        case BOOLEAN: return "BOOLEAN";
        
        case EQ: return "EQ";
        case NE: return "NE";
        case LT: return "LT";
        case GT: return "GT";
        case LE: return "LE";
        case GE: return "GE";
        case STREQ: return "STREQ";
        case STRNE: return "STRNE";
        
        case AND: return "AND";
        case OR: return "OR";
        case NOT: return "NOT";
        
        case PLUS: return "PLUS";
        case MINUS: return "MINUS";
        case MULT: return "MULT";
        case DIV: return "DIV";
        case MOD: return "MOD";
        case POW: return "POW";
        
        case BITAND: return "BITAND";
        case BITOR: return "BITOR";
        case BITXOR: return "BITXOR";
        case BITNOT: return "BITNOT";
        case LSHIFT: return "LSHIFT";
        case RSHIFT: return "RSHIFT";
        
        case ASSIGN: return "ASSIGN";
        case DOLLAR: return "DOLLAR";
        case LPAREN: return "LPAREN";
        case RPAREN: return "RPAREN";
        case SEMICOLON: return "SEMICOLON";
        case COMMA: return "COMMA";
        case DOT: return "DOT";
        case COLON: return "COLON";
        case LBRACE: return "LBRACE";
        case RBRACE: return "RBRACE";
        case IN: return "IN";
        case CASE: return "CASE";
        case DEFAULT: return "DEFAULT";
        case BRACED_EXPR: return "BRACED_EXPR"; 
        
        case INTEGER: return "INTEGER";
        case DOUBLE: return "DOUBLE";
        case STRING: return "STRING";
        case COMMAND: return "COMMAND";
        case VARIABLE: return "VARIABLE";
        case IDENTIFIER: return "IDENTIFIER";
        
        case NEWLINE: return "NEWLINE";
        case ERROR: return "ERROR";
        
        default:
            if (token >= 32 && token <= 126) {
                static char char_token[2] = {0, 0};
                char_token[0] = (char)token;
                return char_token;
            }
            return "UNKNOWN";
    }
}

int main(int argc, char* argv[]) {
    printf("=== TCL Lexer (using parser.tab.h) ===\n");
    
    FILE* input_file = NULL;
    
    if (argc > 1) {
        input_file = fopen(argv[1], "r");
        if (input_file) {
            printf("Reading from file: %s\n\n", argv[1]);
            freopen(argv[1], "r", stdin);
        } else {
            fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
            return 1;
        }
    } else {
        printf("Enter TCL code (Ctrl+Z + Enter to finish):\n\n");
    }
    
    int token;
    int token_count = 0;
    
    while ((token = yylex()) != 0) {
        printf("Token %d: %s (code=%d)", ++token_count, get_token_name(token), token);
        
        switch (token) {
            case INTEGER:
                printf(", val=%d", yylval.int_val);
                break;
            case DOUBLE:
                if (is_infinity(yylval.double_val))
                    printf(", val=Inf");
                else if (is_nan(yylval.double_val))
                    printf(", val=NaN");
                else
                    printf(", val=%f", yylval.double_val);
                break;
            case BOOLEAN:
                printf(", val=%s", yylval.int_val ? "true" : "false");
                break;
            case STRING:
            case COMMAND:
            case VARIABLE:
            case IDENTIFIER:
            case BRACED_EXPR: 
                if (yylval.string_val) {
                    printf(", val=\"%s\"", yylval.string_val);
                }
                break;
        }
        
        printf("\n");
    }
    
    printf("\nTotal: %d tokens\n", token_count);
    
    if (input_file) {
        fclose(input_file);
    }
    
    return 0;
}