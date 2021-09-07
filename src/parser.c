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
ANN Symbol sig_name(const Scanner*, const pos_t);

#line 107 "src/parser.c"

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
  YYSYMBOL_FLOATT = 59,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 60,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 61,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 62,              /* "`"  */
  YYSYMBOL_INTERP_EXP = 63,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 64,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 65,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 66,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 67,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 68,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 69,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 70,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 71,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 72,                  /* "#if"  */
  YYSYMBOL_PP_NL = 73,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 74,                 /* "import"  */
  YYSYMBOL_INTERP_LIT = 75,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 76,                /* "<interp string end>"  */
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
  YYSYMBOL_AROBASE = 114,                  /* "@"  */
  YYSYMBOL_DYNOP = 115,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 116,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 117,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 118,                   /* UTIMES  */
  YYSYMBOL_119_ = 119,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 120,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 121,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 122,                 /* $accept  */
  YYSYMBOL_prg = 123,                      /* prg  */
  YYSYMBOL_ast = 124,                      /* ast  */
  YYSYMBOL_section = 125,                  /* section  */
  YYSYMBOL_class_flag = 126,               /* class_flag  */
  YYSYMBOL_class_def = 127,                /* class_def  */
  YYSYMBOL_trait_stmt = 128,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 129,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 130,            /* trait_section  */
  YYSYMBOL_trait_ast = 131,                /* trait_ast  */
  YYSYMBOL_trait_body = 132,               /* trait_body  */
  YYSYMBOL_trait_def = 133,                /* trait_def  */
  YYSYMBOL_class_ext = 134,                /* class_ext  */
  YYSYMBOL_traits = 135,                   /* traits  */
  YYSYMBOL_extend_body = 136,              /* extend_body  */
  YYSYMBOL_extend_def = 137,               /* extend_def  */
  YYSYMBOL_class_body = 138,               /* class_body  */
  YYSYMBOL_id_list = 139,                  /* id_list  */
  YYSYMBOL_specialized_list = 140,         /* specialized_list  */
  YYSYMBOL_stmt_list = 141,                /* stmt_list  */
  YYSYMBOL_fptr_base = 142,                /* fptr_base  */
  YYSYMBOL__func_effects = 143,            /* _func_effects  */
  YYSYMBOL_func_effects = 144,             /* func_effects  */
  YYSYMBOL_func_base = 145,                /* func_base  */
  YYSYMBOL_fptr_def = 146,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 147,             /* typedef_when  */
  YYSYMBOL_type_def_type = 148,            /* type_def_type  */
  YYSYMBOL_type_def = 149,                 /* type_def  */
  YYSYMBOL_type_decl_array = 150,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 151,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 152,          /* type_decl_empty  */
  YYSYMBOL_arg = 153,                      /* arg  */
  YYSYMBOL_arg_list = 154,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 155,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 156,                /* fptr_list  */
  YYSYMBOL_code_stmt = 157,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 158,                  /* stmt_pp  */
  YYSYMBOL_stmt = 159,                     /* stmt  */
  YYSYMBOL_retry_stmt = 160,               /* retry_stmt  */
  YYSYMBOL_handler = 161,                  /* handler  */
  YYSYMBOL_162_1 = 162,                    /* $@1  */
  YYSYMBOL_handler_list = 163,             /* handler_list  */
  YYSYMBOL_try_stmt = 164,                 /* try_stmt  */
  YYSYMBOL_opt_id = 165,                   /* opt_id  */
  YYSYMBOL_enum_def = 166,                 /* enum_def  */
  YYSYMBOL_when_exp = 167,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 168,          /* match_case_stmt  */
  YYSYMBOL_match_list = 169,               /* match_list  */
  YYSYMBOL_where_stmt = 170,               /* where_stmt  */
  YYSYMBOL_match_stmt = 171,               /* match_stmt  */
  YYSYMBOL_flow = 172,                     /* flow  */
  YYSYMBOL_loop_stmt = 173,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 174,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 175,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 176,           /* selection_stmt  */
  YYSYMBOL_breaks = 177,                   /* breaks  */
  YYSYMBOL_jump_stmt = 178,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 179,                 /* exp_stmt  */
  YYSYMBOL_exp = 180,                      /* exp  */
  YYSYMBOL_binary_exp = 181,               /* binary_exp  */
  YYSYMBOL_call_template = 182,            /* call_template  */
  YYSYMBOL_op = 183,                       /* op  */
  YYSYMBOL_array_exp = 184,                /* array_exp  */
  YYSYMBOL_array_empty = 185,              /* array_empty  */
  YYSYMBOL_range = 186,                    /* range  */
  YYSYMBOL_array = 187,                    /* array  */
  YYSYMBOL_decl_exp = 188,                 /* decl_exp  */
  YYSYMBOL_func_args = 189,                /* func_args  */
  YYSYMBOL_fptr_args = 190,                /* fptr_args  */
  YYSYMBOL_arg_type = 191,                 /* arg_type  */
  YYSYMBOL_decl_template = 192,            /* decl_template  */
  YYSYMBOL_global = 193,                   /* global  */
  YYSYMBOL_storage_flag = 194,             /* storage_flag  */
  YYSYMBOL_access_flag = 195,              /* access_flag  */
  YYSYMBOL_flag = 196,                     /* flag  */
  YYSYMBOL_final = 197,                    /* final  */
  YYSYMBOL_modifier = 198,                 /* modifier  */
  YYSYMBOL_func_code = 199,                /* func_code  */
  YYSYMBOL_func_def_base = 200,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 201,            /* abstract_fdef  */
  YYSYMBOL_op_op = 202,                    /* op_op  */
  YYSYMBOL_op_base = 203,                  /* op_base  */
  YYSYMBOL_operator = 204,                 /* operator  */
  YYSYMBOL_op_def = 205,                   /* op_def  */
  YYSYMBOL_func_def = 206,                 /* func_def  */
  YYSYMBOL_type_decl_base = 207,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 208,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 209,         /* type_decl_noflag  */
  YYSYMBOL_option = 210,                   /* option  */
  YYSYMBOL_type_decl_opt = 211,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 212,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 213,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 214,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 215,               /* union_decl  */
  YYSYMBOL_union_list = 216,               /* union_list  */
  YYSYMBOL_union_def = 217,                /* union_def  */
  YYSYMBOL_var_decl_list = 218,            /* var_decl_list  */
  YYSYMBOL_var_decl = 219,                 /* var_decl  */
  YYSYMBOL_arg_decl = 220,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 221,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 222,                    /* eq_op  */
  YYSYMBOL_rel_op = 223,                   /* rel_op  */
  YYSYMBOL_shift_op = 224,                 /* shift_op  */
  YYSYMBOL_add_op = 225,                   /* add_op  */
  YYSYMBOL_mul_op = 226,                   /* mul_op  */
  YYSYMBOL_opt_exp = 227,                  /* opt_exp  */
  YYSYMBOL_con_exp = 228,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 229,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 230,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 231,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 232,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 233,                  /* and_exp  */
  YYSYMBOL_eq_exp = 234,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 235,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 236,                /* shift_exp  */
  YYSYMBOL_add_exp = 237,                  /* add_exp  */
  YYSYMBOL_mul_exp = 238,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 239,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 240,                 /* cast_exp  */
  YYSYMBOL_unary_op = 241,                 /* unary_op  */
  YYSYMBOL_unary_exp = 242,                /* unary_exp  */
  YYSYMBOL_lambda_list = 243,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 244,               /* lambda_arg  */
  YYSYMBOL_type_list = 245,                /* type_list  */
  YYSYMBOL_call_paren = 246,               /* call_paren  */
  YYSYMBOL_post_op = 247,                  /* post_op  */
  YYSYMBOL_dot_exp = 248,                  /* dot_exp  */
  YYSYMBOL_post_exp = 249,                 /* post_exp  */
  YYSYMBOL_interp_exp = 250,               /* interp_exp  */
  YYSYMBOL_interp = 251,                   /* interp  */
  YYSYMBOL_prim_exp = 252                  /* prim_exp  */
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
#define YYFINAL  210
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2047

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  567

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   376


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
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   176,   176,   177,   180,   181,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   196,   198,   205,   214,   218,
     219,   220,   223,   224,   228,   229,   232,   232,   234,   244,
     244,   245,   245,   258,   262,   268,   274,   274,   276,   277,
     279,   280,   282,   283,   285,   288,   288,   289,   289,   291,
     294,   301,   301,   302,   302,   303,   312,   312,   314,   318,
     323,   324,   326,   327,   333,   334,   334,   337,   338,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   369,   374,   374,   375,   376,   388,   390,   390,   393,
     399,   399,   402,   412,   413,   415,   415,   417,   427,   428,
     432,   434,   436,   438,   440,   442,   449,   451,   461,   463,
     466,   468,   472,   472,   474,   475,   476,   477,   481,   482,
     486,   487,   491,   492,   493,   494,   495,   498,   498,   500,
     500,   500,   500,   500,   503,   504,   508,   512,   513,   514,
     518,   519,   520,   523,   523,   524,   525,   527,   527,   528,
     528,   529,   529,   531,   531,   533,   535,   535,   537,   538,
     541,   542,   543,   544,   547,   547,   549,   549,   551,   551,
     553,   564,   573,   573,   573,   573,   573,   575,   579,   583,
     589,   595,   595,   597,   599,   601,   604,   604,   604,   605,
     610,   615,   622,   623,   638,   639,   643,   644,   647,   647,
     647,   648,   649,   649,   652,   653,   655,   655,   658,   662,
     664,   665,   668,   678,   679,   682,   683,   685,   686,   687,
     688,   688,   690,   690,   691,   691,   691,   691,   692,   692,
     693,   693,   694,   694,   694,   696,   696,   697,   698,   700,
     703,   703,   704,   704,   705,   705,   706,   706,   707,   707,
     708,   708,   709,   709,   710,   710,   711,   711,   712,   712,
     713,   713,   715,   715,   718,   718,   718,   719,   719,   719,
     719,   722,   723,   724,   725,   728,   729,   730,   731,   734,
     735,   736,   736,   739,   740,   744,   744,   746,   746,   748,
     757,   758,   760,   762,   765,   767,   769,   773,   774,   775,
     777,   778,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803
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
  "OPID_E", "late", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "`", "INTERP_EXP", "<comment>", "#include", "#define",
  "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "import",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "&<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "RANGE_EMPTY", "UMINUS",
  "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast",
  "section", "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "class_ext",
  "traits", "extend_body", "extend_def", "class_body", "id_list",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt",
  "retry_stmt", "handler", "$@1", "handler_list", "try_stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_code", "func_def_base", "abstract_fdef", "op_op", "op_base",
  "operator", "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
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
     375,   376
};
#endif

