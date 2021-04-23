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
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
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

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol lambda_name(const Scanner*);

#line 106 "src/parser.c"

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
  YYSYMBOL_TRY = 29,                       /* "try"  */
  YYSYMBOL_PERFORM = 30,                   /* "perform"  */
  YYSYMBOL_HANDLET = 31,                   /* "handle"  */
  YYSYMBOL_RETRY = 32,                     /* "retry"  */
  YYSYMBOL_CLASS = 33,                     /* "class"  */
  YYSYMBOL_STRUCT = 34,                    /* "struct"  */
  YYSYMBOL_TRAIT = 35,                     /* "trait"  */
  YYSYMBOL_STATIC = 36,                    /* "static"  */
  YYSYMBOL_GLOBAL = 37,                    /* "global"  */
  YYSYMBOL_PRIVATE = 38,                   /* "private"  */
  YYSYMBOL_PROTECT = 39,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 40,                  /* "abstract"  */
  YYSYMBOL_FINAL = 41,                     /* "final"  */
  YYSYMBOL_EXTENDS = 42,                   /* "extends"  */
  YYSYMBOL_DOT = 43,                       /* "."  */
  YYSYMBOL_OPERATOR = 44,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 45,                   /* "typedef"  */
  YYSYMBOL_DISTINCT = 46,                  /* "distinct"  */
  YYSYMBOL_FUNPTR = 47,                    /* "funptr"  */
  YYSYMBOL_NOELSE = 48,                    /* NOELSE  */
  YYSYMBOL_UNION = 49,                     /* "union"  */
  YYSYMBOL_CONSTT = 50,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 51,                   /* "..."  */
  YYSYMBOL_VARLOOP = 52,                   /* "varloop"  */
  YYSYMBOL_DEFER = 53,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 54,                 /* "\\"  */
  YYSYMBOL_OPID_A = 55,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 56,                    /* OPID_E  */
  YYSYMBOL_LATE = 57,                      /* "late"  */
  YYSYMBOL_NUM = 58,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 59,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 60,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 61,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 62,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 63,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 64,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 65,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 66,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 67,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 68,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 69,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 70,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 71,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 72,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 73,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 74,                  /* "#if"  */
  YYSYMBOL_PP_NL = 75,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 76,                /* "require"  */
  YYSYMBOL_77_operator_id_ = 77,           /* "@<operator id>"  */
  YYSYMBOL_78_operator_id_ = 78,           /* "&<operator id>"  */
  YYSYMBOL_ID = 79,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 80,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 81,                  /* "++"  */
  YYSYMBOL_MINUS = 82,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 83,                /* "--"  */
  YYSYMBOL_TIMES = 84,                     /* "*"  */
  YYSYMBOL_DIVIDE = 85,                    /* "/"  */
  YYSYMBOL_PERCENT = 86,                   /* "%"  */
  YYSYMBOL_DOLLAR = 87,                    /* "$"  */
  YYSYMBOL_QUESTION = 88,                  /* "?"  */
  YYSYMBOL_OPTIONS = 89,                   /* OPTIONS  */
  YYSYMBOL_COLON = 90,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 91,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 92,             /* "?:"  */
  YYSYMBOL_NEW = 93,                       /* "new"  */
  YYSYMBOL_SPORK = 94,                     /* "spork"  */
  YYSYMBOL_FORK = 95,                      /* "fork"  */
  YYSYMBOL_L_HACK = 96,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 97,                    /* ">>>"  */
  YYSYMBOL_AND = 98,                       /* "&&"  */
  YYSYMBOL_EQ = 99,                        /* "=="  */
  YYSYMBOL_GE = 100,                       /* ">="  */
  YYSYMBOL_GT = 101,                       /* ">"  */
  YYSYMBOL_LE = 102,                       /* "<="  */
  YYSYMBOL_LT = 103,                       /* "<"  */
  YYSYMBOL_NEQ = 104,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 105,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 106,              /* ">>"  */
  YYSYMBOL_S_AND = 107,                    /* "&"  */
  YYSYMBOL_S_OR = 108,                     /* "|"  */
  YYSYMBOL_S_XOR = 109,                    /* "^"  */
  YYSYMBOL_OR = 110,                       /* "||"  */
  YYSYMBOL_TMPL = 111,                     /* ":["  */
  YYSYMBOL_TILDA = 112,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 113,              /* "!"  */
  YYSYMBOL_DYNOP = 114,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 115,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 116,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 117,                   /* UTIMES  */
  YYSYMBOL_118_ = 118,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 119,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 120,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 121,                 /* $accept  */
  YYSYMBOL_prg = 122,                      /* prg  */
  YYSYMBOL_ast = 123,                      /* ast  */
  YYSYMBOL_section = 124,                  /* section  */
  YYSYMBOL_class_flag = 125,               /* class_flag  */
  YYSYMBOL_class_def = 126,                /* class_def  */
  YYSYMBOL_class_ext = 127,                /* class_ext  */
  YYSYMBOL_traits = 128,                   /* traits  */
  YYSYMBOL_extend_body = 129,              /* extend_body  */
  YYSYMBOL_extend_def = 130,               /* extend_def  */
  YYSYMBOL_class_body = 131,               /* class_body  */
  YYSYMBOL_id_list = 132,                  /* id_list  */
  YYSYMBOL_stmt_list = 133,                /* stmt_list  */
  YYSYMBOL_fptr_base = 134,                /* fptr_base  */
  YYSYMBOL_func_base = 135,                /* func_base  */
  YYSYMBOL_fptr_def = 136,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 137,             /* typedef_when  */
  YYSYMBOL_type_def_type = 138,            /* type_def_type  */
  YYSYMBOL_type_def = 139,                 /* type_def  */
  YYSYMBOL_type_decl_array = 140,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 141,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 142,          /* type_decl_empty  */
  YYSYMBOL_arg = 143,                      /* arg  */
  YYSYMBOL_arg_list = 144,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 145,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 146,                /* fptr_list  */
  YYSYMBOL_code_stmt = 147,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 148,                  /* stmt_pp  */
  YYSYMBOL_stmt = 149,                     /* stmt  */
  YYSYMBOL_retry_stmt = 150,               /* retry_stmt  */
  YYSYMBOL_handler = 151,                  /* handler  */
  YYSYMBOL_152_1 = 152,                    /* $@1  */
  YYSYMBOL_handler_list = 153,             /* handler_list  */
  YYSYMBOL_try_stmt = 154,                 /* try_stmt  */
  YYSYMBOL_opt_id = 155,                   /* opt_id  */
  YYSYMBOL_enum_def = 156,                 /* enum_def  */
  YYSYMBOL_when_exp = 157,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 158,          /* match_case_stmt  */
  YYSYMBOL_match_list = 159,               /* match_list  */
  YYSYMBOL_where_stmt = 160,               /* where_stmt  */
  YYSYMBOL_match_stmt = 161,               /* match_stmt  */
  YYSYMBOL_flow = 162,                     /* flow  */
  YYSYMBOL_loop_stmt = 163,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 164,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 165,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 166,           /* selection_stmt  */
  YYSYMBOL_breaks = 167,                   /* breaks  */
  YYSYMBOL_jump_stmt = 168,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 169,                 /* exp_stmt  */
  YYSYMBOL_exp = 170,                      /* exp  */
  YYSYMBOL_binary_exp = 171,               /* binary_exp  */
  YYSYMBOL_call_template = 172,            /* call_template  */
  YYSYMBOL_op = 173,                       /* op  */
  YYSYMBOL_array_exp = 174,                /* array_exp  */
  YYSYMBOL_array_empty = 175,              /* array_empty  */
  YYSYMBOL_range = 176,                    /* range  */
  YYSYMBOL_array = 177,                    /* array  */
  YYSYMBOL_decl_exp = 178,                 /* decl_exp  */
  YYSYMBOL_func_args = 179,                /* func_args  */
  YYSYMBOL_fptr_args = 180,                /* fptr_args  */
  YYSYMBOL_arg_type = 181,                 /* arg_type  */
  YYSYMBOL_decl_template = 182,            /* decl_template  */
  YYSYMBOL_global = 183,                   /* global  */
  YYSYMBOL_storage_flag = 184,             /* storage_flag  */
  YYSYMBOL_access_flag = 185,              /* access_flag  */
  YYSYMBOL_flag = 186,                     /* flag  */
  YYSYMBOL_final = 187,                    /* final  */
  YYSYMBOL_modifier = 188,                 /* modifier  */
  YYSYMBOL_func_trait = 189,               /* func_trait  */
  YYSYMBOL_func_code = 190,                /* func_code  */
  YYSYMBOL_func_def_base = 191,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 192,            /* abstract_fdef  */
  YYSYMBOL_op_op = 193,                    /* op_op  */
  YYSYMBOL_op_base = 194,                  /* op_base  */
  YYSYMBOL_operator = 195,                 /* operator  */
  YYSYMBOL_op_def = 196,                   /* op_def  */
  YYSYMBOL_func_def = 197,                 /* func_def  */
  YYSYMBOL_ref = 198,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 199,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 200,         /* type_decl_noflag  */
  YYSYMBOL_option = 201,                   /* option  */
  YYSYMBOL_type_decl_opt = 202,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 203,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 204,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 205,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 206,               /* union_decl  */
  YYSYMBOL_union_list = 207,               /* union_list  */
  YYSYMBOL_union_def = 208,                /* union_def  */
  YYSYMBOL_var_decl_list = 209,            /* var_decl_list  */
  YYSYMBOL_var_decl = 210,                 /* var_decl  */
  YYSYMBOL_arg_decl = 211,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 212,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 213,                    /* eq_op  */
  YYSYMBOL_rel_op = 214,                   /* rel_op  */
  YYSYMBOL_shift_op = 215,                 /* shift_op  */
  YYSYMBOL_add_op = 216,                   /* add_op  */
  YYSYMBOL_mul_op = 217,                   /* mul_op  */
  YYSYMBOL_opt_exp = 218,                  /* opt_exp  */
  YYSYMBOL_con_exp = 219,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 220,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 221,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 222,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 223,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 224,                  /* and_exp  */
  YYSYMBOL_eq_exp = 225,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 226,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 227,                /* shift_exp  */
  YYSYMBOL_add_exp = 228,                  /* add_exp  */
  YYSYMBOL_mul_exp = 229,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 230,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 231,                 /* cast_exp  */
  YYSYMBOL_unary_op = 232,                 /* unary_op  */
  YYSYMBOL_unary_exp = 233,                /* unary_exp  */
  YYSYMBOL_lambda_list = 234,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 235,               /* lambda_arg  */
  YYSYMBOL_type_list = 236,                /* type_list  */
  YYSYMBOL_call_paren = 237,               /* call_paren  */
  YYSYMBOL_post_op = 238,                  /* post_op  */
  YYSYMBOL_dot_exp = 239,                  /* dot_exp  */
  YYSYMBOL_post_exp = 240,                 /* post_exp  */
  YYSYMBOL_interp_exp = 241,               /* interp_exp  */
  YYSYMBOL_interp = 242,                   /* interp  */
  YYSYMBOL_prim_exp = 243                  /* prim_exp  */
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
#define YYFINAL  208
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1731

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  302
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  522

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   375


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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   164,   164,   165,   168,   169,   173,   174,   175,   176,
     177,   178,   179,   180,   183,   185,   192,   199,   207,   220,
     220,   221,   221,   223,   227,   233,   241,   241,   243,   244,
     246,   247,   249,   252,   255,   261,   261,   262,   262,   263,
     272,   272,   274,   278,   283,   284,   286,   287,   293,   294,
     294,   297,   298,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   329,   334,   334,   335,   336,
     342,   344,   344,   347,   353,   353,   356,   366,   367,   369,
     369,   371,   381,   382,   386,   388,   390,   392,   394,   396,
     402,   406,   408,   411,   413,   417,   417,   419,   420,   421,
     422,   426,   427,   431,   432,   436,   437,   438,   439,   442,
     442,   444,   444,   444,   444,   447,   448,   452,   456,   457,
     458,   462,   463,   464,   467,   467,   468,   469,   471,   471,
     472,   472,   473,   473,   475,   475,   477,   479,   479,   481,
     482,   485,   486,   487,   488,   491,   491,   493,   493,   495,
     495,   496,   496,   498,   509,   518,   518,   518,   518,   518,
     520,   522,   524,   529,   535,   535,   536,   539,   539,   539,
     541,   541,   543,   544,   548,   549,   552,   552,   552,   553,
     554,   554,   557,   558,   560,   560,   563,   567,   569,   570,
     573,   583,   584,   587,   588,   590,   591,   592,   593,   593,
     595,   595,   596,   596,   596,   596,   597,   597,   598,   598,
     599,   599,   599,   601,   601,   602,   603,   605,   608,   608,
     609,   609,   610,   610,   611,   611,   612,   612,   613,   613,
     614,   614,   615,   615,   616,   616,   617,   617,   618,   618,
     620,   620,   623,   623,   623,   624,   624,   624,   624,   627,
     628,   629,   630,   631,   632,   633,   636,   637,   638,   638,
     641,   642,   646,   646,   648,   648,   650,   659,   660,   662,
     664,   667,   669,   671,   675,   676,   677,   679,   680,   692,
     693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705
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
  "break", "continue", "try", "perform", "handle", "retry", "class",
  "struct", "trait", "static", "global", "private", "protect", "abstract",
  "final", "extends", ".", "operator", "typedef", "distinct", "funptr",
  "NOELSE", "union", "const", "...", "varloop", "defer", "\\", "OPID_A",
  "OPID_E", "late", "<integer>", "FLOATT", "<litteral string>",
  "<litteral char>", "`", "<interp string>", "INTERP_EXP",
  "<interp string>`", "<comment>", "#include", "#define", "#pragma",
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "require",
  "@<operator id>", "&<operator id>", "<identifier>", "+", "++", "-", "--",
  "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork",
  "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>",
  "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "class_ext", "traits",
  "extend_body", "extend_def", "class_body", "id_list", "stmt_list",
  "fptr_base", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt",
  "retry_stmt", "handler", "$@1", "handler_list", "try_stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_trait", "func_code", "func_def_base", "abstract_fdef", "op_op",
  "op_base", "operator", "op_def", "func_def", "ref", "type_decl_tmpl",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375
};
#endif

