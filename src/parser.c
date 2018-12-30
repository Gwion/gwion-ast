/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.2"

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
#line 5 "ly/gwion.y" /* yacc.c:338  */

#include <stdio.h> // strlen in paste operation
#include <string.h> // strlen in paste operation
#include <math.h>
#include "defs.h"
#include "err_msg.h"
#include "vector.h"
#include "map.h"
#include "symbol.h"
#include "absyn.h"
#include "hash.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "lexer.h"
#define YYMALLOC xmalloc
#define scan arg->scanner
#define OP_SYM(a) insert_symbol(op2str(a))
ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
m_str op2str(const Operator op);

#line 98 "src/parser.c" /* yacc.c:338  */
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
    CHUCK = 259,
    COMMA = 260,
    DIVIDE = 261,
    TIMES = 262,
    PERCENT = 263,
    L_HACK = 264,
    R_HACK = 265,
    LPAREN = 266,
    RPAREN = 267,
    LBRACK = 268,
    RBRACK = 269,
    LBRACE = 270,
    RBRACE = 271,
    PLUSCHUCK = 272,
    MINUSCHUCK = 273,
    TIMESCHUCK = 274,
    DIVIDECHUCK = 275,
    MODULOCHUCK = 276,
    ATCHUCK = 277,
    UNCHUCK = 278,
    TRIG = 279,
    UNTRIG = 280,
    PERCENTPAREN = 281,
    SHARPPAREN = 282,
    ATSYM = 283,
    FUNCTION = 284,
    DOLLAR = 285,
    TILDA = 286,
    QUESTION = 287,
    COLON = 288,
    EXCLAMATION = 289,
    IF = 290,
    ELSE = 291,
    WHILE = 292,
    DO = 293,
    UNTIL = 294,
    LOOP = 295,
    FOR = 296,
    GOTO = 297,
    SWITCH = 298,
    CASE = 299,
    ENUM = 300,
    RETURN = 301,
    BREAK = 302,
    CONTINUE = 303,
    PLUSPLUS = 304,
    MINUSMINUS = 305,
    NEW = 306,
    SPORK = 307,
    CLASS = 308,
    STATIC = 309,
    GLOBAL = 310,
    PRIVATE = 311,
    PROTECT = 312,
    EXTENDS = 313,
    DOT = 314,
    COLONCOLON = 315,
    AND = 316,
    EQ = 317,
    GE = 318,
    GT = 319,
    LE = 320,
    LT = 321,
    MINUS = 322,
    PLUS = 323,
    NEQ = 324,
    SHIFT_LEFT = 325,
    SHIFT_RIGHT = 326,
    S_AND = 327,
    S_OR = 328,
    S_XOR = 329,
    OR = 330,
    AST_DTOR = 331,
    OPERATOR = 332,
    TYPEDEF = 333,
    RSL = 334,
    RSR = 335,
    RSAND = 336,
    RSOR = 337,
    RSXOR = 338,
    TEMPLATE = 339,
    LTMPL = 340,
    RTMPL = 341,
    NOELSE = 342,
    UNION = 343,
    ATPAREN = 344,
    TYPEOF = 345,
    CONST = 346,
    AUTO = 347,
    PASTE = 348,
    ELLIPSE = 349,
    RARROW = 350,
    NUM = 351,
    FLOAT = 352,
    ID = 353,
    STRING_LIT = 354,
    CHAR_LIT = 355,
    PP_COMMENT = 356,
    PP_INCLUDE = 357,
    PP_DEFINE = 358,
    PP_UNDEF = 359,
    PP_IFDEF = 360,
    PP_IFNDEF = 361,
    PP_ELSE = 362,
    PP_ENDIF = 363,
    PP_NL = 364
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define CHUCK 259
#define COMMA 260
#define DIVIDE 261
#define TIMES 262
#define PERCENT 263
#define L_HACK 264
#define R_HACK 265
#define LPAREN 266
#define RPAREN 267
#define LBRACK 268
#define RBRACK 269
#define LBRACE 270
#define RBRACE 271
#define PLUSCHUCK 272
#define MINUSCHUCK 273
#define TIMESCHUCK 274
#define DIVIDECHUCK 275
#define MODULOCHUCK 276
#define ATCHUCK 277
#define UNCHUCK 278
#define TRIG 279
#define UNTRIG 280
#define PERCENTPAREN 281
#define SHARPPAREN 282
#define ATSYM 283
#define FUNCTION 284
#define DOLLAR 285
#define TILDA 286
#define QUESTION 287
#define COLON 288
#define EXCLAMATION 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define DO 293
#define UNTIL 294
#define LOOP 295
#define FOR 296
#define GOTO 297
#define SWITCH 298
#define CASE 299
#define ENUM 300
#define RETURN 301
#define BREAK 302
#define CONTINUE 303
#define PLUSPLUS 304
#define MINUSMINUS 305
#define NEW 306
#define SPORK 307
#define CLASS 308
#define STATIC 309
#define GLOBAL 310
#define PRIVATE 311
#define PROTECT 312
#define EXTENDS 313
#define DOT 314
#define COLONCOLON 315
#define AND 316
#define EQ 317
#define GE 318
#define GT 319
#define LE 320
#define LT 321
#define MINUS 322
#define PLUS 323
#define NEQ 324
#define SHIFT_LEFT 325
#define SHIFT_RIGHT 326
#define S_AND 327
#define S_OR 328
#define S_XOR 329
#define OR 330
#define AST_DTOR 331
#define OPERATOR 332
#define TYPEDEF 333
#define RSL 334
#define RSR 335
#define RSAND 336
#define RSOR 337
#define RSXOR 338
#define TEMPLATE 339
#define LTMPL 340
#define RTMPL 341
#define NOELSE 342
#define UNION 343
#define ATPAREN 344
#define TYPEOF 345
#define CONST 346
#define AUTO 347
#define PASTE 348
#define ELLIPSE 349
#define RARROW 350
#define NUM 351
#define FLOAT 352
#define ID 353
#define STRING_LIT 354
#define CHAR_LIT 355
#define PP_COMMENT 356
#define PP_INCLUDE 357
#define PP_DEFINE 358
#define PP_UNDEF 359
#define PP_IFDEF 360
#define PP_IFNDEF 361
#define PP_ELSE 362
#define PP_ENDIF 363
#define PP_NL 364

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "ly/gwion.y" /* yacc.c:353  */

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
  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 386 "src/parser.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
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
#define YYFINAL  181
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  397

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   111,   112,   116,   117,   118,   122,
     128,   128,   130,   130,   133,   134,   137,   137,   138,   138,
     139,   139,   141,   141,   143,   144,   147,   148,   151,   152,
     153,   155,   156,   156,   159,   160,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   182,
     183,   190,   190,   193,   196,   198,   201,   202,   203,   206,
     209,   211,   213,   215,   217,   219,   221,   223,   228,   230,
     235,   236,   237,   238,   242,   243,   246,   246,   248,   248,
     250,   250,   252,   252,   252,   253,   253,   254,   254,   255,
     255,   256,   256,   257,   257,   257,   258,   258,   262,   263,
     264,   268,   269,   270,   273,   273,   274,   274,   275,   276,
     277,   277,   279,   279,   280,   280,   282,   282,   284,   285,
     288,   289,   292,   293,   294,   297,   297,   298,   299,   300,
     303,   311,   311,   311,   311,   311,   313,   314,   316,   318,
     320,   325,   325,   328,   329,   331,   334,   335,   337,   338,
     341,   347,   355,   356,   359,   360,   362,   363,   364,   366,
     366,   367,   367,   367,   367,   368,   368,   369,   369,   370,
     370,   370,   371,   371,   374,   374,   375,   375,   376,   376,
     377,   377,   378,   378,   379,   379,   380,   380,   381,   381,
     382,   382,   383,   383,   385,   385,   388,   388,   389,   390,
     390,   390,   393,   393,   394,   395,   397,   397,   401,   402,
     405,   405,   407,   407,   409,   410,   410,   412,   415,   416,
     419,   420,   421,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "CHUCK", "COMMA", "DIVIDE",
  "TIMES", "PERCENT", "L_HACK", "R_HACK", "LPAREN", "RPAREN", "LBRACK",
  "RBRACK", "LBRACE", "RBRACE", "PLUSCHUCK", "MINUSCHUCK", "TIMESCHUCK",
  "DIVIDECHUCK", "MODULOCHUCK", "ATCHUCK", "UNCHUCK", "TRIG", "UNTRIG",
  "PERCENTPAREN", "SHARPPAREN", "ATSYM", "FUNCTION", "DOLLAR", "TILDA",
  "QUESTION", "COLON", "EXCLAMATION", "IF", "ELSE", "WHILE", "DO", "UNTIL",
  "LOOP", "FOR", "GOTO", "SWITCH", "CASE", "ENUM", "RETURN", "BREAK",
  "CONTINUE", "PLUSPLUS", "MINUSMINUS", "NEW", "SPORK", "CLASS", "STATIC",
  "GLOBAL", "PRIVATE", "PROTECT", "EXTENDS", "DOT", "COLONCOLON", "AND",
  "EQ", "GE", "GT", "LE", "LT", "MINUS", "PLUS", "NEQ", "SHIFT_LEFT",
  "SHIFT_RIGHT", "S_AND", "S_OR", "S_XOR", "OR", "AST_DTOR", "OPERATOR",
  "TYPEDEF", "RSL", "RSR", "RSAND", "RSOR", "RSXOR", "TEMPLATE", "LTMPL",
  "RTMPL", "NOELSE", "UNION", "ATPAREN", "TYPEOF", "CONST", "AUTO",
  "PASTE", "ELLIPSE", "RARROW", "NUM", "FLOAT", "ID", "STRING_LIT",
  "CHAR_LIT", "PP_COMMENT", "PP_INCLUDE", "PP_DEFINE", "PP_UNDEF",
  "PP_IFDEF", "PP_IFNDEF", "PP_ELSE", "PP_ENDIF", "PP_NL", "$accept",
  "prg", "ast", "section", "class_def", "class_ext", "class_body",
  "class_body2", "id_list", "id_dot", "dot_decl", "stmt_list", "func_type",
  "stmt_type", "type_decl_array", "type_decl_exp", "arg", "arg_list",
  "code_stmt", "stmt", "id", "opt_id", "enum_stmt", "label_stmt",
  "goto_stmt", "case_stmt", "switch_stmt", "loop_stmt", "selection_stmt",
  "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template", "op",
  "array_exp", "array_empty", "array", "decl_exp2", "decl_exp",
  "union_exp", "decl_exp3", "func_args", "arg_type", "decl_template",
  "storage_flag", "access_flag", "flag", "opt_flag", "func_flag",
  "type_flag", "class_flag", "func_def_base", "op_op", "func_def", "atsym",
  "type_decl0", "type_decl", "decl_list", "union_stmt", "var_decl_list",
  "var_decl", "arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "cast_exp", "unary_op", "unary_exp", "dur_exp", "type_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "vec_type",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364
};
# endif

