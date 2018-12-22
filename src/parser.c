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
#define CHECK_FLAG(a,b,c) if(GET_FLAG(b, c)) { gwion_error(a, "flag set twice");  ; } SET_FLAG(b, c);
#define OP_SYM(a) insert_symbol(op2str(a))
ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
m_str op2str(const Operator op);

#line 99 "src/parser.c" /* yacc.c:338  */
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
    NOELSE = 340,
    LTB = 341,
    GTB = 342,
    UNION = 343,
    ATPAREN = 344,
    TYPEOF = 345,
    CONST = 346,
    AUTO = 347,
    PASTE = 348,
    ELLIPSE = 349,
    NUM = 350,
    FLOAT = 351,
    ID = 352,
    STRING_LIT = 353,
    CHAR_LIT = 354,
    PP_COMMENT = 355,
    PP_INCLUDE = 356,
    PP_DEFINE = 357,
    PP_UNDEF = 358,
    PP_IFDEF = 359,
    PP_IFNDEF = 360,
    PP_ELSE = 361,
    PP_ENDIF = 362,
    PP_NL = 363
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
#define NOELSE 340
#define LTB 341
#define GTB 342
#define UNION 343
#define ATPAREN 344
#define TYPEOF 345
#define CONST 346
#define AUTO 347
#define PASTE 348
#define ELLIPSE 349
#define NUM 350
#define FLOAT 351
#define ID 352
#define STRING_LIT 353
#define CHAR_LIT 354
#define PP_COMMENT 355
#define PP_INCLUDE 356
#define PP_DEFINE 357
#define PP_UNDEF 358
#define PP_IFDEF 359
#define PP_IFNDEF 360
#define PP_ELSE 361
#define PP_ENDIF 362
#define PP_NL 363

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "ly/gwion.y" /* yacc.c:353  */

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

#line 385 "src/parser.c" /* yacc.c:353  */
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
#define YYFINAL  177
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1818

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   363

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
     105,   106,   107,   108
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   109,   113,   114,   115,   119,   125,   125,
     127,   127,   130,   131,   134,   134,   135,   135,   137,   137,
     139,   140,   143,   144,   145,   149,   151,   152,   156,   157,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   179,   180,   187,   187,   190,   193,   195,
     198,   199,   200,   203,   206,   208,   210,   212,   214,   216,
     218,   220,   225,   227,   232,   233,   234,   235,   239,   240,
     243,   243,   245,   245,   247,   247,   249,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   254,
     255,   255,   259,   260,   261,   265,   266,   267,   270,   270,
     271,   273,   273,   276,   276,   277,   277,   279,   279,   281,
     282,   283,   284,   285,   288,   288,   289,   289,   290,   290,
     293,   301,   301,   301,   301,   301,   303,   304,   306,   308,
     310,   315,   315,   318,   319,   320,   322,   324,   325,   329,
     330,   334,   340,   348,   349,   353,   354,   355,   358,   358,
     359,   359,   359,   359,   360,   360,   361,   361,   362,   362,
     362,   363,   363,   366,   366,   367,   367,   368,   368,   369,
     369,   370,   370,   371,   371,   372,   372,   373,   373,   374,
     374,   375,   375,   377,   377,   380,   380,   381,   382,   382,
     382,   385,   385,   386,   395,   399,   399,   403,   404,   407,
     407,   409,   409,   411,   412,   412,   414,   417,   418,   421,
     422,   423,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436
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
  "TYPEDEF", "RSL", "RSR", "RSAND", "RSOR", "RSXOR", "TEMPLATE", "NOELSE",
  "LTB", "GTB", "UNION", "ATPAREN", "TYPEOF", "CONST", "AUTO", "PASTE",
  "ELLIPSE", "NUM", "FLOAT", "ID", "STRING_LIT", "CHAR_LIT", "PP_COMMENT",
  "PP_INCLUDE", "PP_DEFINE", "PP_UNDEF", "PP_IFDEF", "PP_IFNDEF",
  "PP_ELSE", "PP_ENDIF", "PP_NL", "$accept", "ast", "section", "class_def",
  "class_ext", "class_body", "class_body2", "id_list", "id_dot",
  "stmt_list", "func_type", "stmt_type", "type_decl_array", "arg",
  "arg_list", "code_stmt", "stmt", "id", "opt_id", "enum_stmt",
  "label_stmt", "goto_stmt", "case_stmt", "switch_stmt", "loop_stmt",
  "selection_stmt", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "decl_exp2",
  "decl_exp", "decl_exp3", "func_args", "arg_type", "decl_template",
  "flag", "func_flag", "type_flag", "opt_flag", "func_def_base", "op_op",
  "func_def", "atsym", "type_decl", "decl_list", "union_stmt",
  "var_decl_list", "var_decl", "eq_op", "rel_op", "shift_op", "add_op",
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
     355,   356,   357,   358,   359,   360,   361,   362,   363
};
# endif

#define YYPACT_NINF -316

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-316)))

