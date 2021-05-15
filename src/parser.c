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
  YYSYMBOL_PP_IMPORT = 76,                 /* "import"  */
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
  YYSYMBOL_func_effects = 135,             /* func_effects  */
  YYSYMBOL_func_base = 136,                /* func_base  */
  YYSYMBOL_fptr_def = 137,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 138,             /* typedef_when  */
  YYSYMBOL_type_def_type = 139,            /* type_def_type  */
  YYSYMBOL_type_def = 140,                 /* type_def  */
  YYSYMBOL_type_decl_array = 141,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 142,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 143,          /* type_decl_empty  */
  YYSYMBOL_arg = 144,                      /* arg  */
  YYSYMBOL_arg_list = 145,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 146,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 147,                /* fptr_list  */
  YYSYMBOL_code_stmt = 148,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 149,                  /* stmt_pp  */
  YYSYMBOL_stmt = 150,                     /* stmt  */
  YYSYMBOL_retry_stmt = 151,               /* retry_stmt  */
  YYSYMBOL_handler = 152,                  /* handler  */
  YYSYMBOL_153_1 = 153,                    /* $@1  */
  YYSYMBOL_handler_list = 154,             /* handler_list  */
  YYSYMBOL_try_stmt = 155,                 /* try_stmt  */
  YYSYMBOL_opt_id = 156,                   /* opt_id  */
  YYSYMBOL_enum_def = 157,                 /* enum_def  */
  YYSYMBOL_when_exp = 158,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 159,          /* match_case_stmt  */
  YYSYMBOL_match_list = 160,               /* match_list  */
  YYSYMBOL_where_stmt = 161,               /* where_stmt  */
  YYSYMBOL_match_stmt = 162,               /* match_stmt  */
  YYSYMBOL_flow = 163,                     /* flow  */
  YYSYMBOL_loop_stmt = 164,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 165,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 166,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 167,           /* selection_stmt  */
  YYSYMBOL_breaks = 168,                   /* breaks  */
  YYSYMBOL_jump_stmt = 169,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 170,                 /* exp_stmt  */
  YYSYMBOL_exp = 171,                      /* exp  */
  YYSYMBOL_binary_exp = 172,               /* binary_exp  */
  YYSYMBOL_call_template = 173,            /* call_template  */
  YYSYMBOL_op = 174,                       /* op  */
  YYSYMBOL_array_exp = 175,                /* array_exp  */
  YYSYMBOL_array_empty = 176,              /* array_empty  */
  YYSYMBOL_range = 177,                    /* range  */
  YYSYMBOL_array = 178,                    /* array  */
  YYSYMBOL_decl_exp = 179,                 /* decl_exp  */
  YYSYMBOL_func_args = 180,                /* func_args  */
  YYSYMBOL_fptr_args = 181,                /* fptr_args  */
  YYSYMBOL_arg_type = 182,                 /* arg_type  */
  YYSYMBOL_decl_template = 183,            /* decl_template  */
  YYSYMBOL_global = 184,                   /* global  */
  YYSYMBOL_storage_flag = 185,             /* storage_flag  */
  YYSYMBOL_access_flag = 186,              /* access_flag  */
  YYSYMBOL_flag = 187,                     /* flag  */
  YYSYMBOL_final = 188,                    /* final  */
  YYSYMBOL_modifier = 189,                 /* modifier  */
  YYSYMBOL_func_trait = 190,               /* func_trait  */
  YYSYMBOL_func_code = 191,                /* func_code  */
  YYSYMBOL_func_def_base = 192,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 193,            /* abstract_fdef  */
  YYSYMBOL_op_op = 194,                    /* op_op  */
  YYSYMBOL_op_base = 195,                  /* op_base  */
  YYSYMBOL_operator = 196,                 /* operator  */
  YYSYMBOL_op_def = 197,                   /* op_def  */
  YYSYMBOL_func_def = 198,                 /* func_def  */
  YYSYMBOL_ref = 199,                      /* ref  */
  YYSYMBOL_type_decl_base = 200,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 201,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 202,         /* type_decl_noflag  */
  YYSYMBOL_option = 203,                   /* option  */
  YYSYMBOL_type_decl_opt = 204,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 205,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 206,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 207,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 208,               /* union_decl  */
  YYSYMBOL_union_list = 209,               /* union_list  */
  YYSYMBOL_union_def = 210,                /* union_def  */
  YYSYMBOL_var_decl_list = 211,            /* var_decl_list  */
  YYSYMBOL_var_decl = 212,                 /* var_decl  */
  YYSYMBOL_arg_decl = 213,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 214,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 215,                    /* eq_op  */
  YYSYMBOL_rel_op = 216,                   /* rel_op  */
  YYSYMBOL_shift_op = 217,                 /* shift_op  */
  YYSYMBOL_add_op = 218,                   /* add_op  */
  YYSYMBOL_mul_op = 219,                   /* mul_op  */
  YYSYMBOL_opt_exp = 220,                  /* opt_exp  */
  YYSYMBOL_con_exp = 221,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 222,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 223,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 224,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 225,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 226,                  /* and_exp  */
  YYSYMBOL_eq_exp = 227,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 228,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 229,                /* shift_exp  */
  YYSYMBOL_add_exp = 230,                  /* add_exp  */
  YYSYMBOL_mul_exp = 231,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 232,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 233,                 /* cast_exp  */
  YYSYMBOL_unary_op = 234,                 /* unary_op  */
  YYSYMBOL_unary_exp = 235,                /* unary_exp  */
  YYSYMBOL_lambda_list = 236,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 237,               /* lambda_arg  */
  YYSYMBOL_type_list = 238,                /* type_list  */
  YYSYMBOL_call_paren = 239,               /* call_paren  */
  YYSYMBOL_post_op = 240,                  /* post_op  */
  YYSYMBOL_dot_exp = 241,                  /* dot_exp  */
  YYSYMBOL_post_exp = 242,                 /* post_exp  */
  YYSYMBOL_interp_exp = 243,               /* interp_exp  */
  YYSYMBOL_interp = 244,                   /* interp  */
  YYSYMBOL_prim_exp = 245                  /* prim_exp  */
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
#define YYFINAL  209
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  528

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
       0,   167,   167,   168,   171,   172,   176,   177,   178,   179,
     180,   181,   182,   183,   186,   188,   195,   203,   216,   216,
     217,   217,   219,   223,   229,   237,   237,   239,   240,   242,
     243,   245,   248,   248,   248,   250,   253,   260,   260,   261,
     261,   262,   271,   271,   273,   277,   282,   283,   285,   286,
     292,   293,   293,   296,   297,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   328,   333,   333,
     334,   335,   341,   343,   343,   346,   352,   352,   355,   365,
     366,   368,   368,   370,   380,   381,   385,   387,   389,   391,
     393,   395,   401,   405,   407,   410,   412,   416,   416,   418,
     419,   420,   421,   425,   426,   430,   431,   435,   436,   437,
     438,   441,   441,   443,   443,   443,   443,   446,   447,   451,
     455,   456,   457,   461,   462,   463,   466,   466,   467,   468,
     470,   470,   471,   471,   472,   472,   474,   474,   476,   478,
     478,   480,   481,   484,   485,   486,   487,   490,   490,   492,
     492,   494,   494,   495,   495,   497,   508,   517,   517,   517,
     517,   517,   519,   521,   523,   528,   534,   534,   535,   538,
     538,   538,   540,   540,   543,   544,   559,   560,   564,   565,
     568,   568,   568,   569,   570,   570,   573,   574,   576,   576,
     579,   583,   585,   586,   589,   599,   600,   603,   604,   606,
     607,   608,   609,   609,   611,   611,   612,   612,   612,   612,
     613,   613,   614,   614,   615,   615,   615,   617,   617,   618,
     619,   621,   624,   624,   625,   625,   626,   626,   627,   627,
     628,   628,   629,   629,   630,   630,   631,   631,   632,   632,
     633,   633,   634,   634,   636,   636,   639,   639,   639,   640,
     640,   640,   640,   643,   644,   645,   646,   647,   648,   649,
     652,   653,   654,   654,   657,   658,   662,   662,   664,   664,
     666,   675,   676,   678,   680,   683,   685,   687,   691,   692,
     693,   695,   696,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721
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
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "import",
  "@<operator id>", "&<operator id>", "<identifier>", "+", "++", "-", "--",
  "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork",
  "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>",
  "&", "|", "^", "||", ":[", "~", "!", "<dynamic_operator>", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "class_ext", "traits",
  "extend_body", "extend_def", "class_body", "id_list", "stmt_list",
  "fptr_base", "func_effects", "func_base", "fptr_def", "typedef_when",
  "type_def_type", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "retry_stmt", "handler", "$@1",
  "handler_list", "try_stmt", "opt_id", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "where_stmt", "match_stmt", "flow",
  "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt", "breaks",
  "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template", "op",
  "array_exp", "array_empty", "range", "array", "decl_exp", "func_args",
  "fptr_args", "arg_type", "decl_template", "global", "storage_flag",
  "access_flag", "flag", "final", "modifier", "func_trait", "func_code",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "ref", "type_decl_base", "type_decl_tmpl",
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

