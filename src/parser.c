/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2.51-de63"

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

#define LIST_FIRST(a)  map_set(&arg->map, (m_uint)a, (m_uint)a);

#define LIST_NEXT(a, b, t, c)                      \
  a = b;                                           \
  const t next = c;                                \
  const t list = (t)map_get(&arg->map, (m_uint)a); \
  list->next = next;                               \
  map_set(&arg->map, (m_uint) a, (m_uint)next);    \

#define LIST_REM(a) map_remove(&arg->map, (m_uint)a);

ANN int gwion_error(loc_t*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 105 "src/parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* ";"  */
  YYSYMBOL_COMMA = 4,                      /* ","  */
  YYSYMBOL_LPAREN = 5,                     /* "("  */
  YYSYMBOL_RPAREN = 6,                     /* ")"  */
  YYSYMBOL_LBRACK = 7,                     /* "["  */
  YYSYMBOL_RBRACK = 8,                     /* "]"  */
  YYSYMBOL_LBRACE = 9,                     /* "{"  */
  YYSYMBOL_RBRACE = 10,                    /* "}"  */
  YYSYMBOL_FUNCTION = 11,                  /* "fun"  */
  YYSYMBOL_VAR = 12,                       /* "var"  */
  YYSYMBOL_IF = 13,                        /* "if"  */
  YYSYMBOL_ELSE = 14,                      /* "else"  */
  YYSYMBOL_WHILE = 15,                     /* "while"  */
  YYSYMBOL_DO = 16,                        /* "do"  */
  YYSYMBOL_UNTIL = 17,                     /* "until"  */
  YYSYMBOL_LOOP = 18,                      /* "repeat"  */
  YYSYMBOL_FOR = 19,                       /* "for"  */
  YYSYMBOL_FOREACH = 20,                   /* "foreach"  */
  YYSYMBOL_MATCH = 21,                     /* "match"  */
  YYSYMBOL_CASE = 22,                      /* "case"  */
  YYSYMBOL_WHEN = 23,                      /* "when"  */
  YYSYMBOL_WHERE = 24,                     /* "where"  */
  YYSYMBOL_ENUM = 25,                      /* "enum"  */
  YYSYMBOL_TRETURN = 26,                   /* "return"  */
  YYSYMBOL_BREAK = 27,                     /* "break"  */
  YYSYMBOL_CONTINUE = 28,                  /* "continue"  */
  YYSYMBOL_CLASS = 29,                     /* "class"  */
  YYSYMBOL_STRUCT = 30,                    /* "struct"  */
  YYSYMBOL_STATIC = 31,                    /* "static"  */
  YYSYMBOL_GLOBAL = 32,                    /* "global"  */
  YYSYMBOL_PRIVATE = 33,                   /* "private"  */
  YYSYMBOL_PROTECT = 34,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 35,                  /* "abstract"  */
  YYSYMBOL_FINAL = 36,                     /* "final"  */
  YYSYMBOL_EXTENDS = 37,                   /* "extends"  */
  YYSYMBOL_DOT = 38,                       /* "."  */
  YYSYMBOL_OPERATOR = 39,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 40,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 41,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 42,                    /* NOELSE  */
  YYSYMBOL_UNION = 43,                     /* "union"  */
  YYSYMBOL_CONSTT = 44,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 45,                   /* "..."  */
  YYSYMBOL_VARLOOP = 46,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 47,                 /* "\\"  */
  YYSYMBOL_OPID_A = 48,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 49,                    /* OPID_E  */
  YYSYMBOL_LATE = 50,                      /* "LATE"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 53,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 54,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 55,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 56,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 57,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 58,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 59,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 60,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 61,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 62,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 63,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 64,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 65,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 66,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 67,                  /* "#if"  */
  YYSYMBOL_PP_NL = 68,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 69,                /* "require"  */
  YYSYMBOL_70_operator_id_ = 70,           /* "@<operator id>"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "&<operator id>"  */
  YYSYMBOL_ID = 72,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 73,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 74,                  /* "++"  */
  YYSYMBOL_MINUS = 75,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 76,                /* "--"  */
  YYSYMBOL_TIMES = 77,                     /* "*"  */
  YYSYMBOL_DIVIDE = 78,                    /* "/"  */
  YYSYMBOL_PERCENT = 79,                   /* "%"  */
  YYSYMBOL_DOLLAR = 80,                    /* "$"  */
  YYSYMBOL_QUESTION = 81,                  /* "?"  */
  YYSYMBOL_OPTIONS = 82,                   /* OPTIONS  */
  YYSYMBOL_COLON = 83,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 84,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 85,             /* "?:"  */
  YYSYMBOL_NEW = 86,                       /* "new"  */
  YYSYMBOL_SPORK = 87,                     /* "spork"  */
  YYSYMBOL_FORK = 88,                      /* "fork"  */
  YYSYMBOL_L_HACK = 89,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 90,                    /* ">>>"  */
  YYSYMBOL_AND = 91,                       /* "&&"  */
  YYSYMBOL_EQ = 92,                        /* "=="  */
  YYSYMBOL_GE = 93,                        /* ">="  */
  YYSYMBOL_GT = 94,                        /* ">"  */
  YYSYMBOL_LE = 95,                        /* "<="  */
  YYSYMBOL_LT = 96,                        /* "<"  */
  YYSYMBOL_NEQ = 97,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 98,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 99,               /* ">>"  */
  YYSYMBOL_S_AND = 100,                    /* "&"  */
  YYSYMBOL_S_OR = 101,                     /* "|"  */
  YYSYMBOL_S_XOR = 102,                    /* "^"  */
  YYSYMBOL_OR = 103,                       /* "||"  */
  YYSYMBOL_TMPL = 104,                     /* ":["  */
  YYSYMBOL_TILDA = 105,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 106,              /* "!"  */
  YYSYMBOL_DYNOP = 107,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 108,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 109,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 110,                   /* UTIMES  */
  YYSYMBOL_111_ = 111,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 112,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 113,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 114,                 /* $accept  */
  YYSYMBOL_prg = 115,                      /* prg  */
  YYSYMBOL_ast = 116,                      /* ast  */
  YYSYMBOL_section = 117,                  /* section  */
  YYSYMBOL_class_type = 118,               /* class_type  */
  YYSYMBOL_class_def = 119,                /* class_def  */
  YYSYMBOL_class_ext = 120,                /* class_ext  */
  YYSYMBOL_class_body = 121,               /* class_body  */
  YYSYMBOL_id_list = 122,                  /* id_list  */
  YYSYMBOL_stmt_list = 123,                /* stmt_list  */
  YYSYMBOL_fptr_base = 124,                /* fptr_base  */
  YYSYMBOL_func_base = 125,                /* func_base  */
  YYSYMBOL_fptr_def = 126,                 /* fptr_def  */
  YYSYMBOL_type_def = 127,                 /* type_def  */
  YYSYMBOL_type_decl_array = 128,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 129,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 130,          /* type_decl_empty  */
  YYSYMBOL_arg = 131,                      /* arg  */
  YYSYMBOL_arg_list = 132,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 133,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 134,                /* fptr_list  */
  YYSYMBOL_code_stmt = 135,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 136,                  /* stmt_pp  */
  YYSYMBOL_stmt = 137,                     /* stmt  */
  YYSYMBOL_opt_id = 138,                   /* opt_id  */
  YYSYMBOL_enum_def = 139,                 /* enum_def  */
  YYSYMBOL_when_exp = 140,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 141,          /* match_case_stmt  */
  YYSYMBOL_match_list = 142,               /* match_list  */
  YYSYMBOL_where_stmt = 143,               /* where_stmt  */
  YYSYMBOL_match_stmt = 144,               /* match_stmt  */
  YYSYMBOL_flow = 145,                     /* flow  */
  YYSYMBOL_loop_stmt = 146,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 147,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 148,           /* selection_stmt  */
  YYSYMBOL_breaks = 149,                   /* breaks  */
  YYSYMBOL_jump_stmt = 150,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 151,                 /* exp_stmt  */
  YYSYMBOL_exp = 152,                      /* exp  */
  YYSYMBOL_binary_exp = 153,               /* binary_exp  */
  YYSYMBOL_call_template = 154,            /* call_template  */
  YYSYMBOL_op = 155,                       /* op  */
  YYSYMBOL_array_exp = 156,                /* array_exp  */
  YYSYMBOL_array_empty = 157,              /* array_empty  */
  YYSYMBOL_range = 158,                    /* range  */
  YYSYMBOL_array = 159,                    /* array  */
  YYSYMBOL_decl_exp = 160,                 /* decl_exp  */
  YYSYMBOL_func_args = 161,                /* func_args  */
  YYSYMBOL_fptr_args = 162,                /* fptr_args  */
  YYSYMBOL_arg_type = 163,                 /* arg_type  */
  YYSYMBOL_decl_template = 164,            /* decl_template  */
  YYSYMBOL_global = 165,                   /* global  */
  YYSYMBOL_storage_flag = 166,             /* storage_flag  */
  YYSYMBOL_access_flag = 167,              /* access_flag  */
  YYSYMBOL_flag = 168,                     /* flag  */
  YYSYMBOL_final = 169,                    /* final  */
  YYSYMBOL_modifier = 170,                 /* modifier  */
  YYSYMBOL_func_def_base = 171,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 172,            /* abstract_fdef  */
  YYSYMBOL_op_op = 173,                    /* op_op  */
  YYSYMBOL_op_base = 174,                  /* op_base  */
  YYSYMBOL_operator = 175,                 /* operator  */
  YYSYMBOL_op_def = 176,                   /* op_def  */
  YYSYMBOL_func_def = 177,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 178,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 179,         /* type_decl_noflag  */
  YYSYMBOL_option = 180,                   /* option  */
  YYSYMBOL_type_decl_opt = 181,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 182,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 183,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 184,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 185,               /* union_decl  */
  YYSYMBOL_union_list = 186,               /* union_list  */
  YYSYMBOL_union_def = 187,                /* union_def  */
  YYSYMBOL_var_decl_list = 188,            /* var_decl_list  */
  YYSYMBOL_var_decl = 189,                 /* var_decl  */
  YYSYMBOL_arg_decl = 190,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 191,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 192,                    /* eq_op  */
  YYSYMBOL_rel_op = 193,                   /* rel_op  */
  YYSYMBOL_shift_op = 194,                 /* shift_op  */
  YYSYMBOL_add_op = 195,                   /* add_op  */
  YYSYMBOL_mul_op = 196,                   /* mul_op  */
  YYSYMBOL_opt_exp = 197,                  /* opt_exp  */
  YYSYMBOL_con_exp = 198,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 199,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 200,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 201,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 202,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 203,                  /* and_exp  */
  YYSYMBOL_eq_exp = 204,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 205,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 206,                /* shift_exp  */
  YYSYMBOL_add_exp = 207,                  /* add_exp  */
  YYSYMBOL_mul_exp = 208,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 209,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 210,                 /* cast_exp  */
  YYSYMBOL_unary_op = 211,                 /* unary_op  */
  YYSYMBOL_unary_exp = 212,                /* unary_exp  */
  YYSYMBOL_lambda_list = 213,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 214,               /* lambda_arg  */
  YYSYMBOL_type_list = 215,                /* type_list  */
  YYSYMBOL_call_paren = 216,               /* call_paren  */
  YYSYMBOL_post_op = 217,                  /* post_op  */
  YYSYMBOL_dot_exp = 218,                  /* dot_exp  */
  YYSYMBOL_post_exp = 219,                 /* post_exp  */
  YYSYMBOL_interp_exp = 220,               /* interp_exp  */
  YYSYMBOL_interp = 221,                   /* interp  */
  YYSYMBOL_prim_exp = 222                  /* prim_exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  165
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1828

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   368


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
     105,   106,   107,   108,   109,   110,   111,   112,   113
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   162,   162,   163,   166,   167,   171,   172,   173,   174,
     175,   176,   177,   180,   180,   182,   193,   193,   195,   195,
     197,   198,   200,   201,   203,   206,   209,   215,   222,   222,
     224,   228,   233,   234,   236,   237,   243,   244,   244,   247,
     248,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   266,   267,   268,   269,   270,   271,   272,   273,
     276,   276,   279,   285,   285,   288,   298,   299,   301,   301,
     303,   313,   314,   317,   319,   321,   323,   325,   327,   331,
     334,   336,   340,   340,   342,   343,   344,   345,   349,   350,
     354,   355,   358,   359,   360,   361,   364,   364,   366,   366,
     366,   366,   369,   370,   374,   378,   379,   380,   384,   385,
     386,   389,   389,   391,   392,   394,   394,   395,   395,   396,
     396,   398,   398,   400,   402,   402,   404,   405,   408,   409,
     410,   411,   414,   414,   416,   416,   419,   426,   435,   435,
     435,   435,   435,   437,   439,   441,   446,   452,   452,   453,
     456,   456,   456,   459,   463,   464,   467,   467,   467,   468,
     469,   469,   472,   473,   475,   475,   478,   482,   484,   485,
     488,   498,   499,   502,   503,   505,   506,   507,   508,   508,
     510,   510,   511,   511,   511,   511,   512,   512,   513,   513,
     514,   514,   514,   516,   516,   517,   518,   520,   523,   523,
     524,   524,   525,   525,   526,   526,   527,   527,   528,   528,
     529,   529,   530,   530,   531,   531,   532,   532,   533,   533,
     535,   535,   538,   538,   538,   539,   539,   539,   539,   542,
     543,   544,   545,   546,   547,   548,   551,   552,   553,   553,
     556,   557,   561,   561,   563,   563,   565,   574,   575,   577,
     579,   582,   584,   586,   590,   591,   592,   594,   595,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\";\"", "\",\"",
  "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"fun\"",
  "\"var\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"foreach\"", "\"match\"", "\"case\"",
  "\"when\"", "\"where\"", "\"enum\"", "\"return\"", "\"break\"",
  "\"continue\"", "\"class\"", "\"struct\"", "\"static\"", "\"global\"",
  "\"private\"", "\"protect\"", "\"abstract\"", "\"final\"", "\"extends\"",
  "\".\"", "\"operator\"", "\"typedef\"", "\"funcdef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"", "OPID_A",
  "OPID_E", "\"LATE\"", "\"<integer>\"", "FLOATT", "\"<litteral string>\"",
  "\"<litteral char>\"", "\"`\"", "\"<interp string>\"", "INTERP_EXP",
  "\"<interp string>`\"", "\"<comment>\"", "\"#include\"", "\"#define\"",
  "\"#pragma\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"",
  "\"#if\"", "\"\\n\"", "\"require\"", "\"@<operator id>\"",
  "\"&<operator id>\"", "\"<identifier>\"", "\"+\"", "\"++\"", "\"-\"",
  "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "OPTIONS",
  "\":\"", "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"",
  "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"",
  "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"",
  "\"||\"", "\":[\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"",
  "RANGE_EMPTY", "UMINUS", "UTIMES", "\"=\"", "STMT_ASSOC", "STMT_NOASSOC",
  "$accept", "prg", "ast", "section", "class_type", "class_def",
  "class_ext", "class_body", "id_list", "stmt_list", "fptr_base",
  "func_base", "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "opt_id", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "where_stmt", "match_stmt", "flow",
  "loop_stmt", "varloop_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "range", "array", "decl_exp", "func_args", "fptr_args",
  "arg_type", "decl_template", "global", "storage_flag", "access_flag",
  "flag", "final", "modifier", "func_def_base", "abstract_fdef", "op_op",
  "op_base", "operator", "op_def", "func_def", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "union_decl", "union_list",
  "union_def", "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "prim_exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368
};
#endif

#define YYPACT_NINF (-296)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     424,  -296,  1034,   890,   528,   111,  -296,    33,  -296,   727,
    -296,    36,    62,    69,  1662,   111,   190,  -296,  -296,  -296,
    -296,    82,   111,   111,   111,  -296,  1662,   -16,  1722,  -296,
    -296,  -296,  -296,  -296,   956,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,    -4,    -4,   115,   115,  1662,  -296,  -296,   140,   424,
    -296,   111,  -296,   727,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   141,  -296,  -296,  -296,    25,  -296,  -296,   131,   -18,
    -296,   157,  -296,  -296,  -296,  -296,  -296,     3,  -296,  -296,
    -296,   111,  -296,  -296,   -46,    85,    81,    87,   100,   -26,
      65,    51,    92,    76,   119,   125,  1722,  -296,   115,  -296,
    -296,    24,   158,  -296,  -296,    80,  -296,  1662,    19,  -296,
     632,  -296,  -296,  -296,  -296,   203,  -296,  -296,   178,   163,
    1662,   153,  1662,   805,   151,    79,   152,  -296,   208,  -296,
      -4,   220,    -4,   155,    11,   -16,  -296,  -296,   956,  -296,
      28,  -296,   124,  -296,  -296,   191,   134,  -296,   223,   159,
    -296,  -296,  -296,  -296,    17,  -296,  -296,   183,  -296,  1662,
    -296,   229,  -296,  1662,  1662,  1662,  1662,  1119,  -296,  -296,
    -296,   975,   115,    -4,    -4,  1662,  1722,  1722,  1722,  1722,
    1722,  1722,  -296,  -296,  1722,  -296,  -296,  -296,  -296,  1722,
    -296,  -296,  1722,  -296,  -296,  1722,  -296,  -296,  -296,  1722,
    1722,    -4,  -296,  -296,  1185,   161,  -296,    -4,   231,  -296,
    -296,  -296,   956,  -296,   102,   239,  1270,  -296,    -4,    27,
    -296,    -4,  -296,    -4,    90,  1662,   167,   805,   164,   216,
    -296,   240,  -296,   176,    -4,    27,   180,   146,  -296,  -296,
    -296,   956,  -296,   159,  -296,  -296,  -296,  1355,  -296,  -296,
    -296,  -296,  -296,   181,   168,  -296,   -18,  -296,  -296,  -296,
    -296,   118,   203,  -296,  -296,  -296,  -296,  -296,   249,  -296,
    -296,  -296,  -296,   250,  -296,   251,   186,   255,   185,  -296,
      85,    81,    87,   100,   -26,    65,    51,    92,    76,   119,
     125,  -296,  -296,   256,   253,  1433,  -296,  -296,  -296,  1518,
    -296,  -296,   121,   197,  -296,   259,  -296,   265,   115,   200,
     201,   727,   217,   727,  1596,  1662,  1662,  -296,    59,   202,
     146,   197,  -296,   276,   278,   146,   202,   274,  -296,  -296,
     146,   727,   279,    -4,    -4,    -4,   223,  -296,   280,  1722,
      -4,  -296,  -296,   177,  -296,  -296,   223,   204,    -4,  -296,
    -296,   146,   146,   272,  -296,  -296,   727,   188,    13,    47,
     264,  -296,  -296,    48,   286,  -296,  -296,    -4,  -296,  -296,
     129,    55,   254,  -296,  -296,   288,   284,   287,  -296,   186,
    -296,  -296,  -296,  -296,   157,  1662,  -296,   220,  -296,   727,
    -296,   727,   727,  1662,   211,   727,  -296,   225,  -296,  -296,
    -296,  -296,    15,   226,    55,   289,    -4,   291,    -4,  -296,
    -296,  -296,   -18,    27,  -296,  -296,  -296,   255,   727,  -296,
    -296,  -296,   298,  -296,  -296,  -296,   424,   296,   300,   727,
    -296,   424,   301,  -296,  -296,  -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    89,     0,     0,     0,   131,   164,     0,    71,     0,
      72,     0,     0,     0,     0,   131,     0,    82,    83,    13,
      14,   147,   131,   131,   131,   163,     0,   239,     0,   162,
     260,   261,   263,   264,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   259,   244,   222,   245,
     223,     0,     0,   226,   227,     0,   228,   225,     0,     2,
       4,   131,     8,     6,    11,    12,    55,    58,    22,     9,
      56,     0,    53,    59,    54,     0,    57,    52,     0,    90,
     111,   112,   266,   265,    92,   150,   151,     0,   152,     7,
     165,   131,    10,   113,   195,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,     0,   220,     0,   224,
     253,   229,   262,   247,   270,     0,   105,     0,     0,    39,
       0,   124,   123,   126,   127,     0,   125,   129,   128,   133,
       0,     0,     0,     0,     0,     0,    61,    85,     0,   148,
       0,     0,     0,     0,     0,   236,   238,   231,     0,   254,
       0,   257,    97,    31,   235,   154,   158,   160,    29,     0,
      30,   232,   233,   234,     0,     1,     5,   133,    23,     0,
      87,     0,    88,     0,     0,     0,     0,     0,   107,   226,
     227,     0,     0,     0,     0,   194,     0,     0,     0,     0,
       0,     0,   180,   181,     0,   185,   183,   184,   182,     0,
     186,   187,     0,   188,   189,     0,   190,   191,   192,     0,
       0,     0,   230,   269,     0,     0,   252,     0,     0,   248,
     249,   251,     0,   268,     0,   102,     0,    40,   116,     0,
     130,     0,   132,     0,     0,     0,     0,     0,     0,     0,
      60,     0,    84,     0,   118,     0,     0,   122,    79,   237,
     255,     0,   153,     0,   156,   157,   159,     0,    28,   161,
     267,   134,   135,     0,     0,    86,    91,    93,    95,    94,
     106,     0,     0,   101,    98,    99,   100,   138,     0,   140,
     139,   142,   141,     0,   149,     0,     0,   193,     0,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     219,   221,   246,   240,     0,     0,   250,   258,   110,     0,
     103,   109,     0,     0,    34,   115,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
     122,   179,    37,   117,     0,   122,     0,     0,   256,   155,
     122,     0,     0,     0,     0,     0,   173,   114,   172,     0,
       0,    96,   243,     0,   104,   108,   175,    33,     0,   119,
     136,   122,   122,    80,    74,    78,     0,     0,     0,    64,
      69,    67,    20,     0,     0,   178,    36,     0,    26,    24,
       0,     0,    17,    73,   146,     0,     0,     0,   174,     0,
     196,   241,   242,   177,   176,     0,    35,     0,    25,     0,
      75,     0,     0,     0,     0,     0,    70,     0,    62,    27,
      38,   121,    97,     0,   168,     0,     0,     0,     0,   144,
     145,   171,    32,     0,    81,    76,    77,    63,     0,    68,
      21,   166,     0,   169,   170,    16,    19,     0,     0,    65,
     167,    18,     0,   143,   137,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -126,   -55,  -296,  -296,  -296,  -296,   -23,    -3,
    -296,  -296,  -296,  -296,   -37,  -101,   -45,  -295,  -296,   -58,
    -296,   -43,  -296,    -9,  -296,  -296,  -296,    -6,  -296,  -296,
    -296,   194,  -296,  -296,  -296,  -296,  -296,  -116,     0,   -21,
     218,  -296,   -74,   -29,   219,  -150,     4,    56,   -64,  -236,
    -199,   313,   207,  -296,    21,   170,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,    86,  -296,   179,  -296,   -27,
    -296,  -296,   -73,  -296,   -47,  -296,    12,  -296,  -296,   165,
     166,   171,   172,  -296,  -174,  -296,   162,   156,   169,   173,
     154,   174,   149,   160,   150,   142,   175,   269,    -2,   214,
    -296,    10,  -296,   -89,  -296,  -296,  -135,  -296,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,    59,    60,    61,    62,   417,   442,   373,    63,
     141,   125,    64,    65,   153,   161,   303,   314,   315,   332,
     333,    66,    67,    68,   241,    69,   404,   327,   328,   406,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     252,   277,    80,    81,    82,    83,    84,   229,   245,   318,
     337,   126,   127,   128,   129,   233,   263,    85,    86,   278,
     182,    87,    88,    89,   155,   156,   256,   157,   158,    90,
      91,   414,   415,    92,   347,   348,   357,   376,   194,   199,
     202,   205,   209,   288,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   146,
     108,   304,   306,   109,   110,   111,   151,   112,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,   120,   115,   118,   166,   144,   154,   178,   258,   334,
     162,   163,   289,   250,   135,   160,   138,   237,   431,   402,
       4,   173,   221,   173,   159,   159,   147,   225,   170,   -97,
     174,   214,   173,   316,   150,   185,   136,   219,   130,   186,
      25,   132,   181,   140,   142,   143,    29,    25,   385,   386,
     387,   173,   407,    29,   168,   164,   145,   187,   408,   174,
     159,   174,   215,   396,   175,   213,   192,   133,   152,   370,
     403,   193,   317,   216,   134,   152,   171,    47,    48,    49,
      50,   326,   167,   173,   173,   251,   223,   307,   239,   176,
     179,   180,   283,   175,   173,   175,   321,   246,    47,    25,
      49,   248,   226,   243,   212,    29,   173,   260,    56,    57,
     308,   168,   184,   159,   122,   159,   338,   224,   176,   217,
     176,   324,   173,   437,     4,   173,   225,   412,   217,   355,
     234,   374,   236,   407,   172,   173,   379,   411,   285,   284,
     165,   382,   121,   122,   123,   124,   169,   286,   150,   200,
     201,   310,   266,   206,   207,   208,   159,   159,   195,   196,
     197,   198,   397,   398,   177,   203,   301,   204,     8,   264,
      10,   173,   173,   323,   341,   390,   188,   271,   267,   268,
     269,   173,   189,   392,   159,   287,   319,   438,   320,   190,
     159,   313,   173,   137,   401,     2,   388,     3,   231,   232,
     191,   159,     6,   210,   159,   211,   159,   331,   228,   121,
     122,   242,   173,   222,   118,   254,   255,   159,   261,   232,
     364,   173,   150,   238,   240,   244,   312,   247,   217,   253,
     257,   152,   265,   302,    25,   322,   305,    27,   326,    28,
      29,    30,    31,    32,    33,    34,   309,   325,   330,   329,
     336,   150,   335,   340,   343,   344,   345,   271,   346,   173,
     350,   351,    46,   358,    47,    48,    49,    50,   349,   356,
      51,   359,   361,   362,   372,   360,    52,    53,    54,    55,
     377,   378,   393,   381,   389,   384,   399,   395,   405,   409,
     419,   416,   418,   420,   428,    56,    57,   430,   432,   434,
     436,   440,   443,   444,   368,   353,   313,   313,   313,   271,
     441,   445,   363,   380,   365,   435,   159,   159,   159,   410,
     178,   313,   371,   159,   367,   235,   369,   394,   342,   218,
     220,   159,   383,   423,   139,   230,   413,   262,   259,   339,
     331,   433,   421,   375,   291,   294,   279,   280,   296,   290,
     159,   299,   281,   282,   159,   298,   183,   400,   292,   249,
     391,     0,   297,   293,     0,     0,     0,     0,   295,   413,
       0,     0,     0,     0,   422,     0,     0,     0,     0,   160,
       0,   313,     0,     0,     0,   300,   166,   159,     0,   159,
     424,   159,   425,   426,     0,     0,   429,     0,     0,     0,
       0,     0,     0,   427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   439,     0,     1,     0,     2,
     168,     3,     0,     4,     0,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,    23,     0,    24,    25,     0,
      26,    27,     0,    28,    29,    30,    31,    32,    33,    34,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,     0,    46,     0,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,     1,     0,     2,     0,     3,     0,     4,   119,     0,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    26,    27,     0,    28,    29,    30,
      31,    32,    33,    34,     0,     0,     0,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
      46,     0,    47,    48,    49,    50,     0,     0,    51,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     1,     0,     2,     0,     3,
       0,     4,   227,     0,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
       0,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,    46,     0,    47,    48,    49,    50,
       0,     0,    51,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    56,    57,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,    46,
       0,    47,    48,    49,    50,     0,     0,    51,     1,     0,
       2,     0,     3,    52,    53,    54,    55,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    27,     0,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,    52,    53,    54,    55,     2,     0,     3,   116,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    27,     0,    28,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    46,     3,    47,    48,    49,    50,     6,     0,
      51,     0,     0,   117,     0,     0,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,     0,     0,     0,
      25,     0,     0,    27,     0,    28,    29,    30,    31,    32,
      33,    34,   148,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,     0,     0,     0,    46,     0,
      47,    48,    49,    50,     0,     0,    51,     0,     0,     2,
     114,     3,    52,    53,    54,    55,     6,     0,   203,    47,
     204,    49,   206,   207,   208,     0,     0,   273,     0,     0,
       0,    56,    57,     0,     0,     0,     0,   274,   195,   196,
     197,   198,   275,   200,   201,     0,     0,     0,    25,     0,
       0,    27,   276,    28,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,    47,    48,
      49,    50,     0,     0,    51,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     2,     0,     3,   270,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,    27,     0,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    46,     3,    47,    48,    49,    50,     6,     0,    51,
       0,     0,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     0,     0,     0,    25,
       0,     0,    27,     0,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,   117,     0,
       0,    52,    53,    54,    55,     2,     0,     3,   311,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    27,     0,    28,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,    47,    48,    49,    50,     0,     0,
      51,     0,     0,     0,     0,     0,    52,    53,    54,    55,
       2,     0,     3,   116,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    27,     0,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,    47,
      48,    49,    50,     0,     0,    51,     0,     0,     2,   352,
       3,    52,    53,    54,    55,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
      27,     0,    28,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,    47,    48,    49,
      50,     0,     0,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,     2,     0,     3,   354,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    27,     0,    28,    29,    30,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,    47,    48,    49,    50,     0,     0,    51,     0,
       0,     2,   366,     3,    52,    53,    54,    55,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,    27,     0,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    46,     3,
      47,    48,    49,    50,     6,     0,    51,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,     0,     0,    25,     0,     0,    27,
       0,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,    46,     0,    47,    48,    49,    50,
       0,     0,    51,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    27,
       0,    28,     0,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,    47,    48,    49,    50,
       0,     0,    51,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    59,    26,    51,    81,   158,   245,
      53,    54,   186,   148,    14,    52,    16,   133,     3,     6,
       9,     4,   111,     4,    51,    52,    28,     8,     3,     5,
      48,     7,     4,     6,    34,    81,    15,   111,     5,    85,
      44,     5,    87,    22,    23,    24,    50,    44,   343,   344,
     345,     4,     4,    50,    63,    55,    72,   103,    10,    48,
      87,    48,    38,   358,    82,   108,    92,     5,    72,    10,
      23,    97,    45,    49,     5,    72,    51,    74,    75,    76,
      77,    22,    61,     4,     4,    57,     6,   222,     9,   107,
      87,    88,   181,    82,     4,    82,     6,   142,    74,    44,
      76,   144,    83,   140,   106,    50,     4,    90,   105,   106,
       8,   120,    91,   140,    32,   142,   251,   117,   107,   104,
     107,   237,     4,   418,     9,     4,     8,    72,   104,     8,
     130,   330,   132,     4,     3,     4,   335,     8,   183,   182,
       0,   340,    31,    32,    33,    34,     5,   184,   148,    98,
      99,   225,   173,    77,    78,    79,   183,   184,    93,    94,
      95,    96,   361,   362,     7,    73,   211,    75,    15,   169,
      17,     4,     4,     6,     6,   349,    91,   177,   174,   175,
     176,     4,   101,     6,   211,   185,   231,   423,   233,   102,
     217,   228,     4,     3,     6,     5,   346,     7,    35,    36,
     100,   228,    12,    84,   231,    80,   233,   244,     5,    31,
      32,     3,     4,    55,   214,    81,    82,   244,    35,    36,
       3,     4,   222,    72,    72,     5,   226,    72,   104,    38,
       7,    72,     3,    72,    44,   235,     5,    47,    22,    49,
      50,    51,    52,    53,    54,    55,     7,    83,    72,     9,
     104,   251,    72,    72,     5,     5,     5,   257,    72,     4,
       4,     8,    72,     4,    74,    75,    76,    77,    83,    72,
      80,     6,    72,    72,    72,   318,    86,    87,    88,    89,
       4,     3,   356,     9,     4,     6,    14,    83,    24,     3,
       6,    37,     4,     6,    83,   105,   106,    72,    72,    10,
       9,     3,     6,     3,   325,   305,   343,   344,   345,   309,
     436,    10,   321,   336,   323,   416,   343,   344,   345,   377,
     394,   358,   328,   350,   324,   131,   326,   356,   272,   111,
     111,   358,   341,   397,    21,   128,   381,   167,   159,   253,
     377,   414,   389,   331,   188,   191,   181,   181,   199,   187,
     377,   209,   181,   181,   381,   205,    87,   366,   189,   145,
     350,    -1,   202,   190,    -1,    -1,    -1,    -1,   194,   414,
      -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,   416,
      -1,   418,    -1,    -1,    -1,   210,   441,   414,    -1,   416,
     399,   418,   401,   402,    -1,    -1,   405,    -1,    -1,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,     3,    -1,     5,
     439,     7,    -1,     9,    -1,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,     3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   105,   106,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    80,     3,    -1,
       5,    -1,     7,    86,    87,    88,    89,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    72,     7,    74,    75,    76,    77,    12,    -1,
      80,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,     5,
       6,     7,    86,    87,    88,    89,    12,    -1,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,
      -1,   105,   106,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    44,    -1,
      -1,    47,   107,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    72,     7,    74,    75,    76,    77,    12,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    86,    87,    88,    89,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
       5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,     5,     6,
       7,    86,    87,    88,    89,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,     5,     6,     7,    86,    87,    88,    89,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    72,     7,
      74,    75,    76,    77,    12,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    47,
      -1,    49,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    39,    40,    41,    43,    44,    46,    47,    49,    50,
      51,    52,    53,    54,    55,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    72,    74,    75,    76,
      77,    80,    86,    87,    88,    89,   105,   106,   115,   116,
     117,   118,   119,   123,   126,   127,   135,   136,   137,   139,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     156,   157,   158,   159,   160,   171,   172,   175,   176,   177,
     183,   184,   187,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   214,   217,
     218,   219,   221,   222,     6,   152,     8,    83,   152,    10,
     123,    31,    32,    33,    34,   125,   165,   166,   167,   168,
       5,   137,     5,     5,     5,   152,   168,     3,   152,   165,
     168,   124,   168,   168,   153,    72,   213,   212,    56,    58,
     152,   220,    72,   128,   130,   178,   179,   181,   182,   183,
     128,   129,   135,   135,   152,     0,   117,   168,   137,     5,
       3,    51,     3,     4,    48,    82,   107,     7,   156,    87,
      88,   130,   174,   211,   168,    81,    85,   103,    91,   101,
     102,   100,    92,    97,   192,    93,    94,    95,    96,   193,
      98,    99,   194,    73,    75,   195,    77,    78,    79,   196,
      84,    80,   212,   135,     7,    38,    49,   104,   154,   156,
     158,   217,    55,     6,   152,     8,    83,    10,     5,   161,
     166,    35,    36,   169,   152,   145,   152,   151,    72,     9,
      72,   138,     3,   128,     5,   162,   130,    72,   135,   213,
     220,    57,   154,    38,    81,    82,   180,     7,   159,   181,
      90,    35,   169,   170,   152,     3,   153,   160,   160,   160,
       8,   152,    48,    82,    92,    97,   107,   155,   173,   193,
     194,   195,   196,   217,   135,   130,   128,   152,   197,   198,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   130,    72,   130,   215,     5,   216,   220,     8,     7,
     156,     8,   152,   128,   131,   132,     6,    45,   163,   130,
     130,     6,   152,     6,   151,    83,    22,   141,   142,     9,
      72,   128,   133,   134,   163,    72,   104,   164,   220,   179,
      72,     6,   161,     5,     5,     5,    72,   188,   189,    83,
       4,     8,     6,   152,     8,     8,    72,   190,     4,     6,
     135,    72,    72,   137,     3,   137,     6,   152,   153,   152,
      10,   141,    72,   122,   164,   190,   191,     4,     3,   164,
     122,     9,   164,   137,     6,   131,   131,   131,   159,     4,
     198,   215,     6,   156,   157,    83,   131,   164,   164,    14,
     137,     6,     6,    23,   140,    24,   143,     4,    10,     3,
     133,     8,    72,   130,   185,   186,    37,   120,     4,     6,
       6,   188,   153,   162,   137,   137,   137,   152,    83,   137,
      72,     3,    72,   186,    10,   129,     9,   131,   163,   123,
       3,   116,   121,     6,     3,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   125,   126,   127,   128,   128,
     129,   130,   131,   131,   132,   132,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   139,   140,   140,   141,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   146,   146,   146,   146,   147,
     148,   148,   149,   149,   150,   150,   150,   150,   151,   151,
     152,   152,   153,   153,   153,   153,   154,   154,   155,   155,
     155,   155,   156,   156,   156,   157,   157,   157,   158,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   166,   166,   167,   167,   168,   168,
     168,   168,   169,   169,   170,   170,   171,   172,   173,   173,
     173,   173,   173,   174,   174,   174,   174,   175,   175,   176,
     177,   177,   177,   178,   179,   179,   180,   180,   180,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     187,   188,   188,   189,   189,   190,   190,   190,   191,   191,
     192,   192,   193,   193,   193,   193,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   211,   211,   211,   211,   211,   212,
     212,   212,   212,   212,   212,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   217,   217,   218,   219,   219,   219,
     219,   219,   219,   219,   220,   220,   220,   221,   221,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     6,     2,     1,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     2,     0,     5,     1,     2,     2,     0,
       6,     1,     1,     5,     5,     6,     7,     7,     5,     3,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       1,     3,     1,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     4,     2,     1,     2,     1,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     1,     1,     5,     9,     1,     1,
       1,     1,     1,     7,     5,     5,     4,     1,     2,     3,
       1,     1,     1,     2,     1,     3,     1,     1,     0,     2,
       1,     2,     1,     1,     1,     1,     2,     3,     1,     2,
       7,     3,     1,     1,     2,     1,     2,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     5,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     1,
       1,     3,     3,     2,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     1,     1,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Scanner* arg)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, arg);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, Scanner* arg)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), arg);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_ast: /* ast  */
#line 159 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1777 "src/parser.c"
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
/* Lookahead token kind.  */
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
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scan);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* prg: ast  */
#line 162 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2078 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 163 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2084 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 166 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2090 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 167 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2096 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 171 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2102 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 172 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2108 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 173 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2114 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 174 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2120 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 175 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2126 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 176 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2132 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 177 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2138 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 180 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2144 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 180 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2150 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 183 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), (yyloc));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2164 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 193 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2170 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 193 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2176 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 195 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2182 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 197 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2188 "src/parser.c"
    break;

  case 21: /* id_list: id_list "," "<identifier>"  */