#define YYPACT_NINF (-399)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-243)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     523,  -399,   932,  1311,   634,   185,  -399,    63,  -399,   847,
    -399,    89,   150,   201,  1853,   185,  1191,  -399,  -399,   847,
     -19,    72,   185,   185,   185,    40,    41,  -399,  -399,   185,
     185,  -399,  1853,   847,    39,   292,  -399,  -399,  -399,  -399,
    -399,  1372,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,    40,    40,
     206,   206,  1853,  -399,  -399,   218,   523,  -399,  -399,  -399,
    -399,   847,  -399,   185,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,   237,  -399,  -399,  -399,  -399,    52,  -399,  -399,
     161,    -1,  -399,   249,  -399,  -399,  -399,  -399,  -399,   376,
    -399,  -399,  -399,   185,  -399,  -399,    86,   146,   157,   164,
     163,     3,   174,    80,   112,   175,   203,   209,   292,  -399,
     206,  -399,  -399,    42,   233,  -399,  -399,  -399,   294,   295,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,   197,  -399,   296,  -399,  -399,  -399,  -399,
    -399,  1853,    69,  -399,   745,  -399,  -399,  -399,  -399,   293,
    -399,  -399,   227,   238,  1853,   214,  1913,  1251,   224,   134,
     225,  -399,   222,   274,  -399,  -399,   229,   242,   230,   232,
     185,  -399,    38,  -399,   217,   199,   270,   179,  -399,   307,
      24,  -399,   310,    40,   239,   102,  -399,    39,  -399,  -399,
    1372,  -399,    33,  -399,  -399,  -399,   315,  -399,  -399,    29,
    -399,  -399,  -399,    40,  1853,  -399,   318,  -399,  1853,  1853,
    1853,  1853,  1853,  1432,  -399,  1934,   293,  -399,  -399,   869,
     113,    40,    40,  1853,   292,   292,   292,   292,   292,   292,
    -399,  -399,   292,   292,   292,  -399,   292,  -399,   292,   292,
      40,  -399,  -399,  1492,   244,  -399,    40,   319,  -399,  -399,
    -399,  1372,  -399,  -399,   171,   320,  1553,  -399,    40,    58,
    -399,    40,  -399,    40,   208,  1853,   321,    46,  1251,    54,
     304,   322,  -399,  -399,  -399,   274,   219,   288,  -399,  -399,
     219,   217,    40,   199,   253,   324,  -399,    24,  -399,  -399,
    -399,  1613,  -399,  -399,    40,    58,   255,   219,  -399,  -399,
    -399,  1372,  1853,  -399,   256,   228,  -399,    -1,  -399,  -399,
    -399,  -399,  -399,   189,   293,   325,    58,   293,   219,   219,
    -399,  -399,   219,   257,   334,   250,  -399,   146,   157,   164,
     163,     3,   174,    80,   112,   175,   203,   209,  -399,  -399,
     335,   339,  1673,  -399,  -399,  -399,  1733,  -399,  -399,   191,
     264,  -399,   345,  -399,   349,   118,   277,   281,   847,   287,
    1853,   847,  1793,   284,  1853,  1853,  -399,    70,   253,   285,
    -399,   286,   326,  -399,   217,   358,   219,  -399,  -399,   365,
      37,  -399,   264,  -399,   366,   342,   219,   369,  -399,   377,
     219,   847,    58,  -399,   173,   378,   386,   390,   391,   307,
    -399,   393,   292,    40,  -399,  -399,   231,  -399,  -399,   307,
     311,    40,  -399,  -399,  -399,  -399,   219,   219,   368,  -399,
      53,  -399,   847,   235,   312,    57,    49,   379,  -399,    85,
    -399,   847,   217,   196,    40,   217,   397,  1045,   310,   328,
      55,  -399,  -399,  -399,    40,   329,   330,   407,  -399,   205,
    -399,   388,  -399,   412,  -399,  -399,  -399,    40,    40,    40,
    -399,   257,  -399,  -399,  -399,  -399,   249,  1853,  -399,   310,
    -399,   847,   847,  -399,   847,  1853,   847,  1853,   327,   847,
    -399,  -399,  -399,  -399,   340,  -399,  -399,   409,   523,  -399,
    1118,  -399,  1045,   410,  -399,  -399,  -399,    58,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,   419,   346,   205,   414,  1853,
     424,  -399,   396,   422,   423,  -399,    -1,    58,  -399,  -399,
    -399,    73,  -399,   334,   847,  -399,   217,   523,   523,   420,
    -399,  -399,  -399,   342,  -399,   431,  -399,  -399,    -1,  -399,
      40,  -399,  -399,   432,   847,   847,  -399,   427,  -399,   434,
    -399,   435,  -399,  -399,  -399,  -399,  -399
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   129,     0,     0,     0,   173,   216,     0,   108,     0,
     109,     0,     0,     0,     0,   173,     0,   122,   123,     0,
       0,     0,   173,   173,   173,     0,   191,    53,    54,   173,
     173,   215,     0,     0,   292,     0,   214,   313,   314,   316,
     317,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   312,   297,   274,   298,   275,     0,     0,
     278,   279,     0,   280,   277,     0,     2,     4,     8,     9,
      10,     6,    13,   173,    14,    83,    86,    42,    90,    89,
      11,    84,     0,    81,    87,    88,    82,     0,    85,    80,
       0,   130,   153,   154,   319,   318,   132,   196,   197,     0,
     198,     7,   217,   173,    12,   155,   247,   250,   252,   254,
     256,   258,   260,   262,   264,   266,   268,   270,     0,   272,
       0,   276,   306,   281,   315,   300,   325,   240,   274,   275,
     243,   244,   143,   139,   237,   235,   236,   234,   140,   238,
     239,   141,   142,     0,   182,     0,   184,   183,   186,   185,
     147,     0,     0,    67,     0,   166,   165,   168,   169,     0,
     167,   171,   170,   175,     0,     0,     0,     0,     0,     0,
       0,   125,     0,     0,   324,    91,     0,   175,     0,     0,
     173,   202,     0,    59,    31,   138,   206,   210,   212,    57,
       0,   192,     0,     0,     0,     0,   119,   289,   291,   283,
       0,   307,     0,   310,   288,    58,   285,   286,   287,     0,
       1,     5,    43,     0,     0,   127,     0,   128,     0,     0,
       0,     0,     0,     0,   149,     0,     0,   278,   279,     0,
       0,     0,     0,   246,     0,     0,     0,     0,     0,     0,
     232,   233,     0,     0,     0,   241,     0,   242,     0,     0,
       0,   282,   322,     0,     0,   305,     0,     0,   301,   302,
     304,     0,   321,   323,     0,   144,     0,    68,   158,     0,
     172,     0,   174,     0,     0,     0,   312,     0,     0,     0,
       0,     0,   124,    92,    94,    96,   164,   175,   177,    15,
     164,    31,     0,   138,     0,     0,   204,     0,   208,   209,
     211,     0,    56,   213,   160,     0,     0,   164,   118,   290,
     308,     0,   246,   320,     0,     0,   126,   131,   133,   136,
     134,   135,   148,     0,     0,     0,     0,     0,   164,   164,
     194,   193,   164,     0,   245,     0,   249,   251,   253,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   273,   299,
     293,     0,     0,   303,   311,   152,     0,   145,   151,     0,
       0,    62,   157,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,    98,
      95,     0,    30,   176,    31,     0,   164,   205,    38,    32,
       0,   207,   231,    65,   159,    47,   164,     0,   309,     0,
     164,     0,     0,   195,     0,     0,     0,     0,     0,   225,
     156,   224,     0,     0,   137,   296,     0,   146,   150,   227,
      61,     0,   161,   179,   178,   180,   164,   164,   120,   111,
       0,   116,     0,     0,     0,     0,   101,   106,   104,     0,
      97,     0,    31,     0,     0,    31,     0,    27,     0,     0,
       0,    33,   230,    64,     0,     0,    48,     0,    44,     0,
     284,    51,   110,     0,   200,   199,   190,     0,     0,     0,
     226,     0,   248,   294,   295,   229,   228,     0,    63,     0,
      49,     0,     0,   112,     0,     0,     0,     0,     0,     0,
     107,    99,    93,    40,     0,   163,    29,     0,    37,    20,
      22,    24,    26,     0,    19,    18,    23,     0,    39,    35,
      34,    66,    45,    46,    50,   202,     0,   220,     0,     0,
       0,   201,     0,     0,     0,   223,    60,     0,   121,   117,
     113,     0,   114,   100,     0,   105,    31,    37,    36,     0,
      21,    25,    28,    47,   218,     0,   221,   222,    52,    55,
       0,   188,   189,     0,     0,   102,    41,     0,    17,     0,
     219,     0,   181,   115,    16,   203,   187
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -399,  -399,   438,   -60,   269,  -399,   -58,  -399,   -59,  -399,
    -399,  -399,  -399,  -279,  -399,  -399,   -90,    71,  -399,    -3,
    -399,  -399,   -93,  -399,  -399,  -399,  -399,  -399,   -55,     7,
     -20,  -398,  -399,    -2,  -399,   -46,  -396,    -9,  -399,   168,
    -399,  -399,  -399,  -399,  -399,  -399,    77,  -399,  -399,  -399,
     297,  -399,  -399,  -399,  -399,  -399,  -399,  -158,     5,   -29,
    -145,  -399,   -82,    44,   338,  -155,    66,  -195,  -355,  -287,
    -246,   439,   302,  -399,    27,  -151,  -399,  -399,  -399,  -399,
     245,   241,  -399,  -399,  -363,   299,  -399,   170,  -399,   278,
    -399,   -23,  -399,  -399,   -41,  -399,     8,  -399,    90,  -399,
    -399,   -99,   -97,   -92,   -98,   172,  -214,  -399,   251,   260,
     248,   261,   252,   258,   259,   243,   247,   262,   254,   -74,
      15,   301,  -399,    88,  -399,   -95,  -399,  -399,  -170,  -399,
    -399
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   538,    67,   176,    68,   499,   500,   501,   502,
     503,    69,   445,   295,   450,    70,   539,   389,   443,    71,
     192,   456,   457,   159,    72,   520,    73,    74,   183,   206,
     229,   361,   362,   393,   394,    75,    76,    77,    78,   284,
     379,   285,    79,   441,    80,   488,   376,   377,   490,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     257,   144,    92,    93,    94,    95,    96,   269,   305,   365,
     382,   160,   161,   162,   177,   273,   289,   425,    97,    98,
     145,   230,    99,   100,   101,   185,   186,   187,   300,   188,
     189,   102,   103,   517,   518,   104,   410,   411,   420,   453,
     242,   146,   147,   148,   149,   335,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   198,   120,   351,   353,   121,   122,   123,   203,   124,
     125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     165,   154,   190,   195,   205,   184,   211,   143,   152,   278,
     173,   224,   385,   243,   207,   208,   244,   248,   395,   169,
     336,   172,   246,   478,   196,   231,   288,   451,   260,   180,
     310,   326,   163,   218,   302,   190,   190,   218,   204,   404,
     296,   258,   170,   180,   384,   180,   202,  -138,     5,   253,
     199,   504,   371,   218,   219,   215,   193,   194,   373,   482,
     174,   397,   212,   486,   363,   509,     5,   209,   164,   522,
     523,   524,   487,   218,   252,   175,   190,   265,   156,   554,
     437,    26,   406,   407,   506,   254,   408,   510,   220,   449,
      31,   354,   375,   507,   166,   491,   311,    36,   255,    26,
     213,   219,   240,   181,   504,   446,   504,   241,   219,   364,
     216,     4,   219,   221,   222,   463,   330,   181,   197,   181,
     372,   423,     4,    54,   527,    56,   313,     4,   219,   402,
     232,   182,   405,   251,   329,   220,   383,   277,   218,   506,
     448,   398,   220,   280,   374,   212,   220,   182,   387,   308,
     458,   231,   561,   256,   461,   167,   264,   219,   314,   266,
     221,   222,   220,   493,   217,   218,   497,   221,   222,   274,
     190,   221,   222,   306,   233,   218,   464,   333,   234,   355,
     479,   480,     4,   357,   331,   139,   140,   221,   222,   317,
     190,   220,   127,   218,   245,   218,   235,   265,   472,   418,
     494,   218,   190,   262,   495,   202,   168,   292,   190,   190,
     180,   332,   218,   360,   368,     4,   221,   222,   210,   315,
     543,   155,   156,   157,   158,   282,   218,   190,   323,     8,
     348,    10,   218,   190,   401,   218,   350,   474,   334,   218,
     553,   484,   214,   243,   236,   190,   244,   248,   190,   392,
     190,   366,   246,   367,   470,    31,   223,   556,   152,   247,
     130,   131,    36,   155,   156,   237,   202,   298,   299,   190,
     239,   359,   386,   238,   134,   135,   136,   137,   271,   272,
     369,   190,   287,   272,   515,   318,   319,   320,   321,   505,
     429,   218,   178,   179,   249,   261,   250,     2,   268,     3,
    -241,  -242,   263,   279,   281,   283,   323,   294,   286,   290,
     256,   291,   182,   297,   301,   304,   202,   334,   307,   424,
     312,   316,    20,   349,   352,   370,   375,   356,   403,   272,
     381,   378,   388,   390,   396,   400,   409,   475,   218,   413,
     412,   430,   505,   419,   505,   435,    34,   414,    35,   421,
      37,    38,    39,    40,    41,   422,   426,   416,   465,   428,
     427,   323,   431,   434,   440,   442,   360,   447,   444,   449,
     454,    53,   455,    54,    55,    56,    57,   433,   459,    58,
     436,   180,   481,   460,   466,    59,    60,    61,    62,   205,
     190,   467,   462,   350,   224,   468,   469,   471,   190,   392,
     550,   477,   485,   489,    63,    64,   498,   508,   512,   513,
     514,   519,   360,   360,   360,   521,   225,   534,   537,   536,
     542,   190,   544,   483,   547,   545,    31,   549,   551,   552,
     558,   190,   492,    36,   560,   562,   190,   564,    66,   516,
     565,   566,   540,   541,   190,   190,   190,   557,   526,   439,
     559,   496,   511,   380,   438,   181,   531,    54,    55,    56,
      57,   259,   275,   476,   270,   191,   325,   391,   303,   226,
     227,   228,   528,   529,   328,   530,   546,   532,   211,   525,
     535,   293,   452,   182,   399,   339,   337,   344,    63,    64,
     548,   341,   533,   345,   190,   360,   338,   516,   309,   340,
     342,   473,   343,   347,     0,     0,     0,     0,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   190,     2,     0,
       3,   555,     4,     0,     5,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,   563,   212,     0,    15,    16,
      17,    18,    19,    20,     0,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,    28,
      29,     0,    30,    31,     0,    32,    33,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     1,     0,     2,
       0,     3,     0,     4,   153,     0,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    32,    33,    34,     0,
      35,    36,    37,    38,    39,    40,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,     1,     0,
       2,     0,     3,     0,     4,   267,     0,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,     0,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    63,    64,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    32,
      33,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,   327,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     2,   126,     3,
      59,    60,    61,    62,     6,     0,     0,     0,     0,   127,
      54,   245,    56,   247,   130,   131,     0,     0,   132,    63,
      64,     0,    20,     0,     0,     0,     0,     0,   133,   134,
     135,   136,   137,   138,   139,   140,     0,     0,     0,     0,
       0,     0,    31,   141,   142,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,   127,    54,   128,    56,   129,   130,   131,    58,
       0,   132,     0,     0,     0,    59,    60,    61,    62,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,     0,
       0,     0,     0,     0,    63,    64,   141,   142,     1,     0,
       2,     0,     3,     0,     0,     0,     5,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     1,     0,     2,    53,     3,    54,    55,    56,    57,
       6,     0,    58,     0,     0,     0,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,   171,     0,     2,    53,     3,    54,
      55,    56,    57,     6,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     1,     0,     2,     0,     3,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,    20,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    63,    64,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     2,     0,     3,   150,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,    20,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    63,    64,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,   151,    20,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    63,    64,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
     322,     0,     0,     0,     6,     0,     0,   200,   201,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     2,     0,
       3,   358,     0,     0,     0,     6,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,   151,    20,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    63,    64,     0,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,   150,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,   415,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,   417,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,   432,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,   180,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,    36,   276,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,   181,     0,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,    63,    64,   324,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,     0,     0,     0,     0,    63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    32,    59,    25,    66,     2,     3,   167,
      19,    93,   291,   112,    60,    61,   113,   115,   305,    14,
     234,    16,   114,   421,    33,    99,   177,   390,   123,     5,
     200,   226,     5,     4,   189,    58,    59,     4,    58,   326,
     185,   123,    15,     5,   290,     5,    41,     5,    11,     7,
      35,   447,     6,     4,    55,     3,    29,    30,     4,     6,
      79,   307,    71,     6,     6,    10,    11,    62,     5,   467,
     468,   469,    23,     4,   120,     3,    99,     8,    37,     6,
      10,    44,   328,   329,   447,    43,   332,   450,    89,     4,
      50,   261,    22,   448,     5,    10,    63,    57,    56,    44,
      73,    55,    99,    79,   500,   384,   502,   104,    55,    51,
      58,     9,    55,   114,   115,   402,     3,    79,    79,    79,
     278,     3,     9,    81,   479,    83,    97,     9,    55,   324,
     103,   107,   327,   118,   229,    89,   287,   166,     4,   502,
     386,   311,    89,     9,    90,   154,    89,   107,   293,   195,
     396,   225,   550,   111,   400,     5,   151,    55,   213,    90,
     114,   115,    89,   442,     3,     4,   445,   114,   115,   164,
     193,   114,   115,   193,    88,     4,     3,   232,    92,     8,
     426,   427,     9,   265,   230,   105,   106,   114,   115,   218,
     213,    89,    80,     4,    82,     4,   110,     8,   412,     8,
       4,     4,   225,     6,     8,   200,     5,   180,   231,   232,
       5,   231,     4,   268,     6,     9,   114,   115,     0,   214,
     507,    36,    37,    38,    39,     3,     4,   250,   223,    15,
     250,    17,     4,   256,     6,     4,   256,     6,   233,     4,
     527,     6,     5,   342,    98,   268,   343,   345,   271,   304,
     273,   271,   344,   273,   409,    50,     7,   536,   253,    84,
      85,    86,    57,    36,    37,   108,   261,    88,    89,   292,
     107,   266,   292,   109,   100,   101,   102,   103,    40,    41,
     275,   304,    40,    41,    79,   219,   220,   221,   222,   447,
       3,     4,    23,    24,    91,    62,    87,     5,     5,     7,
       6,     6,     6,    79,    79,    31,   301,    90,    79,    79,
     111,    79,   107,    43,     7,     5,   311,   312,    79,   365,
       5,     3,    30,    79,     5,     4,    22,     7,     3,    41,
     111,     9,    79,     9,    79,    79,    79,   419,     4,     4,
      90,   370,   500,    79,   502,   374,    54,     8,    56,     4,
      58,    59,    60,    61,    62,     6,    79,   352,   404,   368,
      79,   356,   371,    79,    79,    79,   421,     9,    42,     4,
       4,    79,    30,    81,    82,    83,    84,   372,     9,    87,
     375,     5,    14,     6,     6,    93,    94,    95,    96,   444,
     413,     5,   401,   413,   476,     5,     5,     4,   421,   454,
       4,    90,    90,    24,   112,   113,     9,    79,    79,    79,
       3,    23,   467,   468,   469,     3,    40,    90,     9,    79,
      10,   444,     3,   432,    10,    79,    50,     3,     6,     6,
      10,   454,   441,    57,     3,     3,   459,    10,     0,   459,
       6,     6,   500,   502,   467,   468,   469,   537,   477,   378,
     543,   444,   454,   285,   377,    79,   485,    81,    82,    83,
      84,   123,   165,   419,   162,    26,   225,   297,   190,    93,
      94,    95,   481,   482,   229,   484,   517,   486,   538,   471,
     489,   182,   392,   107,   312,   237,   235,   244,   112,   113,
     519,   239,   487,   246,   517,   550,   236,   517,   197,   238,
     242,   413,   243,   249,    -1,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   550,     5,    -1,
       7,   534,     9,    -1,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,   554,   555,    -1,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,
      47,    -1,    49,    50,    -1,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,     3,    -1,     5,
      -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   112,   113,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    55,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,     5,     6,     7,
      93,    94,    95,    96,    12,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    89,   112,
     113,    -1,    30,    -1,    -1,    -1,    -1,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   114,   115,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,   112,   113,   114,   115,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,     3,    -1,     5,    79,     7,    81,    82,    83,    84,
      12,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,     3,    -1,     5,    79,     7,    81,
      82,    83,    84,    12,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   112,   113,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   112,   113,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    30,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    75,    76,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    90,    30,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,     5,
      87,    -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,   112,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    62,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    79,    81,    82,    83,    84,    87,    93,
      94,    95,    96,   112,   113,   123,   124,   125,   127,   133,
     137,   141,   146,   148,   149,   157,   158,   159,   160,   164,
     166,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   184,   185,   186,   187,   188,   200,   201,   204,
     205,   206,   213,   214,   217,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     244,   247,   248,   249,   251,   252,     6,    80,    82,    84,
      85,    86,    89,    99,   100,   101,   102,   103,   104,   105,
     106,   114,   115,   180,   183,   202,   223,   224,   225,   226,
       8,    90,   180,    10,   141,    36,    37,    38,    39,   145,
     193,   194,   195,   196,     5,   159,     5,     5,     5,   180,
     196,     3,   180,   159,    79,     3,   126,   196,   126,   126,
       5,    79,   107,   150,   152,   207,   208,   209,   211,   212,
     213,   193,   142,   196,   196,   181,   159,    79,   243,   242,
      75,    76,   180,   250,   152,   150,   151,   157,   157,   180,
       0,   125,   159,   196,     5,     3,    58,     3,     4,    55,
      89,   114,   115,     7,   184,    40,    93,    94,    95,   152,
     203,   241,   196,    88,    92,   110,    98,   108,   109,   107,
      99,   104,   222,   223,   224,    82,   225,    84,   226,    91,
      87,   242,   157,     7,    43,    56,   111,   182,   184,   186,
     247,    62,     6,     6,   180,     8,    90,    10,     5,   189,
     194,    40,    41,   197,   180,   172,    79,   181,   179,    79,
       9,    79,     3,    31,   161,   163,    79,    40,   197,   198,
      79,    79,   196,   207,    90,   135,   182,    43,    88,    89,
     210,     7,   187,   211,     5,   190,   152,    79,   157,   243,
     250,    63,     5,    97,   150,   180,     3,   181,   188,   188,
     188,   188,     8,   180,    93,   203,   189,    55,   202,   247,
       3,   157,   152,   150,   180,   227,   228,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   152,    79,
     152,   245,     5,   246,   250,     8,     7,   184,     8,   180,
     150,   153,   154,     6,    51,   191,   152,   152,     6,   180,
       4,     6,   179,     4,    90,    22,   168,   169,     9,   162,
     161,   111,   192,   197,   192,   135,   152,   182,    79,   139,
       9,   209,   150,   155,   156,   191,    79,   192,   250,   227,
      79,     6,   189,     3,   191,   189,   192,   192,   192,    79,
     218,   219,    90,     4,     8,     6,   180,     8,     8,    79,
     220,     4,     6,     3,   157,   199,    79,    79,   159,     3,
     181,   159,     6,   180,    79,   181,   180,    10,   168,   139,
      79,   165,    79,   140,    42,   134,   135,     9,   192,     4,
     136,   206,   220,   221,     4,    30,   143,   144,   192,     9,
       6,   192,   159,   191,     3,   157,     6,     5,     5,     5,
     187,     4,   228,   245,     6,   184,   185,    90,   153,   192,
     192,    14,     6,   159,     6,    90,     6,    23,   167,    24,
     170,    10,   159,   135,     4,     8,   151,   135,     9,   128,
     129,   130,   131,   132,   158,   179,   206,   190,    79,    10,
     206,   155,    79,    79,     3,    79,   152,   215,   216,    23,
     147,     3,   153,   153,   153,   218,   181,   190,   159,   159,
     159,   181,   159,   180,    90,   159,    79,     9,   124,   138,
     128,   130,    10,   191,     3,    79,   216,    10,   181,     3,
       4,     6,     6,   191,     6,   141,   135,   138,    10,   144,
       3,   153,     3,   159,    10,     6,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   134,
     134,   135,   135,   136,   136,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   145,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   152,
     153,   153,   154,   154,   155,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   160,   162,   161,   163,   163,   164,   165,   165,   166,
     167,   167,   168,   169,   169,   170,   170,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   174,   175,
     176,   176,   177,   177,   178,   178,   178,   178,   179,   179,
     180,   180,   181,   181,   181,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   184,   185,   185,   185,
     186,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   194,   194,   195,   195,
     196,   196,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   201,   202,   202,   202,   202,   202,   203,   203,   203,
     203,   204,   204,   205,   205,   205,   206,   206,   206,   206,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     210,   211,   212,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   217,   218,   218,   219,   219,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   223,   223,   224,   224,
     225,   225,   226,   226,   226,   227,   227,   228,   228,   228,
     229,   229,   230,   230,   231,   231,   232,   232,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   241,   241,   241,   241,   241,   241,
     241,   242,   242,   242,   242,   242,   242,   242,   242,   243,
     243,   244,   244,   245,   245,   246,   246,   247,   247,   248,
     249,   249,   249,   249,   249,   249,   249,   250,   250,   250,
     251,   251,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     9,     8,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     0,     7,     2,
       0,     0,     2,     1,     2,     6,     1,     0,     1,     3,
       2,     4,     1,     2,     4,     2,     2,     0,     1,     5,
       6,     0,     2,     1,     1,     7,     2,     1,     1,     1,
       4,     2,     1,     3,     2,     1,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     1,     2,     3,     1,     0,     6,
       2,     0,     5,     1,     2,     2,     0,     6,     1,     1,
       5,     5,     6,     7,     7,     9,     5,     7,     3,     2,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       1,     3,     1,     3,     3,     3,     3,     3,     0,     1,
       1,     1,     1,     1,     3,     4,     5,     2,     3,     2,
       5,     4,     4,     1,     1,     1,     4,     2,     1,     2,
       1,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     2,     1,     1,     1,
       5,     9,     1,     1,     1,     1,     1,     8,     6,     6,
       4,     1,     2,     3,     3,     4,     1,     1,     1,     5,
       5,     6,     1,     8,     2,     3,     1,     3,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     1,     2,     3,
       1,     2,     7,     3,     1,     1,     2,     1,     2,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     5,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     2,     1,     1,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     2,     2
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
#line 176 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2421 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 177 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2427 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 180 "src/gwion.y"
            { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2433 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 181 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2439 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 185 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2445 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 186 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2451 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 187 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2457 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 188 "src/gwion.y"
                 { (yyval.section) = new_section_trait_def(mpool(arg), (yyvsp[0].trait_def)); }
#line 2463 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 189 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2469 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 190 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2475 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 191 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2481 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 192 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2487 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2493 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 196 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2499 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 199 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2510 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 206 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2522 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 214 "src/gwion.y"
                     {
    if((yyvsp[0].stmt)->d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2532 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 219 "src/gwion.y"
                             { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2538 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 220 "src/gwion.y"
                             { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2544 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 223 "src/gwion.y"
                       { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2550 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 224 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2556 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 228 "src/gwion.y"
                  { (yyval.ast) = new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2562 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 229 "src/gwion.y"
                            { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2568 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 232 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2574 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 235 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2587 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 244 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2593 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 244 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2599 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 245 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2605 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 245 "src/gwion.y"
                                     {
  ID_List base = (yyval.id_list) = (yyvsp[0].id_list);
  while(base) {
    ID_List curr = base->next;
    while(curr) {
      if(base->xid == curr->xid) // could use ID_List location
      { scanner_secondary(arg, "duplicated trait", (yylsp[0])); }
      curr = curr->next;
    }    
    base = base->next;
  }
}
#line 2622 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 258 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2631 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 262 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, new_ast(mpool(arg), section, NULL))
  }
#line 2640 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 268 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2649 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 274 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2655 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 276 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2661 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 277 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2667 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 279 "src/gwion.y"
                            { (yyval.specialized_list) = new_specialized_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].id_list), (yylsp[-1])); LIST_FIRST((yyval.specialized_list)) }
#line 2673 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 280 "src/gwion.y"
                                         { LIST_NEXT((yyval.specialized_list), (yyvsp[-3].specialized_list), Specialized_List, new_specialized_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].id_list), (yylsp[-1]))) }
#line 2679 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 282 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2685 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 283 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2691 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 285 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2698 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 288 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2704 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 288 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2710 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 289 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2716 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 289 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2722 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 291 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2729 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 294 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2740 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 301 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2746 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 301 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2752 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 302 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2758 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 302 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2764 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 303 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2777 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 312 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2783 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 314 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2791 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 318 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2799 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 323 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2805 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 324 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2811 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 326 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2817 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 327 "src/gwion.y"
                      {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2827 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 333 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2833 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 334 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2839 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 334 "src/gwion.y"
                                                                         { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2845 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 337 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2851 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 338 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2857 "src/parser.c"
    break;

  case 69: /* stmt_pp: "<comment>"  */
#line 342 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2863 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#include"  */
#line 343 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2869 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#define"  */
#line 344 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2875 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#pragma"  */
#line 345 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2881 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#undef"  */
#line 346 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2887 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifdef"  */
#line 347 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2893 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifndef"  */
#line 348 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2899 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#else"  */
#line 349 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2905 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#if"  */
#line 350 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2911 "src/parser.c"
    break;

  case 78: /* stmt_pp: "\n"  */
#line 351 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2917 "src/parser.c"
    break;

  case 79: /* stmt_pp: "import"  */
#line 352 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_import, (yyvsp[0].sval), (yyloc)); }
#line 2923 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 369 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2933 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 374 "src/gwion.y"
                  { arg->handling = true; }
#line 2939 "src/parser.c"
    break;

  case 93: /* handler: "handle" $@1 opt_id stmt  */
#line 374 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2945 "src/parser.c"
    break;

  case 95: /* handler_list: handler_list handler  */
#line 376 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list)->xid)
        { parser_error(&(yylsp[0]), arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        Handler_List list = (yyvsp[0].handler_list);
        while(list) {
          if(list->xid == (yyvsp[-1].handler_list)->xid)
          { parser_error(&(yylsp[0]), arg, "duplicated `handle`", 0); YYERROR; }
          list = list->next;
        }
        (yyval.handler_list) = (yyvsp[-1].handler_list);
        (yyvsp[-1].handler_list)->next = (yyvsp[0].handler_list);
  }
#line 2962 "src/parser.c"
    break;

  case 96: /* try_stmt: "try" stmt handler_list  */
#line 388 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2968 "src/parser.c"
    break;

  case 98: /* opt_id: %empty  */
#line 390 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2974 "src/parser.c"
    break;

  case 99: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 393 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2984 "src/parser.c"
    break;

  case 100: /* when_exp: "when" exp  */
#line 399 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2990 "src/parser.c"
    break;

  case 101: /* when_exp: %empty  */
#line 399 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 2996 "src/parser.c"
    break;

  case 102: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 402 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 3009 "src/parser.c"
    break;

  case 103: /* match_list: match_case_stmt  */
#line 412 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 3015 "src/parser.c"
    break;

  case 104: /* match_list: match_list match_case_stmt  */
#line 413 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 3021 "src/parser.c"
    break;

  case 105: /* where_stmt: "where" stmt  */
#line 415 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3027 "src/parser.c"
    break;

  case 106: /* where_stmt: %empty  */
#line 415 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 3033 "src/parser.c"
    break;

  case 107: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 417 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 3046 "src/parser.c"
    break;

  case 108: /* flow: "while"  */
#line 427 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3052 "src/parser.c"
    break;

  case 109: /* flow: "until"  */
#line 428 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3058 "src/parser.c"
    break;

  case 110: /* loop_stmt: flow "(" exp ")" stmt  */
#line 433 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].stmt_t), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3064 "src/parser.c"
    break;

  case 111: /* loop_stmt: "do" stmt flow exp ";"  */
#line 435 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].stmt_t), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].stmt_t)) }
#line 3070 "src/parser.c"
    break;

  case 112: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 437 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 3076 "src/parser.c"
    break;

  case 113: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 439 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3082 "src/parser.c"
    break;

  case 114: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 441 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 3088 "src/parser.c"
    break;

  case 115: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 443 "src/gwion.y"
      { 
        (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
      }
#line 3099 "src/parser.c"
    break;

  case 116: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 450 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3105 "src/parser.c"
    break;

  case 117: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 452 "src/gwion.y"
      { 
        (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_loop.idx->sym = (yyvsp[-4].sym);
        (yyval.stmt)->d.stmt_loop.idx->pos = (yylsp[-4]);        
        LIST_REM((yyvsp[-2].exp))
      }
#line 3117 "src/parser.c"
    break;

  case 118: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 461 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 3123 "src/parser.c"
    break;

  case 119: /* defer_stmt: "defer" stmt  */
#line 463 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 3129 "src/parser.c"
    break;

  case 120: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 467 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 3135 "src/parser.c"
    break;

  case 121: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 469 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 3141 "src/parser.c"
    break;

  case 122: /* breaks: "break"  */
#line 472 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3147 "src/parser.c"
    break;

  case 123: /* breaks: "continue"  */
#line 472 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3153 "src/parser.c"
    break;

  case 124: /* jump_stmt: "return" exp ";"  */
#line 474 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3159 "src/parser.c"
    break;

  case 125: /* jump_stmt: "return" ";"  */
#line 475 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 3165 "src/parser.c"
    break;

  case 126: /* jump_stmt: breaks "<integer>" ";"  */
#line 476 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].stmt_t), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 3171 "src/parser.c"
    break;

  case 127: /* jump_stmt: breaks ";"  */
#line 477 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].stmt_t), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 3177 "src/parser.c"
    break;

  case 128: /* exp_stmt: exp ";"  */
#line 481 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3183 "src/parser.c"
    break;

  case 129: /* exp_stmt: ";"  */
#line 482 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 3189 "src/parser.c"
    break;

  case 130: /* exp: binary_exp  */
#line 486 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 3195 "src/parser.c"
    break;

  case 131: /* exp: exp "," binary_exp  */
#line 487 "src/gwion.y"
                       { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 3201 "src/parser.c"
    break;

  case 133: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 492 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3207 "src/parser.c"
    break;

  case 134: /* binary_exp: binary_exp "@" decl_exp  */
#line 493 "src/gwion.y"
                              { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3213 "src/parser.c"
    break;

  case 135: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 494 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3219 "src/parser.c"
    break;

  case 136: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 495 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3225 "src/parser.c"
    break;

  case 137: /* call_template: ":[" type_list "]"  */
#line 498 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3231 "src/parser.c"
    break;

  case 138: /* call_template: %empty  */
#line 498 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3237 "src/parser.c"
    break;

  case 144: /* array_exp: "[" exp "]"  */
#line 503 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3243 "src/parser.c"
    break;

  case 145: /* array_exp: "[" exp "]" array_exp  */
#line 504 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3252 "src/parser.c"
    break;

  case 146: /* array_exp: "[" exp "]" "[" "]"  */
#line 508 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 3258 "src/parser.c"
    break;

  case 147: /* array_empty: "[" "]"  */
#line 512 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3264 "src/parser.c"
    break;

  case 148: /* array_empty: array_empty "[" "]"  */
#line 513 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3270 "src/parser.c"
    break;

  case 149: /* array_empty: array_empty array_exp  */
#line 514 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 3276 "src/parser.c"
    break;

  case 150: /* range: "[" exp ":" exp "]"  */
#line 518 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM((yyvsp[-3].exp)) LIST_REM((yyvsp[-1].exp)) }
#line 3282 "src/parser.c"
    break;

  case 151: /* range: "[" exp ":" "]"  */
#line 519 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3288 "src/parser.c"
    break;

  case 152: /* range: "[" ":" exp "]"  */
#line 520 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3294 "src/parser.c"
    break;

  case 156: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 525 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3300 "src/parser.c"
    break;

  case 157: /* func_args: "(" arg_list  */
#line 527 "src/gwion.y"
                          { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3306 "src/parser.c"
    break;

  case 158: /* func_args: "("  */
#line 527 "src/gwion.y"
                                                          { (yyval.arg_list) = NULL; }
#line 3312 "src/parser.c"
    break;

  case 159: /* fptr_args: "(" fptr_list  */
#line 528 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3318 "src/parser.c"
    break;

  case 160: /* fptr_args: "("  */
#line 528 "src/gwion.y"
                                                         { (yyval.arg_list) = NULL; }
#line 3324 "src/parser.c"
    break;

  case 161: /* arg_type: "..." ")"  */
#line 529 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3330 "src/parser.c"
    break;

  case 162: /* arg_type: ")"  */
#line 529 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3336 "src/parser.c"
    break;

  case 163: /* decl_template: ":[" specialized_list "]"  */
#line 531 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); LIST_REM(2) }
#line 3342 "src/parser.c"
    break;

  case 164: /* decl_template: %empty  */
#line 531 "src/gwion.y"
                                                                    { (yyval.specialized_list) = NULL; }
#line 3348 "src/parser.c"
    break;

  case 165: /* global: "global"  */
#line 533 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3354 "src/parser.c"
    break;

  case 166: /* storage_flag: "static"  */
#line 535 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3360 "src/parser.c"
    break;

  case 168: /* access_flag: "private"  */
#line 537 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3366 "src/parser.c"
    break;

  case 169: /* access_flag: "protect"  */
#line 538 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3372 "src/parser.c"
    break;

  case 170: /* flag: access_flag  */
#line 541 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3378 "src/parser.c"
    break;

  case 171: /* flag: storage_flag  */
#line 542 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3384 "src/parser.c"
    break;

  case 172: /* flag: access_flag storage_flag  */
#line 543 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3390 "src/parser.c"
    break;

  case 173: /* flag: %empty  */
#line 544 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3396 "src/parser.c"
    break;

  case 174: /* final: "final"  */
#line 547 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3402 "src/parser.c"
    break;

  case 175: /* final: %empty  */
#line 547 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3408 "src/parser.c"
    break;

  case 176: /* modifier: "abstract" final  */
#line 549 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3414 "src/parser.c"
    break;

  case 179: /* func_code: ";"  */
#line 551 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3420 "src/parser.c"
    break;

  case 180: /* func_def_base: "fun" func_base func_args arg_type func_code  */
#line 553 "src/gwion.y"
                                                 {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt));
//    $$->trait = $5;
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-3].func_base), abstract);
    }
  }
#line 3434 "src/parser.c"
    break;

  case 181: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 565 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3446 "src/parser.c"
    break;

  case 187: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 576 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-6])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3454 "src/parser.c"
    break;

  case 188: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 580 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3462 "src/parser.c"
    break;

  case 189: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 584 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3472 "src/parser.c"
    break;

  case 190: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 590 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3481 "src/parser.c"
    break;

  case 191: /* operator: "operator"  */
#line 595 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3487 "src/parser.c"
    break;

  case 192: /* operator: "operator" global  */
#line 595 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3493 "src/parser.c"
    break;

  case 193: /* op_def: operator op_base code_stmt  */
#line 598 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3499 "src/parser.c"
    break;

  case 194: /* op_def: operator op_base ";"  */
#line 600 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3505 "src/parser.c"
    break;

  case 195: /* op_def: operator "abstract" op_base ";"  */
#line 602 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3511 "src/parser.c"
    break;

  case 198: /* func_def: op_def  */
#line 604 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3517 "src/parser.c"
    break;

  case 199: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 606 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt));
    }
