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
    BACKTICK = 351,
    NUM = 352,
    FLOAT = 353,
    ID = 354,
    STRING_LIT = 355,
    CHAR_LIT = 356,
    PP_COMMENT = 357,
    PP_INCLUDE = 358,
    PP_DEFINE = 359,
    PP_UNDEF = 360,
    PP_IFDEF = 361,
    PP_IFNDEF = 362,
    PP_ELSE = 363,
    PP_ENDIF = 364,
    PP_NL = 365
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
#define BACKTICK 351
#define NUM 352
#define FLOAT 353
#define ID 354
#define STRING_LIT 355
#define CHAR_LIT 356
#define PP_COMMENT 357
#define PP_INCLUDE 358
#define PP_DEFINE 359
#define PP_UNDEF 360
#define PP_IFDEF 361
#define PP_IFNDEF 362
#define PP_ELSE 363
#define PP_ENDIF 364
#define PP_NL 365

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
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 388 "src/parser.c" /* yacc.c:353  */
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
#define YYFINAL  186
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1893

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  233
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  401

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

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
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   106,   109,   110,   114,   115,   116,   120,
     126,   126,   128,   128,   131,   132,   135,   135,   136,   136,
     137,   137,   139,   139,   141,   145,   147,   147,   149,   153,
     157,   158,   158,   161,   162,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   184,   185,
     192,   192,   195,   198,   200,   203,   204,   205,   208,   211,
     213,   215,   217,   219,   221,   223,   225,   230,   232,   237,
     238,   239,   240,   244,   245,   248,   248,   250,   250,   252,
     252,   254,   254,   254,   255,   255,   256,   256,   257,   257,
     258,   258,   259,   259,   259,   260,   260,   264,   265,   266,
     270,   271,   272,   275,   275,   276,   276,   277,   278,   279,
     279,   281,   281,   282,   282,   284,   284,   286,   287,   290,
     291,   294,   295,   296,   299,   299,   302,   310,   310,   310,
     310,   310,   312,   313,   315,   317,   319,   324,   324,   327,
     328,   330,   333,   334,   336,   337,   340,   346,   353,   354,
     357,   358,   360,   361,   362,   364,   364,   365,   365,   365,
     365,   366,   366,   367,   367,   368,   368,   368,   369,   369,
     372,   372,   373,   373,   374,   374,   375,   375,   376,   376,
     377,   377,   378,   378,   379,   379,   380,   380,   381,   381,
     383,   383,   386,   386,   387,   388,   388,   388,   391,   391,
     392,   393,   395,   395,   400,   401,   402,   402,   405,   406,
     409,   409,   411,   411,   413,   414,   414,   416,   419,   420,
     423,   424,   425,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438
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
  "PASTE", "ELLIPSE", "RARROW", "BACKTICK", "NUM", "FLOAT", "ID",
  "STRING_LIT", "CHAR_LIT", "PP_COMMENT", "PP_INCLUDE", "PP_DEFINE",
  "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF", "PP_ELSE", "PP_ENDIF", "PP_NL",
  "$accept", "prg", "ast", "section", "class_def", "class_ext",
  "class_body", "class_body2", "id_list", "id_dot", "dot_decl",
  "stmt_list", "func_type", "stmt_type", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "code_stmt",
  "stmt", "id", "opt_id", "enum_stmt", "label_stmt", "goto_stmt",
  "case_stmt", "switch_stmt", "loop_stmt", "selection_stmt", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "array", "decl_exp2", "decl_exp", "union_exp",
  "decl_exp3", "func_args", "arg_type", "decl_template", "storage_flag",
  "access_flag", "flag", "opt_flag", "func_def_base", "op_op", "func_def",
  "atsym", "type_decl0", "type_decl", "decl_list", "union_stmt",
  "var_decl_list", "var_decl", "arg_decl", "eq_op", "rel_op", "shift_op",
  "add_op", "mul_op", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "cast_exp", "unary_op", "unary_exp", "dur_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "vec_type", "primary_exp", YY_NULLPTR
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365
};
# endif

#define YYPACT_NINF -334

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-334)))

