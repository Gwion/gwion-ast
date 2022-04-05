/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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
//#define YYMALLOC(a) mp_malloc2(mpool(arg), a)
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol lambda_name(const Scanner*);
ANN Symbol sig_name(const Scanner*, const pos_t);


#line 97 "src/parser.c"

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
  YYSYMBOL_LATE = 56,                      /* "late"  */
  YYSYMBOL_NUM = 57,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 58,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 59,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 60,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 61,              /* "`"  */
  YYSYMBOL_INTERP_EXP = 62,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 63,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 64,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 65,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 66,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 67,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 68,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 69,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 70,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 71,                  /* "#if"  */
  YYSYMBOL_PP_NL = 72,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 73,                 /* "import"  */
  YYSYMBOL_INTERP_LIT = 74,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 75,                /* "<interp string end>"  */
  YYSYMBOL_76_operator_id_ = 76,           /* "@<operator id>"  */
  YYSYMBOL_ID = 77,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 78,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 79,                  /* "++"  */
  YYSYMBOL_MINUS = 80,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 81,                /* "--"  */
  YYSYMBOL_TIMES = 82,                     /* "*"  */
  YYSYMBOL_DIVIDE = 83,                    /* "/"  */
  YYSYMBOL_PERCENT = 84,                   /* "%"  */
  YYSYMBOL_DOLLAR = 85,                    /* "$"  */
  YYSYMBOL_QUESTION = 86,                  /* "?"  */
  YYSYMBOL_OPTIONS = 87,                   /* OPTIONS  */
  YYSYMBOL_COLON = 88,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 89,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 90,             /* "?:"  */
  YYSYMBOL_NEW = 91,                       /* "new"  */
  YYSYMBOL_SPORK = 92,                     /* "spork"  */
  YYSYMBOL_FORK = 93,                      /* "fork"  */
  YYSYMBOL_L_HACK = 94,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 95,                    /* ">>>"  */
  YYSYMBOL_AND = 96,                       /* "&&"  */
  YYSYMBOL_EQ = 97,                        /* "=="  */
  YYSYMBOL_GE = 98,                        /* ">="  */
  YYSYMBOL_GT = 99,                        /* ">"  */
  YYSYMBOL_LE = 100,                       /* "<="  */
  YYSYMBOL_LT = 101,                       /* "<"  */
  YYSYMBOL_NEQ = 102,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 103,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 104,              /* ">>"  */
  YYSYMBOL_S_AND = 105,                    /* "&"  */
  YYSYMBOL_S_OR = 106,                     /* "|"  */
  YYSYMBOL_S_XOR = 107,                    /* "^"  */
  YYSYMBOL_OR = 108,                       /* "||"  */
  YYSYMBOL_TMPL = 109,                     /* ":["  */
  YYSYMBOL_TILDA = 110,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 111,              /* "!"  */
  YYSYMBOL_AROBASE = 112,                  /* "@"  */
  YYSYMBOL_DYNOP = 113,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 114,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 115,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 116,                   /* UTIMES  */
  YYSYMBOL_117_ = 117,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 118,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 119,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 120,                 /* $accept  */
  YYSYMBOL_prg = 121,                      /* prg  */
  YYSYMBOL_ast = 122,                      /* ast  */
  YYSYMBOL_section = 123,                  /* section  */
  YYSYMBOL_class_flag = 124,               /* class_flag  */
  YYSYMBOL_class_def = 125,                /* class_def  */
  YYSYMBOL_trait_stmt = 126,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 127,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 128,            /* trait_section  */
  YYSYMBOL_trait_ast = 129,                /* trait_ast  */
  YYSYMBOL_trait_body = 130,               /* trait_body  */
  YYSYMBOL_trait_def = 131,                /* trait_def  */
  YYSYMBOL_class_ext = 132,                /* class_ext  */
  YYSYMBOL_traits = 133,                   /* traits  */
  YYSYMBOL_extend_body = 134,              /* extend_body  */
  YYSYMBOL_extend_def = 135,               /* extend_def  */
  YYSYMBOL_class_body = 136,               /* class_body  */
  YYSYMBOL_id_list = 137,                  /* id_list  */
  YYSYMBOL_specialized_list = 138,         /* specialized_list  */
  YYSYMBOL_stmt_list = 139,                /* stmt_list  */
  YYSYMBOL_fptr_base = 140,                /* fptr_base  */
  YYSYMBOL__func_effects = 141,            /* _func_effects  */
  YYSYMBOL_func_effects = 142,             /* func_effects  */
  YYSYMBOL_func_base = 143,                /* func_base  */
  YYSYMBOL_fptr_def = 144,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 145,             /* typedef_when  */
  YYSYMBOL_type_def_type = 146,            /* type_def_type  */
  YYSYMBOL_type_def = 147,                 /* type_def  */
  YYSYMBOL_type_decl_array = 148,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 149,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 150,          /* type_decl_empty  */
  YYSYMBOL_arg = 151,                      /* arg  */
  YYSYMBOL_arg_list = 152,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 153,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 154,                /* fptr_list  */
  YYSYMBOL_code_stmt = 155,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 156,                  /* stmt_pp  */
  YYSYMBOL_stmt = 157,                     /* stmt  */
  YYSYMBOL_retry_stmt = 158,               /* retry_stmt  */
  YYSYMBOL_handler = 159,                  /* handler  */
  YYSYMBOL_160_1 = 160,                    /* $@1  */
  YYSYMBOL_handler_list = 161,             /* handler_list  */
  YYSYMBOL_try_stmt = 162,                 /* try_stmt  */
  YYSYMBOL_opt_id = 163,                   /* opt_id  */
  YYSYMBOL_enum_def = 164,                 /* enum_def  */
  YYSYMBOL_when_exp = 165,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 166,          /* match_case_stmt  */
  YYSYMBOL_match_list = 167,               /* match_list  */
  YYSYMBOL_match_stmt = 168,               /* match_stmt  */
  YYSYMBOL_flow = 169,                     /* flow  */
  YYSYMBOL_loop_stmt = 170,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 171,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 172,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 173,           /* selection_stmt  */
  YYSYMBOL_breaks = 174,                   /* breaks  */
  YYSYMBOL_jump_stmt = 175,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 176,                 /* exp_stmt  */
  YYSYMBOL_exp = 177,                      /* exp  */
  YYSYMBOL_binary_exp = 178,               /* binary_exp  */
  YYSYMBOL_call_template = 179,            /* call_template  */
  YYSYMBOL_op = 180,                       /* op  */
  YYSYMBOL_array_exp = 181,                /* array_exp  */
  YYSYMBOL_array_empty = 182,              /* array_empty  */
  YYSYMBOL_dict_list = 183,                /* dict_list  */
  YYSYMBOL_range = 184,                    /* range  */
  YYSYMBOL_array = 185,                    /* array  */
  YYSYMBOL_decl_exp = 186,                 /* decl_exp  */
  YYSYMBOL_func_args = 187,                /* func_args  */
  YYSYMBOL_fptr_args = 188,                /* fptr_args  */
  YYSYMBOL_arg_type = 189,                 /* arg_type  */
  YYSYMBOL_decl_template = 190,            /* decl_template  */
  YYSYMBOL_global = 191,                   /* global  */
  YYSYMBOL_storage_flag = 192,             /* storage_flag  */
  YYSYMBOL_access_flag = 193,              /* access_flag  */
  YYSYMBOL_flag = 194,                     /* flag  */
  YYSYMBOL_final = 195,                    /* final  */
  YYSYMBOL_modifier = 196,                 /* modifier  */
  YYSYMBOL_func_def_base = 197,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 198,            /* abstract_fdef  */
  YYSYMBOL_op_op = 199,                    /* op_op  */
  YYSYMBOL_op_base = 200,                  /* op_base  */
  YYSYMBOL_operator = 201,                 /* operator  */
  YYSYMBOL_op_def = 202,                   /* op_def  */
  YYSYMBOL_func_def = 203,                 /* func_def  */
  YYSYMBOL_type_decl_base = 204,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 205,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 206,         /* type_decl_noflag  */
  YYSYMBOL_option = 207,                   /* option  */
  YYSYMBOL_type_decl_opt = 208,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 209,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 210,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 211,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 212,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 213,               /* union_decl  */
  YYSYMBOL_union_list = 214,               /* union_list  */
  YYSYMBOL_union_def = 215,                /* union_def  */
  YYSYMBOL_var_decl_list = 216,            /* var_decl_list  */
  YYSYMBOL_var_decl = 217,                 /* var_decl  */
  YYSYMBOL_arg_decl = 218,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 219,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 220,                    /* eq_op  */
  YYSYMBOL_rel_op = 221,                   /* rel_op  */
  YYSYMBOL_shift_op = 222,                 /* shift_op  */
  YYSYMBOL_add_op = 223,                   /* add_op  */
  YYSYMBOL_mul_op = 224,                   /* mul_op  */
  YYSYMBOL_opt_exp = 225,                  /* opt_exp  */
  YYSYMBOL_con_exp = 226,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 227,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 228,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 229,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 230,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 231,                  /* and_exp  */
  YYSYMBOL_eq_exp = 232,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 233,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 234,                /* shift_exp  */
  YYSYMBOL_add_exp = 235,                  /* add_exp  */
  YYSYMBOL_mul_exp = 236,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 237,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 238,                 /* cast_exp  */
  YYSYMBOL_unary_op = 239,                 /* unary_op  */
  YYSYMBOL_unary_exp = 240,                /* unary_exp  */
  YYSYMBOL_lambda_list = 241,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 242,               /* lambda_arg  */
  YYSYMBOL_type_list = 243,                /* type_list  */
  YYSYMBOL_call_paren = 244,               /* call_paren  */
  YYSYMBOL_post_op = 245,                  /* post_op  */
  YYSYMBOL_dot_exp = 246,                  /* dot_exp  */
  YYSYMBOL_post_exp = 247,                 /* post_exp  */
  YYSYMBOL_interp_exp = 248,               /* interp_exp  */
  YYSYMBOL_interp = 249,                   /* interp  */
  YYSYMBOL_prim_exp = 250                  /* prim_exp  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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
#define YYFINAL  212
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2092

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  120
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  326
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  576

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   374


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
     115,   116,   117,   118,   119
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   176,   176,   177,   180,   184,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   201,   203,   210,   219,   223,
     224,   228,   234,   235,   239,   243,   248,   248,   250,   260,
     260,   261,   261,   263,   267,   272,   278,   278,   280,   285,
     291,   299,   305,   309,   314,   317,   317,   318,   318,   320,
     323,   330,   330,   331,   331,   332,   341,   341,   343,   347,
     352,   356,   361,   366,   374,   376,   380,   386,   388,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   419,   424,   424,   425,   430,   446,   451,   451,   454,
     459,   459,   462,   474,   478,   483,   494,   505,   506,   510,
     519,   529,   539,   550,   563,   581,   590,   604,   612,   619,
     628,   639,   639,   641,   646,   650,   655,   661,   666,   672,
     673,   684,   685,   686,   687,   690,   690,   692,   692,   692,
     692,   692,   695,   696,   699,   703,   704,   705,   709,   710,
     713,   714,   715,   719,   719,   720,   721,   723,   723,   724,
     724,   725,   725,   727,   727,   729,   731,   731,   733,   734,
     737,   738,   739,   740,   743,   743,   745,   745,   748,   753,
     763,   773,   773,   773,   773,   773,   775,   785,   794,   804,
     810,   810,   812,   814,   816,   819,   819,   819,   820,   826,
     834,   844,   845,   860,   861,   865,   866,   869,   869,   869,
     870,   871,   871,   874,   875,   877,   877,   879,   879,   882,
     886,   887,   889,   893,   899,   909,   913,   919,   920,   922,
     923,   924,   925,   925,   927,   927,   928,   928,   928,   928,
     929,   929,   930,   930,   931,   931,   931,   933,   933,   934,
     935,   937,   940,   940,   941,   941,   942,   942,   943,   943,
     944,   944,   945,   945,   946,   946,   947,   947,   948,   948,
     949,   949,   950,   950,   952,   952,   955,   955,   955,   956,
     956,   956,   956,   959,   960,   961,   964,   965,   966,   967,
     970,   975,   980,   980,   983,   987,   993,   993,   995,   995,
     997,  1006,  1007,  1009,  1011,  1014,  1016,  1020,  1021,  1022,
    1024,  1025,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051
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
  "late", "<integer>", "<float>", "<litteral string>", "<litteral char>",
  "`", "INTERP_EXP", "<comment>", "#include", "#define", "#pragma",
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "import",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "<identifier>", "+", "++", "-", "--", "*", "/", "%", "$", "?", "OPTIONS",
  ":", "::", "?:", "new", "spork", "fork", "<<<", ">>>", "&&", "==", ">=",
  ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^", "||", ":[", "~", "!",
  "@", "<dynamic_operator>", "RANGE_EMPTY", "UMINUS", "UTIMES", "=",
  "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "class_ext",
  "traits", "extend_body", "extend_def", "class_body", "id_list",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt",
  "retry_stmt", "handler", "$@1", "handler_list", "try_stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "match_stmt",
  "flow", "loop_stmt", "varloop_stmt", "defer_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "dict_list", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "opt_var", "type_decl_flag2", "union_decl",
  "union_list", "union_def", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-407)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-245)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     537,  -407,   945,  1357,   646,   177,  -407,    54,  -407,   855,
    -407,    69,    72,    95,  1881,   177,  1240,  -407,  -407,   855,
      32,   134,   177,   177,   177,   310,   105,  -407,  -407,   177,
     177,  -407,  1881,   855,    73,  -407,  -407,  -407,  -407,  -407,
    1416,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,   310,   310,   149,
     149,  1881,  -407,  -407,   196,   537,  -407,  -407,  -407,  -407,
     855,  -407,   177,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,   199,  -407,  -407,  -407,  -407,    49,  -407,  -407,   204,
      34,  -407,   210,  -407,  -407,  -407,  -407,  -407,   220,  -407,
    -407,  -407,   177,  -407,  -407,   -24,   115,   121,   114,   125,
      -6,   165,    78,   128,    87,   157,   155,  1981,  -407,   149,
    -407,  -407,   273,   186,  -407,  -407,  1881,  -407,   251,   255,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,   261,  -407,   263,  -407,  -407,  -407,  -407,
    -407,  1881,    39,  -407,   755,    28,   264,  -407,  -407,  -407,
    -407,   266,  -407,  -407,   164,   183,  1881,   203,  1939,  1299,
     205,   272,   208,  -407,   270,   256,  -407,  -407,   211,   194,
     213,   214,   177,  -407,    46,  -407,   206,   184,   252,   151,
    -407,   289,    97,  -407,   293,   310,   237,    81,  -407,  -407,
     240,  1416,  -407,   259,  -407,  -407,  -407,   318,   646,  -407,
    -407,   229,  -407,  -407,  -407,   310,  1881,  -407,   323,  -407,
    1881,  1881,  1881,  1881,  1474,  -407,   227,   266,  -407,  -407,
     411,    92,   310,   310,  1881,  1981,  1981,  1981,  1981,  1981,
    1981,  -407,  -407,  1981,  1981,  1981,  -407,  1981,  -407,  1981,
    1981,   310,  -407,  -407,  1532,   250,   310,   328,  -407,  -407,
    -407,  1416,    -5,  -407,  -407,   320,   327,  1591,  -407,  1881,
    -407,   310,    47,  -407,   310,  -407,   310,   329,  1881,   332,
      48,  1299,    45,   324,   338,  -407,  -407,  -407,   256,   236,
     307,  -407,  -407,   236,   206,   310,   184,   274,   340,  -407,
      97,  -407,  -407,  -407,  1649,  -407,  -407,   310,    47,   276,
     236,  -407,  -407,  -407,  1416,  1881,  -407,   278,   351,  -407,
    -407,  -407,  -407,  -407,  -407,   350,   266,   356,    47,   266,
     236,   236,  -407,  -407,   236,   286,  -407,   279,  -407,   115,
     121,   114,   125,    -6,   165,    78,   128,    87,   157,   155,
    -407,  -407,  -407,   120,  1707,  -407,  -407,  -407,  1765,  -407,
    -407,   360,    42,   287,  -407,   365,  -407,   364,   101,   294,
     296,   855,   371,  1881,   855,  1823,   298,   366,  1881,  -407,
      89,   274,   303,  -407,   304,   342,  -407,   206,   376,   236,
    -407,  -407,   384,    44,  -407,   287,  -407,   385,   361,   236,
     381,  -407,   388,   236,   855,    47,  -407,   109,   391,   393,
     399,   401,   289,   403,  -407,  1981,   310,  -407,  -407,   402,
    -407,  -407,  1881,   289,   322,   310,  -407,  -407,  -407,   236,
     236,   397,  -407,    52,  -407,   855,   406,   326,  -407,  1881,
     394,   392,  -407,   116,  -407,   855,   206,   126,   310,   206,
     409,  1056,   293,   343,    70,  -407,  -407,  -407,   310,   352,
     353,   416,  -407,   336,  -407,   404,  -407,   425,  -407,  -407,
    -407,   310,   310,   310,  -407,   286,  -407,  -407,  -407,  -407,
    -407,   210,  1881,  -407,   293,  -407,   855,   855,  -407,   855,
     366,    66,  1881,   344,   855,  -407,  -407,  -407,   354,  -407,
    -407,   424,   537,  -407,  1148,  -407,  1056,   427,  -407,  -407,
    -407,    47,  -407,  -407,  -407,  -407,  -407,  -407,  -407,   431,
     362,  -407,   300,  1881,   439,  -407,   440,   441,   445,  -407,
     -19,    47,  -407,  -407,  -407,  1881,   855,  -407,   855,  -407,
     206,   537,   537,   435,  -407,  -407,  -407,   361,  -407,    53,
    -407,  -407,   -19,  -407,   310,  -407,  -407,   443,    86,  -407,
     855,  -407,   442,  -407,   447,  -407,   446,   180,   449,  -407,
     855,  -407,  -407,  -407,  -407,  -407
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   128,     0,     0,     0,   173,   217,     0,   107,     0,
     108,     0,     0,     0,     0,   173,     0,   121,   122,     0,
       0,     0,   173,   173,   173,     0,   190,    53,    54,   173,
     173,   214,     0,     0,   293,   213,   313,   314,   316,   317,
       0,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,   312,   298,   276,   299,   277,     0,     0,   280,
     281,     0,   282,   279,     0,     2,     4,     8,     9,    10,
       6,    13,   173,    14,    83,    86,    42,    90,    89,    11,
      84,     0,    81,    87,    88,    82,     0,    85,    80,     0,
     129,   153,   154,   320,   318,   131,   195,   196,     0,   197,
       7,   218,   173,    12,   155,   249,   252,   254,   256,   258,
     260,   262,   264,   266,   268,   270,   272,     0,   274,     0,
     278,   306,   283,   315,   301,   326,     0,   242,   276,   277,
     245,   246,   141,   137,   239,   237,   238,   236,   138,   240,
     241,   139,   140,     0,   181,     0,   183,   182,   185,   184,
     145,     0,     0,    67,     0,   129,     0,   166,   165,   168,
     169,     0,   167,   171,   170,   175,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,   325,    91,     0,   175,
       0,     0,   173,   201,     0,    59,    31,   136,   205,   209,
     211,    57,     0,   191,     0,     0,     0,     0,   118,   290,
     292,     0,   307,     0,   310,   289,    58,   286,     0,   287,
     288,     0,     1,     5,    43,     0,     0,   126,     0,   127,
       0,     0,     0,     0,     0,   147,     0,     0,   280,   281,
       0,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,   243,     0,   244,     0,
       0,     0,   284,   323,     0,     0,     0,     0,   302,   303,
     305,     0,     0,   322,   324,     0,   142,     0,    68,     0,
     319,   158,     0,   172,     0,   174,     0,     0,     0,   312,
       0,     0,     0,     0,     0,   123,    92,    94,    96,   164,
     175,   177,    15,   164,    31,     0,   136,     0,     0,   203,
       0,   207,   208,   210,     0,    56,   212,   160,     0,     0,
     164,   117,   291,   308,     0,   248,   321,     0,     0,   125,
     130,   134,   132,   133,   146,     0,     0,     0,     0,     0,
     164,   164,   193,   192,   164,     0,   247,     0,   251,   253,
     255,   257,   259,   261,   263,   265,   267,   269,   271,   273,
     275,   300,   294,     0,     0,   304,   311,   152,     0,   143,
     151,     0,   148,     0,    62,   157,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,     0,   103,
       0,     0,    98,    95,     0,    30,   176,    31,     0,   164,
     204,    38,    32,     0,   206,   233,    65,   159,    47,   164,
       0,   309,     0,   164,     0,     0,   194,     0,     0,     0,
       0,     0,   227,   156,   226,     0,     0,   135,   297,     0,
     144,   150,     0,   229,    61,     0,   161,   179,   178,   164,
     164,   119,   110,     0,   115,     0,     0,     0,   215,     0,
     101,   106,   104,     0,    97,     0,    31,     0,     0,    31,
       0,    27,     0,     0,     0,    33,   232,    64,     0,     0,
      48,     0,    44,     0,   285,    51,   109,     0,   199,   198,
     189,     0,     0,     0,   228,     0,   250,   295,   296,   149,
     231,   230,     0,    63,     0,    49,     0,     0,   111,     0,
     216,     0,     0,     0,     0,    99,    93,    40,     0,   163,
      29,     0,    37,    20,    22,    24,    26,     0,    19,    18,
      23,     0,    39,    35,    34,    66,    45,    46,    50,   201,
       0,   222,     0,     0,     0,   200,     0,     0,     0,   225,
      60,     0,   120,   116,   112,     0,     0,   100,     0,   105,
      31,    37,    36,     0,    21,    25,    28,    47,   219,     0,
     224,   223,    52,    55,     0,   187,   188,     0,     0,   113,
     102,    41,     0,    17,     0,   220,     0,     0,     0,   180,
       0,    16,   202,   221,   186,   114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -407,  -407,   456,   -59,   219,  -407,   -47,  -407,   -48,  -407,
    -407,  -407,  -407,  -290,  -407,  -407,   -81,    80,  -407,    -3,
    -407,  -407,   -88,  -407,  -407,  -407,  -407,  -407,   -49,    14,
     -20,  -402,  -407,     5,  -407,   -46,  -401,    -9,  -407,   176,
    -407,  -407,  -407,  -407,  -407,  -407,    85,  -407,  -407,   301,
    -407,  -407,  -407,  -407,  -407,  -407,  -162,    25,    -1,  -139,
    -407,   -80,  -406,    50,   345,  -183,   -33,  -149,  -395,  -292,
    -267,   444,   305,  -407,    15,  -146,  -407,  -407,  -407,   241,
     247,  -407,  -407,  -375,   290,  -407,   175,  -407,   284,  -407,
     -23,   -11,  -407,   -40,  -407,  -407,  -407,     9,    91,  -407,
    -407,  -100,   -93,   -91,   -85,   173,  -220,  -407,   260,   267,
     262,   258,   280,   275,   257,   271,   281,   254,   269,   -77,
     389,  -407,  -407,  -407,  -407,   -82,  -407,  -407,  -176,  -407,
    -407
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    64,   542,    66,   178,    67,   503,   504,   505,   506,
     507,    68,   449,   298,   454,    69,   543,   392,   447,    70,
     194,   460,   461,   161,    71,   524,    72,    73,   185,   207,
     230,   364,   365,   396,   397,    74,    75,    76,    77,   287,
     382,   288,    78,   445,    79,   493,   379,   380,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   257,
     144,    91,    92,   156,    93,    94,    95,   272,   308,   368,
     385,   162,   163,   164,   179,   276,   292,    96,    97,   145,
     231,    98,    99,   100,   187,   188,   189,   303,   190,   191,
     101,   439,   102,   521,   522,   103,   413,   414,   424,   457,
     243,   146,   147,   148,   149,   337,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   200,   119,   353,   355,   120,   121,   122,   204,   123,
     124
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     167,   154,   192,   155,   388,   186,   213,   281,   305,   206,
     175,   244,   225,   209,   210,   338,   398,   481,   455,   245,
     165,   232,   247,   483,   198,   313,   387,   143,   152,   249,
     172,   197,   220,   291,   192,   192,   407,   205,   220,   171,
     260,   174,   258,   400,   195,   196,   422,   266,   299,   376,
     508,   182,   217,   366,   374,     5,   565,   511,   487,   166,
     566,   214,   234,   409,   410,   203,   235,   411,   221,   526,
     527,   528,   536,   253,   168,   192,   510,   169,   328,   514,
     513,     5,   221,   269,   236,   356,   211,   215,    26,   531,
     208,   241,   570,   222,   223,   332,   242,   450,   367,   441,
     170,   208,   182,   508,   427,   508,   218,   222,   223,   176,
     208,   378,   468,   467,    26,   221,   269,   233,   208,   375,
     453,   221,   452,   183,   416,   262,   495,   267,   417,   221,
     498,   510,   462,   377,   499,   221,   465,   177,   401,   221,
     222,   223,   158,   567,   386,   214,   222,   223,   331,   232,
     199,   311,   568,   221,   222,   223,   497,   390,   208,   501,
     222,   223,   484,   485,   222,   223,   317,   280,   221,   248,
     130,   131,   192,   221,   183,   309,   265,   405,   222,   223,
     408,   139,   140,   573,   335,   333,   359,   224,   321,   322,
     323,   277,   192,   222,   223,   476,   212,   295,   222,   223,
     157,   158,   184,   192,   216,   154,   127,   219,   246,   192,
     192,   237,   334,   157,   158,   159,   160,   224,     8,   547,
      10,   239,   363,   274,   275,   182,   203,   238,   192,   474,
     240,   350,   182,   192,   290,   275,   352,   301,   302,   557,
     251,   318,   180,   181,   244,   320,   250,   261,   192,   325,
     561,   192,   245,   192,   369,   247,   370,  -243,   395,   336,
     226,  -244,   249,   134,   135,   136,   137,   263,   362,   264,
      31,   271,   192,   285,   270,   389,    35,    31,  -136,   152,
     254,   283,   282,    35,   192,   284,   203,   286,   289,   509,
     293,   294,   361,   256,   297,   300,   304,   183,   307,    53,
      54,    55,    56,   372,   183,   182,    53,    54,    55,    56,
     550,   227,   228,   229,   310,   182,   255,   312,   326,   228,
     229,   314,   428,   315,   316,   184,   319,   351,   357,   325,
      62,    63,   184,   354,   358,   371,   373,    62,    63,   203,
     336,   182,   509,   480,   509,   384,   378,   381,   275,   393,
      31,   391,    53,   399,    55,   403,    35,   404,   266,   406,
      31,   469,   431,   412,   423,   434,    35,   415,   421,   425,
     426,   429,   433,   430,   432,   437,   363,   519,   438,   419,
     444,   446,   256,   325,   448,   451,    31,   183,   453,   458,
     463,   459,    35,   192,   464,   466,   477,   470,   471,   206,
     436,   225,   192,   440,   472,   184,   473,   475,   478,   395,
     482,   486,   489,   519,   490,   184,   494,   492,   502,   518,
     512,   262,   363,   363,   363,   192,   488,   523,   525,   516,
     517,   540,   538,   541,   548,   192,   496,   546,   491,   549,
     192,   184,   553,   520,   554,   563,   569,   555,   192,   192,
     192,   556,   571,   572,   150,   574,    65,   544,   545,   564,
     562,   443,   500,   515,   383,   442,   329,   259,   278,   273,
     193,   330,   479,   327,   296,   394,   306,   532,   533,   535,
     534,   530,   551,   213,   529,   539,   456,   225,   402,   127,
      53,   246,    55,   248,   130,   131,   339,   342,   132,   192,
     341,   345,   520,   348,   340,   363,   252,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   346,   537,   344,   349,
     343,     0,   552,   141,   142,     0,     0,   559,   347,     0,
       0,   192,     0,     0,   558,   560,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,     0,     5,     6,
       7,   214,     8,     9,    10,    11,    12,    13,    14,     0,
       0,   575,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
       0,    26,    27,    28,    29,     0,    30,    31,     0,    32,
      33,    34,     0,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,    52,     0,    53,    54,    55,    56,
       0,     0,    57,     0,     0,     0,     0,     0,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,     1,
       0,     2,     0,     3,     0,     4,   153,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    32,    33,
      34,     0,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,    52,     0,    53,    54,    55,    56,     0,
       0,    57,     0,     0,     0,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,     1,     0,
       2,     0,     3,     0,     4,   268,     0,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
       0,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,    52,     0,    53,    54,    55,    56,     0,     0,
      57,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     4,    62,    63,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
       0,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,    52,     0,    53,    54,    55,    56,     0,     0,
      57,     0,     0,     0,     0,     0,    58,    59,    60,    61,
       2,   125,     3,     0,   126,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    34,
       0,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,   127,    53,   128,    55,   129,   130,   131,
      57,     0,   132,     0,     0,     0,    58,    59,    60,    61,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
       0,     0,     0,     0,     0,    62,    63,   141,   142,     1,
       0,     2,     0,     3,     0,   126,     0,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      34,     0,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,    52,     0,    53,    54,    55,    56,     0,
       0,    57,     0,     0,     0,     0,     0,    58,    59,    60,
      61,     1,     0,     2,     0,     3,     0,   126,     0,     0,
       6,     0,     0,     0,     0,     0,    62,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    34,     0,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,    52,     0,    53,    54,    55,
      56,     0,     0,    57,     0,     0,     0,     0,     0,    58,
      59,    60,    61,   173,     0,     2,     0,     3,     0,   126,
       0,     0,     6,     0,     0,     0,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,    34,     0,    35,    36,    37,    38,
      39,    40,     1,     0,     2,     0,     3,     0,   126,     0,
       0,     6,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,     0,     0,    57,     0,     0,     0,    20,
       0,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      62,    63,     0,    34,     0,    35,    36,    37,    38,    39,
      40,     0,     2,     0,     3,   150,   126,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    52,     0,    53,    54,
      55,    56,     0,     0,    57,     0,     0,    20,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    62,
      63,    34,     0,    35,    36,    37,    38,    39,    40,     0,
       0,     2,     0,     3,     0,   126,     0,     0,     6,     0,
       0,     0,     0,     0,    52,     0,    53,    54,    55,    56,
       0,     0,    57,     0,     0,   151,    20,     0,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    62,    63,     0,
      34,     0,    35,    36,    37,    38,    39,    40,     0,     2,
       0,     3,   324,   126,     0,     0,     6,     0,     0,     0,
     201,   202,     0,    52,     0,    53,    54,    55,    56,     0,
       0,    57,     0,     0,    20,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    62,    63,    34,     0,
      35,    36,    37,    38,    39,    40,     0,     2,     0,     3,
       0,   126,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    52,     0,    53,    54,    55,    56,     0,     0,    57,
       0,     0,    20,     0,     0,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    62,    63,    34,     0,    35,    36,
      37,    38,    39,    40,     0,     0,     2,     0,     3,   360,
     126,     0,     0,     6,     0,     0,     0,     0,     0,    52,
       0,    53,    54,    55,    56,     0,     0,    57,     0,     0,
     151,    20,     0,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    62,    63,     0,    34,     0,    35,    36,    37,
      38,    39,    40,     0,     2,     0,     3,   150,   126,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,     0,     0,    57,     0,     0,    20,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    62,    63,    34,     0,    35,    36,    37,    38,    39,
      40,     0,     2,   418,     3,     0,   126,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    52,     0,    53,    54,
      55,    56,     0,     0,    57,     0,     0,    20,     0,     0,
      58,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    62,
      63,    34,     0,    35,    36,    37,    38,    39,    40,     0,
       2,     0,     3,   420,   126,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    52,     0,    53,    54,    55,    56,
       0,     0,    57,     0,     0,    20,     0,     0,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    62,    63,    34,
       0,    35,    36,    37,    38,    39,    40,     0,     2,   435,
       3,     0,   126,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,     0,     0,
      57,     0,     0,    20,     0,     0,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    62,    63,    34,     0,    35,
      36,    37,    38,    39,    40,     0,     2,     0,     3,     0,
     126,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      52,     0,    53,    54,    55,    56,     0,     0,    57,     0,
       0,    20,     0,     0,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    62,    63,    34,     0,    35,    36,    37,
      38,    39,    40,     0,     2,     0,     3,     0,   126,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,     0,     0,    57,     0,     0,    20,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,    31,
     126,    62,    63,    34,     0,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,   279,     0,    53,    54,
      55,    56,     0,     0,    57,     0,     0,     0,     0,     0,
      58,    59,    60,    61,     0,    34,     0,     0,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,    62,
      63,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,     0,     0,    57,     0,     0,     0,
       0,     0,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,   294,    25,    65,   169,   191,    58,
      19,   111,    92,    59,    60,   235,   308,   423,   393,   112,
       5,    98,   113,   425,    33,   201,   293,     2,     3,   114,
      15,    32,     4,   179,    57,    58,   328,    57,     4,    14,
     122,    16,   122,   310,    29,    30,     4,     8,   187,     4,
     451,     5,     3,     6,     6,    11,     3,   452,     6,     5,
       7,    70,    86,   330,   331,    40,    90,   334,    87,   471,
     472,   473,     6,   119,     5,    98,   451,     5,   227,   454,
      10,    11,    87,    88,   108,   261,    61,    72,    44,   484,
       9,    97,     6,   112,   113,     3,   102,   387,    51,    10,
       5,     9,     5,   504,     3,   506,    57,   112,   113,    77,
       9,    22,     3,   405,    44,    87,    88,   102,     9,   281,
       4,    87,   389,    77,     4,   126,    10,    88,     8,    87,
       4,   506,   399,    88,     8,    87,   403,     3,   314,    87,
     112,   113,    37,   549,   290,   154,   112,   113,   230,   226,
      77,   197,   554,    87,   112,   113,   446,   296,     9,   449,
     112,   113,   429,   430,   112,   113,   215,   168,    87,    82,
      83,    84,   195,    87,    77,   195,   151,   326,   112,   113,
     329,   103,   104,     3,   233,   231,   266,     7,   221,   222,
     223,   166,   215,   112,   113,   415,     0,   182,   112,   113,
      36,    37,   105,   226,     5,   208,    78,     3,    80,   232,
     233,    96,   232,    36,    37,    38,    39,     7,    15,   511,
      17,   107,   271,    40,    41,     5,   201,   106,   251,   412,
     105,   251,     5,   256,    40,    41,   256,    86,    87,   531,
      85,   216,    23,    24,   344,   220,    89,    61,   271,   224,
     540,   274,   345,   276,   274,   346,   276,     6,   307,   234,
      40,     6,   347,    98,    99,   100,   101,     6,   269,     6,
      50,     5,   295,     3,    10,   295,    56,    50,     5,   254,
       7,     9,    77,    56,   307,    77,   261,    31,    77,   451,
      77,    77,   267,   109,    88,    43,     7,    77,     5,    79,
      80,    81,    82,   278,    77,     5,    79,    80,    81,    82,
      10,    91,    92,    93,    77,     5,    43,    77,    91,    92,
      93,    62,   368,     5,    95,   105,     3,    77,     8,   304,
     110,   111,   105,     5,     7,     6,     4,   110,   111,   314,
     315,     5,   504,   423,   506,   109,    22,     9,    41,     9,
      50,    77,    79,    77,    81,    77,    56,     6,     8,     3,
      50,   407,   371,    77,    77,   374,    56,    88,     8,     4,
       6,    77,   373,    77,     3,    77,   425,    77,    12,   354,
      77,    77,   109,   358,    42,     9,    50,    77,     4,     4,
       9,    30,    56,   416,     6,   404,   416,     6,     5,   448,
     375,   481,   425,   378,     5,   105,     5,     4,     6,   458,
      88,    14,     6,    77,    88,   105,    24,    23,     9,     3,
      77,   422,   471,   472,   473,   448,   435,    23,     3,    77,
      77,    77,    88,     9,     3,   458,   445,    10,   439,    77,
     463,   105,     3,   463,     4,    10,     3,     6,   471,   472,
     473,     6,    10,     6,     8,     6,     0,   504,   506,   547,
     541,   381,   448,   458,   288,   380,    55,   122,   167,   164,
      26,   230,   422,   226,   184,   300,   192,   486,   487,   490,
     489,   482,   522,   542,   475,   494,   395,   567,   315,    78,
      79,    80,    81,    82,    83,    84,   236,   239,    87,   522,
     238,   244,   522,   249,   237,   554,   117,    -1,    97,    98,
      99,   100,   101,   102,   103,   104,   245,   492,   243,   250,
     240,    -1,   523,   112,   113,    -1,    -1,   536,   247,    -1,
      -1,   554,    -1,    -1,   535,   538,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,   560,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,   570,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    -1,    49,    50,    -1,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    77,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    77,    -1,    79,    80,    81,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,     3,    -1,
       5,    -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    77,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,   110,   111,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    77,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
       5,     6,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    77,    -1,    79,    80,    81,    82,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,     3,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    77,    -1,    79,    80,    81,
      82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,     3,    -1,     5,    -1,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   110,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      80,    81,    82,    -1,    -1,    85,    -1,    -1,    -1,    30,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
     110,   111,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,     5,    -1,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    -1,    -1,    30,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   110,
     111,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,     5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    -1,    -1,    88,    30,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,   110,   111,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,     5,
      -1,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    -1,
      -1,    85,    -1,    -1,    30,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   110,   111,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    80,    81,    82,    -1,    -1,    85,
      -1,    -1,    30,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   110,   111,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    -1,     5,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,
      88,    30,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,   110,   111,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,    30,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   110,   111,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,     5,     6,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    -1,    -1,    30,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   110,
     111,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
       5,    -1,     7,     8,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    80,    81,    82,
      -1,    -1,    85,    -1,    -1,    30,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   110,   111,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,     5,     6,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    80,    81,    82,    -1,    -1,
      85,    -1,    -1,    30,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   110,   111,    54,    -1,    56,
      57,    58,    59,    60,    61,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    80,    81,    82,    -1,    -1,    85,    -1,
      -1,    30,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   110,   111,    54,    -1,    56,    57,    58,
      59,    60,    61,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,    30,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    50,
       9,   110,   111,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,
      81,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    80,    81,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    77,    79,    80,    81,    82,    85,    91,    92,
      93,    94,   110,   111,   121,   122,   123,   125,   131,   135,
     139,   144,   146,   147,   155,   156,   157,   158,   162,   164,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   181,   182,   184,   185,   186,   197,   198,   201,   202,
     203,   210,   212,   215,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   242,
     245,   246,   247,   249,   250,     6,     9,    78,    80,    82,
      83,    84,    87,    97,    98,    99,   100,   101,   102,   103,
     104,   112,   113,   177,   180,   199,   221,   222,   223,   224,
       8,    88,   177,    10,   139,   178,   183,    36,    37,    38,
      39,   143,   191,   192,   193,   194,     5,   157,     5,     5,
       5,   177,   194,     3,   177,   157,    77,     3,   124,   194,
     124,   124,     5,    77,   105,   148,   150,   204,   205,   206,
     208,   209,   210,   191,   140,   194,   194,   178,   157,    77,
     241,    74,    75,   177,   248,   150,   148,   149,     9,   155,
     155,   177,     0,   123,   157,   194,     5,     3,    57,     3,
       4,    87,   112,   113,     7,   181,    40,    91,    92,    93,
     150,   200,   239,   194,    86,    90,   108,    96,   106,   107,
     105,    97,   102,   220,   221,   222,    80,   223,    82,   224,
      89,    85,   240,   155,     7,    43,   109,   179,   181,   184,
     245,    61,   178,     6,     6,   177,     8,    88,    10,    88,
      10,     5,   187,   192,    40,    41,   195,   177,   169,    77,
     178,   176,    77,     9,    77,     3,    31,   159,   161,    77,
      40,   195,   196,    77,    77,   194,   204,    88,   133,   179,
      43,    86,    87,   207,     7,   185,   208,     5,   188,   150,
      77,   155,    77,   248,    62,     5,    95,   148,   177,     3,
     177,   186,   186,   186,     8,   177,    91,   200,   187,    55,
     199,   245,     3,   155,   150,   148,   177,   225,   226,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     150,    77,   150,   243,     5,   244,   248,     8,     7,   181,
       8,   177,   178,   148,   151,   152,     6,    51,   189,   150,
     150,     6,   177,     4,     6,   176,     4,    88,    22,   166,
     167,     9,   160,   159,   109,   190,   195,   190,   133,   150,
     179,    77,   137,     9,   206,   148,   153,   154,   189,    77,
     190,   248,   225,    77,     6,   187,     3,   189,   187,   190,
     190,   190,    77,   216,   217,    88,     4,     8,     6,   177,
       8,     8,     4,    77,   218,     4,     6,     3,   155,    77,
      77,   157,     3,   178,   157,     6,   177,    77,    12,   211,
     177,    10,   166,   137,    77,   163,    77,   138,    42,   132,
     133,     9,   190,     4,   134,   203,   218,   219,     4,    30,
     141,   142,   190,     9,     6,   190,   157,   189,     3,   155,
       6,     5,     5,     5,   185,     4,   226,   150,     6,   183,
     181,   182,    88,   151,   190,   190,    14,     6,   157,     6,
      88,   178,    23,   165,    24,    10,   157,   133,     4,     8,
     149,   133,     9,   126,   127,   128,   129,   130,   156,   176,
     203,   188,    77,    10,   203,   153,    77,    77,     3,    77,
     150,   213,   214,    23,   145,     3,   151,   151,   151,   217,
     178,   188,   157,   157,   157,   211,     6,   177,    88,   157,
      77,     9,   122,   136,   126,   128,    10,   189,     3,    77,
      10,   213,   178,     3,     4,     6,     6,   189,   178,   157,
     139,   133,   136,    10,   142,     3,     7,   182,   151,     3,
       6,    10,     6,     3,     6,   157
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   120,   121,   121,   122,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   132,
     132,   133,   133,   134,   134,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   141,   141,   142,   142,   143,
     144,   145,   145,   146,   146,   147,   148,   148,   149,   150,
     151,   151,   152,   152,   153,   154,   154,   155,   155,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   158,   160,   159,   161,   161,   162,   163,   163,   164,
     165,   165,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   172,   173,
     173,   174,   174,   175,   175,   175,   175,   176,   176,   177,
     177,   178,   178,   178,   178,   179,   179,   180,   180,   180,
     180,   180,   181,   181,   181,   182,   182,   182,   183,   183,
     184,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   192,   192,   193,   193,
     194,   194,   194,   194,   195,   195,   196,   196,   197,   197,
     198,   199,   199,   199,   199,   199,   200,   200,   200,   200,
     201,   201,   202,   202,   202,   203,   203,   203,   203,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   207,
     208,   209,   209,   210,   210,   211,   211,   212,   212,   213,
     213,   213,   214,   214,   215,   216,   216,   217,   217,   218,
     218,   218,   219,   219,   220,   220,   221,   221,   221,   221,
     222,   222,   223,   223,   224,   224,   224,   225,   225,   226,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   233,   233,   234,   234,   235,   235,
     236,   236,   237,   237,   238,   238,   239,   239,   239,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   247,   247,   247,   247,   247,   247,   248,   248,   248,
     249,   249,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
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
       2,     0,     5,     1,     2,     7,     5,     1,     1,     5,
       5,     6,     7,     8,    10,     5,     7,     3,     2,     5,
       7,     1,     1,     3,     2,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     3,     5,
       5,     4,     4,     1,     1,     1,     4,     2,     1,     2,
       1,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     2,     1,     5,     5,
       9,     1,     1,     1,     1,     1,     8,     6,     6,     4,
       1,     2,     3,     3,     4,     1,     1,     1,     5,     5,
       6,     1,     8,     2,     3,     1,     3,     1,     1,     0,
       2,     1,     2,     1,     1,     1,     0,     1,     1,     2,
       3,     4,     1,     2,     7,     3,     1,     1,     2,     1,
       2,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       5,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     3,     3,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     1,     1,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     2,     3,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


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
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (arg);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

  YYLOCATION_PRINT (yyo, yylocationp);
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
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2427 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 177 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2433 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 180 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2442 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 184 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2451 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 190 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2457 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 191 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2463 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 192 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2469 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2475 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2481 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2487 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2493 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2499 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2505 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 201 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2511 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 204 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2522 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 211 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2534 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 219 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2544 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 224 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2553 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 228 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2562 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 234 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2568 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 235 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2574 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 239 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2583 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 243 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2592 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 248 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2598 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 251 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2611 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 260 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2617 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 260 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2623 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 261 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2629 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 261 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2635 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 263 "src/gwion.y"
             {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
  }
#line 2644 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 267 "src/gwion.y"
                         {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2653 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 272 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2662 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 278 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2668 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 281 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), sizeof(Symbol), 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2677 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 286 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2686 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 291 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), sizeof(Specialized), 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2699 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 299 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2709 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 305 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2718 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 309 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2727 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 314 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2734 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 317 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2740 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 317 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2746 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 318 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2752 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 318 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2758 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 320 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2765 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 323 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2776 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 330 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2782 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 330 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2788 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 331 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2794 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 331 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2800 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 332 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2813 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 341 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2819 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 343 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2827 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 347 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2835 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 352 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2844 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 356 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2853 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 361 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2863 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 366 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2875 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 374 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 2881 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 376 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 2890 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 380 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 2899 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 386 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 2906 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 388 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 2913 "src/parser.c"
    break;

  case 69: /* stmt_pp: "<comment>"  */