#define YYPACT_NINF -293

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-293)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     445,  -293,  -293,  1536,  1224,  1276,   840,  -293,  -293,  -293,
    -293,    33,    35,   938,    44,    48,    51,   -70,  1536,   409,
      95,  1111,    69,    73,  -293,  -293,    43,    67,  -293,  -293,
    -293,  -293,  -293,    67,  1692,    95,    21,    43,    95,  -293,
     102,    50,  -293,  -293,    23,  -293,  -293,   120,  -293,   546,
    -293,    99,  -293,  -293,  -293,  -293,   938,    17,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,   133,  1639,  -293,
     146,  -293,  -293,  -293,  -293,    32,    62,  -293,    43,    43,
    -293,  -293,  -293,   -70,  -293,  -293,    -7,   100,    89,    90,
      93,    22,    92,    68,    76,    80,   137,  1588,  -293,   108,
    -293,  -293,    52,  1536,  -293,    -6,   162,  1640,  -293,   163,
    -293,   165,  -293,   160,  1536,  1536,     3,  1536,  1536,  1036,
     178,    67,   149,  -293,   150,     8,   155,  -293,   174,  -293,
     187,  -293,  -293,  -293,    96,   180,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,    43,  -293,  -293,  -293,
    -293,    43,  -293,   -70,   189,   180,   111,   -70,   -70,  -293,
     -70,  -293,  -293,  -293,  -293,  -293,  -293,   -70,  -293,  1536,
    1536,  1328,  -293,    95,    95,    43,   -70,  -293,  -293,   -70,
     180,  -293,   193,  1536,  1640,  1640,  1640,  1640,  1640,  -293,
    -293,  1640,  1640,  1640,  1640,  1640,    43,    43,  -293,    25,
    1536,   -70,    43,   190,  -293,  -293,   188,  -293,  -293,   197,
    -293,   191,   206,  1536,  1536,   208,   211,    99,  1172,  -293,
    -293,  -293,  -293,  -293,   -70,  -293,  -293,   146,   213,   214,
     116,   221,    43,  -293,   -70,  -293,   212,   216,   171,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,   -70,   175,    70,  -293,
     -70,   199,   100,    89,    90,    93,    22,    92,    68,    76,
      80,   137,  -293,   223,    52,  -293,   151,  1380,  -293,  -293,
    1432,  -293,   938,   938,   232,   233,   938,   938,   -70,  1484,
     222,    43,    43,  -293,   -70,  -293,    99,    19,    99,   -70,
     228,    43,   225,  -293,    43,    11,  -293,  1640,    43,  -293,
    -293,   229,  -293,   207,  -293,  -293,  -293,  -293,  -293,   209,
     938,   234,   -70,   242,   -70,   236,  -293,  -293,   235,   246,
     -70,   239,  -293,  -293,    11,  -293,   644,   245,  -293,  -293,
     249,  -293,  -293,   250,  -293,   938,  1536,  -293,   938,   255,
      43,   180,  -293,    67,   -70,    43,  -293,   -70,    67,   742,
     247,  -293,    43,  -293,    67,  -293,  1764,  -293,  -293,   252,
    -293,   146,  -293,   262,  -293,   264,  -293,  -293,  -293,  -293,
    -293,   938,    67,  -293,  -293,  -293,  -293
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     117,    75,   197,     0,     0,     0,     0,   221,   220,   201,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,   212,   213,     0,   200,   118,   119,
     120,   121,   196,     0,     0,   125,     0,     0,   125,   222,
       0,     0,   224,   225,    49,   226,   227,     0,     2,   117,
       8,   141,     6,    46,    47,    39,    22,   223,    44,    40,
      41,    43,    42,    37,    38,    45,    36,     0,    76,   104,
     105,   228,    78,   110,   107,     0,   123,   122,     0,     0,
     136,     7,   146,     0,    48,   106,   172,   174,   176,   178,
     180,   182,   184,   186,   188,   190,   192,     0,   194,   202,
     198,   219,   206,     0,   215,   223,     0,     0,   232,     0,
     101,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   219,    81,   215,   126,     0,    70,
       0,    72,    73,   204,    20,    28,   205,   140,    82,   170,
     169,   171,    86,    87,    88,    89,    90,    85,    83,    91,
      92,    84,   164,   162,   163,   161,   168,   167,   165,   166,
      93,    94,    95,    96,    97,   131,     0,   133,   132,   135,
     134,     0,   128,     0,   208,    26,     0,    52,     0,   147,
       0,     1,     5,   142,   143,    23,    54,     0,    74,     0,
       0,     0,   103,   125,   125,     0,     0,   124,   111,     0,
     154,   108,   152,     0,     0,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,   203,     0,
       0,     0,     0,     0,   216,   218,     0,   230,   231,    98,
      35,     0,     0,     0,     0,     0,     0,   141,     0,    55,
      59,    58,    57,    56,     0,    71,    29,    30,     0,     0,
       0,    16,     0,    27,     0,    51,     0,     0,    18,    50,
      21,    77,    79,   102,   127,   129,     0,    11,     0,   155,
       0,     0,   175,   177,   179,   181,   183,   185,   187,   189,
     191,   193,   195,     0,   207,   214,     0,     0,   217,   229,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,   209,   141,     0,   141,     0,
       0,     0,     0,    25,   113,     0,   153,     0,     0,    80,
     211,     0,   100,    68,    60,    61,    66,    65,    67,     0,
       0,     0,    52,     0,     0,     0,    17,   144,     0,     0,
       0,     0,   145,    19,     0,    10,   117,    32,   112,   115,
       0,    24,   173,     0,   210,     0,     0,    62,     0,     0,
       0,   156,    31,     0,    52,   148,   109,    52,     0,   117,
       0,    12,     0,   114,     0,    69,     0,    63,    53,     0,
     158,   157,   138,     0,   149,     0,   130,    15,     9,    33,
     139,     0,     0,   151,   150,    64,   137
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,   219,  -292,  -293,  -293,  -293,  -100,  -178,  -179,
    -293,    18,  -293,  -293,   -63,   -39,  -270,   -99,   -26,   -11,
       0,  -268,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -109,   142,   -82,  -293,   241,   -55,  -130,  -140,    87,   200,
    -293,  -293,   -30,   -65,  -293,  -293,   215,    -8,   -24,  -293,
    -293,  -293,  -293,  -293,  -293,  -208,   243,   105,   -78,  -293,
      13,  -293,   -52,  -293,   256,   260,   261,   265,   -28,  -293,
     101,    98,   104,   106,   107,    97,   112,   103,   109,   110,
       4,   -64,  -293,  -183,  -293,   -31,   293,   -10,  -293,   301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    47,    48,    49,    50,   312,   370,   371,   250,   257,
      51,    52,    53,    54,   174,   133,   347,   348,    55,    56,
     105,   256,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   223,   190,    69,    70,    71,    72,    73,
     339,    74,   315,   351,    75,    76,    77,    78,   128,   195,
      79,   196,    80,   166,    81,   184,    82,    83,   341,    84,
     201,   202,   362,   211,   212,   213,   214,   215,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
     107,    98,    99,   176,   288,   100,   101,   102,   103,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   136,   116,   171,    97,   247,    57,   137,   260,   125,
     238,   172,   127,    57,   177,   192,   199,   120,   267,   123,
     338,   220,   -20,   349,   113,   203,   134,   127,    44,   298,
     127,   333,   335,   218,     3,   253,     4,   134,     5,   286,
     233,   134,   234,   218,   114,   -20,   115,   224,   353,    57,
     186,     7,     8,    97,   369,   117,    57,    24,    25,   118,
     269,   193,   119,   -81,   359,   220,   300,   221,   204,   305,
     224,   225,   131,   313,   185,   306,   132,   369,   134,   134,
     246,   314,     6,   200,   209,   194,   139,   140,   141,   187,
     379,   210,   -20,   222,   225,   240,   383,   123,   337,   385,
     342,    24,    25,   248,    37,   350,   173,   123,   249,    40,
      41,   221,   187,   178,    39,   -20,   180,    44,    30,    31,
     181,    42,    43,    44,    45,    46,   336,   183,    37,   299,
     343,   135,   266,    40,    41,    37,   188,   222,   158,   159,
      40,    44,   175,   156,   157,   106,   109,   111,    44,    28,
      29,    30,    31,   282,   283,   152,   153,   154,   155,   191,
     121,   205,   206,   130,   207,   208,   134,   216,   219,   264,
     265,   134,   227,   251,   291,   228,   230,   255,   258,   229,
     259,   239,   241,   242,   175,   127,   127,   258,   243,   244,
     245,   187,   192,     5,   252,   134,   251,   254,   270,   268,
     289,   287,   303,   292,   123,   123,   123,   123,   123,   284,
     290,   123,   123,   123,   123,   123,   134,   134,   293,   123,
     296,   285,   134,   297,   301,   302,   304,   307,   308,   224,
     309,   381,   317,   311,   318,   325,   326,   319,   332,   314,
     346,   354,   356,   355,   251,   226,   358,   360,   363,   365,
     372,   364,   134,   225,   258,   367,   231,   232,   378,   235,
     236,   373,   374,   388,   392,   393,   310,   394,   182,   387,
     200,   175,   345,   389,   376,   165,   175,   262,   198,   368,
     344,   323,   324,   316,   179,   327,   328,   384,   366,   352,
     167,   197,    57,    57,   168,   169,    57,    57,   329,   170,
     175,   134,   134,   273,   251,   272,   380,   134,   277,   258,
     274,   134,   124,   275,   134,   276,   279,   123,   134,   357,
     126,   175,   175,   280,   278,   281,   192,   175,     0,     0,
      57,   261,   255,   111,   361,     0,     0,   382,     0,     0,
     361,     0,   386,     0,   375,   271,    57,   377,   390,     0,
      97,     0,     0,     0,     0,    57,     0,   175,    57,     0,
     134,     0,   111,     0,   255,   134,   396,   255,     0,    57,
       0,     0,   134,    97,     0,   294,   295,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,   334,     0,     0,
     122,     0,   340,     0,     0,     0,   135,     0,     3,   334,
       4,     0,     5,   334,     0,     0,     0,     0,     0,   321,
       0,     0,   111,     0,     0,     7,     8,     0,     0,     0,
       0,   331,     0,     0,     0,    -3,     0,     0,     1,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       6,     0,     0,     0,     0,   334,     0,     0,     0,     0,
     340,     7,     8,     0,     0,     0,     9,   334,     0,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    39,    28,
      29,    30,    31,     0,     0,    42,    43,    44,    45,    46,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,    36,
      37,     0,     0,    38,    39,    40,    41,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    -4,     0,     0,     1,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     5,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
      36,    37,     0,     0,    38,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,     0,     0,     0,     0,     0,    36,    37,
       0,     0,    38,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     6,   -14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,     0,     0,     0,     0,     0,    36,    37,     0,     0,
      38,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,     1,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,     6,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,    37,     0,     0,    38,    39,
      40,    41,     0,     0,     0,     0,    42,    43,    44,    45,
      46,     1,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,    37,     0,     0,    38,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,     1,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     0,     0,     2,     0,
       3,    37,     4,     0,     5,    39,    40,    41,   237,     0,
       0,     0,    42,    43,    44,    45,    46,     7,     8,     0,
       0,     0,     9,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     1,     0,     0,    32,     2,
       0,     3,     0,     4,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     7,     8,
      39,    40,    41,     9,     0,     0,    10,    42,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     2,     0,     3,     0,     4,   108,     5,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,    37,    10,     0,
       0,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     2,     0,     3,     0,     4,     0,     5,
     110,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,    37,
      10,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     2,     0,     3,     0,     4,
       0,     5,   263,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,    37,    10,     0,     0,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     2,     0,     3,
       0,     4,   320,     5,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,    37,    10,     0,     0,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     2,
       0,     3,     0,     4,     0,     5,   322,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,    37,    10,     0,     0,    39,
      40,    41,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     2,     0,     3,     0,     4,   330,     5,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,    37,    10,     0,
       0,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     2,     0,     3,     0,     4,     0,     5,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,    37,
      10,     0,     0,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     2,     0,     3,     0,     4,
       0,     5,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,    37,    10,     0,     0,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    24,    25,    26,
      27,     0,     0,   138,   189,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,    32,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   217,     7,     8,     0,     0,
       0,     9,     0,     0,    10,     0,     0,    39,     0,     0,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    24,
      25,    26,    27,     0,     0,     0,   138,     0,   139,   140,
     141,   151,     0,     0,     0,     0,     0,    32,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   160,   161,
     162,   163,   164,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   151,   152,   153,   154,   155,   156,
     157,     0,   158,   159,     0,     0,     0,     0,   138,     0,
       0,   160,   161,   162,   163,   164,   391,     0,     0,     0,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   161,   162,   163,   164
};

