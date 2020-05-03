/* A Bison parser, made by GNU Bison 3.5.4.  */

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
#define YYBISON_VERSION "3.5.4"

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
    FUNCTION = 266,
    IF = 267,
    ELSE = 268,
    WHILE = 269,
    DO = 270,
    UNTIL = 271,
    LOOP = 272,
    FOR = 273,
    GOTO = 274,
    MATCH = 275,
    CASE = 276,
    WHEN = 277,
    WHERE = 278,
    ENUM = 279,
    TRETURN = 280,
    BREAK = 281,
    CONTINUE = 282,
    CLASS = 283,
    STRUCT = 284,
    STATIC = 285,
    GLOBAL = 286,
    PRIVATE = 287,
    PROTECT = 288,
    EXTENDS = 289,
    DOT = 290,
    OPERATOR = 291,
    TYPEDEF = 292,
    NOELSE = 293,
    UNION = 294,
    CONSTT = 295,
    AUTO = 296,
    PASTE = 297,
    ELLIPSE = 298,
    VARLOOP = 299,
    RARROW = 300,
    BACKSLASH = 301,
    BACKTICK = 302,
    OPID = 303,
    REF = 304,
    NONNULL = 305,
    NUM = 306,
    FLOATT = 307,
    ID = 308,
    STRING_LIT = 309,
    CHAR_LIT = 310,
    INTERP_LIT = 311,
    INTERP_EXP = 312,
    PP_COMMENT = 313,
    PP_INCLUDE = 314,
    PP_DEFINE = 315,
    PP_PRAGMA = 316,
    PP_UNDEF = 317,
    PP_IFDEF = 318,
    PP_IFNDEF = 319,
    PP_ELSE = 320,
    PP_ENDIF = 321,
    PP_NL = 322,
    PLUS = 324,
    PLUSPLUS = 325,
    MINUS = 326,
    MINUSMINUS = 327,
    TIMES = 328,
    DIVIDE = 329,
    PERCENT = 330,
    DOLLAR = 331,
    QUESTION = 332,
    COLON = 333,
    COLONCOLON = 334,
    QUESTIONCOLON = 335,
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
#define FUNCTION 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define UNTIL 271
#define LOOP 272
#define FOR 273
#define GOTO 274
#define MATCH 275
#define CASE 276
#define WHEN 277
#define WHERE 278
#define ENUM 279
#define TRETURN 280
#define BREAK 281
#define CONTINUE 282
#define CLASS 283
#define STRUCT 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define OPERATOR 291
#define TYPEDEF 292
#define NOELSE 293
#define UNION 294
#define CONSTT 295
#define AUTO 296
#define PASTE 297
#define ELLIPSE 298
#define VARLOOP 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define OPID 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_LIT 311
#define INTERP_EXP 312
#define PP_COMMENT 313
#define PP_INCLUDE 314
#define PP_DEFINE 315
#define PP_PRAGMA 316
#define PP_UNDEF 317
#define PP_IFDEF 318
#define PP_IFNDEF 319
#define PP_ELSE 320
#define PP_ENDIF 321
#define PP_NL 322
#define PLUS 324
#define PLUSPLUS 325
#define MINUS 326
#define MINUSMINUS 327
#define TIMES 328
#define DIVIDE 329
#define PERCENT 330
#define DOLLAR 331
#define QUESTION 332
#define COLON 333
#define COLONCOLON 334
#define QUESTIONCOLON 335
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

#line 385 "src/parser.c"

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
#define YYFINAL  194
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1714

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  436

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
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     173,   173,   175,   175,   177,   179,   182,   189,   196,   196,
     198,   202,   206,   207,   207,   208,   209,   209,   216,   217,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     247,   248,   255,   255,   258,   261,   263,   265,   265,   268,
     276,   277,   279,   279,   281,   289,   290,   293,   295,   297,
     299,   301,   303,   307,   310,   312,   317,   318,   319,   322,
     323,   327,   328,   331,   331,   333,   333,   335,   335,   337,
     337,   337,   340,   341,   342,   346,   347,   348,   352,   353,
     354,   357,   357,   358,   358,   359,   361,   362,   363,   363,
     365,   365,   366,   366,   367,   367,   369,   369,   371,   372,
     375,   376,   379,   380,   381,   384,   384,   387,   390,   390,
     390,   390,   390,   393,   394,   396,   398,   400,   405,   405,
     406,   406,   409,   410,   414,   415,   419,   420,   424,   427,
     428,   429,   431,   432,   435,   455,   456,   459,   460,   462,
     463,   464,   465,   466,   467,   469,   469,   470,   470,   470,
     470,   471,   471,   472,   472,   473,   473,   473,   475,   475,
     476,   477,   479,   482,   482,   483,   483,   484,   484,   485,
     485,   486,   486,   487,   487,   488,   488,   489,   489,   490,
     490,   491,   491,   492,   492,   494,   495,   495,   497,   497,
     500,   500,   500,   501,   501,   501,   501,   504,   504,   505,
     506,   507,   510,   511,   512,   512,   515,   516,   519,   519,
     521,   521,   523,   524,   525,   527,   529,   532,   533,   536,
     537,   539,   548,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\";\"", "\",\"", "\"(\"", "\")\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"fun\"", "\"if\"", "\"else\"",
  "\"while\"", "\"do\"", "\"until\"", "\"repeat\"", "\"for\"", "\"goto\"",
  "\"match\"", "\"case\"", "\"when\"", "\"where\"", "\"enum\"",
  "\"return\"", "\"break\"", "\"continue\"", "\"class\"", "\"struct\"",
  "\"static\"", "\"global\"", "\"private\"", "\"protect\"", "\"extends\"",
  "\".\"", "\"operator\"", "\"typedef\"", "NOELSE", "\"union\"",
  "\"const\"", "\"auto\"", "\"##\"", "\"...\"", "\"varloop\"", "\"->\"",
  "\"\\\\\"", "\"`\"", "OPID", "\"ref\"", "\"nonnull\"", "\"<integer>\"",
  "FLOATT", "\"<identifier>\"", "\"<litteral string>\"",
  "\"<litteral char>\"", "\"<interp string>\"", "INTERP_EXP",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"@<operator id>\"", "\"+\"", "\"++\"", "\"-\"", "\"--\"",
  "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"", "\"?:\"",
  "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"", "\">>>\"",
  "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"", "\"!=\"",
  "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"", "\"<~\"",
  "\"~>\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS", "UTIMES",
  "\"=\"", "$accept", "prg", "ast", "section", "class_type", "class_def",
  "class_ext", "class_body", "id_list", "stmt_list", "fptr_base",
  "fdef_base", "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def", "label_stmt",
  "goto_stmt", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "range", "array", "decl_exp2",
  "decl_exp", "union_exp", "decl_exp3", "func_args", "fptr_args",
  "arg_type", "decl_template", "storage_flag", "access_flag", "flag",
  "opt_flag", "func_def_base", "op_op", "func_def", "ref", "decl_flag",
  "type_decl_tmpl", "type_decl_next", "type_decl_noflag", "type_decl0",
  "type_decl", "decl_list", "union_def", "var_decl_list", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "_typeof_exp", "typeof_exp", "cast_exp",
  "unary_op", "unary_exp", "lambda_list", "lambda_arg", "type_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "interp_exp", "interp",
  "prim_exp", YY_NULLPTR
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