#line 392 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 2919 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#include"  */
#line 393 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 2925 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#define"  */
#line 394 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 2931 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#pragma"  */
#line 395 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2937 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#undef"  */
#line 396 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 2943 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifdef"  */
#line 397 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2949 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifndef"  */
#line 398 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2955 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#else"  */
#line 399 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 2961 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#if"  */
#line 400 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 2967 "src/parser.c"
    break;

  case 78: /* stmt_pp: "\n"  */
#line 401 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 2973 "src/parser.c"
    break;

  case 79: /* stmt_pp: "import"  */
#line 402 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 2979 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 419 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 2989 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 424 "src/gwion.y"
                  { arg->handling = true; }
#line 2995 "src/parser.c"
    break;

  case 93: /* handler: "handle" $@1 opt_id stmt  */
#line 424 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3001 "src/parser.c"
    break;

  case 94: /* handler_list: handler  */
#line 425 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), sizeof(Handler), 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3011 "src/parser.c"
    break;

  case 95: /* handler_list: handler_list handler  */
#line 430 "src/gwion.y"
                          {
        if(!(yyvsp[-1].handler_list).has_xid)
        { parser_error(&(yylsp[0]), arg, "`handle` after a catch-all block", 0); YYERROR; }
// handle duplicates in scan0
/*
        Handler_List list = $2;
        while(list) {
          if(list->xid == $1->xid)
          { parser_error(&@2, arg, "duplicated `handle`", 0); YYERROR; }
          list = list->next;
        }
*/
mp_vector_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, Handler, (yyvsp[0].handler));
        (yyval.handler_list) = (yyvsp[-1].handler_list);