#define YYPACT_NINF (-332)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-225)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     506,  -332,  1035,  1096,   617,   170,  -332,    44,  -332,   830,
    -332,    58,    74,   183,  1639,   170,   915,  -332,  -332,   830,
     117,    73,   170,   170,   170,    24,   184,  -332,  -332,   170,
     170,  -332,  1639,   830,   187,   386,  -332,  -332,  -332,  -332,
    -332,  1157,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,    24,    24,
     259,   259,  1639,  -332,  -332,   269,   506,  -332,  -332,  -332,
     830,  -332,   170,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,   265,  -332,  -332,  -332,  -332,    70,  -332,  -332,   208,
      -2,  -332,   264,  -332,  -332,  -332,  -332,  -332,    14,  -332,
    -332,  -332,   170,  -332,  -332,    71,   174,   165,   169,   172,
      87,   124,   143,   105,    93,   185,   194,   386,  -332,   259,
    -332,  -332,    49,   221,  -332,  -332,  -332,   268,   278,  -332,
    -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,  -332,
    -332,   212,  -332,   279,  -332,  -332,  -332,  -332,  -332,  1639,
      62,  -332,   728,  -332,  -332,  -332,  -332,   282,  -332,  -332,
     215,   213,  1639,   205,  1639,   975,   209,   149,   211,  -332,
     252,   260,  -332,  -332,   214,   217,   216,   218,   170,  -332,
     192,  -332,   283,    60,   190,   251,   171,  -332,   289,    57,
    -332,   293,    24,   223,    51,  -332,   187,  -332,  -332,  1157,
    -332,    37,  -332,  -332,  -332,  -332,  -332,  -332,    54,  -332,
    -332,  -332,    24,  1639,  -332,   297,  -332,  1639,  1639,  1639,
    1639,  1218,  -332,  -332,  -332,   227,   259,    24,    24,  1639,
     386,   386,   386,   386,   386,   386,  -332,  -332,   386,   386,
     386,  -332,   386,  -332,   386,   386,    24,  -332,  -332,  1278,
     224,  -332,    24,   299,  -332,  -332,  -332,  1157,  -332,  -332,
     158,   298,  1339,  -332,    24,    66,  -332,    24,  -332,    24,
     226,  1639,    27,   975,    64,   284,  -332,   305,  -332,  -332,
    -332,   260,   206,  -332,  -332,  -332,   206,   206,    24,  -332,
      46,   190,  -332,    57,  -332,  -332,  -332,  1399,  -332,  -332,
      24,    66,   241,   206,  -332,  -332,  -332,  1157,  -332,   242,
     232,  -332,    -2,  -332,  -332,  -332,  -332,   167,   282,   313,
     314,  -332,   317,   245,   330,   247,  -332,   174,   165,   169,
     172,    87,   124,   143,   105,    93,   185,   194,  -332,  -332,
     331,   332,  1459,  -332,  -332,  -332,  1519,  -332,  -332,   189,
     263,  -332,   334,  -332,   333,   253,   266,   267,   830,   258,
     830,  1579,   271,  1639,  1639,  -332,   146,   273,   211,  -332,
     273,   302,   257,   257,   206,    67,  -332,  -332,  -332,   263,
    -332,   344,   323,   206,   345,  -332,   206,   830,   350,    24,
      24,    24,   289,  -332,   353,   386,    24,  -332,  -332,   236,
    -332,  -332,   289,   272,    24,  -332,   280,   152,   206,   206,
     347,  -332,  -332,   830,   239,   275,    34,    65,   339,  -332,
    -332,   166,   830,   191,    24,   257,   273,   349,   360,   293,
    -332,  -332,  -332,  -332,    24,   291,    35,  -332,    50,   351,
    -332,  -332,   376,   377,   379,  -332,   245,  -332,  -332,  -332,
    -332,   264,  1639,  -332,  -332,  -332,  -332,  -332,   293,  -332,
     830,  -332,   830,  1639,   830,  1639,   296,   830,  -332,   308,
    -332,  -332,  -332,  -332,   380,   384,   506,   506,    66,  -332,
    -332,  -332,  -332,   389,   315,    50,   385,  1639,   393,    24,
    -332,  -332,  -332,    -2,    66,  -332,  -332,    36,  -332,   330,
     830,  -332,  -332,   506,   506,   387,   388,   323,  -332,   396,
    -332,  -332,    -2,  -332,   394,   399,   830,   830,   395,  -332,
    -332,    41,  -332,  -332,  -332,  -332,  -332,  -332
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   114,     0,     0,     0,   156,   198,     0,    94,     0,
      95,     0,     0,     0,     0,   156,     0,   107,   108,     0,
       0,     0,   156,   156,   156,     0,   176,    39,    40,   156,
     156,   197,     0,     0,   273,     0,   196,   294,   295,   297,
     298,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   293,   278,   256,   279,   257,     0,     0,
     260,   261,     0,   262,   259,     0,     2,     4,     8,     9,
       6,    12,   156,    13,    69,    72,    29,    76,    75,    10,
      70,     0,    67,    73,    74,    68,     0,    71,    66,     0,
     115,   136,   137,   300,   299,   117,   179,   180,     0,   181,
       7,   199,   156,    11,   138,   229,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,     0,   254,     0,
     258,   287,   263,   296,   281,   306,   222,   256,   257,   225,
     226,   126,   123,   219,   217,   218,   216,   124,   220,   221,
     125,     0,   167,     0,   169,   168,   171,   170,   130,     0,
       0,    53,     0,   149,   148,   151,   152,     0,   150,   154,
     153,   158,     0,     0,     0,     0,     0,     0,    84,   110,
       0,     0,   305,    77,     0,   158,     0,     0,   156,   184,
     182,    44,     0,     0,   122,   188,   192,   194,    43,     0,
     177,     0,     0,     0,     0,   104,   270,   272,   265,     0,
     288,     0,   291,    45,   269,   266,   267,   268,     0,     1,
       5,    30,     0,     0,   112,     0,   113,     0,     0,     0,
       0,     0,   132,   260,   261,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,     0,   214,   215,     0,     0,
       0,   223,     0,   224,     0,     0,     0,   264,   303,     0,
       0,   286,     0,     0,   282,   283,   285,     0,   302,   304,
       0,   127,     0,    54,   141,     0,   155,     0,   157,     0,
       0,     0,     0,     0,     0,     0,    83,     0,   109,    78,
      80,    82,   147,   159,   160,    14,   147,   147,     0,   183,
       0,   122,   186,     0,   190,   191,   193,     0,    42,   195,
     143,     0,     0,   147,   103,   271,   289,     0,   301,     0,
       0,   111,   116,   118,   120,   119,   131,     0,     0,     0,
       0,   178,     0,     0,   227,     0,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249,   251,   253,   255,   280,
     274,     0,     0,   284,   292,   135,     0,   128,   134,     0,
       0,    48,   140,   145,     0,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,     0,     0,    84,    81,
       0,    19,    20,    20,   147,     0,    22,   187,   189,   213,
      51,   142,    32,   147,     0,   290,   147,     0,     0,     0,
       0,     0,   207,   139,   206,     0,     0,   121,   277,     0,
     129,   133,   209,    47,     0,   144,     0,     0,   147,   147,
     105,    97,   102,     0,     0,     0,     0,    87,    92,    90,
      27,     0,     0,     0,     0,    20,     0,     0,     0,     0,
      24,    23,   212,    50,     0,     0,     0,    31,     0,    37,
      96,   175,     0,     0,     0,   208,     0,   230,   275,   276,
     211,   210,     0,    49,   162,   164,   163,   165,     0,    35,
       0,    98,     0,     0,     0,     0,     0,     0,    93,     0,
      85,    79,   146,    18,     0,    21,    26,    26,     0,    52,
      33,    36,    34,   184,     0,   202,     0,     0,     0,     0,
     173,   174,   205,    46,     0,   106,    99,     0,   100,    86,
       0,    91,    28,    26,    25,     0,     0,    32,   200,     0,
     203,   204,    38,    41,     0,     0,     0,    88,     0,    16,
      17,     0,   201,   172,   166,   101,    15,   185
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -332,  -332,   403,   -63,   240,  -332,  -332,  -323,  -332,  -332,
    -331,  -322,    -3,  -332,  -101,  -332,  -332,  -332,  -332,  -332,
     -14,   -53,   -54,  -305,  -332,   -26,  -332,   -52,  -332,    -9,
    -332,   126,  -332,  -332,  -332,    53,  -332,  -332,    43,  -332,
    -332,  -332,   249,  -332,  -332,  -332,  -332,  -332,  -332,  -139,
      18,   -27,  -156,  -332,   -79,    12,   295,  -173,   -17,   100,
    -311,  -284,  -264,   397,   262,  -332,    22,   244,  -332,  -332,
    -332,  -332,  -332,   199,  -332,  -332,  -332,  -260,   246,   250,
    -332,   134,  -332,   243,  -332,   -23,  -332,  -332,   -57,  -332,
     -16,  -332,    55,  -332,  -332,  -104,  -100,   -99,   -98,  -332,
    -212,  -332,   198,   203,   204,   220,   222,   200,   210,   219,
     197,   228,   207,   352,    -4,   281,  -332,    47,  -332,   -76,
    -332,  -332,  -174,  -332,  -332
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   504,    67,   174,    68,   425,   427,   375,    69,
     505,   421,    70,   191,   436,   157,    71,   488,    72,    73,
     203,   182,   340,   351,   352,   380,   381,    74,    75,    76,
      77,   280,   368,   281,    78,   277,    79,   466,   365,   366,
     468,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   253,   142,    91,    92,    93,    94,    95,   265,
     301,   355,   371,   158,   159,   160,   175,   269,   285,   407,
     457,    96,    97,   143,   226,    98,    99,   100,   183,   184,
     185,   186,   296,   187,   188,   101,   102,   485,   486,   103,
     393,   394,   403,   433,   238,   144,   145,   146,   147,   325,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   197,   119,   341,   343,   120,
     121,   122,   202,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,   152,   189,   210,   204,   194,   205,   239,   206,   207,
     171,   181,   240,   222,   242,   298,   244,   382,   326,   178,
     141,   150,   372,   373,   195,   306,   273,   161,   292,   178,
     376,   198,   167,   360,   170,   189,   189,   168,   481,   384,
     464,   217,   516,   254,   225,   181,   256,   527,   423,   162,
     428,   192,   193,   218,  -122,   178,   249,     5,   217,   201,
       4,   211,   178,   164,    31,   178,   217,   248,   362,   217,
     261,    36,   353,   214,    31,   189,   173,   430,     5,   165,
     208,    36,   218,   344,   442,   443,   444,   219,   465,   218,
      26,   218,   250,   179,   212,    54,    55,    56,    57,   453,
      31,   307,   474,   179,   475,   251,   218,    36,   223,   224,
     429,    26,   220,   247,   482,   431,   219,   354,   478,   437,
     482,   180,   439,   219,   228,   219,    63,    64,   215,   483,
      54,   180,    56,   385,   361,   377,   179,   272,   302,   179,
     219,   220,   304,   211,   458,   459,   506,   494,   220,   320,
     220,   308,   262,   217,   363,   455,   418,   180,   275,   229,
     252,     4,   217,   230,   180,   220,   345,   260,   364,   189,
     469,   217,   518,   322,   321,   261,   470,   243,   129,   130,
     270,   231,   347,   447,   514,   126,   236,   241,   166,   189,
     312,   237,   338,   217,   507,   469,   172,   401,   309,   472,
     288,   313,   314,   315,   189,   189,   153,   154,   155,   156,
     515,   216,   217,   356,   323,   357,   217,   201,   258,   445,
       8,   154,    10,   189,   133,   134,   135,   136,   239,   189,
     217,   310,   358,   240,   374,   242,   217,   244,   387,   317,
     217,   189,   449,   217,   189,   462,   189,   324,   138,   139,
     350,   153,   154,   267,   268,   278,   217,   283,   268,   294,
     295,   411,   217,   176,   177,   189,   196,   150,     4,   209,
     213,   221,   232,   233,  -223,   201,   245,   189,   234,   235,
     349,   246,   318,   257,  -224,   259,   379,   264,   274,   359,
     276,   279,   290,   282,   293,   286,   297,   287,   300,   180,
     311,   252,   303,   339,   342,   346,   364,   126,    54,   241,
      56,   243,   129,   130,   367,   317,   131,   370,   389,   390,
     383,   386,   391,   450,   392,   201,   132,   133,   134,   135,
     136,   137,   138,   139,   217,   396,   416,   395,   404,   405,
     397,   140,   402,   406,   424,   408,   409,   426,   434,   410,
     415,   412,   420,   435,   438,   456,   441,   446,   476,   454,
     399,   460,   452,   467,   317,   463,   189,   189,   189,   477,
     480,   473,   222,   189,   487,   350,   350,   350,   440,   414,
     489,   189,   417,   490,   484,   491,   500,   502,   469,   503,
     350,     2,   508,     3,   509,   511,   513,   519,   520,   522,
     523,   189,   524,    66,   461,   526,   521,   369,   479,   419,
     181,   189,   271,   471,   451,   189,    20,   255,   388,   284,
     379,   422,   266,   190,   319,   493,   289,   378,   510,   327,
     492,   484,   299,   291,   432,   328,   497,   329,   332,   335,
      34,   210,    35,   448,    37,    38,    39,    40,    41,   333,
     227,   495,   337,   496,   330,   498,     0,   331,   501,   334,
     512,     0,   189,     0,     0,    53,   189,    54,    55,    56,
      57,     0,   336,    58,     0,   350,     0,   305,     0,    59,
      60,    61,    62,   499,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   517,    63,    64,
       0,     0,     0,     0,     0,     0,     0,   525,   211,     1,
       0,     2,     0,     3,     0,     4,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,     0,    30,    31,     0,    32,    33,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
       1,     0,     2,     0,     3,     0,     4,   151,     0,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    32,
      33,    34,     0,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     0,     0,     0,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,     1,     0,     2,     0,     3,     0,     4,   263,     0,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      32,    33,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     4,
      63,    64,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    32,    33,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,   169,     0,
       2,     0,     3,    59,    60,    61,    62,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     1,     0,
       2,     0,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,    20,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    63,    64,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       2,   125,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,    20,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    63,    64,    34,
       0,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     2,     0,     3,   148,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    53,   126,    54,   127,    56,   128,
     129,   130,    58,     0,   131,     0,    20,     0,    59,    60,
      61,    62,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,     0,     0,     0,     0,    31,    63,    64,   140,
      34,     0,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,   149,    20,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    63,    64,
       0,    34,     0,    35,    36,    37,    38,    39,    40,    41,
     199,     0,   200,     2,     0,     3,   316,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     0,    20,     0,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    63,
      64,     0,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,     2,     0,     3,   348,     0,     0,
       0,     6,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,   149,    20,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      63,    64,     0,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,     0,     3,   148,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,   398,     3,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,     0,     3,   400,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,   413,     3,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     2,     0,     3,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,     0,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    66,    58,    32,    59,   111,    60,    61,
      19,    25,   112,    92,   113,   188,   114,   301,   230,     5,
       2,     3,   286,   287,    33,   199,   165,     5,   184,     5,
     290,    35,    14,     6,    16,    58,    59,    15,     3,   303,
       6,     4,     6,   122,    98,    59,   122,     6,   370,     5,
     373,    29,    30,    55,     5,     5,     7,    11,     4,    41,
       9,    70,     5,     5,    50,     5,     4,   119,     4,     4,
       8,    57,     6,     3,    50,    98,     3,    10,    11,     5,
      62,    57,    55,   257,   389,   390,   391,    89,    23,    55,
      44,    55,    43,    79,    72,    81,    82,    83,    84,   404,
      50,    64,   425,    79,   426,    56,    55,    57,    94,    95,
     374,    44,   114,   117,    79,   375,    89,    51,   429,   383,
      79,   107,   386,    89,   102,    89,   112,   113,    58,    79,
      81,   107,    83,   307,   273,   291,    79,   164,   192,    79,
      89,   114,   194,   152,   408,   409,   477,   458,   114,   225,
     114,    97,    90,     4,    90,     3,    10,   107,     9,    88,
     111,     9,     4,    92,   107,   114,     8,   149,    22,   192,
       4,     4,   503,   227,   226,     8,    10,    84,    85,    86,
     162,   110,   261,   395,   489,    80,    99,    82,     5,   212,
     217,   104,   246,     4,   478,     4,    79,     8,   212,     8,
     178,   218,   219,   220,   227,   228,    36,    37,    38,    39,
     494,     3,     4,   267,   228,   269,     4,   199,     6,   392,
      15,    37,    17,   246,   100,   101,   102,   103,   332,   252,
       4,   213,     6,   333,   288,   334,     4,   335,     6,   221,
       4,   264,     6,     4,   267,     6,   269,   229,   105,   106,
     264,    36,    37,    40,    41,     3,     4,    40,    41,    88,
      89,     3,     4,    23,    24,   288,    79,   249,     9,     0,
       5,     7,    98,   108,     6,   257,    91,   300,   109,   107,
     262,    87,    55,    62,     6,     6,   300,     5,    79,   271,
      79,    31,     9,    79,    43,    79,     7,    79,     5,   107,
       3,   111,    79,    79,     5,     7,    22,    80,    81,    82,
      83,    84,    85,    86,     9,   297,    89,   111,     5,     5,
      79,    79,     5,   402,    79,   307,    99,   100,   101,   102,
     103,   104,   105,   106,     4,     4,   363,    90,     4,     6,
       8,   114,    79,    90,    42,    79,    79,    90,     4,   358,
      79,   360,    79,    30,     9,   407,     6,     4,     9,    79,
     342,    14,    90,    24,   346,    90,   389,   390,   391,     9,
      79,   424,   451,   396,    23,   389,   390,   391,   387,   361,
       4,   404,   364,     6,   438,     6,    90,    79,     4,     9,
     404,     5,     3,     7,    79,    10,     3,    10,    10,     3,
       6,   424,     3,     0,   413,    10,   507,   281,   434,   366,
     424,   434,   163,   422,   402,   438,    30,   122,   318,   175,
     434,   368,   160,    26,   225,   452,   180,   293,   485,   231,
     446,   485,   189,   183,   379,   232,   463,   233,   238,   242,
      54,   504,    56,   396,    58,    59,    60,    61,    62,   239,
      98,   460,   245,   462,   234,   464,    -1,   235,   467,   240,
     487,    -1,   485,    -1,    -1,    79,   489,    81,    82,    83,
      84,    -1,   244,    87,    -1,   489,    -1,   196,    -1,    93,
      94,    95,    96,   465,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   516,   517,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,     3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,
     112,   113,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,     3,    -1,
       5,    -1,     7,    93,    94,    95,    96,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    30,    -1,    -1,    93,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   112,   113,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    -1,    30,    -1,    93,    94,
      95,    96,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    50,   112,   113,   114,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    90,    30,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   112,   113,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    -1,    30,    -1,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   112,
     113,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,    30,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
     112,   113,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   112,   113,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113
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
     133,   137,   139,   140,   148,   149,   150,   151,   155,   157,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   175,   176,   177,   178,   179,   192,   193,   196,   197,
     198,   206,   207,   210,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   237,
     240,   241,   242,   244,   245,     6,    80,    82,    84,    85,
      86,    89,    99,   100,   101,   102,   103,   104,   105,   106,
     114,   171,   174,   194,   216,   217,   218,   219,     8,    90,
     171,    10,   133,    36,    37,    38,    39,   136,   184,   185,
     186,   187,     5,   150,     5,     5,     5,   171,   187,     3,
     171,   150,    79,     3,   125,   187,   125,   125,     5,    79,
     107,   141,   142,   199,   200,   201,   202,   204,   205,   206,
     184,   134,   187,   187,   172,   150,    79,   236,   235,    63,
      65,   171,   243,   141,   143,   142,   148,   148,   171,     0,
     124,   150,   187,     5,     3,    58,     3,     4,    55,    89,
     114,     7,   175,    94,    95,   143,   195,   234,   187,    88,
      92,   110,    98,   108,   109,   107,    99,   104,   215,   216,
     217,    82,   218,    84,   219,    91,    87,   235,   148,     7,
      43,    56,   111,   173,   175,   177,   240,    62,     6,     6,
     171,     8,    90,    10,     5,   180,   185,    40,    41,   188,
     171,   163,   172,   170,    79,     9,    79,   156,     3,    31,
     152,   154,    79,    40,   188,   189,    79,    79,   187,   199,
       9,   200,   173,    43,    88,    89,   203,     7,   178,   204,
       5,   181,   143,    79,   148,   236,   243,    64,    97,   141,
     171,     3,   172,   179,   179,   179,     8,   171,    55,   194,
     240,   148,   143,   141,   171,   220,   221,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   143,    79,
     143,   238,     5,   239,   243,     8,     7,   175,     8,   171,
     141,   144,   145,     6,    51,   182,   143,   143,     6,   171,
       6,   170,     4,    90,    22,   159,   160,     9,   153,   152,
     111,   183,   183,   183,   143,   129,   198,   173,   202,   141,
     146,   147,   182,    79,   183,   243,    79,     6,   180,     5,
       5,     5,    79,   211,   212,    90,     4,     8,     6,   171,
       8,     8,    79,   213,     4,     6,    90,   190,    79,    79,
     150,     3,   150,     6,   171,    79,   172,   171,    10,   159,
      79,   132,   156,   132,    42,   127,    90,   128,   128,   183,
      10,   198,   213,   214,     4,    30,   135,   183,     9,   183,
     150,     6,   144,   144,   144,   178,     4,   221,   238,     6,
     175,   176,    90,   144,    79,     3,   148,   191,   183,   183,
      14,   150,     6,    90,     6,    23,   158,    24,   161,     4,
      10,   150,     8,   142,   128,   132,     9,     9,   181,   146,
      79,     3,    79,    79,   143,   208,   209,    23,   138,     4,
       6,     6,   211,   172,   181,   150,   150,   172,   150,   171,
      90,   150,    79,     9,   123,   131,   131,   182,     3,    79,
     209,    10,   172,     3,   144,   182,     6,   133,   131,    10,
      10,   135,     3,     6,     3,   150,    10,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   131,   131,   132,   132,   133,
     133,   134,   135,   135,   135,   136,   137,   138,   138,   139,
     139,   140,   141,   141,   142,   143,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   153,   152,
     154,   154,   155,   156,   156,   157,   158,   158,   159,   160,
     160,   161,   161,   162,   163,   163,   164,   164,   164,   164,
     164,   164,   164,   165,   166,   167,   167,   168,   168,   169,
     169,   169,   169,   170,   170,   171,   171,   172,   172,   172,
     172,   173,   173,   174,   174,   174,   174,   175,   175,   175,
     176,   176,   176,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   185,
     185,   186,   186,   187,   187,   187,   187,   188,   188,   189,
     189,   190,   190,   191,   191,   192,   193,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   196,   196,   197,   198,
     198,   198,   199,   199,   200,   200,   201,   201,   202,   202,
     203,   203,   203,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   209,   210,   211,   211,   212,   212,   213,
     213,   213,   214,   214,   215,   215,   216,   216,   216,   216,
     217,   217,   218,   218,   219,   219,   219,   220,   220,   221,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   233,   233,   234,   234,   234,   234,
     234,   234,   234,   235,   235,   235,   235,   235,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   240,   240,
     241,   242,   242,   242,   242,   242,   242,   242,   243,   243,
     243,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     9,     8,     8,     2,     0,
       0,     2,     1,     2,     5,     1,     0,     1,     3,     1,
       2,     4,     0,     2,     2,     5,     6,     0,     2,     1,
       1,     7,     2,     1,     1,     1,     4,     2,     1,     3,
       2,     1,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     4,
       1,     2,     3,     1,     0,     6,     2,     0,     5,     1,
       2,     2,     0,     6,     1,     1,     5,     5,     6,     7,
       7,     9,     5,     3,     2,     5,     7,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     3,     1,     3,     3,
       3,     3,     0,     1,     1,     1,     1,     3,     4,     5,
       2,     3,     2,     5,     4,     4,     1,     1,     1,     4,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     0,     1,
       1,     0,     2,     1,     1,     6,     9,     1,     1,     1,
       1,     1,     7,     5,     5,     4,     1,     2,     3,     1,
       1,     1,     1,     2,     1,     8,     2,     3,     1,     3,
       1,     1,     0,     2,     1,     2,     1,     1,     1,     1,
       2,     3,     1,     2,     7,     3,     1,     1,     2,     1,
       2,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       5,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     3,     3,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     2,     1,     1,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     3,     2,     2
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
#line 167 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2335 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 168 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2341 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 171 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2347 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 172 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2353 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 176 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2359 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 177 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2365 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 178 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2371 "src/parser.c"
    break;

  case 9: /* section: extend_def  */
