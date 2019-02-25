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
#define YYLAST   1857

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

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
     157,   158,   158,   159,   160,   160,   163,   164,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   186,   187,   194,   194,   197,   200,   202,   205,   206,
     207,   210,   213,   215,   217,   219,   221,   223,   225,   227,
     232,   234,   239,   240,   241,   242,   246,   247,   250,   250,
     252,   252,   254,   254,   256,   256,   256,   257,   257,   258,
     258,   259,   259,   260,   260,   261,   261,   261,   262,   262,
     266,   267,   268,   272,   273,   274,   277,   277,   278,   278,
     279,   280,   281,   281,   283,   283,   284,   284,   285,   285,
     287,   287,   289,   290,   293,   294,   297,   298,   299,   302,
     302,   305,   313,   313,   313,   313,   313,   315,   316,   318,
     320,   322,   327,   327,   330,   331,   333,   336,   337,   339,
     340,   343,   349,   356,   357,   360,   361,   363,   364,   365,
     366,   367,   368,   370,   370,   371,   371,   371,   371,   372,
     372,   373,   373,   374,   374,   374,   375,   375,   378,   378,
     379,   379,   380,   380,   381,   381,   382,   382,   383,   383,
     384,   384,   385,   385,   386,   386,   387,   387,   389,   389,
     392,   392,   393,   394,   394,   394,   397,   397,   398,   399,
     401,   401,   406,   407,   408,   408,   411,   412,   415,   415,
     417,   417,   419,   420,   420,   422,   425,   426,   429,   430,
     431,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444
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
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt", "id", "opt_id", "enum_stmt",
  "label_stmt", "goto_stmt", "case_stmt", "switch_stmt", "loop_stmt",
  "selection_stmt", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "array", "decl_exp2",
  "decl_exp", "union_exp", "decl_exp3", "func_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "opt_flag",
  "func_def_base", "op_op", "func_def", "atsym", "type_decl0", "type_decl",
  "decl_list", "union_stmt", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp",
  "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp",
  "cast_exp", "unary_op", "unary_exp", "dur_exp", "lambda_list",
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

#define YYPACT_NINF -328

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-328)))