//        $1->next = $2;
  }
#line 3032 "src/parser.c"
    break;

  case 96: /* try_stmt: "try" stmt handler_list  */
#line 446 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3041 "src/parser.c"
    break;

  case 98: /* opt_id: %empty  */
#line 451 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3047 "src/parser.c"
    break;

  case 99: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 454 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3056 "src/parser.c"
    break;

  case 100: /* when_exp: "when" exp  */
#line 459 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3062 "src/parser.c"
    break;

  case 101: /* when_exp: %empty  */
#line 459 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3068 "src/parser.c"
    break;

  case 102: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 462 "src/gwion.y"
                                      {
    (yyval.stmt) = (struct Stmt_) {
      .stmt_type = 0,//ae_stmt_match, // ????
      .d = { .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
      }},
      .pos = (yylsp[-4])
    };
}
#line 3084 "src/parser.c"
    break;

  case 103: /* match_list: match_case_stmt  */
#line 474 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3093 "src/parser.c"
    break;

  case 104: /* match_list: match_list match_case_stmt  */
#line 478 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3102 "src/parser.c"
    break;

  case 105: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 483 "src/gwion.y"
                                                        {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    }},
    .pos = (yylsp[-6])
  };
}
#line 3117 "src/parser.c"
    break;

  case 106: /* match_stmt: "match" exp "{" match_list "}"  */