#line 179 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2377 "src/parser.c"
    break;

  case 10: /* section: enum_def  */
#line 180 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2383 "src/parser.c"
    break;

  case 11: /* section: union_def  */
#line 181 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2389 "src/parser.c"
    break;

  case 12: /* section: fptr_def  */
#line 182 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2395 "src/parser.c"
    break;

  case 13: /* section: type_def  */
#line 183 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2401 "src/parser.c"
    break;

  case 14: /* class_flag: flag modifier  */
#line 186 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2407 "src/parser.c"
    break;

  case 15: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 189 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2418 "src/parser.c"
    break;

  case 16: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 196 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2430 "src/parser.c"
    break;

  case 17: /* class_def: "trait" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 204 "src/gwion.y"
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
#line 2446 "src/parser.c"
    break;

  case 18: /* class_ext: "extends" type_decl_exp  */
#line 216 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2452 "src/parser.c"
    break;

  case 19: /* class_ext: %empty  */
#line 216 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2458 "src/parser.c"
    break;

  case 20: /* traits: %empty  */
#line 217 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2464 "src/parser.c"
    break;

  case 21: /* traits: ":" id_list  */
#line 217 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2470 "src/parser.c"
    break;

  case 22: /* extend_body: func_def  */
#line 219 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2479 "src/parser.c"
    break;

  case 23: /* extend_body: extend_body func_def  */
