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
#line 8 "src/gwion.y"

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
  YYSYMBOL_DEFER = 47,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 48,                 /* "\\"  */
  YYSYMBOL_OPID_A = 49,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 50,                    /* OPID_E  */
  YYSYMBOL_LATE = 51,                      /* "LATE"  */
  YYSYMBOL_NUM = 52,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 53,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 54,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 55,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 56,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 57,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 58,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 59,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 60,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 61,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 62,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 63,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 64,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 65,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 66,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 67,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 68,                  /* "#if"  */
  YYSYMBOL_PP_NL = 69,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 70,                /* "require"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "@<operator id>"  */
  YYSYMBOL_72_operator_id_ = 72,           /* "&<operator id>"  */
  YYSYMBOL_ID = 73,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 74,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 75,                  /* "++"  */
  YYSYMBOL_MINUS = 76,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 77,                /* "--"  */
  YYSYMBOL_TIMES = 78,                     /* "*"  */
  YYSYMBOL_DIVIDE = 79,                    /* "/"  */
  YYSYMBOL_PERCENT = 80,                   /* "%"  */
  YYSYMBOL_DOLLAR = 81,                    /* "$"  */
  YYSYMBOL_QUESTION = 82,                  /* "?"  */
  YYSYMBOL_OPTIONS = 83,                   /* OPTIONS  */
  YYSYMBOL_COLON = 84,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 85,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 86,             /* "?:"  */
  YYSYMBOL_NEW = 87,                       /* "new"  */
  YYSYMBOL_SPORK = 88,                     /* "spork"  */
  YYSYMBOL_FORK = 89,                      /* "fork"  */
  YYSYMBOL_L_HACK = 90,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 91,                    /* ">>>"  */
  YYSYMBOL_AND = 92,                       /* "&&"  */
  YYSYMBOL_EQ = 93,                        /* "=="  */
  YYSYMBOL_GE = 94,                        /* ">="  */
  YYSYMBOL_GT = 95,                        /* ">"  */
  YYSYMBOL_LE = 96,                        /* "<="  */
  YYSYMBOL_LT = 97,                        /* "<"  */
  YYSYMBOL_NEQ = 98,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 99,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 100,              /* ">>"  */
  YYSYMBOL_S_AND = 101,                    /* "&"  */
  YYSYMBOL_S_OR = 102,                     /* "|"  */
  YYSYMBOL_S_XOR = 103,                    /* "^"  */
  YYSYMBOL_OR = 104,                       /* "||"  */
  YYSYMBOL_TMPL = 105,                     /* ":["  */
  YYSYMBOL_TILDA = 106,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 107,              /* "!"  */
  YYSYMBOL_DYNOP = 108,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 109,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 110,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 111,                   /* UTIMES  */
  YYSYMBOL_112_ = 112,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 113,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 114,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 115,                 /* $accept  */
  YYSYMBOL_prg = 116,                      /* prg  */
  YYSYMBOL_ast = 117,                      /* ast  */
  YYSYMBOL_section = 118,                  /* section  */
  YYSYMBOL_class_type = 119,               /* class_type  */
  YYSYMBOL_class_def = 120,                /* class_def  */
  YYSYMBOL_class_ext = 121,                /* class_ext  */
  YYSYMBOL_class_body = 122,               /* class_body  */
  YYSYMBOL_id_list = 123,                  /* id_list  */
  YYSYMBOL_stmt_list = 124,                /* stmt_list  */
  YYSYMBOL_fptr_base = 125,                /* fptr_base  */
  YYSYMBOL_func_base = 126,                /* func_base  */
  YYSYMBOL_fptr_def = 127,                 /* fptr_def  */
  YYSYMBOL_type_def = 128,                 /* type_def  */
  YYSYMBOL_type_decl_array = 129,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 130,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 131,          /* type_decl_empty  */
  YYSYMBOL_arg = 132,                      /* arg  */
  YYSYMBOL_arg_list = 133,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 134,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 135,                /* fptr_list  */
  YYSYMBOL_code_stmt = 136,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 137,                  /* stmt_pp  */
  YYSYMBOL_stmt = 138,                     /* stmt  */
  YYSYMBOL_opt_id = 139,                   /* opt_id  */
  YYSYMBOL_enum_def = 140,                 /* enum_def  */
  YYSYMBOL_when_exp = 141,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 142,          /* match_case_stmt  */
  YYSYMBOL_match_list = 143,               /* match_list  */
  YYSYMBOL_where_stmt = 144,               /* where_stmt  */
  YYSYMBOL_match_stmt = 145,               /* match_stmt  */
  YYSYMBOL_flow = 146,                     /* flow  */
  YYSYMBOL_loop_stmt = 147,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 148,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 149,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 150,           /* selection_stmt  */
  YYSYMBOL_breaks = 151,                   /* breaks  */
  YYSYMBOL_jump_stmt = 152,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 153,                 /* exp_stmt  */
  YYSYMBOL_exp = 154,                      /* exp  */
  YYSYMBOL_binary_exp = 155,               /* binary_exp  */
  YYSYMBOL_call_template = 156,            /* call_template  */
  YYSYMBOL_op = 157,                       /* op  */
  YYSYMBOL_array_exp = 158,                /* array_exp  */
  YYSYMBOL_array_empty = 159,              /* array_empty  */
  YYSYMBOL_range = 160,                    /* range  */
  YYSYMBOL_array = 161,                    /* array  */
  YYSYMBOL_decl_exp = 162,                 /* decl_exp  */
  YYSYMBOL_func_args = 163,                /* func_args  */
  YYSYMBOL_fptr_args = 164,                /* fptr_args  */
  YYSYMBOL_arg_type = 165,                 /* arg_type  */
  YYSYMBOL_decl_template = 166,            /* decl_template  */
  YYSYMBOL_global = 167,                   /* global  */
  YYSYMBOL_storage_flag = 168,             /* storage_flag  */
  YYSYMBOL_access_flag = 169,              /* access_flag  */
  YYSYMBOL_flag = 170,                     /* flag  */
  YYSYMBOL_final = 171,                    /* final  */
  YYSYMBOL_modifier = 172,                 /* modifier  */
  YYSYMBOL_func_def_base = 173,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 174,            /* abstract_fdef  */
  YYSYMBOL_op_op = 175,                    /* op_op  */
  YYSYMBOL_op_base = 176,                  /* op_base  */
  YYSYMBOL_operator = 177,                 /* operator  */
  YYSYMBOL_op_def = 178,                   /* op_def  */
  YYSYMBOL_func_def = 179,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 180,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 181,         /* type_decl_noflag  */
  YYSYMBOL_option = 182,                   /* option  */
  YYSYMBOL_type_decl_opt = 183,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 184,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 185,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 186,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 187,               /* union_decl  */
  YYSYMBOL_union_list = 188,               /* union_list  */
  YYSYMBOL_union_def = 189,                /* union_def  */
  YYSYMBOL_var_decl_list = 190,            /* var_decl_list  */
  YYSYMBOL_var_decl = 191,                 /* var_decl  */
  YYSYMBOL_arg_decl = 192,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 193,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 194,                    /* eq_op  */
  YYSYMBOL_rel_op = 195,                   /* rel_op  */
  YYSYMBOL_shift_op = 196,                 /* shift_op  */
  YYSYMBOL_add_op = 197,                   /* add_op  */
  YYSYMBOL_mul_op = 198,                   /* mul_op  */
  YYSYMBOL_opt_exp = 199,                  /* opt_exp  */
  YYSYMBOL_con_exp = 200,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 201,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 202,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 203,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 204,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 205,                  /* and_exp  */
  YYSYMBOL_eq_exp = 206,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 207,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 208,                /* shift_exp  */
  YYSYMBOL_add_exp = 209,                  /* add_exp  */
  YYSYMBOL_mul_exp = 210,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 211,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 212,                 /* cast_exp  */
  YYSYMBOL_unary_op = 213,                 /* unary_op  */
  YYSYMBOL_unary_exp = 214,                /* unary_exp  */
  YYSYMBOL_lambda_list = 215,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 216,               /* lambda_arg  */
  YYSYMBOL_type_list = 217,                /* type_list  */
  YYSYMBOL_call_paren = 218,               /* call_paren  */
  YYSYMBOL_post_op = 219,                  /* post_op  */
  YYSYMBOL_dot_exp = 220,                  /* dot_exp  */
  YYSYMBOL_post_exp = 221,                 /* post_exp  */
  YYSYMBOL_interp_exp = 222,               /* interp_exp  */
  YYSYMBOL_interp = 223,                   /* interp  */
  YYSYMBOL_prim_exp = 224                  /* prim_exp  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  168
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1666

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  455

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   369


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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   163,   163,   164,   167,   168,   172,   173,   174,   175,
     176,   177,   178,   181,   181,   183,   194,   194,   196,   196,
     198,   199,   201,   202,   204,   207,   210,   216,   223,   223,
     225,   229,   234,   235,   237,   238,   244,   245,   245,   248,
     249,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   278,   278,   281,   287,   287,   290,   300,   301,   303,
     303,   305,   315,   316,   319,   321,   323,   325,   327,   329,
     331,   335,   337,   340,   342,   346,   346,   348,   349,   350,
     351,   355,   356,   360,   361,   364,   365,   366,   367,   370,
     370,   372,   372,   372,   372,   375,   376,   380,   384,   385,
     386,   390,   391,   392,   395,   395,   397,   398,   400,   400,
     401,   401,   402,   402,   404,   404,   406,   408,   408,   410,
     411,   414,   415,   416,   417,   420,   420,   422,   422,   425,
     432,   441,   441,   441,   441,   441,   443,   445,   447,   452,
     458,   458,   459,   462,   462,   462,   465,   469,   470,   473,
     473,   473,   474,   475,   475,   478,   479,   481,   481,   484,
     488,   490,   491,   494,   504,   505,   508,   509,   511,   512,
     513,   514,   514,   516,   516,   517,   517,   517,   517,   518,
     518,   519,   519,   520,   520,   520,   522,   522,   523,   524,
     526,   529,   529,   530,   530,   531,   531,   532,   532,   533,
     533,   534,   534,   535,   535,   536,   536,   537,   537,   538,
     538,   539,   539,   541,   541,   544,   544,   544,   545,   545,
     545,   545,   548,   549,   550,   551,   552,   553,   554,   557,
     558,   559,   559,   562,   563,   567,   567,   569,   569,   571,
     580,   581,   583,   585,   588,   590,   592,   596,   597,   598,
     600,   601,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", ";", ",", "(", ")", "[", "]",
  "{", "}", "fun", "var", "if", "else", "while", "do", "until", "repeat",
  "for", "foreach", "match", "case", "when", "where", "enum", "return",
  "break", "continue", "class", "struct", "static", "global", "private",
  "protect", "abstract", "final", "extends", ".", "operator", "typedef",
  "funcdef", "NOELSE", "union", "const", "...", "varloop", "defer", "\\",
  "OPID_A", "OPID_E", "LATE", "<integer>", "FLOATT", "<litteral string>",
  "<litteral char>", "`", "<interp string>", "INTERP_EXP",
  "<interp string>`", "<comment>", "#include", "#define", "#pragma",
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "require",
  "@<operator id>", "&<operator id>", "<identifier>", "+", "++", "-", "--",
  "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork",
  "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>",
  "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_type", "class_def", "class_ext", "class_body",
  "id_list", "stmt_list", "fptr_base", "func_base", "fptr_def", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_tmpl", "type_decl_noflag", "option",
  "type_decl_opt", "type_decl", "type_decl_flag", "type_decl_flag2",
  "union_decl", "union_list", "union_def", "var_decl_list", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "interp_exp", "interp", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
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
     365,   366,   367,   368,   369
};
#endif

#define YYPACT_NINF (-296)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     436,  -296,  1001,   881,   541,   112,  -296,    38,  -296,   742,
    -296,    69,    90,    93,  1481,   112,   192,  -296,  -296,  -296,
    -296,    14,   112,   112,   112,  -296,  1481,   742,    54,  1541,
    -296,  -296,  -296,  -296,  -296,   941,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,     6,     6,    79,    79,  1481,  -296,  -296,   135,
     436,  -296,   112,  -296,   742,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   133,  -296,  -296,  -296,  -296,    33,  -296,  -296,
     166,   -15,  -296,   134,  -296,  -296,  -296,  -296,  -296,   186,
    -296,  -296,  -296,   112,  -296,  -296,   -38,    81,    59,    75,
      97,   -17,    53,    84,    57,    45,   109,   104,  1541,  -296,
      79,  -296,  -296,    25,   146,  -296,  -296,    83,  -296,  1481,
      23,  -296,   646,  -296,  -296,  -296,  -296,   200,  -296,  -296,
     150,   155,  1481,   137,  1481,   821,   143,    74,   145,  -296,
     197,  -296,     6,   202,     6,   147,    20,  -296,    54,  -296,
    -296,   941,  -296,    24,  -296,   116,  -296,  -296,   184,   127,
    -296,   216,   153,  -296,  -296,  -296,  -296,    18,  -296,  -296,
     176,  -296,  1481,  -296,   221,  -296,  1481,  1481,  1481,  1481,
    1061,  -296,  -296,  -296,  1558,    79,     6,     6,  1481,  1541,
    1541,  1541,  1541,  1541,  1541,  -296,  -296,  1541,  -296,  -296,
    -296,  -296,  1541,  -296,  -296,  1541,  -296,  -296,  1541,  -296,
    -296,  -296,  1541,  1541,     6,  -296,  -296,  1121,   154,  -296,
       6,   223,  -296,  -296,  -296,   941,  -296,    41,   225,  1181,
    -296,     6,    15,  -296,     6,  -296,     6,   151,  1481,   156,
     821,    22,   211,  -296,   226,  -296,   161,     6,    15,   168,
     144,  -296,  -296,  -296,   941,  -296,   153,  -296,  -296,  -296,
    1241,  -296,  -296,  -296,  -296,  -296,   177,   162,  -296,   -15,
    -296,  -296,  -296,  -296,    76,   200,  -296,  -296,  -296,  -296,
    -296,   234,  -296,  -296,  -296,  -296,   246,  -296,   247,   180,
     251,   172,  -296,    81,    59,    75,    97,   -17,    53,    84,
      57,    45,   109,   104,  -296,  -296,   253,   250,  1301,  -296,
    -296,  -296,  1361,  -296,  -296,    82,   193,  -296,   267,  -296,
     266,    79,   204,   205,   742,   210,   742,  1421,   213,  1481,
    1481,  -296,    29,   214,   144,   193,  -296,   279,   281,   144,
     214,   280,  -296,  -296,   144,   742,   282,     6,     6,     6,
     216,  -296,   286,  1541,     6,  -296,  -296,   170,  -296,  -296,
     216,   207,     6,  -296,  -296,   144,   144,   283,  -296,  -296,
     742,   173,   212,     9,    36,   270,  -296,  -296,    37,   292,
    -296,  -296,     6,  -296,  -296,   100,    26,   263,  -296,  -296,
     297,   296,   298,  -296,   180,  -296,  -296,  -296,  -296,   134,
    1481,  -296,   202,  -296,   742,  -296,   742,  1481,   742,  1481,
     219,   742,  -296,   232,  -296,  -296,  -296,  -296,    17,   233,
      26,   300,     6,   302,     6,  -296,  -296,  -296,   -15,    15,
    -296,  -296,    13,  -296,   251,   742,  -296,  -296,  -296,   304,
    -296,  -296,  -296,   436,   307,   311,   742,   742,  -296,   436,
     306,  -296,  -296,  -296,  -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    92,     0,     0,     0,   134,   167,     0,    72,     0,
      73,     0,     0,     0,     0,   134,     0,    85,    86,    13,
      14,   150,   134,   134,   134,   166,     0,     0,   242,     0,
     165,   263,   264,   266,   267,     0,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   262,   247,   225,
     248,   226,     0,     0,   229,   230,     0,   231,   228,     0,
       2,     4,   134,     8,     6,    11,    12,    55,    58,    22,
       9,    56,     0,    53,    59,    60,    54,     0,    57,    52,
       0,    93,   114,   115,   269,   268,    95,   153,   154,     0,
     155,     7,   168,   134,    10,   116,   198,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,   221,     0,   223,
       0,   227,   256,   232,   265,   250,   273,     0,   108,     0,
       0,    39,     0,   127,   126,   129,   130,     0,   128,   132,
     131,   136,     0,     0,     0,     0,     0,     0,    62,    88,
       0,   151,     0,     0,     0,     0,     0,    82,   239,   241,
     234,     0,   257,     0,   260,   100,    31,   238,   157,   161,
     163,    29,     0,    30,   235,   236,   237,     0,     1,     5,
     136,    23,     0,    90,     0,    91,     0,     0,     0,     0,
       0,   110,   229,   230,     0,     0,     0,     0,   197,     0,
       0,     0,     0,     0,     0,   183,   184,     0,   188,   186,
     187,   185,     0,   189,   190,     0,   191,   192,     0,   193,
     194,   195,     0,     0,     0,   233,   272,     0,     0,   255,
       0,     0,   251,   252,   254,     0,   271,     0,   105,     0,
      40,   119,     0,   133,     0,   135,     0,     0,     0,     0,
       0,     0,     0,    61,     0,    87,     0,   121,     0,     0,
     125,    81,   240,   258,     0,   156,     0,   159,   160,   162,
       0,    28,   164,   270,   137,   138,     0,     0,    89,    94,
      96,    98,    97,   109,     0,     0,   104,   101,   102,   103,
     141,     0,   143,   142,   145,   144,     0,   152,     0,     0,
     196,     0,   200,   202,   204,   206,   208,   210,   212,   214,
     216,   218,   220,   222,   224,   249,   243,     0,     0,   253,
     261,   113,     0,   106,   112,     0,     0,    34,   118,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     0,   125,   182,    37,   120,     0,   125,
       0,     0,   259,   158,   125,     0,     0,     0,     0,     0,
     176,   117,   175,     0,     0,    99,   246,     0,   107,   111,
     178,    33,     0,   122,   139,   125,   125,    83,    75,    80,
       0,     0,     0,     0,    65,    70,    68,    20,     0,     0,
     181,    36,     0,    26,    24,     0,     0,    17,    74,   149,
       0,     0,     0,   177,     0,   199,   244,   245,   180,   179,
       0,    35,     0,    25,     0,    76,     0,     0,     0,     0,
       0,     0,    71,     0,    63,    27,    38,   124,   100,     0,
     171,     0,     0,     0,     0,   147,   148,   174,    32,     0,
      84,    77,     0,    78,    64,     0,    69,    21,   169,     0,
     172,   173,    16,    19,     0,     0,     0,    66,   170,    18,
       0,   146,   140,    79,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -125,   -56,  -296,  -296,  -296,  -296,   -18,    -3,
    -296,  -296,  -296,  -296,   -16,   -99,   -47,  -295,  -296,   -57,
    -296,   -45,  -296,    -9,  -296,  -296,  -296,    -4,  -296,  -296,
    -296,   196,  -296,  -296,  -296,  -296,  -296,  -296,  -122,     0,
     -20,   222,  -296,   -75,   -23,   227,  -154,   -14,    63,   -61,
    -236,  -229,   321,   215,  -296,    49,   174,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,    87,  -296,   185,  -296,
     -28,  -296,  -296,   -72,  -296,   -44,  -296,    16,  -296,  -296,
     165,   169,   171,   175,  -296,  -178,  -296,   167,   178,   160,
     163,   181,   179,   158,   157,   159,   152,   164,   274,     4,
     217,  -296,    27,  -296,   -90,  -296,  -296,  -134,  -296,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,    61,    62,    63,   423,   450,   378,    64,
     143,   127,    65,    66,   156,   164,   306,   317,   318,   336,
     337,    67,    68,    69,   244,    70,   410,   331,   332,   412,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,   255,   280,    82,    83,    84,    85,    86,   232,   248,
     321,   341,   128,   129,   130,   131,   236,   266,    87,    88,
     281,   185,    89,    90,    91,   158,   159,   259,   160,   161,
      92,    93,   420,   421,    94,   351,   352,   361,   381,   197,
     202,   205,   208,   212,   291,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     149,   110,   307,   309,   111,   112,   113,   154,   114,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     133,   122,   117,   120,   169,   157,   146,   261,   181,   165,
     166,   292,   338,   240,   137,   408,   140,   253,   147,   446,
     438,   319,   176,   224,   162,   162,   328,   176,   176,     4,
    -100,   228,   217,   150,   177,   153,   173,   163,   222,   375,
     176,   413,   184,   132,   188,   176,   124,   414,   189,   311,
      25,   330,   390,   391,   392,   171,   167,    30,   177,   409,
     320,   162,   177,   218,   138,   216,   190,   401,   178,   177,
      25,   142,   144,   145,   134,   219,   195,    30,   176,   155,
     176,   196,   254,   242,   228,   174,   176,   176,     4,   226,
     359,   310,   178,   179,   286,   135,   178,   249,   136,   418,
      48,   251,    50,   178,   413,   379,   329,   229,   417,   263,
     384,   170,   215,   171,   162,   387,   162,   179,   327,   227,
     342,   179,   220,   209,   210,   211,   246,   148,   179,   444,
     220,   206,   237,   207,   239,   168,   402,   403,   172,   288,
     287,   180,   187,   123,   124,   125,   126,   198,   199,   200,
     201,   153,     8,   313,    10,   176,   269,   324,   162,   162,
     176,   192,   326,   270,   271,   272,   176,   304,   345,   175,
     176,   289,   267,   191,   176,   395,   397,   176,   193,   406,
     274,   123,   124,   203,   204,   214,   162,   322,   290,   323,
     234,   235,   162,   445,   213,   139,   393,     2,   194,     3,
     245,   176,   225,   162,     6,   231,   162,   247,   162,   257,
     258,   264,   235,   368,   176,   316,   241,   120,   243,   162,
     250,   220,   256,   260,   268,   153,   155,   305,   308,   315,
      25,   335,   312,   330,   334,   333,    25,    30,   325,   347,
      28,   339,    29,    30,    31,    32,    33,    34,    35,   340,
     344,   348,   349,   350,   153,   176,   353,   354,   355,   155,
     274,    48,    49,    50,    51,    47,   360,    48,    49,    50,
      51,   362,   363,    52,   182,   183,   364,   365,   366,    53,
      54,    55,    56,   382,   383,   398,   372,   377,   389,   386,
     394,   400,    57,    58,   411,   415,   407,   404,    57,    58,
     422,   424,   425,   435,   426,   437,   439,   448,   357,   373,
     441,   443,   274,   451,   452,   367,   454,   369,   449,   162,
     162,   162,   385,   442,   181,   416,   162,   371,   376,   238,
     374,   316,   316,   316,   162,   221,   388,   399,   346,   419,
     223,   429,   141,   343,   265,   233,   316,   262,   440,   282,
     427,   380,   295,   283,   162,   284,   296,   293,   162,   285,
     299,   405,   300,   186,   302,   252,   335,   301,     0,   294,
       0,     0,     0,   419,     0,   297,   298,   303,     0,     0,
     428,   396,     0,     0,     0,     0,     0,   432,     0,     0,
       0,     0,   162,   169,   162,   430,   162,   431,     0,   433,
       0,     0,   436,     0,     0,     0,   163,     0,   316,   434,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,   453,   171,     1,
       0,     2,     0,     3,     0,     4,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,    23,     0,    24,
      25,     0,    26,    27,    28,     0,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,    47,
       0,    48,    49,    50,    51,     0,     0,    52,     0,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,     1,     0,     2,     0,     3,     0,
       4,   121,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,     0,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,     1,
       0,     2,     0,     3,     0,     4,   230,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,    28,     0,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,    47,
       0,    48,    49,    50,    51,     0,     0,    52,     0,     0,
       0,     0,     0,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     4,    57,    58,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,     0,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,     0,     0,    47,     0,    48,    49,    50,
      51,     0,     0,    52,     1,     0,     2,     0,     3,    53,
      54,    55,    56,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   118,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,   119,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,   151,     0,
     152,     0,     0,     0,     0,     0,     2,   116,     3,     0,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   273,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   314,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,   119,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   118,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,   356,     3,     0,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   358,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,   370,     3,     0,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     6,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    57,    58,    28,
       0,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     0,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,    28,
       0,    29,     0,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,     0,    47,     0,    48,    49,    50,    51,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,   206,    48,   207,    50,   209,   210,   211,     0,
       0,   276,     0,     0,     0,     0,     0,    57,    58,     0,
       0,   277,   198,   199,   200,   201,   278,   203,   204,     0,
       0,     0,     0,     0,     0,     0,   279
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    60,    52,    26,   161,    83,    54,
      55,   189,   248,   135,    14,     6,    16,   151,    27,     6,
       3,     6,     4,   113,    52,    53,     4,     4,     4,     9,
       5,     8,     7,    29,    49,    35,     3,    53,   113,    10,
       4,     4,    89,     5,    82,     4,    32,    10,    86,     8,
      44,    22,   347,   348,   349,    64,    56,    51,    49,    23,
      45,    89,    49,    38,    15,   110,   104,   362,    83,    49,
      44,    22,    23,    24,     5,    50,    93,    51,     4,    73,
       4,    98,    58,     9,     8,    52,     4,     4,     9,     6,
       8,   225,    83,   108,   184,     5,    83,   144,     5,    73,
      75,   146,    77,    83,     4,   334,    84,    84,     8,    91,
     339,    62,   108,   122,   142,   344,   144,   108,   240,   119,
     254,   108,   105,    78,    79,    80,   142,    73,   108,   424,
     105,    74,   132,    76,   134,     0,   365,   366,     5,   186,
     185,     7,    93,    31,    32,    33,    34,    94,    95,    96,
      97,   151,    15,   228,    17,     4,   176,     6,   186,   187,
       4,   102,     6,   177,   178,   179,     4,   214,     6,     3,
       4,   187,   172,    92,     4,   353,     6,     4,   103,     6,
     180,    31,    32,    99,   100,    81,   214,   234,   188,   236,
      35,    36,   220,   429,    85,     3,   350,     5,   101,     7,
       3,     4,    56,   231,    12,     5,   234,     5,   236,    82,
      83,    35,    36,     3,     4,   231,    73,   217,    73,   247,
      73,   105,    38,     7,     3,   225,    73,    73,     5,   229,
      44,   247,     7,    22,    73,     9,    44,    51,   238,     5,
      48,    73,    50,    51,    52,    53,    54,    55,    56,   105,
      73,     5,     5,    73,   254,     4,    84,     4,     8,    73,
     260,    75,    76,    77,    78,    73,    73,    75,    76,    77,
      78,     4,     6,    81,    88,    89,   321,    73,    73,    87,
      88,    89,    90,     4,     3,   360,    73,    73,     6,     9,
       4,    84,   106,   107,    24,     3,    84,    14,   106,   107,
      37,     4,     6,    84,     6,    73,    73,     3,   308,   329,
      10,     9,   312,     6,     3,   324,    10,   326,   443,   347,
     348,   349,   340,   422,   399,   382,   354,   327,   332,   133,
     330,   347,   348,   349,   362,   113,   345,   360,   275,   386,
     113,   402,    21,   256,   170,   130,   362,   162,   420,   184,
     394,   335,   192,   184,   382,   184,   193,   190,   386,   184,
     202,   370,   205,    89,   212,   148,   382,   208,    -1,   191,
      -1,    -1,    -1,   420,    -1,   194,   197,   213,    -1,    -1,
     400,   354,    -1,    -1,    -1,    -1,    -1,   407,    -1,    -1,
      -1,    -1,   420,   449,   422,   404,   424,   406,    -1,   408,
      -1,    -1,   411,    -1,    -1,    -1,   422,    -1,   424,   409,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,    -1,    -1,    -1,   446,   447,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,   107,     3,    -1,     5,    -1,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,     9,   106,   107,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    -1,    81,     3,    -1,     5,    -1,     7,    87,
      88,    89,    90,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,   106,   107,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,    48,
      -1,    50,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,   106,   107,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    39,    40,    41,    43,    44,    46,    47,    48,    50,
      51,    52,    53,    54,    55,    56,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    73,    75,    76,
      77,    78,    81,    87,    88,    89,    90,   106,   107,   116,
     117,   118,   119,   120,   124,   127,   128,   136,   137,   138,
     140,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   158,   159,   160,   161,   162,   173,   174,   177,
     178,   179,   185,   186,   189,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     216,   219,   220,   221,   223,   224,     6,   154,     8,    84,
     154,    10,   124,    31,    32,    33,    34,   126,   167,   168,
     169,   170,     5,   138,     5,     5,     5,   154,   170,     3,
     154,   167,   170,   125,   170,   170,   155,   138,    73,   215,
     214,    57,    59,   154,   222,    73,   129,   131,   180,   181,
     183,   184,   185,   129,   130,   136,   136,   154,     0,   118,
     170,   138,     5,     3,    52,     3,     4,    49,    83,   108,
       7,   158,    88,    89,   131,   176,   213,   170,    82,    86,
     104,    92,   102,   103,   101,    93,    98,   194,    94,    95,
      96,    97,   195,    99,   100,   196,    74,    76,   197,    78,
      79,    80,   198,    85,    81,   214,   136,     7,    38,    50,
     105,   156,   158,   160,   219,    56,     6,   154,     8,    84,
      10,     5,   163,   168,    35,    36,   171,   154,   146,   154,
     153,    73,     9,    73,   139,     3,   129,     5,   164,   131,
      73,   136,   215,   222,    58,   156,    38,    82,    83,   182,
       7,   161,   183,    91,    35,   171,   172,   154,     3,   155,
     162,   162,   162,     8,   154,    49,    83,    93,    98,   108,
     157,   175,   195,   196,   197,   198,   219,   136,   131,   129,
     154,   199,   200,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   131,    73,   131,   217,     5,   218,
     222,     8,     7,   158,     8,   154,   129,   132,   133,     6,
      45,   165,   131,   131,     6,   154,     6,   153,     4,    84,
      22,   142,   143,     9,    73,   129,   134,   135,   165,    73,
     105,   166,   222,   181,    73,     6,   163,     5,     5,     5,
      73,   190,   191,    84,     4,     8,     6,   154,     8,     8,
      73,   192,     4,     6,   136,    73,    73,   138,     3,   138,
       6,   154,    73,   155,   154,    10,   142,    73,   123,   166,
     192,   193,     4,     3,   166,   123,     9,   166,   138,     6,
     132,   132,   132,   161,     4,   200,   217,     6,   158,   159,
      84,   132,   166,   166,    14,   138,     6,    84,     6,    23,
     141,    24,   144,     4,    10,     3,   134,     8,    73,   131,
     187,   188,    37,   121,     4,     6,     6,   190,   155,   164,
     138,   138,   155,   138,   154,    84,   138,    73,     3,    73,
     188,    10,   130,     9,   132,   165,     6,   124,     3,   117,
     122,     6,     3,   138,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   126,   127,   128,   129,   129,
     130,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   140,   141,   141,   142,   143,   143,   144,
     144,   145,   146,   146,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   150,   150,   151,   151,   152,   152,   152,
     152,   153,   153,   154,   154,   155,   155,   155,   155,   156,
     156,   157,   157,   157,   157,   158,   158,   158,   159,   159,
     159,   160,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   167,   168,   168,   169,
     169,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     174,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     177,   177,   178,   179,   179,   179,   180,   181,   181,   182,
     182,   182,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   190,   190,   191,   191,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   195,   195,   196,
     196,   197,   197,   198,   198,   198,   199,   199,   200,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   213,   213,   213,
     213,   213,   214,   214,   214,   214,   214,   214,   214,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     221,   221,   221,   221,   221,   221,   221,   222,   222,   222,
     223,   223,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224
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
       1,     1,     0,     6,     2,     0,     5,     1,     2,     2,
       0,     6,     1,     1,     5,     5,     6,     7,     7,     9,
       5,     3,     2,     5,     7,     1,     1,     3,     2,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     3,     3,
       0,     1,     1,     1,     1,     3,     4,     5,     2,     3,
       2,     5,     4,     4,     1,     1,     1,     4,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     1,     1,     5,
       9,     1,     1,     1,     1,     1,     7,     5,     5,     4,
       1,     2,     3,     1,     1,     1,     2,     1,     3,     1,
       1,     0,     2,     1,     2,     1,     1,     1,     1,     2,
       3,     1,     2,     7,     3,     1,     1,     2,     1,     2,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     5,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     2,     1,     1,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
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
#line 160 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1959 "src/parser.c"
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
#line 163 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2263 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 164 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2269 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 167 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2275 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 168 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2281 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 172 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2287 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 173 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2293 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 174 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2299 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 175 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2305 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 176 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2311 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 177 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2317 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 178 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2323 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 181 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2329 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 181 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2335 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 184 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), (yyloc));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2349 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 194 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2355 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 194 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2361 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 196 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2367 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 198 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2373 "src/parser.c"
    break;

  case 21: /* id_list: id_list "," "<identifier>"  */