#line 494 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3131 "src/parser.c"
    break;

  case 107: /* flow: "while"  */
#line 505 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3137 "src/parser.c"
    break;

  case 108: /* flow: "until"  */
#line 506 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3143 "src/parser.c"
    break;

  case 109: /* loop_stmt: flow "(" exp ")" stmt  */
#line 511 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3156 "src/parser.c"
    break;

  case 110: /* loop_stmt: "do" stmt flow exp ";"  */
#line 520 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3170 "src/parser.c"
    break;

  case 111: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 530 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3184 "src/parser.c"
    break;

  case 112: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 540 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3199 "src/parser.c"
    break;

  case 113: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 551 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .sym = (yyvsp[-5].sym),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .vpos = (yylsp[-5])
      }},
      .pos = (yylsp[-7])
    };
// what to do with opt_var?
// list rem?
  }
#line 3216 "src/parser.c"
    break;

  case 114: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 564 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_each,
      .d = { .stmt_each = {
        .sym = (yyvsp[-5].sym),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .vpos = (yylsp[-7])
      }},
      .pos = (yylsp[-9])
    };
    (yyval.stmt).d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_each.idx->sym = (yyvsp[-7].sym);
    (yyval.stmt).d.stmt_each.idx->pos = (yylsp[-7]);
    (yyval.stmt).d.stmt_each.idx->is_var = (yyvsp[-3].yybool);
    (yyval.stmt).d.stmt_each.idx->v = NULL;