#define YYPACT_NINF (-343)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-158)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     679,  -343,  1129,  1071,   780,   124,    24,  -343,   872,  -343,
      40,    48,    38,  1593,   124,  1593,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  1610,   124,   124,   -18,    63,  1593,
      38,  1187,   -18,  -343,  -343,    23,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,     6,    84,    84,    90,  1593,     6,  -343,  -343,
     102,  -343,   679,   124,  -343,  -343,  -343,  -343,  -343,  -343,
     872,    97,  -343,  -343,  -343,  -343,    92,  -343,  -343,  -343,
      96,  -343,  -343,   104,    12,  -343,   110,  -343,  -343,  -343,
    -343,  -343,   107,  -343,     6,  -343,  -343,    75,  -343,    63,
    -343,    38,  -343,  -343,   -36,    35,    54,    60,    74,   -19,
      72,    73,   -20,    57,    94,    99,  -343,    93,   464,  -343,
      84,  -343,  -343,    26,  -343,  -343,    88,   165,   569,  -343,
    1593,    11,  -343,   168,  -343,     6,  1593,    67,  1593,   955,
     176,   171,   172,   179,     6,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
       6,  -343,  -343,  -343,  -343,     6,     6,    85,  -343,  -343,
    -343,  -343,  -343,  -343,    38,    41,    38,  -343,  -343,   127,
    -343,  1187,  -343,    38,  -343,  -343,   180,  -343,  -343,  1593,
     100,  -343,   184,    89,  -343,  -343,    85,  -343,  -343,  1593,
    -343,  -343,  1593,  1593,  1245,  -343,  -343,  -343,   -25,  -343,
     180,  -343,   185,  1593,   186,   186,   186,   186,   186,   186,
    -343,  -343,   186,   186,   186,   186,   186,   569,     6,     6,
    -343,  -343,  -343,  1303,    38,     6,   189,  -343,  -343,  -343,
    -343,   187,   180,  1361,  -343,    33,    38,   190,  1593,   191,
      63,  1013,  -343,   177,    38,  -343,   194,   195,   196,    33,
      38,    38,    38,  -343,  -343,  -343,  -343,  -343,  -343,  1419,
    -343,   197,  -343,     6,    38,    38,   198,  -343,  -343,  -343,
     199,  -343,  -343,    38,  -343,   128,  -343,  -343,    35,    54,
      60,    74,   -19,    72,    73,   -20,    57,    94,    93,  -343,
     200,  -343,   101,  1477,  -343,  -343,  -343,   110,  -343,   201,
    -343,   204,    84,    85,   872,   208,   872,    38,  1535,  1593,
     177,   202,   203,   216,     6,   215,     6,     6,  -343,    85,
     129,  -343,   222,  -343,  -343,  -343,   210,   872,  -343,   186,
       6,  -343,  -343,   230,  -343,  -343,  -343,   194,   229,  -343,
    -343,   167,   872,   241,   226,  -343,   227,    38,    38,   245,
    -343,    38,    84,   247,   246,    83,  -343,   -18,     6,   244,
    -343,  -343,   257,  -343,  -343,   872,  1593,  -343,   872,  1593,
     188,   872,  -343,   262,  -343,     6,   180,  -343,  -343,     6,
      84,  -343,     6,  -343,   269,    38,   266,  -343,   679,    84,
    -343,    15,  -343,  -343,   872,  -343,  -343,  -343,  -343,   110,
     271,  -343,   274,  -343,    38,   -18,  -343,    38,  -343,   272,
    -343,   872,  -343,    84,     6,   180,  -343,  -343,   276,  -343,
    -343,  -343,  -343,  -343,   110,  -343
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    92,     0,     0,     0,   135,     0,    75,     0,    76,
       0,     0,     0,     0,   135,    86,    87,    88,    13,    14,
     128,   129,   130,   131,     0,   135,   135,     0,   148,     0,
     235,     0,     0,   254,   255,    60,   256,   257,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   240,   220,
     241,   221,     0,   224,   225,     0,     0,     0,   226,   223,
       0,     2,     4,   135,     8,     6,    11,    12,    53,    58,
      22,   253,     9,    54,    55,    56,     0,    51,    59,    52,
       0,    57,    50,     0,    93,   111,   112,   259,   258,    95,
     118,   114,   133,   132,     0,   143,     7,   154,   156,   148,
     159,     0,    10,   113,   190,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   217,   213,   216,     0,   218,
       0,   222,   248,   227,   243,   263,   253,     0,     0,   105,
       0,     0,    38,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,   184,   185,   186,   187,
      99,   180,   178,   179,   177,   100,   181,   182,   101,   138,
       0,   140,   139,   142,   141,     0,     0,   127,   152,   160,
     157,   149,   150,   151,     0,     0,   232,   234,   249,     0,
     252,   264,   161,     0,    30,   229,    28,   230,   231,     0,
       0,    31,   236,     0,     1,     5,   127,    23,    65,     0,
      90,    91,     0,     0,     0,   107,   134,   119,     0,   158,
     167,   116,   165,   189,     0,     0,     0,     0,     0,     0,
     175,   176,     0,     0,     0,     0,     0,     0,     0,     0,
     253,   228,   262,     0,     0,     0,     0,   244,   245,   247,
     261,     0,   102,     0,    39,     0,     0,     0,     0,     0,
     148,     0,    66,     0,     0,    89,     0,     0,     0,     0,
       0,     0,    63,   115,    83,   233,   250,   251,    61,     0,
      29,     0,   260,     0,     0,     0,     0,    94,    96,   106,
       0,   155,   168,     0,   188,     0,   192,   217,   194,   196,
     198,   200,   202,   204,   206,   208,   210,   212,   214,   219,
       0,   242,     0,     0,   246,   110,   103,   104,   109,     0,
     125,     0,     0,   127,     0,     0,     0,     0,     0,     0,
      70,     0,     0,    20,   121,     0,     0,     0,    26,   127,
       0,    62,     0,   215,   237,   153,    17,     0,   166,     0,
       0,    97,   239,     0,   108,   124,   137,     0,    84,    78,
      82,     0,     0,     0,    68,    71,    73,    63,     0,    33,
     120,     0,     0,     0,     0,     0,   126,     0,     0,     0,
      77,   191,     0,   238,    25,     0,     0,    79,     0,     0,
       0,     0,    74,     0,    21,     0,   169,    32,   147,     0,
       0,    27,   123,    24,     0,     0,     0,    16,    19,     0,
      85,     0,    80,    67,     0,    72,    64,    34,   171,   170,
       0,   145,    36,   122,    63,   162,   117,    63,    18,     0,
     146,     0,    69,     0,     0,   172,    35,   163,     0,    15,
      81,   144,    37,   174,   173,   164
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -343,  -343,   -57,  -343,  -343,  -343,  -343,  -343,  -243,    -3,
    -343,  -343,  -343,  -343,   -45,   -87,  -118,  -304,  -101,  -343,
    -137,   -16,  -343,    -5,     0,  -337,  -343,  -343,  -343,  -343,
    -343,   -30,  -343,  -343,   154,  -343,  -343,  -343,  -343,  -343,
    -126,   300,   -23,  -343,   270,     1,  -233,   169,  -162,    95,
     205,  -343,  -343,   -54,  -343,    42,  -186,  -343,   212,    29,
      46,  -343,  -343,  -343,    47,   206,    98,  -343,  -342,    52,
     120,  -108,  -343,  -160,  -343,   -85,  -343,  -343,   288,   294,
     295,   297,  -343,  -203,  -343,   113,   106,   112,   115,   111,
     114,   119,   121,   109,   117,   268,  -343,   108,     2,   -60,
     162,  -343,  -195,  -343,    -9,  -343,  -343,   163,  -343,  -343
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   369,   419,   322,    65,
     259,   245,    66,    67,   191,   185,   192,   359,   360,   412,
     413,    68,    69,    70,   126,   332,    72,    73,    74,   380,
     320,   321,   382,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   236,   203,    85,    86,    87,    88,    89,
      90,   394,    91,   325,   393,   312,   262,    92,    93,    94,
     135,    95,   160,    96,   173,   174,    97,    98,    99,   100,
     101,   396,   102,   211,   212,   387,   426,   222,   223,   224,
     225,   226,   285,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   128,   119,
     177,   120,   193,   304,   121,   122,   123,   180,   181,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   133,   118,   137,    71,   195,   175,   184,    71,   307,
     275,   286,   140,   251,   263,   165,   202,   246,   330,   242,
     383,   421,   363,   364,   270,   395,   256,   168,    35,   136,
     176,   -98,   168,   233,   134,    35,   372,   187,   188,   310,
     302,   213,   257,   134,   214,   138,    27,   258,   282,   145,
       4,   146,   168,   139,   134,   134,    32,   168,   231,    35,
     142,   234,    71,   215,   118,   183,    55,   197,   231,   220,
      71,   166,   167,   395,   221,    57,   311,   425,   334,   169,
     428,     7,    57,     9,   182,   410,   391,   205,   392,   243,
      55,    35,   134,     4,   168,   189,    48,   199,    50,   200,
     150,   210,   194,   150,   232,   155,    57,   201,   155,   196,
     299,   300,   171,   172,   239,   384,   158,   204,   230,   158,
     208,   260,   216,   338,   237,   318,   235,   347,   230,   150,
     147,   148,   149,  -152,   155,   168,   371,  -152,  -152,    22,
      23,  -152,  -152,   365,   168,   158,  -152,  -152,  -157,  -157,
    -152,   217,  -157,   409,    20,    21,    22,    23,   218,   264,
     168,   151,   152,   153,   154,   168,   168,   156,   157,   228,
     219,   240,   186,   227,   210,   198,   176,   186,   244,   252,
     253,   254,   255,   268,   266,   261,   272,   269,   273,   283,
     274,     2,   434,     3,   303,   305,   314,   316,   319,   324,
     326,   327,   341,   333,   337,   340,   339,   242,   168,   344,
     345,   349,   356,   357,   230,   230,   230,   230,   230,   230,
     358,   362,   230,   230,   230,   230,   230,   230,   168,   168,
     366,   367,    30,    31,   301,   168,   373,    33,    34,    35,
      36,    37,   375,   306,   368,   376,   313,   378,   379,   385,
     381,   389,   390,   398,   323,   186,    48,    49,    50,    51,
     329,   323,   331,   399,   186,   406,   404,    52,    53,    54,
      55,    56,   415,   168,   335,   336,   417,   423,   424,   435,
     186,   397,   429,   210,   407,   186,   186,   432,    58,    59,
     355,   248,   238,   374,   159,   170,   346,   317,   278,   207,
     170,   328,   127,   131,   206,   209,   281,   427,   205,   348,
     416,   350,   161,   141,    71,   143,    71,   351,   162,   163,
     170,   164,   289,   184,   168,   170,   168,   168,   288,   290,
     292,   179,   370,   291,   296,   298,   293,    71,   265,   230,
     168,   418,   294,   297,   267,   295,   388,   377,   186,   186,
       0,     0,    71,   401,     0,   186,   190,   331,   323,     0,
       0,   386,   170,     0,     0,     0,     0,   168,   168,     0,
     400,     0,     0,   402,   411,    71,   405,     0,    71,     0,
       0,    71,     0,   420,     0,   168,     0,   408,     0,   168,
       0,     0,   168,   186,     0,   386,     0,     0,    71,     0,
     118,   422,     0,   170,    71,     0,     0,   431,     0,     0,
     205,     0,   170,     0,   331,   168,   430,   331,     0,     0,
       0,    71,     0,     0,   168,     0,   433,     0,   170,     0,
     241,     0,     0,   170,   170,   205,   247,     0,   249,     0,
       0,     0,     0,     0,   361,     0,   361,   361,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   287,   287,   287,   287,   287,   287,   186,   271,
     287,   287,   287,   287,   287,     0,   170,   170,     0,   276,
     229,     0,   277,   170,   280,   361,     0,     0,     0,   361,
      30,    31,   414,   284,     0,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,    48,    49,    50,    51,     0,     0,
       0,   170,     0,   309,   414,    52,    53,    54,   315,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    59,     0,   280,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,   170,   170,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,   287,   170,     0,
       0,     0,     0,     0,     0,    30,    31,     0,   353,   354,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   170,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,   170,    56,     0,     0,   170,     0,     0,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,   403,
       0,     0,     1,   170,     2,     0,     3,     0,     4,     0,
       5,     6,   170,     7,     8,     9,    10,    11,    12,    13,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,    24,    25,     0,    26,    27,
      28,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,     1,     0,     2,     0,     3,     0,     4,
     132,     0,     6,     0,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    15,    16,    17,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    34,    35,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
      57,     4,    58,    59,     6,     0,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,    15,    16,    17,
       0,     0,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,    27,    28,     0,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    34,    35,    36,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     1,     0,
       2,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    27,   250,     0,     0,     0,
       0,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,    27,    28,    57,     0,    58,    59,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   129,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    27,    28,    57,     0,    58,    59,    30,    31,     0,
       0,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     2,   125,     3,     0,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,   130,
       0,     0,    52,    53,    54,    55,    56,     0,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    27,
      28,    57,     0,    58,    59,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    27,    28,    57,
       0,    58,    59,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,   178,     0,     0,     0,     0,     0,     0,
       2,     0,     3,   279,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    27,    28,    57,     0,    58,
      59,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,    27,    28,    57,     0,    58,    59,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   308,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,   130,     0,     0,    52,    53,    54,    55,    56,     0,
       0,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    27,    28,    57,     0,    58,    59,    30,    31,     0,
       0,    32,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   129,     0,     0,
       0,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,     0,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    27,
      28,    57,     0,    58,    59,    30,    31,     0,     0,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     2,   342,     3,     0,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,    27,    28,    57,
       0,    58,    59,    30,    31,     0,     0,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       2,   352,     3,     0,     0,     0,     0,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,     0,     0,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,    27,    28,    57,     0,    58,
      59,    30,    31,     0,     0,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,    27,    28,    57,     0,    58,    59,    30,
      31,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,   145,
      48,   146,    50,   147,   148,   149,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,     0,   150,   151,
     152,   153,   154,   155,   156,   157,     0,     0,     0,     0,
       0,     0,     0,     0,   158
};

