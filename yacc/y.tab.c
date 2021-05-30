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
#line 1 "b073021024.y"


	#include<stdio.h>
	void yyerror(const char*); // handles error
	int lookup(char s[]); // check symbol table
	int yylex(); // declare lex
	int f = -1; // for duplicate identifier
	char *yytext; 
	unsigned charCount, lineCount; // line num and position


#line 82 "y.tab.c"

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
    SEMICOLON = 283,
    COLON = 284,
    COMMA = 285,
    DOT = 286,
    square_brackets_l = 287,
    Brackets_l = 288,
    Brackets_r = 289,
    square_brackets_r = 290,
    Parentheses_l = 291,
    Parentheses_r = 292,
    EQUAL = 293,
    DOUBLEPLUS = 294,
    DOUBLEMINUS = 295,
    PLUS = 296,
    MINUS = 297,
    MULTIPLY = 298,
    DIVIDE = 299,
    INFIXOP = 300,
    SYMBOL = 301,
    AND = 302,
    OR = 303,
    INT = 304,
    FLOAT = 305,
    INVALID = 306,
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
#define SEMICOLON 283
#define COLON 284
#define COMMA 285
#define DOT 286
#define square_brackets_l 287
#define Brackets_l 288
#define Brackets_r 289
#define square_brackets_r 290
#define Parentheses_l 291
#define Parentheses_r 292
#define EQUAL 293
#define DOUBLEPLUS 294
#define DOUBLEMINUS 295
#define PLUS 296
#define MINUS 297
#define MULTIPLY 298
#define DIVIDE 299
#define INFIXOP 300
#define SYMBOL 301
#define AND 302
#define OR 303
#define INT 304
#define FLOAT 305
#define INVALID 306
#define ID 307
#define STRING 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "b073021024.y"

	char *name; // define type

#line 244 "y.tab.c"

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   793

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  296

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
       0,    26,    26,    27,    28,    29,    30,    31,    37,    38,
      39,    40,    41,    42,    43,    45,    48,    49,    50,    51,
      52,    53,    58,    61,    62,    63,    64,    65,    66,    68,
      69,    74,    76,    78,    80,    82,    84,    87,    88,    89,
      90,    92,    94,    98,   100,   102,   104,   106,   111,   113,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     129,   131,   133,   134,   135,   136,   137,   140,   142,   143,
     144,   145,   146,   147,   149,   150,   153,   154,   155,   156,
     158,   162,   164,   166,   168,   170,   172,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   212,   213,   214,   215,   218,   220,   222,
     224,   226,   230
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
  "DEFAULT", "FOR", "DO", "WHILE", "CONTINUE", "RETURN", "SEMICOLON",
  "COLON", "COMMA", "DOT", "square_brackets_l", "Brackets_l", "Brackets_r",
  "square_brackets_r", "Parentheses_l", "Parentheses_r", "EQUAL",
  "DOUBLEPLUS", "DOUBLEMINUS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "INFIXOP", "SYMBOL", "AND", "OR", "INT", "FLOAT", "INVALID", "ID",
  "STRING", "$accept", "dec_list", "dec", "idlist", "array", "main",
  "argument", "method", "method_type", "method_invocation", "method_call",
  "class", "object", "stmt_list", "stmt", "compound", "compound_list",
  "simple", "name", "expr_list", "expression", "def", "term", "factor",
  "prefix", "postfix", "const", "bool", "loop", "forinitopt",
  "forupdateopt", "conditional", "return", YY_NULLPTR
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