#line 223 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL))
  }
#line 2488 "src/parser.c"
    break;

  case 24: /* extend_def: "extends" type_decl_exp "{" extend_body "}"  */
#line 229 "src/gwion.y"
                                                        {
//  if($3 && $3->next)
//    { parser_error(&@$, arg, "extensions must define at most trait", 0211); YYERROR;}
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].ast));
//  $$->traits = $3;
}
#line 2499 "src/parser.c"
    break;

  case 26: /* class_body: %empty  */
#line 237 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2505 "src/parser.c"
    break;

  case 27: /* id_list: "<identifier>"  */
#line 239 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2511 "src/parser.c"
    break;

  case 28: /* id_list: id_list "," "<identifier>"  */
#line 240 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2517 "src/parser.c"
    break;

  case 29: /* stmt_list: stmt  */
#line 242 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2523 "src/parser.c"
    break;

  case 30: /* stmt_list: stmt_list stmt  */
#line 243 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2529 "src/parser.c"
    break;

  case 31: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 245 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2536 "src/parser.c"
    break;

  case 32: /* func_effects: %empty  */
#line 248 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2542 "src/parser.c"
    break;

  case 33: /* func_effects: "perform" "<identifier>"  */
#line 248 "src/gwion.y"
                                                { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2548 "src/parser.c"
    break;

  case 34: /* func_effects: func_effects "<identifier>"  */
#line 248 "src/gwion.y"
                                                                                                                     { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2554 "src/parser.c"
    break;

  case 35: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 250 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2561 "src/parser.c"
    break;

  case 36: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 253 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2572 "src/parser.c"
    break;

  case 37: /* typedef_when: %empty  */
#line 260 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2578 "src/parser.c"
    break;

  case 38: /* typedef_when: "when" binary_exp  */
#line 260 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2584 "src/parser.c"
    break;

  case 39: /* type_def_type: "typedef"  */
#line 261 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2590 "src/parser.c"
    break;

  case 40: /* type_def_type: "distinct"  */
#line 261 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2596 "src/parser.c"
    break;

  case 41: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 262 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].id_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2609 "src/parser.c"
    break;

  case 42: /* type_decl_array: type_decl array  */
#line 271 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2615 "src/parser.c"
    break;

  case 44: /* type_decl_exp: type_decl_array  */
#line 273 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2623 "src/parser.c"
    break;

  case 45: /* type_decl_empty: type_decl_array  */
#line 277 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2631 "src/parser.c"
    break;

  case 46: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 282 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2637 "src/parser.c"
    break;

  case 47: /* arg: type_decl_array arg_decl  */
#line 283 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2643 "src/parser.c"
    break;

  case 48: /* arg_list: arg  */
#line 285 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2649 "src/parser.c"
    break;

  case 49: /* arg_list: arg_list "," arg  */
#line 286 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2659 "src/parser.c"
    break;

  case 50: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 292 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2665 "src/parser.c"
    break;

  case 51: /* fptr_list: fptr_arg  */
#line 293 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2671 "src/parser.c"
    break;

  case 52: /* fptr_list: fptr_list "," fptr_arg  */
#line 293 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2677 "src/parser.c"
    break;

  case 53: /* code_stmt: "{" "}"  */
#line 296 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2683 "src/parser.c"
    break;

  case 54: /* code_stmt: "{" stmt_list "}"  */
#line 297 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2689 "src/parser.c"
    break;

  case 55: /* stmt_pp: "<comment>"  */
#line 301 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2695 "src/parser.c"
    break;

  case 56: /* stmt_pp: "#include"  */
#line 302 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2701 "src/parser.c"
    break;

  case 57: /* stmt_pp: "#define"  */
#line 303 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2707 "src/parser.c"
    break;

  case 58: /* stmt_pp: "#pragma"  */
#line 304 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2713 "src/parser.c"
    break;

  case 59: /* stmt_pp: "#undef"  */
#line 305 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2719 "src/parser.c"
    break;

  case 60: /* stmt_pp: "#ifdef"  */
#line 306 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2725 "src/parser.c"
    break;

  case 61: /* stmt_pp: "#ifndef"  */
#line 307 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2731 "src/parser.c"
    break;

  case 62: /* stmt_pp: "#else"  */
#line 308 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2737 "src/parser.c"
    break;

  case 63: /* stmt_pp: "#if"  */
#line 309 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2743 "src/parser.c"
    break;

  case 64: /* stmt_pp: "\n"  */
#line 310 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2749 "src/parser.c"
    break;

  case 65: /* stmt_pp: "import"  */
#line 311 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_import, (yyvsp[0].sval), (yyloc)); }
#line 2755 "src/parser.c"
    break;

  case 77: /* retry_stmt: "retry" ";"  */
#line 328 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2765 "src/parser.c"
    break;

  case 78: /* $@1: %empty  */
#line 333 "src/gwion.y"
                  { arg->handling = true; }
#line 2771 "src/parser.c"
    break;

  case 79: /* handler: "handle" $@1 opt_id stmt  */
#line 333 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2777 "src/parser.c"
    break;

  case 81: /* handler_list: handler_list handler  */
#line 335 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list)->xid)
        { parser_error(&(yylsp[-1]), arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        (yyval.handler_list) = (yyvsp[-1].handler_list);
        (yyvsp[-1].handler_list)->next = (yyvsp[0].handler_list);
  }
#line 2788 "src/parser.c"
    break;

  case 82: /* try_stmt: "try" stmt handler_list  */
#line 341 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2794 "src/parser.c"
    break;

  case 84: /* opt_id: %empty  */
#line 343 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2800 "src/parser.c"
    break;

  case 85: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 346 "src/gwion.y"
                                       {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2810 "src/parser.c"
    break;

  case 86: /* when_exp: "when" exp  */
#line 352 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2816 "src/parser.c"
    break;

  case 87: /* when_exp: %empty  */
#line 352 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 2822 "src/parser.c"
    break;

  case 88: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 355 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2835 "src/parser.c"
    break;

  case 89: /* match_list: match_case_stmt  */
#line 365 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2841 "src/parser.c"
    break;

  case 90: /* match_list: match_list match_case_stmt  */
#line 366 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2847 "src/parser.c"
    break;

  case 91: /* where_stmt: "where" stmt  */
#line 368 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2853 "src/parser.c"
    break;

  case 92: /* where_stmt: %empty  */
#line 368 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 2859 "src/parser.c"
    break;

  case 93: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 370 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2872 "src/parser.c"
    break;

  case 94: /* flow: "while"  */
#line 380 "src/gwion.y"
            { (yyval.ival) = ae_stmt_while; }
#line 2878 "src/parser.c"
    break;

  case 95: /* flow: "until"  */
#line 381 "src/gwion.y"
            { (yyval.ival) = ae_stmt_until; }
#line 2884 "src/parser.c"
    break;

  case 96: /* loop_stmt: flow "(" exp ")" stmt  */
#line 386 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2890 "src/parser.c"
    break;

  case 97: /* loop_stmt: "do" stmt flow exp ";"  */
#line 388 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2896 "src/parser.c"
    break;

  case 98: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 390 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2902 "src/parser.c"
    break;

  case 99: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 392 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2908 "src/parser.c"
    break;

  case 100: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 394 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2914 "src/parser.c"
    break;

  case 101: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 396 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
    }
#line 2924 "src/parser.c"
    break;

  case 102: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 402 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2930 "src/parser.c"
    break;

  case 103: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 405 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2936 "src/parser.c"
    break;

  case 104: /* defer_stmt: "defer" stmt  */
#line 407 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2942 "src/parser.c"
    break;

  case 105: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 411 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2948 "src/parser.c"
    break;

  case 106: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 413 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2954 "src/parser.c"
    break;

  case 107: /* breaks: "break"  */
#line 416 "src/gwion.y"
                    { (yyval.ival) = ae_stmt_break; }
#line 2960 "src/parser.c"
    break;

  case 108: /* breaks: "continue"  */
#line 416 "src/gwion.y"
                                                        { (yyval.ival) = ae_stmt_continue; }
#line 2966 "src/parser.c"
    break;

  case 109: /* jump_stmt: "return" exp ";"  */
#line 418 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2972 "src/parser.c"
    break;

  case 110: /* jump_stmt: "return" ";"  */
#line 419 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2978 "src/parser.c"
    break;

  case 111: /* jump_stmt: breaks "<integer>" ";"  */
#line 420 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2984 "src/parser.c"
    break;

  case 112: /* jump_stmt: breaks ";"  */
#line 421 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2990 "src/parser.c"
    break;

  case 113: /* exp_stmt: exp ";"  */
#line 425 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2996 "src/parser.c"
    break;

  case 114: /* exp_stmt: ";"  */
#line 426 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 3002 "src/parser.c"
    break;

  case 115: /* exp: binary_exp  */
#line 430 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 3008 "src/parser.c"
    break;

  case 116: /* exp: exp "," binary_exp  */
#line 431 "src/gwion.y"
                       { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 3014 "src/parser.c"
    break;

  case 118: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 436 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3020 "src/parser.c"
    break;

  case 119: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 437 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3026 "src/parser.c"
    break;

  case 120: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 438 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3032 "src/parser.c"
    break;

  case 121: /* call_template: ":[" type_list "]"  */
#line 441 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3038 "src/parser.c"
    break;

  case 122: /* call_template: %empty  */
#line 441 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 3044 "src/parser.c"
    break;

  case 127: /* array_exp: "[" exp "]"  */
#line 446 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3050 "src/parser.c"
    break;

  case 128: /* array_exp: "[" exp "]" array_exp  */
#line 447 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3059 "src/parser.c"
    break;

  case 129: /* array_exp: "[" exp "]" "[" "]"  */
#line 451 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 3065 "src/parser.c"
    break;

  case 130: /* array_empty: "[" "]"  */
#line 455 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3071 "src/parser.c"
    break;

  case 131: /* array_empty: array_empty "[" "]"  */
#line 456 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3077 "src/parser.c"
    break;

  case 132: /* array_empty: array_empty array_exp  */
#line 457 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 3083 "src/parser.c"
    break;

  case 133: /* range: "[" exp ":" exp "]"  */
#line 461 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 3089 "src/parser.c"
    break;

  case 134: /* range: "[" exp ":" "]"  */
#line 462 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3095 "src/parser.c"
    break;

  case 135: /* range: "[" ":" exp "]"  */
#line 463 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3101 "src/parser.c"
    break;

  case 139: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 468 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3107 "src/parser.c"
    break;

  case 140: /* func_args: "(" arg_list  */
#line 470 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3113 "src/parser.c"
    break;

  case 141: /* func_args: "("  */
#line 470 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 3119 "src/parser.c"
    break;

  case 142: /* fptr_args: "(" fptr_list  */
#line 471 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3125 "src/parser.c"
    break;

  case 143: /* fptr_args: "("  */
#line 471 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 3131 "src/parser.c"
    break;

  case 144: /* arg_type: "..." ")"  */
#line 472 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 3137 "src/parser.c"
    break;

  case 145: /* arg_type: ")"  */
#line 472 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 3143 "src/parser.c"
    break;

  case 146: /* decl_template: ":[" id_list "]"  */
#line 474 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 3149 "src/parser.c"
    break;

  case 147: /* decl_template: %empty  */
#line 474 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 3155 "src/parser.c"
    break;

  case 148: /* global: "global"  */
#line 476 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3161 "src/parser.c"
    break;

  case 149: /* storage_flag: "static"  */
#line 478 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3167 "src/parser.c"
    break;

  case 151: /* access_flag: "private"  */
#line 480 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3173 "src/parser.c"
    break;

  case 152: /* access_flag: "protect"  */
#line 481 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3179 "src/parser.c"
    break;

  case 153: /* flag: access_flag  */
#line 484 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3185 "src/parser.c"
    break;

  case 154: /* flag: storage_flag  */
#line 485 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3191 "src/parser.c"
    break;

  case 155: /* flag: access_flag storage_flag  */
#line 486 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3197 "src/parser.c"
    break;

  case 156: /* flag: %empty  */
#line 487 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3203 "src/parser.c"
    break;

  case 157: /* final: "final"  */
#line 490 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3209 "src/parser.c"
    break;

  case 158: /* final: %empty  */
#line 490 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3215 "src/parser.c"
    break;

  case 159: /* modifier: "abstract"  */
#line 492 "src/gwion.y"
                     { (yyval.flag) = ae_flag_abstract; }
#line 3221 "src/parser.c"
    break;

  case 161: /* func_trait: %empty  */
#line 494 "src/gwion.y"
            { (yyval.sym) = 0; }
#line 3227 "src/parser.c"
    break;

  case 162: /* func_trait: ":" "<identifier>"  */
#line 494 "src/gwion.y"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 3233 "src/parser.c"
    break;

  case 164: /* func_code: ";"  */
#line 495 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3239 "src/parser.c"
    break;

  case 165: /* func_def_base: "fun" func_base func_args arg_type func_trait func_code  */
#line 497 "src/gwion.y"
                                                            {
    (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
    (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-4].func_base), (yyvsp[0].stmt));
    (yyval.func_def)->trait = (yyvsp[-1].sym);
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-4].func_base), abstract);
    }
  }
