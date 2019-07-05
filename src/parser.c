/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         gwion_parse
#define yylex           gwion_lex
#define yyerror         gwion_error
#define yydebug         gwion_debug
#define yynerrs         gwion_nerrs


/* First part of user prologue.  */
#line 6 "ly/gwion.y" /* yacc.c:337  */

#include <stdio.h> // strlen in paste operation
#include <string.h> // strlen in paste operation
#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "parser.h"
#include "lexer.h"


#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define OP_SYM(a) (a) // TODO: remove
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(YYLTYPE*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 97 "src/parser.c" /* yacc.c:337  */
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

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    COMMA = 259,
    LPAREN = 260,
    RPAREN = 261,
    LBRACK = 262,
    RBRACK = 263,
    LBRACE = 264,
    RBRACE = 265,
    PERCENTPAREN = 266,
    SHARPPAREN = 267,
    ATPAREN = 268,
    FUNCTION = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    UNTIL = 274,
    LOOP = 275,
    FOR = 276,
    GOTO = 277,
    SWITCH = 278,
    CASE = 279,
    ENUM = 280,
    RETURN = 281,
    BREAK = 282,
    CONTINUE = 283,
    CLASS = 284,
    STATIC = 285,
    GLOBAL = 286,
    PRIVATE = 287,
    PROTECT = 288,
    EXTENDS = 289,
    DOT = 290,
    AST_DTOR = 291,
    OPERATOR = 292,
    TYPEDEF = 293,
    NOELSE = 294,
    UNION = 295,
    CONSTT = 296,
    AUTO = 297,
    PASTE = 298,
    ELLIPSE = 299,
    RARROW = 300,
    BACKSLASH = 301,
    BACKTICK = 302,
    NUM = 303,
    FLOATT = 304,
    ID = 305,
    STRING_LIT = 306,
    CHAR_LIT = 307,
    PLUS = 308,
    PLUSPLUS = 309,
    MINUS = 310,
    MINUSMINUS = 311,
    TIMES = 312,
    DIVIDE = 313,
    PERCENT = 314,
    DOLLAR = 315,
    QUESTION = 316,
    COLON = 317,
    ATSYM = 318,
    NEW = 319,
    SPORK = 320,
    FORK = 321,
    TYPEOF = 322,
    L_HACK = 323,
    R_HACK = 324,
    CHUCK = 325,
    AND = 326,
    EQ = 327,
    GE = 328,
    GT = 329,
    LE = 330,
    LT = 331,
    NEQ = 332,
    SHIFT_LEFT = 333,
    SHIFT_RIGHT = 334,
    S_AND = 335,
    S_OR = 336,
    S_XOR = 337,
    OR = 338,
    LTMPL = 339,
    RTMPL = 340,
    TILDA = 341,
    EXCLAMATION = 342,
    DYNOP = 343,
    TRIG = 344,
    UNTRIG = 345,
    PP_COMMENT = 346,
    PP_INCLUDE = 347,
    PP_DEFINE = 348,
    PP_UNDEF = 349,
    PP_IFDEF = 350,
    PP_IFNDEF = 351,
    PP_ELSE = 352,
    PP_ENDIF = 353,
    PP_NL = 354
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define COMMA 259
#define LPAREN 260
#define RPAREN 261
#define LBRACK 262
#define RBRACK 263
#define LBRACE 264
#define RBRACE 265
#define PERCENTPAREN 266
#define SHARPPAREN 267
#define ATPAREN 268
#define FUNCTION 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define UNTIL 274
#define LOOP 275
#define FOR 276
#define GOTO 277
#define SWITCH 278
#define CASE 279
#define ENUM 280
#define RETURN 281
#define BREAK 282
#define CONTINUE 283
#define CLASS 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define AST_DTOR 291
#define OPERATOR 292
#define TYPEDEF 293
#define NOELSE 294
#define UNION 295
#define CONSTT 296
#define AUTO 297
#define PASTE 298
#define ELLIPSE 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define NUM 303
#define FLOATT 304
#define ID 305
#define STRING_LIT 306
#define CHAR_LIT 307
#define PLUS 308
#define PLUSPLUS 309
#define MINUS 310
#define MINUSMINUS 311
#define TIMES 312
#define DIVIDE 313
#define PERCENT 314
#define DOLLAR 315
#define QUESTION 316
#define COLON 317
#define ATSYM 318
#define NEW 319
#define SPORK 320
#define FORK 321
#define TYPEOF 322
#define L_HACK 323
#define R_HACK 324
#define CHUCK 325
#define AND 326
#define EQ 327
#define GE 328
#define GT 329
#define LE 330
#define LT 331
#define NEQ 332
#define SHIFT_LEFT 333
#define SHIFT_RIGHT 334
#define S_AND 335
#define S_OR 336
#define S_XOR 337
#define OR 338
#define LTMPL 339
#define RTMPL 340
#define TILDA 341
#define EXCLAMATION 342
#define DYNOP 343
#define TRIG 344
#define UNTRIG 345
#define PP_COMMENT 346
#define PP_INCLUDE 347
#define PP_DEFINE 348
#define PP_UNDEF 349
#define PP_IFDEF 350
#define PP_IFNDEF 351
#define PP_ELSE 352
#define PP_ENDIF 353
#define PP_NL 354

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "ly/gwion.y" /* yacc.c:352  */

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt_Fptr func_type;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Body class_body;
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 366 "src/parser.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int gwion_parse (Scanner* arg);

#endif /* !YY_GWION_INCLUDE_PARSER_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  182
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

#define YYUNDEFTOK  2
#define YYMAXUTOK   354

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   125,   128,   129,   133,   134,   135,   139,
     145,   145,   147,   147,   150,   151,   154,   154,   155,   155,
     157,   157,   159,   161,   164,   171,   178,   178,   180,   184,
     188,   189,   189,   190,   191,   191,   194,   195,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   217,   218,   225,   225,   228,   231,   233,   236,   237,
     238,   241,   244,   245,   248,   250,   252,   254,   256,   258,
     263,   265,   270,   271,   272,   275,   276,   280,   281,   284,
     284,   286,   286,   288,   288,   290,   290,   290,   290,   290,
     293,   294,   295,   299,   300,   301,   304,   304,   305,   305,
     306,   308,   309,   310,   310,   312,   312,   313,   313,   314,
     314,   316,   316,   318,   319,   322,   323,   326,   327,   328,
     331,   331,   334,   337,   337,   337,   337,   337,   339,   340,
     342,   344,   346,   352,   352,   355,   356,   360,   361,   365,
     368,   369,   371,   372,   375,   392,   399,   400,   403,   404,
     406,   407,   408,   409,   410,   411,   413,   413,   414,   414,
     414,   414,   415,   415,   416,   416,   417,   417,   417,   418,
     418,   421,   421,   422,   422,   423,   423,   424,   424,   425,
     425,   426,   426,   427,   427,   428,   428,   429,   429,   430,
     430,   432,   432,   434,   434,   437,   437,   437,   438,   438,
     438,   438,   441,   441,   442,   443,   444,   447,   448,   449,
     449,   452,   453,   456,   456,   458,   458,   460,   461,   461,
     463,   466,   467,   470,   471,   472,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\";\"", "\",\"", "\"(\"", "\")\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"%(\"", "\"#(\"", "\"@(\"",
  "\"fun\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"goto\"", "\"switch\"", "\"case\"",
  "\"enum\"", "\"return\"", "\"break\"", "\"continue\"", "\"class\"",
  "\"static\"", "\"global\"", "\"private\"", "\"protect\"", "\"extends\"",
  "\".\"", "\"dtor\"", "\"operator\"", "\"typedef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"->\"",
  "\"\\\\\"", "\"`\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"+\"", "\"++\"",
  "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"",
  "\"@\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"",
  "\">>>\"", "\"=>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"",
  "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"",
  "\"||\"", "\"<~\"", "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"",
  "\"]=>\"", "\"]=<\"", "\"<comment>\"", "\"#include\"", "\"#define>\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "$accept", "prg", "ast", "section", "class_def", "class_ext",
  "class_body", "class_body2", "id_list", "dot_decl", "stmt_list",
  "fptr_base", "fdef_base", "func_type", "stmt_type", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt", "id", "opt_id", "enum_stmt",
  "label_stmt", "goto_stmt", "case_stmt", "switch_stmt", "flow",
  "loop_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "array",
  "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "arg_type", "decl_template", "storage_flag", "access_flag", "flag",
  "opt_flag", "func_def_base", "op_op", "func_def", "atsym",
  "type_decl000", "type_decl00", "type_decl0", "type_decl", "decl_list",
  "union_stmt", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "typeof_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp", "vec_type",
  "primary_exp", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354
};
# endif

#define YYPACT_NINF -311

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-311)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     467,  -311,   835,   899,   553,  -311,  -311,  -311,   127,    51,
    -311,   639,  -311,    72,    86,    69,  1219,   382,   127,  1219,
    -311,  -311,    47,  -311,  -311,  -311,  -311,   138,  1390,   127,
     127,     2,    90,    69,  1219,  -311,  -311,   118,  -311,  -311,
    -311,  -311,  -311,  -311,     3,   138,   138,   164,  1219,     3,
    -311,  -311,   170,  -311,   467,  -311,  -311,  -311,  -311,  -311,
    -311,   639,   100,  -311,  -311,  -311,  -311,  -311,   174,  -311,
    -311,   181,  -311,  -311,   183,    24,  -311,   182,  -311,  -311,
    -311,  -311,   111,  -311,     3,  -311,  -311,  -311,    90,  -311,
      69,  -311,  -311,    21,   117,   112,   113,   114,    17,    99,
     -13,   125,   107,  -311,   136,  1283,  -311,   138,  -311,  -311,
      92,  1219,  -311,  -311,    89,   191,  1374,  -311,   190,  -311,
     189,  -311,     3,  1219,   166,  1219,   705,   203,   138,   145,
    -311,   151,    53,   152,   207,   216,    69,   127,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,     3,  -311,  -311,  -311,
    -311,     3,     3,    47,   177,  -311,  -311,    69,    69,  -311,
     176,    69,  -311,  -311,   217,  -311,  -311,  1219,   156,  -311,
     222,   142,  -311,  -311,  -311,    69,  -311,  1219,  -311,  -311,
    1219,  1219,   963,  -311,  -311,  -311,  -311,   217,  -311,   225,
    1219,  1310,  1310,  1310,  1310,  1310,  -311,  -311,  1310,  1310,
    1310,  1310,  1374,     3,     3,  -311,  -311,  1219,    69,     3,
     226,  -311,  -311,   228,  -311,   229,  -311,    25,    69,   231,
    1219,   232,    90,   771,  -311,  -311,  -311,  -311,  -311,    69,
    -311,   147,   236,    69,   230,   237,    25,    69,    69,  -311,
    -311,  -311,  -311,  -311,   235,  -311,     3,    85,  -311,   238,
    -311,  -311,  -311,  -311,    69,   184,   117,   112,   113,   114,
      17,    99,   -13,   125,   107,   136,  -311,   240,  -311,   165,
    1027,  -311,  -311,  1091,  -311,  -311,   243,   138,    47,   639,
     248,   639,    69,  1155,   242,  -311,    69,   219,     3,     3,
    -311,    47,  -311,   245,  -311,  -311,  -311,   639,  -311,  1310,
       3,  -311,  -311,   249,  -311,  -311,  -311,   251,   241,  -311,
    -311,    40,   639,   252,    69,  -311,     3,   250,   256,    69,
     255,    33,    26,  -311,  -311,   257,  -311,     3,  -311,   639,
    1219,  -311,   639,   259,  -311,   467,     3,   217,  -311,   138,
    -311,    34,  -311,    69,   258,   263,    69,   260,   138,   265,
    -311,  -311,    52,  -311,  -311,   467,   261,  -311,   268,  -311,
     182,  -311,   271,  -311,   217,  -311,    69,     3,  -311,    69,
    -311,     3,   639,  -311,  -311,   138,    34,  -311,   182,   264,
    -311,   273,  -311,  -311,  -311,  -311,  -311,  -311
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    78,     0,     0,     0,   224,   223,   225,   120,     0,
      62,     0,    63,     0,     0,     0,     0,     0,   120,    72,
      73,    74,   112,   113,   114,   115,   116,     0,     0,   120,
     120,     0,   133,   210,     0,   227,   228,    51,   229,   230,
     215,   195,   216,   196,     0,   199,   200,     0,     0,     0,
     201,   198,     0,     2,     4,     8,   135,     6,    48,    49,
      41,    20,   226,    46,    42,    43,    45,    44,     0,    39,
      40,     0,    47,    38,     0,    79,    96,    97,   231,    81,
     103,    99,   118,   117,     0,   128,     7,   137,   133,   140,
       0,    50,    98,   169,   171,   173,   175,   177,   179,   181,
     183,   185,   187,   189,   191,     0,   193,     0,   197,   222,
     202,     0,   218,   236,   226,     0,     0,    93,     0,    36,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   222,    84,   218,     0,     0,     0,   120,   132,   164,
     165,   166,   167,   168,    85,   161,   159,   160,   158,    86,
     162,   163,    89,    87,    88,   123,     0,   125,   124,   127,
     126,     0,     0,   112,    18,   141,   134,     0,   207,   209,
       0,     0,    28,   204,    26,   205,   206,     0,     0,    29,
     211,     0,     1,     5,    21,     0,    56,     0,    76,    77,
       0,     0,     0,    95,   119,   104,   139,   148,   101,   146,
       0,     0,     0,     0,     0,     0,   156,   157,     0,     0,
       0,     0,     0,     0,     0,   203,   235,     0,     0,     0,
       0,   219,   221,     0,   234,    90,    37,     0,     0,     0,
       0,     0,   133,     0,    57,    61,    60,    59,    58,     0,
      75,     0,    16,     0,     0,     0,     0,     0,    54,   100,
     208,   136,    52,    27,     0,   233,     0,     0,    19,     0,
      80,    82,    94,   149,     0,     0,   172,   174,   176,   178,
     180,   182,   184,   186,   188,   190,   194,     0,   217,     0,
       0,   220,   232,     0,    91,   110,     0,     0,   112,     0,
       0,     0,     0,     0,     0,   111,     0,    11,     0,     0,
      24,   112,    53,     0,   192,   212,   138,     0,   147,     0,
       0,    83,   214,     0,    92,   109,   122,     0,    70,    65,
      69,   148,     0,     0,    54,    17,     0,     0,     0,     0,
       0,     0,     0,    64,   170,     0,   213,   106,    23,     0,
       0,    66,     0,     0,    10,    13,     0,   150,    30,     0,
      25,   108,    22,    54,     0,     0,     0,     0,     0,    31,
     105,    71,     0,    67,    55,    14,     0,    12,     0,   152,
     151,   130,    34,   107,   153,    33,    54,   142,   102,    54,
     131,     0,     0,    15,     9,     0,     0,   155,   154,     0,
     143,     0,    32,    68,   129,    35,   145,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,   227,  -294,  -311,  -311,  -311,   -86,  -217,    97,
      31,  -311,  -311,  -311,  -311,   -32,   -41,   -93,  -253,   -94,
     -43,   -96,   -22,    -5,     0,  -281,  -311,  -311,  -311,  -311,
    -311,   171,  -311,  -311,  -311,  -311,  -105,   352,   -42,  -311,
     269,   -70,  -310,  -165,   108,   221,  -311,  -311,  -311,    55,
    -150,  -311,   224,    12,    -4,  -311,  -311,  -311,   -78,    46,
    -311,   277,    59,   -67,  -311,   -82,  -311,   -45,  -311,  -311,
     284,   285,   286,   288,    10,  -311,   119,   121,   122,   124,
     116,   123,   126,   120,   115,  -311,   129,     1,   -46,   175,
    -311,  -141,  -311,   -10,   315,   316,  -311,   321
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    52,    53,    54,    55,   327,   366,   367,   241,    56,
      57,   246,   227,    58,    59,   179,   173,   180,   359,   360,
     372,   373,    60,    61,   164,   303,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   220,
     191,    76,    77,    78,    79,    80,   355,    81,   338,   287,
     137,    82,    83,    84,   122,    85,   156,    86,   167,    87,
      88,    89,    90,   357,    91,   249,   199,   348,   375,   208,
     209,   210,   211,   212,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   116,   106,   169,
     107,   181,   281,   108,   109,   110,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   105,   114,   114,    62,   138,   124,   193,   198,   253,
     196,    62,   172,   248,   134,   127,   114,   130,   161,   114,
     121,   233,   294,   175,   176,   162,   163,   354,   190,   228,
     121,   285,   263,   168,   114,   120,   350,   370,   351,   351,
     221,   121,   121,   343,    31,   328,   330,     3,   114,    34,
      34,   365,    37,    37,    62,   105,   123,   335,   382,   215,
     217,    62,   221,   244,   388,   150,   151,    31,   245,   286,
     215,   365,   374,    34,    31,    31,    37,   125,   279,   325,
      34,    34,   200,    37,    37,   216,    49,    49,   218,   206,
     197,   126,   184,   368,   207,   389,   144,   -84,   391,   217,
     222,   149,   340,   174,   201,   130,   235,    40,   174,    42,
      49,   114,   152,   153,   154,   305,   130,    49,    49,    37,
     276,   277,   222,   114,   144,   114,   114,   218,   293,   149,
     247,   136,    34,   243,   185,    37,   242,   219,   317,   -18,
     152,   153,   154,    25,    26,   185,    40,     4,    42,   121,
     -18,   331,   -18,   166,   292,   284,   263,    23,    24,    25,
      26,   171,   186,   -18,   141,   142,   143,   197,   168,   177,
     182,   252,   145,   146,   147,   148,   219,   114,   139,   187,
     140,   174,   308,    10,   188,    12,   189,   114,   202,   192,
     114,   114,   114,   203,   205,   204,   213,   224,   225,   226,
     114,   130,   130,   130,   130,   130,   234,   236,   130,   130,
     130,   130,   130,   237,   238,   174,   239,   114,   278,   240,
     174,   174,   185,   251,     3,   255,   256,   257,   288,   264,
     114,   280,   295,   114,   282,   298,   283,   289,   291,   242,
     296,   304,   299,   297,   307,   310,   309,   301,   302,   315,
     311,   319,   324,   326,   332,   336,   337,   339,   342,   345,
     346,   349,   364,   358,   197,   316,   377,   396,   376,   381,
     379,   384,   174,   174,   385,   386,   397,   369,   174,   383,
     114,   183,   258,   114,   318,   344,   320,   392,   352,    62,
     395,    62,   321,   114,   172,   230,   242,   155,   362,   261,
     193,   300,   333,   306,   387,   195,   194,    62,   165,   130,
     390,   378,   157,   158,   159,   174,   160,   341,   193,   334,
     266,   270,    62,   267,   302,   268,   274,   371,   269,   347,
     273,   271,   131,   132,   361,   272,   380,   363,   133,    62,
     114,   275,    62,   250,     0,    62,   105,     0,     0,     0,
       0,     0,     0,   302,   115,   118,   347,   329,   329,     0,
       0,     0,     0,   394,     0,    62,   105,     0,   128,   329,
       0,   135,     0,     0,     0,     0,   302,   393,     0,   302,
       0,     0,    62,   129,     0,   174,   170,     2,     0,     3,
     353,   356,     0,     5,     6,     7,   329,     0,     0,     0,
     178,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     353,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
      35,    36,    37,    38,    39,     0,   356,     0,     0,     0,
     329,     0,     0,     0,     0,   353,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,   229,     4,   231,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,    28,    29,     0,    30,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,   254,
       0,    44,    45,    46,    47,    48,     0,     0,     0,   259,
       0,     0,   260,     0,   118,     0,     0,     0,     0,     0,
       0,    49,   265,    50,    51,     0,     1,     0,     2,     0,
       3,     0,     4,   119,     5,     6,     7,     0,     9,   118,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   290,    23,    24,    25,    26,     0,     0,     0,
       0,    29,     0,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   313,     0,     0,   118,     0,    49,     0,    50,
      51,     0,     1,     0,     2,   323,     3,     0,     4,     0,
       5,     6,     7,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    23,
      24,    25,    26,     0,     0,     0,     0,    29,     0,    30,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     1,     0,
       2,     0,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,    49,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,   232,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     1,     0,     2,     0,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,     0,    49,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
       2,   113,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,     0,    49,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     2,     0,     3,   117,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,     0,    49,
       0,    50,    51,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     2,     0,
       3,   262,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,     0,    49,     0,    50,    51,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
      47,    48,     2,   312,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,     0,    49,     0,    50,
      51,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,    44,    45,    46,    47,    48,     2,     0,     3,   314,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
       0,    49,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
       2,   322,     3,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,     0,    49,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,     2,     0,     3,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,     0,    49,
       0,    50,    51,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,    44,    45,    46,    47,    48,     2,     0,
       3,     0,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,     0,    49,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
     214,     5,     6,     7,     0,     0,     0,     0,     0,    33,
       0,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    44,    45,    46,
       0,    48,     0,     0,     0,     0,    33,     0,    35,    36,
      37,    38,    39,     0,    40,    41,    42,    43,     0,    50,
      51,     0,     0,     0,    44,    45,    46,    47,    48,     2,
       0,     3,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,    35,    36,    37,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,    44,    45,
      46,     0,    48,   139,    40,   140,    42,   141,   142,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   153,
     154
};