#define YYPACT_NINF (-317)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-221)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     501,  -317,   970,  1031,   612,   226,  -317,    61,  -317,   825,
    -317,    93,    96,   143,  1574,   226,    73,  -317,  -317,   825,
     -27,    60,   226,   226,   226,    -7,   133,  -317,  -317,   226,
     226,  -317,  1574,   825,    82,  1618,  -317,  -317,  -317,  -317,
    -317,  1092,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,    -7,    -7,
     181,   181,  1574,  -317,  -317,   213,   501,  -317,  -317,  -317,
     825,  -317,   226,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,   220,  -317,  -317,  -317,  -317,    46,  -317,  -317,   206,
     -24,  -317,   215,  -317,  -317,  -317,  -317,  -317,   203,  -317,
    -317,  -317,   226,  -317,  -317,     4,   135,   134,   137,   147,
     -29,   171,   124,   136,   120,   159,   180,  1618,  -317,   181,
    -317,  -317,   158,   216,  -317,  -317,  -317,   269,   287,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,   178,  -317,   290,  -317,  -317,  -317,  -317,  -317,  1574,
      56,  -317,   723,  -317,  -317,  -317,  -317,   278,  -317,  -317,
     240,   248,  1574,    69,  1574,   910,   224,   174,   225,  -317,
     277,   274,  -317,  -317,   228,   251,   229,   232,   198,   205,
    -317,   304,   235,   275,   211,  -317,   312,   -20,  -317,   315,
      -7,   242,    80,    58,  -317,    82,  -317,  -317,  1092,  -317,
      38,  -317,  -317,  -317,  -317,  -317,  -317,    21,  -317,  -317,
    -317,    -7,  1574,  -317,   319,  -317,  1574,  1574,  1574,  1574,
    1153,  -317,  -317,  -317,   847,   181,    -7,    -7,  1574,  1618,
    1618,  1618,  1618,  1618,  1618,  -317,  -317,  1618,  1618,  1618,
    -317,  1618,  -317,  1618,  1618,    -7,  -317,  -317,  1213,   244,
    -317,    -7,   320,  -317,  -317,  -317,  1092,  -317,  -317,   118,
     321,  1274,  -317,    -7,    48,  -317,    -7,  -317,    -7,   217,
    1574,    26,   910,    22,   305,  -317,   317,  -317,  -317,  -317,
     274,   218,  -317,  -317,  -317,   218,   218,  -317,  -317,    45,
     198,   -20,  -317,  -317,  -317,  1334,  -317,  -317,    -7,    48,
     252,   218,   218,  -317,  -317,  -317,  1092,  -317,   253,   230,
    -317,   -24,  -317,  -317,  -317,  -317,   189,   278,   325,   328,
    -317,   330,   257,   333,   249,  -317,   135,   134,   137,   147,
     -29,   171,   124,   136,   120,   159,   180,  -317,  -317,   334,
     332,  1394,  -317,  -317,  -317,  1454,  -317,  -317,   191,   263,
    -317,   339,  -317,   338,   256,   268,   270,   825,   298,   825,
    1514,   272,  1574,  1574,  -317,    47,   273,   225,  -317,   273,
     311,   264,   264,    63,  -317,  -317,  -317,   263,  -317,   351,
     353,   218,   264,   348,  -317,   218,   825,   355,    -7,    -7,
      -7,   312,  -317,   358,  1618,    -7,  -317,  -317,   239,  -317,
    -317,   312,   276,    -7,  -317,   280,    88,   218,   218,   350,
    -317,  -317,   825,   262,   282,    27,   102,   343,  -317,  -317,
     154,   825,   192,    -7,   264,   273,   359,   365,  -317,  -317,
    -317,  -317,    -7,  -317,  -317,   366,    -2,   356,  -317,  -317,
     374,   377,   380,  -317,   257,  -317,  -317,  -317,  -317,   215,
    1574,  -317,  -317,  -317,  -317,  -317,   315,  -317,   825,  -317,
     825,  1574,   825,  1574,   297,   825,  -317,   309,  -317,  -317,
    -317,  -317,   381,   385,   501,   501,  -317,   501,    33,   313,
      -2,   383,  1574,   388,    -7,  -317,  -317,  -317,   -24,    48,
    -317,  -317,    28,  -317,   333,   825,  -317,  -317,   501,   501,
     384,   386,   387,  -317,   395,  -317,  -317,   -24,  -317,   393,
     397,   825,   825,   391,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   112,     0,     0,     0,   154,   194,     0,    92,     0,
      93,     0,     0,     0,     0,   154,     0,   105,   106,     0,
       0,     0,   154,   154,   154,     0,   174,    37,    38,   154,
     154,   193,     0,     0,   269,     0,   192,   290,   291,   293,
     294,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   289,   274,   252,   275,   253,     0,     0,
     256,   257,     0,   258,   255,     0,     2,     4,     8,     9,
       6,    12,   154,    13,    67,    70,    30,    74,    73,    10,
      68,     0,    65,    71,    72,    66,     0,    69,    64,     0,
     113,   134,   135,   296,   295,   115,   177,   178,     0,   179,
       7,   195,   154,    11,   136,   225,   228,   230,   232,   234,
     236,   238,   240,   242,   244,   246,   248,     0,   250,     0,
     254,   283,   259,   292,   277,   302,   218,   252,   253,   221,
     222,   124,   121,   215,   213,   214,   212,   122,   216,   217,
     123,     0,   165,     0,   167,   166,   169,   168,   128,     0,
       0,    51,     0,   147,   146,   149,   150,     0,   148,   152,
     151,   156,     0,     0,     0,     0,     0,     0,    82,   108,
       0,     0,   301,    75,     0,   156,     0,     0,   120,   180,
      42,     0,     0,   184,   188,   190,    41,     0,   175,     0,
       0,     0,     0,     0,   102,   266,   268,   261,     0,   284,
       0,   287,    43,   265,   262,   263,   264,     0,     1,     5,
      31,     0,     0,   110,     0,   111,     0,     0,     0,     0,
       0,   130,   256,   257,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,   210,   211,     0,     0,     0,
     219,     0,   220,     0,     0,     0,   260,   299,     0,     0,
     282,     0,     0,   278,   279,   281,     0,   298,   300,     0,
     125,     0,    52,   139,     0,   153,     0,   155,     0,     0,
       0,     0,     0,     0,     0,    81,     0,   107,    76,    78,
      80,   145,   157,   158,    14,   145,   145,   182,   181,     0,
     120,     0,   186,   187,   189,     0,    40,   191,   141,     0,
       0,   145,   145,   101,   267,   285,     0,   297,     0,     0,
     109,   114,   116,   118,   117,   129,     0,     0,     0,     0,
     176,     0,     0,   223,     0,   227,   229,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   251,   276,   270,
       0,     0,   280,   288,   133,     0,   126,   132,     0,     0,
      46,   138,   143,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    82,    79,     0,
      20,    21,    21,     0,    23,   183,   185,   209,    49,   140,
       0,   145,    21,     0,   286,   145,     0,     0,     0,     0,
       0,   203,   137,   202,     0,     0,   119,   273,     0,   127,
     131,   205,    45,     0,   142,     0,     0,   145,   145,   103,
      95,   100,     0,     0,     0,     0,    85,    90,    88,    28,
       0,     0,     0,     0,    21,     0,     0,     0,    25,    24,
     208,    48,     0,    34,    32,     0,     0,    35,    94,   173,
       0,     0,     0,   204,     0,   226,   271,   272,   207,   206,
       0,    47,   160,   162,   161,   163,     0,    33,     0,    96,
       0,     0,     0,     0,     0,     0,    91,     0,    83,    77,
     144,    19,     0,    22,    27,    27,    50,    27,   120,     0,
     198,     0,     0,     0,     0,   171,   172,   201,    44,     0,
     104,    97,     0,    98,    84,     0,    89,    29,    27,    26,
       0,     0,     0,   196,     0,   199,   200,    36,    39,     0,
       0,     0,    86,     0,    16,    18,    17,   197,   170,   164,
      99,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,   402,   -61,   150,  -317,  -317,  -314,  -317,  -317,
    -296,  -316,    -3,  -317,  -317,  -317,  -317,  -317,  -317,    -8,
     -50,   -51,  -295,  -317,   -26,  -317,   -48,  -317,    -9,  -317,
     125,  -317,  -317,  -317,    41,  -317,  -317,    42,  -317,  -317,
    -317,   246,  -317,  -317,  -317,  -317,  -317,  -317,  -119,     0,
     -28,   -99,  -317,   -84,     9,   289,  -167,    40,    97,   -40,
    -278,  -257,   392,   259,  -317,   222,   260,  -317,  -317,  -317,
    -317,  -317,   196,  -317,  -317,  -317,  -262,   247,  -317,   132,
    -317,   238,  -317,   -19,  -317,  -317,   -53,  -317,   -16,  -317,
      53,  -317,  -317,  -100,   -97,   -95,   -94,  -317,  -207,  -317,
     201,   204,   200,   207,   202,   197,   199,   208,   209,   212,
     195,   344,     2,   250,  -317,    49,  -317,   -87,  -317,  -317,
    -168,  -317,  -317
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   499,    67,   174,    68,   424,   426,   373,    69,
     500,   420,    70,   189,   157,    71,   483,    72,    73,   202,
     181,   339,   350,   351,   378,   379,    74,    75,    76,    77,
     279,   367,   280,    78,   276,    79,   464,   364,   365,   466,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   287,   142,    91,    92,    93,    94,    95,   264,   299,
     354,   370,   158,   159,   160,   175,   283,   284,   406,   455,
      96,    97,   143,   225,    98,    99,   100,   182,   183,   184,
     294,   185,   186,   101,   102,   480,   481,   103,   392,   393,
     402,   431,   237,   144,   145,   146,   147,   324,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   196,   119,   340,   342,   120,   121,   122,
     201,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,   152,   141,   150,   193,   209,   187,   203,   221,   204,
     171,   238,   205,   206,   167,   239,   170,   180,   241,   296,
     243,   380,   325,   252,   194,   216,   361,   374,   371,   372,
     305,   217,   359,   462,   511,   255,   503,   197,   253,   187,
     187,   200,   216,    31,   382,   383,   272,   224,    31,   213,
      36,   180,   172,   422,   352,    36,     5,   417,   427,   178,
     216,   210,   207,   173,   260,   218,   162,     4,   435,   363,
     235,   247,   178,   428,     5,   236,   169,   478,     2,   187,
       3,   217,   217,   217,     8,     6,    10,   179,   343,    26,
     219,   453,   228,   440,   441,   442,   229,     4,   164,   353,
     179,   165,   306,    20,   214,   179,   216,    26,   451,   473,
     472,   429,   362,   217,   230,   218,   218,   218,   307,   246,
     282,   267,   216,    31,   434,   463,   344,    34,   437,    35,
      36,    37,    38,    39,    40,    41,   271,   319,   384,   300,
     219,   219,   219,   210,   251,   303,   261,   218,   166,   259,
     456,   457,    53,   360,    54,    55,    56,    57,   467,   302,
      58,   195,   269,  -120,   468,   248,    59,    60,    61,    62,
     154,   187,   219,   176,   177,   321,   346,   320,   216,   501,
     191,   502,   216,   274,   257,    63,    64,   445,   311,   509,
       4,   375,   187,   216,   337,   216,   467,   260,   200,   400,
     470,   249,   513,   308,   242,   129,   130,   187,   187,   215,
     216,   510,   309,   208,   250,   355,   126,   356,   240,   322,
     316,   216,   220,   357,   443,   212,   187,   161,   323,   138,
     139,   238,   187,   231,   216,   239,   386,   168,   241,    54,
     243,    56,   232,   216,   187,   447,   233,   187,   150,   187,
     244,   190,   192,    31,   234,   349,   200,   312,   313,   314,
      36,   348,   153,   154,   155,   156,   216,   245,   460,   251,
     358,   133,   134,   135,   136,  -219,   153,   154,   256,   187,
     277,   216,   178,   263,    54,    55,    56,    57,   266,   267,
     377,   282,   267,  -220,   211,   316,   258,   222,   223,   292,
     293,   410,   216,   273,   275,   278,   200,   281,   285,   251,
     179,   286,   179,   289,   290,    63,    64,   448,   291,   295,
     298,   301,   310,   338,   227,   341,   366,   363,   345,   369,
     388,   381,   385,   389,   415,   390,   391,   216,   395,   394,
     396,   398,   401,   403,   404,   316,   405,   407,   409,   408,
     411,   414,   419,   423,   425,   432,   433,   436,   454,   452,
     413,   439,   444,   416,   458,   221,   450,   465,   474,   187,
     187,   187,   461,   471,   475,   477,   187,   438,   484,   482,
     349,   349,   349,   485,   187,   479,   486,   495,   497,   467,
     498,   508,   504,   506,   514,   349,   515,   516,   517,   518,
     519,   521,    66,   459,   187,   368,   476,   418,   421,   270,
     449,   254,   469,   187,   387,   180,   489,   187,   188,   265,
     318,   268,   488,   376,   377,   297,   288,   505,   487,   479,
     430,   326,   328,   492,   331,   327,   330,   332,   209,   336,
     329,     0,   226,     0,   446,   304,     0,   333,     0,   490,
     334,   491,     0,   493,   507,   335,   496,     0,     0,     0,
       0,   187,     0,   494,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   512,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   520,   210,     1,     0,     2,     0,     3,     0,
       4,     0,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    15,    16,    17,    18,
      19,    20,     0,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,    28,    29,     0,
      30,    31,     0,    32,    33,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,     0,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,     1,     0,     2,     0,     3,
       0,     4,   151,     0,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,     0,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,     1,     0,     2,     0,
       3,     0,     4,   262,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    32,    33,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     4,    63,    64,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,   317,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     1,     0,     2,     0,     3,    59,    60,
      61,    62,     6,     0,     0,     0,     0,   126,    54,   240,
      56,   242,   129,   130,     0,     0,   131,    63,    64,     0,
      20,     0,     0,     0,     0,     0,   132,   133,   134,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
      31,   140,     0,     0,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     2,   125,     3,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,     2,     0,     3,   148,
       0,     0,     0,     6,     0,     0,     0,     0,     0,    53,
     126,    54,   127,    56,   128,   129,   130,    58,     0,   131,
       0,    20,     0,    59,    60,    61,    62,     0,     0,   132,
     133,   134,   135,   136,   137,   138,   139,     0,     0,     0,
       0,    31,    63,    64,   140,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,   149,    20,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    63,    64,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,   198,     0,   199,     2,     0,
       3,   315,     0,     0,     0,     6,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,     0,    20,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    63,    64,     0,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     2,
       0,     3,   347,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,   149,    20,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    63,    64,     0,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     2,
       0,     3,   148,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,    20,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    63,    64,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     2,
     397,     3,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,    20,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    63,    64,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     2,
       0,     3,   399,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,    20,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    63,    64,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     2,
     412,     3,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,    20,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    63,    64,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,    20,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    31,     3,    63,    64,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,     0,    34,     0,    35,     0,    37,    38,    39,    40,
      41,     0,     0,     0,     0,     0,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    32,    66,    25,    58,    92,    59,
      19,   111,    60,    61,    14,   112,    16,    25,   113,   186,
     114,   299,   229,   122,    33,     4,     4,   289,   285,   286,
     198,    55,     6,     6,     6,   122,     3,    35,   122,    58,
      59,    41,     4,    50,   301,   302,   165,    98,    50,     3,
      57,    59,    79,   369,     6,    57,    11,    10,   372,    79,
       4,    70,    62,     3,     8,    89,     5,     9,   382,    22,
      99,   119,    79,    10,    11,   104,     3,    79,     5,    98,
       7,    55,    55,    55,    15,    12,    17,   107,   256,    44,
     114,     3,    88,   388,   389,   390,    92,     9,     5,    51,
     107,     5,    64,    30,    58,   107,     4,    44,   403,   425,
     424,   373,    90,    55,   110,    89,    89,    89,    97,   117,
      40,    41,     4,    50,   381,    23,     8,    54,   385,    56,
      57,    58,    59,    60,    61,    62,   164,   224,   306,   190,
     114,   114,   114,   152,   111,   193,    90,    89,     5,   149,
     407,   408,    79,   272,    81,    82,    83,    84,     4,    79,
      87,    79,   162,     5,    10,     7,    93,    94,    95,    96,
      37,   190,   114,    23,    24,   226,   260,   225,     4,   475,
      30,   477,     4,     9,     6,   112,   113,   394,   216,   484,
       9,   290,   211,     4,   245,     4,     4,     8,   198,     8,
       8,    43,   498,   211,    84,    85,    86,   226,   227,     3,
       4,   489,   212,     0,    56,   266,    80,   268,    82,   227,
     220,     4,     7,     6,   391,     5,   245,     5,   228,   105,
     106,   331,   251,    98,     4,   332,     6,    15,   333,    81,
     334,    83,   108,     4,   263,     6,   109,   266,   248,   268,
      91,    29,    30,    50,   107,   263,   256,   217,   218,   219,
      57,   261,    36,    37,    38,    39,     4,    87,     6,   111,
     270,   100,   101,   102,   103,     6,    36,    37,    62,   298,
       3,     4,    79,     5,    81,    82,    83,    84,    40,    41,
     298,    40,    41,     6,    72,   295,     6,    94,    95,    88,
      89,     3,     4,    79,    79,    31,   306,    79,    79,   111,
     107,    79,   107,     9,    79,   112,   113,   401,    43,     7,
       5,    79,     3,    79,   102,     5,     9,    22,     7,   111,
       5,    79,    79,     5,   362,     5,    79,     4,     4,    90,
       8,   341,    79,     4,     6,   345,    90,    79,   357,    79,
     359,    79,    79,    42,    90,     4,     3,     9,   406,    79,
     360,     6,     4,   363,    14,   449,    90,    24,     9,   388,
     389,   390,    90,   423,     9,     9,   395,   386,     4,    23,
     388,   389,   390,     6,   403,   436,     6,    90,    79,     4,
       9,     3,    79,    10,    10,   403,    10,    10,     3,     6,
       3,    10,     0,   412,   423,   280,   432,   365,   367,   163,
     401,   122,   421,   432,   317,   423,   456,   436,    26,   160,
     224,   161,   450,   291,   432,   187,   179,   480,   444,   480,
     377,   230,   232,   461,   237,   231,   234,   238,   499,   244,
     233,    -1,    98,    -1,   395,   195,    -1,   239,    -1,   458,
     241,   460,    -1,   462,   482,   243,   465,    -1,    -1,    -1,
      -1,   480,    -1,   463,    -1,   484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   511,   512,     3,    -1,     5,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,    -1,
      49,    50,    -1,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,     3,    -1,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,   112,   113,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    55,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,     3,    -1,     5,    -1,     7,    93,    94,
      95,    96,    12,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    89,   112,   113,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      50,   114,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   112,   113,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      -1,    30,    -1,    93,    94,    95,    96,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    50,   112,   113,   114,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    30,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    30,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    30,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,   112,   113,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    50,     7,   112,   113,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    54,    -1,    56,    -1,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    62,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    79,    81,    82,    83,    84,    87,    93,
      94,    95,    96,   112,   113,   122,   123,   124,   126,   130,
     133,   136,   138,   139,   147,   148,   149,   150,   154,   156,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   174,   175,   176,   177,   178,   191,   192,   195,   196,
     197,   204,   205,   208,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   235,
     238,   239,   240,   242,   243,     6,    80,    82,    84,    85,
      86,    89,    99,   100,   101,   102,   103,   104,   105,   106,
     114,   170,   173,   193,   214,   215,   216,   217,     8,    90,
     170,    10,   133,    36,    37,    38,    39,   135,   183,   184,
     185,   186,     5,   149,     5,     5,     5,   170,   186,     3,
     170,   149,    79,     3,   125,   186,   125,   125,    79,   107,
     140,   141,   198,   199,   200,   202,   203,   204,   183,   134,
     186,   125,   186,   171,   149,    79,   234,   233,    63,    65,
     170,   241,   140,   142,   141,   147,   147,   170,     0,   124,
     149,   186,     5,     3,    58,     3,     4,    55,    89,   114,
       7,   174,    94,    95,   142,   194,   232,   186,    88,    92,
     110,    98,   108,   109,   107,    99,   104,   213,   214,   215,
      82,   216,    84,   217,    91,    87,   233,   147,     7,    43,
      56,   111,   172,   174,   176,   238,    62,     6,     6,   170,
       8,    90,    10,     5,   179,   184,    40,    41,   187,   170,
     162,   171,   169,    79,     9,    79,   155,     3,    31,   151,
     153,    79,    40,   187,   188,    79,    79,   172,   198,     9,
      79,    43,    88,    89,   201,     7,   177,   202,     5,   180,
     142,    79,    79,   147,   234,   241,    64,    97,   140,   170,
       3,   171,   178,   178,   178,     8,   170,    55,   193,   238,
     147,   142,   140,   170,   218,   219,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   142,    79,   142,
     236,     5,   237,   241,     8,     7,   174,     8,   170,   140,
     143,   144,     6,    51,   181,   142,   142,     6,   170,     6,
     169,     4,    90,    22,   158,   159,     9,   152,   151,   111,
     182,   182,   182,   129,   197,   172,   200,   140,   145,   146,
     181,    79,   182,   182,   241,    79,     6,   179,     5,     5,
       5,    79,   209,   210,    90,     4,     8,     6,   170,     8,
       8,    79,   211,     4,     6,    90,   189,    79,    79,   149,
       3,   149,     6,   170,    79,   171,   170,    10,   158,    79,
     132,   155,   132,    42,   127,    90,   128,   128,    10,   197,
     211,   212,     4,     3,   182,   128,     9,   182,   149,     6,
     143,   143,   143,   177,     4,   219,   236,     6,   174,   175,
      90,   143,    79,     3,   147,   190,   182,   182,    14,   149,
       6,    90,     6,    23,   157,    24,   160,     4,    10,   149,
       8,   141,   128,   132,     9,     9,   145,     9,    79,   142,
     206,   207,    23,   137,     4,     6,     6,   209,   171,   180,
     149,   149,   171,   149,   170,    90,   149,    79,     9,   123,
     131,   131,   131,     3,    79,   207,    10,   171,     3,   143,
     181,     6,   133,   131,    10,    10,    10,     3,     6,     3,
     149,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   131,   131,   132,   132,
     133,   133,   134,   135,   136,   137,   137,   138,   138,   139,
     140,   140,   141,   142,   143,   143,   144,   144,   145,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   152,   151,   153,   153,
     154,   155,   155,   156,   157,   157,   158,   159,   159,   160,
     160,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   164,   165,   166,   166,   167,   167,   168,   168,   168,
     168,   169,   169,   170,   170,   171,   171,   171,   171,   172,
     172,   173,   173,   173,   173,   174,   174,   174,   175,   175,
     175,   176,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   183,   184,   184,   185,
     185,   186,   186,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   191,   192,   193,   193,   193,   193,   193,
     194,   194,   194,   194,   195,   195,   196,   197,   197,   197,
     198,   198,   199,   199,   200,   200,   201,   201,   201,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   209,   209,   210,   210,   211,   211,   211,   212,   212,
     213,   213,   214,   214,   214,   214,   215,   215,   216,   216,
     217,   217,   217,   218,   218,   219,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   233,
     233,   233,   233,   233,   233,   233,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   240,   240,   240,
     240,   240,   240,   240,   241,   241,   241,   242,   242,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     9,     8,     8,     8,     2,
       0,     0,     2,     1,     2,     5,     1,     0,     1,     3,
       1,     2,     4,     5,     5,     0,     2,     1,     1,     7,
       2,     1,     1,     1,     4,     2,     1,     3,     2,     1,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     4,     1,     2,
       3,     1,     0,     6,     2,     0,     5,     1,     2,     2,
       0,     6,     1,     1,     5,     5,     6,     7,     7,     9,
       5,     3,     2,     5,     7,     1,     1,     3,     2,     3,
       2,     2,     1,     1,     3,     1,     3,     3,     3,     3,
       0,     1,     1,     1,     1,     3,     4,     5,     2,     3,
       2,     5,     4,     4,     1,     1,     1,     4,     2,     1,
       2,     1,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     1,     1,     0,
       2,     1,     1,     6,     9,     1,     1,     1,     1,     1,
       7,     5,     5,     4,     1,     2,     3,     1,     1,     1,
       1,     2,     2,     3,     1,     3,     1,     1,     0,     2,
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
       3,     2,     2
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
  YYUSE (yykind);
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
#line 164 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2327 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 165 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2333 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 168 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2339 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 169 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2345 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 173 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2351 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 174 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2357 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 175 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2363 "src/parser.c"
    break;

  case 9: /* section: extend_def  */