#line 199 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2379 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 201 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2385 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt_list stmt  */
#line 202 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2391 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 204 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2398 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 207 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2405 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 210 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2415 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 216 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2426 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 223 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2432 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 225 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2440 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 229 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2448 "src/parser.c"
    break;

  case 32: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 234 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2454 "src/parser.c"
    break;

  case 33: /* arg: type_decl_array arg_decl  */
#line 235 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2460 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 237 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2466 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 238 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
   }
#line 2476 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 244 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2482 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 245 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2488 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_list "," fptr_arg  */
#line 245 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2494 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 248 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2500 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 249 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2506 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2512 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2518 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2524 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2530 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 257 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2536 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 258 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2542 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 259 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2548 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 260 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2554 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 261 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2560 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 262 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2566 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 263 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2572 "src/parser.c"
    break;

  case 62: /* opt_id: %empty  */
#line 278 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2578 "src/parser.c"
    break;

  case 63: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 281 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2588 "src/parser.c"
    break;

  case 64: /* when_exp: "when" exp  */
#line 287 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2594 "src/parser.c"
    break;

  case 65: /* when_exp: %empty  */
#line 287 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2600 "src/parser.c"
    break;

  case 66: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 290 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2613 "src/parser.c"
    break;

  case 67: /* match_list: match_case_stmt  */
