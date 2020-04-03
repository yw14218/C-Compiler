/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/cparser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cparser.tab.hpp".  */
#ifndef YY_YY_SRC_CPARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_CPARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/cparser.y" /* yacc.c:355  */

  #include "ast.hpp"
  #include <cassert>

  extern Statementptr g_root; // A way of getting the AST out

  int yylex(void);
  void yyerror(const char *);

  extern FILE *yyin;

#line 109 "src/cparser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_AUTO = 258,
    T_DOUBLE = 259,
    T_INT = 260,
    T_STRUCT = 261,
    T_BREAK = 262,
    T_ELSE = 263,
    T_LONG = 264,
    T_SWITCH = 265,
    T_CASE = 266,
    T_ENUM = 267,
    T_REGISTER = 268,
    T_TYPEDEF = 269,
    T_EXTERN = 270,
    T_RETURN = 271,
    T_FLOAT = 272,
    T_SHORT = 273,
    T_UNSIGNED = 274,
    T_CONTINUE = 275,
    T_FOR = 276,
    T_SIGNED = 277,
    T_VOID = 278,
    T_DEFAULT = 279,
    T_SIZEOF = 280,
    T_VOLATILE = 281,
    T_DO = 282,
    T_IF = 283,
    T_STATIC = 284,
    T_WHILE = 285,
    T_CHAR = 286,
    T_EQUAL = 287,
    T_CONST = 288,
    T_IDENTIFIER = 289,
    T_FLOAT_CONST = 290,
    T_INT_CONST = 291,
    T_CHAR_CONST = 292,
    T_STRING = 293,
    T_PLUS = 294,
    T_PLUS_PLUS = 295,
    T_PLUS_EQUAL = 296,
    T_MINUS = 297,
    T_MINUS_MINUS = 298,
    T_MINUS_EQUAL = 299,
    T_TIMES = 300,
    T_TIMES_EQUAL = 301,
    T_DIVIDE = 302,
    T_DIVIDE_EQUAL = 303,
    T_BOOL_EQUAL = 304,
    T_NOT_EQUAL = 305,
    T_TILDE = 306,
    T_EXCLAMATION = 307,
    T_PERCENTAGE = 308,
    T_HASH = 309,
    T_HASH_HASH = 310,
    T_COLON = 311,
    T_SEMICOLON = 312,
    T_BITWISE_OR = 313,
    T_LOGICAL_OR = 314,
    T_BITWISE_AND = 315,
    T_LOGICAL_AND = 316,
    T_COMMA = 317,
    T_LSHIFT_EQUAL = 318,
    T_RSHIFT_EQUAL = 319,
    T_L_ROUND_BRACKET = 320,
    T_R_ROUND_BRACKET = 321,
    T_L_SQUARE_BRACKET = 322,
    T_R_SQUARE_BRACKET = 323,
    T_L_CURLY_BRACKET = 324,
    T_R_CURLY_BRACKET = 325,
    T_DOT = 326,
    T_QUESTION = 327,
    T_SMALLER = 328,
    T_SMALLER_SMALLER = 329,
    T_BIGGER = 330,
    T_BIGGER_BIGGER = 331,
    T_SMALLER_EQUAL = 332,
    T_BIGGER_EQUAL = 333,
    T_POINT_TO = 334,
    T_BITWISE_XOR = 335,
    T_AND_EQUAL = 336,
    T_OR_EQUAL = 337,
    T_XOR_EQUAL = 338,
    T_PERCENTAGE_EQUAL = 339,
    T_UNION = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "src/cparser.y" /* yacc.c:355  */

  Statementptr states;
  Statementlistptr stateslist;
  double number;
  std::string *string;