#define YYTABLE_NINF -132

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     778,  -316,  -316,  1551,  1245,  1296,   875,  -316,  -316,  -316,
    -316,    10,    32,   972,    43,    46,    51,   -21,  1551,    26,
      62,  1120,    78,    91,  -316,  -316,    98,    84,  -316,  -316,
    -316,  -316,   -21,  -316,    84,  1653,    62,    28,    98,    62,
    -316,   101,    98,  -316,  -316,    27,  -316,  -316,   130,   487,
    -316,  -316,  -316,  -316,  -316,   972,     8,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,   128,  1663,  -316,   132,
    -316,  -316,  -316,    18,   174,    98,  -316,  -316,   -21,  -316,
    -316,    12,    72,    82,    76,    87,    41,    77,    37,    80,
     120,   126,   362,  -316,   102,  -316,  -316,     9,  1551,  -316,
     -13,   151,  1602,  -316,   153,  -316,   155,  -316,   156,  1551,
    1551,    52,  1551,  1551,  1046,   164,    84,   138,  -316,   142,
      20,   146,    62,   165,  -316,   179,  -316,  -316,  -316,   157,
     170,  -316,   127,   133,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,    98,  -316,  -316,  -316,  -316,    98,    62,
     -21,   189,   109,   -21,   -21,  -316,   -21,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  1551,  1551,  1347,  -316,    62,    62,
      98,  -316,    62,   -21,   170,  -316,   192,  1551,  1602,  1602,
    1602,  1602,  1602,  -316,  -316,  1602,  1602,  1602,  1602,  1602,
      98,    98,  -316,   125,  1551,   -21,    98,   201,  -316,  -316,
     191,  -316,  -316,   204,  -316,   206,   207,  1551,  1551,   213,
     214,   157,  1194,  -316,  -316,  -316,  -316,  -316,   -21,  -316,
    -316,   132,   157,   -21,   216,   221,   148,   228,    98,     7,
    -316,   222,   224,  -316,  -316,  -316,  -316,    62,   -21,   -21,
      45,  -316,   132,   -21,   208,    72,    82,    76,    87,    41,
      77,    37,    80,   120,   126,  -316,   231,     9,  -316,   163,
    1398,  -316,  -316,  1449,  -316,   972,   972,   241,   248,   972,
     972,   -21,  1500,   236,  -316,  -316,    98,    98,  -316,   -21,
    -316,   -21,   157,    63,   157,   195,   243,  -316,    98,     6,
    -316,  1602,    98,  -316,  -316,   244,  -316,   226,  -316,  -316,
    -316,  -316,  -316,   233,   972,   245,   -21,   262,   -21,   256,
    -316,   205,  -316,   254,   269,   257,  -316,    98,   259,     6,
     272,  -316,  -316,   266,  -316,  -316,   276,  -316,   972,  1551,
    -316,   972,   281,    98,  -316,    84,   157,   -21,    98,   -21,
    -316,   584,    84,    98,  -316,    84,  -316,  1735,  -316,  -316,
     283,  -316,  -316,   295,  -316,   299,   681,   288,  -316,  -316,
    -316,  -316,   972,    84,  -316,  -316,  -316,  -316,  -316,  -316
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     108,    69,   186,     0,     0,     0,     0,   210,   209,   190,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,   201,   202,     0,   189,   110,   111,
     112,   113,     0,   185,     0,     0,   116,     0,     0,   118,
     211,     0,     0,   213,   214,    43,   215,   216,     0,   108,
       6,     4,    40,    41,    33,    18,   212,    38,    34,    35,
      37,    36,    31,    32,    39,    30,     0,    70,   217,   218,
      72,   101,    99,     0,     0,     0,   126,     5,     0,    42,
      98,   161,   163,   165,   167,   169,   171,   173,   175,   177,
     179,   181,     0,   183,   191,   187,   208,   195,     0,   204,
     212,     0,     0,   222,     0,    95,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   208,
      75,   204,   119,     0,    64,     0,    66,    67,   193,   131,
      22,   194,     0,    16,   130,    76,   159,   158,   160,    80,
      81,    82,    83,    84,    79,    77,    85,    86,    78,   153,
     151,   152,   150,   157,   156,   154,   155,    87,    88,    89,
      90,    91,   121,     0,   123,   122,   125,   124,     0,   117,
       0,   197,     0,    46,     0,   138,     0,     1,     3,    19,
     132,    48,   133,    68,     0,     0,     0,    97,   114,   118,
       0,   102,   109,     0,   145,   100,   143,     0,     0,     0,
       0,     0,     0,   148,   149,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,     0,   205,   207,
       0,   220,   221,    92,    29,     0,     0,     0,     0,     0,
       0,   131,     0,    49,    53,    52,    51,    50,     0,    65,
      24,    23,   131,     0,     0,     0,     0,    14,     0,     0,
      45,     0,     0,    44,    71,    73,    96,   115,     0,     0,
       0,   146,   147,     0,     0,   164,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,     0,   196,   203,     0,
       0,   206,   219,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,    17,     0,     0,   107,     0,
     198,     0,   131,     0,   131,     9,     0,    21,   104,     0,
     144,     0,     0,    74,   200,     0,    94,    62,    54,    55,
      60,    59,    61,     0,     0,     0,    46,     0,     0,     0,
      15,     0,   135,     0,     0,     0,   137,     0,     0,     0,
      26,   103,   106,     0,    20,   162,     0,   199,     0,     0,
      56,     0,     0,     0,    25,     0,   131,    46,   139,    46,
       8,   108,     0,     0,   105,     0,    63,     0,    57,    47,
       0,   128,   136,     0,   140,     0,   108,     0,    10,   120,
      27,   129,     0,     0,   142,   141,    13,     7,    58,   127
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,   260,  -315,  -316,  -316,  -316,   -71,  -198,  -166,    25,
    -316,  -316,   -24,  -267,   -48,   -23,   -10,     0,  -261,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -100,   289,   -31,
    -316,   282,   186,  -106,   135,   -58,  -316,    15,   -17,  -316,
     -11,  -316,  -316,   -32,  -316,  -316,  -316,  -219,    71,   -35,
    -316,    64,    -3,  -316,   294,   296,   298,   300,    19,  -316,
     136,   137,   140,   143,   141,   144,   139,   145,   147,   161,
       1,   -20,  -316,  -182,  -316,   -30,   327,    -9,  -316,   328
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    49,    50,   338,   377,   378,   246,   132,    51,
      52,    53,   171,   340,   341,    54,    55,   100,   251,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     217,   185,    68,    69,    70,    71,    72,   309,   344,    73,
      74,   190,    75,   123,    76,   163,    77,   182,    78,   335,
      79,   195,   196,   205,   206,   207,   208,   209,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     102,    93,    94,   172,   281,    95,    96,    97,    98,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    92,   128,   111,   131,   168,    56,   173,   252,   122,
     120,   134,   291,    56,   232,   180,   191,   115,   342,   118,
     -75,   109,   214,   294,   241,   169,   129,   117,   122,   327,
     329,   108,   133,   214,   279,     3,   180,     4,   129,     5,
     293,   181,   129,   110,   197,   346,   376,   188,   307,    56,
      92,   193,     7,     8,   112,    56,   308,   113,    24,    25,
     305,   376,   114,   192,   333,   352,   300,   219,   215,    24,
      25,   189,   212,   301,   129,   129,    45,   295,   194,   215,
     179,   126,   212,   332,  -131,   336,   370,   198,   262,   227,
     219,   228,   118,   234,   127,   216,   373,   130,   375,     6,
     343,   330,   118,   203,    45,  -131,   216,   155,   156,   130,
     204,   192,   174,   175,   170,    40,    28,    29,    30,    31,
     176,    43,    44,    45,    46,    47,   136,   137,   138,    32,
     177,   183,   292,   199,     3,   331,     4,   372,     5,   244,
     149,   150,   151,   152,   245,   186,   130,   153,   154,    38,
     201,     7,     8,    41,    42,   200,   210,   258,   192,   202,
      45,   221,   213,   129,    32,   222,   259,   233,   129,   223,
     247,   235,   224,   250,   133,   236,   253,   257,   122,   237,
     238,   192,   239,     5,    38,   180,   275,   276,    41,    42,
     129,   242,   243,   260,   248,    45,   249,   263,   118,   118,
     118,   118,   118,   282,   277,   118,   118,   118,   118,   118,
     129,   129,   280,   118,    40,   278,   129,   283,   285,   286,
      43,    44,    45,    46,    47,   289,   290,   296,    28,    29,
      30,    31,   297,   299,   130,   298,   304,   303,   247,   130,
      32,   311,   312,   133,   319,   334,   192,   219,   129,   302,
     313,   320,   326,   337,   308,   187,   347,   351,   247,   306,
      38,   130,   348,   194,    41,    42,   349,   353,   355,   356,
     357,    45,   358,   359,   361,   317,   318,   363,   364,   321,
     322,   130,   130,   218,   369,    56,    56,   130,   365,    56,
      56,   323,   101,   104,   106,   383,   129,   129,   384,   247,
     334,   133,   385,   129,   387,   386,   218,   116,   129,   178,
     125,   118,   129,   360,   350,   380,   240,   162,   367,   130,
     255,   339,   362,   374,    56,   354,   250,   310,   194,   164,
     345,   165,   371,   166,   265,   167,   266,   129,   366,   379,
     267,   368,   381,   269,   268,   271,   119,   121,    56,   270,
       0,    56,   272,   129,     0,   273,     0,   250,   129,   250,
     389,    56,    92,   129,     0,     0,     0,   328,   328,     2,
     274,     3,   388,     4,     0,     5,    56,    92,     0,   328,
     261,     0,    56,   328,     0,     0,     0,   220,     7,     8,
       0,     0,     0,     9,     0,     0,    10,     0,   225,   226,
       0,   229,   230,     0,     0,     0,     0,     0,   130,   284,
       0,    24,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   328,     0,     0,   187,     0,    33,
       0,     0,     0,     0,   328,     0,     0,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,    40,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,     0,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   254,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   264,    -2,     0,     0,
       1,     0,     0,     0,     2,     0,     3,     0,     4,     0,
       5,     0,     6,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,   287,   288,     9,     0,
       0,    10,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,     0,     0,     0,   315,
       0,    37,   106,    38,     0,    39,    40,    41,    42,     0,
       0,   325,    43,    44,    45,    46,    47,     1,     0,     0,
       0,     2,     0,     3,     0,     4,     0,     5,     0,     6,
     -11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     9,     0,     0,    10,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,     0,     0,     0,     0,     0,    37,     0,
      38,     0,    39,    40,    41,    42,     0,     0,     0,    43,
      44,    45,    46,    47,     1,     0,     0,     0,     2,     0,
       3,     0,     4,     0,     5,     0,     6,   -12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,    37,     0,    38,     0,    39,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
      47,     1,     0,     0,     0,     2,     0,     3,     0,     4,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    11,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,     0,
       0,     0,    37,     0,    38,     0,    39,    40,    41,    42,
       0,     0,     0,    43,    44,    45,    46,    47,     1,     0,
       0,     0,     2,     0,     3,     0,     4,     0,     5,     0,
       6,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,     0,    10,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,     0,     0,     0,
      43,    44,    45,    46,    47,     1,     0,     0,     0,     2,
       0,     3,     0,     4,     0,     5,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      36,     0,     0,     2,     0,     3,     0,     4,    38,     5,
      39,    40,    41,    42,     0,     0,     0,    43,    44,    45,
      46,    47,     7,     8,     0,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     2,     0,     3,
       0,     4,    38,     5,     0,    40,    41,    42,   231,     0,
       0,    43,    44,    45,    46,    47,     7,     8,     0,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     2,     0,     3,     0,     4,    38,     5,     0,    40,
      41,    42,     0,     0,     0,    43,    44,    45,    46,    47,
       7,     8,     0,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,     0,    28,    29,
      30,    31,     2,     0,     3,     0,     4,   103,     5,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,     0,    10,
      38,     0,     0,    40,    41,    42,     0,     0,     0,    43,
      44,    45,    46,    47,    24,    25,    26,    27,     0,    28,
      29,    30,    31,     2,     0,     3,     0,     4,     0,     5,
     105,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,     0,     0,
      10,    38,     0,     0,    40,    41,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    24,    25,    26,    27,     0,
      28,    29,    30,    31,     2,     0,     3,     0,     4,     0,
       5,   256,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
       0,    10,    38,     0,     0,    40,    41,    42,     0,     0,
       0,    43,    44,    45,    46,    47,    24,    25,    26,    27,
       0,    28,    29,    30,    31,     2,     0,     3,     0,     4,
     314,     5,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
       0,     0,    10,    38,     0,     0,    40,    41,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    24,    25,    26,
      27,     0,    28,    29,    30,    31,     2,     0,     3,     0,
       4,     0,     5,   316,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       9,     0,     0,    10,    38,     0,     0,    40,    41,    42,
       0,     0,     0,    43,    44,    45,    46,    47,    24,    25,
      26,    27,     0,    28,    29,    30,    31,     2,     0,     3,
       0,     4,   324,     5,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,     0,     0,    10,    38,     0,     0,    40,    41,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    24,
      25,    26,    27,     0,    28,    29,    30,    31,     2,     0,
       3,     0,     4,     0,     5,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,     0,    10,    38,     0,     0,    40,
      41,    42,     0,     0,     0,    43,    44,    45,    46,    47,
      24,    25,    26,    27,     0,    28,    29,    30,    31,     2,
       0,     3,     0,     4,     0,     5,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     9,     0,     0,    10,    38,     0,     0,
      40,    41,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    24,    25,    26,    27,     0,     0,   135,     0,   136,
     137,   138,     0,     0,     0,     0,     0,   135,   184,    33,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,    40,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   148,     0,     0,     0,     0,
       0,     0,   157,   158,   159,   160,   161,     0,     0,   135,
       0,     0,   157,   158,   159,   160,   161,   382,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,   159,   160,   161
};