static const yytype_int16 yycheck[] =
{
       0,     0,     2,     3,     4,    27,    11,    77,    90,   174,
      88,    11,    44,   163,    18,    15,    16,    17,    28,    19,
       8,   126,   239,    45,    46,    29,    30,     1,     4,   122,
      18,     6,   197,    33,    34,     4,     3,   347,     5,     5,
     110,    29,    30,   324,    41,   298,   299,     7,    48,    47,
      47,   345,    50,    50,    54,    54,     5,   310,     6,   105,
       7,    61,   132,   156,   374,    78,    79,    41,   161,    44,
     116,   365,   353,    47,    41,    41,    50,     5,   219,   296,
      47,    47,    61,    50,    50,   107,    84,    84,    35,    72,
      90,     5,    61,   346,    77,   376,    72,     5,   379,     7,
     110,    77,    62,    44,    83,   105,   128,    54,    49,    56,
      84,   111,    88,    89,    90,   256,   116,    84,    84,    50,
     213,   214,   132,   123,    72,   125,   126,    35,   233,    77,
     162,    84,    47,   137,    45,    50,   136,    84,   288,    50,
      88,    89,    90,    32,    33,    45,    54,     9,    56,   137,
      50,   301,    63,    63,   232,   225,   321,    30,    31,    32,
      33,    43,    62,    63,    57,    58,    59,   167,   168,     5,
       0,   171,    73,    74,    75,    76,    84,   177,    53,     5,
      55,   122,   264,    17,     3,    19,     3,   187,    71,     7,
     190,   191,   192,    81,    80,    82,    60,     6,     8,    10,
     200,   201,   202,   203,   204,   205,     3,    62,   208,   209,
     210,   211,   212,    62,    62,   156,     9,   217,   218,     3,
     161,   162,    45,    47,     7,    69,     4,    85,   228,     4,
     230,     5,    85,   233,     6,     5,     7,     6,     6,   239,
       4,     6,     5,   243,     6,     5,    62,   247,   248,     6,
      85,     3,    10,    34,     9,     6,     5,    16,     6,     9,
       4,     6,     3,     6,   264,   287,     3,     3,    10,     4,
      10,    10,   213,   214,     6,     4,     3,   347,   219,   365,
     280,    54,   185,   283,   289,   326,   291,   381,   331,   289,
     386,   291,   292,   293,   326,   124,   296,    28,   340,   191,
     370,   246,   307,   257,   374,    84,    82,   307,    31,   309,
     377,   356,    28,    28,    28,   256,    28,   322,   388,   309,
     201,   205,   322,   202,   324,   203,   211,   349,   204,   329,
     210,   208,    17,    17,   339,   209,   358,   342,    17,   339,
     340,   212,   342,   168,    -1,   345,   345,    -1,    -1,    -1,
      -1,    -1,    -1,   353,     2,     3,   356,   298,   299,    -1,
      -1,    -1,    -1,   385,    -1,   365,   365,    -1,    16,   310,
      -1,    19,    -1,    -1,    -1,    -1,   376,   382,    -1,   379,
      -1,    -1,   382,     1,    -1,   326,    34,     5,    -1,     7,
     331,   332,    -1,    11,    12,    13,   337,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,    49,    50,    51,    52,    -1,   377,    -1,    -1,    -1,
     381,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   123,     9,   125,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,   177,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,   187,
      -1,    -1,   190,    -1,   192,    -1,    -1,    -1,    -1,    -1,
      -1,    84,   200,    86,    87,    -1,     3,    -1,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    -1,    15,   217,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   230,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,    -1,   283,    -1,    84,    -1,    86,
      87,    -1,     3,    -1,     5,   293,     7,    -1,     9,    -1,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,     5,    -1,     7,     8,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,     5,    -1,
       7,     8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    68,     5,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,     5,    -1,     7,     8,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    67,    68,
       5,     6,     7,    -1,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      37,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    -1,    46,    -1,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    86,
      87,    -1,    -1,    -1,    64,    65,    66,    67,    68,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    -1,    68,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    36,    37,    38,
      40,    41,    42,    46,    47,    48,    49,    50,    51,    52,
      54,    55,    56,    57,    64,    65,    66,    67,    68,    84,
      86,    87,   101,   102,   103,   104,   109,   110,   113,   114,
     122,   123,   124,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   141,   142,   143,   144,
     145,   147,   151,   152,   153,   155,   157,   159,   160,   161,
     162,   164,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   190,   193,   194,
     195,   196,   197,     6,   124,   137,   187,     8,   137,    10,
     110,   153,   154,     5,   123,     5,     5,   124,   137,     1,
     124,   194,   195,   197,   154,   137,    84,   150,   122,    53,
      55,    57,    58,    59,    72,    73,    74,    75,    76,    77,
      78,    79,    88,    89,    90,   140,   156,   170,   171,   172,
     173,   193,   154,   154,   124,   161,    63,   158,   124,   189,
     137,    43,   115,   116,   162,   122,   122,     5,   137,   115,
     117,   191,     0,   102,   110,    45,    62,     5,     3,     3,
       4,   140,     7,   141,   152,   145,   158,   124,   165,   166,
      61,    83,    71,    81,    82,    80,    72,    77,   169,   170,
     171,   172,   173,    60,    37,   188,   122,     7,    35,    84,
     139,   141,   193,   137,     6,     8,    10,   112,   117,   137,
     131,   137,    42,   136,     3,   122,    62,    62,    62,     9,
       3,   108,   124,   154,   117,   117,   111,   115,   150,   165,
     189,    47,   124,   143,   137,    69,     4,    85,   109,   137,
     137,   144,     8,   143,     4,   137,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   186,   117,   117,   124,   191,
       5,   192,     6,     7,   141,     6,    44,   149,   124,     6,
     137,     6,   158,   136,   108,    85,     4,   124,     5,     5,
     149,   124,   124,   125,     6,   191,   159,     6,   165,    62,
       5,    85,     6,   137,     8,     6,   122,   150,   123,     3,
     123,   124,     6,   137,    10,   108,    34,   105,   118,   162,
     118,   150,     9,   123,   174,   118,     6,     5,   148,    16,
      62,   123,     6,   125,   116,     9,     4,   124,   167,     6,
       3,     5,   120,   162,     1,   146,   162,   163,     6,   118,
     119,   123,   138,   123,     3,   103,   106,   107,   118,   141,
     142,   122,   120,   121,   125,   168,    10,     3,   167,    10,
     122,     4,     6,   107,    10,     6,     4,   141,   142,   125,
     163,   125,   119,   123,   122,   121,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   102,   102,   103,   103,   103,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   112,   113,   114,   115,   115,   116,   117,
     118,   119,   119,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   127,   128,   129,   129,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   140,   140,   140,
     141,   141,   141,   142,   142,   142,   143,   143,   144,   144,
     144,   145,   146,   147,   147,   148,   148,   120,   120,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   153,
     154,   154,   155,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   169,   169,   170,   170,
     170,   170,   171,   171,   172,   172,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   183,   183,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   188,   188,   188,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   195,   195,
     195,   195,   195,   196,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     8,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     2,     4,     4,     4,     6,     1,     2,     1,     1,
       2,     1,     3,     2,     1,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     3,     3,
       3,     3,     1,     1,     5,     5,     6,     7,     9,     5,
       5,     7,     1,     1,     1,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       3,     4,     5,     2,     3,     2,     1,     1,     1,     1,
       3,     2,     2,     1,     2,     2,     1,     2,     1,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     5,     1,     1,     1,     1,     1,     1,     9,
       7,     7,     2,     0,     1,     1,     3,     1,     4,     2,
       1,     2,     2,     3,     9,     9,     1,     3,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     3,     3,     2,     1,     1,     3,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     2,     2
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
        yyerror (&yylloc, arg, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, arg);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Scanner* arg)
{
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, arg); \
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Scanner* arg)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, &yylloc, scan);
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
  *++yylsp = yylloc;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 124 "ly/gwion.y" /* yacc.c:1652  */
    { arg->ast = (yyvsp[0].ast); }
