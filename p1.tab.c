
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "p1.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include<string.h> 

int symbols[500];
int arrNum[500];
int symbolVal(int symbol);
void updateSymbolVal(int symbol, int val);
int power(int a, int b);
int line = 0;
int divEnt(int a, int b);


/* Line 189 of yacc.c  */
#line 92 "p1.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     print = 258,
     exit_command = 259,
     AND = 260,
     BREAK = 261,
     CONTINUE = 262,
     DEF = 263,
     ELIF = 264,
     ELSE = 265,
     FOR = 266,
     IF = 267,
     IMPORT = 268,
     IN = 269,
     IS = 270,
     NOT = 271,
     OR = 272,
     PASS = 273,
     PRINT = 274,
     RETURN = 275,
     WHILE = 276,
     TRUE = 277,
     FALSE = 278,
     RANGE = 279,
     bitrightig = 280,
     bitleftig = 281,
     divEntig = 282,
     potig = 283,
     masig = 284,
     menig = 285,
     multig = 286,
     divig = 287,
     andig = 288,
     orig = 289,
     xorig = 290,
     modig = 291,
     pot = 292,
     bitleft = 293,
     bitright = 294,
     menorig = 295,
     mayorig = 296,
     dif = 297,
     distin = 298,
     igual = 299,
     divent = 300,
     mod = 301,
     and = 302,
     or = 303,
     xor = 304,
     negac = 305,
     menorque = 306,
     mayorque = 307,
     parabre = 308,
     parcierr = 309,
     corabre = 310,
     corcierr = 311,
     coma = 312,
     dospunt = 313,
     punt = 314,
     gtg = 315,
     endl = 316,
     number = 317,
     identifier = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "p1.y"
int num; int id; char another;