#line 176 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2369 "src/parser.c"
    break;

  case 10: /* section: enum_def  */
#line 177 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2375 "src/parser.c"
    break;

  case 11: /* section: union_def  */
#line 178 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2381 "src/parser.c"
    break;

  case 12: /* section: fptr_def  */
#line 179 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2387 "src/parser.c"
    break;

  case 13: /* section: type_def  */
#line 180 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2393 "src/parser.c"
    break;

  case 14: /* class_flag: flag modifier  */
#line 183 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2399 "src/parser.c"
    break;

  case 15: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 186 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2410 "src/parser.c"
    break;

  case 16: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 193 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2421 "src/parser.c"
    break;

  case 17: /* class_def: "union" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 200 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2433 "src/parser.c"
    break;

  case 18: /* class_def: "trait" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 208 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_trait;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.class_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-6])); }
        UNSET_FLAG((yyval.class_def), abstract);
      }
    }
#line 2449 "src/parser.c"
    break;

  case 19: /* class_ext: "extends" type_decl_exp  */
#line 220 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2455 "src/parser.c"
    break;

  case 20: /* class_ext: %empty  */
#line 220 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2461 "src/parser.c"
    break;

  case 21: /* traits: %empty  */
#line 221 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2467 "src/parser.c"
    break;

  case 22: /* traits: ":" id_list  */