#line 198 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2194 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 200 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2200 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt_list stmt  */
#line 201 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2206 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 203 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2213 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 206 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2220 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 209 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2230 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 215 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2241 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 222 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2247 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 224 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2255 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 228 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2263 "src/parser.c"
    break;

  case 32: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 233 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2269 "src/parser.c"
    break;

  case 33: /* arg: type_decl_array arg_decl  */
#line 234 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2275 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 236 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2281 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 237 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
   }
#line 2291 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 243 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2297 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 244 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2303 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_list "," fptr_arg  */
#line 244 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2309 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 247 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2315 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 248 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2321 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2327 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2333 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2339 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2345 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2351 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 257 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2357 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 258 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2363 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 259 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2369 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 260 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2375 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 261 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2381 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 262 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2387 "src/parser.c"
    break;

  case 61: /* opt_id: %empty  */
#line 276 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2393 "src/parser.c"
    break;

  case 62: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 279 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2403 "src/parser.c"
    break;

  case 63: /* when_exp: "when" exp  */
#line 285 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2409 "src/parser.c"
    break;

  case 64: /* when_exp: %empty  */
#line 285 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2415 "src/parser.c"
    break;

  case 65: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 288 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2428 "src/parser.c"
    break;

  case 66: /* match_list: match_case_stmt  */
