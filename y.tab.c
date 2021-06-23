/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "B072040008.y"

	#include<stdio.h>
	int lineCount;
	int charCount;
	void yyerror(const char*);
	int yylex();
	char *yytext;
	int lookup(char *x);
	void dump();
	int tmp;
	char s[20];

#line 83 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TYPE = 258,
    VOID = 259,
    STATIC = 260,
    FINAL = 261,
    CLASS = 262,
    MAIN = 263,
    NEW = 264,
    PUBLIC = 265,
    PROTECTED = 266,
    PRIVATE = 267,
    READ = 268,
    PRINT = 269,
    CONST = 270,
    IF = 271,
    ELSEIF = 272,
    ELSE = 273,
    SWITCH = 274,
    CASE = 275,
    BREAK = 276,
    DEFAULT = 277,
    FOR = 278,
    DO = 279,
    WHILE = 280,
    CONTINUE = 281,
    RETURN = 282,
    NEWLINE = 283,
    SEMICOLON = 284,
    COLON = 285,
    COMMA = 286,
    DOT = 287,
    SQUARE_L = 288,
    SQUARE_R = 289,
    CURLY_L = 290,
    CURLY_R = 291,
    PARENTHESES_L = 292,
    PARENTHESES_R = 293,
    ASSIGN = 294,
    CONDITION = 295,
    DOUBLEPLUS = 296,
    DOUBLEMINUS = 297,
    PLUS = 298,
    MINUS = 299,
    MULTIPLY = 300,
    DIVIDE = 301,
    AND = 302,
    OR = 303,
    INT = 304,
    FLOAT = 305,
    ERRID = 306,
    ID = 307,
    STRING = 308
  };
#endif
/* Tokens.  */
#define TYPE 258
#define VOID 259
#define STATIC 260
#define FINAL 261
#define CLASS 262
#define MAIN 263
#define NEW 264
#define PUBLIC 265
#define PROTECTED 266
#define PRIVATE 267
#define READ 268
#define PRINT 269
#define CONST 270
#define IF 271
#define ELSEIF 272
#define ELSE 273
#define SWITCH 274
#define CASE 275
#define BREAK 276
#define DEFAULT 277
#define FOR 278
#define DO 279
#define WHILE 280
#define CONTINUE 281
#define RETURN 282
#define NEWLINE 283
#define SEMICOLON 284
#define COLON 285
#define COMMA 286
#define DOT 287
#define SQUARE_L 288
#define SQUARE_R 289
#define CURLY_L 290
#define CURLY_R 291
#define PARENTHESES_L 292
#define PARENTHESES_R 293
#define ASSIGN 294
#define CONDITION 295
#define DOUBLEPLUS 296
#define DOUBLEMINUS 297
#define PLUS 298
#define MINUS 299
#define MULTIPLY 300
#define DIVIDE 301
#define AND 302
#define OR 303
#define INT 304
#define FLOAT 305
#define ERRID 306
#define ID 307
#define STRING 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "B072040008.y"

	char *name;

#line 245 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1093

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