// what to do with opt_var?
// list rem?
  }
#line 3238 "src/parser.c"
    break;

  case 115: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 582 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3251 "src/parser.c"
    break;

  case 116: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 591 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
    (yyval.stmt).d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_loop.idx->sym = (yyvsp[-4].sym);
    (yyval.stmt).d.stmt_loop.idx->pos = (yylsp[-4]);
    (yyval.stmt).d.stmt_loop.idx->v = NULL;
  }
#line 3268 "src/parser.c"
    break;

  case 117: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 604 "src/gwion.y"
                                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = (yyvsp[-1].exp),
    .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  }},
  .pos = (yylsp[-2])
};}
#line 3280 "src/parser.c"
    break;

  case 118: /* defer_stmt: "defer" stmt  */
#line 612 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3290 "src/parser.c"
    break;

  case 119: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 620 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3303 "src/parser.c"
    break;

  case 120: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 629 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3317 "src/parser.c"
    break;

  case 121: /* breaks: "break"  */
#line 639 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3323 "src/parser.c"
    break;

  case 122: /* breaks: "continue"  */
#line 639 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3329 "src/parser.c"
    break;

  case 123: /* jump_stmt: "return" exp ";"  */
#line 641 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3339 "src/parser.c"
    break;

  case 124: /* jump_stmt: "return" ";"  */