#define YYTABLE_NINF -84

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     463,  -328,  -328,  1615,  1273,  1334,   862,  -328,  -328,  -328,
    -328,    25,    38,   961,    55,   106,   116,    47,  1615,    43,
     117,  1159,   145,   152,  -328,  -328,    62,   142,  -328,  -328,
    -328,  -328,  -328,   142,  1774,   117,    73,    62,   117,  -328,
     151,    64,   -32,  -328,  -328,    76,  -328,  -328,   168,  -328,
     565,  -328,   148,  -328,  -328,  -328,  -328,   961,    10,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   174,  1101,
    -328,   165,  -328,  -328,  -328,  -328,   -13,    36,  -328,    62,
    -328,  -328,  -328,    47,  -328,  -328,    -3,   120,   109,   110,
     114,    52,   136,    67,    44,   158,   159,  1668,  -328,   128,
     142,  -328,  -328,    75,  1615,  -328,    27,   183,  1721,  -328,
     191,  -328,   190,  -328,   196,  1615,  1615,    45,  1615,  1615,
    1060,   215,   142,   186,  -328,   187,    28,   192,  -328,   211,
    -328,   226,  -328,  -328,  -328,  -328,   135,   218,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,    62,  -328,
    -328,  -328,  -328,    62,    62,    47,  -328,   227,   147,    47,
      47,  -328,  -328,    47,   138,    47,  -328,  -328,  -328,  -328,
    -328,  -328,    47,  -328,  1615,  1615,  1395,  -328,   117,   117,
    -328,  -328,   218,  -328,   230,  1615,  1721,  1721,  1721,  1721,
    1721,  -328,  -328,  1721,  1721,  1721,  1721,  1721,    62,    62,
    -328,  1192,  -328,  1615,    47,    62,   228,  -328,  -328,   231,
    -328,  -328,   225,  -328,   232,   233,  1615,  1615,   234,   236,
     148,  1220,  -328,  -328,  -328,  -328,  -328,    47,  -328,  -328,
     242,   243,    47,   156,   250,    62,    47,  -328,   244,   245,
     201,  -328,  -328,  -328,  -328,  -328,  -328,  -328,    62,    47,
    -328,    47,   229,   120,   109,   110,   114,    52,   136,    67,
      44,   158,   159,  -328,   252,    75,  -328,   175,  1448,  -328,
    -328,  1509,  -328,   961,   961,   262,   263,   961,   961,    47,
    1562,   254,    62,    62,    11,  -328,    47,  -328,   148,    60,
     148,    47,    47,   210,  -328,  1721,    62,  -328,  -328,   264,
    -328,   238,  -328,  -328,  -328,  -328,  -328,   247,   961,   265,
      47,   270,    47,   266,  -328,     4,    13,    47,  -328,  -328,
     268,   278,    47,   269,  -328,  -328,   279,    62,   274,  -328,
     280,  -328,   961,  1615,  -328,   961,   292,    62,   218,  -328,
     142,   291,  -328,  -328,   289,  -328,   218,  -328,    47,    62,
    -328,    47,    62,    13,  -328,   664,   142,  -328,  1332,  -328,
    -328,   290,  -328,   165,  -328,    62,  -328,  -328,   165,   300,
    -328,   301,   302,  -328,   142,   763,   294,  -328,  -328,   961,
     142,  -328,  -328,  -328,    62,  -328,  -328,  -328,  -328,  -328,
    -328
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     121,    77,   201,     0,     0,     0,     0,   229,   228,   205,
     203,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,     0,   220,   221,     0,   204,   122,   123,
     124,   125,   200,     0,     0,   129,     0,     0,   129,   230,
       0,     0,     0,   232,   233,    51,   234,   235,     0,     2,
     121,     8,   142,     6,    48,    49,    41,    22,   231,    46,
      42,    43,    45,    44,    39,    40,    47,    38,     0,    78,
     106,   107,   236,    80,   112,   109,     0,   127,   126,     0,
     137,     7,   147,     0,    50,   108,   176,   178,   180,   182,
     184,   186,   188,   190,   192,   194,   196,     0,   198,   206,
       0,   202,   227,   210,     0,   223,   231,     0,     0,   241,
       0,   103,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,   227,    83,   223,   130,     0,
      72,     0,    74,    75,    28,   208,    20,    26,   209,   141,
      84,   174,   173,   175,    88,    89,    90,    91,    92,    87,
      85,    93,    94,    86,   168,   166,   167,   165,   172,   171,
     169,   170,    95,    96,    97,    98,    99,   132,     0,   134,
     133,   136,   135,     0,     0,     0,    29,   216,     0,    54,
       0,   148,   215,   212,     0,     0,     1,     5,   143,   144,
      23,    56,     0,    76,     0,     0,     0,   105,   129,   129,
     128,   113,   155,   110,   153,     0,     0,     0,     0,     0,
       0,   163,   164,     0,     0,     0,     0,     0,     0,     0,
     207,     0,   240,     0,     0,     0,     0,   224,   226,     0,
     238,   239,   100,    37,     0,     0,     0,     0,     0,     0,
     142,     0,    57,    61,    60,    59,    58,     0,    73,    27,
       0,     0,     0,     0,    16,     0,     0,    53,     0,     0,
      18,   213,   214,    52,    21,    79,    81,   104,     0,     0,
     156,     0,     0,   179,   181,   183,   185,   187,   189,   191,
     193,   195,   197,   199,     0,   211,   222,     0,     0,   225,
     237,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,     0,   217,   142,     0,
     142,     0,     0,    11,   154,     0,     0,    82,   219,     0,
     102,    70,    62,    63,    68,    67,    69,     0,     0,     0,
      54,     0,     0,     0,    25,   117,     0,    54,    17,   145,
       0,     0,     0,     0,   146,    19,     0,     0,     0,   177,
       0,   218,     0,     0,    64,     0,     0,     0,   157,    30,
       0,    34,   116,   119,     0,    24,   160,    33,    54,   149,
     111,    54,   115,     0,    10,   121,     0,    71,     0,    65,
      55,     0,   159,   158,   139,     0,   118,   162,   161,     0,
     150,     0,    31,   114,     0,   121,     0,    12,   140,     0,
       0,    35,   152,   151,     0,   131,    15,     9,    66,   138,
      32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,   255,  -327,  -328,  -328,  -328,   -87,  -216,  -181,
    -328,    41,  -328,  -328,   -18,   -33,  -145,  -257,  -325,   -19,
    -328,     6,   -11,     0,  -201,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -110,   246,   -35,  -328,   285,   -45,  -295,
    -117,   125,   248,  -328,  -328,  -328,   -50,  -328,  -328,   249,
      -8,    -1,  -328,  -328,  -328,  -175,   283,    54,   -44,  -328,
      63,  -328,    -9,  -328,  -328,   297,   305,   306,   311,    20,
    -328,   130,   139,   140,   150,   137,   141,   146,   134,   153,
     155,     1,   -73,  -328,   184,  -328,  -193,  -328,   -27,   332,
     -10,  -328,   354
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    49,    50,    51,   348,   396,   397,   253,   259,
      52,    53,    54,    55,   176,   135,   177,   392,   393,   336,
     362,    56,    57,   136,   258,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,   226,   195,    70,    71,
      72,    73,    74,   341,    75,   373,   365,    76,    77,    78,
      79,   129,    80,   168,    81,   189,    82,    83,   343,    84,
     203,   204,   359,   367,   213,   214,   215,   216,   217,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,   108,    98,    99,   184,   100,   178,   289,   101,   102,
     103,   104,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    97,   117,   106,   106,   106,    58,   173,   134,   126,
     241,   264,   128,    58,   334,   335,   198,   121,   106,   124,
     249,   106,   335,   250,   220,   363,   197,   128,   251,   205,
     128,   301,   287,   138,   174,   220,   115,   179,   -20,   139,
     199,   223,   183,   191,   123,   331,   333,   114,   395,   116,
      58,    97,     3,   313,     4,   -20,     5,    58,   227,   350,
     401,   340,   307,   383,   182,   299,   118,    45,   395,     7,
       8,   388,   206,   283,   284,   308,   228,    24,    25,   410,
     137,   227,   236,   202,   237,   270,   -83,   224,   223,    37,
     338,   137,    30,    31,    40,    41,    37,   124,   190,   228,
     381,    40,    41,    45,   106,   192,   222,   364,   124,   -20,
      45,   158,   159,   225,   211,   106,   106,   119,   106,   106,
     106,   212,   192,   312,    24,    25,   -20,   120,   243,   356,
     345,   300,    39,   339,   224,   344,   366,   160,   161,    42,
      43,    44,    45,    46,    47,    37,    45,    37,   132,    37,
      40,    41,    40,    41,    40,   133,   252,     6,   175,    45,
     225,    45,   180,    45,   141,   142,   143,   389,   186,   185,
     391,    28,    29,    30,    31,   254,   188,   193,   196,   257,
     260,   207,   208,   183,   209,   263,   210,   292,   221,   218,
     128,   128,   260,   230,   106,   106,   106,   268,   269,   154,
     155,   156,   157,   231,   232,   106,   124,   124,   124,   124,
     124,   285,   233,   124,   124,   124,   124,   124,   242,   244,
     245,   124,   137,   106,   286,   246,   247,   137,   137,   248,
     192,     5,   255,   256,   262,   271,   106,   106,   291,   288,
     227,   106,   305,   290,   293,   294,   297,   254,   298,   107,
     110,   112,   304,   302,   303,   306,   260,   310,   228,   309,
     311,   317,   315,   316,   122,   323,   324,   131,   347,   254,
     330,   202,   137,   137,   352,   357,   351,   355,   360,   137,
     353,   369,   321,   322,   368,   371,   325,   326,   106,   375,
     372,   106,   376,    58,    58,   380,   385,    58,    58,   327,
     106,   386,   400,   402,   403,   187,   254,   404,   406,   137,
     407,   260,   346,   382,   374,   124,   361,   354,   378,   167,
     266,   387,   137,   394,   181,   390,   200,   201,    58,   134,
     257,   169,   358,   370,   314,   349,   273,   257,   197,   170,
     171,   377,   358,   197,   379,   172,   274,   277,   275,   280,
     229,   125,    58,   106,   278,    58,   332,   332,   337,   276,
     279,   234,   235,   342,   238,   239,   384,   261,   257,   281,
     332,   257,   282,   127,     0,    58,    97,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,   408,   337,
       0,     0,     0,     0,     0,    58,    97,     0,     0,    58,
     405,   137,     0,     0,     0,     0,   409,     0,     0,     0,
       0,   332,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,     0,     0,   332,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
     265,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,   332,     0,
       0,     0,     0,    -3,     0,     0,     1,     0,     0,   112,
       2,     0,     3,     0,     4,     0,     5,     0,     6,     0,
       0,     0,   295,   296,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     9,     0,     0,    10,    11,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,   319,     0,     0,   112,     0,    33,
      34,    35,     0,     0,     0,     0,   329,    36,    37,     0,
       0,    38,    39,    40,    41,     0,     0,     0,     0,    42,
      43,    44,    45,    46,    47,    -4,     0,     0,     1,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,     0,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,    36,
      37,     0,     0,    38,    39,    40,    41,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,     0,     0,     0,     0,     0,    36,    37,
       0,     0,    38,    39,    40,    41,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    47,     1,     0,     0,     0,
       2,     0,     3,     0,     4,     0,     5,     0,     6,   -14,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     9,     0,     0,    10,    11,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    38,    39,    40,    41,     0,     0,     0,     0,    42,
      43,    44,    45,    46,    47,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     6,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,    37,     0,     0,
      38,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,    47,     1,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,    37,     0,     0,    38,
      39,    40,    41,     0,     0,     0,     0,    42,    43,    44,
      45,    46,    47,     1,     0,     0,     0,     2,     0,     3,
       0,     4,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   194,     0,     0,    24,
      25,    26,    27,     0,    28,    29,    30,    31,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,    39,
      40,    41,   240,     0,     0,     0,    42,    43,    44,    45,
      46,    47,   130,   153,     0,     0,     2,     0,     3,     0,
       4,     0,     5,     0,     0,     0,     0,     0,     0,     0,
     162,   163,   164,   165,   166,     7,     8,     0,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     4,     0,     5,     0,     0,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     0,     7,     8,
       0,     0,     0,     1,     0,     0,    32,     2,     0,     3,
       0,     4,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     7,     8,    39,    40,
      41,     9,     0,     0,    10,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       2,    39,     3,     0,     4,   109,     5,    32,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     9,    37,     0,    10,     0,    39,
      40,    41,     0,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    24,    25,    26,    27,     0,    28,    29,    30,
      31,     0,     0,     0,     0,     0,   140,     0,     0,     0,
      32,     2,     0,     3,   399,     4,     0,     5,   111,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    37,     0,
       7,     8,    39,    40,    41,     9,     0,     0,    10,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,   153,     0,     0,     0,     0,     0,
       0,    32,     2,     0,     3,     0,     4,     0,     5,   267,
       0,   162,   163,   164,   165,   166,     0,     0,     0,    37,
       0,     7,     8,    39,    40,    41,     9,     0,     0,    10,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     2,     0,     3,     0,     4,
     318,     5,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      37,     0,    10,     0,    39,    40,    41,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     2,     0,     3,     0,
       4,     0,     5,   320,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     7,     8,    39,    40,    41,
       9,     0,     0,    10,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     0,     0,     2,
       0,     3,     0,     4,   328,     5,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,    37,     0,    10,     0,    39,    40,
      41,     0,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     2,     0,     3,     0,     4,     0,     5,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,    37,     0,    10,
       0,    39,    40,    41,     0,     0,     0,     0,    42,    43,
      44,    45,    46,    47,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     2,     0,     3,     0,     4,
       0,     5,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      37,     0,    10,     0,    39,    40,    41,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    24,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,     0,    39,     0,     0,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      24,    25,    26,    27,     0,     0,     0,     0,   140,     0,
     141,   142,   143,     0,     0,     0,     0,     0,    32,     0,
       0,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    42,    43,    44,
      45,    46,    47,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,     0,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,   163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
       0,     0,    13,     3,     4,     5,     6,    34,    26,    19,
     120,   192,    20,    13,     3,    11,    29,    17,    18,    19,
     137,    21,    11,   168,    97,    12,    71,    35,   173,    32,
      38,   247,   225,    27,    35,   108,    11,    38,    28,    33,
      53,    13,    42,    33,     1,   302,   303,     6,   375,    11,
      50,    50,     9,   269,    11,    28,    13,    57,   103,   316,
     385,     1,   255,   358,    96,   240,    11,    99,   395,    26,
      27,   366,    75,   218,   219,   256,   103,    49,    50,   404,
      26,   126,    37,    83,    39,   202,    11,    59,    13,    85,
     306,    37,    56,    57,    90,    91,    85,    97,    57,   126,
     357,    90,    91,    99,   104,    95,   100,    94,   108,    99,
      99,    67,    68,    85,    62,   115,   116,    11,   118,   119,
     120,    69,    95,   268,    49,    50,    99,    11,   122,   330,
     311,   241,    89,   308,    59,   310,   337,    70,    71,    96,
      97,    98,    99,   100,   101,    85,    99,    85,     3,    85,
      90,    91,    90,    91,    90,     3,   174,    15,    85,    99,
      85,    99,    11,    99,     6,     7,     8,   368,     0,    93,
     371,    54,    55,    56,    57,   175,    28,     3,    13,   179,
     180,    61,    73,   183,    74,   185,    72,   232,    60,    30,
     198,   199,   192,    10,   194,   195,   196,   198,   199,    63,
      64,    65,    66,    12,    14,   205,   206,   207,   208,   209,
     210,   221,    16,   213,   214,   215,   216,   217,     3,    33,
      33,   221,   168,   223,   224,    33,    15,   173,   174,     3,
      95,    13,     5,    86,    96,     5,   236,   237,    13,    11,
     285,   241,    86,    12,    12,    12,    12,   247,    12,     3,
       4,     5,   252,    11,    11,     5,   256,    12,   285,    15,
      59,    86,    33,    11,    18,     3,     3,    21,    58,   269,
      16,   271,   218,   219,    36,     5,    12,    12,    12,   225,
      33,     3,   293,   294,    16,    16,   297,   298,   288,    15,
      11,   291,    12,   293,   294,     3,     5,   297,   298,   299,
     300,    12,    12,     3,     3,    50,   306,     5,   395,   255,
      16,   311,   312,   358,   347,   315,   335,   328,   353,    34,
     195,   366,   268,   373,    41,   369,    77,    79,   328,   347,
     330,    34,   332,   342,   271,   315,   206,   337,   383,    34,
      34,   352,   342,   388,   355,    34,   207,   210,   208,   215,
     104,    19,   352,   353,   213,   355,   302,   303,   304,   209,
     214,   115,   116,   309,   118,   119,   360,   183,   368,   216,
     316,   371,   217,    19,    -1,   375,   375,    -1,    -1,    -1,
      -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,   399,   335,
      -1,    -1,    -1,    -1,    -1,   395,   395,    -1,    -1,   399,
     394,   347,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,
      -1,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   369,    -1,    -1,   372,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
     194,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,     0,    -1,    -1,     3,    -1,    -1,   223,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,   236,   237,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,   288,    -1,    -1,   291,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,   300,    84,    85,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,     0,    -1,    -1,     3,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,     3,    -1,    -1,    -1,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,     3,    62,    -1,    -1,     7,    -1,     9,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    11,    -1,    13,    -1,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    26,    27,
      -1,    -1,    -1,     3,    -1,    -1,    67,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    26,    27,    89,    90,
      91,    31,    -1,    -1,    34,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
       7,    89,     9,    -1,    11,    12,    13,    67,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,
      90,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      67,     7,    -1,     9,    12,    11,    -1,    13,    14,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    85,    -1,
      26,    27,    89,    90,    91,    31,    -1,    -1,    34,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    67,     7,    -1,     9,    -1,    11,    -1,    13,    14,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    85,
      -1,    26,    27,    89,    90,    91,    31,    -1,    -1,    34,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,     7,    -1,     9,    -1,    11,
      12,    13,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      85,    -1,    34,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    26,    27,    89,    90,    91,
      31,    -1,    -1,    34,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    -1,     7,
      -1,     9,    -1,    11,    12,    13,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    85,    -1,    34,    -1,    89,    90,
      91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    85,    -1,    34,
      -1,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      85,    -1,    34,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      49,    50,    51,    52,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
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
      90,    91,    96,    97,    98,    99,   100,   101,   112,   113,
     114,   115,   121,   122,   123,   124,   132,   133,   134,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     149,   150,   151,   152,   153,   155,   158,   159,   160,   161,
     163,   165,   167,   168,   170,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     196,   199,   200,   201,   202,   203,   134,   145,   192,    12,
     145,    14,   145,    16,   122,    11,    11,   133,    11,    11,
      11,   134,   145,     1,   134,   200,   201,   203,   161,   162,
       3,   145,     3,     3,   125,   126,   134,   168,   132,   132,
       4,     6,     7,     8,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    62,    63,    64,    65,    66,    67,    68,
      70,    71,    79,    80,    81,    82,    83,   148,   164,   176,
     177,   178,   179,   199,   162,    85,   125,   127,   197,   162,
      11,   167,    96,   134,   195,    93,     0,   113,    28,   166,
     122,    33,    95,     3,     5,   148,    13,   149,    29,    53,
     160,   153,   134,   171,   172,    32,    75,    61,    73,    74,
      72,    62,    69,   175,   176,   177,   178,   179,    30,    77,
     193,    60,   132,    13,    59,    85,   147,   149,   199,   145,
      10,    12,    14,    16,   145,   145,    37,    39,   145,   145,
      92,   144,     3,   132,    33,    33,    33,    15,     3,   151,
     127,   127,   125,   119,   134,     5,    86,   134,   135,   120,
     134,   195,    96,   134,   120,   145,   152,    14,   162,   162,
     151,     5,   145,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   127,   127,   201,   134,   197,    11,   198,
      12,    13,   149,    12,    12,   145,   145,    12,    12,   166,
     144,   119,    11,    11,   134,    86,     5,   197,   120,    15,
      12,    59,   127,   119,   171,    33,    11,    86,    12,   145,
      14,   133,   133,     3,     3,   133,   133,   134,    12,   145,
      16,   128,   168,   128,     3,    11,   130,   168,   119,   166,
       1,   154,   168,   169,   166,   120,   134,    58,   116,   180,
     128,    12,    36,    33,   133,    12,   135,     5,   134,   173,
      12,   130,   131,    12,    94,   157,   135,   174,    16,     3,
     173,    16,    11,   156,   126,    15,    12,   133,   146,   133,
       3,   128,   149,   150,   132,     5,    12,   149,   150,   135,
     169,   135,   128,   129,   157,   114,   117,   118,   132,    12,
      12,   129,     3,     3,     5,   132,   118,    16,   133,   132,
     129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   113,   113,   114,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   125,   125,   126,   127,
     128,   129,   129,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   137,   138,   139,   139,
     139,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   143,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   149,   150,   150,   150,   151,   151,   152,   152,
     153,   154,   155,   155,   156,   156,   130,   130,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   162,
     162,   163,   164,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     174,   174,   174,   175,   175,   176,   176,   176,   176,   177,
     177,   178,   178,   179,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   192,   192,   192,   192,   193,   193,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   201,   201,   201,   201,   201,   202,   202,
     202,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     8,
       2,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     2,     6,     5,     1,     2,     1,     1,
       2,     1,     3,     2,     1,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     3,     3,
       3,     3,     5,     5,     6,     7,     9,     5,     5,     5,
       5,     7,     2,     3,     2,     2,     2,     1,     1,     3,
       1,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     5,     2,     3,     2,     1,     1,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       4,     0,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     8,     1,     1,     1,     1,     1,     1,     9,     7,
       7,     2,     0,     1,     2,     5,     5,     1,     2,     2,
       3,     8,     8,     1,     3,     1,     2,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     3,     1,     2,     3,     2,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     2
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
#line 2101 "src/parser.c" /* yacc.c:1645  */
    break;

  case 3:
#line 106 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "file is empty.\n"); YYERROR; }
#line 2107 "src/parser.c" /* yacc.c:1645  */
    break;

  case 4:
#line 109 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ast) = new_ast((yyvsp[0].section), NULL); }
#line 2113 "src/parser.c" /* yacc.c:1645  */
    break;

  case 5:
#line 110 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2119 "src/parser.c" /* yacc.c:1645  */
    break;

  case 6:
#line 114 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2125 "src/parser.c" /* yacc.c:1645  */
    break;

  case 7:
#line 115 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2131 "src/parser.c" /* yacc.c:1645  */
    break;

  case 8:
#line 116 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2137 "src/parser.c" /* yacc.c:1645  */
    break;

  case 9:
#line 121 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].id_list), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-7].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-7].id_list), -1);
  }
#line 2146 "src/parser.c" /* yacc.c:1645  */
    break;

  case 10:
#line 126 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2152 "src/parser.c" /* yacc.c:1645  */
    break;

  case 11:
#line 126 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = NULL; }
#line 2158 "src/parser.c" /* yacc.c:1645  */
    break;

  case 13:
#line 128 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = NULL; }
#line 2164 "src/parser.c" /* yacc.c:1645  */
    break;

  case 14:
#line 131 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2170 "src/parser.c" /* yacc.c:1645  */
    break;

  case 15:
#line 132 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2176 "src/parser.c" /* yacc.c:1645  */
    break;

  case 16:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2182 "src/parser.c" /* yacc.c:1645  */
    break;

  case 17:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2188 "src/parser.c" /* yacc.c:1645  */
    break;

  case 18:
#line 136 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2194 "src/parser.c" /* yacc.c:1645  */
    break;

  case 19:
#line 136 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2200 "src/parser.c" /* yacc.c:1645  */
    break;

  case 20:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2206 "src/parser.c" /* yacc.c:1645  */
    break;

  case 21:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2212 "src/parser.c" /* yacc.c:1645  */
    break;

  case 22:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2218 "src/parser.c" /* yacc.c:1645  */
    break;

  case 23:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2224 "src/parser.c" /* yacc.c:1645  */
    break;

  case 24:
#line 141 "ly/gwion.y" /* yacc.c:1645  */
    {
  if((yyvsp[-3].type_decl)->array && !(yyvsp[-3].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
(yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2233 "src/parser.c" /* yacc.c:1645  */
    break;

  case 25:
#line 145 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2239 "src/parser.c" /* yacc.c:1645  */
    break;

  case 27:
#line 147 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2245 "src/parser.c" /* yacc.c:1645  */
    break;

  case 28:
#line 149 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2253 "src/parser.c" /* yacc.c:1645  */
    break;

  case 29:
#line 153 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2261 "src/parser.c" /* yacc.c:1645  */
    break;

  case 30:
#line 157 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2267 "src/parser.c" /* yacc.c:1645  */
    break;

  case 31:
#line 158 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2273 "src/parser.c" /* yacc.c:1645  */
    break;

  case 32:
#line 158 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2279 "src/parser.c" /* yacc.c:1645  */
    break;

  case 33:
#line 159 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2285 "src/parser.c" /* yacc.c:1645  */
    break;

  case 34:
#line 160 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2291 "src/parser.c" /* yacc.c:1645  */
    break;

  case 35:
#line 160 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2297 "src/parser.c" /* yacc.c:1645  */
    break;

  case 36:
#line 163 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2303 "src/parser.c" /* yacc.c:1645  */
    break;

  case 37:
#line 164 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2309 "src/parser.c" /* yacc.c:1645  */
    break;

  case 51:
#line 186 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2315 "src/parser.c" /* yacc.c:1645  */
    break;

  case 52:
#line 187 "ly/gwion.y" /* yacc.c:1645  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2325 "src/parser.c" /* yacc.c:1645  */
    break;

  case 54:
#line 194 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = NULL; }
#line 2331 "src/parser.c" /* yacc.c:1645  */
    break;

  case 55:
#line 197 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2338 "src/parser.c" /* yacc.c:1645  */
    break;

  case 56:
#line 200 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2344 "src/parser.c" /* yacc.c:1645  */
    break;

  case 57:
#line 202 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2350 "src/parser.c" /* yacc.c:1645  */
    break;

  case 58:
#line 205 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2356 "src/parser.c" /* yacc.c:1645  */
    break;

  case 59:
#line 206 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2362 "src/parser.c" /* yacc.c:1645  */
    break;

  case 60:
#line 207 "ly/gwion.y" /* yacc.c:1645  */
    { gw_err("unhandled expression type in case statement.\n"); YYERROR; }
#line 2368 "src/parser.c" /* yacc.c:1645  */
    break;

  case 61:
#line 210 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2374 "src/parser.c" /* yacc.c:1645  */
    break;

  case 62:
#line 214 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2380 "src/parser.c" /* yacc.c:1645  */
    break;

  case 63:
#line 216 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2386 "src/parser.c" /* yacc.c:1645  */
    break;

  case 64:
#line 218 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2392 "src/parser.c" /* yacc.c:1645  */
    break;

  case 65:
#line 220 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2398 "src/parser.c" /* yacc.c:1645  */
    break;

  case 66:
#line 222 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2404 "src/parser.c" /* yacc.c:1645  */
    break;

  case 67:
#line 224 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2410 "src/parser.c" /* yacc.c:1645  */
    break;

  case 68:
#line 226 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2416 "src/parser.c" /* yacc.c:1645  */
    break;

  case 69:
#line 228 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2422 "src/parser.c" /* yacc.c:1645  */
    break;

  case 70:
#line 233 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2428 "src/parser.c" /* yacc.c:1645  */
    break;

  case 71:
#line 235 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2434 "src/parser.c" /* yacc.c:1645  */
    break;

  case 72:
#line 239 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2440 "src/parser.c" /* yacc.c:1645  */
    break;

  case 73:
#line 240 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2446 "src/parser.c" /* yacc.c:1645  */
    break;

  case 74:
#line 241 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2452 "src/parser.c" /* yacc.c:1645  */
    break;

  case 75:
#line 242 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2458 "src/parser.c" /* yacc.c:1645  */
    break;

  case 76:
#line 246 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2464 "src/parser.c" /* yacc.c:1645  */
    break;

  case 77:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2470 "src/parser.c" /* yacc.c:1645  */
    break;

  case 79:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2476 "src/parser.c" /* yacc.c:1645  */
    break;

  case 81:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2482 "src/parser.c" /* yacc.c:1645  */
    break;

  case 82:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2488 "src/parser.c" /* yacc.c:1645  */
    break;

  case 83:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = NULL; }
#line 2494 "src/parser.c" /* yacc.c:1645  */
    break;

  case 84:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_chuck; }
#line 2500 "src/parser.c" /* yacc.c:1645  */
    break;

  case 85:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_unchuck; }
#line 2506 "src/parser.c" /* yacc.c:1645  */
    break;

  case 86:
#line 256 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2512 "src/parser.c" /* yacc.c:1645  */
    break;

  case 87:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ref; }
