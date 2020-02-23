/* A Bison parser, made by GNU Bison 3.5.2.  */

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
#define YYBISON_VERSION "3.5.2"

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
#line 7 "src/gwion.y"

#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(loc_t, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 93 "src/parser.c"

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
    MATCH = 278,
    CASE = 279,
    WHEN = 280,
    WHERE = 281,
    ENUM = 282,
    TRETURN = 283,
    BREAK = 284,
    CONTINUE = 285,
    CLASS = 286,
    STATIC = 287,
    GLOBAL = 288,
    PRIVATE = 289,
    PROTECT = 290,
    EXTENDS = 291,
    DOT = 292,
    OPERATOR = 293,
    TYPEDEF = 294,
    NOELSE = 295,
    UNION = 296,
    CONSTT = 297,
    AUTO = 298,
    PASTE = 299,
    ELLIPSE = 300,
    RARROW = 301,
    BACKSLASH = 302,
    BACKTICK = 303,
    NUM = 304,
    FLOATT = 305,
    ID = 306,
    STRING_LIT = 307,
    CHAR_LIT = 308,
    INTERP_LIT = 309,
    INTERP_EXP = 310,
    PP_COMMENT = 311,
    PP_INCLUDE = 312,
    PP_DEFINE = 313,
    PP_PRAGMA = 314,
    PP_UNDEF = 315,
    PP_IFDEF = 316,
    PP_IFNDEF = 317,
    PP_ELSE = 318,
    PP_ENDIF = 319,
    PP_NL = 320,
    PLUS = 321,
    PLUSPLUS = 322,
    MINUS = 323,
    MINUSMINUS = 324,
    TIMES = 325,
    DIVIDE = 326,
    PERCENT = 327,
    DOLLAR = 328,
    QUESTION = 329,
    COLON = 330,
    COLONCOLON = 331,
    QUESTIONCOLON = 332,
    ATSYM = 333,
    GTPAREN = 334,
    LTPAREN = 335,
    NEW = 336,
    SPORK = 337,
    FORK = 338,
    TYPEOF = 339,
    L_HACK = 340,
    R_HACK = 341,
    AND = 342,
    EQ = 343,
    GE = 344,
    GT = 345,
    LE = 346,
    LT = 347,
    NEQ = 348,
    SHIFT_LEFT = 349,
    SHIFT_RIGHT = 350,
    S_AND = 351,
    S_OR = 352,
    S_XOR = 353,
    OR = 354,
    LTMPL = 355,
    RTMPL = 356,
    TILDA = 357,
    EXCLAMATION = 358,
    DYNOP = 359,
    UMINUS = 360,
    UTIMES = 361
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
#define MATCH 278
#define CASE 279
#define WHEN 280
#define WHERE 281
#define ENUM 282
#define TRETURN 283
#define BREAK 284
#define CONTINUE 285
#define CLASS 286
#define STATIC 287
#define GLOBAL 288
#define PRIVATE 289
#define PROTECT 290
#define EXTENDS 291
#define DOT 292
#define OPERATOR 293
#define TYPEDEF 294
#define NOELSE 295
#define UNION 296
#define CONSTT 297
#define AUTO 298
#define PASTE 299
#define ELLIPSE 300
#define RARROW 301
#define BACKSLASH 302
#define BACKTICK 303
#define NUM 304
#define FLOATT 305
#define ID 306
#define STRING_LIT 307
#define CHAR_LIT 308
#define INTERP_LIT 309
#define INTERP_EXP 310
#define PP_COMMENT 311
#define PP_INCLUDE 312
#define PP_DEFINE 313
#define PP_PRAGMA 314
#define PP_UNDEF 315
#define PP_IFDEF 316
#define PP_IFNDEF 317
#define PP_ELSE 318
#define PP_ENDIF 319
#define PP_NL 320
#define PLUS 321
#define PLUSPLUS 322
#define MINUS 323
#define MINUSMINUS 324
#define TIMES 325
#define DIVIDE 326
#define PERCENT 327
#define DOLLAR 328
#define QUESTION 329
#define COLON 330
#define COLONCOLON 331
#define QUESTIONCOLON 332
#define ATSYM 333
#define GTPAREN 334
#define LTPAREN 335
#define NEW 336
#define SPORK 337
#define FORK 338
#define TYPEOF 339
#define L_HACK 340
#define R_HACK 341
#define AND 342
#define EQ 343
#define GE 344
#define GT 345
#define LE 346
#define LT 347
#define NEQ 348
#define SHIFT_LEFT 349
#define SHIFT_RIGHT 350
#define S_AND 351
#define S_OR 352
#define S_XOR 353
#define OR 354
#define LTMPL 355
#define RTMPL 356
#define TILDA 357
#define EXCLAMATION 358
#define DYNOP 359
#define UMINUS 360
#define UTIMES 361

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Range* range;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Def class_def;
  Ast ast;

#line 387 "src/parser.c"

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
#define YYFINAL  198
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2030

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