#line 300 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2619 "src/parser.c"
    break;

  case 68: /* match_list: match_list match_case_stmt  */
#line 301 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2625 "src/parser.c"
    break;

  case 69: /* where_stmt: "where" stmt  */
#line 303 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2631 "src/parser.c"
    break;

  case 70: /* where_stmt: %empty  */
#line 303 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2637 "src/parser.c"
    break;

  case 71: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 305 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2650 "src/parser.c"
    break;

  case 72: /* flow: "while"  */
#line 315 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2656 "src/parser.c"
    break;

  case 73: /* flow: "until"  */
#line 316 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2662 "src/parser.c"
    break;

  case 74: /* loop_stmt: flow "(" exp ")" stmt  */
#line 320 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2668 "src/parser.c"
    break;

  case 75: /* loop_stmt: "do" stmt flow exp ";"  */
#line 322 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2674 "src/parser.c"
    break;

  case 76: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 324 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2680 "src/parser.c"
    break;

  case 77: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 326 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2686 "src/parser.c"
    break;

  case 78: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 328 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2692 "src/parser.c"
    break;

  case 79: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 330 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); (yyval.stmt)->d.stmt_each.idx = (yyvsp[-6].sym); }
#line 2698 "src/parser.c"
    break;

  case 80: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 332 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2704 "src/parser.c"
    break;

  case 81: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 335 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2710 "src/parser.c"
    break;

  case 82: /* defer_stmt: "defer" stmt  */