#line 221 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2473 "src/parser.c"
    break;

  case 23: /* extend_body: func_def  */
#line 223 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2482 "src/parser.c"
    break;

  case 24: /* extend_body: extend_body func_def  */
#line 227 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL))
  }
#line 2491 "src/parser.c"
    break;

  case 25: /* extend_def: "extends" type_decl_exp "{" extend_body "}"  */
#line 233 "src/gwion.y"
                                                        {
//  if($3 && $3->next)
//    { parser_error(&@$, arg, "extensions must define at most trait", 0211); YYERROR;}
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].ast));
//  $$->traits = $3;
}
#line 2502 "src/parser.c"
    break;

  case 27: /* class_body: %empty  */
#line 241 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2508 "src/parser.c"
    break;

  case 28: /* id_list: "<identifier>"  */
#line 243 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2514 "src/parser.c"
    break;

  case 29: /* id_list: id_list "," "<identifier>"  */
#line 244 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2520 "src/parser.c"
    break;

  case 30: /* stmt_list: stmt  */
#line 246 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2526 "src/parser.c"
    break;

  case 31: /* stmt_list: stmt_list stmt  */
#line 247 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2532 "src/parser.c"
    break;

  case 32: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 249 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2539 "src/parser.c"
    break;

  case 33: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 252 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2546 "src/parser.c"
    break;

  case 34: /* fptr_def: "funptr" fptr_base fptr_args arg_type ";"  */
