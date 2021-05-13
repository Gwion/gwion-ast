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
  YYSYMBOL_type_decl_tmpl = 200,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 201,         /* type_decl_noflag  */
  YYSYMBOL_option = 202,                   /* option  */
  YYSYMBOL_type_decl_opt = 203,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 204,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 205,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 206,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 207,               /* union_decl  */
  YYSYMBOL_union_list = 208,               /* union_list  */
  YYSYMBOL_union_def = 209,                /* union_def  */
  YYSYMBOL_var_decl_list = 210,            /* var_decl_list  */
  YYSYMBOL_var_decl = 211,                 /* var_decl  */
  YYSYMBOL_arg_decl = 212,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 213,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 214,                    /* eq_op  */
  YYSYMBOL_rel_op = 215,                   /* rel_op  */
  YYSYMBOL_shift_op = 216,                 /* shift_op  */
  YYSYMBOL_add_op = 217,                   /* add_op  */
  YYSYMBOL_mul_op = 218,                   /* mul_op  */
  YYSYMBOL_opt_exp = 219,                  /* opt_exp  */
  YYSYMBOL_con_exp = 220,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 221,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 222,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 223,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 224,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 225,                  /* and_exp  */
  YYSYMBOL_eq_exp = 226,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 227,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 228,                /* shift_exp  */
  YYSYMBOL_add_exp = 229,                  /* add_exp  */
  YYSYMBOL_mul_exp = 230,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 231,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 232,                 /* cast_exp  */
  YYSYMBOL_unary_op = 233,                 /* unary_op  */
  YYSYMBOL_unary_exp = 234,                /* unary_exp  */
  YYSYMBOL_lambda_list = 235,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 236,               /* lambda_arg  */
  YYSYMBOL_type_list = 237,                /* type_list  */
  YYSYMBOL_call_paren = 238,               /* call_paren  */
  YYSYMBOL_post_op = 239,                  /* post_op  */
  YYSYMBOL_dot_exp = 240,                  /* dot_exp  */
  YYSYMBOL_post_exp = 241,                 /* post_exp  */
  YYSYMBOL_interp_exp = 242,               /* interp_exp  */
  YYSYMBOL_interp = 243,                   /* interp  */
  YYSYMBOL_prim_exp = 244                  /* prim_exp  */
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
#define YYFINAL  207
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1729

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  519

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
       0,   166,   166,   167,   170,   171,   175,   176,   177,   178,
     179,   180,   181,   182,   185,   187,   194,   202,   215,   215,
     216,   216,   218,   222,   228,   236,   236,   238,   239,   241,
     242,   244,   247,   247,   247,   249,   252,   259,   259,   260,
     260,   261,   270,   270,   272,   276,   281,   282,   284,   285,
     291,   292,   292,   295,   296,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   327,   332,   332,
     333,   334,   340,   342,   342,   345,   351,   351,   354,   364,
     365,   367,   367,   369,   379,   380,   384,   386,   388,   390,
     392,   394,   400,   404,   406,   409,   411,   415,   415,   417,
     418,   419,   420,   424,   425,   429,   430,   434,   435,   436,
     437,   440,   440,   442,   442,   442,   442,   445,   446,   450,
     454,   455,   456,   460,   461,   462,   465,   465,   466,   467,
     469,   469,   470,   470,   471,   471,   473,   473,   475,   477,
     477,   479,   480,   483,   484,   485,   486,   489,   489,   491,
     491,   493,   493,   494,   494,   496,   507,   516,   516,   516,
     516,   516,   518,   520,   522,   527,   533,   533,   534,   537,
     537,   537,   539,   539,   541,   542,   546,   547,   550,   550,
     550,   551,   552,   552,   555,   556,   558,   558,   561,   565,
     567,   568,   571,   581,   582,   585,   586,   588,   589,   590,
     591,   591,   593,   593,   594,   594,   594,   594,   595,   595,
     596,   596,   597,   597,   597,   599,   599,   600,   601,   603,
     606,   606,   607,   607,   608,   608,   609,   609,   610,   610,
     611,   611,   612,   612,   613,   613,   614,   614,   615,   615,
     616,   616,   618,   618,   621,   621,   621,   622,   622,   622,
     622,   625,   626,   627,   628,   629,   630,   631,   634,   635,
     636,   636,   639,   640,   644,   644,   646,   646,   648,   657,
     658,   660,   662,   665,   667,   669,   673,   674,   675,   677,
     678,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   701,   702,   703
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
  "op_def", "func_def", "ref", "type_decl_tmpl", "type_decl_noflag",
  "option", "type_decl_opt", "type_decl", "type_decl_flag",
  "type_decl_flag2", "union_decl", "union_list", "union_def",
  "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl", "eq_op",
  "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
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

