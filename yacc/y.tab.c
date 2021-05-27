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
	void yyerror(const char*);
	int yylex();
	char *yytext;

#line 77 "y.tab.c"

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
    LEFTTMB = 287,
    LEFTBRK = 288,
    RIGHTBRK = 289,
    RIGHTTMB = 290,
    LEFTTB = 291,
    RIGHTTB = 292,
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
#define LEFTTMB 287
#define LEFTBRK 288
#define RIGHTBRK 289
#define RIGHTTMB 290
#define LEFTTB 291
#define RIGHTTB 292
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
#line 7 "b073021024.y"

	char *name;

#line 239 "y.tab.c"

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
#define YYLAST   791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
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
       0,    19,    19,    20,    21,    22,    23,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    36,    37,    38,    39,
      40,    41,    42,    44,    48,    50,    53,    54,    57,    58,
      59,    60,    61,    62,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    76,    77,    78,    79,    80,    81,    82,
      83,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    98,    99,   100,   101,   102,   103,   104,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   119,   120,   121,
     122,   123,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   149,   150,   151,   154,   155,   156,   157,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   177
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
  "COLON", "COMMA", "DOT", "LEFTTMB", "LEFTBRK", "RIGHTBRK", "RIGHTTMB",
  "LEFTTB", "RIGHTTB", "EQUAL", "DOUBLEPLUS", "DOUBLEMINUS", "PLUS",
  "MINUS", "MULTIPLY", "DIVIDE", "INFIXOP", "SYMBOL", "AND", "OR", "INT",
  "FLOAT", "INVALID", "ID", "STRING", "$accept", "dec_list", "error_dec",
  "dec", "idlist", "invaldid", "array", "object_dec", "class_dec",
  "classname", "method", "method_modifier", "main", "argument",
  "stmt_list", "stmt", "compound", "compound_list", "simple", "name",
  "expr_list", "expression", "def", "term", "factor", "prefixop",
  "postfixop", "const_expr", "method_invocation", "method_call",
  "conditional", "boolean_expr", "loop", "forinitopt", "forupdateopt",
  "return", YY_NULLPTR
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