#line 3253 "src/parser.c"
    break;

  case 166: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 509 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3265 "src/parser.c"
    break;

  case 172: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 520 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3271 "src/parser.c"
    break;

  case 173: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 522 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3277 "src/parser.c"
    break;

  case 174: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 524 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3286 "src/parser.c"
    break;

  case 175: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 529 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3295 "src/parser.c"
    break;

  case 176: /* operator: "operator"  */
#line 534 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3301 "src/parser.c"
    break;

  case 177: /* operator: "operator" global  */
#line 534 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3307 "src/parser.c"
    break;

  case 178: /* op_def: operator op_base code_stmt  */
#line 536 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3313 "src/parser.c"
    break;

  case 181: /* func_def: op_def  */
#line 538 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3319 "src/parser.c"
    break;

  case 182: /* ref: "&"  */
#line 540 "src/gwion.y"
         { (yyval.uval) = 1; }
#line 3325 "src/parser.c"
    break;

  case 183: /* ref: "&" ref  */
#line 540 "src/gwion.y"
                               { (yyval.uval) = 1 + (yyvsp[0].uval); }
#line 3331 "src/parser.c"
    break;

  case 184: /* type_decl_base: "<identifier>"  */
#line 543 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3337 "src/parser.c"
    break;

  case 185: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 544 "src/gwion.y"
                                                                                     {
      const Symbol name = sig_name(arg, (yylsp[-5]).first);
      (yyval.type_decl) = new_type_decl(mpool(arg), name, (yylsp[-7]));
      Func_Base *fb = new_func_base(mpool(arg), (yyvsp[-5].type_decl), name, NULL, (yyvsp[-6].flag), (yylsp[-7]));
      if((yyvsp[-4].id_list))
        fb->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      fb->args = (yyvsp[-3].arg_list);
      fb->fbflag |= (yyvsp[-2].fbflag);
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = (yyvsp[-1].vector).ptr;
      (yyval.type_decl)->fptr = fptr;
  }