static const yytype_int16 yycheck[] =
{
       0,    27,    13,    34,     0,   135,     6,    33,   187,    19,
     119,    35,    20,    13,    38,    70,    79,    17,   196,    19,
       1,    13,    28,    12,     6,    32,    26,    35,    98,   237,
      38,   301,   302,    97,     9,   175,    11,    37,    13,   222,
      37,    41,    39,   107,    11,    28,    11,   102,   318,    49,
      33,    26,    27,    49,   346,    11,    56,    49,    50,    11,
     200,    29,    11,    11,   332,    13,   244,    59,    75,   252,
     125,   102,     3,     3,    56,   254,     3,   369,    78,    79,
     135,    11,    15,    83,    62,    53,     6,     7,     8,    95,
     360,    69,    98,    85,   125,   121,   364,    97,   306,   367,
     308,    49,    50,   166,    85,    94,    85,   107,   171,    90,
      91,    59,    95,    11,    89,    98,    93,    98,    56,    57,
       0,    96,    97,    98,    99,   100,   304,    28,    85,   238,
     309,    26,   195,    90,    91,    85,     3,    85,    70,    71,
      90,    98,    37,    67,    68,     3,     4,     5,    98,    54,
      55,    56,    57,   216,   217,    63,    64,    65,    66,    13,
      18,    61,    73,    21,    74,    72,   166,    30,    60,   193,
     194,   171,    10,   173,   229,    12,    16,   177,   178,    14,
     180,     3,    33,    33,    79,   193,   194,   187,    33,    15,
       3,    95,   247,    13,     5,   195,   196,    86,     5,   199,
      12,    11,    86,    12,   204,   205,   206,   207,   208,   219,
      13,   211,   212,   213,   214,   215,   216,   217,    12,   219,
      12,   221,   222,    12,    11,    11,     5,    15,    12,   284,
      59,   361,    33,    58,    11,     3,     3,    86,    16,    11,
      15,    12,    33,    36,   244,   103,    12,     5,    12,     3,
       5,    16,   252,   284,   254,    16,   114,   115,     3,   117,
     118,    12,    12,    16,    12,     3,   266,     3,    49,   369,
     270,   166,   311,   372,   356,    34,   171,   190,    78,   344,
     310,   292,   293,   270,    41,   296,   297,   365,   340,   317,
      34,    76,   292,   293,    34,    34,   296,   297,   298,    34,
     195,   301,   302,   205,   304,   204,   361,   307,   211,   309,
     206,   311,    19,   207,   314,   208,   213,   317,   318,   330,
      19,   216,   217,   214,   212,   215,   381,   222,    -1,    -1,
     330,   189,   332,   191,   334,    -1,    -1,   363,    -1,    -1,
     340,    -1,   368,    -1,   355,   203,   346,   358,   374,    -1,
     346,    -1,    -1,    -1,    -1,   355,    -1,   252,   358,    -1,
     360,    -1,   220,    -1,   364,   365,   392,   367,    -1,   369,
      -1,    -1,   372,   369,    -1,   233,   234,    -1,    -1,    -1,
     391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   302,    -1,    -1,
       1,    -1,   307,    -1,    -1,    -1,   311,    -1,     9,   314,
      11,    -1,    13,   318,    -1,    -1,    -1,    -1,    -1,   287,
      -1,    -1,   290,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,   299,    -1,    -1,    -1,     0,    -1,    -1,     3,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
     365,    26,    27,    -1,    -1,    -1,    31,   372,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    89,    54,
      55,    56,    57,    -1,    -1,    96,    97,    98,    99,   100,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,     0,    -1,    -1,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,    -1,
       9,    85,    11,    -1,    13,    89,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    67,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    26,    27,
      89,    90,    91,    31,    -1,    -1,    34,    96,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    85,    34,    -1,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      14,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    85,
      34,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    14,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    85,    34,    -1,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    85,    34,    -1,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    14,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    85,    34,    -1,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    85,    34,    -1,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    85,
      34,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    85,    34,    -1,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    49,    50,    51,
      52,    -1,    -1,     4,     5,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    67,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    77,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,    49,
      50,    51,    52,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,    62,    -1,    -1,    -1,    -1,    -1,    67,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    79,    80,    81,    82,    83,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    31,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    67,    76,    77,    78,    84,    85,    88,    89,
      90,    91,    96,    97,    98,    99,   100,   111,   112,   113,
     114,   120,   121,   122,   123,   128,   129,   130,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   145,
     146,   147,   148,   149,   151,   154,   155,   156,   157,   160,
     162,   164,   166,   167,   169,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     195,   196,   197,   198,   199,   130,   141,   190,    12,   141,
      14,   141,    16,   121,    11,    11,   129,    11,    11,    11,
     130,   141,     1,   130,   196,   197,   199,   157,   158,     3,
     141,     3,     3,   125,   130,   167,   128,   128,     4,     6,
       7,     8,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    62,    63,    64,    65,    66,    67,    68,    70,    71,
      79,    80,    81,    82,    83,   144,   163,   174,   175,   176,
     177,   195,   158,    85,   124,   167,   193,   158,    11,   166,
      93,     0,   112,    28,   165,   121,    33,    95,     3,     5,
     144,    13,   145,    29,    53,   159,   161,   156,   149,   124,
     130,   170,   171,    32,    75,    61,    73,    74,    72,    62,
      69,   173,   174,   175,   176,   177,    30,    77,   191,    60,
      13,    59,    85,   143,   145,   195,   141,    10,    12,    14,
      16,   141,   141,    37,    39,   141,   141,    92,   140,     3,
     128,    33,    33,    33,    15,     3,   145,   146,   124,   124,
     118,   130,     5,   147,    86,   130,   131,   119,   130,   130,
     119,   141,   148,    14,   158,   158,   124,   118,   130,   147,
       5,   141,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   124,   124,   197,   130,   193,    11,   194,    12,
      13,   145,    12,    12,   141,   141,    12,    12,   165,   140,
     118,    11,    11,    86,     5,   193,   119,    15,    12,    59,
     130,    58,   115,     3,    11,   152,   170,    33,    11,    86,
      12,   141,    14,   129,   129,     3,     3,   129,   129,   130,
      12,   141,    16,   126,   167,   126,   118,   165,     1,   150,
     167,   168,   165,   119,   152,   125,    15,   126,   127,    12,
      94,   153,   178,   126,    12,    36,    33,   129,    12,   131,
       5,   130,   172,    12,    16,     3,   172,    16,   153,   113,
     116,   117,     5,    12,    12,   129,   142,   129,     3,   126,
     145,   146,   128,   131,   168,   131,   128,   117,    16,   127,
     128,    12,    12,     3,     3,   129,   128
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   113,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   124,   124,   125,   125,
     125,   126,   127,   127,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   133,   134,   135,   135,   135,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   149,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   157,   158,   158,   159,   160,   161,
     162,   163,   163,   163,   163,   163,   164,   164,   164,   164,
     164,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     173,   174,   174,   174,   174,   175,   175,   176,   176,   177,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   197,   197,   197,   197,   197,
     198,   198,   198,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     7,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     5,     4,     1,     2,     1,     2,
       2,     2,     1,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     7,     2,     3,     3,     3,     3,     3,
       5,     5,     6,     7,     9,     5,     5,     5,     5,     7,
       2,     3,     2,     2,     2,     1,     1,     3,     1,     3,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       5,     2,     3,     2,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     4,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     2,     2,     2,
       7,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       2,     0,     1,     2,     5,     5,     1,     2,     2,     3,
       8,     8,     1,     3,     1,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     3,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2
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
      yyerror (arg, YY_("syntax error: cannot back up")); \
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
                  Type, Value, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, arg);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, Scanner* arg)
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, arg); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 122: /* func_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1828 "src/parser.c" /* yacc.c:1254  */
        break;

    case 123: /* stmt_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1834 "src/parser.c" /* yacc.c:1254  */
        break;

    case 128: /* code_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1840 "src/parser.c" /* yacc.c:1254  */
        break;

    case 129: /* stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1846 "src/parser.c" /* yacc.c:1254  */
        break;

    case 132: /* enum_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1852 "src/parser.c" /* yacc.c:1254  */
        break;

    case 133: /* label_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1858 "src/parser.c" /* yacc.c:1254  */
        break;

    case 134: /* goto_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1864 "src/parser.c" /* yacc.c:1254  */
        break;

    case 135: /* case_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1870 "src/parser.c" /* yacc.c:1254  */
        break;

    case 136: /* switch_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1876 "src/parser.c" /* yacc.c:1254  */
        break;

    case 137: /* loop_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1882 "src/parser.c" /* yacc.c:1254  */
        break;

    case 138: /* selection_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1888 "src/parser.c" /* yacc.c:1254  */
        break;

    case 139: /* jump_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1894 "src/parser.c" /* yacc.c:1254  */
        break;

    case 140: /* exp_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1900 "src/parser.c" /* yacc.c:1254  */
        break;

    case 141: /* exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1906 "src/parser.c" /* yacc.c:1254  */
        break;

    case 142: /* binary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1912 "src/parser.c" /* yacc.c:1254  */
        break;

    case 148: /* decl_exp2  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1918 "src/parser.c" /* yacc.c:1254  */
        break;

    case 149: /* decl_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1924 "src/parser.c" /* yacc.c:1254  */
        break;

    case 150: /* union_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1930 "src/parser.c" /* yacc.c:1254  */
        break;

    case 151: /* decl_exp3  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1936 "src/parser.c" /* yacc.c:1254  */
        break;

    case 169: /* union_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1942 "src/parser.c" /* yacc.c:1254  */
        break;

    case 178: /* con_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1948 "src/parser.c" /* yacc.c:1254  */
        break;

    case 179: /* log_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1954 "src/parser.c" /* yacc.c:1254  */
        break;

    case 180: /* log_and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1960 "src/parser.c" /* yacc.c:1254  */
        break;

    case 181: /* inc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1966 "src/parser.c" /* yacc.c:1254  */
        break;

    case 182: /* exc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1972 "src/parser.c" /* yacc.c:1254  */
        break;

    case 183: /* and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1978 "src/parser.c" /* yacc.c:1254  */
        break;

    case 184: /* eq_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1984 "src/parser.c" /* yacc.c:1254  */
        break;

    case 185: /* rel_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1990 "src/parser.c" /* yacc.c:1254  */
        break;

    case 186: /* shift_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1996 "src/parser.c" /* yacc.c:1254  */
        break;

    case 187: /* add_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2002 "src/parser.c" /* yacc.c:1254  */
        break;

    case 188: /* mul_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2008 "src/parser.c" /* yacc.c:1254  */
        break;

    case 189: /* cast_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2014 "src/parser.c" /* yacc.c:1254  */
        break;

    case 191: /* unary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2020 "src/parser.c" /* yacc.c:1254  */
        break;

    case 192: /* dur_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2026 "src/parser.c" /* yacc.c:1254  */
        break;

    case 194: /* call_paren  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2032 "src/parser.c" /* yacc.c:1254  */
        break;

    case 196: /* dot_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2038 "src/parser.c" /* yacc.c:1254  */
        break;

    case 197: /* post_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2044 "src/parser.c" /* yacc.c:1254  */
        break;

    case 199: /* primary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2050 "src/parser.c" /* yacc.c:1254  */
        break;


      default:
        break;
    }
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

    /* Number of syntax errors so far.  */
    int yynerrs;

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
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
                  (unsigned long) yystacksize));

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
      yychar = yylex (&yylval, scan);
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
#line 107 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyvsp[0].ast); }
#line 2317 "src/parser.c" /* yacc.c:1645  */
    break;

  case 3:
#line 108 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = NULL; gw_err("file is empty.\n");}
#line 2323 "src/parser.c" /* yacc.c:1645  */
    break;

  case 4:
#line 111 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[0].section), NULL); }
#line 2329 "src/parser.c" /* yacc.c:1645  */
    break;

  case 5:
#line 112 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2335 "src/parser.c" /* yacc.c:1645  */
    break;

  case 6:
#line 116 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2341 "src/parser.c" /* yacc.c:1645  */
    break;

  case 7:
#line 117 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2347 "src/parser.c" /* yacc.c:1645  */
    break;

  case 8:
#line 118 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2353 "src/parser.c" /* yacc.c:1645  */
    break;

  case 9:
#line 123 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].id_list), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-6].id_list), -1);
  }
#line 2362 "src/parser.c" /* yacc.c:1645  */
    break;

  case 10:
#line 128 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2368 "src/parser.c" /* yacc.c:1645  */
    break;

  case 11:
#line 128 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = NULL; }
#line 2374 "src/parser.c" /* yacc.c:1645  */
    break;

  case 13:
#line 130 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = NULL; }
#line 2380 "src/parser.c" /* yacc.c:1645  */
    break;

  case 14:
#line 133 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2386 "src/parser.c" /* yacc.c:1645  */
    break;

  case 15:
#line 134 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2392 "src/parser.c" /* yacc.c:1645  */
    break;

  case 16:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2398 "src/parser.c" /* yacc.c:1645  */
    break;

  case 17:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2404 "src/parser.c" /* yacc.c:1645  */
    break;

  case 18:
#line 138 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2410 "src/parser.c" /* yacc.c:1645  */
    break;

  case 19:
#line 138 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2416 "src/parser.c" /* yacc.c:1645  */
    break;

  case 20:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2422 "src/parser.c" /* yacc.c:1645  */
    break;

  case 21:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2428 "src/parser.c" /* yacc.c:1645  */
    break;

  case 22:
#line 141 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2434 "src/parser.c" /* yacc.c:1645  */
    break;

  case 23:
#line 141 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2440 "src/parser.c" /* yacc.c:1645  */
    break;

  case 24:
#line 143 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2446 "src/parser.c" /* yacc.c:1645  */
    break;

  case 25:
#line 144 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2452 "src/parser.c" /* yacc.c:1645  */
    break;

  case 27:
#line 148 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2458 "src/parser.c" /* yacc.c:1645  */
    break;

  case 29:
#line 152 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2464 "src/parser.c" /* yacc.c:1645  */
    break;

  case 30:
#line 153 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR;}
#line 2470 "src/parser.c" /* yacc.c:1645  */
    break;

  case 31:
#line 155 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2476 "src/parser.c" /* yacc.c:1645  */
    break;

  case 32:
#line 156 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2482 "src/parser.c" /* yacc.c:1645  */
    break;

  case 33:
#line 156 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2488 "src/parser.c" /* yacc.c:1645  */
    break;

  case 34:
#line 159 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2494 "src/parser.c" /* yacc.c:1645  */
    break;

  case 35:
#line 160 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2500 "src/parser.c" /* yacc.c:1645  */
    break;

  case 49:
#line 182 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2506 "src/parser.c" /* yacc.c:1645  */
    break;

  case 50:
#line 183 "ly/gwion.y" /* yacc.c:1645  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2516 "src/parser.c" /* yacc.c:1645  */
    break;

  case 52:
#line 190 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = NULL; }
#line 2522 "src/parser.c" /* yacc.c:1645  */
    break;

  case 53:
#line 193 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2529 "src/parser.c" /* yacc.c:1645  */
    break;

  case 54:
#line 196 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2535 "src/parser.c" /* yacc.c:1645  */
    break;

  case 55:
#line 198 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2541 "src/parser.c" /* yacc.c:1645  */
    break;

  case 56:
#line 201 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2547 "src/parser.c" /* yacc.c:1645  */
    break;

  case 57:
#line 202 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2553 "src/parser.c" /* yacc.c:1645  */
    break;

  case 58:
#line 203 "ly/gwion.y" /* yacc.c:1645  */
    { gw_err("unhandled expression type in case statement.\n"); (yyval.stmt)=NULL;YYERROR ; }
#line 2559 "src/parser.c" /* yacc.c:1645  */
    break;

  case 59:
#line 206 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2565 "src/parser.c" /* yacc.c:1645  */
    break;

  case 60:
#line 210 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2571 "src/parser.c" /* yacc.c:1645  */
    break;

  case 61:
#line 212 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2577 "src/parser.c" /* yacc.c:1645  */
    break;

  case 62:
#line 214 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2583 "src/parser.c" /* yacc.c:1645  */
    break;

  case 63:
#line 216 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2589 "src/parser.c" /* yacc.c:1645  */
    break;

  case 64:
#line 218 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2595 "src/parser.c" /* yacc.c:1645  */
    break;

  case 65:
#line 220 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2601 "src/parser.c" /* yacc.c:1645  */
    break;

  case 66:
#line 222 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2607 "src/parser.c" /* yacc.c:1645  */
    break;

  case 67:
#line 224 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2613 "src/parser.c" /* yacc.c:1645  */
    break;

  case 68:
#line 229 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2619 "src/parser.c" /* yacc.c:1645  */
    break;

  case 69:
#line 231 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2625 "src/parser.c" /* yacc.c:1645  */
    break;

  case 70:
#line 235 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2631 "src/parser.c" /* yacc.c:1645  */
    break;

  case 71:
#line 236 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2637 "src/parser.c" /* yacc.c:1645  */
    break;

  case 72:
#line 237 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2643 "src/parser.c" /* yacc.c:1645  */
    break;

  case 73:
#line 238 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2649 "src/parser.c" /* yacc.c:1645  */
    break;

  case 74:
#line 242 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2655 "src/parser.c" /* yacc.c:1645  */
    break;

  case 75:
#line 243 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2661 "src/parser.c" /* yacc.c:1645  */
    break;

  case 77:
#line 246 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2667 "src/parser.c" /* yacc.c:1645  */
    break;

  case 79:
#line 248 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2673 "src/parser.c" /* yacc.c:1645  */
    break;

  case 80:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2679 "src/parser.c" /* yacc.c:1645  */
    break;

  case 81:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = NULL; }