#define YYTABLE_NINF -81

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     464,  -334,  -334,  1651,  1309,  1370,   898,  -334,  -334,  -334,
    -334,    75,    85,   997,    92,    94,    96,    10,  1651,    22,
     103,  1195,   122,   128,  -334,  -334,    42,   119,  -334,  -334,
    -334,  -334,  -334,   119,  1810,   103,    55,    42,   103,  -334,
     141,    52,   -35,  -334,  -334,    61,  -334,  -334,   156,  -334,
     601,  -334,   142,  -334,  -334,  -334,  -334,   997,    11,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,   166,  1137,
    -334,   168,  -334,  -334,  -334,  -334,    -1,    57,  -334,    42,
    -334,  -334,  -334,    10,  -334,  -334,    23,   121,   111,   112,
     115,    18,    98,    79,   110,   159,   158,  1704,  -334,   129,
     119,  -334,  -334,    32,  1651,  -334,    -6,   183,  1757,  -334,
     182,  -334,   181,  -334,   180,  1651,  1651,    26,  1651,  1651,
    1096,   194,   119,   165,  -334,   167,    19,   169,  -334,   184,
    -334,   198,  -334,  -334,  -334,  -334,   108,   191,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,    42,  -334,
    -334,  -334,  -334,    42,    42,    10,  -334,   200,   126,    10,
      10,  -334,  -334,    10,   124,    10,  -334,  -334,  -334,  -334,
    -334,  -334,    10,  -334,  1651,  1651,  1431,  -334,   103,   103,
    -334,  -334,   191,  -334,   217,  1651,  1757,  1757,  1757,  1757,
    1757,  -334,  -334,  1757,  1757,  1757,  1757,  1757,    42,    42,
    -334,    47,  -334,  1651,    10,    42,   212,  -334,  -334,   214,
    -334,  -334,   215,  -334,   218,   219,  1651,  1651,   220,   221,
     142,  1256,  -334,  -334,  -334,  -334,  -334,    10,  -334,  -334,
     216,   223,    10,   149,   231,    42,    10,  -334,   222,   226,
     185,  -334,  -334,  -334,  -334,  -334,  -334,  -334,    42,    10,
    -334,    10,   206,   121,   111,   112,   115,    18,    98,    79,
     110,   159,   158,  -334,   229,    32,  -334,   155,  1484,  -334,
    -334,  1545,  -334,   997,   997,   239,   240,   997,   997,    10,
    1598,   230,    42,    42,    81,  -334,    10,  -334,   142,    39,
     142,    10,    10,   187,  -334,  1757,    42,  -334,  -334,   236,
    -334,   213,  -334,  -334,  -334,  -334,  -334,   224,   997,   238,
      10,   246,    10,   241,  -334,    42,     6,  -334,  -334,   242,
     256,    10,   244,  -334,  -334,   250,    42,   247,  -334,   251,
    -334,   997,  1651,  -334,   997,   261,    42,   191,  -334,   119,
     260,  -334,  -334,   254,  -334,    10,    42,  -334,    10,     6,
    -334,   700,   119,  -334,  1368,  -334,  -334,   255,  -334,   168,
    -334,    42,  -334,   269,  -334,   270,   119,   799,   258,  -334,
    -334,   997,   119,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     116,    74,   193,     0,     0,     0,     0,   221,   220,   197,
     195,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   212,   213,     0,   196,   117,   118,
     119,   120,   192,     0,     0,   124,     0,     0,   124,   222,
       0,     0,     0,   224,   225,    48,   226,   227,     0,     2,
     116,     8,   137,     6,    45,    46,    38,    22,   223,    43,
      39,    40,    42,    41,    36,    37,    44,    35,     0,    75,
     103,   104,   228,    77,   109,   106,     0,   122,   121,     0,
     132,     7,   142,     0,    47,   105,   168,   170,   172,   174,
     176,   178,   180,   182,   184,   186,   188,     0,   190,   198,
       0,   194,   219,   202,     0,   215,   223,     0,     0,   233,
       0,   100,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   219,    80,   215,   125,     0,
      69,     0,    71,    72,    28,   200,    20,    26,   201,   136,
      81,   166,   165,   167,    85,    86,    87,    88,    89,    84,
      82,    90,    91,    83,   160,   158,   159,   157,   164,   163,
     161,   162,    92,    93,    94,    95,    96,   127,     0,   129,
     128,   131,   130,     0,     0,     0,    29,   208,     0,    51,
       0,   143,   207,   204,     0,     0,     1,     5,   138,   139,
      23,    53,     0,    73,     0,     0,     0,   102,   124,   124,
     123,   110,   150,   107,   148,     0,     0,     0,     0,     0,
       0,   155,   156,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   232,     0,     0,     0,     0,   216,   218,     0,
     230,   231,    97,    34,     0,     0,     0,     0,     0,     0,
     137,     0,    54,    58,    57,    56,    55,     0,    70,    27,
       0,     0,     0,     0,    16,     0,     0,    50,     0,     0,
      18,   205,   206,    49,    21,    76,    78,   101,     0,     0,
     151,     0,     0,   171,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,     0,   203,   214,     0,     0,   217,
     229,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,   209,   137,     0,
     137,     0,     0,    11,   149,     0,     0,    79,   211,     0,
      99,    67,    59,    60,    65,    64,    66,     0,     0,     0,
      51,     0,     0,     0,    25,   112,     0,    17,   140,     0,
       0,     0,     0,   141,    19,     0,     0,     0,   169,     0,
     210,     0,     0,    61,     0,     0,     0,   152,    30,     0,
      31,   111,   114,     0,    24,    51,   144,   108,    51,     0,
      10,   116,     0,    68,     0,    62,    52,     0,   154,   153,
     134,     0,   113,     0,   145,     0,     0,   116,     0,    12,
     135,     0,     0,    32,   147,   146,   126,    15,     9,    63,
     133
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -334,  -334,   227,  -333,  -334,  -334,  -334,  -109,  -194,  -185,
    -334,    28,  -334,  -334,   -21,   -67,  -152,  -201,  -101,   -23,
     -11,     0,  -306,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -106,   334,   -71,  -334,   257,   -56,   -73,  -108,    90,
     209,  -334,  -334,   -55,   -80,  -334,  -334,   228,    -8,   -27,
    -334,  -334,  -334,  -220,   259,   102,   -74,  -334,    24,  -334,
     -45,  -334,   273,   274,   276,   279,     3,  -334,   113,    97,
     106,   117,   114,   109,   120,   116,   131,   125,     1,   -72,
    -334,   146,  -334,  -179,  -334,   -31,   314,   -10,  -334,   325
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    49,    50,    51,   347,   388,   389,   253,   259,
      52,    53,    54,    55,   176,   135,   177,   360,   361,    56,
      57,   106,   258,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,   226,   195,    70,    71,    72,    73,
      74,   340,    75,   336,   364,    76,    77,    78,    79,   129,
      80,   168,    81,   189,    82,    83,   342,    84,   203,   204,
     358,   213,   214,   215,   216,   217,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   108,    98,
      99,   184,   100,   178,   289,   101,   102,   103,   104,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    97,   117,   173,   138,   134,    58,   264,   174,   126,
     139,   179,   128,    58,   241,   197,   250,   121,   362,   124,
     299,   251,   -20,   123,   355,   220,   136,   128,   198,   249,
     128,     3,   223,     4,   114,     5,   220,   136,   387,   -20,
     339,   136,   183,   -80,   191,   223,   287,   227,     7,     8,
      58,    97,   199,   301,   387,   205,     3,    58,     4,   383,
       5,   182,   385,   236,    45,   237,   283,   284,    24,    25,
     227,   308,   228,     7,     8,   313,   307,   222,   224,   136,
     211,    24,    25,   202,   334,   190,   115,   212,   338,   192,
     343,   224,   335,   -20,   270,   228,   116,   124,   206,   243,
     363,   331,   333,   118,   225,   119,   192,   120,   124,    45,
     -20,    39,   337,    30,    31,   349,   312,   225,    42,    43,
      44,    45,    46,    47,    37,   132,   344,    37,   137,    40,
      41,   133,    40,    41,     6,   300,    39,    37,    45,   137,
     175,    45,    40,    42,    43,    44,    45,    46,    47,   160,
     161,    45,   180,   252,   185,   377,   186,    28,    29,    30,
      31,   154,   155,   156,   157,   141,   142,   143,   136,   193,
     188,   268,   269,   136,   136,   254,   292,   158,   159,   257,
     260,   196,   207,   183,   208,   263,   209,   210,   218,   221,
     128,   128,   260,   230,   231,   232,   233,   242,   244,   247,
     245,   248,   246,   192,     5,   255,   124,   124,   124,   124,
     124,   285,   256,   124,   124,   124,   124,   124,   136,   136,
     262,   124,   271,   288,   286,   136,   290,   302,   291,   227,
     293,   294,   297,   298,   303,   305,   306,   309,   310,   315,
     316,   317,   323,   324,   311,   346,   330,   254,   350,   351,
     354,   356,   304,   359,   228,   136,   260,   352,   365,   366,
     368,   335,   371,   372,   376,   381,   382,   392,   136,   254,
     137,   202,   394,   395,   398,   137,   137,   187,   397,   370,
     393,   374,   321,   322,   379,   266,   325,   326,   201,   386,
     369,   167,   384,    58,    58,   314,   367,    58,    58,   327,
     181,   378,   136,   136,   274,   200,   254,   169,   170,   136,
     171,   260,   345,   172,   275,   124,   136,   353,   348,   273,
     137,   137,   278,   197,   277,   134,   276,   137,    58,   261,
     257,   280,   357,   125,   279,   136,   380,   107,   110,   112,
     373,   357,   282,   375,   127,     0,   136,   281,     0,   390,
       0,    58,   122,     0,    58,   131,   136,   137,     0,     0,
       0,     0,     0,   396,     0,   257,   136,     0,   257,   400,
     137,    58,    97,     0,     0,     0,     0,     0,     0,     0,
     399,   136,     0,     0,     0,     0,     0,    58,    97,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,   332,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   137,   234,
     235,     0,   238,   239,     0,     0,     0,     0,   332,     0,
       0,     0,     0,     0,    -3,     0,     0,     1,   341,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
       0,     0,     0,   332,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,   265,     0,
     112,    32,     0,     0,     0,     0,     0,     0,     0,   272,
      33,    34,    35,     0,     0,     0,     0,     0,    36,    37,
       0,     0,    38,    39,    40,    41,     0,   112,     0,     0,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
     295,   296,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -4,     0,     0,     1,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,     6,     0,     0,     0,
       0,     0,   319,     0,     0,   112,     0,     7,     8,     0,
       0,     0,     9,     0,   329,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
       0,     0,     0,     0,     0,    36,    37,     0,     0,    38,
      39,    40,    41,     0,     0,     0,     0,    42,    43,    44,
      45,    46,    47,     1,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,     6,   -13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,     0,
       0,     0,     0,     0,    36,    37,     0,     0,    38,    39,
      40,    41,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,     1,     0,     0,     0,     2,     0,     3,     0,
       4,     0,     5,     0,     6,   -14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       9,     0,     0,    10,    11,     0,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,     0,     0,
       0,     0,     0,    36,    37,     0,     0,    38,    39,    40,
      41,     0,     0,     0,     0,    42,    43,    44,    45,    46,
      47,     1,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,     6,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,    37,     0,     0,    38,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    47,
       1,     0,     0,     0,     2,     0,     3,     0,     4,     0,
       5,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
       0,    10,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,    37,     0,     0,    38,    39,    40,    41,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,     1,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   194,     0,     0,    24,    25,    26,    27,     0,
      28,    29,    30,    31,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    39,    40,    41,   240,     0,
       0,     0,    42,    43,    44,    45,    46,    47,   130,   153,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       0,     0,     0,     0,     0,     0,   162,   163,   164,   165,
     166,     7,     8,     0,     0,     0,     9,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     1,
       0,     0,    32,     2,     0,     3,     0,     4,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     7,     8,    39,    40,    41,     9,     0,     0,
      10,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     2,     0,     3,     0,
       4,   109,     5,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       9,    37,     0,    10,     0,    39,    40,    41,     0,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     0,     0,     0,
       0,     0,   140,     0,     0,     0,    32,     2,     0,     3,
     391,     4,     0,     5,   111,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    37,     0,     7,     8,    39,    40,
      41,     9,     0,     0,    10,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
     153,     0,     0,     0,     0,     0,     0,    32,     2,     0,
       3,     0,     4,     0,     5,   267,     0,   162,   163,   164,
     165,   166,     0,     0,     0,    37,     0,     7,     8,    39,
      40,    41,     9,     0,     0,    10,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     2,     0,     3,     0,     4,   318,     5,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,    37,     0,    10,     0,
      39,    40,    41,     0,     0,     0,     0,    42,    43,    44,
      45,    46,    47,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     2,     0,     3,     0,     4,     0,     5,   320,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     7,     8,    39,    40,    41,     9,     0,     0,    10,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     2,     0,     3,     0,     4,
     328,     5,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      37,     0,    10,     0,    39,    40,    41,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     2,     0,
       3,     0,     4,     0,     5,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,    37,     0,    10,     0,    39,    40,    41,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     2,     0,     3,     0,     4,     0,     5,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,    37,     0,    10,     0,
      39,    40,    41,     0,     0,     0,     0,    42,    43,    44,
      45,    46,    47,    24,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     4,     0,
       5,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     7,     8,     0,     0,     0,     9,     0,
       0,    10,     0,    39,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    47,    24,    25,    26,    27,
       0,     0,     0,     0,   140,     0,   141,   142,   143,     0,
       0,     0,     0,     0,    32,     0,     0,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   153,   154,   155,   156,   157,   158,   159,     0,
     160,   161,     0,     0,     0,     0,     0,     0,     0,   162,
     163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
       0,     0,    13,    34,    27,    26,     6,   192,    35,    19,
      33,    38,    20,    13,   120,    71,   168,    17,    12,    19,
     240,   173,    28,     1,   330,    97,    26,    35,    29,   137,
      38,     9,    13,    11,     6,    13,   108,    37,   371,    28,
       1,    41,    42,    11,    33,    13,   225,   103,    26,    27,
      50,    50,    53,   247,   387,    32,     9,    57,    11,   365,
      13,    96,   368,    37,    99,    39,   218,   219,    49,    50,
     126,   256,   103,    26,    27,   269,   255,   100,    59,    79,
      62,    49,    50,    83,     3,    57,    11,    69,   308,    95,
     310,    59,    11,    99,   202,   126,    11,    97,    75,   122,
      94,   302,   303,    11,    85,    11,    95,    11,   108,    99,
      99,    89,   306,    56,    57,   316,   268,    85,    96,    97,
      98,    99,   100,   101,    85,     3,   311,    85,    26,    90,
      91,     3,    90,    91,    15,   241,    89,    85,    99,    37,
      85,    99,    90,    96,    97,    98,    99,   100,   101,    70,
      71,    99,    11,   174,    93,   356,     0,    54,    55,    56,
      57,    63,    64,    65,    66,     6,     7,     8,   168,     3,
      28,   198,   199,   173,   174,   175,   232,    67,    68,   179,
     180,    13,    61,   183,    73,   185,    74,    72,    30,    60,
     198,   199,   192,    10,    12,    14,    16,     3,    33,    15,
      33,     3,    33,    95,    13,     5,   206,   207,   208,   209,
     210,   221,    86,   213,   214,   215,   216,   217,   218,   219,
      96,   221,     5,    11,   224,   225,    12,    11,    13,   285,
      12,    12,    12,    12,    11,    86,     5,    15,    12,    33,
      11,    86,     3,     3,    59,    58,    16,   247,    12,    36,
      12,     5,   252,    12,   285,   255,   256,    33,    16,     3,
      16,    11,    15,    12,     3,     5,    12,    12,   268,   269,
     168,   271,     3,     3,    16,   173,   174,    50,   387,   346,
     381,   352,   293,   294,   357,   195,   297,   298,    79,   369,
     345,    34,   366,   293,   294,   271,   341,   297,   298,   299,
      41,   357,   302,   303,   207,    77,   306,    34,    34,   309,
      34,   311,   312,    34,   208,   315,   316,   328,   315,   206,
     218,   219,   213,   379,   210,   346,   209,   225,   328,   183,
     330,   215,   332,    19,   214,   335,   359,     3,     4,     5,
     351,   341,   217,   354,    19,    -1,   346,   216,    -1,   372,
      -1,   351,    18,    -1,   354,    21,   356,   255,    -1,    -1,
      -1,    -1,    -1,   386,    -1,   365,   366,    -1,   368,   392,
     268,   371,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     391,   381,    -1,    -1,    -1,    -1,    -1,   387,   387,    -1,
      -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   302,   303,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,   115,
     116,    -1,   118,   119,    -1,    -1,    -1,    -1,   356,    -1,
      -1,    -1,    -1,    -1,     0,    -1,    -1,     3,   366,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,
     196,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,    89,    90,    91,    -1,   223,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
     236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,    -1,    -1,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,   288,    -1,    -1,   291,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,   300,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,
      11,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
       3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,     3,    62,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    67,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    26,    27,    89,    90,    91,    31,    -1,    -1,
      34,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,     7,    -1,     9,    -1,
      11,    12,    13,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    85,    -1,    34,    -1,    89,    90,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    67,     7,    -1,     9,
      12,    11,    -1,    13,    14,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    85,    -1,    26,    27,    89,    90,
      91,    31,    -1,    -1,    34,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    67,     7,    -1,
       9,    -1,    11,    -1,    13,    14,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    85,    -1,    26,    27,    89,
      90,    91,    31,    -1,    -1,    34,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,     7,    -1,     9,    -1,    11,    12,    13,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,     7,    -1,     9,    -1,    11,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    26,    27,    89,    90,    91,    31,    -1,    -1,    34,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,     7,    -1,     9,    -1,    11,
      12,    13,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      85,    -1,    34,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,
      89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    31,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    67,    76,    77,    78,    84,    85,    88,    89,
      90,    91,    96,    97,    98,    99,   100,   101,   112,   113,
     114,   115,   121,   122,   123,   124,   130,   131,   132,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     147,   148,   149,   150,   151,   153,   156,   157,   158,   159,
     161,   163,   165,   166,   168,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     193,   196,   197,   198,   199,   200,   132,   143,   189,    12,
     143,    14,   143,    16,   122,    11,    11,   131,    11,    11,
      11,   132,   143,     1,   132,   197,   198,   200,   159,   160,
       3,   143,     3,     3,   125,   126,   132,   166,   130,   130,
       4,     6,     7,     8,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    62,    63,    64,    65,    66,    67,    68,
      70,    71,    79,    80,    81,    82,    83,   146,   162,   173,
     174,   175,   176,   196,   160,    85,   125,   127,   194,   160,
      11,   165,    96,   132,   192,    93,     0,   113,    28,   164,
     122,    33,    95,     3,     5,   146,    13,   147,    29,    53,
     158,   151,   132,   169,   170,    32,    75,    61,    73,    74,
      72,    62,    69,   172,   173,   174,   175,   176,    30,    77,
     190,    60,   130,    13,    59,    85,   145,   147,   196,   143,
      10,    12,    14,    16,   143,   143,    37,    39,   143,   143,
      92,   142,     3,   130,    33,    33,    33,    15,     3,   149,
     127,   127,   125,   119,   132,     5,    86,   132,   133,   120,
     132,   192,    96,   132,   120,   143,   150,    14,   160,   160,
     149,     5,   143,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   127,   127,   198,   132,   194,    11,   195,
      12,    13,   147,    12,    12,   143,   143,    12,    12,   164,
     142,   119,    11,    11,   132,    86,     5,   194,   120,    15,
      12,    59,   127,   119,   169,    33,    11,    86,    12,   143,
      14,   131,   131,     3,     3,   131,   131,   132,    12,   143,
      16,   128,   166,   128,     3,    11,   154,   119,   164,     1,
     152,   166,   167,   164,   120,   132,    58,   116,   177,   128,
      12,    36,    33,   131,    12,   133,     5,   132,   171,    12,
     128,   129,    12,    94,   155,    16,     3,   171,    16,   154,
     126,    15,    12,   131,   144,   131,     3,   128,   147,   148,
     130,     5,    12,   133,   167,   133,   155,   114,   117,   118,
     130,    12,    12,   129,     3,     3,   130,   118,    16,   131,
     130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   114,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   125,   125,   126,   127,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     133,   133,   134,   135,   136,   137,   137,   137,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   141,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     148,   148,   148,   149,   149,   150,   150,   151,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   159,   160,   160,   161,   162,   162,   162,
     162,   162,   163,   163,   163,   163,   163,   164,   164,   165,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   172,   172,   173,   173,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   189,   189,   189,   189,   190,   190,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   198,   198,   198,   198,   198,
     199,   199,   199,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     8,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     6,     5,     1,     2,     1,     1,
       2,     1,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     0,     7,     2,     3,     3,     3,     3,     3,     5,
       5,     6,     7,     9,     5,     5,     5,     5,     7,     2,
       3,     2,     2,     2,     1,     1,     3,     1,     3,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     5,
       2,     3,     2,     1,     1,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     1,     4,     0,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     8,     1,     1,     1,
       1,     1,     1,     9,     7,     7,     2,     0,     1,     2,
       5,     5,     1,     2,     2,     3,     8,     8,     1,     3,
       1,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     3,     1,     2,     3,     2,     1,     3,
       3,     2,     1,     1,     3,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2,     2
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
#line 105 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyvsp[0].ast); }
#line 2100 "src/parser.c" /* yacc.c:1645  */
    break;

  case 3:
#line 106 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "file is empty.\n"); YYERROR; }
#line 2106 "src/parser.c" /* yacc.c:1645  */
    break;

  case 4:
#line 109 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ast) = new_ast((yyvsp[0].section), NULL); }
#line 2112 "src/parser.c" /* yacc.c:1645  */
    break;

  case 5:
#line 110 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2118 "src/parser.c" /* yacc.c:1645  */
    break;

  case 6:
#line 114 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2124 "src/parser.c" /* yacc.c:1645  */
    break;

  case 7:
#line 115 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2130 "src/parser.c" /* yacc.c:1645  */
    break;

  case 8:
#line 116 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2136 "src/parser.c" /* yacc.c:1645  */
    break;

  case 9:
#line 121 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].id_list), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-7].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-7].id_list), -1);
  }
#line 2145 "src/parser.c" /* yacc.c:1645  */
    break;

  case 10:
#line 126 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2151 "src/parser.c" /* yacc.c:1645  */
    break;

  case 11:
#line 126 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = NULL; }
#line 2157 "src/parser.c" /* yacc.c:1645  */
    break;

  case 13:
#line 128 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = NULL; }
#line 2163 "src/parser.c" /* yacc.c:1645  */
    break;

  case 14:
#line 131 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2169 "src/parser.c" /* yacc.c:1645  */
    break;

  case 15:
#line 132 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2175 "src/parser.c" /* yacc.c:1645  */
    break;

  case 16:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2181 "src/parser.c" /* yacc.c:1645  */
    break;

  case 17:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2187 "src/parser.c" /* yacc.c:1645  */
    break;

  case 18:
#line 136 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2193 "src/parser.c" /* yacc.c:1645  */
    break;

  case 19:
#line 136 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2199 "src/parser.c" /* yacc.c:1645  */
    break;

  case 20:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2205 "src/parser.c" /* yacc.c:1645  */
    break;

  case 21:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2211 "src/parser.c" /* yacc.c:1645  */
    break;

  case 22:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2217 "src/parser.c" /* yacc.c:1645  */
    break;

  case 23:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2223 "src/parser.c" /* yacc.c:1645  */
    break;

  case 24:
#line 141 "ly/gwion.y" /* yacc.c:1645  */
    {
  if((yyvsp[-3].type_decl)->array && !(yyvsp[-3].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
(yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2232 "src/parser.c" /* yacc.c:1645  */
    break;

  case 25:
#line 145 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2238 "src/parser.c" /* yacc.c:1645  */
    break;

  case 27:
#line 147 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2244 "src/parser.c" /* yacc.c:1645  */
    break;

  case 28:
#line 149 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2252 "src/parser.c" /* yacc.c:1645  */
    break;

  case 29:
#line 153 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2260 "src/parser.c" /* yacc.c:1645  */
    break;

  case 30:
#line 157 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2266 "src/parser.c" /* yacc.c:1645  */
    break;

  case 31:
#line 158 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2272 "src/parser.c" /* yacc.c:1645  */
    break;

  case 32:
#line 158 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2278 "src/parser.c" /* yacc.c:1645  */
    break;

  case 33:
#line 161 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2284 "src/parser.c" /* yacc.c:1645  */
    break;

  case 34:
#line 162 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2290 "src/parser.c" /* yacc.c:1645  */
    break;

  case 48:
#line 184 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2296 "src/parser.c" /* yacc.c:1645  */
    break;

  case 49:
#line 185 "ly/gwion.y" /* yacc.c:1645  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2306 "src/parser.c" /* yacc.c:1645  */
    break;

  case 51:
#line 192 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = NULL; }
#line 2312 "src/parser.c" /* yacc.c:1645  */
    break;

  case 52:
#line 195 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2319 "src/parser.c" /* yacc.c:1645  */
    break;

  case 53:
#line 198 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2325 "src/parser.c" /* yacc.c:1645  */
    break;

  case 54:
#line 200 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2331 "src/parser.c" /* yacc.c:1645  */
    break;

  case 55:
#line 203 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2337 "src/parser.c" /* yacc.c:1645  */
    break;

  case 56:
#line 204 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2343 "src/parser.c" /* yacc.c:1645  */
    break;

  case 57:
#line 205 "ly/gwion.y" /* yacc.c:1645  */
    { gw_err("unhandled expression type in case statement.\n"); YYERROR; }
#line 2349 "src/parser.c" /* yacc.c:1645  */
    break;

  case 58:
#line 208 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2355 "src/parser.c" /* yacc.c:1645  */
    break;

  case 59:
#line 212 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2361 "src/parser.c" /* yacc.c:1645  */
    break;

  case 60:
#line 214 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2367 "src/parser.c" /* yacc.c:1645  */
    break;

  case 61:
#line 216 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2373 "src/parser.c" /* yacc.c:1645  */
    break;

  case 62:
#line 218 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2379 "src/parser.c" /* yacc.c:1645  */
    break;

  case 63:
#line 220 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2385 "src/parser.c" /* yacc.c:1645  */
    break;

  case 64:
#line 222 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2391 "src/parser.c" /* yacc.c:1645  */
    break;

  case 65:
#line 224 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2397 "src/parser.c" /* yacc.c:1645  */
    break;

  case 66:
#line 226 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2403 "src/parser.c" /* yacc.c:1645  */
    break;

  case 67:
#line 231 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2409 "src/parser.c" /* yacc.c:1645  */
    break;

  case 68:
#line 233 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2415 "src/parser.c" /* yacc.c:1645  */
    break;

  case 69:
#line 237 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2421 "src/parser.c" /* yacc.c:1645  */
    break;

  case 70:
#line 238 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2427 "src/parser.c" /* yacc.c:1645  */
    break;

  case 71:
#line 239 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2433 "src/parser.c" /* yacc.c:1645  */
    break;

  case 72:
#line 240 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2439 "src/parser.c" /* yacc.c:1645  */
    break;

  case 73:
#line 244 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2445 "src/parser.c" /* yacc.c:1645  */
    break;

  case 74:
#line 245 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2451 "src/parser.c" /* yacc.c:1645  */
    break;

  case 76:
#line 248 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2457 "src/parser.c" /* yacc.c:1645  */
    break;

  case 78:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2463 "src/parser.c" /* yacc.c:1645  */
    break;

  case 79:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2469 "src/parser.c" /* yacc.c:1645  */
    break;

  case 80:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = NULL; }
#line 2475 "src/parser.c" /* yacc.c:1645  */
    break;

  case 81:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_chuck; }
#line 2481 "src/parser.c" /* yacc.c:1645  */
    break;

  case 82:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_unchuck; }
#line 2487 "src/parser.c" /* yacc.c:1645  */
    break;

  case 83:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2493 "src/parser.c" /* yacc.c:1645  */
    break;

  case 84:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ref; }