#line 255 "src/gwion.y"
                                                    {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2556 "src/parser.c"
    break;

  case 35: /* typedef_when: %empty  */
#line 261 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2562 "src/parser.c"
    break;

  case 36: /* typedef_when: "when" binary_exp  */
#line 261 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2568 "src/parser.c"
    break;

  case 37: /* type_def_type: "typedef"  */
#line 262 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2574 "src/parser.c"
    break;

  case 38: /* type_def_type: "distinct"  */
#line 262 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2580 "src/parser.c"
    break;

  case 39: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 263 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].id_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2593 "src/parser.c"
    break;

  case 40: /* type_decl_array: type_decl array  */
#line 272 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2599 "src/parser.c"
    break;

  case 42: /* type_decl_exp: type_decl_array  */
#line 274 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2607 "src/parser.c"
    break;

  case 43: /* type_decl_empty: type_decl_array  */
#line 278 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2615 "src/parser.c"
    break;

  case 44: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 283 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2621 "src/parser.c"
    break;

  case 45: /* arg: type_decl_array arg_decl  */
#line 284 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2627 "src/parser.c"
    break;

  case 46: /* arg_list: arg  */
#line 286 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2633 "src/parser.c"
    break;

  case 47: /* arg_list: arg_list "," arg  */
#line 287 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2643 "src/parser.c"
    break;

  case 48: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 293 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2649 "src/parser.c"
    break;

  case 49: /* fptr_list: fptr_arg  */