/* Line 214 of yacc.c  */
#line 195 "p1.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "p1.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    68,    66,     2,    67,     2,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    64,
       2,    65,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    24,    29,
      33,    36,    40,    44,    48,    52,    56,    60,    64,    68,
      72,    76,    80,    84,    88,    92,    96,   100,   104,   108,
     112,   116,   120,   124,   128,   132,   136,   140,   144,   148,
     152,   156,   160,   164,   168,   172,   176,   180,   184,   188,
     192,   196,   200,   204,   208,   212,   216,   220,   224,   228,
     232,   236,   240,   244,   248,   252,   256,   260,   264,   269,
     273,   277,   281,   285,   289,   293,   297,   301,   305,   309,
     313,   317,   321,   323,   327,   331,   333,   337,   341,   345,
     349,   353,   355,   359,   362,   364,   366,   368,   370,   374,
     378
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    61,    -1,     4,    61,    -1,     3,
      73,    61,    -1,    71,    72,    61,    -1,    80,    61,    -1,
      71,    80,    61,    -1,    71,     3,    73,    61,    -1,    71,
       4,    61,    -1,    71,    61,    -1,    71,     5,    61,    -1,
      71,     6,    61,    -1,    71,     7,    61,    -1,    71,     8,
      61,    -1,    71,     9,    61,    -1,    71,    10,    61,    -1,
      71,    11,    61,    -1,    71,    12,    61,    -1,    71,    13,
      64,    -1,    71,    14,    64,    -1,    71,    15,    64,    -1,
      71,    16,    64,    -1,    71,    17,    64,    -1,    71,    18,
      64,    -1,    71,    20,    64,    -1,    71,    21,    64,    -1,
      71,    22,    64,    -1,    71,    23,    64,    -1,    71,    24,
      64,    -1,    71,    25,    64,    -1,    71,    26,    64,    -1,
      71,    27,    64,    -1,    71,    28,    64,    -1,    71,    29,
      64,    -1,    71,    30,    64,    -1,    71,    31,    64,    -1,
      71,    32,    64,    -1,    71,    33,    64,    -1,    71,    34,
      64,    -1,    71,    35,    64,    -1,    71,    36,    64,    -1,
      71,    37,    64,    -1,    71,    38,    64,    -1,    71,    39,
      64,    -1,    71,    40,    64,    -1,    71,    41,    64,    -1,
      71,    42,    64,    -1,    71,    43,    64,    -1,    71,    44,
      64,    -1,    71,    45,    64,    -1,    71,    46,    64,    -1,
      71,    47,    64,    -1,    71,    48,    64,    -1,    71,    49,
      64,    -1,    71,    50,    64,    -1,    71,    51,    64,    -1,
      71,    52,    64,    -1,    71,    53,    64,    -1,    71,    54,
      64,    -1,    71,    55,    64,    -1,    71,    56,    64,    -1,
      71,    57,    64,    -1,    71,    58,    64,    -1,    71,    59,
      64,    -1,    71,    60,    64,    -1,    63,    65,    73,    -1,
      63,    65,    60,    -1,    63,    65,    63,    79,    -1,    73,
      38,    74,    -1,    73,    39,    74,    -1,    73,    48,    74,
      -1,    73,    47,    74,    -1,    73,    17,    74,    -1,    73,
       5,    74,    -1,    73,    49,    74,    -1,    73,    40,    74,
      -1,    73,    41,    74,    -1,    73,    42,    74,    -1,    73,
      43,    74,    -1,    73,    51,    74,    -1,    73,    52,    74,
      -1,    74,    -1,    74,    66,    75,    -1,    74,    67,    75,
      -1,    75,    -1,    75,    68,    76,    -1,    75,    69,    76,
      -1,    75,    45,    76,    -1,    75,    37,    76,    -1,    75,
      46,    76,    -1,    76,    -1,    53,    73,    54,    -1,    67,
      76,    -1,    77,    -1,    62,    -1,    63,    -1,    63,    -1,
      63,    57,    78,    -1,    55,    78,    56,    -1,     8,    63,
      53,    78,    54,    58,    61,    71,    20,    63,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   159,   160,   161,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   179,   180,   181,   184,   185,   186,   187,
     188,   189,   195,   196,   197,   201,   202,   205,   206,   209,
     212
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "print", "exit_command", "AND", "BREAK",
  "CONTINUE", "DEF", "ELIF", "ELSE", "FOR", "IF", "IMPORT", "IN", "IS",
  "NOT", "OR", "PASS", "PRINT", "RETURN", "WHILE", "TRUE", "FALSE",
  "RANGE", "bitrightig", "bitleftig", "divEntig", "potig", "masig",
  "menig", "multig", "divig", "andig", "orig", "xorig", "modig", "pot",
  "bitleft", "bitright", "menorig", "mayorig", "dif", "distin", "igual",
  "divent", "mod", "and", "or", "xor", "negac", "menorque", "mayorque",
  "parabre", "parcierr", "corabre", "corcierr", "coma", "dospunt", "punt",
  "gtg", "endl", "number", "identifier", "';'", "'='", "'+'", "'-'", "'*'",
  "'/'", "$accept", "line", "assignment", "exp", "X", "T", "F", "term",
  "vec", "v_identifier", "function", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    59,    61,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    77,    77,    78,    78,    79,
      80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     3,     4,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     1,     3,     2,     1,     1,     1,     1,     3,     3,
      10
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      96,     0,     0,    82,    85,    91,    94,     3,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     2,     6,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    96,    66,
       0,     9,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     5,     7,    92,
      74,    73,    69,    70,    76,    77,    78,    79,    72,    71,
      75,    80,    81,    83,    84,    89,    88,    90,    86,    87,
      97,     0,     0,    68,     8,     0,     0,     0,    98,     0,
      99,     0,     0,     0,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    12,    13,    14,    15,    16,   191,   193,
       7
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -125
static const yytype_int16 yypact[] =
{
     155,    14,   -39,     7,     8,     3,    17,    29,    14,  -125,
    -125,    14,   161,   -62,   119,  -125,  -125,  -125,    31,    12,
    -125,    14,    30,    52,    99,   100,    22,   101,   106,   107,
     108,   109,   110,   111,   112,   113,   115,   116,   117,   118,
     120,   121,   122,   125,   126,   127,   128,   130,   131,   132,
     142,   143,   147,   150,   151,   152,   153,   157,   159,   160,
     169,   170,   177,   178,   179,   180,   181,   182,   183,   184,
     187,   195,   196,   197,   204,   206,   213,   214,  -125,   158,
     164,  -125,  -125,   215,  -125,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,  -125,    14,
      14,    14,    14,    14,    14,    14,   189,  -125,   210,   233,
     188,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   119,   119,  -125,  -125,  -125,  -125,  -125,
     114,   129,   189,  -125,  -125,   189,   221,   227,  -125,   238,
    -125,   155,    94,    23,  -125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,   -31,    -5,    61,   201,   -11,    -9,  -125,  -124,  -125,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      79,    80,    84,    20,    99,   100,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    17,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     8,     4,     8,   197,    83,
      18,   198,   107,    19,     9,   108,     9,    10,    81,    11,
     109,    11,   110,   115,   106,    18,   204,   126,   183,   184,
      82,   111,   185,   186,   187,   188,   189,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   112,   203,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   101,     4,     1,     2,
     113,   114,   116,     3,   102,   103,    85,   117,   118,   119,
     202,   195,     0,   120,   121,   122,   123,   124,    86,   125,
     126,   127,   128,   196,   129,   130,   131,   104,   105,   132,
     133,   134,   135,    85,   136,   137,   138,    79,    80,    87,
      88,    89,    90,    91,    92,    86,   139,   140,    93,    94,
      95,   141,    96,    97,   142,   143,   144,   145,     4,   167,
      85,   146,    98,   147,   148,   168,    87,    88,    89,    90,
      91,    92,    86,   149,   150,    93,    94,    95,    85,    96,
      97,   151,   152,   153,   154,   155,   156,   157,   158,   194,
      86,   159,   190,    87,    88,    89,    90,    91,    92,   160,
     161,   162,    93,    94,    95,   192,    96,    97,   163,   169,
     164,    87,    88,    89,    90,    91,    92,   165,   166,   199,
      93,    94,    95,   200,    96,    97,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   201
};