#line 337 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2716 "src/parser.c"
    break;

  case 83: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 341 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2722 "src/parser.c"
    break;

  case 84: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 343 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2728 "src/parser.c"
    break;

  case 85: /* breaks: "break"  */
#line 346 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2734 "src/parser.c"
    break;

  case 86: /* breaks: "continue"  */
#line 346 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2740 "src/parser.c"
    break;

  case 87: /* jump_stmt: "return" exp ";"  */
#line 348 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2746 "src/parser.c"
    break;

  case 88: /* jump_stmt: "return" ";"  */
#line 349 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2752 "src/parser.c"
    break;

  case 89: /* jump_stmt: breaks "<integer>" ";"  */
#line 350 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2758 "src/parser.c"
    break;

  case 90: /* jump_stmt: breaks ";"  */
#line 351 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2764 "src/parser.c"
    break;

  case 91: /* exp_stmt: exp ";"  */
#line 355 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2770 "src/parser.c"
    break;

  case 92: /* exp_stmt: ";"  */
#line 356 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2776 "src/parser.c"
    break;

  case 93: /* exp: binary_exp  */
#line 360 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2782 "src/parser.c"
    break;

  case 94: /* exp: exp "," binary_exp  */
#line 361 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2788 "src/parser.c"
    break;

  case 96: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 365 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2794 "src/parser.c"
    break;

  case 97: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 366 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2800 "src/parser.c"
    break;

  case 98: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 367 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2806 "src/parser.c"
    break;

  case 99: /* call_template: ":[" type_list "]"  */