#line 3354 "src/parser.c"
    break;

  case 186: /* type_decl_tmpl: type_decl_base call_template  */
#line 559 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3360 "src/parser.c"
    break;

  case 187: /* type_decl_tmpl: ref type_decl_base call_template  */
#line 560 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = (yyvsp[-2].uval); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3366 "src/parser.c"
    break;

  case 189: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 565 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3372 "src/parser.c"
    break;

  case 190: /* option: "?"  */
#line 568 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3378 "src/parser.c"
    break;

  case 191: /* option: OPTIONS  */
#line 568 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3384 "src/parser.c"
    break;

  case 192: /* option: %empty  */
#line 568 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3390 "src/parser.c"
    break;

  case 193: /* type_decl_opt: type_decl_noflag option  */
#line 569 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3396 "src/parser.c"
    break;

  case 195: /* type_decl: type_decl_flag type_decl_opt  */
#line 570 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3402 "src/parser.c"
    break;

  case 196: /* type_decl_flag: "late"  */
#line 573 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3408 "src/parser.c"
    break;

  case 197: /* type_decl_flag: "const"  */
#line 574 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3414 "src/parser.c"
    break;

  case 198: /* type_decl_flag2: "var"  */
#line 576 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3420 "src/parser.c"
    break;

  case 200: /* union_decl: "<identifier>" ";"  */