#line 2518 "src/parser.c" /* yacc.c:1645  */
    break;

  case 88:
#line 257 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_radd; }
#line 2524 "src/parser.c" /* yacc.c:1645  */
    break;

  case 89:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsub; }
#line 2530 "src/parser.c" /* yacc.c:1645  */
    break;

  case 90:
#line 258 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmul; }
#line 2536 "src/parser.c" /* yacc.c:1645  */
    break;

  case 91:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rdiv; }
#line 2542 "src/parser.c" /* yacc.c:1645  */
    break;

  case 92:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmod; }
#line 2548 "src/parser.c" /* yacc.c:1645  */
    break;

  case 93:
#line 260 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_trig; }
#line 2554 "src/parser.c" /* yacc.c:1645  */
    break;

  case 94:
#line 260 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_untrig; }
#line 2560 "src/parser.c" /* yacc.c:1645  */
    break;

  case 95:
#line 261 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsl; }
#line 2566 "src/parser.c" /* yacc.c:1645  */
    break;

  case 96:
#line 261 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsr; }
#line 2572 "src/parser.c" /* yacc.c:1645  */
    break;

  case 97:
#line 261 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsand; }
#line 2578 "src/parser.c" /* yacc.c:1645  */
    break;

  case 98:
#line 262 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsor; }
#line 2584 "src/parser.c" /* yacc.c:1645  */
    break;

  case 99:
#line 262 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsxor; }
#line 2590 "src/parser.c" /* yacc.c:1645  */
    break;

  case 100:
#line 266 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2596 "src/parser.c" /* yacc.c:1645  */
    break;

  case 101:
#line 267 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2602 "src/parser.c" /* yacc.c:1645  */
    break;

  case 102:
#line 268 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [...][]..."); YYERROR; }
#line 2608 "src/parser.c" /* yacc.c:1645  */
    break;

  case 103:
#line 272 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2614 "src/parser.c" /* yacc.c:1645  */
    break;

  case 104:
#line 273 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2620 "src/parser.c" /* yacc.c:1645  */
    break;

  case 105:
#line 274 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [][...]"); YYERROR; }
#line 2626 "src/parser.c" /* yacc.c:1645  */
    break;

  case 110:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2632 "src/parser.c" /* yacc.c:1645  */
    break;

  case 111:
#line 280 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), new_var_decl_list((yyvsp[0].var_decl), NULL)); }
#line 2638 "src/parser.c" /* yacc.c:1645  */
    break;

  case 113:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2644 "src/parser.c" /* yacc.c:1645  */
    break;

  case 114:
#line 283 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2650 "src/parser.c" /* yacc.c:1645  */
    break;

  case 115:
#line 283 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2656 "src/parser.c" /* yacc.c:1645  */
    break;

  case 116:
#line 284 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2662 "src/parser.c" /* yacc.c:1645  */
    break;

  case 117:
#line 284 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2668 "src/parser.c" /* yacc.c:1645  */
    break;

  case 118:
#line 285 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2674 "src/parser.c" /* yacc.c:1645  */
    break;

  case 119:
#line 285 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2680 "src/parser.c" /* yacc.c:1645  */
    break;

  case 120:
#line 287 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2686 "src/parser.c" /* yacc.c:1645  */
    break;

  case 121:
#line 287 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = NULL; }
#line 2692 "src/parser.c" /* yacc.c:1645  */
    break;

  case 122:
#line 289 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_static; }
#line 2698 "src/parser.c" /* yacc.c:1645  */
    break;

  case 123:
#line 290 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_global; }
#line 2704 "src/parser.c" /* yacc.c:1645  */
    break;

  case 124:
#line 293 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_private; }
#line 2710 "src/parser.c" /* yacc.c:1645  */
    break;

  case 125:
#line 294 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_protect; }
#line 2716 "src/parser.c" /* yacc.c:1645  */
    break;

  case 126:
#line 297 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2722 "src/parser.c" /* yacc.c:1645  */
    break;

  case 127:
#line 298 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2728 "src/parser.c" /* yacc.c:1645  */
    break;

  case 128:
#line 299 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2734 "src/parser.c" /* yacc.c:1645  */
    break;

  case 129:
#line 302 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2740 "src/parser.c" /* yacc.c:1645  */
    break;

  case 130:
#line 302 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2746 "src/parser.c" /* yacc.c:1645  */
    break;

  case 131:
#line 306 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-7].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-7].id_list), -1);
    }
  }
#line 2757 "src/parser.c" /* yacc.c:1645  */
    break;

  case 138:
#line 317 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2763 "src/parser.c" /* yacc.c:1645  */
    break;

  case 139:
#line 319 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2769 "src/parser.c" /* yacc.c:1645  */
    break;

  case 140:
#line 321 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2775 "src/parser.c" /* yacc.c:1645  */
    break;

  case 141:
#line 323 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2782 "src/parser.c" /* yacc.c:1645  */
    break;

  case 142:
#line 327 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = 0; }
#line 2788 "src/parser.c" /* yacc.c:1645  */
    break;

  case 143:
#line 327 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_flag_ref; }
#line 2794 "src/parser.c" /* yacc.c:1645  */
    break;

  case 144:
#line 330 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival)); }
#line 2800 "src/parser.c" /* yacc.c:1645  */
    break;

  case 145:
#line 331 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-1].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2807 "src/parser.c" /* yacc.c:1645  */
    break;

  case 146:
#line 333 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl2((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2813 "src/parser.c" /* yacc.c:1645  */
    break;

  case 147:
#line 336 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2819 "src/parser.c" /* yacc.c:1645  */
    break;

  case 148:
#line 337 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 2825 "src/parser.c" /* yacc.c:1645  */
    break;

  case 149:
#line 339 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 2831 "src/parser.c" /* yacc.c:1645  */
    break;

  case 150:
#line 340 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2837 "src/parser.c" /* yacc.c:1645  */
    break;

  case 151:
#line 343 "ly/gwion.y" /* yacc.c:1645  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2848 "src/parser.c" /* yacc.c:1645  */
    break;

  case 152:
#line 349 "ly/gwion.y" /* yacc.c:1645  */
    {
    gwion_error(arg, "Unions should only contain declarations.");
    YYERROR;
    }
#line 2857 "src/parser.c" /* yacc.c:1645  */
    break;

  case 153:
#line 356 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 2863 "src/parser.c" /* yacc.c:1645  */
    break;

  case 154:
#line 357 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2869 "src/parser.c" /* yacc.c:1645  */
    break;

  case 155:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2875 "src/parser.c" /* yacc.c:1645  */
    break;

  case 156:
#line 361 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2881 "src/parser.c" /* yacc.c:1645  */
    break;

  case 157:
#line 363 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2887 "src/parser.c" /* yacc.c:1645  */
    break;

  case 158:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2893 "src/parser.c" /* yacc.c:1645  */
    break;

  case 159:
#line 365 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2899 "src/parser.c" /* yacc.c:1645  */
    break;

  case 160:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 2905 "src/parser.c" /* yacc.c:1645  */
    break;

  case 161:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 2911 "src/parser.c" /* yacc.c:1645  */
    break;

  case 162:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2917 "src/parser.c" /* yacc.c:1645  */
    break;

  case 163:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2923 "src/parser.c" /* yacc.c:1645  */
    break;

  case 164:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ne; }
#line 2929 "src/parser.c" /* yacc.c:1645  */
    break;

  case 165:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_lt; }
#line 2935 "src/parser.c" /* yacc.c:1645  */
    break;

  case 166:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_gt; }
#line 2941 "src/parser.c" /* yacc.c:1645  */
    break;

  case 167:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_le; }
#line 2947 "src/parser.c" /* yacc.c:1645  */
    break;

  case 168:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ge; }
#line 2953 "src/parser.c" /* yacc.c:1645  */
    break;

  case 169:
#line 372 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shl; }
#line 2959 "src/parser.c" /* yacc.c:1645  */
    break;

  case 170:
#line 372 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shr; }
#line 2965 "src/parser.c" /* yacc.c:1645  */
    break;

  case 171:
#line 373 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_add; }
#line 2971 "src/parser.c" /* yacc.c:1645  */
    break;

  case 172:
#line 373 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 2977 "src/parser.c" /* yacc.c:1645  */
    break;

  case 173:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 2983 "src/parser.c" /* yacc.c:1645  */
    break;

  case 174:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_div; }