#line 294 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2655 "src/parser.c"
    break;

  case 50: /* fptr_list: fptr_list "," fptr_arg  */
#line 294 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2661 "src/parser.c"
    break;

  case 51: /* code_stmt: "{" "}"  */
#line 297 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2667 "src/parser.c"
    break;

  case 52: /* code_stmt: "{" stmt_list "}"  */
#line 298 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2673 "src/parser.c"
    break;

  case 53: /* stmt_pp: "<comment>"  */
#line 302 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2679 "src/parser.c"
    break;

  case 54: /* stmt_pp: "#include"  */
#line 303 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2685 "src/parser.c"
    break;

  case 55: /* stmt_pp: "#define"  */
#line 304 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2691 "src/parser.c"
    break;

  case 56: /* stmt_pp: "#pragma"  */
#line 305 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2697 "src/parser.c"
    break;

  case 57: /* stmt_pp: "#undef"  */
#line 306 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2703 "src/parser.c"
    break;

  case 58: /* stmt_pp: "#ifdef"  */
#line 307 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2709 "src/parser.c"
    break;

  case 59: /* stmt_pp: "#ifndef"  */
#line 308 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2715 "src/parser.c"
    break;

  case 60: /* stmt_pp: "#else"  */
#line 309 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2721 "src/parser.c"
    break;

  case 61: /* stmt_pp: "#if"  */
#line 310 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2727 "src/parser.c"
    break;

  case 62: /* stmt_pp: "\n"  */
#line 311 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2733 "src/parser.c"
    break;

  case 63: /* stmt_pp: "require"  */
#line 312 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2739 "src/parser.c"
    break;

  case 75: /* retry_stmt: "retry" ";"  */
#line 329 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2749 "src/parser.c"
    break;

  case 76: /* $@1: %empty  */
#line 334 "src/gwion.y"
                  { arg->handling = true; }
#line 2755 "src/parser.c"
    break;

  case 77: /* handler: "handle" $@1 opt_id stmt  */
#line 334 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2761 "src/parser.c"
    break;

  case 79: /* handler_list: handler_list handler  */