#line 214 "src/cparser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_CPARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "src/cparser.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1559

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    51,    52,    53,    54,    55,    56,    57,
      60,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    87,    88,    91,    92,    93,    94,    97,    98,    99,
     102,   103,   104,   107,   108,   109,   110,   111,   114,   115,
     116,   119,   120,   123,   124,   127,   128,   131,   132,   135,
     136,   139,   140,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   157,   158,   161,   164,   165,
     166,   167,   168,   171,   172,   175,   176,   177,   178,   179,
     180,   183,   184,   187,   188,   189,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   206,   207,   208,
     211,   212,   215,   216,   219,   221,   222,   223,   224,   227,
     228,   231,   232,   233,   236,   237,   238,   241,   242,   245,
     246,   249,   250,   253,   254,   257,   258,   259,   260,   261,
     262,   263,   266,   267,   268,   269,   272,   273,   276,   279,
     280,   283,   284,   285,   288,   289,   292,   293,   296,   297,
     298,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     315,   316,   317,   320,   321,   325,   326,   327,   328,   329,
     330,   333,   334,   335,   338,   339,   340,   341,   344,   345,
     348,   349,   352,   353,   356,   357,   358,   361,   362,   363,
     364,   365,   368,   369,   370,   371,   374,   375,   378,   379,
     382,   383
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_AUTO", "T_DOUBLE", "T_INT",
  "T_STRUCT", "T_BREAK", "T_ELSE", "T_LONG", "T_SWITCH", "T_CASE",
  "T_ENUM", "T_REGISTER", "T_TYPEDEF", "T_EXTERN", "T_RETURN", "T_FLOAT",
  "T_SHORT", "T_UNSIGNED", "T_CONTINUE", "T_FOR", "T_SIGNED", "T_VOID",
  "T_DEFAULT", "T_SIZEOF", "T_VOLATILE", "T_DO", "T_IF", "T_STATIC",
  "T_WHILE", "T_CHAR", "T_EQUAL", "T_CONST", "T_IDENTIFIER",
  "T_FLOAT_CONST", "T_INT_CONST", "T_CHAR_CONST", "T_STRING", "T_PLUS",
  "T_PLUS_PLUS", "T_PLUS_EQUAL", "T_MINUS", "T_MINUS_MINUS",
  "T_MINUS_EQUAL", "T_TIMES", "T_TIMES_EQUAL", "T_DIVIDE",
  "T_DIVIDE_EQUAL", "T_BOOL_EQUAL", "T_NOT_EQUAL", "T_TILDE",
  "T_EXCLAMATION", "T_PERCENTAGE", "T_HASH", "T_HASH_HASH", "T_COLON",
  "T_SEMICOLON", "T_BITWISE_OR", "T_LOGICAL_OR", "T_BITWISE_AND",
  "T_LOGICAL_AND", "T_COMMA", "T_LSHIFT_EQUAL", "T_RSHIFT_EQUAL",
  "T_L_ROUND_BRACKET", "T_R_ROUND_BRACKET", "T_L_SQUARE_BRACKET",
  "T_R_SQUARE_BRACKET", "T_L_CURLY_BRACKET", "T_R_CURLY_BRACKET", "T_DOT",
  "T_QUESTION", "T_SMALLER", "T_SMALLER_SMALLER", "T_BIGGER",
  "T_BIGGER_BIGGER", "T_SMALLER_EQUAL", "T_BIGGER_EQUAL", "T_POINT_TO",
  "T_BITWISE_XOR", "T_AND_EQUAL", "T_OR_EQUAL", "T_XOR_EQUAL",
  "T_PERCENTAGE_EQUAL", "T_UNION", "$accept", "ROOT", "PRIMARY_EXPRESSION",
  "POSTFIX_EXPRESSION", "ARGUMENT_EXPRESSION_LIST", "UNARY_EXPRESSION",
  "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION",
  "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION",
  "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "INCLUSIVE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "CONDITIONAL_EXPRESSION", "ASSIGNMENT_EXPRESSION", "EXPRESSION",
  "CONSTANT_EXPRESSION", "STORAGE_CLASS_SPECIFIER", "DECLARATION",
  "DECLARATION_SPECIFIERS", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "TYPE_SPECIFIER", "STRUCT_OR_UNION_SPECIFIER", "STRUCT_OR_UNION",
  "STRUCT_DECLARATION_LIST", "STRUCT_DECLARATION",
  "SPECIFIER_QUALIFIER_LIST", "STRUCT_DECLARATOR_LIST",
  "STRUCT_DECLARATOR", "ENUM_SPECIFIER", "ENUMERATOR_LIST", "ENUMERATOR",
  "TYPE_QUALIFIER", "DECLARATOR", "DIRECT_DECLARATOR", "POINTER",
  "TYPE_QUALIFIER_LIST", "PARAMETER_TYPE_LIST", "PARAMETER_LIST",
  "PARAMETER_DECLARATION", "IDENTIFIER_LIST", "TYPE_NAME",
  "ABSTRACT_DECLARATOR", "DIRECT_ABSTRACT_DECLARATOR", "INITIALIZER",
  "INITIALIZER_LIST", "STATEMENT", "LABELED_STATEMENT",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "SELECTION_STATEMENT", "ITERATION_STATEMENT",
  "JUMP_STATEMENT", "TRANSLATION_UNIT", "EXTERNAL_DECLARATION",
  "FUNCTION_DEFINITION", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -208

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-208)))

