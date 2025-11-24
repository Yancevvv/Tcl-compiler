/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 86 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NEWLINE = 3,                    /* NEWLINE  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_ELSE = 5,                       /* ELSE  */
  YYSYMBOL_ELSEIF = 6,                     /* ELSEIF  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_FOREACH = 9,                    /* FOREACH  */
  YYSYMBOL_PROC = 10,                      /* PROC  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_SET = 12,                       /* SET  */
  YYSYMBOL_EXPR = 13,                      /* EXPR  */
  YYSYMBOL_SWITCH = 14,                    /* SWITCH  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 16,                  /* CONTINUE  */
  YYSYMBOL_FUNC_ABS = 17,                  /* FUNC_ABS  */
  YYSYMBOL_FUNC_SIN = 18,                  /* FUNC_SIN  */
  YYSYMBOL_FUNC_COS = 19,                  /* FUNC_COS  */
  YYSYMBOL_FUNC_TAN = 20,                  /* FUNC_TAN  */
  YYSYMBOL_FUNC_EXP = 21,                  /* FUNC_EXP  */
  YYSYMBOL_FUNC_LOG = 22,                  /* FUNC_LOG  */
  YYSYMBOL_FUNC_SQRT = 23,                 /* FUNC_SQRT  */
  YYSYMBOL_FUNC_RAND = 24,                 /* FUNC_RAND  */
  YYSYMBOL_FUNC_INT = 25,                  /* FUNC_INT  */
  YYSYMBOL_FUNC_DOUBLE = 26,               /* FUNC_DOUBLE  */
  YYSYMBOL_FUNC_ROUND = 27,                /* FUNC_ROUND  */
  YYSYMBOL_EQ = 28,                        /* EQ  */
  YYSYMBOL_NE = 29,                        /* NE  */
  YYSYMBOL_LT = 30,                        /* LT  */
  YYSYMBOL_GT = 31,                        /* GT  */
  YYSYMBOL_LE = 32,                        /* LE  */
  YYSYMBOL_GE = 33,                        /* GE  */
  YYSYMBOL_STREQ = 34,                     /* STREQ  */
  YYSYMBOL_STRNE = 35,                     /* STRNE  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_NOT = 38,                       /* NOT  */
  YYSYMBOL_PLUS = 39,                      /* PLUS  */
  YYSYMBOL_MINUS = 40,                     /* MINUS  */
  YYSYMBOL_MULT = 41,                      /* MULT  */
  YYSYMBOL_DIV = 42,                       /* DIV  */
  YYSYMBOL_MOD = 43,                       /* MOD  */
  YYSYMBOL_POW = 44,                       /* POW  */
  YYSYMBOL_BITAND = 45,                    /* BITAND  */
  YYSYMBOL_BITOR = 46,                     /* BITOR  */
  YYSYMBOL_BITXOR = 47,                    /* BITXOR  */
  YYSYMBOL_BITNOT = 48,                    /* BITNOT  */
  YYSYMBOL_LSHIFT = 49,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 50,                    /* RSHIFT  */
  YYSYMBOL_ASSIGN = 51,                    /* ASSIGN  */
  YYSYMBOL_DOLLAR = 52,                    /* DOLLAR  */
  YYSYMBOL_LPAREN = 53,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 54,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 55,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 56,                     /* COMMA  */
  YYSYMBOL_DOT = 57,                       /* DOT  */
  YYSYMBOL_COLON = 58,                     /* COLON  */
  YYSYMBOL_LBRACE = 59,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 60,                    /* RBRACE  */
  YYSYMBOL_IN = 61,                        /* IN  */
  YYSYMBOL_CASE = 62,                      /* CASE  */
  YYSYMBOL_DEFAULT = 63,                   /* DEFAULT  */
  YYSYMBOL_INTEGER = 64,                   /* INTEGER  */
  YYSYMBOL_BOOLEAN = 65,                   /* BOOLEAN  */
  YYSYMBOL_DOUBLE = 66,                    /* DOUBLE  */
  YYSYMBOL_STRING = 67,                    /* STRING  */
  YYSYMBOL_COMMAND = 68,                   /* COMMAND  */
  YYSYMBOL_VARIABLE = 69,                  /* VARIABLE  */
  YYSYMBOL_IDENTIFIER = 70,                /* IDENTIFIER  */
  YYSYMBOL_ERROR = 71,                     /* ERROR  */
  YYSYMBOL_UNARY_MINUS = 72,               /* UNARY_MINUS  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_program = 74,                   /* program  */
  YYSYMBOL_line = 75,                      /* line  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_assignment_statement = 77,      /* assignment_statement  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_primary_expr = 79,              /* primary_expr  */
  YYSYMBOL_arithmetic_expr = 80,           /* arithmetic_expr  */
  YYSYMBOL_boolean_expr = 81,              /* boolean_expr  */
  YYSYMBOL_string_expr = 82,               /* string_expr  */
  YYSYMBOL_command_expr = 83,              /* command_expr  */
  YYSYMBOL_variable = 84,                  /* variable  */
  YYSYMBOL_identifier = 85,                /* identifier  */
  YYSYMBOL_function_call = 86,             /* function_call  */
  YYSYMBOL_control_statement = 87,         /* control_statement  */
  YYSYMBOL_if_statement = 88,              /* if_statement  */
  YYSYMBOL_else_if_list = 89,              /* else_if_list  */
  YYSYMBOL_while_statement = 90,           /* while_statement  */
  YYSYMBOL_for_statement = 91,             /* for_statement  */
  YYSYMBOL_foreach_statement = 92,         /* foreach_statement  */
  YYSYMBOL_switch_statement = 93,          /* switch_statement  */
  YYSYMBOL_case_list = 94,                 /* case_list  */
  YYSYMBOL_default_case = 95,              /* default_case  */
  YYSYMBOL_return_statement = 96,          /* return_statement  */
  YYSYMBOL_break_statement = 97,           /* break_statement  */
  YYSYMBOL_continue_statement = 98,        /* continue_statement  */
  YYSYMBOL_block = 99                      /* block  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    75,    79,    80,    81,    85,    86,    87,
      91,    92,    96,    97,    98,    99,   104,   105,   106,   107,
     108,   116,   117,   118,   119,   120,   121,   122,   130,   131,
     132,   133,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   152,   153,   164,   168,   169,   173,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   191,   192,   193,   194,   195,   196,   197,   198,   202,
     203,   204,   205,   209,   210,   214,   218,   223,   227,   228,
     229,   232,   234,   238,   242,   246,   250,   254,   258,   259
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NEWLINE", "IF",
  "ELSE", "ELSEIF", "WHILE", "FOR", "FOREACH", "PROC", "RETURN", "SET",
  "EXPR", "SWITCH", "BREAK", "CONTINUE", "FUNC_ABS", "FUNC_SIN",
  "FUNC_COS", "FUNC_TAN", "FUNC_EXP", "FUNC_LOG", "FUNC_SQRT", "FUNC_RAND",
  "FUNC_INT", "FUNC_DOUBLE", "FUNC_ROUND", "EQ", "NE", "LT", "GT", "LE",
  "GE", "STREQ", "STRNE", "AND", "OR", "NOT", "PLUS", "MINUS", "MULT",
  "DIV", "MOD", "POW", "BITAND", "BITOR", "BITXOR", "BITNOT", "LSHIFT",
  "RSHIFT", "ASSIGN", "DOLLAR", "LPAREN", "RPAREN", "SEMICOLON", "COMMA",
  "DOT", "COLON", "LBRACE", "RBRACE", "IN", "CASE", "DEFAULT", "INTEGER",
  "BOOLEAN", "DOUBLE", "STRING", "COMMAND", "VARIABLE", "IDENTIFIER",
  "ERROR", "UNARY_MINUS", "$accept", "program", "line", "statement",
  "assignment_statement", "expression", "primary_expr", "arithmetic_expr",
  "boolean_expr", "string_expr", "command_expr", "variable", "identifier",
  "function_call", "control_statement", "if_statement", "else_if_list",
  "while_statement", "for_statement", "foreach_statement",
  "switch_statement", "case_list", "default_case", "return_statement",
  "break_statement", "continue_statement", "block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,   200,   -51,    11,   -51,   322,   322,   -50,   -43,   375,
     -43,   -43,   375,   -51,   -51,   -20,    -2,     1,     7,    13,
      17,    20,    30,    31,    32,    50,   322,   428,    51,   375,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   133,   -51,   -51,
     -28,    47,    -6,   -22,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,    47,   -35,   -22,
     -35,    33,    51,   -51,    79,   -51,   375,    91,   -49,   428,
     428,   428,   428,   428,   428,   428,    89,   428,   428,   428,
     -51,   -51,   -51,   -51,   -51,   101,   -51,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   322,
     322,     0,     0,     0,   -51,   -51,    44,   -51,   102,   -51,
     -43,   -51,   375,     9,   -51,   110,   152,   189,   205,   258,
     274,   311,   -51,   327,   364,   380,   -51,    53,    53,    53,
      53,    53,    53,    15,    15,   112,   112,   112,   112,   -51,
     122,   -51,   105,   105,   -51,   269,   -40,   322,    76,   322,
     -40,   -51,   -24,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -35,   -40,   322,   -21,   -51,
     -51,   375,   109,    99,   -51,   -51,   -35,    33,   111,   -40,
     -51,   -51,   114,   -40,   -51,   -40,   -51,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     5,     0,     0,     0,     0,    85,
       0,     0,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    32,    22,    16,    18,    17,     3,     0,     9,     7,
      23,    12,    13,    14,    15,    31,     8,    61,    62,    63,
      64,    65,    66,    67,    68,     6,    18,     0,     0,     0,
       0,     0,     0,    47,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    23,    30,    49,    19,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    89,    69,    75,     0,    48,
       0,    10,     0,     2,    80,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,    20,    33,    34,    35,
      36,    37,    38,    24,    25,    26,    27,    28,    29,    41,
      42,    44,    39,    40,    45,     0,     0,     0,    72,     0,
       0,    11,     0,    50,    51,    52,    53,    54,    55,    56,
      58,    59,    60,    88,    70,     0,     0,     0,     0,    77,
      78,     0,     0,     0,    73,    71,     0,     0,     0,     0,
      79,    74,     0,     0,    83,     0,    82,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   172,   -51,   -51,   -38,     8,    -1,    35,    38,    16,
     -51,    37,   113,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,   145,    36,    37,    38,    39,    81,    41,    42,    43,
      44,    64,    84,    45,    46,    47,   148,    48,    49,    50,
      51,   152,   173,    52,    53,    54,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    99,   100,    61,    40,    40,   -44,   -44,    40,    62,
     113,    40,   101,   102,    55,    99,   100,    65,   105,   104,
      68,    59,    59,   108,   104,    40,    63,   105,    40,   -44,
      99,   100,   105,    69,   177,   103,   170,    85,   171,   172,
      57,    57,    59,    58,    60,    10,    11,    66,    67,   146,
     147,    70,    28,    29,    71,   107,    95,    96,    97,    98,
      72,    57,    82,   114,    80,    40,    73,    33,    56,    35,
      74,   -81,   -81,    75,   111,    87,    88,    89,    90,    91,
      92,   166,   167,    76,    77,    78,    93,    94,    95,    96,
      97,    98,    93,    94,    95,    96,    97,    98,    40,    40,
     141,   141,   141,    79,   115,   116,   117,   118,   119,   120,
     121,    40,   123,   124,   125,    59,    59,   142,   143,   144,
     151,    83,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    57,    57,    86,   139,   140,   182,
     110,   164,   112,   122,    40,   169,    40,   150,    40,    93,
      94,    95,    96,    97,    98,   126,    98,   149,    99,   180,
     174,   175,   103,    59,   153,    59,    40,   179,   185,   183,
      40,   181,     1,     0,   184,   109,     0,     0,   186,   178,
     187,     0,    57,    59,    57,   165,     0,   168,     0,     0,
       0,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       2,     3,    57,     4,     5,   176,   154,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    93,    94,
      95,    96,    97,    98,     0,     0,     0,     0,    26,     0,
      27,     0,     0,   155,    93,    94,    95,    96,    97,    98,
       0,     0,    28,    29,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,    30,    31,    32,    33,    34,    35,
       3,     0,     4,     5,     0,     0,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    93,    94,    95,
      96,    97,    98,     0,     0,     0,     0,    26,     0,    27,
       0,     0,   157,    93,    94,    95,    96,    97,    98,     0,
       0,    28,    29,     0,     0,     0,     0,     0,   158,   163,
       0,     0,     0,    30,    31,    32,    33,    34,    35,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
      26,     0,    27,     0,     0,   159,    93,    94,    95,    96,
      97,    98,     0,     0,    28,    29,     0,     0,     0,     0,
       0,   160,     0,     0,     0,     0,    30,    31,    32,    33,
      56,    35,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,    26,     0,    27,     0,     0,   161,    93,
      94,    95,    96,    97,    98,     0,     0,    28,    29,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,    30,
      31,    32,    33,    34,    35,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,    32,    33,    56,    35
};

static const yytype_int16 yycheck[] =
{
       1,    36,    37,    53,     5,     6,    34,    35,     9,    52,
      59,    12,    34,    35,     3,    36,    37,     9,    67,    59,
      12,     5,     6,    61,    59,    26,    69,    67,    29,    57,
      36,    37,    67,    53,    55,    57,    60,    29,    62,    63,
       5,     6,    26,     5,     6,    12,    13,    10,    11,     5,
       6,    53,    52,    53,    53,    60,    41,    42,    43,    44,
      53,    26,    27,    68,    26,    66,    53,    67,    68,    69,
      53,    62,    63,    53,    66,    28,    29,    30,    31,    32,
      33,     5,     6,    53,    53,    53,    39,    40,    41,    42,
      43,    44,    39,    40,    41,    42,    43,    44,    99,   100,
     101,   102,   103,    53,    69,    70,    71,    72,    73,    74,
      75,   112,    77,    78,    79,    99,   100,   101,   102,   103,
     112,    70,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     3,    99,   100,   177,
      61,   146,    51,    54,   145,   150,   147,   110,   149,    39,
      40,    41,    42,    43,    44,    54,    44,    55,    36,    60,
     165,   166,    57,   147,    54,   149,   167,    58,    54,    58,
     171,   176,     0,    -1,   179,    62,    -1,    -1,   183,   171,
     185,    -1,   147,   167,   149,   147,    -1,   149,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
       0,     1,   167,     3,     4,   167,    54,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    38,    -1,
      40,    -1,    -1,    54,    39,    40,    41,    42,    43,    44,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,    69,
       1,    -1,     3,     4,    -1,    -1,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    -1,    54,    39,    40,    41,    42,    43,    44,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    54,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    54,    39,    40,    41,    42,
      43,    44,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    69,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    54,    39,
      40,    41,    42,    43,    44,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    67,    68,    69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    74,     0,     1,     3,     4,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    38,    40,    52,    53,
      64,    65,    66,    67,    68,    69,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    86,    87,    88,    90,    91,
      92,    93,    96,    97,    98,     3,    68,    80,    81,    82,
      81,    53,    52,    69,    84,    78,    84,    84,    78,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      81,    79,    80,    70,    85,    78,     3,    28,    29,    30,
      31,    32,    33,    39,    40,    41,    42,    43,    44,    36,
      37,    34,    35,    57,    59,    67,    99,    99,    77,    85,
      61,    78,    51,    59,    99,    80,    80,    80,    80,    80,
      80,    80,    54,    80,    80,    80,    54,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    79,    82,    82,    82,    74,     5,     6,    89,    55,
      84,    78,    94,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    60,    99,    81,     5,     6,    81,    99,
      60,    62,    63,    95,    99,    99,    81,    55,    78,    58,
      60,    99,    77,    58,    99,    54,    99,    99
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    77,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    84,    84,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    91,    92,    93,    93,
      93,    94,    94,    95,    96,    96,    97,    98,    99,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     2,     1,     1,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     3,     1,     1,     2,     1,
       4,     4,     4,     4,     4,     4,     4,     3,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     6,     4,     3,     4,     3,     9,     5,     5,     6,
       3,     0,     5,     3,     2,     1,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 10: /* assignment_statement: SET variable expression  */