#line 579 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3429 "src/parser.c"
    break;

  case 201: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 583 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3435 "src/parser.c"
    break;

  case 203: /* union_list: union_decl union_list  */
#line 586 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3441 "src/parser.c"
    break;

  case 204: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 589 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3453 "src/parser.c"
    break;

  case 205: /* var_decl_list: var_decl "," var_decl_list  */
#line 599 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3459 "src/parser.c"
    break;

  case 206: /* var_decl_list: var_decl  */
#line 600 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3465 "src/parser.c"
    break;

  case 207: /* var_decl: "<identifier>"  */
#line 603 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3471 "src/parser.c"
    break;

  case 208: /* var_decl: "<identifier>" array  */
#line 604 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3477 "src/parser.c"
    break;

  case 209: /* arg_decl: "<identifier>"  */
#line 606 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3483 "src/parser.c"
    break;

  case 210: /* arg_decl: "<identifier>" array_empty  */
#line 607 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3489 "src/parser.c"
    break;

  case 211: /* arg_decl: "<identifier>" array_exp  */
#line 608 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3495 "src/parser.c"
    break;

  case 213: /* fptr_arg_decl: %empty  */
#line 609 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3501 "src/parser.c"
    break;

  case 227: /* opt_exp: exp  */
#line 617 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3507 "src/parser.c"
    break;

  case 228: /* opt_exp: %empty  */