#line 298 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2434 "src/parser.c"
    break;

  case 67: /* match_list: match_list match_case_stmt  */
#line 299 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2440 "src/parser.c"
    break;

  case 68: /* where_stmt: "where" stmt  */
#line 301 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2446 "src/parser.c"
    break;

  case 69: /* where_stmt: %empty  */
#line 301 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2452 "src/parser.c"
    break;

  case 70: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 303 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2465 "src/parser.c"
    break;

  case 71: /* flow: "while"  */
#line 313 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2471 "src/parser.c"
    break;

  case 72: /* flow: "until"  */
#line 314 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2477 "src/parser.c"
    break;

  case 73: /* loop_stmt: flow "(" exp ")" stmt  */
#line 318 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2483 "src/parser.c"
    break;

  case 74: /* loop_stmt: "do" stmt flow exp ";"  */
#line 320 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2489 "src/parser.c"
    break;

  case 75: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 322 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2495 "src/parser.c"
    break;

  case 76: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 324 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2501 "src/parser.c"
    break;

  case 77: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 326 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2507 "src/parser.c"
    break;

  case 78: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 328 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2513 "src/parser.c"
    break;

  case 79: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 331 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2519 "src/parser.c"
    break;

  case 80: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 335 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2525 "src/parser.c"
    break;

  case 81: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 337 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2531 "src/parser.c"
    break;

  case 82: /* breaks: "break"  */