static const yytype_int16 yycheck[] =
{
       0,     4,     0,     8,     4,    62,    29,    52,     8,   242,
     196,   214,    12,   139,   174,    24,     4,   135,   261,     8,
     357,     6,   326,   327,   186,   367,   144,    27,    53,     5,
      30,     5,    32,     7,     5,    53,   340,    53,    54,     6,
     235,    77,   160,    14,    80,     5,    40,   165,   210,    69,
       9,    71,    52,     5,    25,    26,    50,    57,   118,    53,
      14,    35,    62,    99,    62,    42,    84,    70,   128,    88,
      70,    25,    26,   415,    93,   100,    43,   414,   273,    27,
     417,    14,   100,    16,    32,   389,     3,    86,     5,    78,
      84,    53,    63,     9,    94,     5,    70,     5,    72,     3,
      88,   101,     0,    88,   120,    93,   100,     3,    93,    63,
     228,   229,    49,    50,   123,   358,   104,     7,   118,   104,
      45,   166,    87,   283,   123,   251,   100,   313,   128,    88,
      73,    74,    75,    45,    93,   135,   339,    49,    50,    32,
      33,    53,    45,   329,   144,   104,    49,    50,    49,    50,
      53,    97,    53,   386,    30,    31,    32,    33,    98,   175,
     160,    89,    90,    91,    92,   165,   166,    94,    95,    76,
      96,     6,    52,    79,   174,    78,   176,    57,    10,     3,
       9,     9,     3,   183,    57,   100,    86,     7,     4,     4,
     101,     5,   425,     7,     5,     8,     6,     6,    21,     5,
       5,     5,   101,     6,     6,     5,    78,     8,   208,     8,
       6,     3,    10,    10,   214,   215,   216,   217,   218,   219,
       4,     6,   222,   223,   224,   225,   226,   227,   228,   229,
     101,     9,    46,    47,   234,   235,     6,    51,    52,    53,
      54,    55,    13,   242,    34,    78,   246,     6,    22,     4,
      23,     4,     6,     9,   254,   135,    70,    71,    72,    73,
     260,   261,   262,     6,   144,     3,    78,    81,    82,    83,
      84,    85,     3,   273,   274,   275,    10,     6,     4,     3,
     160,   368,    10,   283,   385,   165,   166,   424,   102,   103,
     320,   137,   123,   347,    24,    27,   312,   250,   203,    94,
      32,   259,     2,     3,    92,    99,   208,   415,   307,   314,
     395,   316,    24,    13,   314,    15,   316,   317,    24,    24,
      52,    24,   216,   368,   324,    57,   326,   327,   215,   217,
     219,    31,   337,   218,   225,   227,   222,   337,   176,   339,
     340,   398,   223,   226,   181,   224,   362,   352,   228,   229,
      -1,    -1,   352,   376,    -1,   235,    56,   357,   358,    -1,
      -1,   361,    94,    -1,    -1,    -1,    -1,   367,   368,    -1,
     375,    -1,    -1,   378,   390,   375,   381,    -1,   378,    -1,
      -1,   381,    -1,   399,    -1,   385,    -1,   386,    -1,   389,
      -1,    -1,   392,   273,    -1,   395,    -1,    -1,   398,    -1,
     398,   404,    -1,   135,   404,    -1,    -1,   423,    -1,    -1,
     409,    -1,   144,    -1,   414,   415,   421,   417,    -1,    -1,
      -1,   421,    -1,    -1,   424,    -1,   425,    -1,   160,    -1,
     130,    -1,    -1,   165,   166,   434,   136,    -1,   138,    -1,
      -1,    -1,    -1,    -1,   324,    -1,   326,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   214,   215,   216,   217,   218,   219,   368,   189,
     222,   223,   224,   225,   226,    -1,   228,   229,    -1,   199,
      36,    -1,   202,   235,   204,   385,    -1,    -1,    -1,   389,
      46,    47,   392,   213,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    70,    71,    72,    73,    -1,    -1,
      -1,   273,    -1,   243,   424,    81,    82,    83,   248,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,   269,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,   326,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,   339,   340,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,   318,   319,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   367,   368,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,   385,    85,    -1,    -1,   389,    -1,    -1,
     392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      -1,    -1,     3,   415,     5,    -1,     7,    -1,     9,    -1,
      11,    12,   424,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    -1,    39,    40,
      41,    -1,    -1,    44,    -1,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,   103,     3,    -1,     5,    -1,     7,    -1,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    -1,    46,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
     100,     9,   102,   103,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    -1,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,   100,    -1,   102,   103,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,   100,    -1,   102,   103,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   100,
      -1,   102,   103,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,   100,    -1,   102,
     103,    46,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,   100,    -1,   102,   103,    46,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,   100,    -1,   102,   103,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   100,
      -1,   102,   103,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,   100,    -1,   102,
     103,    46,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,   100,    -1,   102,   103,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    36,    37,    39,    40,    41,    44,
      46,    47,    50,    51,    52,    53,    54,    55,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      72,    73,    81,    82,    83,    84,    85,   100,   102,   103,
     109,   110,   111,   112,   113,   117,   120,   121,   129,   130,
     131,   132,   134,   135,   136,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   153,   154,   155,   156,   157,
     158,   160,   165,   166,   167,   169,   171,   174,   175,   176,
     177,   178,   180,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     209,   212,   213,   214,   217,     6,   132,   149,   206,     8,
      78,   149,    10,   117,   167,   168,     5,   131,     5,     5,
     132,   149,   168,   149,    48,    69,    71,    73,    74,    75,
      88,    89,    90,    91,    92,    93,    94,    95,   104,   152,
     170,   186,   187,   188,   189,   212,   168,   168,   132,   177,
     203,    49,    50,   172,   173,   150,   132,   208,    56,   149,
     215,   216,   177,    42,   122,   123,   178,   129,   129,     5,
     149,   122,   124,   210,     0,   110,   168,   117,    78,     5,
       3,     3,     4,   152,     7,   153,   166,   158,    45,   173,
     132,   181,   182,    77,    80,    99,    87,    97,    98,    96,
      88,    93,   185,   186,   187,   188,   189,    79,    76,    36,
     132,   207,   129,     7,    35,   100,   151,   153,   155,   212,
       6,   149,     8,    78,    10,   119,   124,   149,   142,   149,
      41,   148,     3,     9,     9,     3,   124,   124,   124,   118,
     122,   100,   164,   181,   129,   208,    57,   215,   132,     7,
     156,   149,    86,     4,   101,   164,   149,   149,   157,     8,
     149,   174,   156,     4,   149,   190,   191,   203,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   205,   124,
     124,   132,   210,     5,   211,     8,   153,   154,     8,   149,
       6,    43,   163,   132,     6,   149,     6,   172,   148,    21,
     138,   139,   116,   132,     5,   161,     5,     5,   163,   132,
     116,   132,   133,     6,   210,   132,   132,     6,   181,    78,
       5,   101,     6,   149,     8,     6,   129,   164,   131,     3,
     131,   132,     6,   149,   149,   139,    10,    10,     4,   125,
     126,   178,     6,   125,   125,   164,   101,     9,    34,   114,
     131,   191,   125,     6,   161,    13,    78,   131,     6,    22,
     137,    23,   140,   133,   116,     4,   132,   183,   129,     4,
       6,     3,     5,   162,   159,   176,   179,   123,     9,     6,
     131,   150,   131,   149,    78,   131,     3,   126,   153,   154,
     125,   129,   127,   128,   178,     3,   183,    10,   110,   115,
     129,     6,   117,     6,     4,   133,   184,   179,   133,    10,
     131,   129,   128,   153,   154,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   119,   120,   121,   122,   122,
     123,   124,   125,   126,   126,   127,   128,   128,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   133,   133,   134,   135,   136,   137,   137,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   144,   145,   145,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   154,   154,   154,   155,   155,
     155,   156,   156,   157,   157,   157,   158,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   167,   168,   168,   169,   170,   170,
     170,   170,   170,   171,   171,   171,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   178,
     178,   178,   179,   179,   180,   181,   181,   182,   182,   183,
     183,   183,   184,   184,   184,   185,   185,   186,   186,   186,
     186,   187,   187,   188,   188,   189,   189,   189,   190,   190,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   207,   207,   207,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   214,   214,   214,   214,   214,   214,   215,
     215,   216,   216,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     4,     4,     6,     1,     2,
       1,     1,     2,     1,     3,     2,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     0,     7,     2,     3,     2,     0,     5,
       1,     2,     2,     0,     6,     1,     1,     5,     5,     6,
       7,     9,     5,     3,     5,     7,     1,     1,     1,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     0,     1,
       1,     1,     3,     4,     4,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     1,     3,     2,     2,     1,     2,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     5,     1,     1,
       1,     1,     1,     1,     9,     7,     7,     6,     0,     1,
       1,     1,     1,     4,     1,     3,     1,     1,     2,     1,
       2,     2,     2,     3,     9,     1,     3,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     4,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     3,     3,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     2
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
#line 2002 "src/parser.c"
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
#line 2304 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty.\n"); YYERROR; }
#line 2310 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2316 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2322 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2328 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2334 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2340 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2346 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2352 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2358 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2364 "src/parser.c"
    break;

  case 13:
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2370 "src/parser.c"
    break;

  case 14:
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2376 "src/parser.c"
    break;

  case 15:
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
  }
