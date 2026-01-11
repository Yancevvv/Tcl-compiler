/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER = 258,                 /* INTEGER  */
    BOOLEAN = 259,                 /* BOOLEAN  */
    DOUBLE = 260,                  /* DOUBLE  */
    STRING = 261,                  /* STRING  */
    COMMAND = 262,                 /* COMMAND  */
    VARIABLE = 263,                /* VARIABLE  */
    IDENTIFIER = 264,              /* IDENTIFIER  */
    BRACED_EXPR = 265,             /* BRACED_EXPR  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    ELSEIF = 268,                  /* ELSEIF  */
    WHILE = 269,                   /* WHILE  */
    FOR = 270,                     /* FOR  */
    FOREACH = 271,                 /* FOREACH  */
    PROC = 272,                    /* PROC  */
    RETURN = 273,                  /* RETURN  */
    SET = 274,                     /* SET  */
    EXPR = 275,                    /* EXPR  */
    SWITCH = 276,                  /* SWITCH  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    IN = 279,                      /* IN  */
    EQ = 280,                      /* EQ  */
    NE = 281,                      /* NE  */
    LT = 282,                      /* LT  */
    GT = 283,                      /* GT  */
    LE = 284,                      /* LE  */
    GE = 285,                      /* GE  */
    STREQ = 286,                   /* STREQ  */
    STRNE = 287,                   /* STRNE  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    NOT = 290,                     /* NOT  */
    PLUS = 291,                    /* PLUS  */
    MINUS = 292,                   /* MINUS  */
    MULT = 293,                    /* MULT  */
    DIV = 294,                     /* DIV  */
    MOD = 295,                     /* MOD  */
    POW = 296,                     /* POW  */
    BITAND = 297,                  /* BITAND  */
    BITOR = 298,                   /* BITOR  */
    BITXOR = 299,                  /* BITXOR  */
    BITNOT = 300,                  /* BITNOT  */
    LSHIFT = 301,                  /* LSHIFT  */
    RSHIFT = 302,                  /* RSHIFT  */
    ASSIGN = 303,                  /* ASSIGN  */
    DOLLAR = 304,                  /* DOLLAR  */
    LPAREN = 305,                  /* LPAREN  */
    RPAREN = 306,                  /* RPAREN  */
    SEMICOLON = 307,               /* SEMICOLON  */
    COMMA = 308,                   /* COMMA  */
    DOT = 309,                     /* DOT  */
    COLON = 310,                   /* COLON  */
    LBRACE = 311,                  /* LBRACE  */
    RBRACE = 312,                  /* RBRACE  */
    NEWLINE = 313,                 /* NEWLINE  */
    ERROR = 314,                   /* ERROR  */
    CASE = 315,                    /* CASE  */
    DEFAULT = 316,                 /* DEFAULT  */
    UNARY_BITNOT = 317,            /* UNARY_BITNOT  */
    UNARY_BITAND = 318,            /* UNARY_BITAND  */
    UNARY_MINUS = 319,             /* UNARY_MINUS  */
    UNARY_PLUS = 320,              /* UNARY_PLUS  */
    LOWER_THAN_ELSE = 321          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "parser.y"

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

#line 143 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