#define YYPACT_NINF (-168)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     504,    -5,     8,    14,    17,    16,    40,  -168,  -168,  -168,
      42,   203,  -168,  -168,  -168,  -168,  -168,    26,  -168,    90,
    -168,  -168,    64,    68,  -168,   245,     0,  -168,    77,    79,
     168,   168,  -168,    84,    12,   739,  -168,   504,  -168,  -168,
      88,    70,    47,    89,   262,    59,   739,   272,  -168,   126,
      99,   137,     0,     0,   504,    94,   200,   116,   739,  -168,
    -168,  -168,  -168,  -168,  -168,   254,   119,  -168,    67,  -168,
     270,   127,  -168,  -168,  -168,   184,   161,   200,   165,   191,
     187,   306,   226,   299,  -168,   230,   200,   233,   158,   494,
     259,   248,   267,   444,    55,  -168,  -168,   200,    -1,   243,
     260,  -168,  -168,  -168,   724,   739,   739,   739,   739,   739,
    -168,    16,   135,  -168,   200,   316,   307,   444,  -168,   304,
     739,  -168,   200,   320,  -168,   344,  -168,   329,    53,   217,
     325,   332,   334,   739,   323,   719,   268,   394,  -168,  -168,
     342,  -168,   687,   299,   351,  -168,  -168,  -168,   354,   168,
       0,   367,  -168,  -168,  -168,   357,  -168,   366,  -168,  -168,
    -168,   365,   375,   384,   392,   389,  -168,   425,   739,   294,
     695,   299,  -168,   695,  -168,   395,   397,   644,  -168,   217,
     404,   400,   197,    24,   386,   423,   217,   299,   503,   444,
     695,  -168,  -168,  -168,   262,   739,  -168,  -168,  -168,  -168,
       0,   217,  -168,  -168,   739,   739,   402,   695,   407,   409,
     299,  -168,   524,   554,  -168,  -168,   665,  -168,   130,   217,
    -168,   739,   107,   217,   217,   411,   408,   739,   209,   180,
     341,  -168,  -168,  -168,   418,   299,   148,  -168,  -168,  -168,
     584,   695,   412,   695,  -168,  -168,  -168,   414,   157,   299,
    -168,  -168,   222,   364,   364,  -168,   431,  -168,    11,   357,
     374,   414,  -168,   614,   435,   349,   437,   414,  -168,   460,
     451,   445,  -168,  -168,   262,   739,  -168,    11,   450,   716,
    -168,   200,   454,   299,  -168,     5,  -168,  -168,  -168,  -168,
     374,   444,  -168,  -168,   456,  -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      33,     0,     5,     2,     9,    12,    11,     0,    13,     0,
      14,    15,     0,     0,    22,    16,     8,    21,     0,     0,
       0,     0,    33,     0,     0,     0,     1,     0,     6,     4,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,    16,     7,    10,     0,     0,     0,     0,     0,    95,
      96,    97,    98,   101,   102,    88,     0,    82,    78,    79,
      85,     0,    89,    93,     3,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    23,    17,     0,     0,     0,     0,
      49,     0,     0,     0,     0,    43,    62,     0,     0,     0,
       0,    99,   100,    92,     0,     0,     0,     0,     0,     0,
      91,     0,     0,    45,     0,     0,     0,     0,    27,     0,
       0,    46,     0,     0,    39,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    64,    51,    54,
       0,    55,     0,    56,    93,    60,    57,    58,     0,     0,
     120,     0,    44,    90,    76,     0,   104,     0,    77,    80,
      81,    83,    84,     0,     0,     0,    47,     0,     0,     0,
       0,    20,    48,     0,    30,    13,    14,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   125,    88,    63,
      65,    51,    67,    61,     0,     0,    72,    73,   105,    59,
     121,     0,    94,   103,     0,     0,     0,     0,     0,     0,
      18,    37,     0,     0,    28,    29,     0,    53,     0,     0,
     113,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     2,    66,    52,     0,    68,     0,    86,    87,    26,
       0,     0,     0,     0,    35,    38,    32,     0,     0,   110,
     115,   114,     0,   111,   112,    71,     0,    70,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,    74,   106,
       0,     0,    34,    25,     0,     0,   123,     0,     0,     0,
      69,     0,     0,   124,   119,     0,   108,   107,   109,   118,
       0,     0,   116,   122,     0,   117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,    10,  -168,    -2,    13,  -168,  -168,  -168,     1,     3,
     370,  -168,   388,    37,   -96,  -124,   -55,  -135,  -167,   -42,
     311,   -35,  -168,   317,  -103,  -168,  -108,   -40,    75,  -168,
     212,   302,   -49,   390,   -20,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   136,    12,    13,   150,    27,    14,    15,    16,    17,
      18,    19,    20,    57,   137,   138,   139,   140,   141,    66,
      67,   143,    21,    69,    70,    71,   103,    72,    73,   145,
     146,   183,   147,   151,   266,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    95,   192,    22,    80,   161,   162,    96,    33,    38,
      11,    83,    39,   191,    26,    55,    28,    30,   130,   131,
      31,   169,   113,    98,   130,   131,   118,    23,    96,   177,
      47,   121,    96,   124,   192,    74,   153,    96,   291,    96,
     106,   107,   152,    52,    53,   191,    24,    25,    96,    56,
      55,   142,    48,   217,   232,   251,   149,   225,   149,   166,
      29,   222,    55,   225,    89,    96,   233,   172,    32,    68,
      68,   223,   224,    96,   212,   142,    34,   213,    40,    78,
      35,   179,    82,   142,    77,   171,    87,    38,   217,   217,
      39,   269,   233,    41,   182,   142,    81,   105,   187,    98,
      42,   237,   238,    43,    24,    51,    24,    51,   106,   107,
     284,   240,   287,    49,   163,    50,   217,    54,   292,   233,
     130,   131,    76,    74,   256,   123,    75,   142,   142,    55,
      91,   142,    92,   210,    38,   142,    88,    39,    55,   217,
      93,    79,   226,    94,   182,   263,    90,   142,   142,   165,
     228,   182,   270,    97,   234,   104,   294,   276,   247,   225,
     235,    55,   200,    86,   178,   142,   182,   250,   144,    44,
     142,   142,   164,    96,   142,    46,   261,   223,   224,   110,
     252,    91,   293,    92,   182,   267,   249,   231,   182,   182,
      80,    93,   144,   111,    94,   223,   224,   112,   142,   142,
     144,   142,   114,    36,   223,   224,     1,     2,     3,     4,
       5,     6,   144,     7,     8,     9,   252,   258,   181,    24,
      51,   142,   116,    91,   286,    92,   289,   223,   224,   115,
      96,    37,    96,    93,   282,   252,    94,   252,   106,   107,
     283,   271,   221,   252,   144,   144,   257,   278,   144,   142,
     106,   107,   144,    58,   194,    10,    59,    60,    61,    62,
     195,   196,   197,   119,   144,   144,    63,    64,   120,    65,
     122,     1,     2,     3,     4,     5,     6,    44,     7,     8,
       9,    45,   144,    46,   128,    99,   100,   144,   144,   127,
     -75,   144,   -75,   101,   102,   154,   189,     1,     2,     3,
       4,     5,     6,   129,     7,     8,     9,   130,   131,   155,
     132,    63,    64,   108,   109,   144,   144,    91,   144,    92,
      10,   133,   190,    84,    85,   167,   149,    93,   211,    91,
     134,    92,    55,    59,    60,    61,    62,   170,   144,   117,
     106,   107,    94,    63,    64,   168,   135,     1,     2,     3,
       4,     5,     6,   173,     7,     8,     9,   130,   131,    58,
     132,   184,    59,    60,    61,    62,   144,    91,   185,    92,
     186,   133,    63,    64,    24,   188,   193,    93,   174,   198,
     134,   274,   199,    59,    60,    61,    62,   275,   101,   102,
     259,    64,   202,    63,    64,   201,   135,     1,     2,     3,
       4,     5,     6,   203,     7,     8,     9,   130,   131,   204,
     132,   223,   224,   101,   102,   157,   158,    91,   205,    92,
     206,   133,   190,   159,   160,   207,   208,    93,   209,   214,
     134,   215,   219,    59,    60,    61,    62,   220,   225,   239,
     241,   242,    99,    63,    64,   255,   135,     1,     2,     3,
       4,     5,     6,   260,     7,     8,     9,   130,   131,    58,
     132,   264,    59,    60,    61,    62,   265,    91,   268,    92,
     273,   133,    63,    64,   277,    65,   227,    93,   279,   280,
     134,   218,   281,    59,    60,    61,    62,   285,   229,   290,
     295,   288,     0,    63,    64,   175,   135,     1,     2,     3,
       4,     5,     6,   236,     7,     8,     9,     1,     2,     3,
       4,     5,     6,   176,     7,     8,     9,     0,   180,     0,
       0,   248,   125,     0,     0,   253,   254,     0,   126,     0,
       0,   -16,     0,   -16,    99,   230,     0,   130,   131,   -75,
     132,    46,   101,   102,     0,     0,    10,    91,     0,    92,
       0,   133,   243,     0,     0,   -16,    10,    93,   244,     0,
     134,     0,     0,    59,    60,    61,    62,   130,   131,     0,
     132,     0,     0,    63,    64,     0,    65,    91,     0,    92,
       0,   133,   243,     0,     0,     0,     0,    93,   245,     0,
     134,     0,     0,    59,    60,    61,    62,   130,   131,     0,
     132,     0,     0,    63,    64,     0,    65,    91,     0,    92,
       0,   133,   243,     0,     0,     0,     0,    93,   262,     0,
     134,     0,     0,    59,    60,    61,    62,   130,   131,     0,
     132,     0,     0,    63,    64,     0,    65,    91,     0,    92,
       0,   133,   243,     0,     0,     0,     0,    93,   272,     0,
     134,     0,     0,    59,    60,    61,    62,   130,   131,     0,
     132,     0,     0,    63,    64,     0,    65,    91,     0,    92,
       0,   133,   216,     0,     0,     0,     0,    93,   130,   131,
     134,   132,     0,    59,    60,    61,    62,     0,    91,     0,
      92,     0,   133,    63,    64,     0,    65,     0,    93,   246,
       0,   134,     0,     0,    59,    60,    61,    62,   130,   131,
       0,   132,     0,     0,    63,    64,     0,    65,    91,   194,
      92,     0,   133,   104,     0,   195,   196,   197,    93,   130,
     131,   134,   132,     0,    59,    60,    61,    62,     0,    91,
       0,    92,     0,     0,    63,    64,     0,    65,     0,    93,
      99,   100,    94,     0,     0,   -75,     0,    35,   101,   102,
      58,   156,     0,    59,    60,    61,    62,     0,   225,     0,
       0,   -33,     0,    63,    64,    58,    65,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,    63,    64,
       0,    65
};