#line 3526 "src/parser.c"
    break;

  case 200: /* func_def: operator "new" func_args arg_type ";"  */
#line 611 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3535 "src/parser.c"
    break;

  case 201: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 616 "src/gwion.y"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3544 "src/parser.c"
    break;

  case 202: /* type_decl_base: "<identifier>"  */
#line 622 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3550 "src/parser.c"
    break;

  case 203: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 623 "src/gwion.y"
                                                                               {
      const Symbol name = sig_name(arg, (yylsp[-5]).first);
      (yyval.type_decl) = new_type_decl(mpool(arg), name, (yylsp[-7]));
      Func_Base *fb = new_func_base(mpool(arg), (yyvsp[-5].type_decl), name, NULL, (yyvsp[-6].flag), (yylsp[-7]));
      if((yyvsp[-4].specialized_list))
        fb->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      fb->args = (yyvsp[-3].arg_list);
      fb->fbflag |= (yyvsp[-2].fbflag);
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = (yyvsp[-1].vector).ptr;
      (yyval.type_decl)->fptr = fptr;
  }
#line 3567 "src/parser.c"
    break;

  case 204: /* type_decl_tmpl: type_decl_base call_template  */
#line 638 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3573 "src/parser.c"
    break;

  case 205: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 639 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3579 "src/parser.c"
    break;

  case 207: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 644 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3585 "src/parser.c"
    break;

  case 208: /* option: "?"  */
