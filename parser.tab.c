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

extern int yylex(void);
extern int yylineno;
extern char* yytext;

// Для передачи контекста лексеру
extern void set_control_context(int in_control);

void yyerror(const char* s);

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
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_BOOLEAN = 4,                    /* BOOLEAN  */
  YYSYMBOL_DOUBLE = 5,                     /* DOUBLE  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_COMMAND = 7,                    /* COMMAND  */
  YYSYMBOL_VARIABLE = 8,                   /* VARIABLE  */
  YYSYMBOL_IDENTIFIER = 9,                 /* IDENTIFIER  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 12,                    /* ELSEIF  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_FOREACH = 15,                   /* FOREACH  */
  YYSYMBOL_PROC = 16,                      /* PROC  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_SET = 18,                       /* SET  */
  YYSYMBOL_EXPR = 19,                      /* EXPR  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_IN = 23,                        /* IN  */
  YYSYMBOL_FUNC_ABS = 24,                  /* FUNC_ABS  */
  YYSYMBOL_FUNC_SIN = 25,                  /* FUNC_SIN  */
  YYSYMBOL_FUNC_COS = 26,                  /* FUNC_COS  */
  YYSYMBOL_FUNC_TAN = 27,                  /* FUNC_TAN  */
  YYSYMBOL_FUNC_EXP = 28,                  /* FUNC_EXP  */
  YYSYMBOL_FUNC_LOG = 29,                  /* FUNC_LOG  */
  YYSYMBOL_FUNC_SQRT = 30,                 /* FUNC_SQRT  */
  YYSYMBOL_FUNC_RAND = 31,                 /* FUNC_RAND  */
  YYSYMBOL_FUNC_INT = 32,                  /* FUNC_INT  */
  YYSYMBOL_FUNC_DOUBLE = 33,               /* FUNC_DOUBLE  */
  YYSYMBOL_FUNC_ROUND = 34,                /* FUNC_ROUND  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_NE = 36,                        /* NE  */
  YYSYMBOL_LT = 37,                        /* LT  */
  YYSYMBOL_GT = 38,                        /* GT  */
  YYSYMBOL_LE = 39,                        /* LE  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_STREQ = 41,                     /* STREQ  */
  YYSYMBOL_STRNE = 42,                     /* STRNE  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_NOT = 45,                       /* NOT  */
  YYSYMBOL_PLUS = 46,                      /* PLUS  */
  YYSYMBOL_MINUS = 47,                     /* MINUS  */
  YYSYMBOL_MULT = 48,                      /* MULT  */
  YYSYMBOL_DIV = 49,                       /* DIV  */
  YYSYMBOL_MOD = 50,                       /* MOD  */
  YYSYMBOL_POW = 51,                       /* POW  */
  YYSYMBOL_BITAND = 52,                    /* BITAND  */
  YYSYMBOL_BITOR = 53,                     /* BITOR  */
  YYSYMBOL_BITXOR = 54,                    /* BITXOR  */
  YYSYMBOL_BITNOT = 55,                    /* BITNOT  */
  YYSYMBOL_LSHIFT = 56,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 57,                    /* RSHIFT  */
  YYSYMBOL_ASSIGN = 58,                    /* ASSIGN  */
  YYSYMBOL_DOLLAR = 59,                    /* DOLLAR  */
  YYSYMBOL_LPAREN = 60,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 61,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 62,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 63,                     /* COMMA  */
  YYSYMBOL_DOT = 64,                       /* DOT  */
  YYSYMBOL_COLON = 65,                     /* COLON  */
  YYSYMBOL_LBRACE = 66,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 67,                    /* RBRACE  */
  YYSYMBOL_NEWLINE = 68,                   /* NEWLINE  */
  YYSYMBOL_ERROR = 69,                     /* ERROR  */
  YYSYMBOL_CASE = 70,                      /* CASE  */
  YYSYMBOL_DEFAULT = 71,                   /* DEFAULT  */
  YYSYMBOL_UNARY_MINUS = 72,               /* UNARY_MINUS  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_program = 74,                   /* program  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_assignment = 76,                /* assignment  */
  YYSYMBOL_expression = 77,                /* expression  */
  YYSYMBOL_arithmetic_expr = 78,           /* arithmetic_expr  */
  YYSYMBOL_boolean_expr = 79,              /* boolean_expr  */
  YYSYMBOL_string_expr = 80,               /* string_expr  */
  YYSYMBOL_control_statement = 81,         /* control_statement  */
  YYSYMBOL_if_statement = 82,              /* if_statement  */
  YYSYMBOL_while_statement = 83,           /* while_statement  */
  YYSYMBOL_for_statement = 84,             /* for_statement  */
  YYSYMBOL_proc_definition = 85,           /* proc_definition  */
  YYSYMBOL_parameter_list = 86,            /* parameter_list  */
  YYSYMBOL_return_statement = 87,          /* return_statement  */
  YYSYMBOL_break_statement = 88,           /* break_statement  */
  YYSYMBOL_continue_statement = 89,        /* continue_statement  */
  YYSYMBOL_block = 90,                     /* block  */
  YYSYMBOL_91_1 = 91                       /* $@1  */
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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

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
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    58,    62,    63,    64,    65,    69,    73,
      74,    75,    76,    77,    81,    82,    83,    84,    85,    86,
      94,    95,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   115,   116,   117,   128,   129,
     130,   131,   132,   133,   134,   138,   139,   140,   144,   148,
     156,   157,   161,   162,   166,   167,   171,   175,   179,   179,
     180
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "BOOLEAN",
  "DOUBLE", "STRING", "COMMAND", "VARIABLE", "IDENTIFIER", "IF", "ELSE",
  "ELSEIF", "WHILE", "FOR", "FOREACH", "PROC", "RETURN", "SET", "EXPR",
  "SWITCH", "BREAK", "CONTINUE", "IN", "FUNC_ABS", "FUNC_SIN", "FUNC_COS",
  "FUNC_TAN", "FUNC_EXP", "FUNC_LOG", "FUNC_SQRT", "FUNC_RAND", "FUNC_INT",
  "FUNC_DOUBLE", "FUNC_ROUND", "EQ", "NE", "LT", "GT", "LE", "GE", "STREQ",
  "STRNE", "AND", "OR", "NOT", "PLUS", "MINUS", "MULT", "DIV", "MOD",
  "POW", "BITAND", "BITOR", "BITXOR", "BITNOT", "LSHIFT", "RSHIFT",
  "ASSIGN", "DOLLAR", "LPAREN", "RPAREN", "SEMICOLON", "COMMA", "DOT",
  "COLON", "LBRACE", "RBRACE", "NEWLINE", "ERROR", "CASE", "DEFAULT",
  "UNARY_MINUS", "$accept", "program", "statement", "assignment",
  "expression", "arithmetic_expr", "boolean_expr", "string_expr",
  "control_statement", "if_statement", "while_statement", "for_statement",
  "proc_definition", "parameter_list", "return_statement",
  "break_statement", "continue_statement", "block", "$@1", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,   147,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,    78,    78,   -52,    12,    28,    17,   -53,   -53,    78,
      71,    78,   -23,   -53,   -53,   151,   -14,   -36,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   151,     4,   -36,     4,
      42,    18,   -53,    28,   -14,    71,   -53,   135,   -20,   -53,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      78,    78,     7,     7,     7,   -53,   -53,    27,   -53,   -16,
      -2,   -53,    80,   -53,   -53,    43,    43,    43,    43,    43,
      43,    37,    37,   -53,   -53,   -53,    50,    30,    30,    30,
     -53,     5,    78,    78,   -53,     5,    16,    99,   -53,     4,
     -40,   -53,     5,    86,   -53,   -53,    42,   -53,   -53,    40,
       5,   -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     7,    14,    22,    15,    35,    13,    12,
      36,     0,     0,     0,     0,    55,     0,    56,    57,     0,
       0,     0,     0,     5,     6,     9,    10,    11,     4,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,    54,     0,    33,     0,    20,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    58,    45,    48,     0,
       0,     8,     0,    21,    34,    23,    24,    25,    26,    27,
      28,    16,    17,    18,    19,    31,    32,    29,    30,    37,
       2,     0,     0,     0,    52,     0,     0,     0,    46,     0,
       0,    50,     0,     0,    59,    47,     0,    51,    53,     0,
       0,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,    20,   -53,   -38,    -3,    -1,     6,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -30,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    22,    23,    24,    36,    26,    38,    28,    29,
      30,    31,    32,    96,    33,    34,    35,    67,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      25,    27,    69,    60,    61,    62,    63,    94,    40,    68,
      65,    65,    42,     7,    25,    27,    10,    37,    39,    46,
      47,    41,   106,    60,    61,    44,    43,    48,    64,    60,
      61,     4,     5,     6,     7,     8,     9,    10,    91,    92,
      71,    74,    25,    27,    72,    49,    93,    60,    61,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    95,
      16,    98,    87,    88,    89,   101,    85,    86,   109,   105,
      66,    66,   107,    19,     4,    20,     6,   102,    70,   103,
     111,     4,     5,     6,     7,    58,    59,    10,    21,    56,
      57,    58,    59,    60,    64,   108,    25,    27,    99,   100,
       3,   110,     4,     5,     6,     7,     8,     9,    10,    11,
      97,     0,    12,    13,     0,    14,    15,    16,    20,     0,
      17,    18,     0,    19,     0,    20,    56,    57,    58,    59,
       0,    45,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    73,     0,     0,    19,     0,    20,     2,     3,     0,
       4,     5,     6,     7,     8,     9,    10,    11,     0,    21,
      12,    13,     0,    14,    15,    16,   104,     0,    17,    18,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,    56,    57,    58,    59,     0,    50,    51,    52,    53,
      54,    55,    19,     0,    20,     0,    73,    56,    57,    58,
      59,     0,     0,     0,     0,     0,     0,    21
};

