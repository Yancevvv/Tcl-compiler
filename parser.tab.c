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
#line 3 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree_nodes.h"
#include "create_tree.h"
#include "ast_printer.h"

extern int yylex(void);
extern int yylineno;
extern char* yytext;
extern FILE* yyin;

program_struct* program_root = NULL;
void yyerror(const char* s);

stmt_list_struct* stmt_list_result = NULL;

#line 91 "parser.tab.c"

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
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_BOOLEAN = 4,                    /* BOOLEAN  */
  YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_COMMAND = 7,                    /* COMMAND  */
  YYSYMBOL_VARIABLE = 8,                   /* VARIABLE  */
  YYSYMBOL_IDENTIFIER = 9,                 /* IDENTIFIER  */
  YYSYMBOL_BRACED_EXPR = 10,               /* BRACED_EXPR  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 13,                    /* ELSEIF  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_FOREACH = 16,                   /* FOREACH  */
  YYSYMBOL_PROC = 17,                      /* PROC  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_SET = 19,                       /* SET  */
  YYSYMBOL_EXPR = 20,                      /* EXPR  */
  YYSYMBOL_SWITCH = 21,                    /* SWITCH  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_IN = 24,                        /* IN  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_NE = 26,                        /* NE  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_LE = 29,                        /* LE  */
  YYSYMBOL_GE = 30,                        /* GE  */
  YYSYMBOL_STREQ = 31,                     /* STREQ  */
  YYSYMBOL_STRNE = 32,                     /* STRNE  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_PLUS = 36,                      /* PLUS  */
  YYSYMBOL_MINUS = 37,                     /* MINUS  */
  YYSYMBOL_MULT = 38,                      /* MULT  */
  YYSYMBOL_DIV = 39,                       /* DIV  */
  YYSYMBOL_MOD = 40,                       /* MOD  */
  YYSYMBOL_POW = 41,                       /* POW  */
  YYSYMBOL_BITAND = 42,                    /* BITAND  */
  YYSYMBOL_BITOR = 43,                     /* BITOR  */
  YYSYMBOL_BITXOR = 44,                    /* BITXOR  */
  YYSYMBOL_BITNOT = 45,                    /* BITNOT  */
  YYSYMBOL_LSHIFT = 46,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 47,                    /* RSHIFT  */
  YYSYMBOL_ASSIGN = 48,                    /* ASSIGN  */
  YYSYMBOL_DOLLAR = 49,                    /* DOLLAR  */
  YYSYMBOL_LPAREN = 50,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 51,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 52,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 53,                     /* COMMA  */
  YYSYMBOL_DOT = 54,                       /* DOT  */
  YYSYMBOL_COLON = 55,                     /* COLON  */
  YYSYMBOL_LBRACE = 56,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 57,                    /* RBRACE  */
  YYSYMBOL_NEWLINE = 58,                   /* NEWLINE  */
  YYSYMBOL_ERROR = 59,                     /* ERROR  */
  YYSYMBOL_CASE = 60,                      /* CASE  */
  YYSYMBOL_DEFAULT = 61,                   /* DEFAULT  */
  YYSYMBOL_UNARY_MINUS = 62,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 63,                /* UNARY_PLUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 64,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program = 66,                   /* program  */
  YYSYMBOL_top_level_statement = 67,       /* top_level_statement  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_assignment = 69,                /* assignment  */
  YYSYMBOL_expr = 70,                      /* expr  */
  YYSYMBOL_arithmetic_expr = 71,           /* arithmetic_expr  */
  YYSYMBOL_boolean_expr = 72,              /* boolean_expr  */
  YYSYMBOL_string_expr = 73,               /* string_expr  */
  YYSYMBOL_brace_expr = 74,                /* brace_expr  */
  YYSYMBOL_control_statement = 75,         /* control_statement  */
  YYSYMBOL_if_statement = 76,              /* if_statement  */
  YYSYMBOL_elsif_list = 77,                /* elsif_list  */
  YYSYMBOL_while_statement = 78,           /* while_statement  */
  YYSYMBOL_for_statement = 79,             /* for_statement  */
  YYSYMBOL_foreach_statement = 80,         /* foreach_statement  */
  YYSYMBOL_proc_definition = 81,           /* proc_definition  */
  YYSYMBOL_parameter_list = 82,            /* parameter_list  */
  YYSYMBOL_return_statement = 83,          /* return_statement  */
  YYSYMBOL_break_statement = 84,           /* break_statement  */
  YYSYMBOL_continue_statement = 85,        /* continue_statement  */
  YYSYMBOL_block = 86,                     /* block  */
  YYSYMBOL_block_body = 87                 /* block_body  */
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