#line 647 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3591 "src/parser.c"
    break;

  case 209: /* option: OPTIONS  */
#line 647 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3597 "src/parser.c"
    break;

  case 210: /* option: %empty  */
#line 647 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3603 "src/parser.c"
    break;

  case 211: /* type_decl_opt: type_decl_noflag option  */
#line 648 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3609 "src/parser.c"
    break;

  case 213: /* type_decl: type_decl_flag type_decl_opt  */
#line 649 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3615 "src/parser.c"
    break;

  case 214: /* type_decl_flag: "late"  */
#line 652 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3621 "src/parser.c"
    break;

  case 215: /* type_decl_flag: "const"  */
#line 653 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3627 "src/parser.c"
    break;

  case 216: /* type_decl_flag2: "var"  */
#line 655 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3633 "src/parser.c"
    break;

  case 218: /* union_decl: "<identifier>" ";"  */
#line 658 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3642 "src/parser.c"
    break;

  case 219: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 662 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3648 "src/parser.c"
    break;

  case 221: /* union_list: union_decl union_list  */
#line 665 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3654 "src/parser.c"
    break;

  case 222: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 668 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3666 "src/parser.c"
    break;

  case 223: /* var_decl_list: var_decl "," var_decl_list  */
#line 678 "src/gwion.y"
                               { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3672 "src/parser.c"
    break;

  case 224: /* var_decl_list: var_decl  */
#line 679 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3678 "src/parser.c"
    break;

  case 225: /* var_decl: "<identifier>"  */
#line 682 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3684 "src/parser.c"
    break;

  case 226: /* var_decl: "<identifier>" array  */
#line 683 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3690 "src/parser.c"
    break;

  case 227: /* arg_decl: "<identifier>"  */
#line 685 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3696 "src/parser.c"
    break;

  case 228: /* arg_decl: "<identifier>" array_empty  */
#line 686 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3702 "src/parser.c"
    break;

  case 229: /* arg_decl: "<identifier>" array_exp  */
#line 687 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3708 "src/parser.c"
    break;

  case 231: /* fptr_arg_decl: %empty  */
#line 688 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3714 "src/parser.c"
    break;

  case 245: /* opt_exp: exp  */
#line 696 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3720 "src/parser.c"
    break;

  case 246: /* opt_exp: %empty  */
#line 696 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3726 "src/parser.c"
    break;

  case 248: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 699 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3732 "src/parser.c"
    break;

  case 249: /* con_exp: log_or_exp "?:" con_exp  */
#line 701 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3738 "src/parser.c"
    break;

  case 251: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 703 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3744 "src/parser.c"
    break;

  case 253: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 704 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3750 "src/parser.c"
    break;

  case 255: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 705 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3756 "src/parser.c"
    break;

  case 257: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 706 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3762 "src/parser.c"
    break;

  case 259: /* and_exp: and_exp "&" eq_exp  */
#line 707 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3768 "src/parser.c"
    break;

  case 261: /* eq_exp: eq_exp eq_op rel_exp  */
#line 708 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3774 "src/parser.c"
    break;

  case 263: /* rel_exp: rel_exp rel_op shift_exp  */
#line 709 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3780 "src/parser.c"
    break;

  case 265: /* shift_exp: shift_exp shift_op add_exp  */
#line 710 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3786 "src/parser.c"
    break;

  case 267: /* add_exp: add_exp add_op mul_exp  */
#line 711 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3792 "src/parser.c"
    break;

  case 269: /* mul_exp: mul_exp mul_op dur_exp  */
#line 712 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3798 "src/parser.c"
    break;

  case 271: /* dur_exp: dur_exp "::" cast_exp  */
#line 713 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3804 "src/parser.c"
    break;

  case 273: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 716 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3810 "src/parser.c"
    break;

  case 282: /* unary_exp: unary_op unary_exp  */
#line 723 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3816 "src/parser.c"
    break;

  case 283: /* unary_exp: OPID_E unary_exp  */
#line 724 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3822 "src/parser.c"
    break;

  case 284: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 725 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 3830 "src/parser.c"
    break;

  case 285: /* unary_exp: "new" type_decl_exp  */
#line 728 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 3836 "src/parser.c"
    break;

  case 286: /* unary_exp: "spork" code_stmt  */
#line 729 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3842 "src/parser.c"
    break;

  case 287: /* unary_exp: "fork" code_stmt  */
#line 730 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3848 "src/parser.c"
    break;

  case 288: /* unary_exp: "$" type_decl_empty  */
#line 731 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 3854 "src/parser.c"
    break;

  case 289: /* lambda_list: "<identifier>"  */
#line 734 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])), NULL); }
#line 3860 "src/parser.c"
    break;

  case 290: /* lambda_list: "<identifier>" lambda_list  */
#line 735 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yylsp[-1])), (yyvsp[0].arg_list)); }
#line 3866 "src/parser.c"
    break;

  case 291: /* lambda_arg: "\\" lambda_list  */
#line 736 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3872 "src/parser.c"
    break;

  case 292: /* lambda_arg: "\\"  */
#line 736 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3878 "src/parser.c"
    break;

  case 293: /* type_list: type_decl_empty  */
#line 739 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3884 "src/parser.c"
    break;

  case 294: /* type_list: type_decl_empty "," type_list  */
#line 740 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3890 "src/parser.c"
    break;

  case 295: /* call_paren: "(" exp ")"  */
#line 744 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3896 "src/parser.c"
    break;

  case 296: /* call_paren: "(" ")"  */
#line 744 "src/gwion.y"
                                                             { (yyval.exp) = NULL; }
#line 3902 "src/parser.c"
    break;

  case 299: /* dot_exp: post_exp "." "<identifier>"  */
#line 748 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3915 "src/parser.c"
    break;

  case 301: /* post_exp: post_exp array_exp  */
#line 759 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3921 "src/parser.c"
    break;

  case 302: /* post_exp: post_exp range  */
#line 761 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3927 "src/parser.c"
    break;

  case 303: /* post_exp: post_exp call_template call_paren  */
#line 763 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3934 "src/parser.c"
    break;

  case 304: /* post_exp: post_exp post_op  */
#line 766 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3940 "src/parser.c"
    break;

  case 305: /* post_exp: post_exp OPID_E  */
#line 768 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3946 "src/parser.c"
    break;

  case 306: /* post_exp: dot_exp  */
#line 769 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3952 "src/parser.c"
    break;

  case 307: /* interp_exp: "<interp string end>"  */
#line 773 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 3958 "src/parser.c"
    break;

  case 308: /* interp_exp: "<interp string lit>" interp_exp  */
#line 774 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3964 "src/parser.c"
    break;

  case 309: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 775 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3970 "src/parser.c"
    break;

  case 310: /* interp: "`" interp_exp  */
#line 777 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3976 "src/parser.c"
    break;

  case 311: /* interp: interp "`" interp_exp  */
#line 778 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.string.data) + strlen((yyvsp[0].exp)->d.prim.d.string.data) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.string.data, (yyvsp[0].exp)->d.prim.d.string.data);
    (yyvsp[-2].exp)->d.prim.d.string.data = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos.last = (yyvsp[0].exp)->pos.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3991 "src/parser.c"
    break;

  case 312: /* prim_exp: "<identifier>"  */
#line 790 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3997 "src/parser.c"
    break;

  case 313: /* prim_exp: "<integer>"  */
#line 791 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4003 "src/parser.c"
    break;

  case 314: /* prim_exp: "<float>"  */
#line 792 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4009 "src/parser.c"
    break;

  case 315: /* prim_exp: interp  */
#line 793 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4015 "src/parser.c"
    break;

  case 316: /* prim_exp: "<litteral string>"  */
#line 794 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4021 "src/parser.c"
    break;

  case 317: /* prim_exp: "<litteral char>"  */
#line 795 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4027 "src/parser.c"
    break;

  case 318: /* prim_exp: array  */
#line 796 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4033 "src/parser.c"
    break;

  case 319: /* prim_exp: range  */
#line 797 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4039 "src/parser.c"
    break;

  case 320: /* prim_exp: "<<<" exp ">>>"  */
#line 798 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 4045 "src/parser.c"
    break;

  case 321: /* prim_exp: "(" exp ")"  */
#line 799 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 4051 "src/parser.c"
    break;

  case 322: /* prim_exp: lambda_arg code_stmt  */
#line 800 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yylsp[-1])); }
#line 4057 "src/parser.c"
    break;

  case 323: /* prim_exp: "(" op_op ")"  */
#line 801 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4063 "src/parser.c"
    break;

  case 324: /* prim_exp: "perform" "<identifier>"  */
#line 802 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4069 "src/parser.c"
    break;

  case 325: /* prim_exp: "(" ")"  */
#line 803 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4075 "src/parser.c"
    break;


#line 4079 "src/parser.c"

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

#line 805 "src/gwion.y"

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