#line 2116 "src/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 125 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2122 "src/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 128 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2128 "src/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 129 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2134 "src/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 133 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2140 "src/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 134 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2146 "src/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 135 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2152 "src/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 140 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].class_body), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
  }
#line 2161 "src/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 145 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2167 "src/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 145 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = NULL; }
#line 2173 "src/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 147 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = NULL; }
#line 2179 "src/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 150 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[0].section), NULL); }
#line 2185 "src/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 151 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.class_body) = new_class_body(mpool(arg), (yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2191 "src/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 154 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2197 "src/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 154 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2203 "src/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 155 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2209 "src/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 155 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2215 "src/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 157 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2221 "src/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 157 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2227 "src/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 159 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2234 "src/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 161 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1); }
#line 2241 "src/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 164 "ly/gwion.y" /* yacc.c:1652  */
    {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.stmt) = new_stmt_fptr(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2253 "src/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 171 "ly/gwion.y" /* yacc.c:1652  */
    {
  (yyval.stmt) = new_stmt_type(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.stmt)->d.stmt_type.tmpl = new_tmpl(mpool(arg), (yyvsp[-1].id_list), -1);
}
#line 2264 "src/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 178 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2270 "src/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 180 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2278 "src/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 184 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2286 "src/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 188 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2292 "src/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 189 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2298 "src/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 189 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2304 "src/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 190 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2310 "src/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 191 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2316 "src/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 191 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2322 "src/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 194 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2328 "src/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 195 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2334 "src/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 217 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2340 "src/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 218 "ly/gwion.y" /* yacc.c:1652  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2350 "src/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 225 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.sym) = NULL; }
#line 2356 "src/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 228 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_enum(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2363 "src/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 231 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2369 "src/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 233 "ly/gwion.y" /* yacc.c:1652  */
    {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2375 "src/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 236 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2381 "src/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 237 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_case, (yyvsp[-1].exp)); }