#if 1

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
#endif /* 1 */

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
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    86,    87,    91,    92,    93,    94,
      98,   102,   103,   104,   105,   106,   107,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   141,   142,   143,   144,   148,   149,   150,   151,   152,
     153,   157,   158,   159,   160,   161,   162,   163,   167,   170,
     173,   179,   180,   184,   190,   199,   205,   208,   214,   215,
     219,   220,   224,   228,   232,   236,   237
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "BOOLEAN",
  "DOUBLE", "STRING", "COMMAND", "VARIABLE", "IDENTIFIER", "BRACED_EXPR",
  "IF", "ELSE", "ELSEIF", "WHILE", "FOR", "FOREACH", "PROC", "RETURN",
  "SET", "EXPR", "SWITCH", "BREAK", "CONTINUE", "IN", "EQ", "NE", "LT",
  "GT", "LE", "GE", "STREQ", "STRNE", "AND", "OR", "NOT", "PLUS", "MINUS",
  "MULT", "DIV", "MOD", "POW", "BITAND", "BITOR", "BITXOR", "BITNOT",
  "LSHIFT", "RSHIFT", "ASSIGN", "DOLLAR", "LPAREN", "RPAREN", "SEMICOLON",
  "COMMA", "DOT", "COLON", "LBRACE", "RBRACE", "NEWLINE", "ERROR", "CASE",
  "DEFAULT", "UNARY_MINUS", "UNARY_PLUS", "LOWER_THAN_ELSE", "$accept",
  "program", "top_level_statement", "statement", "assignment", "expr",
  "arithmetic_expr", "boolean_expr", "string_expr", "brace_expr",
  "control_statement", "if_statement", "elsif_list", "while_statement",
  "for_statement", "foreach_statement", "proc_definition",
  "parameter_list", "return_statement", "break_statement",
  "continue_statement", "block", "block_body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,   119,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   231,   231,    -4,     7,    15,   208,    27,   -30,
     -30,   231,    11,    11,   231,   196,   -18,   -30,   -30,   -30,
     268,     9,   -13,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   268,   -11,   -13,   -11,    36,    34,    10,
     -30,   208,   -30,    11,   -30,   -30,   121,    -2,    25,    30,
     -30,   246,   -23,   -24,   -30,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,   231,   231,    29,
      29,    29,   -30,    50,   -30,    54,    59,    -7,   -30,   211,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,    73,    73,    73,
      73,    73,    73,    12,    12,    47,    47,    47,    47,   -30,
      58,    39,    39,   -30,   173,    38,   231,    68,    38,    38,
     -30,    38,     6,   -30,    37,   -30,   -11,    38,   231,   -30,
     -30,   -30,    38,    87,   -30,   -30,   -30,   -11,   -30,   -30,
     -30
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     9,    17,    28,    18,    41,    15,    14,
      42,    44,     0,     0,     0,     0,     0,    71,     0,    72,
      73,     0,     0,     0,     0,     0,     0,     5,     7,     8,
      11,    12,    13,    16,     6,    51,    52,    53,    54,     4,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
      70,     0,    39,     0,    26,    25,     0,     0,     0,     0,
      50,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    58,    63,     0,     0,     0,    10,     0,
      27,    40,    49,    48,    46,    45,    47,    29,    30,    31,
      32,    33,    34,    19,    20,    21,    22,    23,    24,    37,
      38,    35,    36,    43,     0,     0,     0,     0,     0,     0,
      68,     0,     0,    74,     0,    59,     0,     0,     0,    64,
      65,    66,     0,     0,    76,    61,    60,     0,    67,    69,
      62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,   -15,   -30,   -14,     3,   -12,     4,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -29,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    26,    27,    28,    29,    43,    31,    45,    33,
      34,    35,   117,    36,    37,    38,    39,   122,    40,    41,
      42,    83,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    46,   120,    50,    30,    32,    47,    79,    80,    52,
      77,    78,    57,    62,     4,    48,     6,    84,    79,    80,
      30,    32,    77,    78,    49,    54,    55,    56,    61,    63,
      81,    77,    78,    96,    95,     7,    51,    88,    10,    11,
      64,    81,    77,    78,   121,    82,    85,    22,    23,    91,
      73,    74,    75,    76,    30,    32,    89,   132,    86,   133,
      87,    53,   115,   116,   118,   109,   110,   119,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     127,   128,    92,   111,   112,   113,   125,    93,    76,   129,
     130,    77,   131,    81,    82,   134,   139,   135,   136,   124,
       0,     0,     0,   138,   126,     0,     0,     0,   140,    71,
      72,    73,    74,    75,    76,     0,   137,    30,    32,     2,
       3,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,    13,    14,    15,    16,    17,    18,     0,
       0,    19,    20,     0,     0,     0,    65,    66,    67,    68,
      69,    70,     0,     0,    21,    22,    23,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    90,     0,     3,    25,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,    13,    14,    15,
       0,    17,    18,     0,     0,    19,    20,     0,     0,     4,
       5,     6,     7,    58,    59,    10,    11,     0,    21,    22,
      23,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
     123,    21,    22,    23,     4,     5,     6,     7,     0,     0,
      10,    11,     0,    21,    22,    23,    24,    71,    72,    73,
      74,    75,    76,    60,     0,     0,     0,     0,    24,     0,
       0,     0,    90,     0,    25,     0,    21,    22,    23,     0,
       0,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,    24,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,     0,
       0,     0,     0,    94,    71,    72,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
      12,    13,     9,    17,     1,     1,    10,    31,    32,    21,
      33,    34,    24,    25,     3,     8,     5,    46,    31,    32,
      17,    17,    33,    34,     9,    22,    23,    24,    25,    25,
      54,    33,    34,    57,    57,     6,     9,    51,     9,    10,
      58,    54,    33,    34,    51,    56,    10,    36,    37,    51,
      38,    39,    40,    41,    51,    51,    53,    51,    24,    53,
      50,    50,    12,    13,    10,    77,    78,     8,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      12,    13,    57,    79,    80,    81,   115,    57,    41,   118,
     119,    33,   121,    54,    56,    58,     9,   126,   127,   114,
      -1,    -1,    -1,   132,   116,    -1,    -1,    -1,   137,    36,
      37,    38,    39,    40,    41,    -1,   128,   114,   114,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    35,    36,    37,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    51,    -1,     1,    56,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    23,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    35,    36,
      37,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    56,
      57,    35,    36,    37,     3,     4,     5,     6,    -1,    -1,
       9,    10,    -1,    35,    36,    37,    50,    36,    37,    38,
      39,    40,    41,    57,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    51,    -1,    56,    -1,    35,    36,    37,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    50,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    57,    36,    37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    66,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    14,    15,    16,    17,    18,    19,    22,
      23,    35,    36,    37,    50,    56,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    78,    79,    80,    81,
      83,    84,    85,    71,    72,    73,    72,    10,     8,     9,
      70,     9,    72,    50,    71,    71,    71,    72,     7,     8,
      57,    71,    72,    73,    58,    25,    26,    27,    28,    29,
      30,    36,    37,    38,    39,    40,    41,    33,    34,    31,
      32,    54,    56,    86,    86,    10,    24,    50,    70,    71,
      51,    51,    57,    57,    57,    57,    57,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    73,    73,    73,    87,    12,    13,    77,    10,     8,
       9,    51,    82,    57,    68,    86,    72,    12,    13,    86,
      86,    86,    51,    53,    58,    86,    86,    72,    86,     9,
      86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      69,    70,    70,    70,    70,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    77,    77,    78,    79,    80,    81,    81,    82,    82,
      83,    83,    84,    85,    86,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       6,     3,     4,     3,     5,     5,     5,     6,     1,     3,
       2,     1,     1,     1,     3,     0,     3
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* program: %empty  */
#line 79 "parser.y"
           { stmt_list_result = create_stmt_list(NULL); }