#line 2499 "src/parser.c" /* yacc.c:1645  */
    break;

  case 85:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_radd; }
#line 2505 "src/parser.c" /* yacc.c:1645  */
    break;

  case 86:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsub; }
#line 2511 "src/parser.c" /* yacc.c:1645  */
    break;

  case 87:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmul; }
#line 2517 "src/parser.c" /* yacc.c:1645  */
    break;

  case 88:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rdiv; }
#line 2523 "src/parser.c" /* yacc.c:1645  */
    break;

  case 89:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmod; }
#line 2529 "src/parser.c" /* yacc.c:1645  */
    break;

  case 90:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_trig; }
#line 2535 "src/parser.c" /* yacc.c:1645  */
    break;

  case 91:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_untrig; }
#line 2541 "src/parser.c" /* yacc.c:1645  */
    break;

  case 92:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsl; }
#line 2547 "src/parser.c" /* yacc.c:1645  */
    break;

  case 93:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsr; }
#line 2553 "src/parser.c" /* yacc.c:1645  */
    break;

  case 94:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsand; }
#line 2559 "src/parser.c" /* yacc.c:1645  */
    break;

  case 95:
#line 260 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsor; }
#line 2565 "src/parser.c" /* yacc.c:1645  */
    break;

  case 96:
#line 260 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsxor; }
#line 2571 "src/parser.c" /* yacc.c:1645  */
    break;

  case 97:
#line 264 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2577 "src/parser.c" /* yacc.c:1645  */
    break;

  case 98:
#line 265 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2583 "src/parser.c" /* yacc.c:1645  */
    break;

  case 99:
#line 266 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [...][]..."); YYERROR; }
#line 2589 "src/parser.c" /* yacc.c:1645  */
    break;

  case 100:
#line 270 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2595 "src/parser.c" /* yacc.c:1645  */
    break;

  case 101:
#line 271 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2601 "src/parser.c" /* yacc.c:1645  */
    break;

  case 102:
#line 272 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [][...]"); YYERROR; }
#line 2607 "src/parser.c" /* yacc.c:1645  */
    break;

  case 107:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2613 "src/parser.c" /* yacc.c:1645  */
    break;

  case 108:
#line 278 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), new_var_decl_list((yyvsp[0].var_decl), NULL)); }
#line 2619 "src/parser.c" /* yacc.c:1645  */
    break;

  case 110:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2625 "src/parser.c" /* yacc.c:1645  */
    break;

  case 111:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2631 "src/parser.c" /* yacc.c:1645  */
    break;

  case 112:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2637 "src/parser.c" /* yacc.c:1645  */
    break;

  case 113:
#line 282 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2643 "src/parser.c" /* yacc.c:1645  */
    break;

  case 114:
#line 282 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2649 "src/parser.c" /* yacc.c:1645  */
    break;

  case 115:
#line 284 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2655 "src/parser.c" /* yacc.c:1645  */
    break;

  case 116:
#line 284 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = NULL; }
#line 2661 "src/parser.c" /* yacc.c:1645  */
    break;

  case 117:
#line 286 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_static; }
#line 2667 "src/parser.c" /* yacc.c:1645  */
    break;

  case 118:
#line 287 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_global; }
#line 2673 "src/parser.c" /* yacc.c:1645  */
    break;

  case 119:
#line 290 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_private; }
#line 2679 "src/parser.c" /* yacc.c:1645  */
    break;

  case 120:
#line 291 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_protect; }
#line 2685 "src/parser.c" /* yacc.c:1645  */
    break;

  case 121:
#line 294 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2691 "src/parser.c" /* yacc.c:1645  */
    break;

  case 122:
#line 295 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2697 "src/parser.c" /* yacc.c:1645  */
    break;

  case 123:
#line 296 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2703 "src/parser.c" /* yacc.c:1645  */
    break;

  case 124:
#line 299 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2709 "src/parser.c" /* yacc.c:1645  */
    break;

  case 125:
#line 299 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2715 "src/parser.c" /* yacc.c:1645  */
    break;

  case 126:
#line 303 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-7].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-7].id_list), -1);
    }
  }
#line 2726 "src/parser.c" /* yacc.c:1645  */
    break;

  case 133:
#line 314 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2732 "src/parser.c" /* yacc.c:1645  */
    break;

  case 134:
#line 316 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2738 "src/parser.c" /* yacc.c:1645  */
    break;

  case 135:
#line 318 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2744 "src/parser.c" /* yacc.c:1645  */
    break;

  case 136:
#line 320 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2751 "src/parser.c" /* yacc.c:1645  */
    break;

  case 137:
#line 324 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = 0; }
#line 2757 "src/parser.c" /* yacc.c:1645  */
    break;

  case 138:
#line 324 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_flag_ref; }
#line 2763 "src/parser.c" /* yacc.c:1645  */
    break;

  case 139:
#line 327 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2769 "src/parser.c" /* yacc.c:1645  */
    break;

  case 140:
#line 328 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2776 "src/parser.c" /* yacc.c:1645  */
    break;

  case 141:
#line 330 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl2((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2782 "src/parser.c" /* yacc.c:1645  */
    break;

  case 142:
#line 333 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2788 "src/parser.c" /* yacc.c:1645  */
    break;

  case 143:
#line 334 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2794 "src/parser.c" /* yacc.c:1645  */
    break;

  case 144:
#line 336 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 2800 "src/parser.c" /* yacc.c:1645  */
    break;

  case 145:
#line 337 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2806 "src/parser.c" /* yacc.c:1645  */
    break;

  case 146:
#line 340 "ly/gwion.y" /* yacc.c:1645  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2817 "src/parser.c" /* yacc.c:1645  */
    break;

  case 147:
#line 346 "ly/gwion.y" /* yacc.c:1645  */
    {
    gwion_error(arg, "Unions should only contain declarations.");
    YYERROR;
    }
#line 2826 "src/parser.c" /* yacc.c:1645  */
    break;

  case 148:
#line 353 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 2832 "src/parser.c" /* yacc.c:1645  */
    break;

  case 149:
#line 354 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2838 "src/parser.c" /* yacc.c:1645  */
    break;

  case 150:
#line 357 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2844 "src/parser.c" /* yacc.c:1645  */
    break;

  case 151:
#line 358 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2850 "src/parser.c" /* yacc.c:1645  */
    break;

  case 152:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2856 "src/parser.c" /* yacc.c:1645  */
    break;

  case 153:
#line 361 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2862 "src/parser.c" /* yacc.c:1645  */
    break;

  case 154:
#line 362 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2868 "src/parser.c" /* yacc.c:1645  */
    break;

  case 155:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2874 "src/parser.c" /* yacc.c:1645  */
    break;

  case 156:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ne; }
#line 2880 "src/parser.c" /* yacc.c:1645  */
    break;

  case 157:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_lt; }
#line 2886 "src/parser.c" /* yacc.c:1645  */
    break;

  case 158:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_gt; }
#line 2892 "src/parser.c" /* yacc.c:1645  */
    break;

  case 159:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_le; }
#line 2898 "src/parser.c" /* yacc.c:1645  */
    break;

  case 160:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ge; }
#line 2904 "src/parser.c" /* yacc.c:1645  */
    break;

  case 161:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shl; }
#line 2910 "src/parser.c" /* yacc.c:1645  */
    break;

  case 162:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shr; }
#line 2916 "src/parser.c" /* yacc.c:1645  */
    break;

  case 163:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_add; }
#line 2922 "src/parser.c" /* yacc.c:1645  */
    break;

  case 164:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 2928 "src/parser.c" /* yacc.c:1645  */
    break;

  case 165:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 2934 "src/parser.c" /* yacc.c:1645  */
    break;

  case 166:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_div; }