#define YYPACT_NINF (-181)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     312,     8,    33,    31,    39,    -5,    22,  -181,  -181,  -181,
     -19,   261,  -181,  -181,  -181,  -181,    41,  -181,   312,  -181,
      44,    14,    -9,    60,    57,    87,    81,    81,    93,    69,
     457,   100,  -181,   312,  -181,  -181,    95,  -181,    72,    97,
     -28,    76,   457,   130,   118,    84,   139,   131,    60,    60,
     312,   132,   323,   145,   457,  -181,  -181,  -181,  -181,  -181,
    -181,   753,  -181,   150,  -181,   206,  -181,    74,   149,  -181,
     195,  -181,   171,   323,   172,   182,   177,   390,   190,    70,
    -181,   191,   323,   198,   267,   276,   215,   218,   222,   478,
      17,  -181,  -181,   323,   202,   199,   211,  -181,  -181,  -181,
     738,   457,   457,   457,   457,   457,  -181,   210,   107,  -181,
     323,   265,   240,   478,  -181,   252,   457,  -181,   323,   281,
    -181,   378,  -181,   288,     2,   156,   273,   285,   300,   457,
     174,   511,   528,   266,  -181,   428,  -181,  -181,   308,  -181,
     695,    70,  -181,  -181,   319,    81,    60,   334,  -181,  -181,
    -181,   343,  -181,   314,  -181,  -181,  -181,   326,   344,   359,
     367,   365,  -181,   401,   457,   327,   703,    70,  -181,   703,
    -181,   374,   382,   652,  -181,   156,   396,   404,   380,   260,
     377,   357,   156,    70,   731,   478,  -181,   703,  -181,  -181,
    -181,   -28,   457,  -181,  -181,  -181,    60,   156,  -181,  -181,
     457,   457,   406,   703,   414,   418,    70,  -181,   532,   562,
    -181,  -181,   673,  -181,   146,   156,  -181,   457,   724,   156,
     156,   423,   425,   457,   316,   264,   115,  -181,  -181,  -181,
     422,    70,   248,  -181,  -181,  -181,   592,   703,   416,   703,
    -181,  -181,  -181,   411,   297,    70,  -181,  -181,   333,   258,
     258,  -181,   429,  -181,    68,   343,   335,   411,  -181,   622,
     436,   420,   435,   411,  -181,   455,   456,   447,   439,  -181,
    -181,   -28,   457,  -181,     4,   442,   323,   205,  -181,   323,
     452,    70,  -181,   128,   461,  -181,  -181,  -181,  -181,   335,
     478,  -181,  -181,  -181,   466,  -181
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
       0,     0,     2,     9,    10,    11,     0,    12,    13,    15,
       0,     0,    16,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     5,     4,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     6,     8,
       0,     0,     0,     0,     0,    94,    95,    96,    97,   100,
     101,    87,    92,     0,    81,    77,    78,    82,     0,    88,
       0,     3,     0,     0,     0,     0,     0,     0,     0,    19,
      21,    17,     0,     0,     0,     0,    29,     0,     0,     0,
       0,    23,    61,     0,     0,     0,     0,    98,    99,    91,
       0,     0,     0,     0,     0,     0,    90,     0,     0,    25,
       0,     0,     0,     0,    49,     0,     0,    26,     0,     0,
      36,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    92,    59,    63,    50,    53,     0,    54,
       0,    55,    57,    56,     0,     0,   112,     0,    24,    89,
      75,     0,    41,     0,    76,    79,    80,    84,    83,     0,
       0,     0,    27,     0,     0,     0,     0,    20,    28,     0,
      45,    10,    11,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,   122,    87,    62,    42,    64,    50,    66,
      60,     0,     0,    71,    72,    58,   113,     0,    93,    40,
       0,     0,     0,     0,     0,     0,    18,    34,     0,     0,
      44,    43,     0,    52,     0,     0,   105,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     2,    65,    51,
       0,    67,     0,    85,    86,    48,     0,     0,     0,     0,
      32,    35,    47,     0,     0,   102,   107,   106,     0,   103,
     104,    70,     0,    69,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,    73,     0,   117,     0,     0,    31,
      22,     0,     0,   115,     0,     0,     0,     0,    68,     0,
       0,   116,   111,     0,     0,   119,   118,   120,   110,     0,
       0,   108,   121,   114,     0,   109
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,    13,    -7,     9,  -181,   381,    23,   383,  -181,    90,
    -181,    -8,  -181,  -107,  -120,   -45,  -134,  -180,   -37,   345,
     -30,  -181,   346,   -96,  -181,  -121,   -38,   -60,   -27,   384,
    -155,   233,  -181
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   132,    12,   146,    13,    14,    53,    15,    16,    62,
     134,    17,    18,   135,   136,   137,   138,   139,    63,    64,
     141,    19,    66,    67,    68,    99,    69,   179,   142,   147,
     262,   143,   144
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,   189,    76,    35,    34,   145,   165,    91,   157,   158,
      23,    37,    79,    11,   173,   188,    20,   126,   127,    30,
     145,    59,    60,    40,    94,    92,    71,    41,   109,    42,
     175,   189,   114,    31,    26,    48,    49,   117,   247,   120,
      21,    24,    27,    43,    36,   188,    92,    28,   148,    39,
      92,   228,   140,   213,    47,    92,   221,    92,    29,   208,
      22,    74,   209,    85,    78,   162,    92,   229,    83,    47,
      65,    65,    51,   168,   266,    51,   140,    35,    34,    51,
      38,   126,   127,    92,   140,    25,   167,    51,   213,   213,
      44,    92,   229,    45,   282,   178,   236,   286,   140,   183,
      94,   265,   268,   291,   233,   234,    52,   119,   275,    73,
      51,   102,   103,    77,    71,   214,   213,   104,   105,   229,
     221,    82,   225,    46,    35,    34,    50,   252,   140,   140,
     259,   161,   140,    47,   206,   267,   140,   232,    70,   213,
     273,   126,   127,   222,   160,   178,   174,    72,   140,    75,
     140,   224,   178,   230,   196,   244,   294,   177,    80,   249,
     250,   290,   231,    40,   255,    60,   140,   178,   293,    42,
      81,   140,   140,   246,   243,   140,    84,   145,   227,   133,
     221,   248,    93,    43,    86,   178,   100,   245,    76,   178,
     178,    92,    54,   219,   220,    55,    56,    57,    58,   140,
     140,   106,   140,   133,   107,    59,    60,   108,    61,   110,
      54,   133,   112,    55,    56,    57,    58,   248,   126,   127,
     111,   128,   140,    59,    60,   133,   184,   115,    87,   116,
      88,   284,   285,   280,   288,   118,   101,   248,    89,   149,
     248,    90,   281,   102,   103,   123,   248,   102,   103,    92,
      92,   150,    92,   140,   124,   133,   133,   221,   125,   133,
     151,    32,   159,   133,     1,     2,     3,     4,     5,     6,
      51,     7,     8,     9,   163,   133,   257,   133,   164,     1,
       2,     3,     4,     5,     6,   166,     7,     8,     9,    33,
      87,    51,    88,   133,   186,   219,   220,   218,   133,   133,
      89,   254,   133,    90,   121,   219,   220,   219,   220,   180,
     122,   219,   220,    10,   169,     1,     2,     3,     4,     5,
       6,   181,     7,     8,     9,   263,   133,   133,    10,   133,
       1,     2,     3,     4,     5,     6,   182,     7,     8,     9,
     126,   127,   190,   128,   219,   220,    87,   195,    88,   133,
      87,   199,    88,   253,   129,   187,    89,   102,   103,    90,
      89,   207,   197,   130,    10,   191,    55,    56,    57,    58,
     200,   192,   193,   194,    97,    98,    59,    60,   198,   131,
     133,     1,     2,     3,     4,     5,     6,   201,     7,     8,
       9,   126,   127,    54,   128,   202,    55,    56,    57,    58,
     203,    87,   204,    88,   205,   129,    59,    60,   210,    61,
     223,    89,   170,    87,   130,    88,   211,    55,    56,    57,
      58,   102,   103,   113,   215,   217,    90,    59,    60,   221,
     131,     1,     2,     3,     4,     5,     6,   216,     7,     8,
       9,   126,   127,   235,   128,   153,   154,   237,   155,   156,
     238,    87,   271,    88,    95,   129,   187,   256,   272,    97,
      98,    89,   251,   261,   130,   260,   264,    55,    56,    57,
      58,   270,   274,   276,   277,   278,   279,    59,    60,   283,
     131,     1,     2,     3,     4,     5,     6,   289,     7,     8,
       9,   126,   127,    54,   128,   292,    55,    56,    57,    58,
     295,    87,   171,    88,   172,   129,    59,    60,   176,    61,
     287,    89,     0,     0,   130,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,    59,    60,     0,
     131,     1,     2,     3,     4,     5,     6,     0,     7,     8,
       9,     0,    95,    96,     0,   126,   127,   -74,   128,    30,
      97,    98,     0,     0,     0,    87,   185,    88,     0,   129,
     239,     0,     0,    31,     0,    89,   240,     0,   130,     0,
       0,    55,    56,    57,    58,   126,   127,     0,   128,     0,
      10,    59,    60,     0,    61,    87,     0,    88,     0,   129,
     239,     0,     0,     0,     0,    89,   241,     0,   130,     0,
       0,    55,    56,    57,    58,   126,   127,     0,   128,     0,
       0,    59,    60,     0,    61,    87,     0,    88,     0,   129,
     239,     0,     0,     0,     0,    89,   258,     0,   130,     0,
       0,    55,    56,    57,    58,   126,   127,     0,   128,     0,
       0,    59,    60,     0,    61,    87,     0,    88,     0,   129,
     239,     0,     0,     0,     0,    89,   269,     0,   130,     0,
       0,    55,    56,    57,    58,   126,   127,     0,   128,     0,
       0,    59,    60,     0,    61,    87,     0,    88,     0,   129,
     212,     0,     0,     0,     0,    89,   126,   127,   130,   128,
       0,    55,    56,    57,    58,     0,    87,     0,    88,     0,
     129,    59,    60,     0,    61,     0,    89,   242,     0,   130,
       0,     0,    55,    56,    57,    58,   126,   127,     0,   128,
       0,     0,    59,    60,     0,    61,    87,   191,    88,     0,
     129,   100,     0,   192,   193,   194,    89,   126,   127,   130,
       0,     0,    55,    56,    57,    58,     0,    87,     0,    88,
       0,     0,    59,    60,     0,    61,     0,    89,     0,   -16,
      90,   -16,    95,   226,     0,     0,     0,   -74,     0,    42,
      97,    98,     0,     0,    54,   152,   221,    55,    56,    57,
      58,     0,     0,    43,    95,    96,     0,    59,    60,   -74,
      61,   -74,    97,    98
};