#line 1567 "parser.tab.c"
    break;

  case 3: /* program: program top_level_statement NEWLINE  */
#line 80 "parser.y"
                                          {
        stmt_list_result = add_to_stmt_list(stmt_list_result, (yyvsp[-1].stmt_un));
      }
#line 1575 "parser.tab.c"
    break;

  case 4: /* top_level_statement: proc_definition  */
#line 86 "parser.y"
                    { (yyval.stmt_un) = (yyvsp[0].stmt_un); }
#line 1581 "parser.tab.c"
    break;

  case 5: /* top_level_statement: statement  */
#line 87 "parser.y"
                    { (yyval.stmt_un) = (yyvsp[0].stmt_un); }
#line 1587 "parser.tab.c"
    break;

  case 6: /* statement: control_statement  */
#line 91 "parser.y"
                      { (yyval.stmt_un) = (yyvsp[0].stmt_un); }
#line 1593 "parser.tab.c"
    break;

  case 7: /* statement: assignment  */
#line 92 "parser.y"
                      { (yyval.stmt_un) = (yyvsp[0].stmt_un); }
#line 1599 "parser.tab.c"
    break;

  case 8: /* statement: expr  */
#line 93 "parser.y"
                      { (yyval.stmt_un) = create_expr_stmt((expr_struct*)(yyvsp[0].expr_un)); }