static const yytype_int16 yycheck[] =
{
      35,    56,   137,     8,    44,   108,   109,    56,     5,    11,
       0,    46,    11,   137,     1,     3,     8,     3,    13,    14,
       3,   117,    77,    58,    13,    14,    81,    32,    77,   125,
      30,    86,    81,    88,   169,    37,    37,    86,    33,    88,
      41,    42,    97,    30,    31,   169,    51,    52,    97,    37,
       3,    93,    52,   177,   189,   222,     3,    52,     3,   114,
      52,    37,     3,    52,    54,   114,   190,   122,    52,   104,
     105,    47,    48,   122,   170,   117,    36,   173,    52,    42,
      38,    28,    45,   125,    37,   120,    49,    89,   212,   213,
      89,   258,   216,     3,   129,   137,    37,    30,   133,   134,
      36,   204,   205,    35,    51,    52,    51,    52,    41,    42,
     277,   207,   279,    36,   111,    36,   240,    33,   285,   243,
      13,    14,    52,   125,   227,    88,    38,   169,   170,     3,
      23,   173,    25,   168,   136,   177,    37,   136,     3,   263,
      33,    52,   184,    36,   179,   241,    52,   189,   190,   112,
     185,   186,   260,    37,   194,    36,   291,   265,    28,    52,
     195,     3,   149,    37,   127,   207,   201,   222,    93,    32,
     212,   213,    37,   222,   216,    38,    28,    47,    48,    52,
     222,    23,   290,    25,   219,    28,   221,   189,   223,   224,
     230,    33,   117,     9,    36,    47,    48,    36,   240,   241,
     125,   243,    37,     0,    47,    48,     3,     4,     5,     6,
       7,     8,   137,    10,    11,    12,   258,    37,     1,    51,
      52,   263,    35,    23,   279,    25,   281,    47,    48,    38,
     279,    28,   281,    33,   274,   277,    36,   279,    41,    42,
     275,   261,    45,   285,   169,   170,    37,   267,   173,   291,
      41,    42,   177,    36,    32,    52,    39,    40,    41,    42,
      38,    39,    40,    37,   189,   190,    49,    50,    38,    52,
      37,     3,     4,     5,     6,     7,     8,    32,    10,    11,
      12,    36,   207,    38,    36,    31,    32,   212,   213,    30,
      36,   216,    38,    39,    40,    52,    28,     3,     4,     5,
       6,     7,     8,    36,    10,    11,    12,    13,    14,    49,
      16,    49,    50,    43,    44,   240,   241,    23,   243,    25,
      52,    27,    28,    51,    52,     9,     3,    33,    34,    23,
      36,    25,     3,    39,    40,    41,    42,    33,   263,    33,
      41,    42,    36,    49,    50,    38,    52,     3,     4,     5,
       6,     7,     8,    33,    10,    11,    12,    13,    14,    36,
      16,    36,    39,    40,    41,    42,   291,    23,    36,    25,
      36,    27,    49,    50,    51,    52,    34,    33,    34,    28,
      36,    32,    28,    39,    40,    41,    42,    38,    39,    40,
      49,    50,    35,    49,    50,    28,    52,     3,     4,     5,
       6,     7,     8,    37,    10,    11,    12,    13,    14,    44,
      16,    47,    48,    39,    40,   104,   105,    23,    43,    25,
      36,    27,    28,   106,   107,    33,    37,    33,     3,    34,
      36,    34,    28,    39,    40,    41,    42,    37,    52,    37,
      33,    32,    31,    49,    50,    37,    52,     3,     4,     5,
       6,     7,     8,    35,    10,    11,    12,    13,    14,    36,
      16,    49,    39,    40,    41,    42,    52,    23,    37,    25,
      35,    27,    49,    50,    37,    52,    53,    33,    18,    28,
      36,   179,    37,    39,    40,    41,    42,    37,   186,    35,
      34,   279,    -1,    49,    50,   125,    52,     3,     4,     5,
       6,     7,     8,   201,    10,    11,    12,     3,     4,     5,
       6,     7,     8,   125,    10,    11,    12,    -1,   128,    -1,
      -1,   219,    28,    -1,    -1,   223,   224,    -1,    34,    -1,
      -1,    28,    -1,    30,    31,    32,    -1,    13,    14,    36,
      16,    38,    39,    40,    -1,    -1,    52,    23,    -1,    25,
      -1,    27,    28,    -1,    -1,    52,    52,    33,    34,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    13,    14,    -1,
      16,    -1,    -1,    49,    50,    -1,    52,    23,    -1,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    13,    14,    -1,
      16,    -1,    -1,    49,    50,    -1,    52,    23,    -1,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    13,    14,    -1,
      16,    -1,    -1,    49,    50,    -1,    52,    23,    -1,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    13,    14,    -1,
      16,    -1,    -1,    49,    50,    -1,    52,    23,    -1,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    33,    13,    14,
      36,    16,    -1,    39,    40,    41,    42,    -1,    23,    -1,
      25,    -1,    27,    49,    50,    -1,    52,    -1,    33,    34,
      -1,    36,    -1,    -1,    39,    40,    41,    42,    13,    14,
      -1,    16,    -1,    -1,    49,    50,    -1,    52,    23,    32,
      25,    -1,    27,    36,    -1,    38,    39,    40,    33,    13,
      14,    36,    16,    -1,    39,    40,    41,    42,    -1,    23,
      -1,    25,    -1,    -1,    49,    50,    -1,    52,    -1,    33,
      31,    32,    36,    -1,    -1,    36,    -1,    38,    39,    40,
      36,    37,    -1,    39,    40,    41,    42,    -1,    52,    -1,
      -1,    52,    -1,    49,    50,    36,    52,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      52,    55,    56,    57,    60,    61,    62,    63,    64,    65,
      66,    76,     8,    32,    51,    52,    58,    59,     8,    52,
       3,     3,    52,    63,    36,    38,     0,    28,    57,    62,
      52,     3,    36,    35,    32,    36,    38,    30,    52,    36,
      36,    52,    58,    58,    33,     3,    37,    67,    36,    39,
      40,    41,    42,    49,    50,    52,    73,    74,    75,    77,
      78,    79,    81,    82,    57,    38,    52,    37,    67,    52,
      81,    37,    67,    75,    51,    52,    37,    67,    37,    55,
      52,    23,    25,    33,    36,    70,    86,    37,    75,    31,
      32,    39,    40,    80,    36,    30,    41,    42,    43,    44,
      52,     9,    36,    70,    37,    38,    35,    33,    70,    37,
      38,    70,    37,    67,    70,    28,    34,    30,    36,    36,
      13,    14,    16,    27,    36,    52,    55,    68,    69,    70,
      71,    72,    73,    75,    82,    83,    84,    86,    89,     3,
      58,    87,    70,    37,    52,    49,    37,    74,    74,    77,
      77,    78,    78,    63,    37,    67,    70,     9,    38,    68,
      33,    75,    70,    33,    34,    64,    66,    68,    67,    28,
      87,     1,    75,    85,    36,    36,    36,    75,    52,    28,
      28,    69,    71,    34,    32,    38,    39,    40,    28,    28,
      58,    28,    35,    37,    44,    43,    36,    33,    37,     3,
      75,    34,    68,    68,    34,    34,    28,    69,    85,    28,
      37,    45,    37,    47,    48,    52,    73,    53,    75,    85,
      32,    57,    71,    69,    81,    75,    85,    78,    78,    37,
      68,    33,    32,    28,    34,    34,    34,    28,    85,    75,
      70,    72,    73,    85,    85,    37,    78,    37,    37,    49,
      35,    28,    34,    68,    49,    52,    88,    28,    37,    72,
      80,    88,    34,    35,    32,    38,    80,    37,    88,    18,
      28,    37,    81,    75,    72,    37,    70,    72,    84,    70,
      35,    33,    72,    80,    71,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    61,    61,    62,    62,
      62,    62,    62,    63,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    76,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    84,    84,    84,    84,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     2,     3,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     6,     3,
       5,     1,     1,     3,     2,    10,     7,     5,     7,     7,
       6,     5,     8,     1,     9,     8,     8,     7,     8,     5,
       1,     1,     1,     4,     5,     5,     5,     6,     6,     2,
       4,     1,     3,     2,     1,     1,     1,     1,     1,     2,
       1,     3,     1,     2,     1,     2,     3,     2,     3,     6,
       4,     4,     2,     2,     5,     1,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     1,     5,     5,     1,     1,
       3,     2,     2,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     2,     5,     7,     7,     7,
       3,     3,     3,     2,     5,     5,     9,    11,     8,     8,
       1,     2,     5,     2,     3,     2
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
  case 6:
#line 24 "b073021024.y"
                   {printf("\n> A syntax error at \"%s\".",yytext);}
#line 1711 "y.tab.c"
    break;

  case 22:
#line 43 "b073021024.y"
                {printf("\n> \"%s\" is an invalid \"id\".\n",yytext);}
#line 1717 "y.tab.c"
    break;

  case 23:
#line 45 "b073021024.y"
                {printf("> \"%s\" is an invalid \"id\".\n",yytext);}
#line 1723 "y.tab.c"
    break;

  case 24:
#line 49 "b073021024.y"
                  {printf("\n> a syntax error that need a comma between two variables at \"%s\".\n",yytext);}
#line 1729 "y.tab.c"
    break;


#line 1733 "y.tab.c"

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
#line 180 "b073021024.y"



int main(){
	printf("Line 1 : ");
	yyparse();
    printf("\n");
	return 0;
}
void yyerror(const char *str){
	printf( "\n> %s at \"%s\".\n", str, yytext);
} 