static const yytype_int16 yycheck[] =
{
      30,   135,    40,    11,    11,     3,   113,    52,   104,   105,
       1,    18,    42,     0,   121,   135,     8,    13,    14,    38,
       3,    49,    50,    32,    54,    52,    33,    36,    73,    38,
      28,   165,    77,    52,     3,    26,    27,    82,   218,    84,
      32,     8,     3,    52,     3,   165,    73,    52,    93,    35,
      77,   185,    89,   173,    52,    82,    52,    84,    36,   166,
      52,    38,   169,    50,    41,   110,    93,   187,    45,    52,
     100,   101,     3,   118,   254,     3,   113,    85,    85,     3,
      36,    13,    14,   110,   121,    52,   116,     3,   208,   209,
      30,   118,   212,    36,   274,   125,   203,   277,   135,   129,
     130,    33,   257,   283,   200,   201,    37,    84,   263,    37,
       3,    41,    42,    37,   121,   175,   236,    43,    44,   239,
      52,    37,   182,    36,   132,   132,    33,   223,   165,   166,
     237,   108,   169,    52,   164,   256,   173,   197,    38,   259,
     261,    13,    14,   180,    37,   175,   123,    52,   185,    52,
     187,   181,   182,   191,   145,   215,   290,     1,    28,   219,
     220,    33,   192,    32,    49,    50,   203,   197,   289,    38,
      52,   208,   209,   218,    28,   212,    37,     3,   185,    89,
      52,   218,    37,    52,    52,   215,    36,   217,   226,   219,
     220,   218,    36,    47,    48,    39,    40,    41,    42,   236,
     237,    52,   239,   113,     9,    49,    50,    36,    52,    37,
      36,   121,    35,    39,    40,    41,    42,   254,    13,    14,
      38,    16,   259,    49,    50,   135,    52,    37,    23,    38,
      25,   276,   277,   271,   279,    37,    30,   274,    33,    37,
     277,    36,   272,    41,    42,    30,   283,    41,    42,   276,
     277,    52,   279,   290,    36,   165,   166,    52,    36,   169,
      49,     0,    52,   173,     3,     4,     5,     6,     7,     8,
       3,    10,    11,    12,     9,   185,    28,   187,    38,     3,
       4,     5,     6,     7,     8,    33,    10,    11,    12,    28,
      23,     3,    25,   203,    28,    47,    48,    37,   208,   209,
      33,    37,   212,    36,    28,    47,    48,    47,    48,    36,
      34,    47,    48,    52,    33,     3,     4,     5,     6,     7,
       8,    36,    10,    11,    12,    28,   236,   237,    52,   239,
       3,     4,     5,     6,     7,     8,    36,    10,    11,    12,
      13,    14,    34,    16,    47,    48,    23,    28,    25,   259,
      23,    37,    25,    37,    27,    28,    33,    41,    42,    36,
      33,    34,    28,    36,    52,    32,    39,    40,    41,    42,
      44,    38,    39,    40,    39,    40,    49,    50,    35,    52,
     290,     3,     4,     5,     6,     7,     8,    43,    10,    11,
      12,    13,    14,    36,    16,    36,    39,    40,    41,    42,
      33,    23,    37,    25,     3,    27,    49,    50,    34,    52,
      53,    33,    34,    23,    36,    25,    34,    39,    40,    41,
      42,    41,    42,    33,    28,    45,    36,    49,    50,    52,
      52,     3,     4,     5,     6,     7,     8,    33,    10,    11,
      12,    13,    14,    37,    16,   100,   101,    33,   102,   103,
      32,    23,    32,    25,    31,    27,    28,    35,    38,    39,
      40,    33,    37,    52,    36,    49,    37,    39,    40,    41,
      42,    35,    37,    18,    18,    28,    37,    49,    50,    37,
      52,     3,     4,     5,     6,     7,     8,    35,    10,    11,
      12,    13,    14,    36,    16,    34,    39,    40,    41,    42,
      34,    23,   121,    25,   121,    27,    49,    50,   124,    52,
     277,    33,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    -1,    31,    32,    -1,    13,    14,    36,    16,    38,
      39,    40,    -1,    -1,    -1,    23,    28,    25,    -1,    27,
      28,    -1,    -1,    52,    -1,    33,    34,    -1,    36,    -1,
      -1,    39,    40,    41,    42,    13,    14,    -1,    16,    -1,
      52,    49,    50,    -1,    52,    23,    -1,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,
      -1,    39,    40,    41,    42,    13,    14,    -1,    16,    -1,
      -1,    49,    50,    -1,    52,    23,    -1,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,
      -1,    39,    40,    41,    42,    13,    14,    -1,    16,    -1,
      -1,    49,    50,    -1,    52,    23,    -1,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,
      -1,    39,    40,    41,    42,    13,    14,    -1,    16,    -1,
      -1,    49,    50,    -1,    52,    23,    -1,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    13,    14,    36,    16,
      -1,    39,    40,    41,    42,    -1,    23,    -1,    25,    -1,
      27,    49,    50,    -1,    52,    -1,    33,    34,    -1,    36,
      -1,    -1,    39,    40,    41,    42,    13,    14,    -1,    16,
      -1,    -1,    49,    50,    -1,    52,    23,    32,    25,    -1,
      27,    36,    -1,    38,    39,    40,    33,    13,    14,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    23,    -1,    25,
      -1,    -1,    49,    50,    -1,    52,    -1,    33,    -1,    28,
      36,    30,    31,    32,    -1,    -1,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    36,    37,    52,    39,    40,    41,
      42,    -1,    -1,    52,    31,    32,    -1,    49,    50,    36,
      52,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      52,    55,    56,    58,    59,    61,    62,    65,    66,    75,
       8,    32,    52,    57,     8,    52,     3,     3,    52,    36,
      38,    52,     0,    28,    56,    65,     3,    56,    36,    35,
      32,    36,    38,    52,    30,    36,    36,    52,    57,    57,
      33,     3,    37,    60,    36,    39,    40,    41,    42,    49,
      50,    52,    63,    72,    73,    74,    76,    77,    78,    80,
      38,    56,    52,    37,    60,    52,    80,    37,    60,    74,
      28,    52,    37,    60,    37,    55,    52,    23,    25,    33,
      36,    69,    82,    37,    74,    31,    32,    39,    40,    79,
      36,    30,    41,    42,    43,    44,    52,     9,    36,    69,
      37,    38,    35,    33,    69,    37,    38,    69,    37,    60,
      69,    28,    34,    30,    36,    36,    13,    14,    16,    27,
      36,    52,    55,    63,    64,    67,    68,    69,    70,    71,
      72,    74,    82,    85,    86,     3,    57,    83,    69,    37,
      52,    49,    37,    73,    73,    76,    76,    77,    77,    52,
      37,    60,    69,     9,    38,    67,    33,    74,    69,    33,
      34,    59,    61,    67,    60,    28,    83,     1,    74,    81,
      36,    36,    36,    74,    52,    28,    28,    28,    68,    70,
      34,    32,    38,    39,    40,    28,    57,    28,    35,    37,
      44,    43,    36,    33,    37,     3,    74,    34,    67,    67,
      34,    34,    28,    68,    81,    28,    33,    45,    37,    47,
      48,    52,    72,    53,    74,    81,    32,    56,    70,    68,
      80,    74,    81,    77,    77,    37,    67,    33,    32,    28,
      34,    34,    34,    28,    81,    74,    69,    71,    72,    81,
      81,    37,    77,    37,    37,    49,    35,    28,    34,    67,
      49,    52,    84,    28,    37,    33,    71,    79,    84,    34,
      35,    32,    38,    79,    37,    84,    18,    18,    28,    37,
      80,    74,    71,    37,    69,    69,    71,    85,    69,    35,
      33,    71,    34,    79,    70,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    57,    57,    57,
      57,    57,    58,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    62,    62,    62,
      63,    63,    64,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    72,    72,    73,    73,    74,    74,
      74,    75,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    84,    85,    85,    85,
      85,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     2,     1,     1,     3,     6,     3,
       5,     3,    10,     4,     5,     5,     5,     6,     6,     2,
       4,     9,     8,     8,     7,     8,     5,     1,     1,     1,
       4,     3,     2,     7,     7,     6,     5,     8,     7,     5,
       1,     3,     2,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     2,     1,     2,     3,     2,     3,     6,     4,
       4,     2,     2,     5,     1,     3,     3,     1,     1,     3,
       3,     3,     1,     3,     3,     5,     5,     1,     1,     3,
       2,     2,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     2,     5,     5,     9,    11,
       8,     8,     1,     2,     5,     2,     3,     5,     7,     7,
       7,     8,     2
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
  case 7:
#line 31 "b073021024.y"
                 { // handles duplicate indentifier.
		int tmp = lookup((yyvsp[0].name));
		if(f == tmp)
			printf("\n> \'%s\' is a duplicate indentifier.",(yyvsp[0].name));
		f = tmp;
		}
#line 1720 "y.tab.c"
    break;

  case 14:
#line 43 "b073021024.y"
                { //handles SEMICOLON error
	   printf("\nLine %d, 1st char: %d, a syntax error at \"%s\"",lineCount,charCount-5,(yyvsp[0].name));}
#line 1727 "y.tab.c"
    break;

  case 21:
#line 54 "b073021024.y"
                  {	  // handles comma error
			  printf("\nLine %d, 1st char: %d, a syntax error at \"%s\"",lineCount,charCount-2,(yyvsp[-1].name));}
#line 1734 "y.tab.c"
    break;

  case 105:
#line 197 "b073021024.y"
                              {yyerror;}
#line 1740 "y.tab.c"
    break;


#line 1744 "y.tab.c"

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
#line 232 "b073021024.y"


int main()
{
	printf("Line 1 : ");
	yyparse();
    printf("\n");
	return 0;
}

void yyerror(const char *str)
{
	printf("\nLine %d, 1st char: %d, %s at \"%s\".\n",lineCount,charCount,str,yytext);
}