#line 2387 "src/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 238 "ly/gwion.y" /* yacc.c:1652  */
    { gw_err(_("unhandled expression type in case statement.\n")); YYERROR; }
#line 2393 "src/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 241 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_switch(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2399 "src/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 244 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_while; }
#line 2405 "src/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 245 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_until; }
#line 2411 "src/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 249 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2417 "src/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 251 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2423 "src/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 253 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2429 "src/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 255 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2435 "src/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 257 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2441 "src/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 259 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2447 "src/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 264 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2453 "src/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 266 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2459 "src/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 270 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_return; }
#line 2465 "src/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 271 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_break; }
#line 2471 "src/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 272 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_stmt_continue; }
#line 2477 "src/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 275 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2483 "src/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 276 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2489 "src/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 280 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2495 "src/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 281 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2501 "src/parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 284 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2507 "src/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 286 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2513 "src/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 288 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2519 "src/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 288 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = NULL; }
#line 2525 "src/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 293 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2531 "src/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 294 "ly/gwion.y" /* yacc.c:1652  */
    { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2537 "src/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 295 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2543 "src/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 299 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2549 "src/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 300 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2555 "src/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 301 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2561 "src/parser.c" /* yacc.c:1652  */
    break;

  case 100:
#line 306 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2568 "src/parser.c" /* yacc.c:1652  */
    break;

  case 101:
#line 308 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2574 "src/parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 309 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2580 "src/parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 310 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2586 "src/parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 312 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2592 "src/parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 312 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2598 "src/parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2604 "src/parser.c" /* yacc.c:1652  */
    break;

  case 108:
#line 313 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 2610 "src/parser.c" /* yacc.c:1652  */
    break;

  case 109:
#line 314 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2616 "src/parser.c" /* yacc.c:1652  */
    break;

  case 110:
#line 314 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2622 "src/parser.c" /* yacc.c:1652  */
    break;

  case 111:
#line 316 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2628 "src/parser.c" /* yacc.c:1652  */
    break;

  case 112:
#line 316 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.id_list) = NULL; }
#line 2634 "src/parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 318 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_static; }
#line 2640 "src/parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 319 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_global; }
#line 2646 "src/parser.c" /* yacc.c:1652  */
    break;

  case 115:
#line 322 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_private; }
#line 2652 "src/parser.c" /* yacc.c:1652  */
    break;

  case 116:
#line 323 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = ae_flag_protect; }
#line 2658 "src/parser.c" /* yacc.c:1652  */
    break;

  case 117:
#line 326 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2664 "src/parser.c" /* yacc.c:1652  */
    break;

  case 118:
#line 327 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2670 "src/parser.c" /* yacc.c:1652  */
    break;

  case 119:
#line 328 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2676 "src/parser.c" /* yacc.c:1652  */
    break;

  case 120:
#line 331 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = 0; }
#line 2682 "src/parser.c" /* yacc.c:1652  */
    break;

  case 121:
#line 331 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2688 "src/parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 335 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 2694 "src/parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 341 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].sym)), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2700 "src/parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 343 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].sym)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 2706 "src/parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 345 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].sym)), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 2712 "src/parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 347 "ly/gwion.y" /* yacc.c:1652  */
    {
ID_List l = new_id_list(mpool(arg), insert_symbol("void"), GET_LOC(&(yyloc)));
(yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), new_type_decl(mpool(arg), l),
       insert_symbol("dtor"), NULL), (yyvsp[0].stmt), ae_flag_dtor, GET_LOC(&(yyloc))); }