#line 340 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2537 "src/parser.c"
    break;

  case 83: /* breaks: "continue"  */
#line 340 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2543 "src/parser.c"
    break;

  case 84: /* jump_stmt: "return" exp ";"  */
#line 342 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2549 "src/parser.c"
    break;

  case 85: /* jump_stmt: "return" ";"  */
#line 343 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2555 "src/parser.c"
    break;

  case 86: /* jump_stmt: breaks "<integer>" ";"  */
#line 344 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2561 "src/parser.c"
    break;

  case 87: /* jump_stmt: breaks ";"  */
#line 345 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2567 "src/parser.c"
    break;

  case 88: /* exp_stmt: exp ";"  */
#line 349 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2573 "src/parser.c"
    break;

  case 89: /* exp_stmt: ";"  */
#line 350 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2579 "src/parser.c"
    break;

  case 90: /* exp: binary_exp  */
#line 354 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2585 "src/parser.c"
    break;

  case 91: /* exp: exp "," binary_exp  */
#line 355 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2591 "src/parser.c"
    break;

  case 93: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 359 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2597 "src/parser.c"
    break;

  case 94: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 360 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2603 "src/parser.c"
    break;

  case 95: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 361 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2609 "src/parser.c"
    break;

  case 96: /* call_template: ":[" type_list "]"  */