#define YYUNDEFTOK  2
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    73,    74,    75,
      76,    77,    78,    80,    84,    86,    89,    90,    93,    94,
      95,    96,    97,    98,   101,   102,   103,   104,   105,   106,
     108,   109,   110,   113,   114,   115,   116,   117,   118,   119,
     120,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   171,   172,   173,   174,   175,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   201,
     202,   203,   206,   207,   208,   209,   210,   211,   211,   214,
     215,   216,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   230
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "VOID", "STATIC", "FINAL",
  "CLASS", "MAIN", "NEW", "PUBLIC", "PROTECTED", "PRIVATE", "READ",
  "PRINT", "CONST", "IF", "ELSEIF", "ELSE", "SWITCH", "CASE", "BREAK",
  "DEFAULT", "FOR", "DO", "WHILE", "CONTINUE", "RETURN", "NEWLINE",
  "SEMICOLON", "COLON", "COMMA", "DOT", "SQUARE_L", "SQUARE_R", "CURLY_L",
  "CURLY_R", "PARENTHESES_L", "PARENTHESES_R", "ASSIGN", "CONDITION",
  "DOUBLEPLUS", "DOUBLEMINUS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "AND", "OR", "INT", "FLOAT", "ERRID", "ID", "STRING", "$accept",
  "dec_list", "error_dec", "dec", "idlist", "invaldid", "array",
  "object_dec", "class_dec", "classname", "method", "method_modifier",
  "main", "argument", "stmt_list", "stmt", "compound", "com_list",
  "simple", "name", "expr_list", "expression", "def", "term", "factor",
  "prefixop", "postfixop", "const_expr", "method_invocation",
  "method_call", "conditional", "$@1", "boolean_expr", "loop",
  "forinitopt", "forupdateopt", "return", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF (-228)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     355,    66,    21,    30,    34,   -37,     7,  -228,  -228,  -228,
      15,   304,  -228,  -228,  -228,   355,  -228,    49,  -228,    57,
    -228,  -228,    47,    37,  -228,    71,   -14,  -228,    70,    83,
      -4,    -4,  -228,    80,    18,  1041,  -228,   355,  -228,  -228,
    -228,    96,    85,    25,    94,    32,  1041,   118,  -228,    48,
     110,   114,   -14,   -14,   355,   109,   108,   133,  1041,  -228,
    -228,  -228,  -228,  -228,  -228,   507,    95,  -228,   192,  -228,
     174,   123,  -228,  -228,  -228,   170,   144,   108,   149,   156,
     233,   159,   234,  -228,   161,   108,   173,   189,   668,   182,
     179,   204,   618,     1,  -228,   618,   108,   202,   187,   198,
    -228,  -228,  -228,  1027,  1041,  1041,  1041,  1041,  1041,  -228,
     -37,    52,  -228,   108,   242,   618,  -228,   225,  1041,  -228,
     108,   253,  -228,   468,  -228,   262,    10,  1041,   155,   258,
     264,   268,  1041,   299,   455,   678,   518,  -228,  -228,   270,
    -228,   244,   234,   290,  -228,  -228,   618,  -228,    -4,   -14,
     291,  -228,  -228,  -228,  -228,   288,  -228,   285,  -228,  -228,
    -228,   278,   280,   293,   292,   294,  -228,   325,   368,   884,
     234,  -228,   884,  -228,   555,   295,   298,   820,  -228,  1041,
     308,   165,    78,   135,   286,  1010,  1041,   234,   230,  1041,
     618,   884,  -228,  -228,  -228,  1041,  -228,  -228,  -228,   -14,
    1041,  -228,  -228,  1041,  1041,   301,   884,   311,   320,  -228,
     692,   724,  -228,  -228,   852,  -228,    -5,  1041,  1041,   948,
    1041,  1041,   302,   323,   319,  1041,   211,    92,   418,  -228,
    -228,  -228,   234,    -2,  -228,  -228,  -228,   756,   884,   334,
     884,  -228,  -228,  -228,   316,    65,   234,  -228,  -228,   234,
     226,   226,   338,  -228,   347,  -228,   980,   618,  1041,  1041,
    -228,   316,  -228,   788,   352,   248,   349,   316,   336,  -228,
     568,  -228,   371,  -228,   354,  -228,  -228,  1041,  -228,   650,
     356,   361,  -228,   916,   108,   234,  -228,   996,   108,   618,
    -228,  -228,  -228,  -228,   618,  -228,  -228,   362,   363,  -228,
    -228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      33,     0,     5,     2,     9,    14,    11,     0,    12,     0,
      13,    16,     0,     0,    22,    17,     8,    21,     0,     0,
       0,     0,    33,     0,     0,     0,     1,     0,     6,     4,
      15,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,    17,     7,    10,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   107,   108,    94,     0,    88,    84,    85,
      91,     0,    95,    99,     3,     0,     0,     0,     0,     0,
       0,     0,    19,    23,    18,     0,     0,     0,     0,    49,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
     105,   106,    98,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    45,     0,     0,     0,    27,     0,     0,    46,
       0,     0,    39,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,    70,    51,    55,     0,
      56,     0,    57,    99,    61,    58,    59,    60,     0,   128,
       0,    63,    44,    96,    82,     0,   110,     0,    83,    86,
      87,    89,    90,     0,     0,     0,    47,     0,     0,     0,
      20,    48,     0,    30,    94,    12,    13,     0,    50,     0,
       0,     0,     0,    17,     0,     0,     0,   132,    94,     0,
      64,    52,    51,    73,    62,     0,    77,    78,   111,   129,
       0,   100,   109,     0,     0,     0,     0,     0,     0,    37,
       0,     0,    28,    29,    52,    54,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,    65,     2,
      72,    53,    74,     0,    92,    93,    26,     0,     0,     0,
      52,    35,    38,    32,     0,     0,   119,   123,   122,    79,
     120,   121,     0,    76,     0,    75,     0,    67,     0,     0,
      66,     0,    36,     0,     0,     0,     0,     0,     0,    80,
       0,   113,   112,    68,     0,    34,    25,     0,   130,     0,
       0,     0,   117,     0,     0,   131,   127,     0,     0,     0,
     115,   114,   116,   126,     0,   124,    69,     0,     0,   118,
     125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,    12,  -228,    -1,    19,  -228,  -228,  -228,    -6,     4,
     277,  -228,   279,    93,   -97,    89,   -55,   -79,  -160,   -27,
     190,   -35,  -228,  -103,  -101,  -228,   141,  -228,   107,  -228,
     125,  -228,    17,     8,   287,  -227,  -228
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   135,    12,    13,   149,    27,    14,    15,    16,    17,
      18,    19,    20,    57,   136,   137,   138,   139,   140,   141,
      67,   142,    21,    69,    70,    71,   102,    72,    73,   144,
     145,   289,   182,   146,   150,   266,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    94,   159,   160,   148,    39,   161,   162,    66,    33,
      38,    82,    11,   148,    40,    32,   151,    47,   168,    66,
      26,    55,   112,    97,   244,   116,   177,   261,    55,    28,
     119,    66,   122,    30,   274,    55,    74,    31,    48,   179,
     280,   152,   220,   221,    34,   220,   221,    24,    51,    52,
      53,    55,    24,    51,    35,    55,    56,   193,   166,   248,
      42,    24,    51,    77,    95,   171,    88,   151,    68,    68,
      80,    44,   210,    29,    22,   211,    66,    66,    66,    66,
      66,    66,    39,   170,    43,    95,    85,    38,    95,   193,
     164,    66,   181,    95,   267,    95,   272,   187,    97,    23,
      66,    41,   234,   235,    95,    66,    66,    49,    45,   237,
      46,   230,   220,   221,   163,    54,   219,    24,    25,   286,
      50,    95,    74,   291,   254,   220,   221,   295,    95,    39,
     256,    90,   103,    91,    38,    75,    78,    76,    81,   220,
     221,   263,    86,    92,   181,    93,    79,    26,    87,   260,
     226,   181,    66,    46,   228,   159,   160,   224,    66,    66,
     232,    89,    66,    22,   247,   181,   222,   199,    66,    83,
      84,    96,    45,    66,    46,   109,    66,    66,   273,   110,
     121,   111,   181,   246,   249,   181,   181,   113,    23,   229,
      66,    66,    55,    66,    66,   114,   216,   117,    66,   143,
     118,   271,   143,   227,   165,   218,    24,   183,   105,   106,
     297,   120,    90,   125,    91,   298,   126,   233,   178,   107,
     108,   249,   143,   104,    92,   192,    93,    95,   290,   293,
     143,    66,    66,   296,   245,   105,   106,   250,   251,   154,
     153,   127,   285,   143,   249,   105,   106,   155,   249,   255,
      66,   167,   249,   143,   105,   106,    90,   192,    91,   -17,
     169,   -17,    98,    99,    95,    55,   215,   -81,   115,    46,
      93,   100,   101,   220,   221,   143,   143,   105,   106,   143,
     231,   103,   -17,   195,   143,   196,   197,   277,   172,   100,
     101,    95,    95,   157,   158,   184,    95,   143,   143,   215,
     215,   185,   148,   231,    36,   186,   194,     1,     2,     3,
       4,     5,     6,   143,     7,     8,     9,   143,   143,   198,
     200,   143,   201,   202,   203,   204,   215,   206,   208,   231,
     205,   212,   207,    37,   213,   143,    58,   217,   223,   236,
      59,    60,    61,    62,   143,   143,   238,   143,    63,    64,
      24,   188,   215,   239,   252,    98,    10,   253,     1,     2,
       3,     4,     5,     6,   143,     7,     8,     9,   265,   268,
     143,   128,     2,     3,     4,     5,     6,   143,     7,     8,
       9,   129,   130,   264,   131,   269,   276,   279,   281,   283,
     288,    90,   284,    91,   287,   132,   143,   191,   299,   300,
     175,   143,   176,    92,   209,   133,   278,    10,   292,    59,
      60,    61,    62,   180,     0,     0,     0,    63,    64,     0,
     134,   128,     2,     3,     4,     5,     6,     0,     7,     8,
       9,   129,   130,     0,   131,     0,     0,     0,     0,     0,
       0,    90,     0,    91,     0,   132,     0,   257,     0,   104,
       0,     0,     0,    92,     0,   133,     0,     0,     0,    59,
      60,   258,   259,     0,     0,     0,     0,    63,    64,     0,
     134,     1,     2,     3,     4,     5,     6,     0,     7,     8,
       9,   129,   130,     0,   131,     0,     0,    98,    99,     0,
       0,    90,   -81,    91,   189,   132,   100,   101,     0,     0,
       0,     0,     0,    92,   173,   133,     0,   -33,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,     0,
     174,   128,     2,     3,     4,     5,     6,     0,     7,     8,
       9,   129,   130,     0,   131,     0,     0,     0,     0,    98,
      99,    90,     0,    91,   -81,   132,   -81,   191,   100,   101,
       0,     0,     0,    92,     0,   133,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,     0,
     134,   128,     2,     3,     4,     5,     6,     0,     7,     8,
       9,   129,   130,     0,   131,     0,   282,    98,    99,     0,
       0,    90,   -81,    91,    35,   132,   100,   101,     0,     0,
       0,     0,     0,    92,     0,   133,     0,   -33,     0,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,     0,
     134,   128,     2,     3,     4,     5,     6,     0,     7,     8,
       9,   129,   130,     0,   131,     0,     0,     0,     0,     0,
       0,    90,     0,    91,     0,   132,     0,     0,     0,     0,
       0,     0,     0,    92,     0,   133,     0,     0,     0,    59,
      60,    61,    62,   129,   130,     0,     0,    63,    64,     0,
     134,     1,     2,     3,     4,     5,     6,     0,     7,     8,
       9,     1,     2,     3,     4,     5,     6,    58,     7,     8,
       9,    59,    60,    61,    62,     0,     0,   123,     0,    63,
      64,     0,    65,     0,   124,   129,   130,   190,   131,     0,
       0,     0,     0,     0,     0,    90,     0,    91,     0,   132,
      10,   240,     0,     0,     0,     0,     0,    92,   241,   133,
      10,     0,     0,    59,    60,    61,    62,   129,   130,     0,
     131,    63,    64,     0,    65,     0,     0,    90,     0,    91,
       0,   132,     0,   240,     0,     0,     0,     0,     0,    92,
     242,   133,     0,     0,     0,    59,    60,    61,    62,   129,
     130,     0,   131,    63,    64,     0,    65,     0,     0,    90,
       0,    91,     0,   132,     0,   240,     0,     0,     0,     0,
       0,    92,   262,   133,     0,     0,     0,    59,    60,    61,
      62,   129,   130,     0,   131,    63,    64,     0,    65,     0,
       0,    90,     0,    91,     0,   132,     0,   240,     0,     0,
       0,     0,     0,    92,   275,   133,     0,     0,     0,    59,
      60,    61,    62,   129,   130,     0,   131,    63,    64,     0,
      65,     0,     0,    90,     0,    91,     0,   132,     0,   214,
       0,     0,     0,     0,     0,    92,     0,   133,     0,     0,
       0,    59,    60,    61,    62,   129,   130,     0,   131,    63,
      64,     0,    65,     0,     0,    90,     0,    91,     0,   132,
       0,     0,     0,     0,     0,     0,     0,    92,   243,   133,
       0,     0,     0,    59,    60,    61,    62,   129,   130,     0,
     131,    63,    64,     0,    65,     0,     0,    90,     0,    91,
       0,   132,     0,     0,     0,     0,     0,     0,     0,    92,
       0,   133,     0,     0,     0,    59,    60,    61,    62,   129,
     130,     0,   131,    63,    64,     0,    65,     0,     0,    90,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,   133,     0,     0,     0,    59,    60,    61,
      62,   129,   130,     0,     0,    63,    64,     0,    65,     0,
       0,    90,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,   133,     0,     0,     0,    59,
      60,    61,    62,   129,   130,     0,     0,    63,    64,     0,
      65,     0,     0,    90,     0,    91,     0,     0,     0,   129,
     130,     0,     0,     0,     0,   270,     0,   133,     0,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,   294,    65,    58,     0,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,    63,    64,    58,    65,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,     0,    65,   225,    58,   156,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,    63,    64,    58,    65,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
      63,    64,     0,    65
};