#line 2388 "src/parser.c"
    break;

  case 16:
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2394 "src/parser.c"
    break;

  case 17:
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2400 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2406 "src/parser.c"
    break;

  case 20:
#line 173 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2412 "src/parser.c"
    break;

  case 21:
#line 173 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2418 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2424 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2430 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2437 "src/parser.c"
    break;

  case 25:
#line 179 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2444 "src/parser.c"
    break;

  case 26:
#line 182 "src/gwion.y"
                                              {
  if((yyvsp[-1].func_base)->td->array && !(yyvsp[-1].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[-2].flag) | (yyvsp[0].flag));
}
#line 2456 "src/parser.c"
    break;

  case 27:
#line 189 "src/gwion.y"
                                                                      {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2467 "src/parser.c"
    break;

  case 29:
#line 196 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2473 "src/parser.c"
    break;

  case 30:
#line 198 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2481 "src/parser.c"
    break;

  case 31:
#line 202 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2489 "src/parser.c"
    break;

  case 32:
#line 206 "src/gwion.y"
                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2495 "src/parser.c"
    break;

  case 33:
#line 207 "src/gwion.y"
              { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2501 "src/parser.c"
    break;

  case 34:
#line 207 "src/gwion.y"
                                                { (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list); }
#line 2507 "src/parser.c"
    break;

  case 35:
#line 208 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2513 "src/parser.c"
    break;

  case 36:
#line 209 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2519 "src/parser.c"
    break;

  case 37:
#line 209 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2529 "src/parser.c"
    break;

  case 38:
#line 216 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2535 "src/parser.c"
    break;

  case 39:
#line 217 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2541 "src/parser.c"
    break;

  case 40:
#line 221 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2547 "src/parser.c"
    break;

  case 41:
#line 222 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2553 "src/parser.c"
    break;

  case 42:
#line 223 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2559 "src/parser.c"
    break;

  case 43:
#line 224 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2565 "src/parser.c"
    break;

  case 44:
#line 225 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2571 "src/parser.c"
    break;

  case 45:
#line 226 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2577 "src/parser.c"
    break;

  case 46:
#line 227 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2583 "src/parser.c"
    break;

  case 47:
#line 228 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2589 "src/parser.c"
    break;

  case 48:
#line 229 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2595 "src/parser.c"
    break;

  case 49:
#line 230 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2601 "src/parser.c"
    break;

  case 60:
#line 247 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2607 "src/parser.c"
    break;

  case 61:
#line 248 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2617 "src/parser.c"
    break;

  case 63:
#line 255 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2623 "src/parser.c"
    break;

  case 64:
#line 258 "src/gwion.y"
                                                            { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-3].id_list), (yyvsp[-1].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-5].flag); }