#line 370 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2812 "src/parser.c"
    break;

  case 100: /* call_template: %empty  */
#line 370 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2818 "src/parser.c"
    break;

  case 105: /* array_exp: "[" exp "]"  */
#line 375 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2824 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]" array_exp  */
#line 376 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2833 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]" "[" "]"  */
#line 380 "src/gwion.y"
                                     { LIST_REM(2) gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2839 "src/parser.c"
    break;

  case 108: /* array_empty: "[" "]"  */
#line 384 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2845 "src/parser.c"
    break;

  case 109: /* array_empty: array_empty "[" "]"  */
#line 385 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2851 "src/parser.c"
    break;

  case 110: /* array_empty: array_empty array_exp  */
#line 386 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2857 "src/parser.c"
    break;

  case 111: /* range: "[" exp ":" exp "]"  */
#line 390 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2863 "src/parser.c"
    break;

  case 112: /* range: "[" exp ":" "]"  */
#line 391 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 2869 "src/parser.c"
    break;

  case 113: /* range: "[" ":" exp "]"  */
#line 392 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 2875 "src/parser.c"
    break;

  case 117: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 398 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2881 "src/parser.c"
    break;

  case 118: /* func_args: "(" arg_list  */
#line 400 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2887 "src/parser.c"
    break;

  case 119: /* func_args: "("  */
#line 400 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 2893 "src/parser.c"
    break;

  case 120: /* fptr_args: "(" fptr_list  */
#line 401 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2899 "src/parser.c"
    break;

  case 121: /* fptr_args: "("  */
#line 401 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 2905 "src/parser.c"
    break;

  case 122: /* arg_type: "..." ")"  */
#line 402 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2911 "src/parser.c"
    break;

  case 123: /* arg_type: ")"  */
#line 402 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2917 "src/parser.c"
    break;

  case 124: /* decl_template: ":[" id_list "]"  */
#line 404 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 2923 "src/parser.c"
    break;

  case 125: /* decl_template: %empty  */
#line 404 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 2929 "src/parser.c"
    break;

  case 126: /* global: "global"  */
#line 406 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2935 "src/parser.c"
    break;

  case 127: /* storage_flag: "static"  */
#line 408 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2941 "src/parser.c"
    break;

  case 129: /* access_flag: "private"  */
#line 410 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2947 "src/parser.c"
    break;

  case 130: /* access_flag: "protect"  */
#line 411 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2953 "src/parser.c"
    break;

  case 131: /* flag: access_flag  */
#line 414 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2959 "src/parser.c"
    break;

  case 132: /* flag: storage_flag  */
#line 415 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2965 "src/parser.c"
    break;

  case 133: /* flag: access_flag storage_flag  */
#line 416 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2971 "src/parser.c"
    break;

  case 134: /* flag: %empty  */
#line 417 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2977 "src/parser.c"
    break;

  case 135: /* final: "final"  */
#line 420 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2983 "src/parser.c"
    break;

  case 136: /* final: %empty  */
#line 420 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2989 "src/parser.c"
    break;

  case 137: /* modifier: "abstract"  */
#line 422 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2995 "src/parser.c"
    break;

  case 139: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 425 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), (yyloc));
  }