#define YYTABLE_NINF -171

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     684,  -208,  -208,  -208,  -208,  -208,   -10,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
      89,    37,  -208,     9,   922,  -208,    27,   922,  -208,     1,
    -208,   922,   -52,   111,    39,   684,  -208,  -208,   -46,    40,
    -208,  -208,    89,    15,  -208,  -208,  -208,   120,  -208,   -18,
    -208,    82,  1034,  -208,   331,  -208,   719,  1268,   111,  -208,
      40,   122,    18,  -208,  -208,  -208,  -208,  -208,    37,  1252,
     408,  -208,  1034,  1034,   585,  -208,    62,  1034,   753,   788,
     100,   160,  1434,  1392,   822,   130,   163,   190,  1450,  1210,
     198,   201,   857,   192,  -208,  1434,  1466,  1434,  1466,  1434,
    1434,  1434,  -208,  1434,   960,  -208,  -208,    12,  1475,  -208,
      91,    48,   162,   156,   154,   204,   215,   236,   197,   -51,
    -208,  -208,   148,  -208,    27,  -208,  -208,  -208,   485,  1066,
    -208,  -208,  -208,  -208,  -208,  -208,    33,   230,   235,  -208,
      -2,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,   231,
      83,  1434,    40,  -208,  -208,   -13,  1252,  -208,  -208,   408,
     228,  -208,   138,  1004,  -208,  -208,  -208,  1434,   175,  -208,
     244,  -208,  -208,  1434,   245,  -208,   178,  -208,  1434,  1210,
     960,  -208,   272,  1434,  1434,  1210,  -208,  1434,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,    69,    41,   237,  -208,  -208,
    1376,  1434,   271,   273,  1434,  1434,  1434,  1434,  1434,  1434,
    1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,
    1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,
    1434,  1434,  1434,  1434,  -208,  1434,  -208,  -208,  1117,  -208,
    -208,   554,  1310,  -208,    34,  -208,   211,  -208,   922,   274,
    -208,  -208,  -208,  -208,  -208,  1252,   147,  1252,  -208,  -208,
    -208,  -208,    62,  1434,   152,  1210,  -208,    66,  -208,   240,
     247,   181,   183,  -208,  -208,   619,   214,  -208,  1434,  -208,
     193,  -208,   -50,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,    91,
      91,    48,    48,   162,   162,   162,   162,   156,   156,   154,
     204,   215,   236,   197,   -40,  -208,  -208,  -208,   248,   249,
    -208,   242,   211,   891,  1334,  -208,  -208,  1159,  -208,  -208,
    -208,  -208,  1210,  -208,  1434,  1210,  -208,  1434,  1210,  1210,
    -208,  1434,  -208,  -208,  1434,  -208,  -208,  -208,  -208,   250,
    -208,   251,  -208,  -208,    80,  -208,   199,   309,  -208,  -208,
    -208,  -208,  -208,  1434,  1210,   261,  1210,   209,  -208,  -208,
    -208,  1210,  -208
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    81,   102,    99,   110,   100,     0,    82,    78,    79,
     101,    98,   104,   103,    96,   131,    80,    97,   132,   135,
     142,     0,   111,     0,    85,   209,     0,    87,   105,     0,
     106,    89,     0,   133,     0,     2,   206,   208,   126,     0,
     146,   143,   144,     0,     1,    86,    83,     0,    91,    93,
      88,   107,     0,    90,     0,   211,     0,     0,   134,   207,
       0,   129,     0,   127,   147,   145,   136,    84,     0,     0,
       0,   210,     0,   116,     0,   112,     0,   118,     5,     6,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     7,     3,     8,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,   187,    10,    20,    31,    33,
      37,    40,    43,    48,    51,    53,    55,    57,    59,    61,
      63,    75,     0,   188,     0,   190,   175,   176,     0,     0,
     177,   178,   179,   180,   154,   140,   152,     0,   148,   149,
       0,     5,     6,     4,     7,     3,   137,    31,    77,     0,
       0,     0,     0,   125,    92,    93,     0,   170,    94,     0,
      75,   173,     0,     0,   115,   108,   113,     0,     0,   119,
     121,   117,   203,     0,     0,   205,     0,   202,     0,     0,
       0,    29,     0,     0,     0,     0,    23,     0,    21,    24,
      22,    25,    26,    27,    28,     0,   156,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,     0,   186,   189,     0,   185,
     191,     0,     0,   151,   158,   153,   159,   139,     0,     0,
     141,   138,   124,   130,   128,     0,     0,     0,    95,   109,
     122,   114,     0,     0,     0,     0,   204,     0,   183,     0,
       0,     0,     0,   181,     9,     0,   158,   157,     0,    14,
       0,    18,     0,    12,    15,    64,    71,    72,    73,    74,
      69,    70,    65,    67,    66,    68,    34,    35,    36,    38,
      39,    41,    42,    44,    45,    46,    47,    49,    50,    52,
      54,    56,    58,    60,     0,    76,   184,   169,     0,     0,
     164,     0,   160,     0,     0,   150,   155,     0,   171,   174,
     120,   123,     0,   182,     0,     0,    30,     0,     0,     0,
      32,     0,    13,    11,     0,   167,   161,   163,   168,     0,
     165,     0,   172,   196,     0,   201,     0,   194,   197,    19,
      62,   166,   162,     0,     0,     0,     0,     0,   200,   198,
     195,     0,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,  -208,  -208,   -57,   -67,  -156,    -5,    68,
      59,    92,    93,    94,    90,    95,  -208,   -56,   -16,   -54,
     -62,  -208,    13,    85,  -208,   255,   150,  -208,  -208,   254,
     -70,   -28,  -208,    67,  -208,   268,   179,   200,   -11,   -32,
     -15,  -208,   -53,  -208,    84,  -208,   153,  -130,  -207,   -58,
     -42,   -82,  -208,    26,  -208,   238,  -208,  -208,  -208,  -208,
    -208,   304,  -208
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   106,   107,   280,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     149,    24,   123,   136,    47,    48,    27,    28,    29,    74,
      75,    76,   168,   169,    30,    62,    63,    31,    32,    33,
      34,    42,   318,   138,   139,   140,   197,   319,   246,   161,
     162,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     147,   148,    58,   137,   166,    41,   245,   182,   232,    44,
      43,   158,   235,    25,    69,    49,   344,    54,   343,    69,
     174,   233,   235,    60,    38,   147,   148,    65,   186,   176,
     189,   181,   191,   192,   193,    51,   194,   322,   147,   188,
     147,   190,   147,   147,   147,   164,   147,   240,    25,   171,
     195,    70,   198,   157,   160,   199,   255,   155,    55,    39,
     249,    19,   299,   300,   250,   170,   277,    19,    19,   322,
      52,    19,    20,    19,    61,    71,   196,   200,    20,   201,
     152,    66,    20,   202,    46,    26,    20,   218,   153,   253,
     219,   203,    21,   166,   147,   148,    19,   268,   241,   241,
     242,   242,    21,   273,    21,   260,   275,    20,   242,    45,
     147,   148,    50,   155,   256,    15,    53,   256,   167,   264,
      26,   244,    18,   334,   267,   243,   195,    21,   235,   271,
     272,   235,   335,   195,    20,   274,   215,   363,   216,   124,
     157,   237,   235,   160,   217,   152,   364,   282,   296,   297,
     298,    72,   196,   252,   151,   124,   240,   172,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,    56,    67,    57,   314,
     321,   276,    68,   333,   281,   147,   148,   177,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   329,
     257,   331,    73,   226,   227,   234,   147,   148,   258,   327,
     235,   340,    58,   124,   235,   301,   302,   328,   332,   315,
      40,   147,    73,    73,    73,   173,   244,    73,   178,   222,
      43,   223,   261,   224,   225,   266,   220,   262,   221,   157,
     235,   157,    64,   235,   124,   235,   179,   338,   185,   339,
     353,   170,    77,   355,    73,   341,   357,   358,   231,   342,
     276,   235,   351,   183,   228,   365,   184,   147,   148,   329,
     349,   235,    77,    77,    77,   371,   323,    77,   324,   275,
     354,   242,   368,   356,   370,   307,   308,   147,   360,   372,
     303,   304,   305,   306,   230,   229,   247,   248,  -170,   251,
     263,   265,   270,   278,    77,   283,   336,   284,   326,   367,
     347,   157,   337,    73,   345,   346,   361,   366,   369,   362,
     309,   312,   310,   154,   311,   359,   163,   313,   150,   330,
      73,   254,   325,   269,     1,    78,    79,     4,    80,    59,
       5,    81,    82,     6,     7,     8,     9,    83,    84,    11,
      12,    85,    86,    13,    14,    87,    88,    15,    89,    90,
      16,    91,    92,    77,    18,    93,   238,     0,     0,    94,
      95,    96,     0,    97,    98,     0,    99,     0,     0,     0,
      77,     0,   100,   101,     0,     0,     0,     0,   102,     0,
       0,   103,     0,     0,     0,     0,   104,     0,     0,     0,
      54,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    78,    79,     4,    80,    22,     5,    81,    82,
       6,     7,     8,     9,    83,    84,    11,    12,    85,    86,
      13,    14,    87,    88,    15,    89,    90,    16,    91,    92,
       0,    18,    93,     0,     0,     0,    94,    95,    96,     0,
      97,    98,     0,    99,     0,     0,     0,     0,     0,   100,
     101,     0,     0,     0,     0,   102,     0,     0,   103,     0,
       0,     0,     0,   104,     0,     0,     0,   159,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    78,
      79,     4,    80,    22,     5,    81,    82,     6,     7,     8,
       9,    83,    84,    11,    12,    85,    86,    13,    14,    87,
      88,    15,    89,    90,    16,    91,    92,     0,    18,    93,
       0,     0,     0,    94,    95,    96,     0,    97,    98,     0,
      99,     0,     0,     0,     0,     0,   100,   101,     0,     0,
       0,     0,   102,     0,     0,   103,     0,     0,     0,     0,
     104,     0,     0,     0,    54,   236,     0,     1,     2,     3,
       4,     0,     0,     5,     0,     0,     6,     7,     8,     9,
      22,    10,    11,    12,     0,     0,    13,    14,     0,     0,
      15,     0,     0,    16,     0,    17,     0,    18,    19,     2,
       3,     4,     0,     0,     5,     0,     0,     6,     0,    20,
       0,     0,    10,    11,    12,     0,     0,    13,    14,     0,
       0,    15,     0,     0,     0,     0,    17,     0,    18,   241,
     317,   242,     1,     2,     3,     4,     0,     0,     5,     0,
       0,     6,     7,     8,     9,     0,    10,    11,    12,    22,
       0,    13,    14,     0,     0,    15,     0,     0,    16,     0,
      17,     0,    18,     0,     0,   165,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,   317,   242,     1,     2,     3,
       4,     0,     0,     5,     0,     0,     6,     7,     8,     9,
       0,    10,    11,    12,    22,     0,    13,    14,     0,     0,
      15,     0,     0,    16,     0,    17,     0,    18,    19,     0,
       0,     0,     1,     2,     3,     4,     0,     0,     5,    20,
       0,     6,     7,     8,     9,     0,    10,    11,    12,     0,
       0,    13,    14,     0,     0,    15,     0,     0,    16,    21,
      17,     0,    18,   134,     0,     0,  -102,  -102,  -102,  -102,
       0,     0,  -102,     0,     0,  -102,  -102,  -102,  -102,    22,
    -102,  -102,  -102,     0,     0,  -102,  -102,     0,     0,  -102,
       0,     0,  -102,     0,  -102,   135,  -102,  -102,     0,     0,
       0,   -99,   -99,   -99,   -99,     0,     0,   -99,     0,     0,
     -99,   -99,   -99,   -99,    22,   -99,   -99,   -99,     0,     0,
     -99,   -99,     0,     0,   -99,     0,     0,   -99,     0,   -99,
       0,   -99,   -99,     0,     0,  -101,  -101,  -101,  -101,     0,
       0,  -101,     0,     0,  -101,  -101,  -101,  -101,  -102,  -101,
    -101,  -101,     0,     0,  -101,  -101,     0,     0,  -101,     0,
       0,  -101,     0,  -101,     0,  -101,  -101,     0,     0,     0,
     -97,   -97,   -97,   -97,     0,     0,   -97,     0,     0,   -97,
     -97,   -97,   -97,   -99,   -97,   -97,   -97,     0,     0,   -97,
     -97,     0,     0,   -97,     0,     0,   -97,     0,   -97,     0,
     -97,   -97,     0,     0,     1,     2,     3,     4,     0,     0,
       5,     0,     0,     6,     7,     8,     9,  -101,    10,    11,
      12,     0,     0,    13,    14,     0,     0,    15,     0,     0,
      16,     0,    17,     0,    18,     1,     2,     3,     4,     0,
       0,     5,     0,     0,     6,     7,     8,     9,     0,    10,
      11,    12,   -97,     0,    13,    14,     0,     0,    15,     0,
       0,    16,     0,    17,     0,    18,     0,   348,     0,     0,
       0,     0,     0,     0,    78,    79,     4,     0,     0,     5,
       0,     0,     6,     0,     0,     0,    22,    84,    11,    12,
       0,     0,    13,    14,     0,    88,    15,     0,     0,     0,
       0,    92,     0,    18,   145,     0,     0,     0,    94,    95,
      96,     0,    97,    98,     0,    99,     0,    22,     2,     3,
       4,   100,   101,     5,     0,     0,     6,     0,     0,     0,
     103,    10,    11,    12,     0,   104,    13,    14,     0,     0,
      15,     0,     0,     0,     0,    17,     0,    18,     2,     3,
       4,     0,     0,     5,     0,    22,     6,     0,     0,     0,
       0,    10,    11,    12,     0,     0,    13,    14,     0,     0,
      15,     0,     0,     0,     0,    17,     0,    18,     0,     0,
     141,   142,     0,    80,   259,     0,    81,    82,     0,     0,
       0,     0,    83,   143,     0,     0,    85,    86,     0,    22,
      87,    88,     0,    89,    90,     0,    91,   144,     0,     0,
      93,     0,     0,     0,    94,    95,    96,     0,    97,    98,
       0,    99,     0,     0,     0,     0,     0,   100,   101,    22,
       0,   141,   142,   102,    80,     0,   103,    81,    82,     0,
       0,   104,     0,    83,   143,    54,   239,    85,    86,     0,
       0,    87,    88,     0,    89,    90,     0,    91,   144,     0,
       0,    93,     0,     0,     0,    94,    95,    96,     0,    97,
      98,     0,    99,   141,   142,     0,     0,     0,   100,   101,
       0,     0,     0,     0,   102,     0,   143,   103,     0,     0,
       0,     0,   104,     0,    88,     0,    54,   316,     0,     0,
     144,     0,     0,   145,     0,     0,     0,    94,    95,    96,
       0,    97,    98,     0,    99,     0,     0,     0,     0,     0,
     100,   101,     0,     0,   141,   142,     0,    80,     0,   103,
      81,    82,     0,     0,   104,     0,    83,   143,   156,   352,
      85,    86,     0,     0,    87,    88,     0,    89,    90,     0,
      91,   144,     0,     0,    93,     0,     0,     0,    94,    95,
      96,     0,    97,    98,     0,    99,   141,   142,     0,     0,
       0,   100,   101,     0,     0,     0,     0,   102,     0,   143,
     103,     0,   141,   142,     0,   104,     0,    88,     0,    54,
       0,     0,     0,   144,     0,   143,   145,     0,     0,     0,
      94,    95,    96,    88,    97,    98,     0,    99,     0,   144,
       0,     0,   145,   100,   101,     0,    94,    95,    96,     0,
      97,    98,   103,    99,   141,   142,     0,   104,     0,   100,
     101,   156,     0,     0,     0,     0,     0,   143,   103,     0,
       0,     0,     0,   104,     0,    88,   146,     0,   141,   142,
       0,   144,     0,     0,   145,     0,     0,     0,    94,    95,
      96,   143,    97,    98,     0,    99,     0,     0,     0,    88,
       0,   100,   101,     0,     0,   144,     0,     0,   145,     0,
     103,     0,    94,    95,    96,   104,    97,    98,   320,    99,
     141,   142,     0,     0,     0,   100,   101,     0,     0,     0,
       0,     0,     0,   143,   103,     0,   141,   142,     0,   104,
       0,    88,   350,     0,     0,     0,     0,   144,     0,   143,
     145,     0,     0,     0,    94,    95,    96,    88,    97,    98,
       0,    99,     0,   144,     0,     0,   145,   100,   101,     0,
      94,    95,    96,     0,    97,    98,   103,    99,   141,   142,
       0,   104,   279,   100,   101,     0,     0,     0,     0,   175,
       0,   143,   103,     0,   141,   142,     0,   104,     0,    88,
       0,     0,     0,     0,     0,   144,     0,   143,   145,     0,
     141,   142,    94,    95,    96,    88,    97,    98,     0,    99,
       0,   144,     0,   143,   145,   100,   101,     0,    94,    95,
      96,    88,    97,    98,   103,    99,     0,   144,     0,   104,
     145,   100,   101,     0,    94,    95,    96,   204,    97,    98,
     103,    99,     0,     0,     0,   180,   205,   100,   101,   206,
       0,   207,     0,   208,     0,     0,   103,     0,     0,     0,
       0,   187,     0,     0,     0,     0,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   212,   213,   214
};