#define YYPACT_NINF (-399)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-223)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     499,  -399,   968,  1029,   610,   132,  -399,    82,  -399,   823,
    -399,   108,   135,   149,  1572,   132,   258,  -399,  -399,   823,
      58,   161,   132,   132,   132,    31,   142,  -399,  -399,   132,
     132,  -399,  1572,   823,   129,  1616,  -399,  -399,  -399,  -399,
    -399,  1090,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,    31,    31,
     163,   163,  1572,  -399,  -399,   217,   499,  -399,  -399,  -399,
     823,  -399,   132,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,   218,  -399,  -399,  -399,  -399,    54,  -399,  -399,    93,
       1,  -399,   221,  -399,  -399,  -399,  -399,  -399,   310,  -399,
    -399,  -399,   132,  -399,  -399,   -12,   127,   126,   134,   140,
      12,    96,    79,    71,   104,   150,   162,  1616,  -399,   163,
    -399,  -399,    23,   188,  -399,  -399,  -399,   245,   246,  -399,
    -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
    -399,   119,  -399,   247,  -399,  -399,  -399,  -399,  -399,  1572,
      36,  -399,   721,  -399,  -399,  -399,  -399,   249,  -399,  -399,
     164,   179,  1572,   165,  1572,   908,   176,    80,   178,  -399,
     201,   228,  -399,  -399,   181,   191,   183,   185,   156,   159,
    -399,   259,   190,   229,   147,  -399,   264,   -15,  -399,   268,
      31,   196,    30,  -399,   129,  -399,  -399,  1090,  -399,    44,
    -399,  -399,  -399,  -399,  -399,  -399,    25,  -399,  -399,  -399,
      31,  1572,  -399,   274,  -399,  1572,  1572,  1572,  1572,  1151,
    -399,  -399,  -399,   382,   163,    31,    31,  1572,  1616,  1616,
    1616,  1616,  1616,  1616,  -399,  -399,  1616,  1616,  1616,  -399,
    1616,  -399,  1616,  1616,    31,  -399,  -399,  1211,   199,  -399,
      31,   275,  -399,  -399,  -399,  1090,  -399,  -399,   152,   272,
    1272,  -399,    31,    67,  -399,    31,  -399,    31,   169,  1572,
      13,   908,    43,   260,  -399,   276,  -399,  -399,  -399,   228,
     170,  -399,  -399,  -399,   170,   170,  -399,  -399,    51,   156,
     -15,  -399,  -399,  -399,  1332,  -399,  -399,    31,    67,   204,
     170,  -399,  -399,  -399,  1090,  -399,   207,   205,  -399,     1,
    -399,  -399,  -399,  -399,   155,   249,   282,   285,  -399,   286,
     213,   290,   206,  -399,   127,   126,   134,   140,    12,    96,
      79,    71,   104,   150,   162,  -399,  -399,   291,   289,  1392,
    -399,  -399,  -399,  1452,  -399,  -399,   157,   220,  -399,   296,
    -399,   295,   212,   224,   225,   823,   234,   823,  1512,   226,
    1572,  1572,  -399,    72,   227,   178,  -399,   227,   265,   219,
     219,    49,  -399,  -399,  -399,   220,  -399,   306,   281,   170,
     312,  -399,   170,   823,   316,    31,    31,    31,   264,  -399,
     320,  1616,    31,  -399,  -399,   208,  -399,  -399,   264,   235,
      31,  -399,   248,   146,   170,   170,   314,  -399,  -399,   823,
     209,   236,    14,    63,   305,  -399,  -399,   148,   823,   158,
      31,   219,   227,   321,   323,  -399,  -399,  -399,  -399,    31,
     255,    35,  -399,    50,   313,  -399,  -399,   331,   332,   337,
    -399,   213,  -399,  -399,  -399,  -399,   221,  1572,  -399,  -399,
    -399,  -399,  -399,   268,  -399,   823,  -399,   823,  1572,   823,
    1572,   254,   823,  -399,   270,  -399,  -399,  -399,  -399,   338,
     346,   499,   499,  -399,  -399,  -399,  -399,    20,   278,    50,
     345,  1572,   355,    31,  -399,  -399,  -399,     1,    67,  -399,
    -399,    16,  -399,   290,   823,  -399,  -399,   499,   499,   349,
     363,  -399,   362,  -399,  -399,     1,  -399,   369,   373,   823,
     823,   368,  -399,  -399,  -399,  -399,  -399,  -399,  -399
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   114,     0,     0,     0,   156,   196,     0,    94,     0,
      95,     0,     0,     0,     0,   156,     0,   107,   108,     0,
       0,     0,   156,   156,   156,     0,   176,    39,    40,   156,
     156,   195,     0,     0,   271,     0,   194,   292,   293,   295,
     296,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   291,   276,   254,   277,   255,     0,     0,
     258,   259,     0,   260,   257,     0,     2,     4,     8,     9,
       6,    12,   156,    13,    69,    72,    29,    76,    75,    10,
      70,     0,    67,    73,    74,    68,     0,    71,    66,     0,
     115,   136,   137,   298,   297,   117,   179,   180,     0,   181,
       7,   197,   156,    11,   138,   227,   230,   232,   234,   236,
     238,   240,   242,   244,   246,   248,   250,     0,   252,     0,
     256,   285,   261,   294,   279,   304,   220,   254,   255,   223,
     224,   126,   123,   217,   215,   216,   214,   124,   218,   219,
     125,     0,   167,     0,   169,   168,   171,   170,   130,     0,
       0,    53,     0,   149,   148,   151,   152,     0,   150,   154,
     153,   158,     0,     0,     0,     0,     0,     0,    84,   110,
       0,     0,   303,    77,     0,   158,     0,     0,   122,   182,
      44,     0,     0,   186,   190,   192,    43,     0,   177,     0,
       0,     0,     0,   104,   268,   270,   263,     0,   286,     0,
     289,    45,   267,   264,   265,   266,     0,     1,     5,    30,
       0,     0,   112,     0,   113,     0,     0,     0,     0,     0,
     132,   258,   259,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,   212,   213,     0,     0,     0,   221,
       0,   222,     0,     0,     0,   262,   301,     0,     0,   284,
       0,     0,   280,   281,   283,     0,   300,   302,     0,   127,
       0,    54,   141,     0,   155,     0,   157,     0,     0,     0,
       0,     0,     0,     0,    83,     0,   109,    78,    80,    82,
     147,   159,   160,    14,   147,   147,   184,   183,     0,   122,
       0,   188,   189,   191,     0,    42,   193,   143,     0,     0,
     147,   103,   269,   287,     0,   299,     0,     0,   111,   116,
     118,   120,   119,   131,     0,     0,     0,     0,   178,     0,
       0,   225,     0,   229,   231,   233,   235,   237,   239,   241,
     243,   245,   247,   249,   251,   253,   278,   272,     0,     0,
     282,   290,   135,     0,   128,   134,     0,     0,    48,   140,
     145,     0,   161,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,    84,    81,     0,    19,    20,
      20,     0,    22,   185,   187,   211,    51,   142,    32,   147,
       0,   288,   147,     0,     0,     0,     0,     0,   205,   139,
     204,     0,     0,   121,   275,     0,   129,   133,   207,    47,
       0,   144,     0,     0,   147,   147,   105,    97,   102,     0,
       0,     0,     0,    87,    92,    90,    27,     0,     0,     0,
       0,    20,     0,     0,     0,    24,    23,   210,    50,     0,
       0,     0,    31,     0,    37,    96,   175,     0,     0,     0,
     206,     0,   228,   273,   274,   209,   208,     0,    49,   162,
     164,   163,   165,     0,    35,     0,    98,     0,     0,     0,
       0,     0,     0,    93,     0,    85,    79,   146,    18,     0,
      21,    26,    26,    52,    33,    36,    34,   122,     0,   200,
       0,     0,     0,     0,   173,   174,   203,    46,     0,   106,
      99,     0,   100,    86,     0,    91,    28,    26,    25,     0,
       0,   198,     0,   201,   202,    38,    41,     0,     0,     0,
      88,     0,    16,    17,   199,   172,   166,   101,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -399,  -399,   379,   -62,   222,  -399,  -399,  -312,  -399,  -399,
    -398,  -321,    -3,  -399,  -399,  -399,  -399,  -399,  -399,  -399,
      -4,   -54,   -49,  -335,  -399,   -44,  -399,   -47,  -399,    -9,
    -399,   101,  -399,  -399,  -399,    21,  -399,  -399,    32,  -399,
    -399,  -399,   238,  -399,  -399,  -399,  -399,  -399,  -399,  -132,
      29,   -29,  -106,  -399,   -85,   -10,   277,  -178,   -24,    83,
     -51,  -281,  -258,   377,   251,  -399,    48,   232,  -399,  -399,
    -399,  -399,  -399,   189,  -399,  -399,  -399,  -254,   240,  -399,
     118,  -399,   233,  -399,   -23,  -399,  -399,   -66,  -399,   -27,
    -399,    40,  -399,  -399,  -105,  -101,   -98,  -102,  -399,  -210,
    -399,   192,   194,   195,   200,   198,   197,   202,   203,   187,
     186,   211,   336,    19,   241,  -399,    46,  -399,   -81,  -399,
    -399,  -172,  -399,  -399
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    65,   498,    67,   174,    68,   421,   423,   371,    69,
     499,   417,    70,   189,   431,   157,    71,   482,    72,    73,
     201,   181,   337,   348,   349,   376,   377,    74,    75,    76,
      77,   278,   365,   279,    78,   275,    79,   461,   362,   363,
     463,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,   286,   142,    91,    92,    93,    94,    95,   263,
     298,   352,   368,   158,   159,   160,   175,   267,   283,   403,
     452,    96,    97,   143,   224,    98,    99,   100,   182,   183,
     184,   293,   185,   186,   101,   102,   479,   480,   103,   389,
     390,   399,   428,   236,   144,   145,   146,   147,   322,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   195,   119,   338,   340,   120,   121,
     122,   200,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,   152,   187,   192,   208,   203,   237,   220,   295,   202,
     171,   238,   242,   204,   205,   240,   251,   378,   323,   357,
     459,   180,   509,   501,   193,   303,   369,   370,  -122,   215,
     247,   141,   150,   271,   372,   187,   187,   252,   475,     4,
     215,   254,   380,   167,   259,   170,   419,   359,   215,   223,
     437,   438,   439,   161,   196,   180,   216,   212,   424,   425,
       5,   209,     5,   168,   178,   448,   248,   215,   216,   216,
     199,   216,   246,   350,   500,   187,   227,   190,   191,   249,
     228,    31,   414,   341,   215,   216,   460,   162,    36,   273,
     217,   206,   179,    26,   361,    26,   214,   215,   229,   511,
      31,   470,   217,   217,    54,   217,    56,    36,   304,   469,
     178,   234,   213,   164,   476,   218,   235,   426,   351,   217,
     210,   432,   305,   215,   434,   256,   260,   218,   218,   477,
     218,   250,   381,   360,   250,   270,   245,   172,   179,   358,
     165,   299,   317,   209,   218,   301,   453,   454,   507,   450,
     226,   126,   464,   239,   166,     4,   215,   179,   465,   215,
     342,   215,   464,   259,   173,   397,   467,   187,   153,   154,
     155,   156,     4,   215,   344,   355,   319,   318,   258,   154,
       8,   442,    10,   373,   138,   139,   309,   187,   241,   129,
     130,   268,   310,   311,   312,   335,   133,   134,   135,   136,
     153,   154,   187,   187,   276,   215,   306,   508,   194,   215,
     440,   383,   215,   215,   444,   457,   353,   207,   354,   265,
     266,   187,   320,   211,   237,   230,   199,   187,   219,   238,
     242,   281,   266,   240,   231,   291,   292,   407,   215,   187,
     307,   243,   187,   232,   187,   176,   177,   233,   314,   244,
     255,  -221,  -222,   257,   262,   272,   321,   274,   347,   277,
     280,   169,   284,     2,   285,     3,   179,   250,   288,   289,
       6,   294,   290,   297,   187,   300,   150,   308,   336,   343,
     339,   367,   361,   379,   199,   364,   382,   385,    20,   346,
     386,   387,   388,   375,   215,   392,   391,   393,   356,   398,
     400,   401,   402,   404,   405,   411,   416,   420,    31,   422,
     429,   430,    34,   445,    35,    36,    37,    38,    39,    40,
      41,   433,   436,   314,   441,   447,   458,   449,   455,   462,
     471,   412,   472,   199,   474,   483,   481,    53,   484,    54,
      55,    56,    57,   485,   494,    58,   406,   497,   408,   496,
     464,    59,    60,    61,    62,   504,   451,   502,   506,   512,
      31,   220,   187,   187,   187,   514,   468,    36,   395,   187,
      63,    64,   314,   513,   435,   515,   516,   187,   518,    66,
     366,   347,   347,   347,   478,   473,   418,   410,   446,   178,
     413,    54,    55,    56,    57,   415,   347,   187,   384,   253,
     456,   269,   488,   188,   221,   222,   187,   282,   374,   466,
     187,   264,   316,   503,   486,   427,   180,   179,   487,   287,
     296,   324,    63,    64,   325,   375,   326,   332,   333,   491,
     478,   328,   327,   329,   225,   302,   208,   315,   443,   330,
       0,   331,     0,     0,     0,     0,   489,     0,   490,     0,
     492,     0,   505,   495,   334,     0,   187,     0,     0,     0,
     187,     0,   126,    54,   239,    56,   241,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,   347,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   493,
       0,   510,     0,     0,     0,     0,   140,     0,     0,     0,
     517,   209,     1,     0,     2,     0,     3,     0,     4,     0,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,    28,    29,     0,    30,    31,
       0,    32,    33,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,     0,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,     1,     0,     2,     0,     3,     0,     4,
     151,     0,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    32,    33,    34,     0,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
       0,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,     1,     0,     2,     0,     3,     0,
       4,   261,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    32,    33,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,     0,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     4,    63,    64,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    32,    33,    34,     0,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     1,     0,     2,     0,     3,    59,    60,    61,    62,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     2,   125,     3,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,     0,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,     2,     0,     3,   148,     0,     0,
       0,     6,     0,     0,     0,     0,     0,    53,   126,    54,
     127,    56,   128,   129,   130,    58,     0,   131,     0,    20,
       0,    59,    60,    61,    62,     0,     0,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,     0,     0,    31,
      63,    64,   140,    34,     0,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     2,     0,     3,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,   149,
      20,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    63,    64,     0,    34,     0,    35,    36,    37,    38,
      39,    40,    41,   197,     0,   198,     2,     0,     3,   313,
       0,     0,     0,     6,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
       0,    20,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    63,    64,     0,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,    20,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    63,    64,    34,     0,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     2,     0,     3,
     345,     0,     0,     0,     6,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,   149,    20,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    63,    64,     0,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
     148,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,   394,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
     396,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,   409,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    31,     3,    63,    64,    34,     0,    35,    36,
      37,    38,    39,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,     0,     0,     0,    59,    60,    61,    62,     0,
      34,     0,    35,     0,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     0,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    32,    66,    59,   111,    92,   186,    58,
      19,   112,   114,    60,    61,   113,   122,   298,   228,     6,
       6,    25,     6,     3,    33,   197,   284,   285,     5,     4,
       7,     2,     3,   165,   288,    58,    59,   122,     3,     9,
       4,   122,   300,    14,     8,    16,   367,     4,     4,    98,
     385,   386,   387,     5,    35,    59,    55,     3,   370,    10,
      11,    70,    11,    15,    79,   400,    43,     4,    55,    55,
      41,    55,   119,     6,   472,    98,    88,    29,    30,    56,
      92,    50,    10,   255,     4,    55,    23,     5,    57,     9,
      89,    62,   107,    44,    22,    44,     3,     4,   110,   497,
      50,   422,    89,    89,    81,    89,    83,    57,    64,   421,
      79,    99,    58,     5,    79,   114,   104,   371,    51,    89,
      72,   379,    97,     4,   382,     6,    90,   114,   114,    79,
     114,   111,   304,    90,   111,   164,   117,    79,   107,   271,
       5,   190,   223,   152,   114,   192,   404,   405,   483,     3,
     102,    80,     4,    82,     5,     9,     4,   107,    10,     4,
       8,     4,     4,     8,     3,     8,     8,   190,    36,    37,
      38,    39,     9,     4,   259,     6,   225,   224,   149,    37,
      15,   391,    17,   289,   105,   106,   215,   210,    84,    85,
      86,   162,   216,   217,   218,   244,   100,   101,   102,   103,
      36,    37,   225,   226,     3,     4,   210,   488,    79,     4,
     388,     6,     4,     4,     6,     6,   265,     0,   267,    40,
      41,   244,   226,     5,   329,    98,   197,   250,     7,   330,
     332,    40,    41,   331,   108,    88,    89,     3,     4,   262,
     211,    91,   265,   109,   267,    23,    24,   107,   219,    87,
      62,     6,     6,     6,     5,    79,   227,    79,   262,    31,
      79,     3,    79,     5,    79,     7,   107,   111,     9,    79,
      12,     7,    43,     5,   297,    79,   247,     3,    79,     7,
       5,   111,    22,    79,   255,     9,    79,     5,    30,   260,
       5,     5,    79,   297,     4,     4,    90,     8,   269,    79,
       4,     6,    90,    79,    79,    79,    79,    42,    50,    90,
       4,    30,    54,   398,    56,    57,    58,    59,    60,    61,
      62,     9,     6,   294,     4,    90,    90,    79,    14,    24,
       9,   360,     9,   304,    79,     4,    23,    79,     6,    81,
      82,    83,    84,     6,    90,    87,   355,     9,   357,    79,
       4,    93,    94,    95,    96,    10,   403,    79,     3,    10,
      50,   446,   385,   386,   387,     3,   420,    57,   339,   392,
     112,   113,   343,    10,   383,     6,     3,   400,    10,     0,
     279,   385,   386,   387,   433,   429,   365,   358,   398,    79,
     361,    81,    82,    83,    84,   363,   400,   420,   315,   122,
     409,   163,   453,    26,    94,    95,   429,   175,   290,   418,
     433,   160,   223,   479,   441,   375,   420,   107,   447,   179,
     187,   229,   112,   113,   230,   429,   231,   240,   242,   458,
     479,   233,   232,   236,    98,   194,   498,    55,   392,   237,
      -1,   238,    -1,    -1,    -1,    -1,   455,    -1,   457,    -1,
     459,    -1,   481,   462,   243,    -1,   479,    -1,    -1,    -1,
     483,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   460,
      -1,   494,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     509,   510,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    -1,    49,    50,
      -1,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,     3,    -1,     5,    -1,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,     3,    -1,     5,    -1,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,     9,   112,   113,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      87,     3,    -1,     5,    -1,     7,    93,    94,    95,    96,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    30,    -1,
      -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     112,   113,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    -1,    30,
      -1,    93,    94,    95,    96,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    50,
     112,   113,   114,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      30,    -1,    93,    94,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,   112,   113,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      -1,    30,    -1,    93,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,   112,   113,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   112,   113,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    30,    -1,    93,    94,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,   112,   113,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    30,    -1,    -1,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    50,     7,   112,   113,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      54,    -1,    56,    -1,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113
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
     198,   205,   206,   209,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   236,
     239,   240,   241,   243,   244,     6,    80,    82,    84,    85,
      86,    89,    99,   100,   101,   102,   103,   104,   105,   106,
     114,   171,   174,   194,   215,   216,   217,   218,     8,    90,
     171,    10,   133,    36,    37,    38,    39,   136,   184,   185,
     186,   187,     5,   150,     5,     5,     5,   171,   187,     3,
     171,   150,    79,     3,   125,   187,   125,   125,    79,   107,
     141,   142,   199,   200,   201,   203,   204,   205,   184,   134,
     187,   187,   172,   150,    79,   235,   234,    63,    65,   171,
     242,   141,   143,   142,   148,   148,   171,     0,   124,   150,
     187,     5,     3,    58,     3,     4,    55,    89,   114,     7,
     175,    94,    95,   143,   195,   233,   187,    88,    92,   110,
      98,   108,   109,   107,    99,   104,   214,   215,   216,    82,
     217,    84,   218,    91,    87,   234,   148,     7,    43,    56,
     111,   173,   175,   177,   239,    62,     6,     6,   171,     8,
      90,    10,     5,   180,   185,    40,    41,   188,   171,   163,
     172,   170,    79,     9,    79,   156,     3,    31,   152,   154,
      79,    40,   188,   189,    79,    79,   173,   199,     9,    79,
      43,    88,    89,   202,     7,   178,   203,     5,   181,   143,
      79,   148,   235,   242,    64,    97,   141,   171,     3,   172,
     179,   179,   179,     8,   171,    55,   194,   239,   148,   143,
     141,   171,   219,   220,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   143,    79,   143,   237,     5,
     238,   242,     8,     7,   175,     8,   171,   141,   144,   145,
       6,    51,   182,   143,   143,     6,   171,     6,   170,     4,
      90,    22,   159,   160,     9,   153,   152,   111,   183,   183,
     183,   129,   198,   173,   201,   141,   146,   147,   182,    79,
     183,   242,    79,     6,   180,     5,     5,     5,    79,   210,
     211,    90,     4,     8,     6,   171,     8,     8,    79,   212,
       4,     6,    90,   190,    79,    79,   150,     3,   150,     6,
     171,    79,   172,   171,    10,   159,    79,   132,   156,   132,
      42,   127,    90,   128,   128,    10,   198,   212,   213,     4,
      30,   135,   183,     9,   183,   150,     6,   144,   144,   144,
     178,     4,   220,   237,     6,   175,   176,    90,   144,    79,
       3,   148,   191,   183,   183,    14,   150,     6,    90,     6,
      23,   158,    24,   161,     4,    10,   150,     8,   142,   128,
     132,     9,     9,   146,    79,     3,    79,    79,   143,   207,
     208,    23,   138,     4,     6,     6,   210,   172,   181,   150,
     150,   172,   150,   171,    90,   150,    79,     9,   123,   131,
     131,     3,    79,   208,    10,   172,     3,   144,   182,     6,
     133,   131,    10,    10,     3,     6,     3,   150,    10
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
     202,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   210,   210,   211,   211,   212,   212,   212,
     213,   213,   214,   214,   215,   215,   215,   215,   216,   216,
     217,   217,   218,   218,   218,   219,   219,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   233,   233,   233,   233,   233,   233,
     233,   234,   234,   234,   234,   234,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   240,   241,
     241,   241,   241,   241,   241,   241,   242,   242,   242,   243,
     243,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244
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
       1,     1,     1,     2,     2,     3,     1,     3,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     1,     2,     3,
       1,     2,     7,     3,     1,     1,     2,     1,     2,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     2,     1,     1,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     2,     2
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
#line 166 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2324 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 167 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2330 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 170 "src/gwion.y"
            { (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2336 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 171 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2342 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 175 "src/gwion.y"
                 { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2348 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 176 "src/gwion.y"
                 { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2354 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 177 "src/gwion.y"
                 { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2360 "src/parser.c"
    break;

  case 9: /* section: extend_def  */
#line 178 "src/gwion.y"
                 { (yyval.section) = new_section_extend_def(mpool(arg), (yyvsp[0].extend_def)); }
#line 2366 "src/parser.c"
    break;

  case 10: /* section: enum_def  */
#line 179 "src/gwion.y"
                 { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2372 "src/parser.c"
    break;

  case 11: /* section: union_def  */
#line 180 "src/gwion.y"
                 { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2378 "src/parser.c"
    break;

  case 12: /* section: fptr_def  */
#line 181 "src/gwion.y"
                 { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2384 "src/parser.c"
    break;

  case 13: /* section: type_def  */
#line 182 "src/gwion.y"
                 { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2390 "src/parser.c"
    break;

  case 14: /* class_flag: flag modifier  */
#line 185 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2396 "src/parser.c"
    break;

  case 15: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 188 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2407 "src/parser.c"
    break;

  case 16: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 195 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2419 "src/parser.c"
    break;

  case 17: /* class_def: "trait" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 203 "src/gwion.y"
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
#line 2435 "src/parser.c"
    break;

  case 18: /* class_ext: "extends" type_decl_exp  */
#line 215 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2441 "src/parser.c"
    break;

  case 19: /* class_ext: %empty  */
#line 215 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2447 "src/parser.c"
    break;

  case 20: /* traits: %empty  */
#line 216 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2453 "src/parser.c"
    break;

  case 21: /* traits: ":" id_list  */
#line 216 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2459 "src/parser.c"
    break;

  case 22: /* extend_body: func_def  */
#line 218 "src/gwion.y"
             {
    Section * section= new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    (yyval.ast) = !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL); LIST_FIRST((yyval.ast))
  }
#line 2468 "src/parser.c"
    break;

  case 23: /* extend_body: extend_body func_def  */
#line 222 "src/gwion.y"
                         {
    Section * section = new_section_func_def (mpool(arg), (yyvsp[0].func_def));
    LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !arg->ppa->lint ? new_ast_expand(mpool(arg), section, NULL) : new_ast(mpool(arg), section, NULL))
  }
#line 2477 "src/parser.c"
    break;

  case 24: /* extend_def: "extends" type_decl_exp "{" extend_body "}"  */
#line 228 "src/gwion.y"
                                                        {
//  if($3 && $3->next)
//    { parser_error(&@$, arg, "extensions must define at most trait", 0211); YYERROR;}
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].ast));
//  $$->traits = $3;
}
#line 2488 "src/parser.c"
    break;

  case 26: /* class_body: %empty  */
#line 236 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2494 "src/parser.c"
    break;

  case 27: /* id_list: "<identifier>"  */
#line 238 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2500 "src/parser.c"
    break;

  case 28: /* id_list: id_list "," "<identifier>"  */
#line 239 "src/gwion.y"
                         { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2506 "src/parser.c"
    break;

  case 29: /* stmt_list: stmt  */
#line 241 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2512 "src/parser.c"
    break;

  case 30: /* stmt_list: stmt_list stmt  */
#line 242 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2518 "src/parser.c"
    break;

  case 31: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 244 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2525 "src/parser.c"
    break;

  case 32: /* func_effects: %empty  */
#line 247 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2531 "src/parser.c"
    break;

  case 33: /* func_effects: "perform" "<identifier>"  */
#line 247 "src/gwion.y"
                                                { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2537 "src/parser.c"
    break;

  case 34: /* func_effects: func_effects "<identifier>"  */
#line 247 "src/gwion.y"
                                                                                                                     { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2543 "src/parser.c"
    break;

  case 35: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 249 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2550 "src/parser.c"
    break;

  case 36: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 252 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2561 "src/parser.c"
    break;

  case 37: /* typedef_when: %empty  */
#line 259 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2567 "src/parser.c"
    break;

  case 38: /* typedef_when: "when" binary_exp  */
#line 259 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2573 "src/parser.c"
    break;

  case 39: /* type_def_type: "typedef"  */
#line 260 "src/gwion.y"
                         { (yyval.ival) = 0; }
#line 2579 "src/parser.c"
    break;

  case 40: /* type_def_type: "distinct"  */
#line 260 "src/gwion.y"
                                                  { (yyval.ival) = 1; }
#line 2585 "src/parser.c"
    break;

  case 41: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 261 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].id_list));
  (yyval.type_def)->distinct = (yyvsp[-6].ival);
}
#line 2598 "src/parser.c"
    break;

  case 42: /* type_decl_array: type_decl array  */
#line 270 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2604 "src/parser.c"
    break;

  case 44: /* type_decl_exp: type_decl_array  */
#line 272 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2612 "src/parser.c"
    break;

  case 45: /* type_decl_empty: type_decl_array  */
#line 276 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2620 "src/parser.c"
    break;

  case 46: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 281 "src/gwion.y"
                                            { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2626 "src/parser.c"
    break;

  case 47: /* arg: type_decl_array arg_decl  */
#line 282 "src/gwion.y"
                             { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2632 "src/parser.c"
    break;

  case 48: /* arg_list: arg  */
#line 284 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2638 "src/parser.c"
    break;

  case 49: /* arg_list: arg_list "," arg  */
#line 285 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
   }
#line 2648 "src/parser.c"
    break;

  case 50: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 291 "src/gwion.y"
                                        { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2654 "src/parser.c"
    break;

  case 51: /* fptr_list: fptr_arg  */
#line 292 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2660 "src/parser.c"
    break;

  case 52: /* fptr_list: fptr_list "," fptr_arg  */
#line 292 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2666 "src/parser.c"
    break;

  case 53: /* code_stmt: "{" "}"  */
#line 295 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2672 "src/parser.c"
    break;

  case 54: /* code_stmt: "{" stmt_list "}"  */
#line 296 "src/gwion.y"
                      { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2678 "src/parser.c"
    break;

  case 55: /* stmt_pp: "<comment>"  */
#line 300 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2684 "src/parser.c"
    break;

  case 56: /* stmt_pp: "#include"  */
#line 301 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2690 "src/parser.c"
    break;

  case 57: /* stmt_pp: "#define"  */
#line 302 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2696 "src/parser.c"
    break;

  case 58: /* stmt_pp: "#pragma"  */
#line 303 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2702 "src/parser.c"
    break;

  case 59: /* stmt_pp: "#undef"  */
#line 304 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2708 "src/parser.c"
    break;

  case 60: /* stmt_pp: "#ifdef"  */
#line 305 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2714 "src/parser.c"
    break;

  case 61: /* stmt_pp: "#ifndef"  */
#line 306 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2720 "src/parser.c"
    break;

  case 62: /* stmt_pp: "#else"  */
#line 307 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2726 "src/parser.c"
    break;

  case 63: /* stmt_pp: "#if"  */
#line 308 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2732 "src/parser.c"
    break;

  case 64: /* stmt_pp: "\n"  */
#line 309 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2738 "src/parser.c"
    break;

  case 65: /* stmt_pp: "import"  */
#line 310 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_import, (yyvsp[0].sval), (yyloc)); }
#line 2744 "src/parser.c"
    break;

  case 77: /* retry_stmt: "retry" ";"  */
#line 327 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_retry, (yylsp[-1]));
}
#line 2754 "src/parser.c"
    break;

  case 78: /* $@1: %empty  */
#line 332 "src/gwion.y"
                  { arg->handling = true; }
#line 2760 "src/parser.c"
    break;

  case 79: /* handler: "handle" $@1 opt_id stmt  */
#line 332 "src/gwion.y"
                                                        { (yyval.handler_list) = new_handler_list(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])); arg->handling = false; }
#line 2766 "src/parser.c"
    break;

  case 81: /* handler_list: handler_list handler  */
#line 334 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list)->xid)
        { parser_error(&(yylsp[-1]), arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        (yyval.handler_list) = (yyvsp[-1].handler_list);
        (yyvsp[-1].handler_list)->next = (yyvsp[0].handler_list);
  }
#line 2777 "src/parser.c"
    break;

  case 82: /* try_stmt: "try" stmt handler_list  */
#line 340 "src/gwion.y"
                                  { (yyval.stmt) = new_stmt_try(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].handler_list)); }
#line 2783 "src/parser.c"
    break;

  case 84: /* opt_id: %empty  */
#line 342 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2789 "src/parser.c"
    break;

  case 85: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 345 "src/gwion.y"
                                       {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2799 "src/parser.c"
    break;

  case 86: /* when_exp: "when" exp  */
#line 351 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2805 "src/parser.c"
    break;

  case 87: /* when_exp: %empty  */
#line 351 "src/gwion.y"
                                                 { (yyval.exp) = NULL; }
#line 2811 "src/parser.c"
    break;

  case 88: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 354 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2824 "src/parser.c"
    break;

  case 89: /* match_list: match_case_stmt  */
#line 364 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2830 "src/parser.c"
    break;

  case 90: /* match_list: match_list match_case_stmt  */
#line 365 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2836 "src/parser.c"
    break;

  case 91: /* where_stmt: "where" stmt  */
#line 367 "src/gwion.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2842 "src/parser.c"
    break;

  case 92: /* where_stmt: %empty  */
#line 367 "src/gwion.y"
                                        { (yyval.stmt) = NULL; }
#line 2848 "src/parser.c"
    break;

  case 93: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 369 "src/gwion.y"
                                                      {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2861 "src/parser.c"
    break;

  case 94: /* flow: "while"  */
#line 379 "src/gwion.y"
            { (yyval.ival) = ae_stmt_while; }
#line 2867 "src/parser.c"
    break;

  case 95: /* flow: "until"  */
#line 380 "src/gwion.y"
            { (yyval.ival) = ae_stmt_until; }
#line 2873 "src/parser.c"
    break;

  case 96: /* loop_stmt: flow "(" exp ")" stmt  */
#line 385 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), false, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2879 "src/parser.c"
    break;

  case 97: /* loop_stmt: "do" stmt flow exp ";"  */
#line 387 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), true, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2885 "src/parser.c"
    break;

  case 98: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 389 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2891 "src/parser.c"
    break;

  case 99: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 391 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2897 "src/parser.c"
    break;

  case 100: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 393 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2903 "src/parser.c"
    break;

  case 101: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" binary_exp ")" stmt  */
#line 395 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc));
        (yyval.stmt)->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        (yyval.stmt)->d.stmt_each.idx->sym = (yyvsp[-6].sym);
        (yyval.stmt)->d.stmt_each.idx->pos = (yylsp[-6]);
    }
#line 2913 "src/parser.c"
    break;

  case 102: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 401 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2919 "src/parser.c"
    break;

  case 103: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 404 "src/gwion.y"
                                             { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2925 "src/parser.c"
    break;

  case 104: /* defer_stmt: "defer" stmt  */
#line 406 "src/gwion.y"
                         { (yyval.stmt) = new_stmt_defer(mpool(arg), (yyvsp[0].stmt), (yyloc)); }
#line 2931 "src/parser.c"
    break;

  case 105: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 410 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2937 "src/parser.c"
    break;

  case 106: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 412 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2943 "src/parser.c"
    break;

  case 107: /* breaks: "break"  */
#line 415 "src/gwion.y"
                    { (yyval.ival) = ae_stmt_break; }
#line 2949 "src/parser.c"
    break;

  case 108: /* breaks: "continue"  */
#line 415 "src/gwion.y"
                                                        { (yyval.ival) = ae_stmt_continue; }
#line 2955 "src/parser.c"
    break;

  case 109: /* jump_stmt: "return" exp ";"  */
#line 417 "src/gwion.y"
                     { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2961 "src/parser.c"
    break;

  case 110: /* jump_stmt: "return" ";"  */
#line 418 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2967 "src/parser.c"
    break;

  case 111: /* jump_stmt: breaks "<integer>" ";"  */
#line 419 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2973 "src/parser.c"
    break;

  case 112: /* jump_stmt: breaks ";"  */
#line 420 "src/gwion.y"
                     { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2979 "src/parser.c"
    break;

  case 113: /* exp_stmt: exp ";"  */
#line 424 "src/gwion.y"
            { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2985 "src/parser.c"
    break;

  case 114: /* exp_stmt: ";"  */
#line 425 "src/gwion.y"
            { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2991 "src/parser.c"
    break;

  case 115: /* exp: binary_exp  */
#line 429 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2997 "src/parser.c"
    break;

  case 116: /* exp: exp "," binary_exp  */
#line 430 "src/gwion.y"
                       { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 3003 "src/parser.c"
    break;

  case 118: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 435 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3009 "src/parser.c"
    break;

  case 119: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 436 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3015 "src/parser.c"
    break;

  case 120: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 437 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3021 "src/parser.c"
    break;

  case 121: /* call_template: ":[" type_list "]"  */
#line 440 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3027 "src/parser.c"
    break;

  case 122: /* call_template: %empty  */
#line 440 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 3033 "src/parser.c"
    break;

  case 127: /* array_exp: "[" exp "]"  */
#line 445 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 3039 "src/parser.c"
    break;

  case 128: /* array_exp: "[" exp "]" array_exp  */
#line 446 "src/gwion.y"
                          {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0207); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3048 "src/parser.c"
    break;

  case 129: /* array_exp: "[" exp "]" "[" "]"  */
#line 450 "src/gwion.y"
                         { LIST_REM(2) parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0208); YYERROR; }
#line 3054 "src/parser.c"
    break;

  case 130: /* array_empty: "[" "]"  */
#line 454 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3060 "src/parser.c"
    break;

  case 131: /* array_empty: array_empty "[" "]"  */
#line 455 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3066 "src/parser.c"
    break;

  case 132: /* array_empty: array_empty array_exp  */
#line 456 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0209); YYERROR; }
#line 3072 "src/parser.c"
    break;

  case 133: /* range: "[" exp ":" exp "]"  */
#line 460 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 3078 "src/parser.c"
    break;

  case 134: /* range: "[" exp ":" "]"  */
#line 461 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 3084 "src/parser.c"
    break;

  case 135: /* range: "[" ":" exp "]"  */
#line 462 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 3090 "src/parser.c"
    break;

  case 139: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 467 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3096 "src/parser.c"
    break;

  case 140: /* func_args: "(" arg_list  */
#line 469 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3102 "src/parser.c"
    break;

  case 141: /* func_args: "("  */
#line 469 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 3108 "src/parser.c"
    break;

  case 142: /* fptr_args: "(" fptr_list  */
#line 470 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 3114 "src/parser.c"
    break;

  case 143: /* fptr_args: "("  */
#line 470 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 3120 "src/parser.c"
    break;

  case 144: /* arg_type: "..." ")"  */
#line 471 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 3126 "src/parser.c"
    break;

  case 145: /* arg_type: ")"  */
#line 471 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 3132 "src/parser.c"
    break;

  case 146: /* decl_template: ":[" id_list "]"  */
#line 473 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 3138 "src/parser.c"
    break;

  case 147: /* decl_template: %empty  */
#line 473 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 3144 "src/parser.c"
    break;

  case 148: /* global: "global"  */
#line 475 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = true; }
#line 3150 "src/parser.c"
    break;

  case 149: /* storage_flag: "static"  */
#line 477 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3156 "src/parser.c"
    break;

  case 151: /* access_flag: "private"  */
#line 479 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3162 "src/parser.c"
    break;

  case 152: /* access_flag: "protect"  */
#line 480 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3168 "src/parser.c"
    break;

  case 153: /* flag: access_flag  */
#line 483 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3174 "src/parser.c"
    break;

  case 154: /* flag: storage_flag  */
#line 484 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3180 "src/parser.c"
    break;

  case 155: /* flag: access_flag storage_flag  */
#line 485 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3186 "src/parser.c"
    break;

  case 156: /* flag: %empty  */
#line 486 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3192 "src/parser.c"
    break;

  case 157: /* final: "final"  */
#line 489 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3198 "src/parser.c"
    break;

  case 158: /* final: %empty  */
#line 489 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3204 "src/parser.c"
    break;

  case 159: /* modifier: "abstract"  */
#line 491 "src/gwion.y"
                     { (yyval.flag) = ae_flag_abstract; }
#line 3210 "src/parser.c"
    break;

  case 161: /* func_trait: %empty  */
#line 493 "src/gwion.y"
            { (yyval.sym) = 0; }
#line 3216 "src/parser.c"
    break;

  case 162: /* func_trait: ":" "<identifier>"  */
#line 493 "src/gwion.y"
                                 { (yyval.sym) = (yyvsp[0].sym); }
#line 3222 "src/parser.c"
    break;

  case 164: /* func_code: ";"  */
#line 494 "src/gwion.y"
                           { (yyval.stmt) = NULL; }
#line 3228 "src/parser.c"
    break;

  case 165: /* func_def_base: "fun" func_base func_args arg_type func_trait func_code  */
#line 496 "src/gwion.y"
                                                            {
    (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
    (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-4].func_base), (yyvsp[0].stmt));
    (yyval.func_def)->trait = (yyvsp[-1].sym);
    if(!(yyvsp[0].stmt)) {
      SET_FLAG((yyvsp[-4].func_base), abstract);
    }
  }
#line 3242 "src/parser.c"
    break;

  case 166: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 508 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3254 "src/parser.c"
    break;

  case 172: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 519 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none, (yylsp[-5])); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 3260 "src/parser.c"
    break;

  case 173: /* op_base: type_decl_empty post_op "(" arg ")"  */
#line 521 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-3])); }
#line 3266 "src/parser.c"
    break;

  case 174: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 523 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-4]));
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 3275 "src/parser.c"
    break;

  case 175: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 528 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3284 "src/parser.c"
    break;

  case 176: /* operator: "operator"  */
#line 533 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 3290 "src/parser.c"
    break;

  case 177: /* operator: "operator" global  */
#line 533 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 3296 "src/parser.c"
    break;

  case 178: /* op_def: operator op_base code_stmt  */
#line 535 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3302 "src/parser.c"
    break;

  case 181: /* func_def: op_def  */
#line 537 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 3308 "src/parser.c"
    break;

  case 182: /* ref: "&"  */
#line 539 "src/gwion.y"
         { (yyval.uval) = 1; }
#line 3314 "src/parser.c"
    break;

  case 183: /* ref: "&" ref  */
#line 539 "src/gwion.y"
                               { (yyval.uval) = 1 + (yyvsp[0].uval); }
#line 3320 "src/parser.c"
    break;

  case 184: /* type_decl_tmpl: "<identifier>" call_template  */
#line 541 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3326 "src/parser.c"
    break;

  case 185: /* type_decl_tmpl: ref "<identifier>" call_template  */
#line 542 "src/gwion.y"
                         { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->ref = (yyvsp[-2].uval); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3332 "src/parser.c"
    break;

  case 187: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 547 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3338 "src/parser.c"
    break;

  case 188: /* option: "?"  */
#line 550 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3344 "src/parser.c"
    break;

  case 189: /* option: OPTIONS  */
#line 550 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3350 "src/parser.c"
    break;

  case 190: /* option: %empty  */
#line 550 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3356 "src/parser.c"
    break;

  case 191: /* type_decl_opt: type_decl_noflag option  */
#line 551 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3362 "src/parser.c"
    break;

  case 193: /* type_decl: type_decl_flag type_decl_opt  */
#line 552 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3368 "src/parser.c"
    break;

  case 194: /* type_decl_flag: "late"  */
#line 555 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3374 "src/parser.c"
    break;

  case 195: /* type_decl_flag: "const"  */
#line 556 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3380 "src/parser.c"
    break;

  case 196: /* type_decl_flag2: "var"  */
#line 558 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3386 "src/parser.c"
    break;

  case 198: /* union_decl: "<identifier>" ";"  */
#line 561 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_list) = new_union_list(mpool(arg), td, (yyvsp[-1].sym), (yylsp[-1]));
}
#line 3395 "src/parser.c"
    break;

  case 199: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 565 "src/gwion.y"
                         { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 3401 "src/parser.c"
    break;

  case 201: /* union_list: union_decl union_list  */
#line 568 "src/gwion.y"
                          { (yyval.union_list) = (yyvsp[-1].union_list); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 3407 "src/parser.c"
    break;

  case 202: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 571 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 3419 "src/parser.c"
    break;

  case 203: /* var_decl_list: var_decl "," var_decl_list  */
#line 581 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3425 "src/parser.c"
    break;

  case 204: /* var_decl_list: var_decl  */
#line 582 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3431 "src/parser.c"
    break;

  case 205: /* var_decl: "<identifier>"  */
#line 585 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yylsp[0])); }
#line 3437 "src/parser.c"
    break;

  case 206: /* var_decl: "<identifier>" array  */
#line 586 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3443 "src/parser.c"
    break;

  case 207: /* arg_decl: "<identifier>"  */
#line 588 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 3449 "src/parser.c"
    break;

  case 208: /* arg_decl: "<identifier>" array_empty  */
#line 589 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 3455 "src/parser.c"
    break;

  case 209: /* arg_decl: "<identifier>" array_exp  */
#line 590 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3461 "src/parser.c"
    break;

  case 211: /* fptr_arg_decl: %empty  */
#line 591 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 3467 "src/parser.c"
    break;

  case 225: /* opt_exp: exp  */
#line 599 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 3473 "src/parser.c"
    break;

  case 226: /* opt_exp: %empty  */
#line 599 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 3479 "src/parser.c"
    break;

  case 228: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 602 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3485 "src/parser.c"
    break;

  case 229: /* con_exp: log_or_exp "?:" con_exp  */
#line 604 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3491 "src/parser.c"
    break;

  case 231: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 606 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3497 "src/parser.c"
    break;

  case 233: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 607 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3503 "src/parser.c"
    break;

  case 235: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 608 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3509 "src/parser.c"
    break;

  case 237: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 609 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3515 "src/parser.c"
    break;

  case 239: /* and_exp: and_exp "&" eq_exp  */
#line 610 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3521 "src/parser.c"
    break;

  case 241: /* eq_exp: eq_exp eq_op rel_exp  */
#line 611 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3527 "src/parser.c"
    break;

  case 243: /* rel_exp: rel_exp rel_op shift_exp  */
#line 612 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3533 "src/parser.c"
    break;

  case 245: /* shift_exp: shift_exp shift_op add_exp  */
#line 613 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3539 "src/parser.c"
    break;

  case 247: /* add_exp: add_exp add_op mul_exp  */
#line 614 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3545 "src/parser.c"
    break;

  case 249: /* mul_exp: mul_exp mul_op dur_exp  */
#line 615 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3551 "src/parser.c"
    break;

  case 251: /* dur_exp: dur_exp "::" cast_exp  */
#line 616 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3557 "src/parser.c"
    break;

  case 253: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 619 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3563 "src/parser.c"
    break;

  case 262: /* unary_exp: unary_op unary_exp  */
#line 626 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3569 "src/parser.c"
    break;

  case 263: /* unary_exp: OPID_E unary_exp  */
#line 627 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3575 "src/parser.c"
    break;

  case 264: /* unary_exp: "new" type_decl_exp  */
#line 628 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3581 "src/parser.c"
    break;

  case 265: /* unary_exp: "spork" code_stmt  */
#line 629 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3587 "src/parser.c"
    break;

  case 266: /* unary_exp: "fork" code_stmt  */
#line 630 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3593 "src/parser.c"
    break;

  case 267: /* unary_exp: "$" type_decl_empty  */
#line 631 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3599 "src/parser.c"
    break;

  case 268: /* lambda_list: "<identifier>"  */
#line 634 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3605 "src/parser.c"
    break;

  case 269: /* lambda_list: "<identifier>" lambda_list  */
#line 635 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3611 "src/parser.c"
    break;

  case 270: /* lambda_arg: "\\" lambda_list  */
#line 636 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3617 "src/parser.c"
    break;

  case 271: /* lambda_arg: "\\"  */
#line 636 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 3623 "src/parser.c"
    break;

  case 272: /* type_list: type_decl_empty  */
#line 639 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3629 "src/parser.c"
    break;

  case 273: /* type_list: type_decl_empty "," type_list  */
#line 640 "src/gwion.y"
                                  { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3635 "src/parser.c"
    break;

  case 274: /* call_paren: "(" exp ")"  */
#line 644 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3641 "src/parser.c"
    break;

  case 275: /* call_paren: "(" ")"  */
#line 644 "src/gwion.y"
                                                                   { (yyval.exp) = NULL; }
#line 3647 "src/parser.c"
    break;

  case 278: /* dot_exp: post_exp "." "<identifier>"  */
#line 648 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3660 "src/parser.c"
    break;

  case 280: /* post_exp: post_exp array_exp  */
#line 659 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3666 "src/parser.c"
    break;

  case 281: /* post_exp: post_exp range  */
#line 661 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3672 "src/parser.c"
    break;

  case 282: /* post_exp: post_exp call_template call_paren  */
#line 663 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3679 "src/parser.c"
    break;

  case 283: /* post_exp: post_exp post_op  */
#line 666 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3685 "src/parser.c"
    break;

  case 284: /* post_exp: post_exp OPID_E  */
#line 668 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3691 "src/parser.c"
    break;

  case 285: /* post_exp: dot_exp  */
#line 669 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3697 "src/parser.c"
    break;

  case 286: /* interp_exp: "<interp string>`"  */
#line 673 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3703 "src/parser.c"
    break;

  case 287: /* interp_exp: "<interp string>" interp_exp  */
#line 674 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3709 "src/parser.c"
    break;

  case 288: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 675 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3715 "src/parser.c"
    break;

  case 289: /* interp: "`" interp_exp  */
#line 677 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3721 "src/parser.c"
    break;

  case 290: /* interp: interp "`" interp_exp  */
#line 678 "src/gwion.y"
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
#line 3736 "src/parser.c"
    break;

  case 291: /* prim_exp: "<identifier>"  */
#line 690 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3742 "src/parser.c"
    break;

  case 292: /* prim_exp: "<integer>"  */
#line 691 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3748 "src/parser.c"
    break;

  case 293: /* prim_exp: FLOATT  */
#line 692 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3754 "src/parser.c"
    break;

  case 294: /* prim_exp: interp  */
#line 693 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3760 "src/parser.c"
    break;

  case 295: /* prim_exp: "<litteral string>"  */
#line 694 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3766 "src/parser.c"
    break;

  case 296: /* prim_exp: "<litteral char>"  */
#line 695 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3772 "src/parser.c"
    break;

  case 297: /* prim_exp: array  */
#line 696 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3778 "src/parser.c"
    break;

  case 298: /* prim_exp: range  */
#line 697 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3784 "src/parser.c"
    break;

  case 299: /* prim_exp: "<<<" exp ">>>"  */
#line 698 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3790 "src/parser.c"
    break;

  case 300: /* prim_exp: "(" exp ")"  */
#line 699 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3796 "src/parser.c"
    break;

  case 301: /* prim_exp: lambda_arg code_stmt  */
#line 700 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3802 "src/parser.c"
    break;

  case 302: /* prim_exp: "(" op_op ")"  */
#line 701 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 3808 "src/parser.c"
    break;

  case 303: /* prim_exp: "perform" "<identifier>"  */
#line 702 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 3814 "src/parser.c"
    break;

  case 304: /* prim_exp: "(" ")"  */
#line 703 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3820 "src/parser.c"
    break;


#line 3824 "src/parser.c"

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

#line 705 "src/gwion.y"

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