#line 3005 "src/parser.c"
    break;

  case 140: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 433 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, (yyloc));
    }
#line 3017 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 444 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3023 "src/parser.c"
    break;

  case 147: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 446 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none); }
#line 3029 "src/parser.c"
    break;

  case 148: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 448 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3038 "src/parser.c"
    break;

  case 149: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 453 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3047 "src/parser.c"
    break;

  case 150: /* operator: "operator"  */
#line 458 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3053 "src/parser.c"
    break;

  case 151: /* operator: "operator" global  */
#line 458 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3059 "src/parser.c"
    break;

  case 152: /* op_def: operator op_base code_stmt  */
#line 460 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), (yyloc)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3065 "src/parser.c"
    break;

  case 155: /* func_def: op_def  */
#line 462 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3071 "src/parser.c"
    break;

  case 156: /* type_decl_tmpl: "<identifier>" call_template  */
#line 465 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3077 "src/parser.c"
    break;

  case 158: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 470 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3083 "src/parser.c"
    break;

  case 159: /* option: "?"  */
#line 473 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3089 "src/parser.c"
    break;

  case 160: /* option: OPTIONS  */
#line 473 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3095 "src/parser.c"
    break;

  case 161: /* option: %empty  */
#line 473 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3101 "src/parser.c"
    break;

  case 162: /* type_decl_opt: type_decl_noflag option  */