static const yytype_int16 yycheck[] =
{
       0,     0,    26,    13,    27,    35,     6,    39,   174,    20,
      19,    34,   231,    13,   114,    28,    74,    17,    12,    19,
      11,    11,    13,   242,   130,    36,    26,     1,    39,   296,
     297,     6,    32,    13,   216,     9,    28,    11,    38,    13,
     238,    33,    42,    11,    32,   312,   361,    29,     3,    49,
      49,    75,    26,    27,    11,    55,    11,    11,    49,    50,
     258,   376,    11,    74,     1,   326,   248,    97,    59,    49,
      50,    53,    92,    66,    74,    75,    97,   243,    78,    59,
      55,     3,   102,   302,    97,   304,   353,    75,   194,    37,
     120,    39,    92,   116,     3,    86,   357,    26,   359,    15,
      94,   299,   102,    62,    97,    97,    86,    70,    71,    38,
      69,   122,    11,    42,    86,    89,    54,    55,    56,    57,
      93,    95,    96,    97,    98,    99,     6,     7,     8,    66,
       0,     3,   232,    61,     9,   301,    11,   356,    13,   163,
      63,    64,    65,    66,   168,    13,    75,    67,    68,    86,
      74,    26,    27,    90,    91,    73,    30,   189,   169,    72,
      97,    10,    60,   163,    66,    12,   190,     3,   168,    14,
     170,    33,    16,   173,   174,    33,   176,   188,   189,    33,
      15,   192,     3,    13,    86,    28,   210,   211,    90,    91,
     190,    64,    59,   193,     5,    97,    87,     5,   198,   199,
     200,   201,   202,    12,   213,   205,   206,   207,   208,   209,
     210,   211,    11,   213,    89,   215,   216,    13,    12,    12,
      95,    96,    97,    98,    99,    12,    12,    11,    54,    55,
      56,    57,    11,     5,   163,    87,    12,    15,   238,   168,
      66,    33,    11,   243,     3,   303,   257,   277,   248,   249,
      87,     3,    16,    58,    11,    69,    12,    12,   258,   259,
      86,   190,    36,   263,    90,    91,    33,     5,    12,    64,
      16,    97,     3,    16,    15,   285,   286,     5,    12,   289,
     290,   210,   211,    97,     3,   285,   286,   216,    12,   289,
     290,   291,     3,     4,     5,    12,   296,   297,     3,   299,
     358,   301,     3,   303,    16,   376,   120,    18,   308,    49,
      21,   311,   312,   337,   324,   363,   130,    35,   349,   248,
     185,   306,   339,   358,   324,   328,   326,   263,   328,    35,
     311,    35,   355,    35,   198,    35,   199,   337,   348,   362,
     200,   351,   365,   202,   201,   206,    19,    19,   348,   205,
      -1,   351,   207,   353,    -1,   208,    -1,   357,   358,   359,
     383,   361,   361,   363,    -1,    -1,    -1,   296,   297,     7,
     209,     9,   382,    11,    -1,    13,   376,   376,    -1,   308,
     194,    -1,   382,   312,    -1,    -1,    -1,    98,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,   109,   110,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,   337,   223,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,   241,    -1,    67,
      -1,    -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,     0,    -1,    -1,
       3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,
      13,    -1,    15,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,   227,   228,    31,    -1,
      -1,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,   280,
      -1,    84,   283,    86,    -1,    88,    89,    90,    91,    -1,
      -1,   292,    95,    96,    97,    98,    99,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    -1,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,     3,    -1,    -1,    -1,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,     3,    -1,
      -1,    -1,     7,    -1,     9,    -1,    11,    -1,    13,    -1,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,     3,    -1,    -1,    -1,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      78,    -1,    -1,     7,    -1,     9,    -1,    11,    86,    13,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    86,    13,    -1,    89,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,    -1,     9,    -1,    11,    86,    13,    -1,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,     7,    -1,     9,    -1,    11,    12,    13,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,
      86,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,     7,    -1,     9,    -1,    11,    -1,    13,
      14,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    86,    -1,    -1,    89,    90,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,     7,    -1,     9,    -1,    11,    -1,
      13,    14,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,
      -1,    34,    86,    -1,    -1,    89,    90,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,     7,    -1,     9,    -1,    11,
      12,    13,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      -1,    -1,    34,    86,    -1,    -1,    89,    90,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    34,    86,    -1,    -1,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    86,    -1,    -1,    89,    90,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    86,    -1,    -1,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    86,    -1,    -1,
      89,    90,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,    49,    50,    51,    52,    -1,    -1,     4,    -1,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,     4,     5,    67,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,     4,
      -1,    -1,    79,    80,    81,    82,    83,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    11,    13,    15,    26,    27,    31,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    54,    55,
      56,    57,    66,    67,    76,    77,    78,    84,    86,    88,
      89,    90,    91,    95,    96,    97,    98,    99,   110,   111,
     112,   118,   119,   120,   124,   125,   126,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   141,   142,
     143,   144,   145,   148,   149,   151,   153,   155,   157,   159,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   184,   185,   186,   187,   188,
     126,   137,   179,    12,   137,    14,   137,    16,   118,    11,
      11,   125,    11,    11,    11,   126,   137,     1,   126,   185,
     186,   188,   149,   152,     3,   137,     3,     3,   121,   126,
     157,   124,   117,   126,   124,     4,     6,     7,     8,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    62,    63,
      64,    65,    66,    67,    68,    70,    71,    79,    80,    81,
      82,    83,   140,   154,   163,   164,   165,   166,   184,   149,
      86,   121,   182,   152,    11,   157,    93,     0,   110,   118,
      28,    33,   156,     3,     5,   140,    13,   141,    29,    53,
     150,   144,   149,   121,   126,   160,   161,    32,    75,    61,
      73,    74,    72,    62,    69,   162,   163,   164,   165,   166,
      30,    77,   180,    60,    13,    59,    86,   139,   141,   184,
     137,    10,    12,    14,    16,   137,   137,    37,    39,   137,
     137,    92,   136,     3,   124,    33,    33,    33,    15,     3,
     141,   142,    64,    59,   121,   121,   116,   126,     5,    87,
     126,   127,   117,   126,   137,   143,    14,   149,   152,   121,
     126,   141,   142,     5,   137,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   121,   121,   186,   126,   182,
      11,   183,    12,    13,   141,    12,    12,   137,   137,    12,
      12,   156,   136,   116,   156,   117,    11,    11,    87,     5,
     182,    66,   126,    15,    12,   116,   126,     3,    11,   146,
     160,    33,    11,    87,    12,   137,    14,   125,   125,     3,
       3,   125,   125,   126,    12,   137,    16,   122,   157,   122,
     116,   117,   156,     1,   144,   158,   156,    58,   113,   146,
     122,   123,    12,    94,   147,   167,   122,    12,    36,    33,
     125,    12,   127,     5,   161,    12,    64,    16,     3,    16,
     121,    15,   147,     5,    12,    12,   125,   138,   125,     3,
     122,   124,   156,   127,   158,   127,   111,   114,   115,   124,
     123,   124,    12,    12,     3,     3,   115,    16,   125,   124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   111,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   120,   121,   121,   121,   122,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   129,   130,
     131,   131,   131,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   134,   135,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   154,   154,   154,   154,   154,   155,   155,   155,   155,
     155,   156,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   161,   162,   162,
     163,   163,   163,   163,   164,   164,   165,   165,   166,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   179,   179,
     179,   180,   180,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   186,   186,   186,   186,   186,   187,
     187,   187,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     8,     2,     0,
       1,     0,     1,     2,     1,     3,     1,     3,     1,     2,
       5,     4,     1,     2,     2,     2,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     7,     2,     3,
       3,     3,     3,     3,     5,     5,     6,     7,     9,     5,
       5,     5,     5,     7,     2,     3,     2,     2,     2,     1,
       1,     3,     1,     3,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     1,     1,
       2,     1,     2,     2,     1,     2,     1,     4,     0,     2,
       1,     1,     1,     1,     1,     2,     1,     2,     0,     1,
       7,     1,     1,     1,     1,     1,     1,     9,     7,     7,
       2,     0,     1,     2,     4,     5,     7,     5,     2,     2,
       3,     8,     8,     1,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     3,     2,     1,     1,
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
          case 119: /* func_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1811 "src/parser.c" /* yacc.c:1254  */
        break;

    case 120: /* stmt_type  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1817 "src/parser.c" /* yacc.c:1254  */
        break;

    case 124: /* code_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1823 "src/parser.c" /* yacc.c:1254  */
        break;

    case 125: /* stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1829 "src/parser.c" /* yacc.c:1254  */
        break;

    case 128: /* enum_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1835 "src/parser.c" /* yacc.c:1254  */
        break;

    case 129: /* label_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1841 "src/parser.c" /* yacc.c:1254  */
        break;

    case 130: /* goto_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1847 "src/parser.c" /* yacc.c:1254  */
        break;

    case 131: /* case_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1853 "src/parser.c" /* yacc.c:1254  */
        break;

    case 132: /* switch_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1859 "src/parser.c" /* yacc.c:1254  */
        break;

    case 133: /* loop_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1865 "src/parser.c" /* yacc.c:1254  */
        break;

    case 134: /* selection_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1871 "src/parser.c" /* yacc.c:1254  */
        break;

    case 135: /* jump_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1877 "src/parser.c" /* yacc.c:1254  */
        break;

    case 136: /* exp_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1883 "src/parser.c" /* yacc.c:1254  */
        break;

    case 137: /* exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1889 "src/parser.c" /* yacc.c:1254  */
        break;

    case 138: /* binary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1895 "src/parser.c" /* yacc.c:1254  */
        break;

    case 143: /* decl_exp2  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1901 "src/parser.c" /* yacc.c:1254  */
        break;

    case 144: /* decl_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1907 "src/parser.c" /* yacc.c:1254  */
        break;

    case 145: /* decl_exp3  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1913 "src/parser.c" /* yacc.c:1254  */
        break;

    case 159: /* union_stmt  */
#line 103 "ly/gwion.y" /* yacc.c:1254  */
      { free_stmt(((*yyvaluep).stmt)); }
#line 1919 "src/parser.c" /* yacc.c:1254  */
        break;

    case 167: /* con_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1925 "src/parser.c" /* yacc.c:1254  */
        break;

    case 168: /* log_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1931 "src/parser.c" /* yacc.c:1254  */
        break;

    case 169: /* log_and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1937 "src/parser.c" /* yacc.c:1254  */
        break;

    case 170: /* inc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1943 "src/parser.c" /* yacc.c:1254  */
        break;

    case 171: /* exc_or_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1949 "src/parser.c" /* yacc.c:1254  */
        break;

    case 172: /* and_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1955 "src/parser.c" /* yacc.c:1254  */
        break;

    case 173: /* eq_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1961 "src/parser.c" /* yacc.c:1254  */
        break;

    case 174: /* rel_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1967 "src/parser.c" /* yacc.c:1254  */
        break;

    case 175: /* shift_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1973 "src/parser.c" /* yacc.c:1254  */
        break;

    case 176: /* add_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1979 "src/parser.c" /* yacc.c:1254  */
        break;

    case 177: /* mul_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1985 "src/parser.c" /* yacc.c:1254  */
        break;

    case 178: /* cast_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1991 "src/parser.c" /* yacc.c:1254  */
        break;

    case 180: /* unary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 1997 "src/parser.c" /* yacc.c:1254  */
        break;

    case 181: /* dur_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2003 "src/parser.c" /* yacc.c:1254  */
        break;

    case 183: /* call_paren  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2009 "src/parser.c" /* yacc.c:1254  */
        break;

    case 185: /* dot_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2015 "src/parser.c" /* yacc.c:1254  */
        break;

    case 186: /* post_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2021 "src/parser.c" /* yacc.c:1254  */
        break;

    case 188: /* primary_exp  */
#line 104 "ly/gwion.y" /* yacc.c:1254  */
      { free_exp(((*yyvaluep).exp)); }
#line 2027 "src/parser.c" /* yacc.c:1254  */
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
#line 108 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[0].section), NULL);  }
#line 2294 "src/parser.c" /* yacc.c:1645  */
    break;

  case 3:
#line 109 "ly/gwion.y" /* yacc.c:1645  */
    { arg->ast = (yyval.ast) = new_ast((yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2300 "src/parser.c" /* yacc.c:1645  */
    break;

  case 4:
#line 113 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_stmt_list((yyvsp[0].stmt_list)); }
#line 2306 "src/parser.c" /* yacc.c:1645  */
    break;

  case 5:
#line 114 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_func_def ((yyvsp[0].func_def)); }
#line 2312 "src/parser.c" /* yacc.c:1645  */
    break;

  case 6:
#line 115 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.section) = new_section_class_def((yyvsp[0].class_def)); }
#line 2318 "src/parser.c" /* yacc.c:1645  */
    break;

  case 7:
#line 120 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_def) = new_class_def((yyvsp[-5].flag), (yyvsp[-4].id_list), (yyvsp[-3].type_decl), (yyvsp[-1].class_body));
      if((yyvsp[-7].id_list))
        (yyval.class_def)->tmpl = new_tmpl_class((yyvsp[-7].id_list), -1);
  }
#line 2327 "src/parser.c" /* yacc.c:1645  */
    break;

  case 8:
#line 125 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2333 "src/parser.c" /* yacc.c:1645  */
    break;

  case 9:
#line 125 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = NULL; }
#line 2339 "src/parser.c" /* yacc.c:1645  */
    break;

  case 11:
#line 127 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = NULL; }
#line 2345 "src/parser.c" /* yacc.c:1645  */
    break;

  case 12:
#line 130 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[0].section), NULL); }
#line 2351 "src/parser.c" /* yacc.c:1645  */
    break;

  case 13:
#line 131 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.class_body) = new_class_body((yyvsp[-1].section), (yyvsp[0].class_body)); }
#line 2357 "src/parser.c" /* yacc.c:1645  */
    break;

  case 14:
#line 134 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2363 "src/parser.c" /* yacc.c:1645  */
    break;

  case 15:
#line 134 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2369 "src/parser.c" /* yacc.c:1645  */
    break;

  case 16:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = new_id_list((yyvsp[0].sym), get_pos(arg)); }
#line 2375 "src/parser.c" /* yacc.c:1645  */
    break;

  case 17:
#line 135 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = prepend_id_list((yyvsp[-2].sym), (yyvsp[0].id_list), get_pos(arg)); }
#line 2381 "src/parser.c" /* yacc.c:1645  */
    break;

  case 18:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[0].stmt), NULL);}