static const yytype_int16 yycheck[] =
{
       5,     5,    11,     0,    66,    67,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    61,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    53,    63,    53,   192,     8,
      63,   195,    60,    65,    62,    63,    62,    63,    61,    67,
      19,    67,    21,    61,    53,    63,    63,    64,    99,   100,
      61,    61,   101,   102,   103,   104,   105,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    61,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    37,    63,     3,     4,
      61,    61,    61,     8,    45,    46,     5,    61,    61,    61,
     201,    57,    -1,    64,    64,    64,    64,    64,    17,    64,
      64,    64,    64,    54,    64,    64,    64,    68,    69,    64,
      64,    64,    64,     5,    64,    64,    64,   202,   202,    38,
      39,    40,    41,    42,    43,    17,    64,    64,    47,    48,
      49,    64,    51,    52,    64,    64,    64,    64,    63,    61,
       5,    64,    61,    64,    64,    61,    38,    39,    40,    41,
      42,    43,    17,    64,    64,    47,    48,    49,     5,    51,
      52,    64,    64,    64,    64,    64,    64,    64,    64,    61,
      17,    64,    63,    38,    39,    40,    41,    42,    43,    64,
      64,    64,    47,    48,    49,    55,    51,    52,    64,    54,
      64,    38,    39,    40,    41,    42,    43,    64,    64,    58,
      47,    48,    49,    56,    51,    52,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     8,    63,    71,    72,    80,    53,    62,
      63,    67,    73,    74,    75,    76,    77,    61,    63,    65,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    72,
      80,    61,    61,    73,    76,     5,    17,    38,    39,    40,
      41,    42,    43,    47,    48,    49,    51,    52,    61,    66,
      67,    37,    45,    46,    68,    69,    53,    60,    63,    73,
      73,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    61,    61,    54,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      63,    78,    55,    79,    61,    57,    54,    78,    78,    58,
      56,    61,    71,    20,    63
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 93 "p1.y"
    {line++;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 94 "p1.y"
    {exit(EXIT_SUCCESS);;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 95 "p1.y"
    {line++; printf("Printing %d\n", (yyvsp[(2) - (3)].num));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 96 "p1.y"
    {line+=2;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 97 "p1.y"
    {line+=2;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 98 "p1.y"
    {line++;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 99 "p1.y"
    {line++; printf("Printing %d\n", (yyvsp[(3) - (4)].num));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 100 "p1.y"
    {line++; exit(EXIT_SUCCESS);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 101 "p1.y"
    {line++;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 102 "p1.y"
    {printf("estoy viendo un AND\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "p1.y"
    {printf("estoy viendo un BREAK\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 104 "p1.y"
    {printf("estoy viendo un CONTINUE\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 105 "p1.y"
    {printf("estoy viendo un DEF\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 106 "p1.y"
    {printf("estoy viendo un ELIF\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 107 "p1.y"
    {printf("estoy viendo un ELSE\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 108 "p1.y"
    {printf("estoy viendo un FOR\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 109 "p1.y"
    {printf("estoy viendo un IF\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 110 "p1.y"
    {printf("estoy viendo un IMPORT\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 111 "p1.y"
    {printf("estoy viendo un IN\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 112 "p1.y"
    {printf("estoy viendo un IS\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 113 "p1.y"
    {printf("estoy viendo un NOT\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "p1.y"
    {printf("estoy viendo un OR\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 115 "p1.y"
    {printf("estoy viendo un PASS\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 116 "p1.y"
    {printf("estoy viendo un RETURN\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 117 "p1.y"
    {printf("estoy viendo un WHILE\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 118 "p1.y"
    {printf("estoy viendo un TRUE\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 119 "p1.y"
    {printf("estoy viendo un FALSE\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 120 "p1.y"
    {printf("estoy viendo un RANGE\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 121 "p1.y"
    {printf("estoy viendo un bitrightig\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 122 "p1.y"
    {printf("estoy viendo un bitleftig\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 123 "p1.y"
    {printf("estoy viendo un divEntig\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 124 "p1.y"
    {printf("estoy viendo un potig\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 125 "p1.y"
    {printf("estoy viendo un masig\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 126 "p1.y"
    {printf("estoy viendo un menig\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 127 "p1.y"
    {printf("estoy viendo un multig\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 128 "p1.y"
    {printf("estoy viendo un divig\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 129 "p1.y"
    {printf("estoy viendo un andig\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 130 "p1.y"
    {printf("estoy viendo un orig\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 131 "p1.y"
    {printf("estoy viendo un xorig\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 132 "p1.y"
    {printf("estoy viendo un modig\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 133 "p1.y"
    {printf("estoy viendo un pot\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 134 "p1.y"
    {printf("estoy viendo un bitleft\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 135 "p1.y"
    {printf("estoy viendo un bitright\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 136 "p1.y"
    {printf("estoy viendo un menorig\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 137 "p1.y"
    {printf("estoy viendo un mayorig\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 138 "p1.y"
    {printf("estoy viendo un dif\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 139 "p1.y"
    {printf("estoy viendo un distin\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 140 "p1.y"
    {printf("estoy viendo un igual\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 141 "p1.y"
    {printf("estoy viendo un divent\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 142 "p1.y"
    {printf("estoy viendo un mod\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 143 "p1.y"
    {printf("estoy viendo un and\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 144 "p1.y"
    {printf("estoy viendo un or\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 145 "p1.y"
    {printf("estoy viendo un xor\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 146 "p1.y"
    {printf("estoy viendo un negac\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 147 "p1.y"
    {printf("estoy viendo un menorque\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 148 "p1.y"
    {printf("estoy viendo un mayorque\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 149 "p1.y"
    {printf("estoy viendo un parabre\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 150 "p1.y"
    {printf("estoy viendo un parcierr\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 151 "p1.y"
    {printf("estoy viendo un corabre\n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 152 "p1.y"
    {printf("estoy viendo un corcierr\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 153 "p1.y"
    {printf("estoy viendo un coma\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 154 "p1.y"
    {printf("estoy viendo un dospunt\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 155 "p1.y"
    {printf("estoy viendo un punt\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 156 "p1.y"
    {printf("estoy viendo una cadena\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 159 "p1.y"
    { updateSymbolVal((yyvsp[(1) - (3)].id),(yyvsp[(3) - (3)].num)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 160 "p1.y"
    { ;;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 164 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num)  << (yyvsp[(3) - (3)].num);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 165 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) >> (yyvsp[(3) - (3)].num);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 166 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) | (yyvsp[(3) - (3)].num);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 167 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) & (yyvsp[(3) - (3)].num);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 168 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) | (yyvsp[(3) - (3)].num);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 169 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) & (yyvsp[(3) - (3)].num);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 170 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) ^ (yyvsp[(3) - (3)].num);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 171 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) <= (yyvsp[(3) - (3)].num);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 172 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) >= (yyvsp[(3) - (3)].num);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 173 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 174 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) != (yyvsp[(3) - (3)].num);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 175 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) < (yyvsp[(3) - (3)].num);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 176 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 177 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 179 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 180 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 181 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 184 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 185 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) / (yyvsp[(3) - (3)].num);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 186 "p1.y"
    {(yyval.num) = divEnt((yyvsp[(1) - (3)].num),(yyvsp[(3) - (3)].num));;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 187 "p1.y"
    {(yyval.num) = power((yyvsp[(1) - (3)].num),(yyvsp[(3) - (3)].num));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 188 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (3)].num) % (yyvsp[(3) - (3)].num);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 189 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 195 "p1.y"
    {(yyval.num) = (yyvsp[(2) - (3)].num);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 196 "p1.y"
    {(yyval.num) = -(yyvsp[(2) - (2)].num);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 197 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 201 "p1.y"
    {(yyval.num) = (yyvsp[(1) - (1)].num);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 202 "p1.y"
    {(yyval.num) = symbolVal((yyvsp[(1) - (1)].id));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 205 "p1.y"
    {;;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 206 "p1.y"
    {;;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 209 "p1.y"
    {;;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 212 "p1.y"
    {;;}
    break;



/* Line 1455 of yacc.c  */
#line 2289 "p1.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 215 "p1.y"
                     /* C code */

int computeSymbolIndex(int token)
{       
	return token;
} 

/* returns the value of a given symbol */
int symbolVal(int symbol)
{
        int bucket = computeSymbolIndex(symbol);
	int type = symbols[bucket]; 
        if(type == 0){
                return arrNum[bucket]; 
        }
	
}

/* updates the value of a given symbol */
void updateSymbolVal(int symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	int type = symbols[bucket]; 
        if(type == 0){
                arrNum[bucket] = val; 
        }
}

int power(int a, int b)
{
    int p = 1;
    for(int i = 1; i <=b; i++){
        p= p*a;
    }
    return p;
}

int divEnt(int a, int b)
{
    return a/b;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "Hay un error en la linea %d %s\n",(line+1), s);} 