#line 474 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 3107 "src/parser.c"
    break;

  case 164: /* type_decl: type_decl_flag type_decl_opt  */
#line 475 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3113 "src/parser.c"
    break;

  case 165: /* type_decl_flag: "LATE"  */
#line 478 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 3119 "src/parser.c"
    break;

  case 166: /* type_decl_flag: "const"  */
#line 479 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 3125 "src/parser.c"
    break;

  case 167: /* type_decl_flag2: "var"  */
#line 481 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3131 "src/parser.c"
    break;

  case 169: /* union_decl: "<identifier>" ";"  */
#line 484 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yyloc));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yyloc));
}
#line 3140 "src/parser.c"
    break;

  case 170: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 488 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3146 "src/parser.c"
    break;

  case 172: /* union_list: union_decl union_list  */
#line 491 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3152 "src/parser.c"
    break;

  case 173: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 494 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yyloc));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3164 "src/parser.c"
    break;

  case 174: /* var_decl_list: var_decl "," var_decl_list  */
#line 504 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3170 "src/parser.c"
    break;

  case 175: /* var_decl_list: var_decl  */
#line 505 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3176 "src/parser.c"
    break;

  case 176: /* var_decl: "<identifier>"  */
#line 508 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3182 "src/parser.c"
    break;

  case 177: /* var_decl: "<identifier>" array  */