static const yytype_int16 yycheck[] =
{
      57,    57,    34,    56,    74,    20,   136,    89,    59,     0,
      21,    69,    62,     0,    32,    26,    56,    69,    68,    32,
      82,    72,    62,    69,    34,    82,    82,    42,    95,    83,
      97,    88,    99,   100,   101,    34,   103,   244,    95,    96,
      97,    98,    99,   100,   101,    73,   103,   129,    35,    77,
     104,    69,    40,    69,    70,    43,    69,    68,    32,    69,
      62,    34,   218,   219,    66,    76,   196,    34,    34,   276,
      69,    34,    45,    34,    34,    49,   104,    65,    45,    67,
      62,    66,    45,    71,    57,     0,    45,    39,    70,   151,
      42,    79,    65,   163,   151,   151,    34,   179,    65,    65,
      67,    67,    65,   185,    65,   167,    65,    45,    67,    24,
     167,   167,    27,   124,   156,    26,    31,   159,    56,   173,
      35,   136,    33,    57,   178,   136,   180,    65,    62,   183,
     184,    62,    66,   187,    45,    66,    45,    57,    47,    54,
     156,   128,    62,   159,    53,    62,    66,   201,   215,   216,
     217,    69,   180,    70,    32,    70,   238,    57,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    65,    57,    67,   233,
     242,   196,    62,   265,   200,   242,   242,    57,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   257,
      62,   263,    52,    49,    50,    57,   263,   263,    70,    62,
      62,   278,   244,   128,    62,   220,   221,    70,    66,   235,
      20,   278,    72,    73,    74,    65,   241,    77,    65,    73,
     241,    75,    57,    77,    78,    57,    74,    62,    76,   255,
      62,   257,    42,    62,   159,    62,    56,    66,    56,    66,
     332,   262,    52,   335,   104,    62,   338,   339,    61,    66,
     275,    62,   324,    65,    60,    66,    65,   324,   324,   327,
     323,    62,    72,    73,    74,    66,    65,    77,    67,    65,
     334,    67,   364,   337,   366,   226,   227,   344,   344,   371,
     222,   223,   224,   225,    58,    80,    66,    62,    70,    68,
      56,    56,    30,    66,   104,    34,    66,    34,    34,   363,
      68,   327,    65,   163,    66,    66,    66,     8,    57,    68,
     228,   231,   229,    68,   230,   341,    72,   232,    60,   262,
     180,   152,   248,   180,     3,     4,     5,     6,     7,    35,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   163,    33,    34,   128,    -1,    -1,    38,
      39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,    -1,
     180,    -1,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    85,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    85,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    42,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      85,    17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    -1,    33,    34,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    12,    -1,    45,
      -1,    -1,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,    65,
      66,    67,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    15,    -1,    17,    18,    19,    85,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    -1,    33,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      -1,    17,    18,    19,    85,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    45,
      -1,    12,    13,    14,    15,    -1,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    -1,    26,    -1,    -1,    29,    65,
      31,    -1,    33,    34,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,    85,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    66,    33,    34,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    15,    85,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    85,    17,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    14,    15,    85,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    15,    85,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    -1,    33,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    85,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    -1,    33,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    85,    17,    18,    19,
      -1,    -1,    22,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    42,    43,    -1,    45,    -1,    85,     4,     5,
       6,    51,    52,     9,    -1,    -1,    12,    -1,    -1,    -1,
      60,    17,    18,    19,    -1,    65,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    -1,    33,     4,     5,
       6,    -1,    -1,     9,    -1,    85,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,
       4,     5,    -1,     7,    70,    -1,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    -1,    85,
      24,    25,    -1,    27,    28,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    42,    43,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    85,
      -1,     4,     5,    57,     7,    -1,    60,    10,    11,    -1,
      -1,    65,    -1,    16,    17,    69,    70,    20,    21,    -1,
      -1,    24,    25,    -1,    27,    28,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    42,
      43,    -1,    45,     4,     5,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    17,    60,    -1,    -1,
      -1,    -1,    65,    -1,    25,    -1,    69,    70,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,     4,     5,    -1,     7,    -1,    60,
      10,    11,    -1,    -1,    65,    -1,    16,    17,    69,    70,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    42,    43,    -1,    45,     4,     5,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,    17,
      60,    -1,     4,     5,    -1,    65,    -1,    25,    -1,    69,
      -1,    -1,    -1,    31,    -1,    17,    34,    -1,    -1,    -1,
      38,    39,    40,    25,    42,    43,    -1,    45,    -1,    31,
      -1,    -1,    34,    51,    52,    -1,    38,    39,    40,    -1,
      42,    43,    60,    45,     4,     5,    -1,    65,    -1,    51,
      52,    69,    -1,    -1,    -1,    -1,    -1,    17,    60,    -1,
      -1,    -1,    -1,    65,    -1,    25,    68,    -1,     4,     5,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    17,    42,    43,    -1,    45,    -1,    -1,    -1,    25,
      -1,    51,    52,    -1,    -1,    31,    -1,    -1,    34,    -1,
      60,    -1,    38,    39,    40,    65,    42,    43,    68,    45,
       4,     5,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    60,    -1,     4,     5,    -1,    65,
      -1,    25,    68,    -1,    -1,    -1,    -1,    31,    -1,    17,
      34,    -1,    -1,    -1,    38,    39,    40,    25,    42,    43,
      -1,    45,    -1,    31,    -1,    -1,    34,    51,    52,    -1,
      38,    39,    40,    -1,    42,    43,    60,    45,     4,     5,
      -1,    65,    66,    51,    52,    -1,    -1,    -1,    -1,    57,
      -1,    17,    60,    -1,     4,     5,    -1,    65,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    17,    34,    -1,
       4,     5,    38,    39,    40,    25,    42,    43,    -1,    45,
      -1,    31,    -1,    17,    34,    51,    52,    -1,    38,    39,
      40,    25,    42,    43,    60,    45,    -1,    31,    -1,    65,
      34,    51,    52,    -1,    38,    39,    40,    32,    42,    43,
      60,    45,    -1,    -1,    -1,    65,    41,    51,    52,    44,
      -1,    46,    -1,    48,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    12,    13,    14,    15,
      17,    18,    19,    22,    23,    26,    29,    31,    33,    34,
      45,    65,    85,    87,   107,   108,   109,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,    34,    69,
     123,   126,   127,   124,     0,   109,    57,   110,   111,   124,
     109,    34,    69,   109,    69,   139,    65,    67,   125,   147,
      69,    34,   121,   122,   123,   126,    66,    57,    62,    32,
      69,   139,    69,   112,   115,   116,   117,   123,     4,     5,
       7,    10,    11,    16,    17,    20,    21,    24,    25,    27,
      28,    30,    31,    34,    38,    39,    40,    42,    43,    45,
      51,    52,    57,    60,    65,    70,    88,    89,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   108,   109,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    34,    66,   109,   128,   129,   130,
     131,     4,     5,    17,    31,    34,    68,    91,   103,   106,
     121,    32,    62,    70,   111,   124,    69,   104,   135,    69,
     104,   135,   136,   115,   117,    70,   116,    56,   118,   119,
     124,   117,    57,    65,   106,    57,   105,    57,    65,    56,
      65,    91,   137,    65,    65,    56,    92,    65,    91,    92,
      91,    92,    92,    92,    92,   105,   117,   132,    40,    43,
      65,    67,    71,    79,    32,    41,    44,    46,    48,    63,
      64,    81,    82,    83,    84,    45,    47,    53,    39,    42,
      74,    76,    73,    75,    77,    78,    49,    50,    60,    80,
      58,    61,    59,    72,    57,    62,    70,   108,   141,    70,
     137,    65,    67,   124,   126,   133,   134,    66,    62,    62,
      66,    68,    70,   106,   122,    69,   136,    62,    70,    70,
     106,    57,    62,    56,   105,    56,    57,   105,   137,   132,
      30,   105,   105,   137,    66,    65,   126,   133,    66,    66,
      90,   104,   105,    34,    34,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    97,
      98,    99,   100,   101,   105,   104,    70,    66,   128,   133,
      68,   106,   134,    65,    67,   130,    34,    62,    70,   135,
     119,   106,    66,   137,    57,    66,    66,    65,    66,    66,
      92,    62,    66,    68,    56,    66,    66,    68,    66,   128,
      68,   106,    70,   137,   105,   137,   105,   137,   137,   104,
     103,    66,    68,    57,    66,    66,     8,   105,   137,    57,
     137,    66,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   106,   107,   107,
     107,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   116,   117,   117,   117,   117,   118,
     118,   119,   119,   119,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   126,   126,   126,   126,   127,   127,   128,   129,
     129,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   136,   136,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   144,   144,   144,
     144,   144,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     5,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     5,     4,     2,     1,     3,     1,
       3,     1,     1,     1,     2,     1,     3,     3,     4,     4,
       3,     4,     1,     2,     2,     3,     1,     2,     1,     1,
       3,     2,     1,     2,     1,     3,     1,     2,     1,     1,
       2,     3,     4,     3,     2,     3,     4,     3,     3,     2,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     4,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     9,
       7,     5,     2,     2,     3,     2,     1,     2,     1,     1,
       3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 48 "src/cparser.y" /* yacc.c:1646  */
    { g_root = new root((yyvsp[0].stateslist)) ; }
#line 1847 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 51 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new identifier(*(yyvsp[0].string));}
#line 1853 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 52 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new doubleing((yyvsp[0].number));}
#line 1859 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 53 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new floating((yyvsp[0].number));}
#line 1865 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new integer((yyvsp[0].number));}
#line 1871 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new character((yyvsp[0].number));}
#line 1877 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new stringliteral(*(yyvsp[0].string));}
#line 1883 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[-1].states);}
#line 1889 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 1895 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new arraysub((yyvsp[-3].states), (yyvsp[-1].states));}
#line 1901 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structor((yyvsp[-2].states), new identifier(*(yyvsp[0].string))); }
#line 1907 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new functioncall((yyvsp[-3].states), new expressionlist((yyvsp[-1].stateslist)));}
#line 1913 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new functioncall((yyvsp[-2].states));}
#line 1919 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new pointerSymbol{(yyvsp[-2].states), new identifier(*(yyvsp[0].string))};}
#line 1925 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new unaryplusplus((yyvsp[-1].states));}
#line 1931 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new unaryminusminus((yyvsp[-1].states));}
#line 1937 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 1943 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-2].stateslist), (yyvsp[0].states));}
#line 1949 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 1955 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new plusplusunary((yyvsp[0].states));}
#line 1961 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new minusminusunary((yyvsp[0].states));}
#line 1967 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 77 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new plusunary((yyvsp[0].states));}
#line 1973 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 78 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new minusunary((yyvsp[0].states));}
#line 1979 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new timesunary((yyvsp[0].states));}
#line 1985 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 80 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new invertunary((yyvsp[0].states));}
#line 1991 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 81 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new exclamunary((yyvsp[0].states));}
#line 1997 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 82 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new bitwiseandunary((yyvsp[0].states));}
#line 2003 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 83 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new sizeofunary((yyvsp[0].states));}
#line 2009 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 84 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new sizeofnameunary((yyvsp[-1].states));}
#line 2015 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 87 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2021 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 88 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2027 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2033 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new timesoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2039 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new divideoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2045 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 94 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new percentageoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2051 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2057 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 98 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new plusoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2063 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 99 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new minusoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2069 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 102 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2075 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 103 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new lshiftoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2081 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 104 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new rshiftoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2087 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 107 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2093 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 108 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new smalleroperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2099 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 109 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new biggeroperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2105 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 110 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new sequaloperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2111 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 111 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new bequaloperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2117 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 114 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2123 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 115 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new equalequaloperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2129 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 116 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new notequaloperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2135 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 119 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2141 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 120 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new bitwiseandoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2147 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 123 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2153 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new xoroperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2159 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 127 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2165 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 128 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new oroperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2171 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 131 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2177 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 132 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new logicalandoperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2183 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 135 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2189 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 136 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new logicaloroperator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2195 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 139 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2201 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 140 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new conditionaloperator((yyvsp[-4].states), (yyvsp[-2].states), (yyvsp[0].states));}
#line 2207 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 143 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2213 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 144 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new equalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2219 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 145 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new andequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2225 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 146 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new xorequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2231 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 147 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new orequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2237 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 148 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new percentageequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2243 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 149 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new lshiftequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2249 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 150 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new rshiftequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2255 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 151 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new plusequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2261 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 152 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new minusequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2267 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 153 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new timesequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2273 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 154 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new divideequalassignment((yyvsp[-2].states), (yyvsp[0].states));}
#line 2279 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 157 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2285 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2291 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new typedefkey();}
#line 2297 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2303 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 166 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new statickey();}
#line 2309 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 167 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new autokey();}
#line 2315 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 168 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new registerkey();}
#line 2321 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 171 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new declaration((yyvsp[-1].states));}
#line 2327 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 172 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new declaration((yyvsp[-2].states), (yyvsp[-1].stateslist));}
#line 2333 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 175 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new storageclassdeclaration((yyvsp[0].states));}
#line 2339 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 176 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new storageclassdeclaration((yyvsp[-1].states),(yyvsp[0].states));}
#line 2345 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 177 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new typespecdeclaration((yyvsp[0].states));}
#line 2351 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 178 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new typespecdeclaration((yyvsp[-1].states),(yyvsp[0].states));}
#line 2357 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new typequaldeclaration((yyvsp[0].states));}
#line 2363 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 180 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new typequaldeclaration((yyvsp[-1].states),(yyvsp[0].states));}
#line 2369 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 183 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2375 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 184 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listcombine((yyvsp[-2].stateslist), (yyvsp[0].states));}
#line 2381 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 187 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new initdeclarator((yyvsp[0].states));}
#line 2387 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 188 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new initdeclarator((yyvsp[-2].states),(yyvsp[0].states));}
#line 2393 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 189 "src/cparser.y" /* yacc.c:1646  */
    {}
#line 2399 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 192 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new voidkey();}
#line 2405 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 193 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new charkey();}
#line 2411 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 194 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new shortkey();}
#line 2417 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 195 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new intkey();}
#line 2423 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 196 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new longkey();}
#line 2429 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 197 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new floatkey();}
#line 2435 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 198 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new doublekey();}
#line 2441 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 199 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new signedkey();}
#line 2447 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 200 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new unsignedkey();}
#line 2453 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 201 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2459 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 202 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2465 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 206 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structspec((yyvsp[-1].states), new identifier(*(yyvsp[0].string)));}
#line 2471 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 207 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structspec((yyvsp[-3].states), new declarationlist((yyvsp[-1].stateslist))); }
#line 2477 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 208 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structspec((yyvsp[-4].states), new identifier(*(yyvsp[-3].string)), new declarationlist((yyvsp[-1].stateslist)));}
#line 2483 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 211 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structkey();}
#line 2489 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 212 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2495 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 215 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2501 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 216 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listcombine((yyvsp[-1].stateslist), (yyvsp[0].states));}
#line 2507 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 219 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structdeclarator(new qualifierlist((yyvsp[-2].stateslist)),new declarationlist((yyvsp[-1].stateslist)));}
#line 2513 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 221 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listcombine((yyvsp[0].stateslist), (yyvsp[-1].states));}
#line 2519 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 222 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2525 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 223 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[0].stateslist), (yyvsp[-1].states));}
#line 2531 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 224 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2537 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 227 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2543 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 228 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listcombine((yyvsp[-2].stateslist), (yyvsp[0].states));}
#line 2549 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 231 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structdeclarator((yyvsp[0].states));}
#line 2555 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 232 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structcolondeclarator((yyvsp[0].states));}
#line 2561 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 233 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new structcolondeclarator((yyvsp[-2].states), (yyvsp[0].states));}
#line 2567 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 236 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new enumspecifier(new identifier(*(yyvsp[-3].string)), new enumeratorlist((yyvsp[-1].stateslist)));}
#line 2573 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 237 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new enumspecifier(new enumeratorlist((yyvsp[-1].stateslist)));}
#line 2579 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 238 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new enumspecifier(new identifier(*(yyvsp[0].string)));}
#line 2585 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 241 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2591 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 242 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.stateslist) = listcombine((yyvsp[-2].stateslist), (yyvsp[0].states));}
#line 2597 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 245 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = new enumerator(new identifier(*(yyvsp[0].string)));}
#line 2603 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 246 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new enumerator(new identifier(*(yyvsp[-2].string)), (yyvsp[0].states));}
#line 2609 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 249 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2615 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 250 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2621 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 253 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2627 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 254 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new pointerdeclarator((yyvsp[0].states));}
#line 2633 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 257 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new identifier(*(yyvsp[0].string));}
#line 2639 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 258 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[-1].states);}
#line 2645 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 259 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new arraydeclarator((yyvsp[-2].states));}
#line 2651 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 260 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new arraydeclarator((yyvsp[-3].states),(yyvsp[-1].states));}
#line 2657 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 261 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new functiondeclarator((yyvsp[-3].states), new parameterlist((yyvsp[-1].stateslist)));}
#line 2663 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 262 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new functiondeclarator((yyvsp[-2].states));}
#line 2669 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 263 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new  functiondeclarator((yyvsp[-3].states), new identifierlist((yyvsp[-1].stateslist)));}
#line 2675 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 266 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new pointer();}
#line 2681 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 267 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2687 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 268 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2693 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 269 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2699 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 272 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2705 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 273 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-1].stateslist), (yyvsp[0].states));}
#line 2711 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 276 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = (yyvsp[0].stateslist);}
#line 2717 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 279 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2723 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 280 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-2].stateslist), (yyvsp[0].states));}
#line 2729 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 283 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new declaration((yyvsp[-1].states), (yyvsp[0].states));}
#line 2735 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 284 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new declaration((yyvsp[0].states));}
#line 2741 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 285 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new declaration((yyvsp[-1].states), (yyvsp[0].states));}
#line 2747 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 288 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen(new identifier(*(yyvsp[0].string)));}
#line 2753 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 289 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-2].stateslist), new identifier(*(yyvsp[0].string))); }
#line 2759 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 292 "src/cparser.y" /* yacc.c:1646  */
    {}
#line 2765 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 293 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2771 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 298 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new pointer();}
#line 2777 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 301 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[-1].states);}
#line 2783 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 302 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2789 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 303 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2795 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 304 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2801 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 305 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2807 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 306 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2813 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 307 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2819 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 308 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2825 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 309 "src/cparser.y" /* yacc.c:1646  */
    {;}
#line 2831 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 315 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new initializer((yyvsp[0].states));}
#line 2837 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 316 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new initializer(new initializerlist((yyvsp[-1].stateslist)));}
#line 2843 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 317 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new initializer(new initializerlist((yyvsp[-2].stateslist)));}
#line 2849 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 320 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2855 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 321 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-2].stateslist), (yyvsp[0].states));}
#line 2861 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 325 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2867 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 326 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2873 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 327 "src/cparser.y" /* yacc.c:1646  */
    { (yyval.states) = (yyvsp[0].states);}
#line 2879 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 328 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2885 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 329 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2891 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 330 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 2897 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 333 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new labeledstatement(new identifier(*(yyvsp[-2].string)), (yyvsp[0].states));}
#line 2903 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 334 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new caselabeledstatement((yyvsp[-2].states), (yyvsp[0].states));}
#line 2909 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 335 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new defaultlabeledstatement((yyvsp[0].states));}
#line 2915 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 338 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new compoundstatement((yyvsp[-2].stateslist), (yyvsp[-1].stateslist));}
#line 2921 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 339 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new compoundstatement((yyvsp[-1].stateslist)); }
#line 2927 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 340 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new compoundstatement((yyvsp[-1].stateslist));}
#line 2933 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 341 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new compoundstatement();}
#line 2939 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 344 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2945 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 345 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-1].stateslist), (yyvsp[0].states));}
#line 2951 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 348 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen((yyvsp[0].states));}
#line 2957 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 349 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-1].stateslist), (yyvsp[0].states));}
#line 2963 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 352 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new emptyline();}
#line 2969 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 353 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[-1].states);}
#line 2975 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 356 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new ifelsestatement((yyvsp[-2].states), (yyvsp[0].states));}
#line 2981 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 357 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new ifelsestatement((yyvsp[-4].states), (yyvsp[-2].states), (yyvsp[0].states));}
#line 2987 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 358 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new switchstatement((yyvsp[-2].states), (yyvsp[0].states));}
#line 2993 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 361 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new whilestatement((yyvsp[-2].states), (yyvsp[0].states));}
#line 2999 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 362 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new dostatement((yyvsp[-5].states), (yyvsp[-2].states));}
#line 3005 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 363 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new forstatement((yyvsp[-6].states), (yyvsp[-4].states), (yyvsp[-2].states), (yyvsp[0].states));}
#line 3011 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 364 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new forstatement((yyvsp[-4].states), (yyvsp[-2].states), (yyvsp[0].states));}
#line 3017 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 365 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new forstatement((yyvsp[-2].states), (yyvsp[0].states));}
#line 3023 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 368 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new continuestatement();}
#line 3029 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 369 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new breakstatement();}
#line 3035 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 370 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new returnstatement((yyvsp[-1].states));}
#line 3041 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 371 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new returnstatement();}
#line 3047 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 374 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listgen((yyvsp[0].states));}
#line 3053 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 375 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.stateslist) = listcombine((yyvsp[-1].stateslist), (yyvsp[0].states));}
#line 3059 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 378 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyvsp[0].states);}
#line 3065 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 379 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = (yyval.states) = new globaldeclaration((yyvsp[0].states));}
#line 3071 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 382 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new functiondefinition((yyvsp[-2].states), (yyvsp[-1].states), (yyvsp[0].states));}
#line 3077 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 383 "src/cparser.y" /* yacc.c:1646  */
    {(yyval.states) = new functiondefinition((yyvsp[-1].states), (yyvsp[0].states));}
#line 3083 "src/cparser.tab.cpp" /* yacc.c:1646  */
    break;


#line 3087 "src/cparser.tab.cpp" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 388 "src/cparser.y" /* yacc.c:1906  */

Statementptr g_root; 

Statementptr parseAST()
{
  g_root= 0;
  yyparse();
  return g_root;
}