#line 364 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2615 "src/parser.c"
    break;

  case 97: /* call_template: %empty  */
#line 364 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2621 "src/parser.c"
    break;

  case 102: /* array_exp: "[" exp "]"  */
#line 369 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2627 "src/parser.c"
    break;

  case 103: /* array_exp: "[" exp "]" array_exp  */
#line 370 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2636 "src/parser.c"
    break;

  case 104: /* array_exp: "[" exp "]" "[" "]"  */
#line 374 "src/gwion.y"
                                     { LIST_REM(2) gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2642 "src/parser.c"
    break;

  case 105: /* array_empty: "[" "]"  */
#line 378 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2648 "src/parser.c"
    break;

  case 106: /* array_empty: array_empty "[" "]"  */
#line 379 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2654 "src/parser.c"
    break;

  case 107: /* array_empty: array_empty array_exp  */
#line 380 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2660 "src/parser.c"
    break;

  case 108: /* range: "[" exp ":" exp "]"  */
#line 384 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2666 "src/parser.c"
    break;

  case 109: /* range: "[" exp ":" "]"  */
#line 385 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 2672 "src/parser.c"
    break;

  case 110: /* range: "[" ":" exp "]"  */
#line 386 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 2678 "src/parser.c"
    break;

  case 114: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 392 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2684 "src/parser.c"
    break;

  case 115: /* func_args: "(" arg_list  */
#line 394 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2690 "src/parser.c"
    break;

  case 116: /* func_args: "("  */
#line 394 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 2696 "src/parser.c"
    break;

  case 117: /* fptr_args: "(" fptr_list  */
#line 395 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2702 "src/parser.c"
    break;

  case 118: /* fptr_args: "("  */
#line 395 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 2708 "src/parser.c"
    break;

  case 119: /* arg_type: "..." ")"  */
#line 396 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2714 "src/parser.c"
    break;

  case 120: /* arg_type: ")"  */
#line 396 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2720 "src/parser.c"
    break;

  case 121: /* decl_template: ":[" id_list "]"  */
#line 398 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 2726 "src/parser.c"
    break;

  case 122: /* decl_template: %empty  */
#line 398 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 2732 "src/parser.c"
    break;

  case 123: /* global: "global"  */
#line 400 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2738 "src/parser.c"
    break;

  case 124: /* storage_flag: "static"  */
#line 402 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2744 "src/parser.c"
    break;

  case 126: /* access_flag: "private"  */
#line 404 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2750 "src/parser.c"
    break;

  case 127: /* access_flag: "protect"  */
#line 405 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2756 "src/parser.c"
    break;

  case 128: /* flag: access_flag  */
#line 408 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2762 "src/parser.c"
    break;

  case 129: /* flag: storage_flag  */
#line 409 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2768 "src/parser.c"
    break;

  case 130: /* flag: access_flag storage_flag  */
#line 410 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2774 "src/parser.c"
    break;

  case 131: /* flag: %empty  */
#line 411 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2780 "src/parser.c"
    break;

  case 132: /* final: "final"  */
#line 414 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2786 "src/parser.c"
    break;

  case 133: /* final: %empty  */
#line 414 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2792 "src/parser.c"
    break;

  case 134: /* modifier: "abstract"  */
#line 416 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2798 "src/parser.c"
    break;

  case 136: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 419 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), (yyloc));
  }