#line 509 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3188 "src/parser.c"
    break;

  case 178: /* arg_decl: "<identifier>"  */
#line 511 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3194 "src/parser.c"
    break;

  case 179: /* arg_decl: "<identifier>" array_empty  */
#line 512 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3200 "src/parser.c"
    break;

  case 180: /* arg_decl: "<identifier>" array_exp  */
#line 513 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3206 "src/parser.c"
    break;

  case 182: /* fptr_arg_decl: %empty  */
#line 514 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3212 "src/parser.c"
    break;

  case 196: /* opt_exp: exp  */
#line 522 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3218 "src/parser.c"
    break;

  case 197: /* opt_exp: %empty  */
#line 522 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3224 "src/parser.c"
    break;

  case 199: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 525 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3230 "src/parser.c"
    break;

  case 200: /* con_exp: log_or_exp "?:" con_exp  */
#line 527 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3236 "src/parser.c"
    break;

  case 202: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3242 "src/parser.c"
    break;

  case 204: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 530 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3248 "src/parser.c"
    break;

  case 206: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 531 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3254 "src/parser.c"
    break;

  case 208: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 532 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3260 "src/parser.c"
    break;

  case 210: /* and_exp: and_exp "&" eq_exp  */
#line 533 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3266 "src/parser.c"
    break;

  case 212: /* eq_exp: eq_exp eq_op rel_exp  */
#line 534 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3272 "src/parser.c"
    break;

  case 214: /* rel_exp: rel_exp rel_op shift_exp  */
#line 535 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3278 "src/parser.c"
    break;

  case 216: /* shift_exp: shift_exp shift_op add_exp  */
#line 536 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3284 "src/parser.c"
    break;

  case 218: /* add_exp: add_exp add_op mul_exp  */
#line 537 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3290 "src/parser.c"
    break;

  case 220: /* mul_exp: mul_exp mul_op dur_exp  */
#line 538 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3296 "src/parser.c"
    break;

  case 222: /* dur_exp: dur_exp "::" cast_exp  */
#line 539 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3302 "src/parser.c"
    break;

  case 224: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 542 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3308 "src/parser.c"
    break;

  case 233: /* unary_exp: unary_op unary_exp  */
#line 549 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3314 "src/parser.c"
    break;

  case 234: /* unary_exp: OPID_E unary_exp  */
#line 550 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3320 "src/parser.c"
    break;

  case 235: /* unary_exp: "new" type_decl_exp  */
#line 551 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3326 "src/parser.c"
    break;

  case 236: /* unary_exp: "spork" code_stmt  */
#line 552 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3332 "src/parser.c"
    break;

  case 237: /* unary_exp: "fork" code_stmt  */
#line 553 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3338 "src/parser.c"
    break;

  case 238: /* unary_exp: "$" type_decl_empty  */
#line 554 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3344 "src/parser.c"
    break;

  case 239: /* lambda_list: "<identifier>"  */
#line 557 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3350 "src/parser.c"
    break;

  case 240: /* lambda_list: "<identifier>" lambda_list  */
#line 558 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3356 "src/parser.c"
    break;

  case 241: /* lambda_arg: "\\" lambda_list  */
#line 559 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3362 "src/parser.c"
    break;

  case 242: /* lambda_arg: "\\"  */
#line 559 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3368 "src/parser.c"
    break;

  case 243: /* type_list: type_decl_empty  */
#line 562 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3374 "src/parser.c"
    break;

  case 244: /* type_list: type_decl_empty "," type_list  */
#line 563 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3380 "src/parser.c"
    break;

  case 245: /* call_paren: "(" exp ")"  */
#line 567 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3386 "src/parser.c"
    break;

  case 246: /* call_paren: "(" ")"  */
#line 567 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3392 "src/parser.c"
    break;

  case 249: /* dot_exp: post_exp "." "<identifier>"  */
#line 571 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3405 "src/parser.c"
    break;

  case 251: /* post_exp: post_exp array_exp  */
#line 582 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3411 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp range  */
#line 584 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3417 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp call_template call_paren  */
#line 586 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3424 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp post_op  */
#line 589 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3430 "src/parser.c"
    break;

  case 255: /* post_exp: post_exp OPID_E  */
#line 591 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3436 "src/parser.c"
    break;

  case 256: /* post_exp: dot_exp  */
#line 592 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3442 "src/parser.c"
    break;

  case 257: /* interp_exp: "<interp string>`"  */
#line 596 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3448 "src/parser.c"
    break;

  case 258: /* interp_exp: "<interp string>" interp_exp  */
#line 597 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3454 "src/parser.c"
    break;

  case 259: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 598 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3460 "src/parser.c"
    break;

  case 260: /* interp: "`" interp_exp  */
#line 600 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3466 "src/parser.c"
    break;

  case 261: /* interp: interp "`" interp_exp  */
#line 601 "src/gwion.y"
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
#line 3481 "src/parser.c"
    break;

  case 262: /* prim_exp: "<identifier>"  */
#line 613 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3487 "src/parser.c"
    break;

  case 263: /* prim_exp: "<integer>"  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3493 "src/parser.c"
    break;

  case 264: /* prim_exp: FLOATT  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3499 "src/parser.c"
    break;

  case 265: /* prim_exp: interp  */
#line 616 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3505 "src/parser.c"
    break;

  case 266: /* prim_exp: "<litteral string>"  */
#line 617 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3511 "src/parser.c"
    break;

  case 267: /* prim_exp: "<litteral char>"  */
#line 618 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3517 "src/parser.c"
    break;

  case 268: /* prim_exp: array  */
#line 619 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3523 "src/parser.c"
    break;

  case 269: /* prim_exp: range  */
#line 620 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3529 "src/parser.c"
    break;

  case 270: /* prim_exp: "<<<" exp ">>>"  */
#line 621 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3535 "src/parser.c"
    break;

  case 271: /* prim_exp: "(" exp ")"  */
#line 622 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3541 "src/parser.c"
    break;

  case 272: /* prim_exp: lambda_arg code_stmt  */
#line 623 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3547 "src/parser.c"
    break;

  case 273: /* prim_exp: "(" ")"  */
#line 624 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3553 "src/parser.c"
    break;


#line 3557 "src/parser.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, arg, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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


#if 1
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 626 "src/gwion.y"