#line 336 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list)->xid)
        { parser_error(&(yylsp[-1]), arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        (yyval.handler_list) = (yyvsp[-1].handler_list);
        (yyvsp[-1].handler_list)->next = (yyvsp[0].handler_list);
  }
#line 2772 "src/parser.c"
    break;

  case 80: /* try_stmt: "try" stmt handler_list  */
#line 342 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2778 "src/parser.c"
    break;

  case 82: /* opt_id: %empty  */
#line 344 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2784 "src/parser.c"
    break;

  case 83: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 347 "src/gwion.y"
                                       {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2794 "src/parser.c"
    break;

  case 84: /* when_exp: "when" exp  */
#line 353 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2800 "src/parser.c"
    break;

  case 85: /* when_exp: %empty  */
#line 353 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 2806 "src/parser.c"
    break;

  case 86: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 356 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2819 "src/parser.c"
    break;

  case 87: /* match_list: match_case_stmt  */
#line 366 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2825 "src/parser.c"
    break;

  case 88: /* match_list: match_list match_case_stmt  */
#line 367 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2831 "src/parser.c"
    break;

  case 89: /* where_stmt: "where" stmt  */
#line 369 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2837 "src/parser.c"
    break;

  case 90: /* where_stmt: %empty  */
#line 369 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 2843 "src/parser.c"
    break;

  case 91: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 371 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2856 "src/parser.c"
    break;

  case 92: /* flow: "while"  */
#line 381 "src/gwion.y"
            { (yyval.ival) = ae_stmt_while; }
#line 2862 "src/parser.c"
    break;

  case 93: /* flow: "until"  */
#line 382 "src/gwion.y"
            { (yyval.ival) = ae_stmt_until; }
#line 2868 "src/parser.c"
    break;

  case 94: /* loop_stmt: flow "(" exp ")" stmt  */
#line 387 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2874 "src/parser.c"
    break;

  case 95: /* loop_stmt: "do" stmt flow exp ";"  */
#line 389 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2880 "src/parser.c"
    break;

  case 96: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 391 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2886 "src/parser.c"
    break;

  case 97: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 393 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2892 "src/parser.c"
    break;

  case 98: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 395 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2898 "src/parser.c"
    break;

  case 99: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 397 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
    }
#line 2908 "src/parser.c"
    break;

  case 100: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 403 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2914 "src/parser.c"
    break;

  case 101: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 406 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2920 "src/parser.c"
    break;

  case 102: /* defer_stmt: "defer" stmt  */
#line 408 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2926 "src/parser.c"
    break;

  case 103: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 412 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2932 "src/parser.c"
    break;

  case 104: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 414 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2938 "src/parser.c"
    break;

  case 105: /* breaks: "break"  */
#line 417 "src/gwion.y"
                    { (yyval.ival) = ae_stmt_break; }
#line 2944 "src/parser.c"
    break;

  case 106: /* breaks: "continue"  */
#line 417 "src/gwion.y"
                                                        { (yyval.ival) = ae_stmt_continue; }
#line 2950 "src/parser.c"
    break;

  case 107: /* jump_stmt: "return" exp ";"  */
#line 419 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2956 "src/parser.c"
    break;

  case 108: /* jump_stmt: "return" ";"  */
#line 420 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2962 "src/parser.c"
    break;

  case 109: /* jump_stmt: breaks "<integer>" ";"  */
#line 421 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2968 "src/parser.c"
    break;

  case 110: /* jump_stmt: breaks ";"  */
#line 422 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2974 "src/parser.c"
    break;

  case 111: /* exp_stmt: exp ";"  */
#line 426 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2980 "src/parser.c"
    break;

  case 112: /* exp_stmt: ";"  */
#line 427 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2986 "src/parser.c"
    break;

  case 113: /* exp: binary_exp  */
#line 431 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2992 "src/parser.c"
    break;

  case 114: /* exp: exp "," binary_exp  */
#line 432 "src/gwion.y"
                       { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2998 "src/parser.c"
    break;

  case 116: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 437 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3004 "src/parser.c"
    break;

  case 117: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 438 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3010 "src/parser.c"
    break;

  case 118: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 439 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3016 "src/parser.c"
    break;

  case 119: /* call_template: ":[" type_list "]"  */
#line 442 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3022 "src/parser.c"
    break;

  case 120: /* call_template: %empty  */
#line 442 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 3028 "src/parser.c"
    break;

  case 125: /* array_exp: "[" exp "]"  */
#line 447 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3034 "src/parser.c"
    break;

  case 126: /* array_exp: "[" exp "]" array_exp  */
#line 448 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3043 "src/parser.c"
    break;

  case 127: /* array_exp: "[" exp "]" "[" "]"  */
#line 452 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 3049 "src/parser.c"
    break;

  case 128: /* array_empty: "[" "]"  */
#line 456 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3055 "src/parser.c"
    break;

  case 129: /* array_empty: array_empty "[" "]"  */
#line 457 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3061 "src/parser.c"
    break;

  case 130: /* array_empty: array_empty array_exp  */
#line 458 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 3067 "src/parser.c"
    break;

  case 131: /* range: "[" exp ":" exp "]"  */
#line 462 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 3073 "src/parser.c"
    break;

  case 132: /* range: "[" exp ":" "]"  */
#line 463 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3079 "src/parser.c"
    break;

  case 133: /* range: "[" ":" exp "]"  */
#line 464 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3085 "src/parser.c"
    break;

  case 137: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 469 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3091 "src/parser.c"
    break;

  case 138: /* func_args: "(" arg_list  */
#line 471 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3097 "src/parser.c"
    break;

  case 139: /* func_args: "("  */
#line 471 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 3103 "src/parser.c"
    break;

  case 140: /* fptr_args: "(" fptr_list  */
#line 472 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3109 "src/parser.c"
    break;

  case 141: /* fptr_args: "("  */
#line 472 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 3115 "src/parser.c"
    break;

  case 142: /* arg_type: "..." ")"  */
#line 473 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 3121 "src/parser.c"
    break;

  case 143: /* arg_type: ")"  */
#line 473 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 3127 "src/parser.c"
    break;

  case 144: /* decl_template: ":[" id_list "]"  */
#line 475 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 3133 "src/parser.c"
    break;

  case 145: /* decl_template: %empty  */
#line 475 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 3139 "src/parser.c"
    break;

  case 146: /* global: "global"  */
#line 477 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3145 "src/parser.c"
    break;

  case 147: /* storage_flag: "static"  */
#line 479 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3151 "src/parser.c"
    break;

  case 149: /* access_flag: "private"  */
#line 481 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3157 "src/parser.c"
    break;

  case 150: /* access_flag: "protect"  */
#line 482 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3163 "src/parser.c"
    break;

  case 151: /* flag: access_flag  */
#line 485 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3169 "src/parser.c"
    break;

  case 152: /* flag: storage_flag  */
#line 486 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3175 "src/parser.c"
    break;

  case 153: /* flag: access_flag storage_flag  */
#line 487 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3181 "src/parser.c"
    break;

  case 154: /* flag: %empty  */
#line 488 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3187 "src/parser.c"
    break;

  case 155: /* final: "final"  */
#line 491 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3193 "src/parser.c"
    break;

  case 156: /* final: %empty  */
#line 491 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3199 "src/parser.c"
    break;

  case 157: /* modifier: "abstract"  */
#line 493 "src/gwion.y"
                     { (yyval.flag) = ae_flag_abstract; }
#line 3205 "src/parser.c"
    break;

  case 159: /* func_trait: %empty  */
#line 495 "src/gwion.y"
            { (yyval.sym) = 0; }
#line 3211 "src/parser.c"
    break;

  case 160: /* func_trait: ":" "<identifier>"  */
#line 495 "src/gwion.y"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 3217 "src/parser.c"
    break;

  case 162: /* func_code: ";"  */
#line 496 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3223 "src/parser.c"
    break;

  case 163: /* func_def_base: "fun" func_base func_args arg_type func_trait func_code  */
#line 498 "src/gwion.y"
                                                            {
    (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
    (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-4].func_base), (yyvsp[0].stmt));
    (yyval.func_def)->trait = (yyvsp[-1].sym);
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-4].func_base), abstract);
    }
  }
#line 3237 "src/parser.c"
    break;

  case 164: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 510 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3249 "src/parser.c"
    break;

  case 170: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 521 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3255 "src/parser.c"
    break;

  case 171: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 523 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3261 "src/parser.c"
    break;

  case 172: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 525 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3270 "src/parser.c"
    break;

  case 173: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 530 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3279 "src/parser.c"
    break;

  case 174: /* operator: "operator"  */
#line 535 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3285 "src/parser.c"
    break;

  case 175: /* operator: "operator" global  */
#line 535 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3291 "src/parser.c"
    break;

  case 176: /* op_def: operator op_base code_stmt  */
#line 537 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3297 "src/parser.c"
    break;

  case 179: /* func_def: op_def  */
#line 539 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3303 "src/parser.c"
    break;

  case 180: /* ref: "&"  */
#line 541 "src/gwion.y"
         { (yyval.uval) = 1; }
#line 3309 "src/parser.c"
    break;

  case 181: /* ref: "&" ref  */
#line 541 "src/gwion.y"
                               { (yyval.uval) = 1 + (yyvsp[0].uval); }
#line 3315 "src/parser.c"
    break;

  case 182: /* type_decl_tmpl: "<identifier>" call_template  */
#line 543 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3321 "src/parser.c"
    break;

  case 183: /* type_decl_tmpl: ref "<identifier>" call_template  */