#line 2808 "src/parser.c"
    break;

  case 137: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 427 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, (yyloc));
    }
#line 2820 "src/parser.c"
    break;

  case 143: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 438 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2826 "src/parser.c"
    break;

  case 144: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 440 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none); }
#line 2832 "src/parser.c"
    break;

  case 145: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 442 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2841 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 447 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2850 "src/parser.c"
    break;

  case 147: /* operator: "operator"  */
#line 452 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 2856 "src/parser.c"
    break;

  case 148: /* operator: "operator" global  */
#line 452 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 2862 "src/parser.c"
    break;

  case 149: /* op_def: operator op_base code_stmt  */
#line 454 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), (yyloc)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 2868 "src/parser.c"
    break;

  case 152: /* func_def: op_def  */
#line 456 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2874 "src/parser.c"
    break;

  case 153: /* type_decl_tmpl: "<identifier>" call_template  */
#line 459 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2880 "src/parser.c"
    break;

  case 155: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 464 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2886 "src/parser.c"
    break;

  case 156: /* option: "?"  */
#line 467 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 2892 "src/parser.c"
    break;

  case 157: /* option: OPTIONS  */
#line 467 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 2898 "src/parser.c"
    break;

  case 158: /* option: %empty  */
#line 467 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 2904 "src/parser.c"
    break;

  case 159: /* type_decl_opt: type_decl_noflag option  */