#define YYUNDEFTOK  2
#define YYMAXUTOK   362


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   159,   165,   165,   167,   167,   170,   171,
     174,   174,   175,   175,   177,   177,   179,   181,   184,   191,
     198,   198,   200,   204,   208,   209,   209,   210,   211,   211,
     218,   219,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   248,   249,   256,   256,   259,   262,   264,   266,   266,
     269,   277,   278,   280,   280,   282,   290,   291,   294,   296,
     298,   300,   302,   304,   309,   311,   316,   317,   318,   321,
     322,   326,   327,   330,   330,   332,   332,   334,   334,   336,
     336,   336,   339,   340,   341,   345,   346,   347,   351,   352,
     353,   356,   356,   357,   357,   358,   360,   361,   362,   362,
     364,   364,   365,   365,   366,   366,   368,   368,   370,   371,
     374,   375,   378,   379,   380,   383,   383,   386,   389,   389,
     389,   389,   389,   392,   393,   395,   397,   399,   409,   409,
     410,   410,   413,   414,   418,   419,   423,   426,   427,   429,
     430,   433,   453,   454,   457,   458,   460,   461,   462,   463,
     464,   465,   467,   467,   468,   468,   468,   468,   469,   469,
     470,   470,   471,   471,   471,   473,   473,   474,   475,   477,
     480,   480,   481,   481,   482,   482,   483,   483,   484,   484,
     485,   485,   486,   486,   487,   487,   488,   488,   489,   489,
     490,   490,   492,   493,   493,   495,   495,   498,   498,   498,
     499,   499,   499,   499,   502,   502,   503,   504,   505,   508,
     509,   510,   510,   513,   514,   517,   517,   519,   519,   521,
     522,   523,   525,   527,   530,   531,   534,   535,   536,   538,
     539,   541,   550,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567
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
  "\"repeat\"", "\"for\"", "\"goto\"", "\"match\"", "\"case\"", "\"when\"",
  "\"where\"", "\"enum\"", "\"return\"", "\"break\"", "\"continue\"",
  "\"class\"", "\"static\"", "\"global\"", "\"private\"", "\"protect\"",
  "\"extends\"", "\".\"", "\"operator\"", "\"typedef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"->\"",
  "\"\\\\\"", "\"`\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"<interp string>\"",
  "INTERP_EXP", "\"<comment>\"", "\"#include\"", "\"#define\"",
  "\"#pragma\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"",
  "\"#if\"", "\"\\n\"", "\"+\"", "\"++\"", "\"-\"", "\"--\"", "\"*\"",
  "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"", "\"?:\"", "\"@\"",
  "\">(\"", "\"<(\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"",
  "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"",
  "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"",
  "\"||\"", "\"<~\"", "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"",
  "UMINUS", "UTIMES", "\"=\"", "$accept", "prg", "ast", "section",
  "class_def", "class_ext", "class_body", "class_body2", "id_list",
  "dot_decl", "stmt_list", "fptr_base", "fdef_base", "fptr_def",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt",
  "id", "opt_id", "enum_def", "label_stmt", "goto_stmt", "when_exp",
  "match_case_stmt", "match_list", "where_stmt", "match_stmt", "flow",
  "loop_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "range",
  "array", "decl_exp2", "decl_exp", "union_exp", "decl_exp3", "func_args",
  "fptr_args", "arg_type", "decl_template", "storage_flag", "access_flag",
  "flag", "opt_flag", "func_def_base", "op_op", "func_def", "atsym",
  "decl_flag", "type_decl000", "type_decl00", "type_decl0", "type_decl",
  "decl_list", "union_def", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "_typeof_exp", "typeof_exp", "cast_exp",
  "unary_op", "unary_exp", "lambda_list", "lambda_arg", "type_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "vec_type", "interp_exp",
  "interp", "prim_exp", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362
};
# endif