#line 544 "src/gwion.y"
                         { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->ref = 1; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3327 "src/parser.c"
    break;

  case 185: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 549 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3333 "src/parser.c"
    break;

  case 186: /* option: "?"  */
#line 552 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3339 "src/parser.c"
    break;

  case 187: /* option: OPTIONS  */
#line 552 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3345 "src/parser.c"
    break;

  case 188: /* option: %empty  */
#line 552 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3351 "src/parser.c"
    break;

  case 189: /* type_decl_opt: type_decl_noflag option  */
#line 553 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 3357 "src/parser.c"
    break;

  case 191: /* type_decl: type_decl_flag type_decl_opt  */
#line 554 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3363 "src/parser.c"
    break;

  case 192: /* type_decl_flag: "late"  */
#line 557 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3369 "src/parser.c"
    break;

  case 193: /* type_decl_flag: "const"  */
#line 558 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3375 "src/parser.c"
    break;

  case 194: /* type_decl_flag2: "var"  */
#line 560 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3381 "src/parser.c"
    break;

  case 196: /* union_decl: "<identifier>" ";"  */
#line 563 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3390 "src/parser.c"
    break;

  case 197: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 567 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3396 "src/parser.c"
    break;

  case 199: /* union_list: union_decl union_list  */
#line 570 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3402 "src/parser.c"
    break;

  case 200: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 573 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3414 "src/parser.c"
    break;

  case 201: /* var_decl_list: var_decl "," var_decl_list  */
#line 583 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3420 "src/parser.c"
    break;

  case 202: /* var_decl_list: var_decl  */
#line 584 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3426 "src/parser.c"
    break;

  case 203: /* var_decl: "<identifier>"  */
#line 587 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3432 "src/parser.c"
    break;

  case 204: /* var_decl: "<identifier>" array  */
#line 588 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3438 "src/parser.c"
    break;

  case 205: /* arg_decl: "<identifier>"  */
#line 590 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3444 "src/parser.c"
    break;

  case 206: /* arg_decl: "<identifier>" array_empty  */
#line 591 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3450 "src/parser.c"
    break;

  case 207: /* arg_decl: "<identifier>" array_exp  */
#line 592 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3456 "src/parser.c"
    break;

  case 209: /* fptr_arg_decl: %empty  */
#line 593 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3462 "src/parser.c"
    break;

  case 223: /* opt_exp: exp  */
#line 601 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3468 "src/parser.c"
    break;

  case 224: /* opt_exp: %empty  */
#line 601 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3474 "src/parser.c"
    break;

  case 226: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 604 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3480 "src/parser.c"
    break;

  case 227: /* con_exp: log_or_exp "?:" con_exp  */
#line 606 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3486 "src/parser.c"
    break;

  case 229: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 608 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3492 "src/parser.c"
    break;

  case 231: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 609 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3498 "src/parser.c"
    break;

  case 233: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 610 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3504 "src/parser.c"
    break;

  case 235: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 611 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3510 "src/parser.c"
    break;

  case 237: /* and_exp: and_exp "&" eq_exp  */
#line 612 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3516 "src/parser.c"
    break;

  case 239: /* eq_exp: eq_exp eq_op rel_exp  */
#line 613 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3522 "src/parser.c"
    break;

  case 241: /* rel_exp: rel_exp rel_op shift_exp  */
#line 614 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3528 "src/parser.c"
    break;

  case 243: /* shift_exp: shift_exp shift_op add_exp  */
#line 615 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3534 "src/parser.c"
    break;

  case 245: /* add_exp: add_exp add_op mul_exp  */
#line 616 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3540 "src/parser.c"
    break;

  case 247: /* mul_exp: mul_exp mul_op dur_exp  */
#line 617 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3546 "src/parser.c"
    break;

  case 249: /* dur_exp: dur_exp "::" cast_exp  */
#line 618 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3552 "src/parser.c"
    break;

  case 251: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 621 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3558 "src/parser.c"
    break;

  case 260: /* unary_exp: unary_op unary_exp  */
#line 628 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3564 "src/parser.c"
    break;

  case 261: /* unary_exp: OPID_E unary_exp  */
#line 629 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3570 "src/parser.c"
    break;

  case 262: /* unary_exp: "new" type_decl_exp  */
#line 630 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3576 "src/parser.c"
    break;

  case 263: /* unary_exp: "spork" code_stmt  */
#line 631 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3582 "src/parser.c"
    break;

  case 264: /* unary_exp: "fork" code_stmt  */
#line 632 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3588 "src/parser.c"
    break;

  case 265: /* unary_exp: "$" type_decl_empty  */
#line 633 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3594 "src/parser.c"
    break;

  case 266: /* lambda_list: "<identifier>"  */
#line 636 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3600 "src/parser.c"
    break;

  case 267: /* lambda_list: "<identifier>" lambda_list  */
#line 637 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3606 "src/parser.c"
    break;

  case 268: /* lambda_arg: "\\" lambda_list  */
#line 638 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3612 "src/parser.c"
    break;

  case 269: /* lambda_arg: "\\"  */
#line 638 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3618 "src/parser.c"
    break;

  case 270: /* type_list: type_decl_empty  */
#line 641 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3624 "src/parser.c"
    break;

  case 271: /* type_list: type_decl_empty "," type_list  */
#line 642 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3630 "src/parser.c"
    break;

  case 272: /* call_paren: "(" exp ")"  */
#line 646 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3636 "src/parser.c"
    break;

  case 273: /* call_paren: "(" ")"  */
#line 646 "src/gwion.y"
                                                                   { (yyval.exp) = NULL; }
#line 3642 "src/parser.c"
    break;

  case 276: /* dot_exp: post_exp "." "<identifier>"  */
#line 650 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3655 "src/parser.c"
    break;

  case 278: /* post_exp: post_exp array_exp  */
#line 661 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3661 "src/parser.c"
    break;

  case 279: /* post_exp: post_exp range  */
#line 663 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3667 "src/parser.c"
    break;

  case 280: /* post_exp: post_exp call_template call_paren  */
#line 665 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3674 "src/parser.c"
    break;

  case 281: /* post_exp: post_exp post_op  */
#line 668 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3680 "src/parser.c"
    break;

  case 282: /* post_exp: post_exp OPID_E  */
#line 670 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3686 "src/parser.c"
    break;

  case 283: /* post_exp: dot_exp  */
#line 671 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3692 "src/parser.c"
    break;

  case 284: /* interp_exp: "<interp string>`"  */
#line 675 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3698 "src/parser.c"
    break;

  case 285: /* interp_exp: "<interp string>" interp_exp  */
#line 676 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3704 "src/parser.c"
    break;

  case 286: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 677 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3710 "src/parser.c"
    break;

  case 287: /* interp: "`" interp_exp  */
#line 679 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3716 "src/parser.c"
    break;

  case 288: /* interp: interp "`" interp_exp  */
#line 680 "src/gwion.y"
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
#line 3731 "src/parser.c"
    break;

  case 289: /* prim_exp: "<identifier>"  */
#line 692 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3737 "src/parser.c"
    break;

  case 290: /* prim_exp: "<integer>"  */
#line 693 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3743 "src/parser.c"
    break;

  case 291: /* prim_exp: FLOATT  */
#line 694 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3749 "src/parser.c"
    break;

  case 292: /* prim_exp: interp  */
#line 695 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3755 "src/parser.c"
    break;

  case 293: /* prim_exp: "<litteral string>"  */
#line 696 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3761 "src/parser.c"
    break;

  case 294: /* prim_exp: "<litteral char>"  */
#line 697 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3767 "src/parser.c"
    break;

  case 295: /* prim_exp: array  */
#line 698 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3773 "src/parser.c"
    break;

  case 296: /* prim_exp: range  */
#line 699 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3779 "src/parser.c"
    break;

  case 297: /* prim_exp: "<<<" exp ">>>"  */
#line 700 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3785 "src/parser.c"
    break;

  case 298: /* prim_exp: "(" exp ")"  */
#line 701 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3791 "src/parser.c"
    break;

  case 299: /* prim_exp: lambda_arg code_stmt  */
#line 702 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3797 "src/parser.c"
    break;

  case 300: /* prim_exp: "(" op_op ")"  */
#line 703 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 3803 "src/parser.c"
    break;

  case 301: /* prim_exp: "perform" "<identifier>"  */
#line 704 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 3809 "src/parser.c"
    break;

  case 302: /* prim_exp: "(" ")"  */
#line 705 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3815 "src/parser.c"
    break;


#line 3819 "src/parser.c"

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

#line 707 "src/gwion.y"

#undef scan
ANN static int parser_error(loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
  char _main[strlen(diagnostic) + 1];
  strcpy(_main, diagnostic);
  char *_explain = strchr(_main, ','),
       *_fix = NULL;
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
    _fix = strchr(_explain, ',');
    if(_fix) {
      _explain[_fix - _explain] = '\0';
      _fix += 2;
    }
  }
  scanner_error(scan, _main, _explain, _fix, *loc, error_code);
  return 0;
}
