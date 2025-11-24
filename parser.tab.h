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
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    ELSEIF = 267,                  /* ELSEIF  */
    WHILE = 268,                   /* WHILE  */
    FOR = 269,                     /* FOR  */
    FOREACH = 270,                 /* FOREACH  */
    PROC = 271,                    /* PROC  */
    RETURN = 272,                  /* RETURN  */
    SET = 273,                     /* SET  */
    EXPR = 274,                    /* EXPR  */
    SWITCH = 275,                  /* SWITCH  */
    BREAK = 276,                   /* BREAK  */
    CONTINUE = 277,                /* CONTINUE  */
    IN = 278,                      /* IN  */
    FUNC_ABS = 279,                /* FUNC_ABS  */
    FUNC_SIN = 280,                /* FUNC_SIN  */
    FUNC_COS = 281,                /* FUNC_COS  */
    FUNC_TAN = 282,                /* FUNC_TAN  */
    FUNC_EXP = 283,                /* FUNC_EXP  */
    FUNC_LOG = 284,                /* FUNC_LOG  */
    FUNC_SQRT = 285,               /* FUNC_SQRT  */
    FUNC_RAND = 286,               /* FUNC_RAND  */
    FUNC_INT = 287,                /* FUNC_INT  */
    FUNC_DOUBLE = 288,             /* FUNC_DOUBLE  */
    FUNC_ROUND = 289,              /* FUNC_ROUND  */
    EQ = 290,                      /* EQ  */
    NE = 291,                      /* NE  */
    LT = 292,                      /* LT  */
    GT = 293,                      /* GT  */
    LE = 294,                      /* LE  */
    GE = 295,                      /* GE  */
    STREQ = 296,                   /* STREQ  */
    STRNE = 297,                   /* STRNE  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    NOT = 300,                     /* NOT  */
    PLUS = 301,                    /* PLUS  */
    MINUS = 302,                   /* MINUS  */
    MULT = 303,                    /* MULT  */
    DIV = 304,                     /* DIV  */
    MOD = 305,                     /* MOD  */
    POW = 306,                     /* POW  */
    BITAND = 307,                  /* BITAND  */
    BITOR = 308,                   /* BITOR  */
    BITXOR = 309,                  /* BITXOR  */
    BITNOT = 310,                  /* BITNOT  */
    LSHIFT = 311,                  /* LSHIFT  */
    RSHIFT = 312,                  /* RSHIFT  */
    ASSIGN = 313,                  /* ASSIGN  */
    DOLLAR = 314,                  /* DOLLAR  */
    LPAREN = 315,                  /* LPAREN  */
    RPAREN = 316,                  /* RPAREN  */
    SEMICOLON = 317,               /* SEMICOLON  */
    COMMA = 318,                   /* COMMA  */
    DOT = 319,                     /* DOT  */
    COLON = 320,                   /* COLON  */
    LBRACE = 321,                  /* LBRACE  */
    RBRACE = 322,                  /* RBRACE  */
    NEWLINE = 323,                 /* NEWLINE  */
    ERROR = 324,                   /* ERROR  */
    CASE = 325,                    /* CASE  */
    DEFAULT = 326,                 /* DEFAULT  */
    UNARY_MINUS = 327              /* UNARY_MINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    int int_val;
    double double_val;
    char* string_val;

#line 142 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