#line 1605 "parser.tab.c"
    break;

  case 9: /* statement: error  */
#line 94 "parser.y"
                      { (yyval.stmt_un) = NULL; }
#line 1611 "parser.tab.c"
    break;

  case 10: /* assignment: SET IDENTIFIER expr  */
#line 98 "parser.y"
                        { (yyval.stmt_un) = create_set_stmt((yyvsp[-1].string_val), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1617 "parser.tab.c"
    break;

  case 11: /* expr: arithmetic_expr  */
#line 102 "parser.y"
                    { (yyval.expr_un) = (yyvsp[0].expr_un); }
#line 1623 "parser.tab.c"
    break;

  case 12: /* expr: boolean_expr  */
#line 103 "parser.y"
                    { (yyval.expr_un) = (yyvsp[0].expr_un); }
#line 1629 "parser.tab.c"
    break;

  case 13: /* expr: string_expr  */
#line 104 "parser.y"
                    { (yyval.expr_un) = (yyvsp[0].expr_un); }
#line 1635 "parser.tab.c"
    break;

  case 14: /* expr: VARIABLE  */
#line 105 "parser.y"
                    { (yyval.expr_un) = create_variable_expr((yyvsp[0].string_val)); }
#line 1641 "parser.tab.c"
    break;

  case 15: /* expr: COMMAND  */
#line 106 "parser.y"
                    { (yyval.expr_un) = create_command_expr((yyvsp[0].string_val)); }
#line 1647 "parser.tab.c"
    break;

  case 16: /* expr: brace_expr  */
#line 107 "parser.y"
                    { (yyval.expr_un) = (yyvsp[0].expr_un); }
#line 1653 "parser.tab.c"
    break;

  case 17: /* arithmetic_expr: INTEGER  */
#line 111 "parser.y"
            { (yyval.expr_un) = create_const_int_expr((yyvsp[0].int_val)); }
#line 1659 "parser.tab.c"
    break;

  case 18: /* arithmetic_expr: DOUBLE  */
#line 112 "parser.y"
             { (yyval.expr_un) = create_const_double_expr((yyvsp[0].double_val)); }
#line 1665 "parser.tab.c"
    break;

  case 19: /* arithmetic_expr: arithmetic_expr PLUS arithmetic_expr  */
#line 113 "parser.y"
                                           { (yyval.expr_un) = create_binary_op_expr(OP_PLUS, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1671 "parser.tab.c"
    break;

  case 20: /* arithmetic_expr: arithmetic_expr MINUS arithmetic_expr  */
#line 114 "parser.y"
                                            { (yyval.expr_un) = create_binary_op_expr(OP_MINUS, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1677 "parser.tab.c"
    break;

  case 21: /* arithmetic_expr: arithmetic_expr MULT arithmetic_expr  */
#line 115 "parser.y"
                                           { (yyval.expr_un) = create_binary_op_expr(OP_MULT, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1683 "parser.tab.c"
    break;

  case 22: /* arithmetic_expr: arithmetic_expr DIV arithmetic_expr  */
#line 116 "parser.y"
                                          { (yyval.expr_un) = create_binary_op_expr(OP_DIV, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1689 "parser.tab.c"
    break;

  case 23: /* arithmetic_expr: arithmetic_expr MOD arithmetic_expr  */
#line 117 "parser.y"
                                          { (yyval.expr_un) = create_binary_op_expr(OP_MOD, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1695 "parser.tab.c"
    break;

  case 24: /* arithmetic_expr: arithmetic_expr POW arithmetic_expr  */
#line 118 "parser.y"
                                          { (yyval.expr_un) = create_binary_op_expr(OP_POW, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1701 "parser.tab.c"
    break;

  case 25: /* arithmetic_expr: MINUS arithmetic_expr  */
#line 119 "parser.y"
                                              { (yyval.expr_un) = create_unary_op_expr(OP_MINUS, (expr_struct*)(yyvsp[0].expr_un)); }
#line 1707 "parser.tab.c"
    break;

  case 26: /* arithmetic_expr: PLUS arithmetic_expr  */
#line 120 "parser.y"
                                            { (yyval.expr_un) = create_unary_op_expr(OP_PLUS, (expr_struct*)(yyvsp[0].expr_un)); }
#line 1713 "parser.tab.c"
    break;

  case 27: /* arithmetic_expr: LPAREN arithmetic_expr RPAREN  */
#line 121 "parser.y"
                                    { (yyval.expr_un) = (yyvsp[-1].expr_un); }
#line 1719 "parser.tab.c"
    break;

  case 28: /* boolean_expr: BOOLEAN  */
#line 125 "parser.y"
            { (yyval.expr_un) = create_const_int_expr((yyvsp[0].int_val)); }
#line 1725 "parser.tab.c"
    break;

  case 29: /* boolean_expr: arithmetic_expr EQ arithmetic_expr  */
#line 126 "parser.y"
                                         { (yyval.expr_un) = create_binary_op_expr(OP_EQ, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1731 "parser.tab.c"
    break;

  case 30: /* boolean_expr: arithmetic_expr NE arithmetic_expr  */
#line 127 "parser.y"
                                         { (yyval.expr_un) = create_binary_op_expr(OP_NE, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1737 "parser.tab.c"
    break;

  case 31: /* boolean_expr: arithmetic_expr LT arithmetic_expr  */
#line 128 "parser.y"
                                         { (yyval.expr_un) = create_binary_op_expr(OP_LT, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1743 "parser.tab.c"
    break;

  case 32: /* boolean_expr: arithmetic_expr GT arithmetic_expr  */
#line 129 "parser.y"
                                         { (yyval.expr_un) = create_binary_op_expr(OP_GT, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1749 "parser.tab.c"
    break;

  case 33: /* boolean_expr: arithmetic_expr LE arithmetic_expr  */
#line 130 "parser.y"
                                         { (yyval.expr_un) = create_binary_op_expr(OP_LE, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1755 "parser.tab.c"
    break;

  case 34: /* boolean_expr: arithmetic_expr GE arithmetic_expr  */
#line 131 "parser.y"
                                         { (yyval.expr_un) = create_binary_op_expr(OP_GE, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1761 "parser.tab.c"
    break;

  case 35: /* boolean_expr: string_expr STREQ string_expr  */
#line 132 "parser.y"
                                    { (yyval.expr_un) = create_binary_op_expr(OP_STREQ, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1767 "parser.tab.c"
    break;

  case 36: /* boolean_expr: string_expr STRNE string_expr  */
#line 133 "parser.y"
                                    { (yyval.expr_un) = create_binary_op_expr(OP_STRNE, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1773 "parser.tab.c"
    break;

  case 37: /* boolean_expr: boolean_expr AND boolean_expr  */
#line 134 "parser.y"
                                    { (yyval.expr_un) = create_binary_op_expr(OP_AND, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1779 "parser.tab.c"
    break;

  case 38: /* boolean_expr: boolean_expr OR boolean_expr  */
#line 135 "parser.y"
                                   { (yyval.expr_un) = create_binary_op_expr(OP_OR, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1785 "parser.tab.c"
    break;

  case 39: /* boolean_expr: NOT boolean_expr  */
#line 136 "parser.y"
                       { (yyval.expr_un) = create_unary_op_expr(OP_NOT, (expr_struct*)(yyvsp[0].expr_un)); }
#line 1791 "parser.tab.c"
    break;

  case 40: /* boolean_expr: LPAREN boolean_expr RPAREN  */
#line 137 "parser.y"
                                 { (yyval.expr_un) = (yyvsp[-1].expr_un); }
#line 1797 "parser.tab.c"
    break;

  case 41: /* string_expr: STRING  */
#line 141 "parser.y"
           { (yyval.expr_un) = create_const_string_expr((yyvsp[0].string_val)); }
#line 1803 "parser.tab.c"
    break;

  case 42: /* string_expr: IDENTIFIER  */
#line 142 "parser.y"
                 { (yyval.expr_un) = create_const_string_expr((yyvsp[0].string_val)); }
#line 1809 "parser.tab.c"
    break;

  case 43: /* string_expr: string_expr DOT string_expr  */
#line 143 "parser.y"
                                  { (yyval.expr_un) = create_binary_op_expr(OP_DOT, (expr_struct*)(yyvsp[-2].expr_un), (expr_struct*)(yyvsp[0].expr_un)); }
#line 1815 "parser.tab.c"
    break;

  case 44: /* string_expr: BRACED_EXPR  */
#line 144 "parser.y"
                  { (yyval.expr_un) = create_const_string_expr((yyvsp[0].string_val)); }
#line 1821 "parser.tab.c"
    break;

  case 45: /* brace_expr: LBRACE boolean_expr RBRACE  */
#line 148 "parser.y"
                               { (yyval.expr_un) = (yyvsp[-1].expr_un); }
#line 1827 "parser.tab.c"
    break;

  case 46: /* brace_expr: LBRACE arithmetic_expr RBRACE  */
#line 149 "parser.y"
                                    { (yyval.expr_un) = (yyvsp[-1].expr_un); }
#line 1833 "parser.tab.c"
    break;

  case 47: /* brace_expr: LBRACE string_expr RBRACE  */
#line 150 "parser.y"
                                { (yyval.expr_un) = (yyvsp[-1].expr_un); }
#line 1839 "parser.tab.c"
    break;

  case 48: /* brace_expr: LBRACE VARIABLE RBRACE  */
#line 151 "parser.y"
                             { (yyval.expr_un) = create_variable_expr((yyvsp[-1].string_val)); }
#line 1845 "parser.tab.c"
    break;

  case 49: /* brace_expr: LBRACE COMMAND RBRACE  */
#line 152 "parser.y"
                            { (yyval.expr_un) = create_command_expr((yyvsp[-1].string_val)); }
#line 1851 "parser.tab.c"
    break;

  case 50: /* brace_expr: LBRACE RBRACE  */
#line 153 "parser.y"
                    { (yyval.expr_un) = NULL; }
#line 1857 "parser.tab.c"
    break;

  case 58: /* if_statement: IF boolean_expr block  */
#line 167 "parser.y"
                                                {
        (yyval.stmt_un) = create_if_stmt((expr_struct*)(yyvsp[-1].expr_un), (stmt_list_struct*)(yyvsp[0].stmt_list_un), NULL, NULL);
    }
#line 1865 "parser.tab.c"
    break;

  case 59: /* if_statement: IF boolean_expr block ELSE block  */
#line 170 "parser.y"
                                       {
        (yyval.stmt_un) = create_if_stmt((expr_struct*)(yyvsp[-3].expr_un), (stmt_list_struct*)(yyvsp[-2].stmt_list_un), NULL, (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1873 "parser.tab.c"
    break;

  case 60: /* if_statement: IF boolean_expr block elsif_list ELSE block  */
#line 173 "parser.y"
                                                  {
        (yyval.stmt_un) = create_if_stmt((expr_struct*)(yyvsp[-4].expr_un), (stmt_list_struct*)(yyvsp[-3].stmt_list_un), (elsif_list_struct*)(yyvsp[-2].elsif_list_un), (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1881 "parser.tab.c"
    break;

  case 61: /* elsif_list: ELSEIF boolean_expr block  */
#line 179 "parser.y"
                              { (yyval.elsif_list_un) = create_elsif_list((expr_struct*)(yyvsp[-1].expr_un), (stmt_list_struct*)(yyvsp[0].stmt_list_un)); }
#line 1887 "parser.tab.c"
    break;

  case 62: /* elsif_list: elsif_list ELSEIF boolean_expr block  */
#line 180 "parser.y"
                                           { (yyval.elsif_list_un) = add_to_elsif_list((elsif_list_struct*)(yyvsp[-3].elsif_list_un), (expr_struct*)(yyvsp[-1].expr_un), (stmt_list_struct*)(yyvsp[0].stmt_list_un)); }
#line 1893 "parser.tab.c"
    break;

  case 63: /* while_statement: WHILE boolean_expr block  */
#line 184 "parser.y"
                             {
        (yyval.stmt_un) = create_while_stmt((expr_struct*)(yyvsp[-1].expr_un), (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1901 "parser.tab.c"
    break;

  case 64: /* for_statement: FOR BRACED_EXPR BRACED_EXPR BRACED_EXPR block  */
#line 190 "parser.y"
                                                  {
        expr_struct* init = create_const_string_expr((yyvsp[-3].string_val));
        expr_struct* cond = create_const_string_expr((yyvsp[-2].string_val));
        expr_struct* incr = create_const_string_expr((yyvsp[-1].string_val));
        (yyval.stmt_un) = create_for_stmt(init, cond, incr, (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1912 "parser.tab.c"
    break;

  case 65: /* foreach_statement: FOREACH VARIABLE IN VARIABLE block  */
#line 199 "parser.y"
                                       {
        (yyval.stmt_un) = create_foreach_stmt((yyvsp[-3].string_val), (yyvsp[-1].string_val), (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1920 "parser.tab.c"
    break;

  case 66: /* proc_definition: PROC IDENTIFIER LPAREN RPAREN block  */
#line 205 "parser.y"
                                        {
        (yyval.stmt_un) = create_proc_stmt((yyvsp[-3].string_val), NULL, (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1928 "parser.tab.c"
    break;

  case 67: /* proc_definition: PROC IDENTIFIER LPAREN parameter_list RPAREN block  */
#line 208 "parser.y"
                                                         {
        (yyval.stmt_un) = create_proc_stmt((yyvsp[-4].string_val), (param_list_struct*)(yyvsp[-2].param_list_un), (stmt_list_struct*)(yyvsp[0].stmt_list_un));
    }
#line 1936 "parser.tab.c"
    break;

  case 68: /* parameter_list: IDENTIFIER  */
#line 214 "parser.y"
               { (yyval.param_list_un) = create_param_list((yyvsp[0].string_val)); }
#line 1942 "parser.tab.c"
    break;

  case 69: /* parameter_list: parameter_list COMMA IDENTIFIER  */
#line 215 "parser.y"
                                      { (yyval.param_list_un) = add_to_param_list((param_list_struct*)(yyvsp[-2].param_list_un), (yyvsp[0].string_val)); }
#line 1948 "parser.tab.c"
    break;

  case 70: /* return_statement: RETURN expr  */
#line 219 "parser.y"
                { (yyval.stmt_un) = create_return_stmt((expr_struct*)(yyvsp[0].expr_un)); }
#line 1954 "parser.tab.c"
    break;

  case 71: /* return_statement: RETURN  */
#line 220 "parser.y"
             { (yyval.stmt_un) = create_return_stmt(NULL); }
#line 1960 "parser.tab.c"
    break;

  case 72: /* break_statement: BREAK  */
#line 224 "parser.y"
          { (yyval.stmt_un) = create_break_stmt(); }
#line 1966 "parser.tab.c"
    break;

  case 73: /* continue_statement: CONTINUE  */
#line 228 "parser.y"
             { (yyval.stmt_un) = create_continue_stmt(); }
#line 1972 "parser.tab.c"
    break;

  case 74: /* block: LBRACE block_body RBRACE  */
#line 232 "parser.y"
                             { (yyval.stmt_list_un) = (yyvsp[-1].stmt_list_un); }
#line 1978 "parser.tab.c"
    break;

  case 75: /* block_body: %empty  */
#line 236 "parser.y"
           { (yyval.stmt_list_un) = create_stmt_list(NULL); }
#line 1984 "parser.tab.c"
    break;

  case 76: /* block_body: block_body statement NEWLINE  */
#line 237 "parser.y"
                                   { (yyval.stmt_list_un) = add_to_stmt_list((stmt_list_struct*)(yyvsp[-2].stmt_list_un), (stmt_struct*)(yyvsp[-1].stmt_un)); }
#line 1990 "parser.tab.c"
    break;


#line 1994 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 240 "parser.y"


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
        
        /* Добавьте эту строку для генерации DOT файла */
        print_program_to_dot(program_root, "tcl_ast.dot");
        
        printf("Use: dot -Tpng tcl_ast.dot -o ast.png\n");
    } else {
        printf("Parsing failed.\n");
    }
    
    return result;
}