#line 2940 "src/parser.c" /* yacc.c:1645  */
    break;

  case 167:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mod; }
#line 2946 "src/parser.c" /* yacc.c:1645  */
    break;

  case 169:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2952 "src/parser.c" /* yacc.c:1645  */
    break;

  case 171:
#line 372 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 2958 "src/parser.c" /* yacc.c:1645  */
    break;

  case 173:
#line 373 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 2964 "src/parser.c" /* yacc.c:1645  */
    break;

  case 175:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 2970 "src/parser.c" /* yacc.c:1645  */
    break;

  case 177:
#line 375 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 2976 "src/parser.c" /* yacc.c:1645  */
    break;

  case 179:
#line 376 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 2982 "src/parser.c" /* yacc.c:1645  */
    break;

  case 181:
#line 377 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2988 "src/parser.c" /* yacc.c:1645  */
    break;

  case 183:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2994 "src/parser.c" /* yacc.c:1645  */
    break;

  case 185:
#line 379 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3000 "src/parser.c" /* yacc.c:1645  */
    break;

  case 187:
#line 380 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3006 "src/parser.c" /* yacc.c:1645  */
    break;

  case 189:
#line 381 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3012 "src/parser.c" /* yacc.c:1645  */
    break;

  case 191:
#line 384 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3018 "src/parser.c" /* yacc.c:1645  */
    break;

  case 192:
#line 386 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3024 "src/parser.c" /* yacc.c:1645  */
    break;

  case 193:
#line 386 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3030 "src/parser.c" /* yacc.c:1645  */
    break;

  case 195:
#line 388 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_not; }
#line 3036 "src/parser.c" /* yacc.c:1645  */
    break;

  case 196:
#line 388 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_spork; }
#line 3042 "src/parser.c" /* yacc.c:1645  */
    break;

  case 197:
#line 388 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_cmp; }
#line 3048 "src/parser.c" /* yacc.c:1645  */
    break;

  case 199:
#line 391 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3054 "src/parser.c" /* yacc.c:1645  */
    break;

  case 200:
#line 392 "ly/gwion.y" /* yacc.c:1645  */
    {(yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl)); }
#line 3060 "src/parser.c" /* yacc.c:1645  */
    break;

  case 201:
#line 393 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3066 "src/parser.c" /* yacc.c:1645  */
    break;

  case 203:
#line 396 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dur((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3072 "src/parser.c" /* yacc.c:1645  */
    break;

  case 204:
#line 400 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list(NULL, new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)), NULL); }
#line 3078 "src/parser.c" /* yacc.c:1645  */
    break;

  case 205:
#line 401 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list(NULL, new_var_decl((yyvsp[-1].sym), NULL, get_pos(arg)), (yyvsp[0].arg_list)); }
#line 3084 "src/parser.c" /* yacc.c:1645  */
    break;

  case 206:
#line 402 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3090 "src/parser.c" /* yacc.c:1645  */
    break;

  case 207:
#line 402 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 3096 "src/parser.c" /* yacc.c:1645  */
    break;

  case 208:
#line 405 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3102 "src/parser.c" /* yacc.c:1645  */
    break;

  case 209:
#line 406 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3108 "src/parser.c" /* yacc.c:1645  */
    break;

  case 210:
#line 409 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3114 "src/parser.c" /* yacc.c:1645  */
    break;

  case 211:
#line 409 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = NULL; }
#line 3120 "src/parser.c" /* yacc.c:1645  */
    break;

  case 212:
#line 411 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_inc; }
#line 3126 "src/parser.c" /* yacc.c:1645  */
    break;

  case 213:
#line 411 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_dec; }
#line 3132 "src/parser.c" /* yacc.c:1645  */
    break;

  case 214:
#line 413 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3138 "src/parser.c" /* yacc.c:1645  */
    break;

  case 216:
#line 415 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3144 "src/parser.c" /* yacc.c:1645  */
    break;

  case 217:
#line 417 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3151 "src/parser.c" /* yacc.c:1645  */
    break;

  case 218:
#line 420 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3157 "src/parser.c" /* yacc.c:1645  */
    break;

  case 219:
#line 420 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3163 "src/parser.c" /* yacc.c:1645  */
    break;

  case 220:
#line 423 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_complex; }
#line 3169 "src/parser.c" /* yacc.c:1645  */
    break;

  case 221:
#line 424 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3175 "src/parser.c" /* yacc.c:1645  */
    break;

  case 222:
#line 425 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3181 "src/parser.c" /* yacc.c:1645  */
    break;

  case 223:
#line 428 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3187 "src/parser.c" /* yacc.c:1645  */
    break;

  case 224:
#line 429 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3193 "src/parser.c" /* yacc.c:1645  */
    break;

  case 225:
#line 430 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3199 "src/parser.c" /* yacc.c:1645  */
    break;

  case 226:
#line 431 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3205 "src/parser.c" /* yacc.c:1645  */
    break;

  case 227:
#line 432 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3211 "src/parser.c" /* yacc.c:1645  */
    break;

  case 228:
#line 433 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3217 "src/parser.c" /* yacc.c:1645  */
    break;

  case 229:
#line 434 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3223 "src/parser.c" /* yacc.c:1645  */
    break;

  case 230:
#line 435 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3229 "src/parser.c" /* yacc.c:1645  */
    break;

  case 231:
#line 436 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3235 "src/parser.c" /* yacc.c:1645  */
    break;

  case 232:
#line 437 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_lambda((yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3241 "src/parser.c" /* yacc.c:1645  */
    break;

  case 233:
#line 438 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3247 "src/parser.c" /* yacc.c:1645  */
    break;


#line 3251 "src/parser.c" /* yacc.c:1645  */
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
#line 440 "ly/gwion.y" /* yacc.c:1903  */