#define YYPACT_NINF (-348)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-154)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     726,  -348,  1173,  1092,   827,  -348,  -348,  -348,   114,    68,
    -348,   928,  -348,    84,    92,    25,  1821,   114,  1821,  -348,
    -348,     2,  -348,  -348,  -348,  -348,   119,   114,   114,    -6,
     -36,    25,  1254,  -348,  -348,    63,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,    25,  1821,   -15,   101,   101,   112,  1821,   -15,
    -348,  -348,   126,  -348,   726,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,   928,    37,  -348,  -348,  -348,  -348,   122,  -348,
    -348,   116,  -348,  -348,   129,    16,  -348,   143,  -348,  -348,
    -348,  -348,  -348,    28,  -348,   -15,  -348,  -348,  -348,   -36,
    -348,    25,  -348,  -348,    29,    70,    61,    62,    65,   -32,
      90,    43,   -20,    71,    86,   -21,  -348,    91,   464,  -348,
     101,  -348,  -348,    44,  1821,  -348,  -348,   -23,   160,  1927,
    -348,  1821,    11,  -348,   157,  -348,   -15,  1821,    73,  1821,
     620,   167,   162,   163,   171,    25,   114,  -348,  -348,  -348,
    -348,  -348,    25,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,   -15,  -348,  -348,  -348,  -348,   -15,   -15,
       2,   130,  -348,  -348,  -348,  -348,  -348,    25,    25,  -348,
    -348,   128,  -348,  1254,    25,   186,   192,   193,  -348,  -348,
     191,  -348,  -348,  1821,   117,  -348,   198,   103,  -348,  -348,
    -348,    25,  -348,  1821,  -348,  -348,  1821,  1821,  1335,  -348,
    -348,  -348,  -348,   191,  -348,   201,  1821,  1902,  1902,  1902,
    1902,  1902,  1902,  -348,  -348,  1902,  1902,  1902,  1902,  1902,
    1927,   -15,   -15,  -348,  -348,  -348,  1416,    25,   -15,   210,
    -348,  -348,  -348,   200,  -348,   208,   191,  1497,  -348,    32,
      25,   227,  1821,   228,   -36,  1011,  -348,   211,    25,  -348,
     135,    25,   -15,   234,   235,    32,    25,    25,  -348,  -348,
    -348,  -348,  -348,  -348,    25,  -348,  1578,  -348,   237,  -348,
     -15,     9,  -348,   238,  -348,  -348,  -348,   239,  -348,    25,
    -348,   170,  -348,  -348,    70,    61,    62,    65,   -32,    90,
      43,   -20,    71,    86,    91,  -348,   243,  -348,   148,  1659,
    -348,  -348,  -348,  -348,   143,  -348,   244,  -348,   245,   101,
       2,   928,   250,   928,    25,  1740,  1821,   211,   246,   247,
    -348,   218,   254,   -15,   -15,  -348,     2,  -348,   251,  -348,
    -348,  -348,  -348,   928,  -348,  1902,   -15,  -348,  -348,   249,
    -348,  -348,  -348,   254,   248,  -348,  -348,   188,   928,   259,
     252,  -348,   242,    25,   -15,   260,   -15,   264,   268,    25,
     267,   151,    -6,  -348,  -348,   269,  -348,  -348,   928,  1821,
    -348,   928,  1821,   203,   928,  -348,   276,  -348,   726,   278,
    -348,   101,   -15,   191,  -348,   101,  -348,   -15,  -348,   280,
      25,   274,   101,  -348,    12,  -348,  -348,   928,  -348,  -348,
     726,   275,  -348,   -15,  -348,   281,  -348,   143,  -348,   282,
    -348,    25,    -6,  -348,    25,  -348,   928,  -348,  -348,  -348,
    -348,   101,   -15,   191,  -348,  -348,   285,  -348,  -348,  -348,
    -348,   143,  -348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    92,     0,     0,     0,   247,   246,   248,   135,     0,
      76,     0,    77,     0,     0,     0,     0,   135,    86,    87,
      88,   127,   128,   129,   130,   131,     0,   135,   135,     0,
     148,   232,     0,   254,   255,    61,   256,   257,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   237,   217,
     238,   218,     0,     0,     0,   221,   222,     0,     0,     0,
     223,   220,     0,     2,     4,     8,   152,     6,    11,    12,
      55,    60,    24,   253,     9,    56,    57,    58,     0,    53,
      54,     0,    59,    52,     0,    93,   111,   112,   259,   258,
      95,   118,   114,   133,   132,     0,   143,     7,   154,   148,
     157,     0,    10,   113,   187,   190,   192,   194,   196,   198,
     200,   202,   204,   206,   208,   214,   210,   213,     0,   215,
       0,   219,   245,   224,     0,   240,   266,   253,     0,     0,
     105,     0,     0,    40,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   180,   181,   182,
     183,   184,     0,    99,   177,   175,   176,   174,   100,   178,
     179,   101,   138,     0,   140,   139,   142,   141,     0,     0,
     127,    22,   158,   153,   149,   150,   151,     0,   229,   231,
     249,     0,   252,   267,     0,     0,    20,     0,    32,   226,
      30,   227,   228,     0,     0,    33,   233,     0,     1,     5,
      25,     0,    66,     0,    90,    91,     0,     0,     0,   107,
     134,   119,   156,   164,   116,   162,   186,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,   253,   225,   265,     0,     0,     0,     0,
     241,   242,   244,     0,   264,     0,   102,     0,    41,     0,
       0,     0,     0,     0,   148,     0,    67,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    64,   115,   230,
     250,   251,    62,   261,     0,   262,     0,    31,     0,   263,
       0,     0,    23,     0,    94,    96,   106,     0,   165,     0,
     185,     0,   189,   214,   191,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   216,     0,   239,     0,     0,
     243,   260,   110,   103,   104,   109,     0,   125,     0,     0,
     127,     0,     0,     0,     0,     0,     0,    71,     0,     0,
     126,    15,     0,     0,     0,    28,   127,    63,     0,    21,
     212,   234,   155,     0,   163,     0,     0,    97,   236,     0,
     108,   124,   137,     0,    84,    79,    83,     0,     0,     0,
      69,    72,    74,    64,     0,     0,   121,     0,     0,     0,
       0,     0,     0,    78,   188,     0,   235,    27,     0,     0,
      80,     0,     0,     0,     0,    75,     0,    14,    17,    35,
     120,     0,     0,   166,    34,     0,    29,   123,    26,     0,
       0,     0,     0,    85,     0,    81,    68,     0,    73,    65,
      18,     0,    16,     0,   147,     0,   168,   167,   145,    38,
     122,    64,   159,   117,    64,   146,     0,    70,    19,    13,
      36,     0,     0,   169,    37,   160,     0,    82,   144,    39,
     171,   170,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,   226,  -314,  -348,  -348,  -348,  -119,  -135,    93,
      -2,  -348,  -348,  -348,  -348,   -48,   -72,   -97,  -293,  -120,
    -348,  -134,   -12,  -348,    -8,     0,  -337,  -348,  -348,  -348,
    -348,  -348,   -30,  -348,  -348,   161,  -348,  -348,  -348,  -348,
    -133,   399,   -79,  -348,   277,   -73,  -238,   178,  -122,    95,
     209,  -348,  -348,   -47,  -348,    40,  -161,  -348,   216,     5,
       7,  -348,  -348,  -348,    56,   212,    33,  -347,   288,   -38,
    -104,  -348,  -165,  -348,   -81,  -348,  -348,   296,   299,   301,
     303,  -348,  -212,  -348,   113,   111,   118,   115,   110,   123,
     121,   124,   109,   120,   217,  -348,   125,     1,   -71,   164,
    -348,  -201,  -348,    -9,  -348,  -348,  -348,   156,  -348,  -348
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    62,    63,    64,    65,   365,   411,   412,   185,    66,
      67,   265,   249,    68,    69,   195,   189,   196,   389,   390,
     419,   420,    70,    71,    72,   127,   338,    74,    75,    76,
     383,   327,   328,   385,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   239,   207,    86,    87,    88,    89,    90,
      91,   399,    92,   367,   398,   319,   146,    93,    94,    95,
     136,    96,   163,    97,   176,   177,    98,    99,   100,   101,
     401,   102,   214,   215,   394,   434,   225,   226,   227,   228,
     229,   291,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   129,   119,   179,
     120,   197,   310,   121,   122,   123,   124,   182,   183,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   118,   134,   138,    73,   292,   188,   255,   314,   267,
     260,    73,   268,   135,   209,   141,   190,   168,   426,   246,
     206,   190,   135,   201,   143,   400,   386,    29,   -22,   171,
    -153,   178,   135,   135,   169,   170,    35,   308,   317,   250,
     368,   370,   174,   191,   192,    35,   147,   234,   148,   -98,
     240,   236,   186,   375,   171,   -22,   223,  -153,   234,   171,
      35,   224,    24,    25,    73,   118,   263,   175,   277,    57,
     200,   264,    73,   137,   410,   400,    35,   318,    57,   341,
     -22,   237,  -153,   201,   433,    59,   247,   436,   -22,   139,
      10,   288,    12,    57,    59,   171,   410,   140,   190,   415,
     153,   213,   145,   216,   153,   158,   217,   184,   235,   158,
       4,    48,   202,    50,   242,   -22,   161,   193,   233,   204,
     161,   266,   325,   329,   344,   190,   198,   203,   218,   233,
     190,   190,   205,   374,   305,   306,   171,   159,   160,   339,
     -22,   149,   150,   151,   238,   186,    22,    23,    24,    25,
     208,   135,   262,   261,   396,   417,   397,   219,   220,   353,
     221,   222,   230,   171,   231,   332,   244,   248,   171,   171,
     256,   257,   258,   313,   259,   371,   201,   213,   178,   154,
     155,   156,   157,   270,   272,   147,    48,   148,    50,   149,
     150,   151,   273,   190,   190,   441,   274,   152,   276,   275,
     190,   171,   280,   279,   281,   289,   311,   153,   154,   155,
     156,   157,   158,   159,   160,   309,   312,   233,   233,   233,
     233,   233,   233,   161,   190,   233,   233,   233,   233,   233,
     233,   171,   171,   321,   323,   326,   330,   307,   171,   333,
     334,   209,   190,   340,   343,   345,   173,   246,   346,   347,
     320,   351,   350,   355,   364,   376,   362,   363,   186,   366,
     372,   331,   171,   379,   378,   381,   336,   337,   384,   388,
     391,   173,   392,   395,   186,   402,   173,   382,   407,   409,
     171,   171,   413,   422,   424,   429,   432,   431,   442,   213,
     199,   428,   387,   430,   282,   369,   369,   361,   439,   252,
     404,   241,   285,   162,   211,   335,   377,   352,   369,   210,
     324,   212,   173,   354,   342,   356,   188,   172,   435,   423,
     416,    73,   164,    73,   357,   165,   190,   166,   369,   167,
     295,   294,   298,   171,   171,   373,   297,   302,   296,   271,
       0,     0,   269,    73,   209,   233,   171,   300,   299,   303,
     380,   301,     0,   173,   369,   304,     0,     0,    73,   421,
     440,     0,     0,   337,   171,     0,   171,     0,   209,   393,
     403,     0,   171,   405,     0,   369,   408,     0,    73,   414,
     173,    73,     0,   418,    73,   173,   173,     0,    73,   118,
     425,     0,   171,     0,   421,     0,     0,   171,     0,     0,
     393,   128,   132,     0,     0,   427,     0,    73,     0,     0,
      73,   118,     0,   171,     0,   142,     0,   144,   437,   438,
       0,   337,   171,     0,   337,     0,    73,     0,     0,     0,
       0,   181,   171,     0,   293,   293,   293,   293,   293,   293,
       0,     0,   293,   293,   293,   293,   293,     0,   173,   173,
       0,     0,   187,     0,     0,   173,     0,   194,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     5,     6,     7,     0,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,   173,     0,
       0,     0,   232,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,   243,     0,     0,     0,     0,     0,     0,
     245,    48,    49,    50,    51,     0,   251,     0,   253,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,    58,
     173,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   293,   173,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,   181,   173,     0,     0,     0,     0,     0,   173,
       0,     0,   278,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   283,     0,     0,   284,     0,   287,     0,   173,
       0,     0,     0,     0,   173,   290,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     0,
     173,     5,     6,     7,     0,   132,     0,     0,     0,   173,
       0,     0,     0,     0,     0,     0,   316,     0,     0,   173,
       0,   322,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    29,   254,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,   287,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,     0,     0,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,    60,    61,   359,   360,     0,     0,     0,     1,
       0,     2,     0,     3,     0,     4,     0,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,    26,    27,     0,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,   406,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,    60,    61,
       1,     0,     2,     0,     3,     0,     4,   133,     5,     6,
       7,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,    18,    19,    20,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,     1,     0,     2,     0,     3,     0,     4,     0,     5,
       6,     7,     0,     9,     0,    10,    11,    12,    13,    14,
      15,    16,     0,     0,     0,     0,    18,    19,    20,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    58,     1,     0,     2,     0,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,    59,     0,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,    58,     2,     0,     3,
     130,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,    59,     0,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,   131,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     2,   126,
       3,     0,     0,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    59,     0,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    58,     2,
       0,     3,     0,     0,     0,     5,     6,     7,     0,     0,
       0,     0,     0,    59,     0,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       2,     0,     3,   286,     0,     0,     5,     6,     7,     0,
       0,     0,     0,     0,    59,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
      58,     2,     0,     3,     0,     0,     0,     5,     6,     7,
       0,     0,     0,     0,     0,    59,     0,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,   131,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     2,     0,     3,   315,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,    59,     0,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    57,    58,     2,     0,     3,   130,     0,     0,     5,
       6,     7,     0,     0,     0,     0,     0,    59,     0,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    58,     2,   348,     3,     0,     0,     0,
       5,     6,     7,     0,     0,     0,     0,     0,    59,     0,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,     2,   358,     3,     0,     0,
       0,     5,     6,     7,     0,     0,     0,     0,     0,    59,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,     2,     0,     3,     0,
       0,     0,     5,     6,     7,     0,     0,     0,     0,     0,
      59,     0,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,    58,     2,     0,     3,
       0,     0,     0,     5,     6,     7,     0,     0,     0,     0,
       0,    59,     0,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     5,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,    50,    51,     0,    31,    32,    33,    34,    35,    36,
      37,    52,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,    60,    61,    52,    53,    54,    55,
      56,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61
};