#line 646 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3348 "src/parser.c"
    break;

  case 125: /* jump_stmt: breaks "<integer>" ";"  */
#line 650 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3358 "src/parser.c"
    break;

  case 126: /* jump_stmt: breaks ";"  */
#line 655 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3367 "src/parser.c"
    break;

  case 127: /* exp_stmt: exp ";"  */
#line 661 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3377 "src/parser.c"
    break;

  case 128: /* exp_stmt: ";"  */
#line 666 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3386 "src/parser.c"
    break;

  case 129: /* exp: binary_exp  */
#line 672 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3392 "src/parser.c"
    break;

  case 130: /* exp: binary_exp "," exp  */
#line 674 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3404 "src/parser.c"
    break;

  case 132: /* binary_exp: binary_exp "@" decl_exp  */
#line 685 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3410 "src/parser.c"
    break;

  case 133: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 686 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3416 "src/parser.c"
    break;

  case 134: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 687 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3422 "src/parser.c"
    break;

  case 135: /* call_template: ":[" type_list "]"  */
#line 690 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3428 "src/parser.c"
    break;

  case 136: /* call_template: %empty  */
#line 690 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3434 "src/parser.c"
    break;

  case 142: /* array_exp: "[" exp "]"  */
#line 695 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3440 "src/parser.c"
    break;

  case 143: /* array_exp: "[" exp "]" array_exp  */