#line 617 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3513 "src/parser.c"
    break;

  case 230: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 620 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3519 "src/parser.c"
    break;

  case 231: /* con_exp: log_or_exp "?:" con_exp  */
#line 622 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3525 "src/parser.c"
    break;

  case 233: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 624 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3531 "src/parser.c"
    break;

  case 235: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 625 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3537 "src/parser.c"
    break;

  case 237: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 626 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3543 "src/parser.c"
    break;

  case 239: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 627 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3549 "src/parser.c"
    break;

  case 241: /* and_exp: and_exp "&" eq_exp  */
#line 628 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3555 "src/parser.c"
    break;

  case 243: /* eq_exp: eq_exp eq_op rel_exp  */
#line 629 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3561 "src/parser.c"
    break;

  case 245: /* rel_exp: rel_exp rel_op shift_exp  */
#line 630 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3567 "src/parser.c"
    break;

  case 247: /* shift_exp: shift_exp shift_op add_exp  */
#line 631 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3573 "src/parser.c"
    break;

  case 249: /* add_exp: add_exp add_op mul_exp  */
#line 632 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3579 "src/parser.c"
    break;

  case 251: /* mul_exp: mul_exp mul_op dur_exp  */
#line 633 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3585 "src/parser.c"
    break;

  case 253: /* dur_exp: dur_exp "::" cast_exp  */
#line 634 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3591 "src/parser.c"
    break;

  case 255: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 637 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3597 "src/parser.c"
    break;

  case 264: /* unary_exp: unary_op unary_exp  */
#line 644 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3603 "src/parser.c"
    break;

  case 265: /* unary_exp: OPID_E unary_exp  */
#line 645 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3609 "src/parser.c"
    break;

  case 266: /* unary_exp: "new" type_decl_exp  */
#line 646 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3615 "src/parser.c"
    break;

  case 267: /* unary_exp: "spork" code_stmt  */
#line 647 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3621 "src/parser.c"
    break;

  case 268: /* unary_exp: "fork" code_stmt  */
#line 648 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3627 "src/parser.c"
    break;

  case 269: /* unary_exp: "$" type_decl_empty  */
#line 649 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3633 "src/parser.c"
    break;

  case 270: /* lambda_list: "<identifier>"  */
#line 652 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3639 "src/parser.c"
    break;

  case 271: /* lambda_list: "<identifier>" lambda_list  */
#line 653 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3645 "src/parser.c"
    break;

  case 272: /* lambda_arg: "\\" lambda_list  */
#line 654 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3651 "src/parser.c"
    break;

  case 273: /* lambda_arg: "\\"  */
#line 654 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3657 "src/parser.c"
    break;

  case 274: /* type_list: type_decl_empty  */
#line 657 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3663 "src/parser.c"
    break;

  case 275: /* type_list: type_decl_empty "," type_list  */
#line 658 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3669 "src/parser.c"
    break;

  case 276: /* call_paren: "(" exp ")"  */
#line 662 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3675 "src/parser.c"
    break;

  case 277: /* call_paren: "(" ")"  */
#line 662 "src/gwion.y"
                                                                   { (yyval.exp) = NULL; }
#line 3681 "src/parser.c"
    break;

  case 280: /* dot_exp: post_exp "." "<identifier>"  */
#line 666 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3694 "src/parser.c"
    break;

  case 282: /* post_exp: post_exp array_exp  */
#line 677 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3700 "src/parser.c"
    break;

  case 283: /* post_exp: post_exp range  */
#line 679 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3706 "src/parser.c"
    break;

  case 284: /* post_exp: post_exp call_template call_paren  */
#line 681 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3713 "src/parser.c"
    break;

  case 285: /* post_exp: post_exp post_op  */
#line 684 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3719 "src/parser.c"
    break;

  case 286: /* post_exp: post_exp OPID_E  */
#line 686 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3725 "src/parser.c"
    break;

  case 287: /* post_exp: dot_exp  */
#line 687 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3731 "src/parser.c"
    break;

  case 288: /* interp_exp: "<interp string>`"  */
#line 691 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3737 "src/parser.c"
    break;

  case 289: /* interp_exp: "<interp string>" interp_exp  */
#line 692 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3743 "src/parser.c"
    break;

  case 290: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 693 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3749 "src/parser.c"
    break;

  case 291: /* interp: "`" interp_exp  */
#line 695 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3755 "src/parser.c"
    break;

  case 292: /* interp: interp "`" interp_exp  */
#line 696 "src/gwion.y"
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
#line 3770 "src/parser.c"
    break;

  case 293: /* prim_exp: "<identifier>"  */
#line 708 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3776 "src/parser.c"
    break;

  case 294: /* prim_exp: "<integer>"  */
#line 709 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3782 "src/parser.c"
    break;

  case 295: /* prim_exp: FLOATT  */
#line 710 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3788 "src/parser.c"
    break;

  case 296: /* prim_exp: interp  */
#line 711 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3794 "src/parser.c"
    break;

  case 297: /* prim_exp: "<litteral string>"  */
#line 712 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3800 "src/parser.c"
    break;

  case 298: /* prim_exp: "<litteral char>"  */
#line 713 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3806 "src/parser.c"
    break;

  case 299: /* prim_exp: array  */
#line 714 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3812 "src/parser.c"
    break;

  case 300: /* prim_exp: range  */
#line 715 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3818 "src/parser.c"
    break;

  case 301: /* prim_exp: "<<<" exp ">>>"  */
#line 716 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3824 "src/parser.c"
    break;

  case 302: /* prim_exp: "(" exp ")"  */
#line 717 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3830 "src/parser.c"
    break;

  case 303: /* prim_exp: lambda_arg code_stmt  */
#line 718 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3836 "src/parser.c"
    break;

  case 304: /* prim_exp: "(" op_op ")"  */
#line 719 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 3842 "src/parser.c"
    break;

  case 305: /* prim_exp: "perform" "<identifier>"  */
#line 720 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 3848 "src/parser.c"
    break;

  case 306: /* prim_exp: "(" ")"  */
#line 721 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3854 "src/parser.c"
    break;


#line 3858 "src/parser.c"

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

#line 723 "src/gwion.y"

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