#line 468 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 2910 "src/parser.c"
    break;

  case 161: /* type_decl: type_decl_flag type_decl_opt  */
#line 469 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2916 "src/parser.c"
    break;

  case 162: /* type_decl_flag: "LATE"  */
#line 472 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 2922 "src/parser.c"
    break;

  case 163: /* type_decl_flag: "const"  */
#line 473 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2928 "src/parser.c"
    break;

  case 164: /* type_decl_flag2: "var"  */
#line 475 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2934 "src/parser.c"
    break;

  case 166: /* union_decl: "<identifier>" ";"  */
#line 478 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yyloc));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yyloc));
}
#line 2943 "src/parser.c"
    break;

  case 167: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 482 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 2949 "src/parser.c"
    break;

  case 169: /* union_list: union_decl union_list  */
#line 485 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 2955 "src/parser.c"
    break;

  case 170: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 488 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yyloc));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 2967 "src/parser.c"
    break;

  case 171: /* var_decl_list: var_decl "," var_decl_list  */
#line 498 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2973 "src/parser.c"
    break;

  case 172: /* var_decl_list: var_decl  */
#line 499 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2979 "src/parser.c"
    break;

  case 173: /* var_decl: "<identifier>"  */
#line 502 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 2985 "src/parser.c"
    break;

  case 174: /* var_decl: "<identifier>" array  */