static const yytype_int16 yycheck[] =
{
       0,     0,     4,    11,     4,   217,    54,   140,   246,   170,
     145,    11,   177,     8,    87,    15,    54,    26,     6,     8,
       4,    59,    17,    46,    17,   372,   363,    42,    51,    29,
      51,    31,    27,    28,    27,    28,    51,   238,     6,   136,
     333,   334,    78,    55,    56,    51,    66,   118,    68,     5,
     123,     7,    52,   346,    54,    78,    88,    78,   129,    59,
      51,    93,    34,    35,    64,    64,   163,   103,   190,    84,
      72,   168,    72,     5,   388,   422,    51,    45,    84,   280,
     103,    37,   103,    46,   421,   100,    75,   424,    51,     5,
      17,   213,    19,    84,   100,    95,   410,     5,   136,   392,
      88,   101,   100,    74,    88,    93,    77,    44,   120,    93,
       9,    67,    75,    69,   123,    78,   104,     5,   118,     3,
     104,   169,   255,   258,   289,   163,     0,     5,    99,   129,
     168,   169,     3,   345,   231,   232,   136,    94,    95,   274,
     103,    70,    71,    72,   100,   145,    32,    33,    34,    35,
       7,   146,   152,   146,     3,   393,     5,    87,    97,   320,
      98,    96,    76,   163,    73,   262,     6,    10,   168,   169,
       3,     9,     9,   246,     3,   336,    46,   177,   178,    89,
      90,    91,    92,    55,   184,    66,    67,    68,    69,    70,
      71,    72,     6,   231,   232,   433,     4,    78,     7,     6,
     238,   201,     4,    86,   101,     4,     6,    88,    89,    90,
      91,    92,    93,    94,    95,     5,     8,   217,   218,   219,
     220,   221,   222,   104,   262,   225,   226,   227,   228,   229,
     230,   231,   232,     6,     6,    24,   101,   237,   238,     5,
       5,   314,   280,     6,     6,    75,    29,     8,     5,   101,
     250,     6,     8,     3,    36,     6,    10,    10,   258,     5,
       9,   261,   262,    75,    16,     6,   266,   267,    26,     9,
       6,    54,     4,     6,   274,     6,    59,    25,    75,     3,
     280,   281,     4,     3,    10,    10,     4,     6,     3,   289,
      64,   410,   364,   413,   201,   333,   334,   327,   432,   138,
     379,   123,   207,    26,    95,   265,   353,   319,   346,    93,
     254,    99,    95,   321,   281,   323,   364,    29,   422,   400,
     393,   321,    26,   323,   324,    26,   364,    26,   366,    26,
     219,   218,   222,   333,   334,   343,   221,   228,   220,   183,
      -1,    -1,   178,   343,   417,   345,   346,   226,   225,   229,
     358,   227,    -1,   136,   392,   230,    -1,    -1,   358,   397,
     433,    -1,    -1,   363,   364,    -1,   366,    -1,   441,   369,
     378,    -1,   372,   381,    -1,   413,   384,    -1,   378,   391,
     163,   381,    -1,   395,   384,   168,   169,    -1,   388,   388,
     402,    -1,   392,    -1,   432,    -1,    -1,   397,    -1,    -1,
     400,     2,     3,    -1,    -1,   407,    -1,   407,    -1,    -1,
     410,   410,    -1,   413,    -1,    16,    -1,    18,   426,   431,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    32,   432,    -1,   217,   218,   219,   220,   221,   222,
      -1,    -1,   225,   226,   227,   228,   229,    -1,   231,   232,
      -1,    -1,    53,    -1,    -1,   238,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,   262,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,   281,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    67,    68,    69,    70,    -1,   137,    -1,   139,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,    85,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,   346,    -1,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   364,   183,   366,    -1,    -1,    -1,    -1,    -1,   372,
      -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,   206,    -1,   208,    -1,   392,
      -1,    -1,    -1,    -1,   397,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,    -1,
     413,    11,    12,    13,    -1,   236,    -1,    -1,    -1,   422,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,   432,
      -1,   252,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103,   325,   326,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,   382,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,     3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,   100,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,     5,    -1,     7,
       8,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    85,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
       5,    -1,     7,     8,    -1,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,     5,    -1,     7,     8,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,     5,    -1,     7,     8,    -1,    -1,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    85,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    47,    48,    49,    50,    51,    52,
      53,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    79,    80,    81,    82,
      83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    38,    39,    41,    42,
      43,    47,    48,    49,    50,    51,    52,    53,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    67,    68,
      69,    70,    79,    80,    81,    82,    83,    84,    85,   100,
     102,   103,   109,   110,   111,   112,   117,   118,   121,   122,
     130,   131,   132,   133,   135,   136,   137,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   153,   154,   155,   156,
     157,   158,   160,   165,   166,   167,   169,   171,   174,   175,
     176,   177,   179,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     208,   211,   212,   213,   214,   217,     6,   133,   149,   205,
       8,    75,   149,    10,   118,   167,   168,     5,   132,     5,
       5,   133,   149,   168,   149,   100,   164,    66,    68,    70,
      71,    72,    78,    88,    89,    90,    91,    92,    93,    94,
      95,   104,   152,   170,   185,   186,   187,   188,   211,   168,
     168,   133,   176,   202,    78,   103,   172,   173,   133,   207,
      54,   149,   215,   216,    44,   116,   133,   149,   123,   124,
     177,   130,   130,     5,   149,   123,   125,   209,     0,   110,
     118,    46,    75,     5,     3,     3,     4,   152,     7,   153,
     166,   158,   173,   133,   180,   181,    74,    77,    99,    87,
      97,    98,    96,    88,    93,   184,   185,   186,   187,   188,
      76,    73,    38,   133,   206,   130,     7,    37,   100,   151,
     153,   155,   211,   149,     6,   149,     8,    75,    10,   120,
     125,   149,   143,   149,    43,   148,     3,     9,     9,     3,
     116,   168,   133,   125,   125,   119,   123,   164,   180,   207,
      55,   215,   133,     6,     4,     6,     7,   156,   149,    86,
       4,   101,   117,   149,   149,   157,     8,   149,   156,     4,
     149,   189,   190,   202,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   204,   125,   125,   133,   209,     5,
     210,     6,     8,   153,   154,     8,   149,     6,    45,   163,
     133,     6,   149,     6,   172,   148,    24,   139,   140,   116,
     101,   133,   125,     5,     5,   163,   133,   133,   134,   116,
       6,   209,   174,     6,   180,    75,     5,   101,     6,   149,
       8,     6,   130,   164,   132,     3,   132,   133,     6,   149,
     149,   140,    10,    10,    36,   113,     5,   161,   126,   177,
     126,   164,     9,   132,   190,   126,     6,   161,    16,    75,
     132,     6,    25,   138,    26,   141,   134,   124,     9,   126,
     127,     6,     4,   133,   182,     6,     3,     5,   162,   159,
     175,   178,     6,   132,   150,   132,   149,    75,   132,     3,
     111,   114,   115,     4,   130,   126,   153,   154,   130,   128,
     129,   177,     3,   182,    10,   130,     6,   118,   115,    10,
     127,     6,     4,   134,   183,   178,   134,   132,   130,   129,
     153,   154,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   120,   121,   122,
     123,   123,   124,   125,   126,   127,   127,   128,   129,   129,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   136,   137,   138,   138,
     139,   140,   140,   141,   141,   142,   143,   143,   144,   144,
     144,   144,   144,   144,   145,   145,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   154,   154,   154,   155,   155,
     155,   156,   156,   157,   157,   157,   158,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   167,   168,   168,   169,   170,   170,
     170,   170,   170,   171,   171,   171,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   175,   176,   177,   177,   178,
     178,   179,   180,   180,   181,   181,   182,   182,   182,   183,
     183,   183,   184,   184,   185,   185,   185,   185,   186,   186,
     187,   187,   188,   188,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   194,   195,   195,
     196,   196,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   203,   203,   204,   204,   205,   205,   205,
     205,   205,   205,   205,   206,   206,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   212,
     213,   213,   213,   213,   213,   213,   214,   214,   214,   215,
     215,   216,   216,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     8,     2,     0,     1,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     4,     4,     4,     6,
       1,     2,     1,     1,     2,     1,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     7,     2,     3,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     9,     5,     5,     7,     1,     1,     1,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     0,     1,
       1,     1,     3,     4,     4,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     1,     3,     2,     2,     1,     2,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     5,     1,     1,
       1,     1,     1,     1,     9,     7,     7,     7,     0,     1,
       1,     1,     1,     1,     1,     4,     2,     1,     2,     2,
       3,     9,     1,     3,     1,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     4,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     2
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Scanner* arg)
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 110: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 2070 "src/parser.c"
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

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 140 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2372 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2378 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2384 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2390 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2396 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2402 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2408 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2414 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2420 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2426 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2432 "src/parser.c"
    break;

  case 13:
#line 160 "src/gwion.y"
    { (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-6].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
  }
#line 2441 "src/parser.c"
    break;

  case 14:
#line 165 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2447 "src/parser.c"
    break;

  case 15:
#line 165 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2453 "src/parser.c"
    break;

  case 17:
#line 167 "src/gwion.y"
                           { (yyval.ast) = NULL; }
#line 2459 "src/parser.c"
    break;

  case 18:
#line 170 "src/gwion.y"
                        { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2465 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                        { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2471 "src/parser.c"
    break;

  case 20:
#line 174 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2477 "src/parser.c"
    break;

  case 21:
#line 174 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2483 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
               { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), loc_cpy(mpool(arg), &(yylsp[0]))); }
#line 2489 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                                                        { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2495 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2501 "src/parser.c"
    break;

  case 25:
#line 177 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2507 "src/parser.c"
    break;

  case 26:
#line 179 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2514 "src/parser.c"
    break;

  case 27:
#line 181 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2521 "src/parser.c"
    break;

  case 28:
#line 184 "src/gwion.y"
                                              {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2533 "src/parser.c"
    break;

  case 29:
#line 191 "src/gwion.y"
                                                                      {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2544 "src/parser.c"
    break;

  case 31:
#line 198 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2550 "src/parser.c"
    break;

  case 32:
#line 200 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2558 "src/parser.c"
    break;

  case 33:
#line 204 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2566 "src/parser.c"
    break;

  case 34:
#line 208 "src/gwion.y"
                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2572 "src/parser.c"
    break;

  case 35:
#line 209 "src/gwion.y"
              { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2578 "src/parser.c"
    break;

  case 36:
#line 209 "src/gwion.y"
                                                { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2584 "src/parser.c"
    break;

  case 37:
#line 210 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2590 "src/parser.c"
    break;

  case 38:
#line 211 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2596 "src/parser.c"
    break;

  case 39:
#line 211 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2606 "src/parser.c"
    break;

  case 40:
#line 218 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2612 "src/parser.c"
    break;

  case 41:
#line 219 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2618 "src/parser.c"
    break;

  case 42:
#line 223 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2624 "src/parser.c"
    break;

  case 43:
#line 224 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2630 "src/parser.c"
    break;

  case 44:
#line 225 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2636 "src/parser.c"
    break;

  case 45:
#line 226 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2642 "src/parser.c"
    break;

  case 46:
#line 227 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2648 "src/parser.c"
    break;

  case 47:
#line 228 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2654 "src/parser.c"
    break;

  case 48:
#line 229 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2660 "src/parser.c"
    break;

  case 49:
#line 230 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2666 "src/parser.c"
    break;

  case 50:
#line 231 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2672 "src/parser.c"
    break;

  case 51:
#line 232 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2678 "src/parser.c"
    break;

  case 61:
#line 248 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2684 "src/parser.c"
    break;

  case 62:
#line 249 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2694 "src/parser.c"
    break;

  case 64:
#line 256 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2700 "src/parser.c"
    break;

  case 65:
#line 259 "src/gwion.y"
                                                            { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2707 "src/parser.c"
    break;

  case 66:
#line 262 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2713 "src/parser.c"
    break;

  case 67:
#line 264 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2719 "src/parser.c"
    break;

  case 68:
#line 266 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2725 "src/parser.c"
    break;

  case 69:
#line 266 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2731 "src/parser.c"
    break;

  case 70:
#line 269 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2742 "src/parser.c"
    break;

  case 71:
#line 277 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2748 "src/parser.c"
    break;

  case 72:
#line 278 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2754 "src/parser.c"
    break;

  case 73:
#line 280 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2760 "src/parser.c"
    break;

  case 74:
#line 280 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2766 "src/parser.c"
    break;

  case 75:
#line 282 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2777 "src/parser.c"
    break;

  case 76:
#line 290 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2783 "src/parser.c"
    break;

  case 77:
#line 291 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2789 "src/parser.c"
    break;

  case 78:
#line 295 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2795 "src/parser.c"
    break;

  case 79:
#line 297 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2801 "src/parser.c"
    break;

  case 80:
#line 299 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2807 "src/parser.c"
    break;

  case 81:
#line 301 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2813 "src/parser.c"
    break;

  case 82:
#line 303 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2819 "src/parser.c"
    break;

  case 83:
#line 305 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2825 "src/parser.c"
    break;

  case 84:
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2831 "src/parser.c"
    break;

  case 85:
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2837 "src/parser.c"
    break;

  case 86:
#line 316 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2843 "src/parser.c"
    break;

  case 87:
#line 317 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2849 "src/parser.c"
    break;

  case 88:
#line 318 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2855 "src/parser.c"
    break;

  case 89:
#line 321 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2861 "src/parser.c"
    break;

  case 90:
#line 322 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2867 "src/parser.c"
    break;

  case 91:
#line 326 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2873 "src/parser.c"
    break;

  case 92:
#line 327 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2879 "src/parser.c"
    break;

  case 94:
#line 330 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2885 "src/parser.c"
    break;

  case 96:
#line 332 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2891 "src/parser.c"
    break;

  case 97:
#line 334 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2897 "src/parser.c"
    break;

  case 98:
#line 334 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2903 "src/parser.c"
    break;

  case 102:
#line 339 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2909 "src/parser.c"
    break;

  case 103:
#line 340 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2915 "src/parser.c"
    break;

  case 104:
#line 341 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2921 "src/parser.c"
    break;

  case 105:
#line 345 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2927 "src/parser.c"
    break;

  case 106:
#line 346 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2933 "src/parser.c"
    break;

  case 107:
#line 347 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2939 "src/parser.c"
    break;

  case 108:
#line 351 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2945 "src/parser.c"
    break;

  case 109:
#line 352 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2951 "src/parser.c"
    break;

  case 110:
#line 353 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2957 "src/parser.c"
    break;

  case 115:
#line 358 "src/gwion.y"
                                 { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     new_id_list(mpool(arg), insert_symbol("auto"), GET_LOC(&(yyloc)))), (yyvsp[0].var_decl_list)); }
#line 2964 "src/parser.c"
    break;

  case 116:
#line 360 "src/gwion.y"
                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2970 "src/parser.c"
    break;

  case 117:
#line 361 "src/gwion.y"
                                { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2976 "src/parser.c"
    break;

  case 119:
#line 362 "src/gwion.y"
                                    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2982 "src/parser.c"
    break;

  case 120:
#line 364 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2988 "src/parser.c"
    break;

  case 121:
#line 364 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2994 "src/parser.c"
    break;

  case 122:
#line 365 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3000 "src/parser.c"
    break;

  case 123:
#line 365 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 3006 "src/parser.c"
    break;

  case 124:
#line 366 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 3012 "src/parser.c"
    break;

  case 125:
#line 366 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 3018 "src/parser.c"
    break;

  case 126:
#line 368 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 3024 "src/parser.c"
    break;

  case 127:
#line 368 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 3030 "src/parser.c"
    break;

  case 128:
#line 370 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3036 "src/parser.c"
    break;

  case 129:
#line 371 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 3042 "src/parser.c"
    break;

  case 130:
#line 374 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3048 "src/parser.c"
    break;

  case 131:
#line 375 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3054 "src/parser.c"
    break;

  case 132:
#line 378 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3060 "src/parser.c"
    break;

  case 133:
#line 379 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 3066 "src/parser.c"
    break;

  case 134:
#line 380 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3072 "src/parser.c"
    break;

  case 135:
#line 383 "src/gwion.y"
           { (yyval.flag) = 0; }
#line 3078 "src/parser.c"
    break;

  case 136:
#line 383 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[0].flag); }
#line 3084 "src/parser.c"
    break;

  case 137:
#line 387 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3090 "src/parser.c"
    break;

  case 144:
#line 394 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3096 "src/parser.c"
    break;

  case 145:
#line 396 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3102 "src/parser.c"
    break;

  case 146:
#line 398 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3108 "src/parser.c"
    break;

  case 147:
#line 400 "src/gwion.y"
{
  const m_str str = s_name((yyvsp[-4].sym));
  char c[strlen(str) + 2];
  c[0] = '@';
  strcpy(c + 1, str);
  const Symbol sym = insert_symbol(c);
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), sym, (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
}
#line 3121 "src/parser.c"
    break;

  case 148:
#line 409 "src/gwion.y"
       { (yyval.ival) = 0; }
#line 3127 "src/parser.c"
    break;

  case 149:
#line 409 "src/gwion.y"
                           { (yyval.ival) = ae_flag_ref; }
#line 3133 "src/parser.c"
    break;

  case 150:
#line 410 "src/gwion.y"
                       { (yyval.ival) = ae_flag_nonnull; }
#line 3139 "src/parser.c"
    break;

  case 152:
#line 413 "src/gwion.y"
             { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].id_list)); }
#line 3145 "src/parser.c"
    break;

  case 153:
#line 414 "src/gwion.y"
                { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp)); }