#line 2685 "src/parser.c" /* yacc.c:1645  */
    break;

  case 82:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_chuck; }
#line 2691 "src/parser.c" /* yacc.c:1645  */
    break;

  case 83:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_unchuck; }
#line 2697 "src/parser.c" /* yacc.c:1645  */
    break;

  case 84:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2703 "src/parser.c" /* yacc.c:1645  */
    break;

  case 85:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ref; }
#line 2709 "src/parser.c" /* yacc.c:1645  */
    break;

  case 86:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_radd; }
#line 2715 "src/parser.c" /* yacc.c:1645  */
    break;

  case 87:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsub; }
#line 2721 "src/parser.c" /* yacc.c:1645  */
    break;

  case 88:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmul; }
#line 2727 "src/parser.c" /* yacc.c:1645  */
    break;

  case 89:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rdiv; }
#line 2733 "src/parser.c" /* yacc.c:1645  */
    break;

  case 90:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmod; }
#line 2739 "src/parser.c" /* yacc.c:1645  */
    break;

  case 91:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_trig; }
#line 2745 "src/parser.c" /* yacc.c:1645  */
    break;

  case 92:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_untrig; }
#line 2751 "src/parser.c" /* yacc.c:1645  */
    break;

  case 93:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsl; }
#line 2757 "src/parser.c" /* yacc.c:1645  */
    break;

  case 94:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsr; }
#line 2763 "src/parser.c" /* yacc.c:1645  */
    break;

  case 95:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsand; }
#line 2769 "src/parser.c" /* yacc.c:1645  */
    break;

  case 96:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsor; }
#line 2775 "src/parser.c" /* yacc.c:1645  */
    break;

  case 97:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsxor; }
#line 2781 "src/parser.c" /* yacc.c:1645  */
    break;

  case 98:
#line 262 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2787 "src/parser.c" /* yacc.c:1645  */
    break;

  case 99:
#line 263 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); free_exp((yyvsp[-2].exp)); free_array_sub((yyvsp[0].array_sub)); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2793 "src/parser.c" /* yacc.c:1645  */
    break;

  case 100:
#line 264 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [...][]..."); free_exp((yyvsp[-3].exp)); YYERROR; }
#line 2799 "src/parser.c" /* yacc.c:1645  */
    break;

  case 101:
#line 268 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2805 "src/parser.c" /* yacc.c:1645  */
    break;

  case 102:
#line 269 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2811 "src/parser.c" /* yacc.c:1645  */
    break;

  case 103:
#line 270 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [][...]"); free_array_sub((yyvsp[-1].array_sub)); free_array_sub((yyvsp[0].array_sub)); YYERROR; }
#line 2817 "src/parser.c" /* yacc.c:1645  */
    break;

  case 108:
#line 275 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2823 "src/parser.c" /* yacc.c:1645  */
    break;

  case 109:
#line 276 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), new_var_decl_list((yyvsp[0].var_decl), NULL)); }
#line 2829 "src/parser.c" /* yacc.c:1645  */
    break;

  case 111:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2835 "src/parser.c" /* yacc.c:1645  */
    break;

  case 112:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2841 "src/parser.c" /* yacc.c:1645  */
    break;

  case 113:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2847 "src/parser.c" /* yacc.c:1645  */
    break;

  case 114:
#line 280 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2853 "src/parser.c" /* yacc.c:1645  */
    break;

  case 115:
#line 280 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2859 "src/parser.c" /* yacc.c:1645  */
    break;

  case 116:
#line 282 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2865 "src/parser.c" /* yacc.c:1645  */
    break;

  case 117:
#line 282 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = NULL; }
#line 2871 "src/parser.c" /* yacc.c:1645  */
    break;

  case 118:
#line 284 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_static; }
#line 2877 "src/parser.c" /* yacc.c:1645  */
    break;

  case 119:
#line 285 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_global; }
#line 2883 "src/parser.c" /* yacc.c:1645  */
    break;

  case 120:
#line 288 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_private; }
#line 2889 "src/parser.c" /* yacc.c:1645  */
    break;

  case 121:
#line 289 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_protect; }
#line 2895 "src/parser.c" /* yacc.c:1645  */
    break;

  case 122:
#line 292 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2901 "src/parser.c" /* yacc.c:1645  */
    break;

  case 123:
#line 293 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2907 "src/parser.c" /* yacc.c:1645  */
    break;

  case 124:
#line 294 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2913 "src/parser.c" /* yacc.c:1645  */
    break;

  case 125:
#line 297 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2919 "src/parser.c" /* yacc.c:1645  */
    break;

  case 126:
#line 297 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2925 "src/parser.c" /* yacc.c:1645  */
    break;

  case 127:
#line 298 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2931 "src/parser.c" /* yacc.c:1645  */
    break;

  case 128:
#line 299 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2937 "src/parser.c" /* yacc.c:1645  */
    break;

  case 129:
#line 300 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2943 "src/parser.c" /* yacc.c:1645  */
    break;

  case 130:
#line 304 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-6].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-6].id_list), -1);
    }
  }
#line 2954 "src/parser.c" /* yacc.c:1645  */
    break;

  case 137:
#line 315 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2960 "src/parser.c" /* yacc.c:1645  */
    break;

  case 138:
#line 317 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2966 "src/parser.c" /* yacc.c:1645  */
    break;

  case 139:
#line 319 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2972 "src/parser.c" /* yacc.c:1645  */
    break;

  case 140:
#line 321 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2979 "src/parser.c" /* yacc.c:1645  */
    break;

  case 141:
#line 325 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = 0; }
#line 2985 "src/parser.c" /* yacc.c:1645  */
    break;

  case 142:
#line 325 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_flag_ref; }
#line 2991 "src/parser.c" /* yacc.c:1645  */
    break;

  case 143:
#line 328 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2997 "src/parser.c" /* yacc.c:1645  */
    break;

  case 144:
#line 329 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 3004 "src/parser.c" /* yacc.c:1645  */
    break;

  case 145:
#line 331 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl2((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 3010 "src/parser.c" /* yacc.c:1645  */
    break;

  case 146:
#line 334 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3016 "src/parser.c" /* yacc.c:1645  */
    break;

  case 147:
#line 335 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3022 "src/parser.c" /* yacc.c:1645  */
    break;

  case 148:
#line 337 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 3028 "src/parser.c" /* yacc.c:1645  */
    break;

  case 149:
#line 338 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3034 "src/parser.c" /* yacc.c:1645  */
    break;

  case 150:
#line 341 "ly/gwion.y" /* yacc.c:1645  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 3045 "src/parser.c" /* yacc.c:1645  */
    break;

  case 151:
#line 347 "ly/gwion.y" /* yacc.c:1645  */
    {
    err_msg(get_pos(arg), "Unions should only contain declarations.");
    (yyval.stmt)=NULL;
    YYERROR;
    }
#line 3055 "src/parser.c" /* yacc.c:1645  */
    break;

  case 152:
#line 355 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 3061 "src/parser.c" /* yacc.c:1645  */
    break;

  case 153:
#line 356 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3067 "src/parser.c" /* yacc.c:1645  */
    break;

  case 154:
#line 359 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 3073 "src/parser.c" /* yacc.c:1645  */
    break;

  case 155:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3079 "src/parser.c" /* yacc.c:1645  */
    break;

  case 156:
#line 362 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 3085 "src/parser.c" /* yacc.c:1645  */
    break;

  case 157:
#line 363 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3091 "src/parser.c" /* yacc.c:1645  */
    break;

  case 158:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3097 "src/parser.c" /* yacc.c:1645  */
    break;

  case 159:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 3103 "src/parser.c" /* yacc.c:1645  */
    break;

  case 160:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ne; }
#line 3109 "src/parser.c" /* yacc.c:1645  */
    break;

  case 161:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_lt; }
#line 3115 "src/parser.c" /* yacc.c:1645  */
    break;

  case 162:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_gt; }
#line 3121 "src/parser.c" /* yacc.c:1645  */
    break;

  case 163:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_le; }
#line 3127 "src/parser.c" /* yacc.c:1645  */
    break;

  case 164:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ge; }
#line 3133 "src/parser.c" /* yacc.c:1645  */
    break;

  case 165:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shl; }
#line 3139 "src/parser.c" /* yacc.c:1645  */
    break;

  case 166:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shr; }
#line 3145 "src/parser.c" /* yacc.c:1645  */
    break;

  case 167:
#line 369 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_add; }
#line 3151 "src/parser.c" /* yacc.c:1645  */
    break;

  case 168:
#line 369 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3157 "src/parser.c" /* yacc.c:1645  */
    break;

  case 169:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3163 "src/parser.c" /* yacc.c:1645  */
    break;

  case 170:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_div; }
#line 3169 "src/parser.c" /* yacc.c:1645  */
    break;

  case 171:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mod; }
#line 3175 "src/parser.c" /* yacc.c:1645  */
    break;

  case 173:
#line 372 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3181 "src/parser.c" /* yacc.c:1645  */
    break;

  case 175:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3187 "src/parser.c" /* yacc.c:1645  */
    break;

  case 177:
#line 375 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3193 "src/parser.c" /* yacc.c:1645  */
    break;

  case 179:
#line 376 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3199 "src/parser.c" /* yacc.c:1645  */
    break;

  case 181:
#line 377 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3205 "src/parser.c" /* yacc.c:1645  */
    break;

  case 183:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3211 "src/parser.c" /* yacc.c:1645  */
    break;

  case 185:
#line 379 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3217 "src/parser.c" /* yacc.c:1645  */
    break;

  case 187:
#line 380 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3223 "src/parser.c" /* yacc.c:1645  */
    break;

  case 189:
#line 381 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3229 "src/parser.c" /* yacc.c:1645  */
    break;

  case 191:
#line 382 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3235 "src/parser.c" /* yacc.c:1645  */
    break;

  case 193:
#line 383 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3241 "src/parser.c" /* yacc.c:1645  */
    break;

  case 195:
#line 386 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3247 "src/parser.c" /* yacc.c:1645  */
    break;

  case 196:
#line 388 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3253 "src/parser.c" /* yacc.c:1645  */
    break;

  case 197:
#line 388 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3259 "src/parser.c" /* yacc.c:1645  */
    break;

  case 199:
#line 390 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_not; }
#line 3265 "src/parser.c" /* yacc.c:1645  */
    break;

  case 200:
#line 390 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_spork; }
#line 3271 "src/parser.c" /* yacc.c:1645  */
    break;

  case 201:
#line 390 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_cmp; }
#line 3277 "src/parser.c" /* yacc.c:1645  */
    break;

  case 203:
#line 393 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3283 "src/parser.c" /* yacc.c:1645  */
    break;

  case 204:
#line 394 "ly/gwion.y" /* yacc.c:1645  */
    {(yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl)); }
#line 3289 "src/parser.c" /* yacc.c:1645  */
    break;

  case 205:
#line 395 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3295 "src/parser.c" /* yacc.c:1645  */
    break;

  case 207:
#line 398 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dur((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3301 "src/parser.c" /* yacc.c:1645  */
    break;

  case 208:
#line 401 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3307 "src/parser.c" /* yacc.c:1645  */
    break;

  case 209:
#line 402 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3313 "src/parser.c" /* yacc.c:1645  */
    break;

  case 210:
#line 405 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3319 "src/parser.c" /* yacc.c:1645  */
    break;

  case 211:
#line 405 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = NULL; }
#line 3325 "src/parser.c" /* yacc.c:1645  */
    break;

  case 212:
#line 407 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_inc; }
#line 3331 "src/parser.c" /* yacc.c:1645  */
    break;

  case 213:
#line 407 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_dec; }
#line 3337 "src/parser.c" /* yacc.c:1645  */
    break;

  case 214:
#line 409 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3343 "src/parser.c" /* yacc.c:1645  */
    break;

  case 216:
#line 411 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3349 "src/parser.c" /* yacc.c:1645  */
    break;

  case 217:
#line 413 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3356 "src/parser.c" /* yacc.c:1645  */
    break;

  case 218:
#line 416 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3362 "src/parser.c" /* yacc.c:1645  */
    break;

  case 219:
#line 416 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3368 "src/parser.c" /* yacc.c:1645  */
    break;

  case 220:
#line 419 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_complex; }
#line 3374 "src/parser.c" /* yacc.c:1645  */
    break;

  case 221:
#line 420 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3380 "src/parser.c" /* yacc.c:1645  */
    break;

  case 222:
#line 421 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3386 "src/parser.c" /* yacc.c:1645  */
    break;

  case 223:
#line 424 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3392 "src/parser.c" /* yacc.c:1645  */
    break;

  case 224:
#line 425 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3398 "src/parser.c" /* yacc.c:1645  */
    break;

  case 225:
#line 426 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3404 "src/parser.c" /* yacc.c:1645  */
    break;

  case 226:
#line 427 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3410 "src/parser.c" /* yacc.c:1645  */
    break;

  case 227:
#line 428 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3416 "src/parser.c" /* yacc.c:1645  */
    break;

  case 228:
#line 429 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3422 "src/parser.c" /* yacc.c:1645  */
    break;

  case 229:
#line 430 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3428 "src/parser.c" /* yacc.c:1645  */
    break;

  case 230:
#line 431 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3434 "src/parser.c" /* yacc.c:1645  */
    break;

  case 231:
#line 432 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3440 "src/parser.c" /* yacc.c:1645  */
    break;

  case 232:
#line 433 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3446 "src/parser.c" /* yacc.c:1645  */
    break;


#line 3450 "src/parser.c" /* yacc.c:1645  */
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
      yyerror (arg, YY_("syntax error"));
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
        yyerror (arg, yymsgp);
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
                      yytoken, &yylval, arg);
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
                  yystos[yystate], yyvsp, arg);
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
  yyerror (arg, YY_("memory exhausted"));
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
                  yytoken, &yylval, arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, arg);
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
#line 435 "ly/gwion.y" /* yacc.c:1903  */