static const yytype_int16 yycheck[] =
{
      35,    56,   105,   106,     3,    11,   107,   108,    35,     5,
      11,    46,     0,     3,    15,    52,    95,    31,   115,    46,
       1,     3,    77,    58,    29,    80,   123,    29,     3,     8,
      85,    58,    87,     3,   261,     3,    37,     3,    52,    29,
     267,    96,    47,    48,    37,    47,    48,    51,    52,    30,
      31,     3,    51,    52,    39,     3,    38,   136,   113,   219,
       3,    51,    52,    38,    56,   120,    54,   146,   103,   104,
      38,    34,   169,    52,     8,   172,   103,   104,   105,   106,
     107,   108,    88,   118,    37,    77,    38,    88,    80,   168,
      38,   118,   127,    85,    29,    87,   256,   132,   133,    33,
     127,    52,   203,   204,    96,   132,   133,    37,    37,   206,
      39,   190,    47,    48,   110,    35,    38,    51,    52,   279,
      37,   113,   123,   283,   225,    47,    48,   287,   120,   135,
      38,    23,    37,    25,   135,    39,    43,    52,    45,    47,
      48,   238,    49,    35,   179,    37,    52,   128,    38,   228,
     185,   186,   179,    39,   189,   258,   259,   184,   185,   186,
     195,    52,   189,     8,   219,   200,    31,   148,   195,    51,
      52,    38,    37,   200,    39,    52,   203,   204,   257,     9,
      87,    37,   217,   218,   219,   220,   221,    38,    33,   190,
     217,   218,     3,   220,   221,    39,   179,    38,   225,    92,
      39,   256,    95,   186,   111,    40,    51,    52,    43,    44,
     289,    38,    23,    31,    25,   294,    37,   200,   125,    45,
      46,   256,   115,    31,    35,   136,    37,   219,   283,   284,
     123,   258,   259,   288,   217,    43,    44,   220,   221,    52,
      38,    37,   277,   136,   279,    43,    44,    49,   283,    38,
     277,     9,   287,   146,    43,    44,    23,   168,    25,    29,
      35,    31,    32,    33,   256,     3,   177,    37,    35,    39,
      37,    41,    42,    47,    48,   168,   169,    43,    44,   172,
     191,    37,    52,    39,   177,    41,    42,    39,    35,    41,
      42,   283,   284,   103,   104,    37,   288,   190,   191,   210,
     211,    37,     3,   214,     0,    37,    36,     3,     4,     5,
       6,     7,     8,   206,    10,    11,    12,   210,   211,    29,
      29,   214,    34,    38,    46,    45,   237,    35,     3,   240,
      37,    36,    38,    29,    36,   228,    37,    29,    52,    38,
      41,    42,    43,    44,   237,   238,    35,   240,    49,    50,
      51,    52,   263,    33,    52,    32,    52,    38,     3,     4,
       5,     6,     7,     8,   257,    10,    11,    12,    52,    31,
     263,     3,     4,     5,     6,     7,     8,   270,    10,    11,
      12,    13,    14,    49,    16,    38,    34,    38,    52,    18,
      29,    23,    38,    25,    38,    27,   289,    29,    36,    36,
     123,   294,   123,    35,    36,    37,   265,    52,   283,    41,
      42,    43,    44,   126,    -1,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    32,    33,    -1,
      -1,    23,    37,    25,    39,    27,    41,    42,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    52,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,    32,
      33,    23,    -1,    25,    37,    27,    39,    29,    41,    42,
      -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    -1,    18,    32,    33,    -1,
      -1,    23,    37,    25,    39,    27,    41,    42,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    52,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    13,    14,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,     3,     4,     5,     6,     7,     8,    37,    10,    11,
      12,    41,    42,    43,    44,    -1,    -1,    29,    -1,    49,
      50,    -1,    52,    -1,    36,    13,    14,    29,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      52,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      52,    -1,    -1,    41,    42,    43,    44,    13,    14,    -1,
      16,    49,    50,    -1,    52,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    -1,    -1,    41,    42,    43,    44,    13,
      14,    -1,    16,    49,    50,    -1,    52,    -1,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    13,    14,    -1,    16,    49,    50,    -1,    52,    -1,
      -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    13,    14,    -1,    16,    49,    50,    -1,
      52,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    -1,
      -1,    41,    42,    43,    44,    13,    14,    -1,    16,    49,
      50,    -1,    52,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    43,    44,    13,    14,    -1,
      16,    49,    50,    -1,    52,    -1,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,    41,    42,    43,    44,    13,
      14,    -1,    16,    49,    50,    -1,    52,    -1,    -1,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    13,    14,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    13,    14,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    -1,
      -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      50,    35,    52,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    49,    50,    37,    52,    -1,
      -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,    53,    37,    38,    -1,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    49,    50,    37,    52,
      -1,    -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      52,    55,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    76,     8,    33,    51,    52,    58,    59,     8,    52,
       3,     3,    52,    63,    37,    39,     0,    29,    57,    62,
      57,    52,     3,    37,    34,    37,    39,    31,    52,    37,
      37,    52,    58,    58,    35,     3,    38,    67,    37,    41,
      42,    43,    44,    49,    50,    52,    73,    74,    75,    77,
      78,    79,    81,    82,    57,    39,    52,    38,    67,    52,
      38,    67,    75,    51,    52,    38,    67,    38,    55,    52,
      23,    25,    35,    37,    70,    87,    38,    75,    32,    33,
      41,    42,    80,    37,    31,    43,    44,    45,    46,    52,
       9,    37,    70,    38,    39,    35,    70,    38,    39,    70,
      38,    67,    70,    29,    36,    31,    37,    37,     3,    13,
      14,    16,    27,    37,    52,    55,    68,    69,    70,    71,
      72,    73,    75,    82,    83,    84,    87,    90,     3,    58,
      88,    71,    70,    38,    52,    49,    38,    74,    74,    77,
      77,    78,    78,    63,    38,    67,    70,     9,    68,    35,
      75,    70,    35,    36,    52,    64,    66,    68,    67,    29,
      88,    75,    86,    52,    37,    37,    37,    75,    52,    39,
      29,    29,    69,    71,    36,    39,    41,    42,    29,    58,
      29,    34,    38,    46,    45,    37,    35,    38,     3,    36,
      68,    68,    36,    36,    29,    69,    86,    29,    40,    38,
      47,    48,    31,    52,    73,    53,    75,    86,    75,    57,
      71,    69,    75,    86,    78,    78,    38,    68,    35,    33,
      29,    36,    36,    36,    29,    86,    75,    70,    72,    75,
      86,    86,    52,    38,    78,    38,    38,    29,    43,    44,
      71,    29,    36,    68,    49,    52,    89,    29,    31,    38,
      35,    70,    72,    71,    89,    36,    34,    39,    80,    38,
      89,    52,    18,    18,    38,    75,    72,    38,    29,    85,
      70,    72,    84,    70,    35,    72,    70,    71,    71,    36,
      36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    61,    61,    62,    62,
      62,    62,    62,    63,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    84,    84,    84,    84,    84,    85,    84,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     2,     3,     2,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     3,     3,
       5,     1,     1,     3,     2,    10,     7,     5,     7,     7,
       6,     5,     8,     1,     9,     8,     8,     7,     8,     5,
       1,     1,     1,     4,     5,     5,     5,     6,     6,     2,
       4,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     3,     4,     4,     5,     8,
       1,     2,     3,     2,     3,     4,     4,     2,     2,     1,
       5,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     1,     5,     5,     1,     1,     3,     2,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     2,     5,     5,     7,     7,     7,     0,     9,     3,
       3,     3,     5,     5,     9,    11,     8,     8,     1,     2,
       2,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 15:
#line 69 "B072040008.y"
          {printf("error\n");}
#line 1783 "y.tab.c"
    break;

  case 22:
#line 79 "B072040008.y"
                {printf("\nLine:%d, 1st char : %d, \"%s\" is an invalid \"id\".\n",lineCount, charCount, yytext);}
#line 1789 "y.tab.c"
    break;

  case 23:
#line 81 "B072040008.y"
                {printf("Line:%d, 1st char : %d, \"%s\" is an invalid \"id\".\n",lineCount, charCount, yytext);}
#line 1795 "y.tab.c"
    break;

  case 24:
#line 85 "B072040008.y"
                  {printf("\nLine:%d, 1st char : %d, a syntax error that need a comma between two variables at \"%s\".\n",lineCount, charCount,yytext);}
#line 1801 "y.tab.c"
    break;

  case 117:
#line 211 "B072040008.y"
                                                                              {printf("\n> A syntax error at \"%s\".", yytext);}
#line 1807 "y.tab.c"
    break;


#line 1811 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 231 "B072040008.y"

int main(){
	printf("Line 1 : ");
	yyparse();//YACC透過yyparse()呼叫yylex() 並且開始作parsing
	printf("\n");
	return 0;
}
void yyerror(const char *str){
	printf( "\nLine %d, 1st char: %d, %s at \"%s\".", lineCount, charCount, str, yytext);
} 