#line 2989 "src/parser.c" /* yacc.c:1645  */
    break;

  case 175:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mod; }
#line 2995 "src/parser.c" /* yacc.c:1645  */
    break;

  case 177:
#line 376 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3001 "src/parser.c" /* yacc.c:1645  */
    break;

  case 179:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3007 "src/parser.c" /* yacc.c:1645  */
    break;

  case 181:
#line 379 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3013 "src/parser.c" /* yacc.c:1645  */
    break;

  case 183:
#line 380 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3019 "src/parser.c" /* yacc.c:1645  */
    break;

  case 185:
#line 381 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3025 "src/parser.c" /* yacc.c:1645  */
    break;

  case 187:
#line 382 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3031 "src/parser.c" /* yacc.c:1645  */
    break;

  case 189:
#line 383 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3037 "src/parser.c" /* yacc.c:1645  */
    break;

  case 191:
#line 384 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3043 "src/parser.c" /* yacc.c:1645  */
    break;

  case 193:
#line 385 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3049 "src/parser.c" /* yacc.c:1645  */
    break;

  case 195:
#line 386 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3055 "src/parser.c" /* yacc.c:1645  */
    break;

  case 197:
#line 387 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3061 "src/parser.c" /* yacc.c:1645  */
    break;

  case 199:
#line 390 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3067 "src/parser.c" /* yacc.c:1645  */
    break;

  case 200:
#line 392 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3073 "src/parser.c" /* yacc.c:1645  */
    break;

  case 201:
#line 392 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3079 "src/parser.c" /* yacc.c:1645  */
    break;

  case 203:
#line 394 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_not; }
#line 3085 "src/parser.c" /* yacc.c:1645  */
    break;

  case 204:
#line 394 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_spork; }
#line 3091 "src/parser.c" /* yacc.c:1645  */
    break;

  case 205:
#line 394 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_cmp; }
#line 3097 "src/parser.c" /* yacc.c:1645  */
    break;

  case 207:
#line 397 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3103 "src/parser.c" /* yacc.c:1645  */
    break;

  case 208:
#line 398 "ly/gwion.y" /* yacc.c:1645  */
    {(yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl)); }
#line 3109 "src/parser.c" /* yacc.c:1645  */
    break;

  case 209:
#line 399 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3115 "src/parser.c" /* yacc.c:1645  */
    break;

  case 211:
#line 402 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dur((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3121 "src/parser.c" /* yacc.c:1645  */
    break;

  case 212:
#line 406 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list(NULL, new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)), NULL); }
#line 3127 "src/parser.c" /* yacc.c:1645  */
    break;

  case 213:
#line 407 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list(NULL, new_var_decl((yyvsp[-1].sym), NULL, get_pos(arg)), (yyvsp[0].arg_list)); }
#line 3133 "src/parser.c" /* yacc.c:1645  */
    break;

  case 214:
#line 408 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3139 "src/parser.c" /* yacc.c:1645  */
    break;

  case 215:
#line 408 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 3145 "src/parser.c" /* yacc.c:1645  */
    break;

  case 216:
#line 411 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3151 "src/parser.c" /* yacc.c:1645  */
    break;

  case 217:
#line 412 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3157 "src/parser.c" /* yacc.c:1645  */
    break;

  case 218:
#line 415 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3163 "src/parser.c" /* yacc.c:1645  */
    break;

  case 219:
#line 415 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = NULL; }
#line 3169 "src/parser.c" /* yacc.c:1645  */
    break;

  case 220:
#line 417 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_inc; }
#line 3175 "src/parser.c" /* yacc.c:1645  */
    break;

  case 221:
#line 417 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_dec; }
#line 3181 "src/parser.c" /* yacc.c:1645  */
    break;

  case 222:
#line 419 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3187 "src/parser.c" /* yacc.c:1645  */
    break;

  case 224:
#line 421 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3193 "src/parser.c" /* yacc.c:1645  */
    break;

  case 225:
#line 423 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3200 "src/parser.c" /* yacc.c:1645  */
    break;

  case 226:
#line 426 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3206 "src/parser.c" /* yacc.c:1645  */
    break;

  case 227:
#line 426 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3212 "src/parser.c" /* yacc.c:1645  */
    break;

  case 228:
#line 429 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_complex; }
#line 3218 "src/parser.c" /* yacc.c:1645  */
    break;

  case 229:
#line 430 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3224 "src/parser.c" /* yacc.c:1645  */
    break;

  case 230:
#line 431 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3230 "src/parser.c" /* yacc.c:1645  */
    break;

  case 231:
#line 434 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3236 "src/parser.c" /* yacc.c:1645  */
    break;

  case 232:
#line 435 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3242 "src/parser.c" /* yacc.c:1645  */
    break;

  case 233:
#line 436 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3248 "src/parser.c" /* yacc.c:1645  */
    break;

  case 234:
#line 437 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3254 "src/parser.c" /* yacc.c:1645  */
    break;

  case 235:
#line 438 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3260 "src/parser.c" /* yacc.c:1645  */
    break;

  case 236:
#line 439 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3266 "src/parser.c" /* yacc.c:1645  */
    break;

  case 237:
#line 440 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3272 "src/parser.c" /* yacc.c:1645  */
    break;

  case 238:
#line 441 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3278 "src/parser.c" /* yacc.c:1645  */
    break;

  case 239:
#line 442 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3284 "src/parser.c" /* yacc.c:1645  */
    break;

  case 240:
#line 443 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_lambda((yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3290 "src/parser.c" /* yacc.c:1645  */
    break;

  case 241:
#line 444 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3296 "src/parser.c" /* yacc.c:1645  */
    break;


#line 3300 "src/parser.c" /* yacc.c:1645  */
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
#line 446 "ly/gwion.y" /* yacc.c:1903  */