#line 2387 "src/parser.c" /* yacc.c:1645  */
    break;

  case 19:
#line 137 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt_list) = new_stmt_list((yyvsp[-1].stmt), (yyvsp[0].stmt_list));}
#line 2393 "src/parser.c" /* yacc.c:1645  */
    break;

  case 20:
#line 139 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_fptr((yyvsp[-2].sym), (yyvsp[-3].type_decl), (yyvsp[-1].arg_list), (yyvsp[0].flag)); (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag); }
#line 2399 "src/parser.c" /* yacc.c:1645  */
    break;

  case 21:
#line 140 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_type((yyvsp[-2].type_decl), (yyvsp[-1].sym)); (yyvsp[-2].type_decl)->flag |= (yyvsp[-3].flag); }
#line 2405 "src/parser.c" /* yacc.c:1645  */
    break;

  case 23:
#line 144 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2411 "src/parser.c" /* yacc.c:1645  */
    break;

  case 24:
#line 145 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = add_type_decl_array((yyvsp[-1].type_decl), (yyvsp[0].array_sub)); }
#line 2417 "src/parser.c" /* yacc.c:1645  */
    break;

  case 25:
#line 149 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = new_arg_list((yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2423 "src/parser.c" /* yacc.c:1645  */
    break;

  case 26:
#line 151 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2429 "src/parser.c" /* yacc.c:1645  */
    break;

  case 27:
#line 152 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2435 "src/parser.c" /* yacc.c:1645  */
    break;

  case 28:
#line 156 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_code, get_pos(arg)); }
#line 2441 "src/parser.c" /* yacc.c:1645  */
    break;

  case 29:
#line 157 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_code((yyvsp[-1].stmt_list)); }
#line 2447 "src/parser.c" /* yacc.c:1645  */
    break;

  case 43:
#line 179 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2453 "src/parser.c" /* yacc.c:1645  */
    break;

  case 44:
#line 180 "ly/gwion.y" /* yacc.c:1645  */
    {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2463 "src/parser.c" /* yacc.c:1645  */
    break;

  case 46:
#line 187 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.sym) = NULL; }
#line 2469 "src/parser.c" /* yacc.c:1645  */
    break;

  case 47:
#line 190 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_enum((yyvsp[-3].id_list), (yyvsp[-1].sym));
    (yyval.stmt)->d.stmt_enum.flag = (yyvsp[-5].flag); }
#line 2476 "src/parser.c" /* yacc.c:1645  */
    break;

  case 48:
#line 193 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 1, get_pos(arg)); }
#line 2482 "src/parser.c" /* yacc.c:1645  */
    break;

  case 49:
#line 195 "ly/gwion.y" /* yacc.c:1645  */
    {  (yyval.stmt) = new_stmt_jump((yyvsp[-1].sym), 0, get_pos(arg)); }