#line 696 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3448 "src/parser.c"
    break;

  case 144: /* array_exp: "[" exp "]" "[" "]"  */
#line 699 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3454 "src/parser.c"
    break;

  case 145: /* array_empty: "[" "]"  */
#line 703 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3460 "src/parser.c"
    break;

  case 146: /* array_empty: array_empty "[" "]"  */
#line 704 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3466 "src/parser.c"
    break;

  case 147: /* array_empty: array_empty array_exp  */
#line 705 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3472 "src/parser.c"
    break;

  case 148: /* dict_list: binary_exp ":" binary_exp  */
#line 709 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3478 "src/parser.c"
    break;

  case 149: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 710 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3484 "src/parser.c"
    break;

  case 150: /* range: "[" exp ":" exp "]"  */
#line 713 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3490 "src/parser.c"
    break;

  case 151: /* range: "[" exp ":" "]"  */
#line 714 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3496 "src/parser.c"
    break;

  case 152: /* range: "[" ":" exp "]"  */
#line 715 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3502 "src/parser.c"
    break;

  case 156: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 721 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3508 "src/parser.c"
    break;

  case 157: /* func_args: "(" arg_list  */
#line 723 "src/gwion.y"
                          { (yyval.default_args) = (yyvsp[0].default_args); }
#line 3514 "src/parser.c"
    break;

  case 158: /* func_args: "("  */
#line 723 "src/gwion.y"
                                             { (yyval.default_args) = (struct ParserArg){}; }
#line 3520 "src/parser.c"
    break;

  case 159: /* fptr_args: "(" fptr_list  */
#line 724 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3526 "src/parser.c"
    break;

  case 160: /* fptr_args: "("  */
#line 724 "src/gwion.y"
                                            { (yyval.arg_list) = NULL; }
#line 3532 "src/parser.c"
    break;

  case 161: /* arg_type: "..." ")"  */
#line 725 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3538 "src/parser.c"
    break;

  case 162: /* arg_type: ")"  */
#line 725 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3544 "src/parser.c"
    break;

  case 163: /* decl_template: ":[" specialized_list "]"  */
#line 727 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3550 "src/parser.c"
    break;

  case 164: /* decl_template: %empty  */
#line 727 "src/gwion.y"
                                                        { (yyval.specialized_list) = NULL; }
#line 3556 "src/parser.c"
    break;

  case 165: /* global: "global"  */
#line 729 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3562 "src/parser.c"
    break;

  case 166: /* storage_flag: "static"  */
#line 731 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3568 "src/parser.c"
    break;

  case 168: /* access_flag: "private"  */
#line 733 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3574 "src/parser.c"
    break;

  case 169: /* access_flag: "protect"  */
#line 734 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3580 "src/parser.c"
    break;

  case 170: /* flag: access_flag  */
#line 737 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3586 "src/parser.c"
    break;

  case 171: /* flag: storage_flag  */
#line 738 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3592 "src/parser.c"
    break;

  case 172: /* flag: access_flag storage_flag  */
#line 739 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3598 "src/parser.c"
    break;

  case 173: /* flag: %empty  */
#line 740 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3604 "src/parser.c"
    break;

  case 174: /* final: "final"  */
#line 743 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3610 "src/parser.c"
    break;

  case 175: /* final: %empty  */
#line 743 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3616 "src/parser.c"
    break;

  case 176: /* modifier: "abstract" final  */
#line 745 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3622 "src/parser.c"
    break;

  case 178: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 748 "src/gwion.y"
                                                 {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= ((yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), &(yyvsp[0].stmt));
  }
#line 3632 "src/parser.c"
    break;

  case 179: /* func_def_base: "fun" func_base func_args arg_type ";"  */
#line 753 "src/gwion.y"
                                           {
    if((yyvsp[-2].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    SET_FLAG((yyvsp[-3].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), NULL);
  }
#line 3645 "src/parser.c"
    break;

  case 180: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 764 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3658 "src/parser.c"
    break;

  case 186: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 776 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), sizeof(Arg), 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3672 "src/parser.c"
    break;

  case 187: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 786 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3685 "src/parser.c"
    break;

  case 188: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 795 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3699 "src/parser.c"
    break;

  case 189: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 805 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].default_args).args, ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3708 "src/parser.c"
    break;

  case 190: /* operator: "operator"  */
#line 810 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3714 "src/parser.c"
    break;

  case 191: /* operator: "operator" global  */
#line 810 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3720 "src/parser.c"
    break;

  case 192: /* op_def: operator op_base code_stmt  */
#line 813 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), &(yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3726 "src/parser.c"
    break;

  case 193: /* op_def: operator op_base ";"  */
#line 815 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3732 "src/parser.c"
    break;

  case 194: /* op_def: operator "abstract" op_base ";"  */
#line 817 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3738 "src/parser.c"
    break;

  case 198: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 821 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, &(yyvsp[0].stmt));
    }
#line 3748 "src/parser.c"
    break;

  case 199: /* func_def: operator "new" func_args arg_type ";"  */
#line 827 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3760 "src/parser.c"
    break;

  case 200: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 835 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3772 "src/parser.c"
    break;

  case 201: /* type_decl_base: "<identifier>"  */
#line 844 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3778 "src/parser.c"
    break;

  case 202: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 845 "src/gwion.y"
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
#line 3795 "src/parser.c"
    break;

  case 203: /* type_decl_tmpl: type_decl_base call_template  */
#line 860 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3801 "src/parser.c"
    break;

  case 204: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 861 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3807 "src/parser.c"
    break;

  case 206: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 866 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3813 "src/parser.c"
    break;

  case 207: /* option: "?"  */
#line 869 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3819 "src/parser.c"
    break;

  case 208: /* option: OPTIONS  */
#line 869 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3825 "src/parser.c"
    break;

  case 209: /* option: %empty  */
#line 869 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3831 "src/parser.c"
    break;

  case 210: /* type_decl_opt: type_decl_noflag option  */
#line 870 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3837 "src/parser.c"
    break;

  case 212: /* type_decl: type_decl_flag type_decl_opt  */
#line 871 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3843 "src/parser.c"
    break;

  case 213: /* type_decl_flag: "late"  */
#line 874 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3849 "src/parser.c"
    break;

  case 214: /* type_decl_flag: "const"  */
#line 875 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3855 "src/parser.c"
    break;

  case 215: /* opt_var: "var"  */
#line 877 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 3861 "src/parser.c"
    break;

  case 216: /* opt_var: %empty  */
#line 877 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 3867 "src/parser.c"
    break;

  case 217: /* type_decl_flag2: "var"  */
#line 879 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3873 "src/parser.c"
    break;

  case 219: /* union_decl: "<identifier>" ";"  */