#line 3151 "src/parser.c"
    break;

  case 154:
#line 418 "src/gwion.y"
                 { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3157 "src/parser.c"
    break;

  case 155:
#line 419 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3163 "src/parser.c"
    break;

  case 156:
#line 423 "src/gwion.y"
                          { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3169 "src/parser.c"
    break;

  case 157:
#line 426 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3175 "src/parser.c"
    break;

  case 158:
#line 427 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3181 "src/parser.c"
    break;

  case 159:
#line 429 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3187 "src/parser.c"
    break;

  case 160:
#line 430 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3193 "src/parser.c"
    break;

  case 161:
#line 433 "src/gwion.y"
                                                                                 {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-5].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-6].id_list)) {
        if(!(yyvsp[-5].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-6].id_list));
      }
    }
#line 3215 "src/parser.c"
    break;

  case 162:
#line 453 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3221 "src/parser.c"
    break;

  case 163:
#line 454 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3227 "src/parser.c"
    break;

  case 164:
#line 457 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3233 "src/parser.c"
    break;

  case 165:
#line 458 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3239 "src/parser.c"
    break;

  case 166:
#line 460 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3245 "src/parser.c"
    break;

  case 167:
#line 461 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3251 "src/parser.c"
    break;

  case 168:
#line 462 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3257 "src/parser.c"
    break;

  case 169:
#line 463 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3263 "src/parser.c"
    break;

  case 170:
#line 464 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3269 "src/parser.c"
    break;

  case 171:
#line 465 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3275 "src/parser.c"
    break;

  case 186:
#line 473 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3281 "src/parser.c"
    break;

  case 188:
#line 476 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3287 "src/parser.c"
    break;

  case 189:
#line 478 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3293 "src/parser.c"
    break;

  case 191:
#line 480 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3299 "src/parser.c"
    break;

  case 193:
#line 481 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3305 "src/parser.c"
    break;

  case 195:
#line 482 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3311 "src/parser.c"
    break;

  case 197:
#line 483 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3317 "src/parser.c"
    break;

  case 199:
#line 484 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3323 "src/parser.c"
    break;

  case 201:
#line 485 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3329 "src/parser.c"
    break;

  case 203:
#line 486 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3335 "src/parser.c"
    break;

  case 205:
#line 487 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3341 "src/parser.c"
    break;

  case 207:
#line 488 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3347 "src/parser.c"
    break;

  case 209:
#line 489 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3353 "src/parser.c"
    break;

  case 211:
#line 490 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3359 "src/parser.c"
    break;

  case 212:
#line 492 "src/gwion.y"
                                      { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3365 "src/parser.c"
    break;

  case 216:
#line 496 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3371 "src/parser.c"
    break;

  case 225:
#line 502 "src/gwion.y"
                                          { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3377 "src/parser.c"
    break;

  case 226:
#line 503 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3383 "src/parser.c"
    break;

  case 227:
#line 504 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3389 "src/parser.c"
    break;

  case 228:
#line 505 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3395 "src/parser.c"
    break;

  case 229:
#line 508 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3401 "src/parser.c"
    break;

  case 230:
#line 509 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3407 "src/parser.c"
    break;

  case 231:
#line 510 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3413 "src/parser.c"
    break;

  case 232:
#line 510 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3419 "src/parser.c"
    break;

  case 233:
#line 513 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3425 "src/parser.c"
    break;

  case 234:
#line 514 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3431 "src/parser.c"
    break;

  case 235:
#line 517 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3437 "src/parser.c"
    break;

  case 236:
#line 517 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3443 "src/parser.c"
    break;

  case 239:
#line 521 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3449 "src/parser.c"
    break;

  case 241:
#line 524 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3455 "src/parser.c"
    break;

  case 242:
#line 526 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3461 "src/parser.c"
    break;

  case 243:
#line 528 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3468 "src/parser.c"
    break;

  case 244:
#line 531 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3474 "src/parser.c"
    break;

  case 245:
#line 531 "src/gwion.y"
                                                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3480 "src/parser.c"
    break;

  case 246:
#line 534 "src/gwion.y"
                       { (yyval.ival) = ae_prim_complex; }
#line 3486 "src/parser.c"
    break;

  case 247:
#line 535 "src/gwion.y"
                       { (yyval.ival) = ae_prim_polar;   }
#line 3492 "src/parser.c"
    break;

  case 248:
#line 536 "src/gwion.y"
                       { (yyval.ival) = ae_prim_vec;     }
#line 3498 "src/parser.c"
    break;

  case 249:
#line 538 "src/gwion.y"
                       { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3504 "src/parser.c"
    break;

  case 250:
#line 539 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[-1].exp); }
#line 3510 "src/parser.c"
    break;

  case 251:
#line 542 "src/gwion.y"
{
  Exp next = (yyvsp[-1].exp);
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-1].exp);
}
#line 3523 "src/parser.c"
    break;

  case 252:
#line 550 "src/gwion.y"
                 { (yyval.exp) = (yyvsp[0].exp); }
#line 3529 "src/parser.c"
    break;

  case 253:
#line 553 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3535 "src/parser.c"
    break;

  case 254:
#line 554 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3541 "src/parser.c"
    break;

  case 255:
#line 555 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3547 "src/parser.c"
    break;

  case 256:
#line 556 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3553 "src/parser.c"
    break;

  case 257:
#line 557 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3559 "src/parser.c"
    break;

  case 258:
#line 558 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3565 "src/parser.c"
    break;

  case 259:
#line 559 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3571 "src/parser.c"
    break;

  case 260:
#line 560 "src/gwion.y"
                        { (yyval.exp) = new_prim_vec(    mpool(arg), (yyvsp[-2].ival) ,(yyvsp[-1].exp)); }
#line 3577 "src/parser.c"
    break;

  case 261:
#line 561 "src/gwion.y"
                            { (yyval.exp) = new_prim_unpack( mpool(arg), insert_symbol("auto"), (yyvsp[-1].id_list), GET_LOC(&(yyloc))); }
#line 3583 "src/parser.c"
    break;

  case 262:
#line 562 "src/gwion.y"
                        { (yyval.exp) = new_prim_tuple(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3589 "src/parser.c"
    break;

  case 263:
#line 563 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3595 "src/parser.c"
    break;

  case 264:
#line 564 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3601 "src/parser.c"
    break;

  case 265:
#line 565 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3607 "src/parser.c"
    break;

  case 266:
#line 566 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3613 "src/parser.c"
    break;

  case 267:
#line 567 "src/gwion.y"
                          { (yyval.exp) = new_exp_interp(mpool(arg),     (yyvsp[0].exp)); }
#line 3619 "src/parser.c"
    break;


#line 3623 "src/parser.c"

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
                  yystos[+*yyssp], yyvsp, yylsp, arg);
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
#line 569 "src/gwion.y"