#line 2488 "src/parser.c" /* yacc.c:1645  */
    break;

  case 50:
#line 198 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2494 "src/parser.c" /* yacc.c:1645  */
    break;

  case 51:
#line 199 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_case, (yyvsp[-1].exp)); }
#line 2500 "src/parser.c" /* yacc.c:1645  */
    break;

  case 52:
#line 200 "ly/gwion.y" /* yacc.c:1645  */
    { gw_err("unhandled expression type in case statement.\n"); (yyval.stmt)=NULL;YYERROR ; }
#line 2506 "src/parser.c" /* yacc.c:1645  */
    break;

  case 53:
#line 203 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_switch((yyvsp[-1].exp), (yyvsp[0].stmt));}
#line 2512 "src/parser.c" /* yacc.c:1645  */
    break;

  case 54:
#line 207 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2518 "src/parser.c" /* yacc.c:1645  */
    break;

  case 55:
#line 209 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_while, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2524 "src/parser.c" /* yacc.c:1645  */
    break;

  case 56:
#line 211 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2530 "src/parser.c" /* yacc.c:1645  */
    break;

  case 57:
#line 213 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_for((yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2536 "src/parser.c" /* yacc.c:1645  */
    break;

  case 58:
#line 215 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_auto((yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2542 "src/parser.c" /* yacc.c:1645  */
    break;

  case 59:
#line 217 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2548 "src/parser.c" /* yacc.c:1645  */
    break;

  case 60:
#line 219 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_flow(ae_stmt_until, (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2554 "src/parser.c" /* yacc.c:1645  */
    break;

  case 61:
#line 221 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_loop((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2560 "src/parser.c" /* yacc.c:1645  */
    break;

  case 62:
#line 226 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2566 "src/parser.c" /* yacc.c:1645  */
    break;

  case 63:
#line 228 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_if((yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2572 "src/parser.c" /* yacc.c:1645  */
    break;

  case 64:
#line 232 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_return, get_pos(arg)); (yyval.stmt)->d.stmt_exp.self = (yyval.stmt); }
#line 2578 "src/parser.c" /* yacc.c:1645  */
    break;

  case 65:
#line 233 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_return, (yyvsp[-1].exp)); }
#line 2584 "src/parser.c" /* yacc.c:1645  */
    break;

  case 66:
#line 234 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_break, get_pos(arg)); }
#line 2590 "src/parser.c" /* yacc.c:1645  */
    break;

  case 67:
#line 235 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_continue, get_pos(arg)); }
#line 2596 "src/parser.c" /* yacc.c:1645  */
    break;

  case 68:
#line 239 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt_exp(ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2602 "src/parser.c" /* yacc.c:1645  */
    break;

  case 69:
#line 240 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.stmt) = new_stmt(ae_stmt_exp, get_pos(arg)); }
#line 2608 "src/parser.c" /* yacc.c:1645  */
    break;

  case 71:
#line 243 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2614 "src/parser.c" /* yacc.c:1645  */
    break;

  case 73:
#line 245 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 2620 "src/parser.c" /* yacc.c:1645  */
    break;

  case 74:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2626 "src/parser.c" /* yacc.c:1645  */
    break;

  case 75:
#line 247 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = NULL; }
#line 2632 "src/parser.c" /* yacc.c:1645  */
    break;

  case 76:
#line 249 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_chuck; }
#line 2638 "src/parser.c" /* yacc.c:1645  */
    break;

  case 77:
#line 249 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_unchuck; }
#line 2644 "src/parser.c" /* yacc.c:1645  */
    break;

  case 78:
#line 249 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 2650 "src/parser.c" /* yacc.c:1645  */
    break;

  case 79:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ref; }
#line 2656 "src/parser.c" /* yacc.c:1645  */
    break;

  case 80:
#line 250 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_radd; }
#line 2662 "src/parser.c" /* yacc.c:1645  */
    break;

  case 81:
#line 251 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsub; }
#line 2668 "src/parser.c" /* yacc.c:1645  */
    break;

  case 82:
#line 251 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmul; }
#line 2674 "src/parser.c" /* yacc.c:1645  */
    break;

  case 83:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rdiv; }
#line 2680 "src/parser.c" /* yacc.c:1645  */
    break;

  case 84:
#line 252 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rmod; }
#line 2686 "src/parser.c" /* yacc.c:1645  */
    break;

  case 85:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_trig; }
#line 2692 "src/parser.c" /* yacc.c:1645  */
    break;

  case 86:
#line 253 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_untrig; }
#line 2698 "src/parser.c" /* yacc.c:1645  */
    break;

  case 87:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsl; }
#line 2704 "src/parser.c" /* yacc.c:1645  */
    break;

  case 88:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsr; }
#line 2710 "src/parser.c" /* yacc.c:1645  */
    break;

  case 89:
#line 254 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsand; }
#line 2716 "src/parser.c" /* yacc.c:1645  */
    break;

  case 90:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsor; }
#line 2722 "src/parser.c" /* yacc.c:1645  */
    break;

  case 91:
#line 255 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_rsxor; }
#line 2728 "src/parser.c" /* yacc.c:1645  */
    break;

  case 92:
#line 259 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub((yyvsp[-1].exp)); }
#line 2734 "src/parser.c" /* yacc.c:1645  */
    break;

  case 93:
#line 260 "ly/gwion.y" /* yacc.c:1645  */
    { if((yyvsp[-2].exp)->next){ gwion_error(arg, "invalid format for array init [...][...]..."); free_exp((yyvsp[-2].exp)); free_array_sub((yyvsp[0].array_sub)); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2740 "src/parser.c" /* yacc.c:1645  */
    break;

  case 94:
#line 261 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [...][]..."); free_exp((yyvsp[-3].exp)); YYERROR; }
#line 2746 "src/parser.c" /* yacc.c:1645  */
    break;

  case 95:
#line 265 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = new_array_sub(NULL); }
#line 2752 "src/parser.c" /* yacc.c:1645  */
    break;

  case 96:
#line 266 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2758 "src/parser.c" /* yacc.c:1645  */
    break;

  case 97:
#line 267 "ly/gwion.y" /* yacc.c:1645  */
    { gwion_error(arg, "partially empty array init [][...]"); free_array_sub((yyvsp[-1].array_sub)); free_array_sub((yyvsp[0].array_sub)); YYERROR; }
#line 2764 "src/parser.c" /* yacc.c:1645  */
    break;

  case 100:
#line 271 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp)= new_exp_decl((yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2770 "src/parser.c" /* yacc.c:1645  */
    break;

  case 102:
#line 273 "ly/gwion.y" /* yacc.c:1645  */
    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2776 "src/parser.c" /* yacc.c:1645  */
    break;

  case 103:
#line 276 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2782 "src/parser.c" /* yacc.c:1645  */
    break;

  case 104:
#line 276 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.arg_list) = NULL; }
#line 2788 "src/parser.c" /* yacc.c:1645  */
    break;

  case 105:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_variadic; }
#line 2794 "src/parser.c" /* yacc.c:1645  */
    break;

  case 106:
#line 277 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2800 "src/parser.c" /* yacc.c:1645  */
    break;

  case 107:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2806 "src/parser.c" /* yacc.c:1645  */
    break;

  case 108:
#line 279 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.id_list) = NULL; }
#line 2812 "src/parser.c" /* yacc.c:1645  */
    break;

  case 109:
#line 281 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2818 "src/parser.c" /* yacc.c:1645  */
    break;

  case 110:
#line 282 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_static; }
#line 2824 "src/parser.c" /* yacc.c:1645  */
    break;

  case 111:
#line 283 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_global; }
#line 2830 "src/parser.c" /* yacc.c:1645  */
    break;

  case 112:
#line 284 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_private; }
#line 2836 "src/parser.c" /* yacc.c:1645  */
    break;

  case 113:
#line 285 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = ae_flag_protect; }
#line 2842 "src/parser.c" /* yacc.c:1645  */
    break;

  case 114:
#line 288 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2848 "src/parser.c" /* yacc.c:1645  */
    break;

  case 115:
#line 288 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2854 "src/parser.c" /* yacc.c:1645  */
    break;

  case 116:
#line 289 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2860 "src/parser.c" /* yacc.c:1645  */
    break;

  case 117:
#line 289 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2866 "src/parser.c" /* yacc.c:1645  */
    break;

  case 118:
#line 290 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = 0; }
#line 2872 "src/parser.c" /* yacc.c:1645  */
    break;

  case 119:
#line 290 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.flag) = (yyvsp[0].flag); }
#line 2878 "src/parser.c" /* yacc.c:1645  */
    break;

  case 120:
#line 294 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[0].stmt), (yyvsp[-5].flag) | (yyvsp[-1].flag));
    if((yyvsp[-6].id_list)) {
      SET_FLAG((yyval.func_def), template);
      (yyval.func_def)->tmpl = new_tmpl_list((yyvsp[-6].id_list), -1);
    }
  }