#line 882 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 3882 "src/parser.c"
    break;

  case 220: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 886 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 3888 "src/parser.c"
    break;

  case 221: /* union_decl: type_decl_empty "<identifier>" array_empty ";"  */
#line 887 "src/gwion.y"
                                     { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-3].type_decl), .vd = { .xid =(yyvsp[-2].sym), .array = (yyvsp[-1].array_sub), .pos = (yylsp[-2]) }  };}
#line 3894 "src/parser.c"
    break;

  case 222: /* union_list: union_decl  */
#line 889 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), sizeof(Union_Member), 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 3903 "src/parser.c"
    break;

  case 223: /* union_list: union_list union_decl  */
#line 893 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 3912 "src/parser.c"
    break;

  case 224: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 899 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3924 "src/parser.c"
    break;

  case 225: /* var_decl_list: var_decl_list "," var_decl  */
#line 909 "src/gwion.y"
                               {
     mp_vector_add(mpool(arg), &(yyvsp[-2].var_decl_list), struct Var_Decl_, (yyvsp[0].var_decl));
     (yyval.var_decl_list) = (yyvsp[-2].var_decl_list);
  }
#line 3933 "src/parser.c"
    break;

  case 226: /* var_decl_list: var_decl  */
#line 913 "src/gwion.y"
             {
     (yyval.var_decl_list) = new_mp_vector(mpool(arg), sizeof(struct Var_Decl_), 1);
     mp_vector_set((yyval.var_decl_list), struct Var_Decl_, 0, (yyvsp[0].var_decl));
  }
#line 3942 "src/parser.c"
    break;

  case 227: /* var_decl: "<identifier>"  */
#line 919 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 3948 "src/parser.c"
    break;

  case 228: /* var_decl: "<identifier>" array  */
#line 920 "src/gwion.y"
               { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 3954 "src/parser.c"
    break;

  case 229: /* arg_decl: "<identifier>"  */
#line 922 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 3960 "src/parser.c"
    break;

  case 230: /* arg_decl: "<identifier>" array_empty  */
#line 923 "src/gwion.y"
                   { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 3966 "src/parser.c"
    break;

  case 231: /* arg_decl: "<identifier>" array_exp  */
#line 924 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3972 "src/parser.c"
    break;

  case 233: /* fptr_arg_decl: %empty  */
#line 925 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 3978 "src/parser.c"
    break;

  case 247: /* opt_exp: exp  */
#line 933 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 3984 "src/parser.c"
    break;

  case 248: /* opt_exp: %empty  */
#line 933 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 3990 "src/parser.c"
    break;

  case 250: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 936 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3996 "src/parser.c"
    break;

  case 251: /* con_exp: log_or_exp "?:" con_exp  */
#line 938 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4002 "src/parser.c"
    break;

  case 253: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 940 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4008 "src/parser.c"
    break;

  case 255: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 941 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4014 "src/parser.c"
    break;

  case 257: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 942 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4020 "src/parser.c"
    break;

  case 259: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 943 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4026 "src/parser.c"
    break;

  case 261: /* and_exp: and_exp "&" eq_exp  */
#line 944 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4032 "src/parser.c"
    break;

  case 263: /* eq_exp: eq_exp eq_op rel_exp  */
#line 945 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4038 "src/parser.c"
    break;

  case 265: /* rel_exp: rel_exp rel_op shift_exp  */
#line 946 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4044 "src/parser.c"
    break;

  case 267: /* shift_exp: shift_exp shift_op add_exp  */
#line 947 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4050 "src/parser.c"
    break;

  case 269: /* add_exp: add_exp add_op mul_exp  */
#line 948 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4056 "src/parser.c"
    break;

  case 271: /* mul_exp: mul_exp mul_op dur_exp  */
#line 949 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4062 "src/parser.c"
    break;

  case 273: /* dur_exp: dur_exp "::" cast_exp  */
#line 950 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4068 "src/parser.c"
    break;

  case 275: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 953 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4074 "src/parser.c"
    break;

  case 284: /* unary_exp: unary_op unary_exp  */
#line 960 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4080 "src/parser.c"
    break;

  case 285: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 961 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4088 "src/parser.c"
    break;

  case 286: /* unary_exp: "new" type_decl_exp  */
#line 964 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4094 "src/parser.c"
    break;

  case 287: /* unary_exp: "spork" code_stmt  */
#line 965 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yyloc)); }
#line 4100 "src/parser.c"
    break;

  case 288: /* unary_exp: "fork" code_stmt  */
#line 966 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yyloc)); }
#line 4106 "src/parser.c"
    break;

  case 289: /* unary_exp: "$" type_decl_empty  */
#line 967 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4112 "src/parser.c"
    break;

  case 290: /* lambda_list: "<identifier>"  */
#line 970 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4122 "src/parser.c"
    break;

  case 291: /* lambda_list: lambda_list "<identifier>"  */
#line 975 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4132 "src/parser.c"
    break;

  case 292: /* lambda_arg: "\\" lambda_list  */
#line 980 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4138 "src/parser.c"
    break;

  case 293: /* lambda_arg: "\\"  */
#line 980 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4144 "src/parser.c"
    break;

  case 294: /* type_list: type_decl_empty  */
#line 983 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), sizeof(Type_Decl*), 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4153 "src/parser.c"
    break;

  case 295: /* type_list: type_list "," type_decl_empty  */
#line 987 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4162 "src/parser.c"
    break;

  case 296: /* call_paren: "(" exp ")"  */
#line 993 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4168 "src/parser.c"
    break;

  case 297: /* call_paren: "(" ")"  */
#line 993 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4174 "src/parser.c"
    break;

  case 300: /* dot_exp: post_exp "." "<identifier>"  */
#line 997 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4187 "src/parser.c"
    break;

  case 302: /* post_exp: post_exp array_exp  */
#line 1008 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4193 "src/parser.c"
    break;

  case 303: /* post_exp: post_exp range  */
#line 1010 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4199 "src/parser.c"
    break;

  case 304: /* post_exp: post_exp call_template call_paren  */
#line 1012 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4206 "src/parser.c"
    break;

  case 305: /* post_exp: post_exp post_op  */
#line 1015 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4212 "src/parser.c"
    break;

  case 306: /* post_exp: dot_exp  */
#line 1016 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4218 "src/parser.c"
    break;

  case 307: /* interp_exp: "<interp string end>"  */
#line 1020 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4224 "src/parser.c"
    break;

  case 308: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1021 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4230 "src/parser.c"
    break;

  case 309: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1022 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4236 "src/parser.c"
    break;

  case 310: /* interp: "`" interp_exp  */
#line 1024 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4242 "src/parser.c"
    break;

  case 311: /* interp: interp "`" interp_exp  */
#line 1025 "src/gwion.y"
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
#line 4257 "src/parser.c"
    break;

  case 312: /* prim_exp: "<identifier>"  */
#line 1037 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4263 "src/parser.c"
    break;

  case 313: /* prim_exp: "<integer>"  */
#line 1038 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4269 "src/parser.c"
    break;

  case 314: /* prim_exp: "<float>"  */
#line 1039 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4275 "src/parser.c"
    break;

  case 315: /* prim_exp: interp  */
#line 1040 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4281 "src/parser.c"
    break;

  case 316: /* prim_exp: "<litteral string>"  */
#line 1041 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4287 "src/parser.c"
    break;

  case 317: /* prim_exp: "<litteral char>"  */
#line 1042 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4293 "src/parser.c"
    break;

  case 318: /* prim_exp: array  */
#line 1043 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4299 "src/parser.c"
    break;

  case 319: /* prim_exp: "{" dict_list "}"  */
#line 1044 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4305 "src/parser.c"
    break;

  case 320: /* prim_exp: range  */
#line 1045 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4311 "src/parser.c"
    break;

  case 321: /* prim_exp: "<<<" exp ">>>"  */
#line 1046 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4317 "src/parser.c"
    break;

  case 322: /* prim_exp: "(" exp ")"  */
#line 1047 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4323 "src/parser.c"
    break;

  case 323: /* prim_exp: lambda_arg code_stmt  */
#line 1048 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4329 "src/parser.c"
    break;

  case 324: /* prim_exp: "(" op_op ")"  */
#line 1049 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4335 "src/parser.c"
    break;

  case 325: /* prim_exp: "perform" "<identifier>"  */
#line 1050 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4341 "src/parser.c"
    break;

  case 326: /* prim_exp: "(" ")"  */
#line 1051 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4347 "src/parser.c"
    break;


#line 4351 "src/parser.c"

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
          YYNOMEM;
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, arg, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 1053 "src/gwion.y"

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