static const yytype_int8 yycheck[] =
{
       1,     1,    40,    43,    44,    41,    42,     9,    60,    39,
       6,     6,    15,     6,    15,    15,     9,    11,    12,    20,
      21,     9,    62,    43,    44,    19,     9,    21,    64,    43,
      44,     3,     4,     5,     6,     7,     8,     9,    11,    12,
      43,    61,    43,    43,    45,    68,    62,    43,    44,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      18,    91,    62,    63,    64,    95,    60,    61,   106,    99,
      66,    66,   102,    45,     3,    47,     5,    61,    60,    63,
     110,     3,     4,     5,     6,    48,    49,     9,    60,    46,
      47,    48,    49,    43,    64,     9,    97,    97,    92,    93,
       1,    61,     3,     4,     5,     6,     7,     8,     9,    10,
      90,    -1,    13,    14,    -1,    16,    17,    18,    47,    -1,
      21,    22,    -1,    45,    -1,    47,    46,    47,    48,    49,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    61,    -1,    -1,    45,    -1,    47,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    60,
      13,    14,    -1,    16,    17,    18,    67,    -1,    21,    22,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    -1,    35,    36,    37,    38,
      39,    40,    45,    -1,    47,    -1,    61,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    74,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    13,    14,    16,    17,    18,    21,    22,    45,
      47,    60,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    87,    88,    89,    78,    79,    80,    79,
      60,     9,    77,     9,    79,    60,    78,    78,    79,    68,
      35,    36,    37,    38,    39,    40,    46,    47,    48,    49,
      43,    44,    41,    42,    64,     6,    66,    90,    90,    76,
      60,    77,    78,    61,    61,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      91,    11,    12,    62,     9,    61,    86,    74,    90,    79,
      79,    90,    61,    63,    67,    90,    62,    90,     9,    76,
      61,    90
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    75,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    83,    84,
      85,    85,    86,    86,    87,    87,    88,    89,    91,    90,
      90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       2,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     6,     3,     9,
       5,     6,     1,     3,     2,     1,     1,     1,     0,     4,
       1
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
  case 8: /* assignment: SET IDENTIFIER expression  */
#line 69 "parser.y"
                              { printf("Assign: %s = expr\n", (yyvsp[-1].string_val)); free((yyvsp[-1].string_val)); }
#line 1263 "parser.tab.c"
    break;

  case 12: /* expression: VARIABLE  */
#line 76 "parser.y"
               { printf("Variable: %s\n", (yyvsp[0].string_val)); free((yyvsp[0].string_val)); }
#line 1269 "parser.tab.c"
    break;

  case 13: /* expression: COMMAND  */
#line 77 "parser.y"
              { printf("Command: %s\n", (yyvsp[0].string_val)); free((yyvsp[0].string_val)); }
#line 1275 "parser.tab.c"
    break;

  case 14: /* arithmetic_expr: INTEGER  */
#line 81 "parser.y"
            { (yyval.double_val) = (yyvsp[0].int_val); }
#line 1281 "parser.tab.c"
    break;

  case 15: /* arithmetic_expr: DOUBLE  */
#line 82 "parser.y"
             { (yyval.double_val) = (yyvsp[0].double_val); }
#line 1287 "parser.tab.c"
    break;

  case 16: /* arithmetic_expr: arithmetic_expr PLUS arithmetic_expr  */
#line 83 "parser.y"
                                           { (yyval.double_val) = (yyvsp[-2].double_val) + (yyvsp[0].double_val); }
#line 1293 "parser.tab.c"
    break;

  case 17: /* arithmetic_expr: arithmetic_expr MINUS arithmetic_expr  */
#line 84 "parser.y"
                                            { (yyval.double_val) = (yyvsp[-2].double_val) - (yyvsp[0].double_val); }
#line 1299 "parser.tab.c"
    break;

  case 18: /* arithmetic_expr: arithmetic_expr MULT arithmetic_expr  */
#line 85 "parser.y"
                                           { (yyval.double_val) = (yyvsp[-2].double_val) * (yyvsp[0].double_val); }
#line 1305 "parser.tab.c"
    break;

  case 19: /* arithmetic_expr: arithmetic_expr DIV arithmetic_expr  */
#line 86 "parser.y"
                                          { 
        if ((yyvsp[0].double_val) == 0.0) {
            yyerror("Division by zero");
            (yyval.double_val) = 0;
        } else {
            (yyval.double_val) = (yyvsp[-2].double_val) / (yyvsp[0].double_val);
        }
    }
#line 1318 "parser.tab.c"
    break;

  case 20: /* arithmetic_expr: MINUS arithmetic_expr  */
#line 94 "parser.y"
                                              { (yyval.double_val) = -(yyvsp[0].double_val); }
#line 1324 "parser.tab.c"
    break;

  case 21: /* arithmetic_expr: LPAREN arithmetic_expr RPAREN  */
#line 95 "parser.y"
                                    { (yyval.double_val) = (yyvsp[-1].double_val); }
#line 1330 "parser.tab.c"
    break;

  case 22: /* boolean_expr: BOOLEAN  */
#line 99 "parser.y"
            { (yyval.int_val) = (yyvsp[0].int_val); }
#line 1336 "parser.tab.c"
    break;

  case 23: /* boolean_expr: arithmetic_expr EQ arithmetic_expr  */
#line 100 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) == (yyvsp[0].double_val); }
#line 1342 "parser.tab.c"
    break;

  case 24: /* boolean_expr: arithmetic_expr NE arithmetic_expr  */
#line 101 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) != (yyvsp[0].double_val); }
#line 1348 "parser.tab.c"
    break;

  case 25: /* boolean_expr: arithmetic_expr LT arithmetic_expr  */
#line 102 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) < (yyvsp[0].double_val); }
#line 1354 "parser.tab.c"
    break;

  case 26: /* boolean_expr: arithmetic_expr GT arithmetic_expr  */
#line 103 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) > (yyvsp[0].double_val); }
#line 1360 "parser.tab.c"
    break;

  case 27: /* boolean_expr: arithmetic_expr LE arithmetic_expr  */
#line 104 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) <= (yyvsp[0].double_val); }
#line 1366 "parser.tab.c"
    break;

  case 28: /* boolean_expr: arithmetic_expr GE arithmetic_expr  */
#line 105 "parser.y"
                                         { (yyval.int_val) = (yyvsp[-2].double_val) >= (yyvsp[0].double_val); }
#line 1372 "parser.tab.c"
    break;

  case 29: /* boolean_expr: string_expr STREQ string_expr  */
#line 106 "parser.y"
                                    { (yyval.int_val) = strcmp((yyvsp[-2].string_val), (yyvsp[0].string_val)) == 0; }
#line 1378 "parser.tab.c"
    break;

  case 30: /* boolean_expr: string_expr STRNE string_expr  */
#line 107 "parser.y"
                                    { (yyval.int_val) = strcmp((yyvsp[-2].string_val), (yyvsp[0].string_val)) != 0; }
#line 1384 "parser.tab.c"
    break;

  case 31: /* boolean_expr: boolean_expr AND boolean_expr  */
#line 108 "parser.y"
                                    { (yyval.int_val) = (yyvsp[-2].int_val) && (yyvsp[0].int_val); }
#line 1390 "parser.tab.c"
    break;

  case 32: /* boolean_expr: boolean_expr OR boolean_expr  */
#line 109 "parser.y"
                                   { (yyval.int_val) = (yyvsp[-2].int_val) || (yyvsp[0].int_val); }
#line 1396 "parser.tab.c"
    break;

  case 33: /* boolean_expr: NOT boolean_expr  */
#line 110 "parser.y"
                       { (yyval.int_val) = !(yyvsp[0].int_val); }
#line 1402 "parser.tab.c"
    break;

  case 34: /* boolean_expr: LPAREN boolean_expr RPAREN  */
#line 111 "parser.y"
                                 { (yyval.int_val) = (yyvsp[-1].int_val); }
#line 1408 "parser.tab.c"
    break;

  case 35: /* string_expr: STRING  */
#line 115 "parser.y"
           { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1414 "parser.tab.c"
    break;

  case 36: /* string_expr: IDENTIFIER  */
#line 116 "parser.y"
                 { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1420 "parser.tab.c"
    break;

  case 37: /* string_expr: string_expr DOT string_expr  */
#line 117 "parser.y"
                                  {
        char* result = malloc(strlen((yyvsp[-2].string_val)) + strlen((yyvsp[0].string_val)) + 1);
        strcpy(result, (yyvsp[-2].string_val));
        strcat(result, (yyvsp[0].string_val));
        free((yyvsp[-2].string_val));
        free((yyvsp[0].string_val));
        (yyval.string_val) = result;
    }
#line 1433 "parser.tab.c"
    break;

  case 45: /* if_statement: IF boolean_expr block  */
#line 138 "parser.y"
                          { printf("If statement\n"); }
#line 1439 "parser.tab.c"
    break;

  case 46: /* if_statement: IF boolean_expr block ELSE block  */
#line 139 "parser.y"
                                       { printf("If-Else statement\n"); }
#line 1445 "parser.tab.c"
    break;

  case 47: /* if_statement: IF boolean_expr block ELSEIF boolean_expr block  */
#line 140 "parser.y"
                                                      { printf("If-ElseIf statement\n"); }
#line 1451 "parser.tab.c"
    break;

  case 48: /* while_statement: WHILE boolean_expr block  */
#line 144 "parser.y"
                             { printf("While loop\n"); }
#line 1457 "parser.tab.c"
    break;

  case 49: /* for_statement: FOR LPAREN assignment SEMICOLON boolean_expr SEMICOLON assignment RPAREN block  */
#line 148 "parser.y"
                                                                                   { printf("For loop\n"); }
#line 1463 "parser.tab.c"
    break;

  case 50: /* proc_definition: PROC IDENTIFIER LPAREN RPAREN block  */
#line 156 "parser.y"
                                        { printf("Procedure: %s\n", (yyvsp[-3].string_val)); free((yyvsp[-3].string_val)); }
#line 1469 "parser.tab.c"
    break;

  case 51: /* proc_definition: PROC IDENTIFIER LPAREN parameter_list RPAREN block  */
#line 157 "parser.y"
                                                         { printf("Procedure with params: %s\n", (yyvsp[-4].string_val)); free((yyvsp[-4].string_val)); }
#line 1475 "parser.tab.c"
    break;

  case 52: /* parameter_list: IDENTIFIER  */
#line 161 "parser.y"
               { free((yyvsp[0].string_val)); }
#line 1481 "parser.tab.c"
    break;

  case 53: /* parameter_list: parameter_list COMMA IDENTIFIER  */
#line 162 "parser.y"
                                      { free((yyvsp[0].string_val)); }
#line 1487 "parser.tab.c"
    break;

  case 54: /* return_statement: RETURN expression  */
#line 166 "parser.y"
                      { printf("Return with value\n"); }
#line 1493 "parser.tab.c"
    break;

  case 55: /* return_statement: RETURN  */
#line 167 "parser.y"
             { printf("Return void\n"); }
#line 1499 "parser.tab.c"
    break;

  case 56: /* break_statement: BREAK  */
#line 171 "parser.y"
          { printf("Break\n"); }
#line 1505 "parser.tab.c"
    break;

  case 57: /* continue_statement: CONTINUE  */
#line 175 "parser.y"
             { printf("Continue\n"); }
#line 1511 "parser.tab.c"
    break;

  case 58: /* $@1: %empty  */
#line 179 "parser.y"
           { set_control_context(1); }
#line 1517 "parser.tab.c"
    break;

  case 59: /* block: LBRACE $@1 program RBRACE  */
#line 179 "parser.y"
                                                      { set_control_context(0); (yyval.string_val) = "block"; }
#line 1523 "parser.tab.c"
    break;

  case 60: /* block: STRING  */
#line 180 "parser.y"
             { (yyval.string_val) = (yyvsp[0].string_val); }
#line 1529 "parser.tab.c"
    break;


#line 1533 "parser.tab.c"

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

#line 183 "parser.y"


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