#line 2889 "src/parser.c" /* yacc.c:1645  */
    break;

  case 127:
#line 305 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-6].type_decl), OP_SYM((yyvsp[-7].ival)), (yyvsp[-4].arg_list), (yyvsp[0].stmt), ae_flag_op); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 2895 "src/parser.c" /* yacc.c:1645  */
    break;

  case 128:
#line 307 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-5].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op); }
#line 2901 "src/parser.c" /* yacc.c:1645  */
    break;

  case 129:
#line 309 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def((yyvsp[-4].type_decl), OP_SYM((yyvsp[-6].ival)), (yyvsp[-2].arg_list), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary); }
#line 2907 "src/parser.c" /* yacc.c:1645  */
    break;

  case 130:
#line 311 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.func_def) = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, (yyvsp[0].stmt), ae_flag_dtor); }
#line 2914 "src/parser.c" /* yacc.c:1645  */
    break;

  case 131:
#line 315 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = 0; }
#line 2920 "src/parser.c" /* yacc.c:1645  */
    break;

  case 132:
#line 315 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_flag_ref; }
#line 2926 "src/parser.c" /* yacc.c:1645  */
    break;

  case 133:
#line 318 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl(new_id_list((yyvsp[-1].sym), get_pos(arg)), (yyvsp[0].ival)); }
#line 2932 "src/parser.c" /* yacc.c:1645  */
    break;

  case 134:
#line 319 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2938 "src/parser.c" /* yacc.c:1645  */
    break;

  case 135:
#line 320 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl(new_id_list((yyvsp[-1].sym), get_pos(arg)),
      (yyvsp[0].ival)); (yyval.type_decl)->types = (yyvsp[-3].type_list); }
#line 2945 "src/parser.c" /* yacc.c:1645  */
    break;

  case 136:
#line 322 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl((yyvsp[-2].id_list), (yyvsp[0].ival));
      (yyval.type_decl)->types = (yyvsp[-5].type_list); }
#line 2952 "src/parser.c" /* yacc.c:1645  */
    break;

  case 137:
#line 324 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_decl) = new_type_decl2((yyvsp[-2].id_list), (yyvsp[0].ival)); }
#line 2958 "src/parser.c" /* yacc.c:1645  */
    break;

  case 138:
#line 325 "ly/gwion.y" /* yacc.c:1645  */
    { CHECK_FLAG(arg, (yyvsp[0].type_decl), const); (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2964 "src/parser.c" /* yacc.c:1645  */
    break;

  case 139:
#line 329 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-1].exp), NULL); }
#line 2970 "src/parser.c" /* yacc.c:1645  */
    break;

  case 140:
#line 330 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.decl_list) = new_decl_list((yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2976 "src/parser.c" /* yacc.c:1645  */
    break;

  case 141:
#line 334 "ly/gwion.y" /* yacc.c:1645  */
    {
      (yyval.stmt) = new_stmt_union((yyvsp[-3].decl_list), get_pos(arg));
      (yyval.stmt)->d.stmt_union.type_xid = (yyvsp[-5].sym);
      (yyval.stmt)->d.stmt_union.xid = (yyvsp[-1].sym);
      (yyval.stmt)->d.stmt_union.flag = (yyvsp[-6].flag);
    }
#line 2987 "src/parser.c" /* yacc.c:1645  */
    break;

  case 142:
#line 340 "ly/gwion.y" /* yacc.c:1645  */
    {
    err_msg(get_pos(arg), "Unions should only contain declarations.");
    (yyval.stmt)=NULL;
    YYERROR;
    }
#line 2997 "src/parser.c" /* yacc.c:1645  */
    break;

  case 143:
#line 348 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[0].var_decl), NULL); }
#line 3003 "src/parser.c" /* yacc.c:1645  */
    break;

  case 144:
#line 349 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl_list) = new_var_decl_list((yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3009 "src/parser.c" /* yacc.c:1645  */
    break;

  case 145:
#line 353 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[0].sym), NULL, get_pos(arg)); }
#line 3015 "src/parser.c" /* yacc.c:1645  */
    break;

  case 146:
#line 354 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3021 "src/parser.c" /* yacc.c:1645  */
    break;

  case 147:
#line 355 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.var_decl) = new_var_decl((yyvsp[-1].sym),   (yyvsp[0].array_sub), get_pos(arg)); }
#line 3027 "src/parser.c" /* yacc.c:1645  */
    break;

  case 148:
#line 358 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_eq; }
#line 3033 "src/parser.c" /* yacc.c:1645  */
    break;

  case 149:
#line 358 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ne; }
#line 3039 "src/parser.c" /* yacc.c:1645  */
    break;

  case 150:
#line 359 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_lt; }
#line 3045 "src/parser.c" /* yacc.c:1645  */
    break;

  case 151:
#line 359 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_gt; }
#line 3051 "src/parser.c" /* yacc.c:1645  */
    break;

  case 152:
#line 359 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_le; }
#line 3057 "src/parser.c" /* yacc.c:1645  */
    break;

  case 153:
#line 359 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_ge; }
#line 3063 "src/parser.c" /* yacc.c:1645  */
    break;

  case 154:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shl; }
#line 3069 "src/parser.c" /* yacc.c:1645  */
    break;

  case 155:
#line 360 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_shr; }
#line 3075 "src/parser.c" /* yacc.c:1645  */
    break;

  case 156:
#line 361 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_add; }
#line 3081 "src/parser.c" /* yacc.c:1645  */
    break;

  case 157:
#line 361 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3087 "src/parser.c" /* yacc.c:1645  */
    break;

  case 158:
#line 362 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3093 "src/parser.c" /* yacc.c:1645  */
    break;

  case 159:
#line 362 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_div; }
#line 3099 "src/parser.c" /* yacc.c:1645  */
    break;

  case 160:
#line 362 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mod; }
#line 3105 "src/parser.c" /* yacc.c:1645  */
    break;

  case 162:
#line 364 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_if((yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3111 "src/parser.c" /* yacc.c:1645  */
    break;

  case 164:
#line 366 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_or, (yyvsp[0].exp)); }
#line 3117 "src/parser.c" /* yacc.c:1645  */
    break;

  case 166:
#line 367 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_and, (yyvsp[0].exp)); }
#line 3123 "src/parser.c" /* yacc.c:1645  */
    break;

  case 168:
#line 368 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sor, (yyvsp[0].exp)); }
#line 3129 "src/parser.c" /* yacc.c:1645  */
    break;

  case 170:
#line 369 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sxor, (yyvsp[0].exp)); }
#line 3135 "src/parser.c" /* yacc.c:1645  */
    break;

  case 172:
#line 370 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), op_sand, (yyvsp[0].exp)); }
#line 3141 "src/parser.c" /* yacc.c:1645  */
    break;

  case 174:
#line 371 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3147 "src/parser.c" /* yacc.c:1645  */
    break;

  case 176:
#line 372 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3153 "src/parser.c" /* yacc.c:1645  */
    break;

  case 178:
#line 373 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3159 "src/parser.c" /* yacc.c:1645  */
    break;

  case 180:
#line 374 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3165 "src/parser.c" /* yacc.c:1645  */
    break;

  case 182:
#line 375 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_binary((yyvsp[-2].exp), (yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3171 "src/parser.c" /* yacc.c:1645  */
    break;

  case 184:
#line 378 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_cast((yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3177 "src/parser.c" /* yacc.c:1645  */
    break;

  case 185:
#line 380 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_sub; }
#line 3183 "src/parser.c" /* yacc.c:1645  */
    break;

  case 186:
#line 380 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_mul; }
#line 3189 "src/parser.c" /* yacc.c:1645  */
    break;

  case 188:
#line 382 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_not; }
#line 3195 "src/parser.c" /* yacc.c:1645  */
    break;

  case 189:
#line 382 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_spork; }
#line 3201 "src/parser.c" /* yacc.c:1645  */
    break;

  case 190:
#line 382 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_cmp; }
#line 3207 "src/parser.c" /* yacc.c:1645  */
    break;

  case 192:
#line 385 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary((yyvsp[-1].ival), (yyvsp[0].exp)); }
#line 3213 "src/parser.c" /* yacc.c:1645  */
    break;

  case 193:
#line 387 "ly/gwion.y" /* yacc.c:1645  */
    {
      if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp) {
        free_type_decl((yyvsp[0].type_decl));
        gwion_error(arg, "can't use empty '[]' in 'new' expression");
        YYERROR;
      }
      (yyval.exp) = new_exp_unary2(op_new, (yyvsp[0].type_decl));
    }