#line 2630 "src/parser.c"
    break;

  case 65:
#line 261 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2636 "src/parser.c"
    break;

  case 66:
#line 263 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2642 "src/parser.c"
    break;

  case 67:
#line 265 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2648 "src/parser.c"
    break;

  case 68:
#line 265 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2654 "src/parser.c"
    break;

  case 69:
#line 268 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2665 "src/parser.c"
    break;

  case 70:
#line 276 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2671 "src/parser.c"
    break;

  case 71:
#line 277 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2677 "src/parser.c"
    break;

  case 72:
#line 279 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2683 "src/parser.c"
    break;

  case 73:
#line 279 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2689 "src/parser.c"
    break;

  case 74:
#line 281 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2700 "src/parser.c"
    break;

  case 75:
#line 289 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2706 "src/parser.c"
    break;

  case 76:
#line 290 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2712 "src/parser.c"
    break;

  case 77:
#line 294 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2718 "src/parser.c"
    break;

  case 78:
#line 296 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2724 "src/parser.c"
    break;

  case 79:
#line 298 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2730 "src/parser.c"
    break;

  case 80:
#line 300 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2736 "src/parser.c"
    break;

  case 81:
#line 302 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2742 "src/parser.c"
    break;

  case 82:
#line 304 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2748 "src/parser.c"
    break;

  case 83:
#line 307 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2754 "src/parser.c"
    break;

  case 84:
#line 311 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2760 "src/parser.c"
    break;

  case 85:
#line 313 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2766 "src/parser.c"
    break;

  case 86:
#line 317 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2772 "src/parser.c"
    break;

  case 87:
#line 318 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2778 "src/parser.c"
    break;

  case 88:
#line 319 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2784 "src/parser.c"
    break;

  case 89:
#line 322 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2790 "src/parser.c"
    break;

  case 90:
#line 323 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2796 "src/parser.c"
    break;

  case 91:
#line 327 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2802 "src/parser.c"
    break;

  case 92:
#line 328 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2808 "src/parser.c"
    break;

  case 94:
#line 331 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2814 "src/parser.c"
    break;

  case 96:
#line 333 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2820 "src/parser.c"
    break;

  case 97:
#line 335 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2826 "src/parser.c"
    break;

  case 98:
#line 335 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2832 "src/parser.c"
    break;

  case 102:
#line 340 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2838 "src/parser.c"
    break;

  case 103:
#line 341 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2844 "src/parser.c"
    break;

  case 104:
#line 342 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2850 "src/parser.c"
    break;

  case 105:
#line 346 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2856 "src/parser.c"
    break;

  case 106:
#line 347 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2862 "src/parser.c"
    break;

  case 107:
#line 348 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2868 "src/parser.c"
    break;

  case 108:
#line 352 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2874 "src/parser.c"
    break;

  case 109:
#line 353 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2880 "src/parser.c"
    break;

  case 110:
#line 354 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2886 "src/parser.c"
    break;

  case 115:
#line 359 "src/gwion.y"
                                 { (yyval.exp)= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     insert_symbol("auto"), GET_LOC(&(yyloc))), (yyvsp[0].var_decl_list)); }
#line 2893 "src/parser.c"
    break;

  case 116:
#line 361 "src/gwion.y"
                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); }
#line 2899 "src/parser.c"
    break;

  case 117:
#line 362 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref | ae_flag_nonnull; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2905 "src/parser.c"
    break;

  case 119:
#line 363 "src/gwion.y"
                                    { (yyvsp[0].exp)->d.exp_decl.td->flag |= (yyvsp[-1].flag); (yyval.exp) = (yyvsp[0].exp); }
#line 2911 "src/parser.c"
    break;

  case 120:
#line 365 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2917 "src/parser.c"
    break;

  case 121:
#line 365 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2923 "src/parser.c"
    break;

  case 122:
#line 366 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2929 "src/parser.c"
    break;

  case 123:
#line 366 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2935 "src/parser.c"
    break;

  case 124:
#line 367 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2941 "src/parser.c"
    break;

  case 125:
#line 367 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2947 "src/parser.c"
    break;

  case 126:
#line 369 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2953 "src/parser.c"
    break;

  case 127:
#line 369 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2959 "src/parser.c"
    break;

  case 128:
#line 371 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2965 "src/parser.c"
    break;

  case 129:
#line 372 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2971 "src/parser.c"
    break;

  case 130:
#line 375 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2977 "src/parser.c"
    break;

  case 131:
#line 376 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2983 "src/parser.c"
    break;

  case 132:
#line 379 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2989 "src/parser.c"
    break;

  case 133:
#line 380 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 2995 "src/parser.c"
    break;

  case 134:
#line 381 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3001 "src/parser.c"
    break;

  case 135:
#line 384 "src/gwion.y"
           { (yyval.flag) = 0; }
#line 3007 "src/parser.c"
    break;

  case 136:
#line 384 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[0].flag); }
#line 3013 "src/parser.c"
    break;

  case 137:
#line 388 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3019 "src/parser.c"
    break;

  case 144:
#line 395 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3025 "src/parser.c"
    break;

  case 145:
#line 397 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3031 "src/parser.c"
    break;

  case 146:
#line 399 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3037 "src/parser.c"
    break;

  case 147:
#line 401 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
    }
#line 3045 "src/parser.c"
    break;

  case 148:
#line 405 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3051 "src/parser.c"
    break;

  case 149:
#line 405 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3057 "src/parser.c"
    break;

  case 150:
#line 406 "src/gwion.y"
                   { (yyval.ival) = ae_flag_nonnull; }
#line 3063 "src/parser.c"
    break;

  case 152:
#line 409 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3069 "src/parser.c"
    break;

  case 153:
#line 410 "src/gwion.y"
                             { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[-2].type_list); }
#line 3075 "src/parser.c"
    break;

  case 155:
#line 415 "src/gwion.y"
                                       { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3081 "src/parser.c"
    break;

  case 156:
#line 419 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3087 "src/parser.c"
    break;

  case 157:
#line 420 "src/gwion.y"
                { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3093 "src/parser.c"
    break;

  case 158:
#line 424 "src/gwion.y"
                               { (yyvsp[-1].type_decl)->flag |= (yyvsp[0].ival); (yyval.type_decl) = (yyvsp[-1].type_decl); }
#line 3099 "src/parser.c"
    break;

  case 159:
#line 427 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3105 "src/parser.c"
    break;

  case 160:
#line 428 "src/gwion.y"
                      { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), const); }
#line 3111 "src/parser.c"
    break;

  case 161:
#line 429 "src/gwion.y"
                       { (yyval.type_decl) = (yyvsp[0].type_decl); SET_FLAG((yyval.type_decl), nonnull); }
#line 3117 "src/parser.c"
    break;

  case 162:
#line 431 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3123 "src/parser.c"
    break;

  case 163:
#line 432 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3129 "src/parser.c"
    break;

  case 164:
#line 435 "src/gwion.y"
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
#line 3151 "src/parser.c"
    break;

  case 165:
#line 455 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3157 "src/parser.c"
    break;

  case 166:
#line 456 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3163 "src/parser.c"
    break;

  case 167:
#line 459 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3169 "src/parser.c"
    break;

  case 168:
#line 460 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3175 "src/parser.c"
    break;

  case 169:
#line 462 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3181 "src/parser.c"
    break;

  case 170:
#line 463 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3187 "src/parser.c"
    break;

  case 171:
#line 464 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3193 "src/parser.c"
    break;

  case 172:
#line 465 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3199 "src/parser.c"
    break;

  case 173:
#line 466 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3205 "src/parser.c"
    break;

  case 174:
#line 467 "src/gwion.y"
                     { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3211 "src/parser.c"
    break;

  case 189:
#line 475 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3217 "src/parser.c"
    break;

  case 191:
#line 478 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3223 "src/parser.c"
    break;

  case 192:
#line 480 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3229 "src/parser.c"
    break;

  case 194:
#line 482 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3235 "src/parser.c"
    break;

  case 196:
#line 483 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3241 "src/parser.c"
    break;

  case 198:
#line 484 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3247 "src/parser.c"
    break;

  case 200:
#line 485 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3253 "src/parser.c"
    break;

  case 202:
#line 486 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3259 "src/parser.c"
    break;

  case 204:
#line 487 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3265 "src/parser.c"
    break;

  case 206:
#line 488 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3271 "src/parser.c"
    break;

  case 208:
#line 489 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3277 "src/parser.c"
    break;

  case 210:
#line 490 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3283 "src/parser.c"
    break;

  case 212:
#line 491 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3289 "src/parser.c"
    break;

  case 214:
#line 492 "src/gwion.y"
                                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3295 "src/parser.c"
    break;

  case 215:
#line 494 "src/gwion.y"
                                      { (yyval.exp) = new_exp_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3301 "src/parser.c"
    break;

  case 219:
#line 498 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3307 "src/parser.c"
    break;

  case 228:
#line 504 "src/gwion.y"
                                          { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3313 "src/parser.c"
    break;

  case 229:
#line 505 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3319 "src/parser.c"
    break;

  case 230:
#line 506 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3325 "src/parser.c"
    break;

  case 231:
#line 507 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3331 "src/parser.c"
    break;

  case 232:
#line 510 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3337 "src/parser.c"
    break;

  case 233:
#line 511 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3343 "src/parser.c"
    break;

  case 234:
#line 512 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3349 "src/parser.c"
    break;

  case 235:
#line 512 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3355 "src/parser.c"
    break;

  case 236:
#line 515 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3361 "src/parser.c"
    break;

  case 237:
#line 516 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3367 "src/parser.c"
    break;

  case 238:
#line 519 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3373 "src/parser.c"
    break;

  case 239:
#line 519 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3379 "src/parser.c"
    break;

  case 242:
#line 523 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3385 "src/parser.c"
    break;

  case 244:
#line 526 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3391 "src/parser.c"
    break;

  case 245:
#line 528 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3397 "src/parser.c"
    break;

  case 246:
#line 530 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3404 "src/parser.c"
    break;

  case 247:
#line 533 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3410 "src/parser.c"
    break;

  case 248:
#line 533 "src/gwion.y"
                                                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3416 "src/parser.c"
    break;

  case 249:
#line 536 "src/gwion.y"
                       { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3422 "src/parser.c"
    break;

  case 250:
#line 537 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[-1].exp); }
#line 3428 "src/parser.c"
    break;

  case 251:
#line 540 "src/gwion.y"
{
  Exp next = (yyvsp[-1].exp);
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-1].exp);
}
#line 3441 "src/parser.c"
    break;

  case 252:
#line 548 "src/gwion.y"
                 { (yyval.exp) = (yyvsp[0].exp); }
#line 3447 "src/parser.c"
    break;

  case 253:
#line 551 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3453 "src/parser.c"
    break;

  case 254:
#line 552 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3459 "src/parser.c"
    break;

  case 255:
#line 553 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3465 "src/parser.c"
    break;

  case 256:
#line 554 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3471 "src/parser.c"
    break;

  case 257:
#line 555 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3477 "src/parser.c"
    break;

  case 258:
#line 556 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3483 "src/parser.c"
    break;

  case 259:
#line 557 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3489 "src/parser.c"
    break;

  case 260:
#line 558 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3495 "src/parser.c"
    break;

  case 261:
#line 559 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3501 "src/parser.c"
    break;

  case 262:
#line 560 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3507 "src/parser.c"
    break;

  case 263:
#line 561 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3513 "src/parser.c"
    break;

  case 264:
#line 562 "src/gwion.y"
                          { (yyval.exp) = new_exp_interp(mpool(arg),     (yyvsp[0].exp)); }
#line 3519 "src/parser.c"
    break;


#line 3523 "src/parser.c"

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
#line 564 "src/gwion.y"