#line 91 "parser.y"
                            { printf("Assignment: %s = ...\n", (yyvsp[-1].string_val)); free((yyvsp[-1].string_val)); }
#line 1360 "parser.tab.c"
    break;

  case 11: /* assignment_statement: EXPR variable ASSIGN expression  */
#line 92 "parser.y"
                                      { printf("Expr assignment: %s = ...\n", (yyvsp[-2].string_val)); free((yyvsp[-2].string_val)); }
#line 1366 "parser.tab.c"
    break;

  case 16: /* primary_expr: STRING  */
#line 104 "parser.y"
               { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1372 "parser.tab.c"
    break;

  case 17: /* primary_expr: VARIABLE  */
#line 105 "parser.y"
               { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1378 "parser.tab.c"
    break;

  case 18: /* primary_expr: COMMAND  */
#line 106 "parser.y"
               { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1384 "parser.tab.c"
    break;

  case 19: /* primary_expr: DOLLAR identifier  */
#line 107 "parser.y"
                        { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1390 "parser.tab.c"
    break;

  case 20: /* primary_expr: LPAREN expression RPAREN  */
#line 108 "parser.y"
                               { 
        /* Обработка выражения в скобках - временное решение */
        if ((yyval.string_val)) free((yyval.string_val));
        (yyval.string_val) = strdup("parenthesized_expr"); 
    }
#line 1400 "parser.tab.c"
    break;

  case 21: /* arithmetic_expr: INTEGER  */
#line 116 "parser.y"
                           { (yyval.double_val) = (yyvsp[0].int_val); }
#line 1406 "parser.tab.c"
    break;

  case 22: /* arithmetic_expr: DOUBLE  */
#line 117 "parser.y"
                           { (yyval.double_val) = (yyvsp[0].double_val); }
#line 1412 "parser.tab.c"
    break;

  case 23: /* arithmetic_expr: primary_expr  */
#line 118 "parser.y"
                           { (yyval.double_val) = 0; /* временно - нужно lookup переменной */ }
#line 1418 "parser.tab.c"
    break;

  case 24: /* arithmetic_expr: arithmetic_expr PLUS arithmetic_expr  */
#line 119 "parser.y"
                                              { (yyval.double_val) = (yyvsp[-2].double_val) + (yyvsp[0].double_val); }
#line 1424 "parser.tab.c"
    break;

  case 25: /* arithmetic_expr: arithmetic_expr MINUS arithmetic_expr  */
#line 120 "parser.y"
                                              { (yyval.double_val) = (yyvsp[-2].double_val) - (yyvsp[0].double_val); }
#line 1430 "parser.tab.c"
    break;

  case 26: /* arithmetic_expr: arithmetic_expr MULT arithmetic_expr  */
#line 121 "parser.y"
                                              { (yyval.double_val) = (yyvsp[-2].double_val) * (yyvsp[0].double_val); }
#line 1436 "parser.tab.c"
    break;

  case 27: /* arithmetic_expr: arithmetic_expr DIV arithmetic_expr  */
#line 122 "parser.y"
                                              { 
        if ((yyvsp[0].double_val) == 0.0) {
            yyerror("Division by zero");
            (yyval.double_val) = 0;
        } else {
            (yyval.double_val) = (yyvsp[-2].double_val) / (yyvsp[0].double_val);
        }
    }
#line 1449 "parser.tab.c"
    break;

  case 28: /* arithmetic_expr: arithmetic_expr MOD arithmetic_expr  */
#line 130 "parser.y"
                                              { (yyval.double_val) = fmod((yyvsp[-2].double_val), (yyvsp[0].double_val)); }
#line 1455 "parser.tab.c"
    break;

  case 29: /* arithmetic_expr: arithmetic_expr POW arithmetic_expr  */
#line 131 "parser.y"
                                              { (yyval.double_val) = pow((yyvsp[-2].double_val), (yyvsp[0].double_val)); }
#line 1461 "parser.tab.c"
    break;

  case 30: /* arithmetic_expr: MINUS arithmetic_expr  */
#line 132 "parser.y"
                                              { (yyval.double_val) = -(yyvsp[0].double_val); }
#line 1467 "parser.tab.c"
    break;

  case 31: /* arithmetic_expr: function_call  */
#line 133 "parser.y"
                                             { (yyval.double_val) = (yyvsp[0].double_val); }
#line 1473 "parser.tab.c"
    break;

  case 32: /* boolean_expr: BOOLEAN  */
#line 137 "parser.y"
            { (yyval.int_val) = (yyvsp[0].int_val); }
#line 1479 "parser.tab.c"
    break;

  case 33: /* boolean_expr: arithmetic_expr EQ arithmetic_expr  */
#line 138 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) == (yyvsp[0].double_val); }
#line 1485 "parser.tab.c"
    break;

  case 34: /* boolean_expr: arithmetic_expr NE arithmetic_expr  */
#line 139 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) != (yyvsp[0].double_val); }
#line 1491 "parser.tab.c"
    break;

  case 35: /* boolean_expr: arithmetic_expr LT arithmetic_expr  */
#line 140 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) < (yyvsp[0].double_val); }
#line 1497 "parser.tab.c"
    break;

  case 36: /* boolean_expr: arithmetic_expr GT arithmetic_expr  */
#line 141 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) > (yyvsp[0].double_val); }
#line 1503 "parser.tab.c"
    break;

  case 37: /* boolean_expr: arithmetic_expr LE arithmetic_expr  */
#line 142 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) <= (yyvsp[0].double_val); }
#line 1509 "parser.tab.c"
    break;

  case 38: /* boolean_expr: arithmetic_expr GE arithmetic_expr  */
#line 143 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) >= (yyvsp[0].double_val); }
#line 1515 "parser.tab.c"
    break;

  case 39: /* boolean_expr: string_expr STREQ string_expr  */
#line 144 "parser.y"
                                    { (yyval.int_val) = strcmp((yyvsp[-2].string_val), (yyvsp[0].string_val)) == 0; }
#line 1521 "parser.tab.c"
    break;

  case 40: /* boolean_expr: string_expr STRNE string_expr  */
#line 145 "parser.y"
                                    { (yyval.int_val) = strcmp((yyvsp[-2].string_val), (yyvsp[0].string_val)) != 0; }
#line 1527 "parser.tab.c"
    break;

  case 41: /* boolean_expr: boolean_expr AND boolean_expr  */
#line 146 "parser.y"
                                    { (yyval.int_val) = (yyvsp[-2].int_val) && (yyvsp[0].int_val); }
#line 1533 "parser.tab.c"
    break;

  case 42: /* boolean_expr: boolean_expr OR boolean_expr  */
#line 147 "parser.y"
                                    { (yyval.int_val) = (yyvsp[-2].int_val) || (yyvsp[0].int_val); }
#line 1539 "parser.tab.c"
    break;

  case 43: /* boolean_expr: NOT boolean_expr  */
#line 148 "parser.y"
                                    { (yyval.int_val) = !(yyvsp[0].int_val); }
#line 1545 "parser.tab.c"
    break;

  case 44: /* string_expr: primary_expr  */
#line 152 "parser.y"
                 { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1551 "parser.tab.c"
    break;

  case 45: /* string_expr: string_expr DOT string_expr  */
#line 153 "parser.y"
                                  {
        char* result = malloc(strlen((yyvsp[-2].string_val)) + strlen((yyvsp[0].string_val)) + 1);
        strcpy(result, (yyvsp[-2].string_val));
        strcat(result, (yyvsp[0].string_val));
        free((yyvsp[-2].string_val));
        free((yyvsp[0].string_val));
        (yyval.string_val) = result;
    }
#line 1564 "parser.tab.c"
    break;

  case 46: /* command_expr: COMMAND  */
#line 164 "parser.y"
            { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1570 "parser.tab.c"
    break;

  case 47: /* variable: VARIABLE  */
#line 168 "parser.y"
             { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1576 "parser.tab.c"
    break;

  case 48: /* variable: DOLLAR identifier  */
#line 169 "parser.y"
                        { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1582 "parser.tab.c"
    break;

  case 49: /* identifier: IDENTIFIER  */
#line 173 "parser.y"
               { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1588 "parser.tab.c"
    break;

  case 50: /* function_call: FUNC_ABS LPAREN arithmetic_expr RPAREN  */
#line 177 "parser.y"
                                           { (yyval.double_val) = fabs((yyvsp[-1].double_val)); }
#line 1594 "parser.tab.c"
    break;

  case 51: /* function_call: FUNC_SIN LPAREN arithmetic_expr RPAREN  */
#line 178 "parser.y"
                                             { (yyval.double_val) = sin((yyvsp[-1].double_val)); }
#line 1600 "parser.tab.c"
    break;

  case 52: /* function_call: FUNC_COS LPAREN arithmetic_expr RPAREN  */
#line 179 "parser.y"
                                             { (yyval.double_val) = cos((yyvsp[-1].double_val)); }
#line 1606 "parser.tab.c"
    break;

  case 53: /* function_call: FUNC_TAN LPAREN arithmetic_expr RPAREN  */
#line 180 "parser.y"
                                             { (yyval.double_val) = tan((yyvsp[-1].double_val)); }
#line 1612 "parser.tab.c"
    break;

  case 54: /* function_call: FUNC_EXP LPAREN arithmetic_expr RPAREN  */
#line 181 "parser.y"
                                             { (yyval.double_val) = exp((yyvsp[-1].double_val)); }
#line 1618 "parser.tab.c"
    break;

  case 55: /* function_call: FUNC_LOG LPAREN arithmetic_expr RPAREN  */
#line 182 "parser.y"
                                             { (yyval.double_val) = log((yyvsp[-1].double_val)); }
#line 1624 "parser.tab.c"
    break;

  case 56: /* function_call: FUNC_SQRT LPAREN arithmetic_expr RPAREN  */
#line 183 "parser.y"
                                              { (yyval.double_val) = sqrt((yyvsp[-1].double_val)); }
#line 1630 "parser.tab.c"
    break;

  case 57: /* function_call: FUNC_RAND LPAREN RPAREN  */
#line 184 "parser.y"
                              { (yyval.double_val) = (double)rand() / RAND_MAX; }
#line 1636 "parser.tab.c"
    break;

  case 58: /* function_call: FUNC_INT LPAREN arithmetic_expr RPAREN  */
#line 185 "parser.y"
                                             { (yyval.double_val) = (double)((int)(yyvsp[-1].double_val)); }
#line 1642 "parser.tab.c"
    break;

  case 59: /* function_call: FUNC_DOUBLE LPAREN arithmetic_expr RPAREN  */
#line 186 "parser.y"
                                                { (yyval.double_val) = (double)(yyvsp[-1].double_val); }
#line 1648 "parser.tab.c"
    break;

  case 60: /* function_call: FUNC_ROUND LPAREN arithmetic_expr RPAREN  */
#line 187 "parser.y"
                                               { (yyval.double_val) = round((yyvsp[-1].double_val)); }
#line 1654 "parser.tab.c"
    break;

  case 69: /* if_statement: IF boolean_expr block  */
#line 202 "parser.y"
                          { printf("If statement\n"); }
#line 1660 "parser.tab.c"
    break;

  case 70: /* if_statement: IF boolean_expr block ELSE block  */
#line 203 "parser.y"
                                       { printf("If-else statement\n"); }
#line 1666 "parser.tab.c"
    break;

  case 71: /* if_statement: IF boolean_expr block else_if_list ELSE block  */
#line 204 "parser.y"
                                                    { printf("If-elseif-else statement\n"); }
#line 1672 "parser.tab.c"
    break;

  case 72: /* if_statement: IF boolean_expr block else_if_list  */
#line 205 "parser.y"
                                         { printf("If-elseif statement\n"); }
#line 1678 "parser.tab.c"
    break;

  case 75: /* while_statement: WHILE boolean_expr block  */
#line 214 "parser.y"
                             { printf("While loop\n"); }
#line 1684 "parser.tab.c"
    break;

  case 76: /* for_statement: FOR LPAREN assignment_statement SEMICOLON boolean_expr SEMICOLON assignment_statement RPAREN block  */
#line 219 "parser.y"
    { printf("For loop\n"); }
#line 1690 "parser.tab.c"
    break;

  case 77: /* foreach_statement: FOREACH variable IN variable block  */
#line 223 "parser.y"
                                       { printf("Foreach loop\n"); }
#line 1696 "parser.tab.c"
    break;

  case 78: /* switch_statement: SWITCH expression LBRACE case_list RBRACE  */
#line 227 "parser.y"
                                              { printf("Switch statement\n"); }
#line 1702 "parser.tab.c"
    break;

  case 79: /* switch_statement: SWITCH expression LBRACE case_list default_case RBRACE  */
#line 228 "parser.y"
                                                             { printf("Switch with default\n"); }
#line 1708 "parser.tab.c"
    break;

  case 80: /* switch_statement: SWITCH expression block  */
#line 229 "parser.y"
                              { printf("Simple switch\n"); }
#line 1714 "parser.tab.c"
    break;

  case 84: /* return_statement: RETURN expression  */
#line 242 "parser.y"
                      { printf("Return: "); 
        if (yylval.string_val) printf("%s\n", yylval.string_val);
        else printf("%f\n", yylval.double_val);
    }
#line 1723 "parser.tab.c"
    break;

  case 85: /* return_statement: RETURN  */
#line 246 "parser.y"
             { printf("Return void\n"); }
#line 1729 "parser.tab.c"
    break;

  case 86: /* break_statement: BREAK  */
#line 250 "parser.y"
          { printf("Break\n"); }
#line 1735 "parser.tab.c"
    break;

  case 87: /* continue_statement: CONTINUE  */
#line 254 "parser.y"
             { printf("Continue\n"); }
#line 1741 "parser.tab.c"
    break;

  case 88: /* block: LBRACE program RBRACE  */
#line 258 "parser.y"
                          { (yyval.string_val) = "block"; }
#line 1747 "parser.tab.c"
    break;

  case 89: /* block: STRING  */
#line 259 "parser.y"
             { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1753 "parser.tab.c"
    break;


#line 1757 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 262 "parser.y"


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