#line 2721 "src/parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 352 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = 0; }
#line 2727 "src/parser.c" /* yacc.c:1652  */
    break;

  case 134:
#line 352 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_flag_ref; }
#line 2733 "src/parser.c" /* yacc.c:1652  */
    break;

  case 135:
#line 355 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 2739 "src/parser.c" /* yacc.c:1652  */
    break;

  case 136:
#line 356 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[-1].exp)); }
#line 2745 "src/parser.c" /* yacc.c:1652  */
    break;

  case 137:
#line 360 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2751 "src/parser.c" /* yacc.c:1652  */
    break;

  case 138:
#line 361 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 2757 "src/parser.c" /* yacc.c:1652  */
    break;

  case 139:
#line 365 "ly/gwion.y" /* yacc.c:1652  */
    { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 2763 "src/parser.c" /* yacc.c:1652  */
    break;

  case 140:
#line 368 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2769 "src/parser.c" /* yacc.c:1652  */
    break;

  case 141:
#line 369 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2775 "src/parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 371 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2781 "src/parser.c" /* yacc.c:1652  */
    break;

  case 143:
#line 372 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2787 "src/parser.c" /* yacc.c:1652  */
    break;

  case 144:
#line 375 "ly/gwion.y" /* yacc.c:1652  */
    {
      (yyval.stmt) = new_stmt_union(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gw_err(_("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gw_err(_("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.stmt)->d.stmt_union.tmpl = new_tmpl(mpool(arg), (yyvsp[-6].id_list), -1);
      }
    }
#line 2809 "src/parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 392 "ly/gwion.y" /* yacc.c:1652  */
    {
    gw_err(_("Unions should only contain declarations.\n"));
    YYERROR;
    }
#line 2818 "src/parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 399 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2824 "src/parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 400 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2830 "src/parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 403 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2836 "src/parser.c" /* yacc.c:1652  */
    break;

  case 149:
#line 404 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2842 "src/parser.c" /* yacc.c:1652  */
    break;

  case 150:
#line 406 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2848 "src/parser.c" /* yacc.c:1652  */
    break;

  case 151:
#line 407 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2854 "src/parser.c" /* yacc.c:1652  */
    break;

  case 152:
#line 408 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2860 "src/parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 409 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2866 "src/parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 410 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2872 "src/parser.c" /* yacc.c:1652  */
    break;

  case 155:
#line 411 "ly/gwion.y" /* yacc.c:1652  */
    { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2878 "src/parser.c" /* yacc.c:1652  */
    break;

  case 170:
#line 419 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2884 "src/parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 421 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2890 "src/parser.c" /* yacc.c:1652  */
    break;

  case 174:
#line 422 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2896 "src/parser.c" /* yacc.c:1652  */
    break;

  case 176:
#line 423 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2902 "src/parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 424 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2908 "src/parser.c" /* yacc.c:1652  */
    break;

  case 180:
#line 425 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2914 "src/parser.c" /* yacc.c:1652  */
    break;

  case 182:
#line 426 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2920 "src/parser.c" /* yacc.c:1652  */
    break;

  case 184:
#line 427 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2926 "src/parser.c" /* yacc.c:1652  */
    break;

  case 186:
#line 428 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2932 "src/parser.c" /* yacc.c:1652  */
    break;

  case 188:
#line 429 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2938 "src/parser.c" /* yacc.c:1652  */
    break;

  case 190:
#line 430 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2944 "src/parser.c" /* yacc.c:1652  */
    break;

  case 192:
#line 432 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 2950 "src/parser.c" /* yacc.c:1652  */
    break;

  case 194:
#line 435 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 2956 "src/parser.c" /* yacc.c:1652  */
    break;

  case 203:
#line 441 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2962 "src/parser.c" /* yacc.c:1652  */
    break;

  case 204:
#line 442 "ly/gwion.y" /* yacc.c:1652  */
    {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 2968 "src/parser.c" /* yacc.c:1652  */
    break;

  case 205:
#line 443 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 2974 "src/parser.c" /* yacc.c:1652  */
    break;

  case 206:
#line 444 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 2980 "src/parser.c" /* yacc.c:1652  */
    break;

  case 207:
#line 447 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 2986 "src/parser.c" /* yacc.c:1652  */
    break;

  case 208:
#line 448 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 2992 "src/parser.c" /* yacc.c:1652  */
    break;

  case 209:
#line 449 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2998 "src/parser.c" /* yacc.c:1652  */
    break;

  case 210:
#line 449 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.arg_list) = NULL; }
#line 3004 "src/parser.c" /* yacc.c:1652  */
    break;

  case 211:
#line 452 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3010 "src/parser.c" /* yacc.c:1652  */
    break;

  case 212:
#line 453 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3016 "src/parser.c" /* yacc.c:1652  */
    break;

  case 213:
#line 456 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3022 "src/parser.c" /* yacc.c:1652  */
    break;

  case 214:
#line 456 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = NULL; }
#line 3028 "src/parser.c" /* yacc.c:1652  */
    break;

  case 217:
#line 460 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3034 "src/parser.c" /* yacc.c:1652  */
    break;

  case 219:
#line 462 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3040 "src/parser.c" /* yacc.c:1652  */
    break;

  case 220:
#line 464 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3047 "src/parser.c" /* yacc.c:1652  */
    break;

  case 221:
#line 467 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3053 "src/parser.c" /* yacc.c:1652  */
    break;

  case 222:
#line 467 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3059 "src/parser.c" /* yacc.c:1652  */
    break;

  case 223:
#line 470 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_complex; }
#line 3065 "src/parser.c" /* yacc.c:1652  */
    break;

  case 224:
#line 471 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3071 "src/parser.c" /* yacc.c:1652  */
    break;

  case 225:
#line 472 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3077 "src/parser.c" /* yacc.c:1652  */
    break;

  case 226:
#line 475 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3083 "src/parser.c" /* yacc.c:1652  */
    break;

  case 227:
#line 476 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3089 "src/parser.c" /* yacc.c:1652  */
    break;

  case 228:
#line 477 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3095 "src/parser.c" /* yacc.c:1652  */
    break;

  case 229:
#line 478 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3101 "src/parser.c" /* yacc.c:1652  */
    break;

  case 230:
#line 479 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3107 "src/parser.c" /* yacc.c:1652  */
    break;

  case 231:
#line 480 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3113 "src/parser.c" /* yacc.c:1652  */
    break;

  case 232:
#line 481 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3119 "src/parser.c" /* yacc.c:1652  */
    break;

  case 233:
#line 482 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3125 "src/parser.c" /* yacc.c:1652  */
    break;

  case 234:
#line 483 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3131 "src/parser.c" /* yacc.c:1652  */
    break;

  case 235:
#line 484 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3137 "src/parser.c" /* yacc.c:1652  */
    break;

  case 236:
#line 485 "ly/gwion.y" /* yacc.c:1652  */
    { (yyval.exp) = new_exp_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3143 "src/parser.c" /* yacc.c:1652  */
    break;


#line 3147 "src/parser.c" /* yacc.c:1652  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, arg, YY_("syntax error"));
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
        yyerror (&yylloc, arg, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, arg);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, arg, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, arg);
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
#line 487 "ly/gwion.y" /* yacc.c:1918  */