#line 3226 "src/parser.c" /* yacc.c:1645  */
    break;

  case 194:
#line 396 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_unary3(op_spork, (yyvsp[0].stmt)); }
#line 3232 "src/parser.c" /* yacc.c:1645  */
    break;

  case 196:
#line 400 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dur((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3238 "src/parser.c" /* yacc.c:1645  */
    break;

  case 197:
#line 403 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[0].type_decl), NULL); }
#line 3244 "src/parser.c" /* yacc.c:1645  */
    break;

  case 198:
#line 404 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.type_list) = new_type_list((yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3250 "src/parser.c" /* yacc.c:1645  */
    break;

  case 199:
#line 407 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[-1].exp); }
#line 3256 "src/parser.c" /* yacc.c:1645  */
    break;

  case 200:
#line 407 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = NULL; }
#line 3262 "src/parser.c" /* yacc.c:1645  */
    break;

  case 201:
#line 409 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_inc; }
#line 3268 "src/parser.c" /* yacc.c:1645  */
    break;

  case 202:
#line 409 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = op_dec; }
#line 3274 "src/parser.c" /* yacc.c:1645  */
    break;

  case 203:
#line 411 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_dot((yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3280 "src/parser.c" /* yacc.c:1645  */
    break;

  case 205:
#line 413 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_array((yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3286 "src/parser.c" /* yacc.c:1645  */
    break;

  case 206:
#line 415 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_call((yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call((yyvsp[-1].type_list)); }
#line 3293 "src/parser.c" /* yacc.c:1645  */
    break;

  case 207:
#line 418 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_post((yyvsp[-1].exp), (yyvsp[0].ival)); }
#line 3299 "src/parser.c" /* yacc.c:1645  */
    break;

  case 208:
#line 418 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = (yyvsp[0].exp); }
#line 3305 "src/parser.c" /* yacc.c:1645  */
    break;

  case 209:
#line 421 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_complex; }
#line 3311 "src/parser.c" /* yacc.c:1645  */
    break;

  case 210:
#line 422 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_polar;   }
#line 3317 "src/parser.c" /* yacc.c:1645  */
    break;

  case 211:
#line 423 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.ival) = ae_primary_vec;     }
#line 3323 "src/parser.c" /* yacc.c:1645  */
    break;

  case 212:
#line 426 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_id(     (yyvsp[0].sym), get_pos(arg)); }
#line 3329 "src/parser.c" /* yacc.c:1645  */
    break;

  case 213:
#line 427 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_int(    (yyvsp[0].lval), get_pos(arg)); }
#line 3335 "src/parser.c" /* yacc.c:1645  */
    break;

  case 214:
#line 428 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_float(  (yyvsp[0].fval), get_pos(arg)); }
#line 3341 "src/parser.c" /* yacc.c:1645  */
    break;

  case 215:
#line 429 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_string( (yyvsp[0].sval), get_pos(arg)); }
#line 3347 "src/parser.c" /* yacc.c:1645  */
    break;

  case 216:
#line 430 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_char(   (yyvsp[0].sval), get_pos(arg)); }
#line 3353 "src/parser.c" /* yacc.c:1645  */
    break;

  case 217:
#line 431 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3359 "src/parser.c" /* yacc.c:1645  */
    break;

  case 218:
#line 432 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_array(  (yyvsp[0].array_sub), get_pos(arg)); }
#line 3365 "src/parser.c" /* yacc.c:1645  */
    break;

  case 219:
#line 433 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_vec((yyvsp[-2].ival), (yyvsp[-1].exp)); }
#line 3371 "src/parser.c" /* yacc.c:1645  */
    break;

  case 220:
#line 434 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_hack(   (yyvsp[-1].exp)); }
#line 3377 "src/parser.c" /* yacc.c:1645  */
    break;

  case 221:
#line 435 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) =                      (yyvsp[-1].exp);                }
#line 3383 "src/parser.c" /* yacc.c:1645  */
    break;

  case 222:
#line 436 "ly/gwion.y" /* yacc.c:1645  */
    { (yyval.exp) = new_exp_prim_nil(        get_pos(arg)); }
#line 3389 "src/parser.c" /* yacc.c:1645  */
    break;


#line 3393 "src/parser.c" /* yacc.c:1645  */
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
#line 438 "ly/gwion.y" /* yacc.c:1903  */