#line 503 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 2991 "src/parser.c"
    break;

  case 175: /* arg_decl: "<identifier>"  */
#line 505 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 2997 "src/parser.c"
    break;

  case 176: /* arg_decl: "<identifier>" array_empty  */
#line 506 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3003 "src/parser.c"
    break;

  case 177: /* arg_decl: "<identifier>" array_exp  */
#line 507 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3009 "src/parser.c"
    break;

  case 179: /* fptr_arg_decl: %empty  */
#line 508 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3015 "src/parser.c"
    break;

  case 193: /* opt_exp: exp  */
#line 516 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3021 "src/parser.c"
    break;

  case 194: /* opt_exp: %empty  */
#line 516 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3027 "src/parser.c"
    break;

  case 196: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 519 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3033 "src/parser.c"
    break;

  case 197: /* con_exp: log_or_exp "?:" con_exp  */
#line 521 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3039 "src/parser.c"
    break;

  case 199: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 523 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3045 "src/parser.c"
    break;

  case 201: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 524 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3051 "src/parser.c"
    break;

  case 203: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 525 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3057 "src/parser.c"
    break;

  case 205: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 526 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3063 "src/parser.c"
    break;

  case 207: /* and_exp: and_exp "&" eq_exp  */
#line 527 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3069 "src/parser.c"
    break;

  case 209: /* eq_exp: eq_exp eq_op rel_exp  */
#line 528 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3075 "src/parser.c"
    break;

  case 211: /* rel_exp: rel_exp rel_op shift_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3081 "src/parser.c"
    break;

  case 213: /* shift_exp: shift_exp shift_op add_exp  */
#line 530 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3087 "src/parser.c"
    break;

  case 215: /* add_exp: add_exp add_op mul_exp  */
#line 531 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3093 "src/parser.c"
    break;

  case 217: /* mul_exp: mul_exp mul_op dur_exp  */
#line 532 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3099 "src/parser.c"
    break;

  case 219: /* dur_exp: dur_exp "::" cast_exp  */
#line 533 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3105 "src/parser.c"
    break;

  case 221: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 536 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3111 "src/parser.c"
    break;

  case 230: /* unary_exp: unary_op unary_exp  */
#line 543 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3117 "src/parser.c"
    break;

  case 231: /* unary_exp: OPID_E unary_exp  */
#line 544 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3123 "src/parser.c"
    break;

  case 232: /* unary_exp: "new" type_decl_exp  */
#line 545 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3129 "src/parser.c"
    break;

  case 233: /* unary_exp: "spork" code_stmt  */
#line 546 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3135 "src/parser.c"
    break;

  case 234: /* unary_exp: "fork" code_stmt  */
#line 547 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3141 "src/parser.c"
    break;

  case 235: /* unary_exp: "$" type_decl_empty  */
#line 548 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3147 "src/parser.c"
    break;

  case 236: /* lambda_list: "<identifier>"  */
#line 551 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3153 "src/parser.c"
    break;

  case 237: /* lambda_list: "<identifier>" lambda_list  */
#line 552 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3159 "src/parser.c"
    break;

  case 238: /* lambda_arg: "\\" lambda_list  */
#line 553 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3165 "src/parser.c"
    break;

  case 239: /* lambda_arg: "\\"  */
#line 553 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3171 "src/parser.c"
    break;

  case 240: /* type_list: type_decl_empty  */
#line 556 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3177 "src/parser.c"
    break;

  case 241: /* type_list: type_decl_empty "," type_list  */
#line 557 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3183 "src/parser.c"
    break;

  case 242: /* call_paren: "(" exp ")"  */
#line 561 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3189 "src/parser.c"
    break;

  case 243: /* call_paren: "(" ")"  */
#line 561 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3195 "src/parser.c"
    break;

  case 246: /* dot_exp: post_exp "." "<identifier>"  */
#line 565 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3208 "src/parser.c"
    break;

  case 248: /* post_exp: post_exp array_exp  */
#line 576 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3214 "src/parser.c"
    break;

  case 249: /* post_exp: post_exp range  */
#line 578 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3220 "src/parser.c"
    break;

  case 250: /* post_exp: post_exp call_template call_paren  */
#line 580 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3227 "src/parser.c"
    break;

  case 251: /* post_exp: post_exp post_op  */
#line 583 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3233 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp OPID_E  */
#line 585 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3239 "src/parser.c"
    break;

  case 253: /* post_exp: dot_exp  */
#line 586 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3245 "src/parser.c"
    break;

  case 254: /* interp_exp: "<interp string>`"  */
#line 590 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3251 "src/parser.c"
    break;

  case 255: /* interp_exp: "<interp string>" interp_exp  */
#line 591 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3257 "src/parser.c"
    break;

  case 256: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 592 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3263 "src/parser.c"
    break;

  case 257: /* interp: "`" interp_exp  */
#line 594 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3269 "src/parser.c"
    break;

  case 258: /* interp: interp "`" interp_exp  */
#line 595 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos.last = (yyvsp[0].exp)->pos.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3284 "src/parser.c"
    break;

  case 259: /* prim_exp: "<identifier>"  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3290 "src/parser.c"
    break;

  case 260: /* prim_exp: "<integer>"  */
#line 608 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3296 "src/parser.c"
    break;

  case 261: /* prim_exp: FLOATT  */
#line 609 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3302 "src/parser.c"
    break;

  case 262: /* prim_exp: interp  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3308 "src/parser.c"
    break;

  case 263: /* prim_exp: "<litteral string>"  */
#line 611 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3314 "src/parser.c"
    break;

  case 264: /* prim_exp: "<litteral char>"  */
#line 612 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3320 "src/parser.c"
    break;

  case 265: /* prim_exp: array  */
#line 613 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3326 "src/parser.c"
    break;

  case 266: /* prim_exp: range  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3332 "src/parser.c"
    break;

  case 267: /* prim_exp: "<<<" exp ">>>"  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3338 "src/parser.c"
    break;

  case 268: /* prim_exp: "(" exp ")"  */
#line 616 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3344 "src/parser.c"
    break;

  case 269: /* prim_exp: lambda_arg code_stmt  */
#line 617 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3350 "src/parser.c"
    break;

  case 270: /* prim_exp: "(" ")"  */
#line 618 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3356 "src/parser.c"
    break;


#line 3360 "src/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, arg, YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, arg, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, arg);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 620 "src/gwion.y"

