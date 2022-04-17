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
ANN Symbol sig_name(const Scanner*, const pos_t);


#line 96 "src/parser.c"

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
  YYSYMBOL_BACKTICK = 55,                  /* "`"  */
  YYSYMBOL_OPID_A = 56,                    /* OPID_A  */
  YYSYMBOL_LATE = 57,                      /* "late"  */
  YYSYMBOL_NUM = 58,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 59,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 60,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 61,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 62,              /* "${"  */
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
  YYSYMBOL_ID = 78,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 79,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 80,                  /* "++"  */
  YYSYMBOL_MINUS = 81,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 82,                /* "--"  */
  YYSYMBOL_TIMES = 83,                     /* "*"  */
  YYSYMBOL_DIVIDE = 84,                    /* "/"  */
  YYSYMBOL_PERCENT = 85,                   /* "%"  */
  YYSYMBOL_DOLLAR = 86,                    /* "$"  */
  YYSYMBOL_QUESTION = 87,                  /* "?"  */
  YYSYMBOL_OPTIONS = 88,                   /* OPTIONS  */
  YYSYMBOL_COLON = 89,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 90,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 91,             /* "?:"  */
  YYSYMBOL_NEW = 92,                       /* "new"  */
  YYSYMBOL_SPORK = 93,                     /* "spork"  */
  YYSYMBOL_FORK = 94,                      /* "fork"  */
  YYSYMBOL_L_HACK = 95,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 96,                    /* ">>>"  */
  YYSYMBOL_AND = 97,                       /* "&&"  */
  YYSYMBOL_EQ = 98,                        /* "=="  */
  YYSYMBOL_GE = 99,                        /* ">="  */
  YYSYMBOL_GT = 100,                       /* ">"  */
  YYSYMBOL_LE = 101,                       /* "<="  */
  YYSYMBOL_LT = 102,                       /* "<"  */
  YYSYMBOL_NEQ = 103,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 104,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 105,              /* ">>"  */
  YYSYMBOL_S_AND = 106,                    /* "&"  */
  YYSYMBOL_S_OR = 107,                     /* "|"  */
  YYSYMBOL_S_XOR = 108,                    /* "^"  */
  YYSYMBOL_OR = 109,                       /* "||"  */
  YYSYMBOL_TMPL = 110,                     /* ":["  */
  YYSYMBOL_TILDA = 111,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 112,              /* "!"  */
  YYSYMBOL_AROBASE = 113,                  /* "@"  */
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
  YYSYMBOL_trait_stmt = 127,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 128,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 129,            /* trait_section  */
  YYSYMBOL_trait_ast = 130,                /* trait_ast  */
  YYSYMBOL_trait_body = 131,               /* trait_body  */
  YYSYMBOL_trait_def = 132,                /* trait_def  */
  YYSYMBOL_class_ext = 133,                /* class_ext  */
  YYSYMBOL_traits = 134,                   /* traits  */
  YYSYMBOL_extend_body = 135,              /* extend_body  */
  YYSYMBOL_extend_def = 136,               /* extend_def  */
  YYSYMBOL_class_body = 137,               /* class_body  */
  YYSYMBOL_id_list = 138,                  /* id_list  */
  YYSYMBOL_specialized_list = 139,         /* specialized_list  */
  YYSYMBOL_stmt_list = 140,                /* stmt_list  */
  YYSYMBOL_fptr_base = 141,                /* fptr_base  */
  YYSYMBOL__func_effects = 142,            /* _func_effects  */
  YYSYMBOL_func_effects = 143,             /* func_effects  */
  YYSYMBOL_func_base = 144,                /* func_base  */
  YYSYMBOL_fptr_def = 145,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 146,             /* typedef_when  */
  YYSYMBOL_type_def_type = 147,            /* type_def_type  */
  YYSYMBOL_type_def = 148,                 /* type_def  */
  YYSYMBOL_type_decl_array = 149,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 150,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 151,          /* type_decl_empty  */
  YYSYMBOL_arg = 152,                      /* arg  */
  YYSYMBOL_arg_list = 153,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 154,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 155,                /* fptr_list  */
  YYSYMBOL_code_stmt = 156,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 157,                  /* stmt_pp  */
  YYSYMBOL_stmt = 158,                     /* stmt  */
  YYSYMBOL_retry_stmt = 159,               /* retry_stmt  */
  YYSYMBOL_handler = 160,                  /* handler  */
  YYSYMBOL_161_1 = 161,                    /* $@1  */
  YYSYMBOL_handler_list = 162,             /* handler_list  */
  YYSYMBOL_try_stmt = 163,                 /* try_stmt  */
  YYSYMBOL_opt_id = 164,                   /* opt_id  */
  YYSYMBOL_enum_def = 165,                 /* enum_def  */
  YYSYMBOL_when_exp = 166,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 167,          /* match_case_stmt  */
  YYSYMBOL_match_list = 168,               /* match_list  */
  YYSYMBOL_match_stmt = 169,               /* match_stmt  */
  YYSYMBOL_flow = 170,                     /* flow  */
  YYSYMBOL_loop_stmt = 171,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 172,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 173,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 174,           /* selection_stmt  */
  YYSYMBOL_breaks = 175,                   /* breaks  */
  YYSYMBOL_jump_stmt = 176,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 177,                 /* exp_stmt  */
  YYSYMBOL_exp = 178,                      /* exp  */
  YYSYMBOL_binary_exp = 179,               /* binary_exp  */
  YYSYMBOL_call_template = 180,            /* call_template  */
  YYSYMBOL_op = 181,                       /* op  */
  YYSYMBOL_array_exp = 182,                /* array_exp  */
  YYSYMBOL_array_empty = 183,              /* array_empty  */
  YYSYMBOL_dict_list = 184,                /* dict_list  */
  YYSYMBOL_range = 185,                    /* range  */
  YYSYMBOL_array = 186,                    /* array  */
  YYSYMBOL_decl_exp = 187,                 /* decl_exp  */
  YYSYMBOL_func_args = 188,                /* func_args  */
  YYSYMBOL_fptr_args = 189,                /* fptr_args  */
  YYSYMBOL_arg_type = 190,                 /* arg_type  */
  YYSYMBOL_decl_template = 191,            /* decl_template  */
  YYSYMBOL_global = 192,                   /* global  */
  YYSYMBOL_storage_flag = 193,             /* storage_flag  */
  YYSYMBOL_access_flag = 194,              /* access_flag  */
  YYSYMBOL_flag = 195,                     /* flag  */
  YYSYMBOL_final = 196,                    /* final  */
  YYSYMBOL_modifier = 197,                 /* modifier  */
  YYSYMBOL_func_def_base = 198,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 199,            /* abstract_fdef  */
  YYSYMBOL_op_op = 200,                    /* op_op  */
  YYSYMBOL_op_base = 201,                  /* op_base  */
  YYSYMBOL_operator = 202,                 /* operator  */
  YYSYMBOL_op_def = 203,                   /* op_def  */
  YYSYMBOL_func_def = 204,                 /* func_def  */
  YYSYMBOL_type_decl_base = 205,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 206,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 207,         /* type_decl_noflag  */
  YYSYMBOL_option = 208,                   /* option  */
  YYSYMBOL_type_decl_opt = 209,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 210,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 211,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 212,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 213,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 214,               /* union_decl  */
  YYSYMBOL_union_list = 215,               /* union_list  */
  YYSYMBOL_union_def = 216,                /* union_def  */
  YYSYMBOL_var_decl_list = 217,            /* var_decl_list  */
  YYSYMBOL_var_decl = 218,                 /* var_decl  */
  YYSYMBOL_arg_decl = 219,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 220,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 221,                    /* eq_op  */
  YYSYMBOL_rel_op = 222,                   /* rel_op  */
  YYSYMBOL_shift_op = 223,                 /* shift_op  */
  YYSYMBOL_add_op = 224,                   /* add_op  */
  YYSYMBOL_mul_op = 225,                   /* mul_op  */
  YYSYMBOL_opt_exp = 226,                  /* opt_exp  */
  YYSYMBOL_con_exp = 227,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 228,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 229,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 230,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 231,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 232,                  /* and_exp  */
  YYSYMBOL_eq_exp = 233,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 234,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 235,                /* shift_exp  */
  YYSYMBOL_add_exp = 236,                  /* add_exp  */
  YYSYMBOL_mul_exp = 237,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 238,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 239,                 /* cast_exp  */
  YYSYMBOL_unary_op = 240,                 /* unary_op  */
  YYSYMBOL_unary_exp = 241,                /* unary_exp  */
  YYSYMBOL_lambda_list = 242,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 243,               /* lambda_arg  */
  YYSYMBOL_type_list = 244,                /* type_list  */
  YYSYMBOL_call_paren = 245,               /* call_paren  */
  YYSYMBOL_post_op = 246,                  /* post_op  */
  YYSYMBOL_dot_exp = 247,                  /* dot_exp  */
  YYSYMBOL_post_exp = 248,                 /* post_exp  */
  YYSYMBOL_interp_exp = 249,               /* interp_exp  */
  YYSYMBOL_interp = 250,                   /* interp  */
  YYSYMBOL_prim_exp = 251                  /* prim_exp  */
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
#define YYFINAL  214
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  327
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  579

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
       0,   175,   175,   176,   179,   183,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   200,   202,   209,   218,   222,
     223,   227,   233,   234,   238,   242,   247,   247,   249,   259,
     259,   260,   260,   262,   266,   271,   277,   277,   279,   284,
     290,   298,   304,   308,   313,   316,   316,   317,   317,   319,
     322,   329,   329,   330,   330,   331,   340,   340,   342,   346,
     351,   355,   360,   365,   373,   375,   379,   385,   387,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   418,   423,   423,   424,   429,   445,   450,   450,   453,
     458,   458,   461,   473,   477,   482,   493,   504,   505,   509,
     518,   528,   538,   549,   562,   580,   589,   603,   611,   618,
     627,   638,   638,   640,   645,   649,   654,   660,   665,   671,
     672,   683,   684,   685,   686,   689,   689,   691,   691,   691,
     691,   691,   694,   695,   698,   702,   703,   704,   708,   709,
     712,   713,   714,   718,   718,   719,   720,   722,   722,   723,
     723,   724,   724,   726,   726,   728,   730,   730,   732,   733,
     736,   737,   738,   739,   742,   742,   744,   744,   747,   752,
     762,   772,   772,   772,   772,   772,   774,   784,   793,   803,
     809,   809,   811,   813,   815,   818,   818,   818,   819,   825,
     833,   843,   844,   859,   860,   864,   865,   868,   868,   868,
     869,   870,   870,   873,   874,   876,   876,   878,   878,   881,
     885,   886,   888,   892,   898,   908,   912,   918,   919,   921,
     922,   923,   924,   924,   926,   926,   927,   927,   927,   927,
     928,   928,   929,   929,   930,   930,   930,   932,   932,   933,
     934,   936,   939,   939,   940,   940,   941,   941,   942,   942,
     943,   943,   944,   944,   945,   945,   946,   946,   947,   947,
     948,   948,   949,   949,   951,   951,   954,   954,   954,   955,
     955,   955,   955,   958,   959,   960,   963,   964,   965,   966,
     969,   974,   979,   979,   982,   986,   992,   992,   994,   994,
     996,  1005,  1006,  1008,  1010,  1013,  1015,  1019,  1020,  1021,
    1023,  1024,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051
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
  "NOELSE", "union", "const", "...", "varloop", "defer", "\\", "`",
  "OPID_A", "late", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "${", "INTERP_EXP", "<comment>", "#include",
  "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if",
  "\n", "import", "<interp string lit>", "<interp string end>",
  "@<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
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

#define YYPACT_NINF (-413)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-245)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     554,  -413,   966,  1383,   664,   203,  -413,    51,  -413,   875,
    -413,    61,    82,    87,  1916,   203,  1264,  -413,  -413,   875,
      16,    98,   203,   203,   203,   165,    66,  -413,  -413,   203,
     203,  -413,  1916,   875,    34,    49,  -413,  -413,  -413,  -413,
    -413,  1443,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,   165,   165,
     105,   105,  1916,  -413,  -413,   144,   554,  -413,  -413,  -413,
    -413,   875,  -413,   203,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,   150,  -413,  -413,  -413,  -413,    46,  -413,  -413,
     171,    40,  -413,   188,  -413,  -413,  -413,  -413,  -413,   415,
    -413,  -413,  -413,   203,  -413,  -413,   -30,   104,   101,   102,
     117,   -48,   182,    83,    -6,   134,   139,   146,  2017,  -413,
     105,  -413,  -413,   124,   174,  -413,  -413,  1916,  -413,   239,
     242,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,  -413,  -413,   246,  -413,   251,  -413,  -413,  -413,
    -413,  -413,  1916,    20,  -413,   774,    36,   249,  -413,  -413,
    -413,  -413,   261,  -413,  -413,   226,   235,  1916,    67,  1975,
    1324,   191,   276,   209,  -413,   287,   263,  -413,  -413,   221,
     238,   227,   228,   203,  -413,    32,  -413,   222,   194,   267,
     204,  -413,   305,    93,  -413,   308,   165,   236,    84,  -413,
    -413,   244,   265,  1443,  -413,   253,  -413,  -413,  -413,   319,
     664,  -413,  -413,   229,  -413,  -413,  -413,   165,  1916,  -413,
     325,  -413,  1916,  1916,  1916,  1916,  1502,  -413,   215,   261,
    -413,  -413,  1016,    99,   165,   165,  1916,  2017,  2017,  2017,
    2017,  2017,  2017,  -413,  -413,  2017,  2017,  2017,  -413,  2017,
    -413,  2017,  2017,   165,  -413,  -413,  1561,   252,   165,   326,
    -413,  -413,  -413,  1443,    89,  -413,  -413,   324,   327,  1621,
    -413,  1916,  -413,   165,    45,  -413,   165,  -413,   165,   329,
    1916,   332,    48,  1324,    30,   315,   330,  -413,  -413,  -413,
     263,   230,   297,  -413,  -413,   230,   222,   165,   194,   266,
     336,  -413,    93,  -413,  -413,  -413,  1680,  -413,  -413,   165,
      45,   268,   230,  -413,  -413,  -413,  -413,  1443,  1916,  -413,
     269,   342,  -413,  -413,  -413,  -413,  -413,  -413,   341,   261,
     347,    45,   261,   230,   230,  -413,  -413,   230,   273,  -413,
     270,  -413,   104,   101,   102,   117,   -48,   182,    83,    -6,
     134,   139,   146,  -413,  -413,  -413,    55,  1739,  -413,  -413,
    -413,  1798,  -413,  -413,   344,    44,   277,  -413,   350,  -413,
     352,   112,   278,   283,   875,   359,  1916,   875,  1857,   285,
     355,  1916,  -413,    50,   266,   286,  -413,   291,   328,  -413,
     222,   362,   230,  -413,  -413,   368,    47,  -413,   277,  -413,
     369,   346,   230,   365,  -413,   372,   230,   875,    45,  -413,
     113,   373,   375,   376,   377,   305,   379,  -413,  2017,   165,
    -413,  -413,   378,  -413,  -413,  1916,   305,   296,   165,  -413,
    -413,  -413,   230,   230,   374,  -413,    68,  -413,   875,   381,
     300,  -413,  1916,   367,   370,  -413,   138,  -413,   875,   222,
     126,   165,   222,   382,  1078,   308,   314,    42,  -413,  -413,
    -413,   165,   317,   323,   390,  -413,   223,  -413,   383,  -413,
     394,  -413,  -413,  -413,   165,   165,   165,  -413,   273,  -413,
    -413,  -413,  -413,  -413,   188,  1916,  -413,   308,  -413,   875,
     875,  -413,   875,   355,    72,  1916,   313,   875,  -413,  -413,
    -413,   333,  -413,  -413,   395,   554,  -413,  1171,  -413,  1078,
     397,  -413,  -413,  -413,    45,  -413,  -413,  -413,  -413,  -413,
    -413,  -413,   405,   334,  -413,   211,  1916,   407,  -413,   409,
     410,   411,  -413,    -8,    45,  -413,  -413,  -413,  1916,   875,
    -413,   875,  -413,   222,   554,   554,   408,  -413,  -413,  -413,
     346,  -413,   176,  -413,  -413,    -8,  -413,   165,  -413,  -413,
     418,    77,  -413,   875,  -413,   412,  -413,   417,  -413,   419,
     206,   420,  -413,   875,  -413,  -413,  -413,  -413,  -413
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   128,     0,     0,     0,   173,   217,     0,   107,     0,
     108,     0,     0,     0,     0,   173,     0,   121,   122,     0,
       0,     0,   173,   173,   173,     0,   190,    53,    54,   173,
     173,   214,     0,     0,   293,     0,   213,   313,   314,   316,
     317,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   312,   298,   276,   299,   277,     0,     0,
     280,   281,     0,   282,   279,     0,     2,     4,     8,     9,
      10,     6,    13,   173,    14,    83,    86,    42,    90,    89,
      11,    84,     0,    81,    87,    88,    82,     0,    85,    80,
       0,   129,   153,   154,   320,   318,   131,   195,   196,     0,
     197,     7,   218,   173,    12,   155,   249,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,     0,   274,
       0,   278,   306,   283,   315,   301,   327,     0,   242,   276,
     277,   245,   246,   141,   137,   239,   237,   238,   236,   138,
     240,   241,   139,   140,     0,   181,     0,   183,   182,   185,
     184,   145,     0,     0,    67,     0,   129,     0,   166,   165,
     168,   169,     0,   167,   171,   170,   175,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   326,    91,     0,
     175,     0,     0,   173,   201,     0,    59,    31,   136,   205,
     209,   211,    57,     0,   191,     0,     0,     0,     0,   118,
     290,   292,     0,     0,   307,     0,   310,   289,    58,   286,
       0,   287,   288,     0,     1,     5,    43,     0,     0,   126,
       0,   127,     0,     0,     0,     0,     0,   147,     0,     0,
     280,   281,     0,     0,     0,     0,   248,     0,     0,     0,
       0,     0,     0,   234,   235,     0,     0,     0,   243,     0,
     244,     0,     0,     0,   284,   324,     0,     0,     0,     0,
     302,   303,   305,     0,     0,   322,   325,     0,   142,     0,
      68,     0,   319,   158,     0,   172,     0,   174,     0,     0,
       0,   312,     0,     0,     0,     0,     0,   123,    92,    94,
      96,   164,   175,   177,    15,   164,    31,     0,   136,     0,
       0,   203,     0,   207,   208,   210,     0,    56,   212,   160,
       0,     0,   164,   117,   291,   323,   308,     0,   248,   321,
       0,     0,   125,   130,   134,   132,   133,   146,     0,     0,
       0,     0,     0,   164,   164,   193,   192,   164,     0,   247,
       0,   251,   253,   255,   257,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   300,   294,     0,     0,   304,   311,
     152,     0,   143,   151,     0,   148,     0,    62,   157,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,   103,     0,     0,    98,    95,     0,    30,   176,
      31,     0,   164,   204,    38,    32,     0,   206,   233,    65,
     159,    47,   164,     0,   309,     0,   164,     0,     0,   194,
       0,     0,     0,     0,     0,   227,   156,   226,     0,     0,
     135,   297,     0,   144,   150,     0,   229,    61,     0,   161,
     179,   178,   164,   164,   119,   110,     0,   115,     0,     0,
       0,   215,     0,   101,   106,   104,     0,    97,     0,    31,
       0,     0,    31,     0,    27,     0,     0,     0,    33,   232,
      64,     0,     0,    48,     0,    44,     0,   285,    51,   109,
       0,   199,   198,   189,     0,     0,     0,   228,     0,   250,
     295,   296,   149,   231,   230,     0,    63,     0,    49,     0,
       0,   111,     0,   216,     0,     0,     0,     0,    99,    93,
      40,     0,   163,    29,     0,    37,    20,    22,    24,    26,
       0,    19,    18,    23,     0,    39,    35,    34,    66,    45,
      46,    50,   201,     0,   222,     0,     0,     0,   200,     0,
       0,     0,   225,    60,     0,   120,   116,   112,     0,     0,
     100,     0,   105,    31,    37,    36,     0,    21,    25,    28,
      47,   219,     0,   224,   223,    52,    55,     0,   187,   188,
       0,     0,   113,   102,    41,     0,    17,     0,   220,     0,
       0,     0,   180,     0,    16,   202,   221,   186,   114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -413,  -413,   425,   -60,   279,  -413,   -77,  -413,   -78,  -413,
    -413,  -413,  -413,  -283,  -413,  -413,  -109,    52,  -413,    -3,
    -413,  -413,  -113,  -413,  -413,  -413,  -413,  -413,   -42,   -11,
     -20,  -405,  -413,   -19,  -413,   -53,  -412,    -9,  -413,   154,
    -413,  -413,  -413,  -413,  -413,  -413,    62,  -413,  -413,   280,
    -413,  -413,  -413,  -413,  -413,  -413,  -166,    97,    -1,  -155,
    -413,   -84,  -401,    22,   337,  -178,     2,  -140,  -410,  -290,
    -269,   423,   292,  -413,    17,  -151,  -413,  -413,  -413,   218,
     231,  -413,  -413,  -369,   271,  -413,   159,  -413,   274,  -413,
     -23,   -31,  -413,   -62,  -413,  -413,  -413,   -14,    70,  -413,
    -413,  -101,   -97,  -102,   -96,   148,  -222,  -413,   232,   234,
     237,   233,   240,   224,   225,   243,   245,   241,   247,   -81,
     358,  -413,  -413,  -413,  -413,   -93,  -413,  -413,  -182,  -413,
    -413
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    65,   545,    67,   179,    68,   506,   507,   508,   509,
     510,    69,   452,   300,   457,    70,   546,   395,   450,    71,
     195,   463,   464,   162,    72,   527,    73,    74,   186,   209,
     232,   367,   368,   399,   400,    75,    76,    77,    78,   289,
     385,   290,    79,   448,    80,   496,   382,   383,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   259,
     145,    92,    93,   157,    94,    95,    96,   274,   310,   371,
     388,   163,   164,   165,   180,   278,   294,    97,    98,   146,
     233,    99,   100,   101,   188,   189,   190,   305,   191,   192,
     102,   442,   103,   524,   525,   104,   416,   417,   427,   460,
     245,   147,   148,   149,   150,   340,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   201,   120,   356,   358,   121,   122,   123,   206,   124,
     125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     168,   155,   193,   156,   283,   187,   215,   211,   212,   227,
     176,   246,   249,   391,   307,   341,   247,   208,   234,   251,
     401,   316,   166,   486,   199,   484,   390,   458,   268,   293,
     262,   198,   173,   301,   379,   193,   193,   183,   207,   260,
     222,   410,   511,   403,   222,   514,   196,   197,   425,   219,
     243,   369,   516,     5,   377,   244,   167,   236,     5,   419,
     444,   237,   216,   420,   412,   413,   169,   255,   414,   529,
     530,   531,   381,   128,   490,   248,   193,   534,   539,   238,
     223,   359,     8,   573,    10,   513,    26,   170,   517,   331,
     217,    26,   171,   210,   177,   511,   370,   511,   183,   144,
     153,   178,   335,   159,   220,   224,   225,   453,   210,   269,
     184,   172,   200,   175,   210,   430,   471,   378,   470,   380,
     235,   210,   210,   455,   223,   271,   264,   202,   223,  -136,
     501,   256,   223,   465,   502,   404,   223,   468,   205,   334,
     513,   389,   456,   393,   214,   313,   216,   234,   498,   224,
     225,   570,   571,   224,   225,   218,   223,   224,   225,   213,
     223,   224,   225,   487,   488,   223,   500,   257,   282,   504,
     183,   184,   223,   193,   221,   320,   311,   223,   271,   568,
     336,   224,   225,   569,   362,   224,   225,   140,   141,   408,
     224,   225,   411,   338,   193,   226,   479,   224,   225,   185,
     297,   239,   224,   225,    54,   193,    56,   155,   240,   576,
     241,   193,   193,   226,   337,    31,   183,   250,   131,   132,
     183,   553,    36,   242,   550,   324,   325,   326,   183,   252,
     193,   366,   253,   353,   258,   193,   263,   477,   355,   158,
     159,   160,   161,   184,   560,  -243,   246,   249,  -244,   267,
     193,   247,   265,   193,   251,   193,   372,   266,   373,   272,
     564,    31,   158,   159,   279,    31,   273,   398,    36,   284,
     365,   185,    36,    31,   193,   276,   277,   392,   292,   277,
      36,   135,   136,   137,   138,   285,   193,   286,   512,   522,
     287,   303,   304,   184,   288,    54,    55,    56,    57,   291,
     205,   522,   181,   182,   258,   295,   296,   329,   230,   231,
     302,   299,   306,   309,   312,   321,   317,   185,   431,   323,
     315,   185,   314,   328,   318,   319,    63,    64,   322,   185,
     354,   357,   360,   339,   361,   374,   376,   381,   277,   384,
     387,   512,   483,   512,   394,   396,   402,   406,   407,   268,
     409,   415,   424,   153,   428,   426,   432,   472,   429,   418,
     205,   433,   435,   440,   447,   434,   364,   441,   437,   449,
     451,   454,   456,   461,   466,   436,   462,   375,   467,   473,
     474,   475,   476,   478,   481,   485,   366,   492,   489,   493,
     495,   505,   515,   521,   497,   519,   193,   528,   469,   480,
     227,   520,   541,   328,   544,   193,   526,   549,   551,   208,
     556,   543,   552,   557,   205,   339,   558,   559,   566,   398,
     183,   572,   574,   575,   264,    66,   577,   151,   193,   491,
     547,   548,   366,   366,   366,   565,   446,   567,   193,   499,
     503,   494,   518,   193,   386,   445,   523,   482,   280,   194,
     333,   193,   193,   193,   422,   228,   298,   275,   328,   330,
     261,   397,   538,   554,   532,    31,   405,   308,   459,   347,
     342,   348,    36,   343,   345,   439,   254,   344,   443,     0,
     535,   536,   346,   537,   533,   215,   227,     0,   542,     0,
     349,     0,   351,   184,   350,    54,    55,    56,    57,   352,
       0,     0,   193,     0,     0,   523,     0,   229,   230,   231,
       0,     0,     0,     0,     0,   366,     0,     0,     0,     0,
       0,   185,     0,     0,     0,   555,    63,    64,     0,     0,
     562,     0,     0,     0,   193,     0,     0,   561,   563,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     0,     0,     1,     0,     2,
       0,     3,     0,     4,   578,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
       0,     0,   540,     0,     0,     0,    25,     0,    26,    27,
      28,    29,     0,    30,    31,     0,    32,    33,    34,    35,
       0,    36,    37,    38,    39,    40,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     1,     0,     2,
       0,     3,     0,     4,   154,     0,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    32,    33,    34,    35,
       0,    36,    37,    38,    39,    40,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     1,     0,     2,
       0,     3,     0,     4,   270,     0,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    32,    33,    34,    35,
       0,    36,    37,    38,    39,    40,    41,     0,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     4,    63,    64,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,    33,    34,
      35,     0,    36,    37,    38,    39,    40,    41,     0,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,    53,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,     2,   126,     3,     0,   127,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      34,    35,     0,    36,    37,    38,    39,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,   128,    54,   129,    56,   130,
     131,   132,    58,     0,   133,     0,     0,     0,    59,    60,
      61,    62,     0,     0,   134,   135,   136,   137,   138,   139,
     140,   141,   332,     0,     0,     0,     0,    63,    64,   142,
     143,     1,     0,     2,     0,     3,     0,   127,     0,     5,
       6,     0,     0,     0,     0,   128,    54,   248,    56,   250,
     131,   132,     0,     0,   133,     0,     0,     0,    20,     0,
       0,     0,     0,     0,   134,   135,   136,   137,   138,   139,
     140,   141,    26,     0,     0,     0,     0,     0,    31,   142,
     143,     0,    34,    35,     0,    36,    37,    38,    39,    40,
      41,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,     0,     0,     0,
      59,    60,    61,    62,     1,     0,     2,     0,     3,     0,
     127,     0,     0,     6,     0,     0,     0,     0,     0,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    34,    35,     0,    36,    37,
      38,    39,    40,    41,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
       0,     0,     0,    59,    60,    61,    62,   174,     0,     2,
       0,     3,     0,   127,     0,     0,     6,     0,     0,     0,
       0,     0,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,    34,    35,
       0,    36,    37,    38,    39,    40,    41,     1,     0,     2,
       0,     3,     0,   127,     0,     0,     6,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,     0,    20,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    63,    64,     0,    34,    35,
       0,    36,    37,    38,    39,    40,    41,     0,     2,     0,
       3,   151,   127,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,    57,     0,     0,
      58,     0,     0,    20,     0,     0,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    63,    64,    34,    35,     0,
      36,    37,    38,    39,    40,    41,     0,     0,     2,     0,
       3,     0,   127,     0,     0,     6,     0,     0,     0,     0,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,   152,    20,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    63,    64,     0,    34,    35,     0,
      36,    37,    38,    39,    40,    41,     0,     2,     0,     3,
     327,   127,     0,     0,     6,     0,     0,     0,   203,   204,
       0,    53,     0,    54,    55,    56,    57,     0,     0,    58,
       0,     0,    20,     0,     0,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    63,    64,    34,    35,     0,    36,
      37,    38,    39,    40,    41,     0,     2,     0,     3,     0,
     127,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,     0,    58,     0,
       0,    20,     0,     0,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    63,    64,    34,    35,     0,    36,    37,
      38,    39,    40,    41,     0,     0,     2,     0,     3,   363,
     127,     0,     0,     6,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
     152,    20,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    63,    64,     0,    34,    35,     0,    36,    37,
      38,    39,    40,    41,     0,     2,     0,     3,   151,   127,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    53,
       0,    54,    55,    56,    57,     0,     0,    58,     0,     0,
      20,     0,     0,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    63,    64,    34,    35,     0,    36,    37,    38,
      39,    40,    41,     0,     2,   421,     3,     0,   127,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,    57,     0,     0,    58,     0,     0,    20,
       0,     0,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    63,    64,    34,    35,     0,    36,    37,    38,    39,
      40,    41,     0,     2,     0,     3,   423,   127,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    53,     0,    54,
      55,    56,    57,     0,     0,    58,     0,     0,    20,     0,
       0,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      63,    64,    34,    35,     0,    36,    37,    38,    39,    40,
      41,     0,     2,   438,     3,     0,   127,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,    57,     0,     0,    58,     0,     0,    20,     0,     0,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    63,
      64,    34,    35,     0,    36,    37,    38,    39,    40,    41,
       0,     2,     0,     3,     0,   127,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,    20,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    63,    64,
      34,    35,     0,    36,    37,    38,    39,    40,    41,     0,
       2,     0,     3,     0,   127,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    53,     0,    54,    55,    56,    57,
       0,     0,    58,     0,     0,    20,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,    31,   127,    63,    64,    34,
      35,     0,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,   281,     0,    54,    55,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    34,    35,     0,     0,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,    63,    64,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,   170,    25,    66,    60,    61,    93,
      19,   112,   114,   296,   192,   237,   113,    59,    99,   115,
     310,   203,     5,   428,    33,   426,   295,   396,     8,   180,
     123,    32,    15,   188,     4,    58,    59,     5,    58,   123,
       4,   331,   454,   312,     4,   455,    29,    30,     4,     3,
      98,     6,    10,    11,     6,   103,     5,    87,    11,     4,
      10,    91,    71,     8,   333,   334,     5,   120,   337,   474,
     475,   476,    22,    79,     6,    81,    99,   487,     6,   109,
      88,   263,    15,     6,    17,   454,    44,     5,   457,   229,
      73,    44,     5,     9,    78,   507,    51,   509,     5,     2,
       3,     3,     3,    37,    58,   113,   114,   390,     9,    89,
      78,    14,    78,    16,     9,     3,     3,   283,   408,    89,
     103,     9,     9,   392,    88,    89,   127,    78,    88,     5,
       4,     7,    88,   402,     8,   317,    88,   406,    41,   232,
     509,   292,     4,   298,     0,   198,   155,   228,    10,   113,
     114,   552,   557,   113,   114,     5,    88,   113,   114,    62,
      88,   113,   114,   432,   433,    88,   449,    43,   169,   452,
       5,    78,    88,   196,     3,   217,   196,    88,    89,     3,
     233,   113,   114,     7,   268,   113,   114,   104,   105,   329,
     113,   114,   332,   235,   217,     7,   418,   113,   114,   106,
     183,    97,   113,   114,    80,   228,    82,   210,   107,     3,
     108,   234,   235,     7,   234,    50,     5,    83,    84,    85,
       5,    10,    57,   106,   514,   223,   224,   225,     5,    90,
     253,   273,    86,   253,   110,   258,    62,   415,   258,    36,
      37,    38,    39,    78,   534,     6,   347,   349,     6,   152,
     273,   348,     6,   276,   350,   278,   276,     6,   278,    10,
     543,    50,    36,    37,   167,    50,     5,   309,    57,    78,
     271,   106,    57,    50,   297,    40,    41,   297,    40,    41,
      57,    99,   100,   101,   102,     9,   309,    78,   454,    78,
       3,    87,    88,    78,    31,    80,    81,    82,    83,    78,
     203,    78,    23,    24,   110,    78,    78,    92,    93,    94,
      43,    89,     7,     5,    78,   218,    63,   106,   371,   222,
      55,   106,    78,   226,     5,    96,   111,   112,     3,   106,
      78,     5,     8,   236,     7,     6,     4,    22,    41,     9,
     110,   507,   426,   509,    78,     9,    78,    78,     6,     8,
       3,    78,     8,   256,     4,    78,    78,   410,     6,    89,
     263,    78,     3,    78,    78,   374,   269,    12,   377,    78,
      42,     9,     4,     4,     9,   376,    30,   280,     6,     6,
       5,     5,     5,     4,     6,    89,   428,     6,    14,    89,
      23,     9,    78,     3,    24,    78,   419,     3,   407,   419,
     484,    78,    89,   306,     9,   428,    23,    10,     3,   451,
       3,    78,    78,     4,   317,   318,     6,     6,    10,   461,
       5,     3,    10,     6,   425,     0,     6,     8,   451,   438,
     507,   509,   474,   475,   476,   544,   384,   550,   461,   448,
     451,   442,   461,   466,   290,   383,   466,   425,   168,    26,
     232,   474,   475,   476,   357,    40,   185,   165,   361,   228,
     123,   302,   493,   525,   478,    50,   318,   193,   398,   245,
     238,   246,    57,   239,   241,   378,   118,   240,   381,    -1,
     489,   490,   242,   492,   485,   545,   570,    -1,   497,    -1,
     247,    -1,   251,    78,   249,    80,    81,    82,    83,   252,
      -1,    -1,   525,    -1,    -1,   525,    -1,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,   557,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,   526,   111,   112,    -1,    -1,
     539,    -1,    -1,    -1,   557,    -1,    -1,   538,   541,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   563,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,     9,   573,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      -1,    -1,   495,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    -1,    49,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,     3,    -1,     5,
      -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,     3,    -1,     5,
      -1,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,   111,   112,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,     5,     6,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,    56,    -1,    -1,    -1,    -1,   111,   112,   113,
     114,     3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    88,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,    44,    -1,    -1,    -1,    -1,    -1,    50,   113,
     114,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    -1,    80,    81,
      82,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,     3,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    78,
      -1,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,
      86,    -1,    -1,    -1,    30,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,   111,   112,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,
      86,    -1,    -1,    30,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   111,   112,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    89,    30,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,   111,   112,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,     5,    -1,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    -1,    75,    76,
      -1,    78,    -1,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    30,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   111,   112,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    81,    82,    83,    -1,    -1,    86,    -1,
      -1,    30,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   111,   112,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,     5,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      89,    30,    -1,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,   111,   112,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      30,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   111,   112,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,     5,     6,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,    30,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,   111,   112,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,     5,    -1,     7,     8,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    30,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     111,   112,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,     5,     6,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    81,
      82,    83,    -1,    -1,    86,    -1,    -1,    30,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   111,
     112,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,     5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    30,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   111,   112,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    81,    82,    83,
      -1,    -1,    86,    -1,    -1,    30,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    50,     9,   111,   112,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    54,    55,    -1,    -1,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    55,    57,    58,    59,    60,
      61,    62,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    78,    80,    81,    82,    83,    86,    92,
      93,    94,    95,   111,   112,   122,   123,   124,   126,   132,
     136,   140,   145,   147,   148,   156,   157,   158,   159,   163,
     165,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   182,   183,   185,   186,   187,   198,   199,   202,
     203,   204,   211,   213,   216,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     243,   246,   247,   248,   250,   251,     6,     9,    79,    81,
      83,    84,    85,    88,    98,    99,   100,   101,   102,   103,
     104,   105,   113,   114,   178,   181,   200,   222,   223,   224,
     225,     8,    89,   178,    10,   140,   179,   184,    36,    37,
      38,    39,   144,   192,   193,   194,   195,     5,   158,     5,
       5,     5,   178,   195,     3,   178,   158,    78,     3,   125,
     195,   125,   125,     5,    78,   106,   149,   151,   205,   206,
     207,   209,   210,   211,   192,   141,   195,   195,   179,   158,
      78,   242,    78,    75,    76,   178,   249,   151,   149,   150,
       9,   156,   156,   178,     0,   124,   158,   195,     5,     3,
      58,     3,     4,    88,   113,   114,     7,   182,    40,    92,
      93,    94,   151,   201,   240,   195,    87,    91,   109,    97,
     107,   108,   106,    98,   103,   221,   222,   223,    81,   224,
      83,   225,    90,    86,   241,   156,     7,    43,   110,   180,
     182,   185,   246,    62,   179,     6,     6,   178,     8,    89,
      10,    89,    10,     5,   188,   193,    40,    41,   196,   178,
     170,    78,   179,   177,    78,     9,    78,     3,    31,   160,
     162,    78,    40,   196,   197,    78,    78,   195,   205,    89,
     134,   180,    43,    87,    88,   208,     7,   186,   209,     5,
     189,   151,    78,   156,    78,    55,   249,    63,     5,    96,
     149,   178,     3,   178,   187,   187,   187,     8,   178,    92,
     201,   188,    56,   200,   246,     3,   156,   151,   149,   178,
     226,   227,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   151,    78,   151,   244,     5,   245,   249,
       8,     7,   182,     8,   178,   179,   149,   152,   153,     6,
      51,   190,   151,   151,     6,   178,     4,     6,   177,     4,
      89,    22,   167,   168,     9,   161,   160,   110,   191,   196,
     191,   134,   151,   180,    78,   138,     9,   207,   149,   154,
     155,   190,    78,   191,   249,   226,    78,     6,   188,     3,
     190,   188,   191,   191,   191,    78,   217,   218,    89,     4,
       8,     6,   178,     8,     8,     4,    78,   219,     4,     6,
       3,   156,    78,    78,   158,     3,   179,   158,     6,   178,
      78,    12,   212,   178,    10,   167,   138,    78,   164,    78,
     139,    42,   133,   134,     9,   191,     4,   135,   204,   219,
     220,     4,    30,   142,   143,   191,     9,     6,   191,   158,
     190,     3,   156,     6,     5,     5,     5,   186,     4,   227,
     151,     6,   184,   182,   183,    89,   152,   191,   191,    14,
       6,   158,     6,    89,   179,    23,   166,    24,    10,   158,
     134,     4,     8,   150,   134,     9,   127,   128,   129,   130,
     131,   157,   177,   204,   189,    78,    10,   204,   154,    78,
      78,     3,    78,   151,   214,   215,    23,   146,     3,   152,
     152,   152,   218,   179,   189,   158,   158,   158,   212,     6,
     178,    89,   158,    78,     9,   123,   137,   127,   129,    10,
     190,     3,    78,    10,   214,   179,     3,     4,     6,     6,
     190,   179,   158,   140,   134,   137,    10,   143,     3,     7,
     183,   152,     3,     6,    10,     6,     3,     6,   158
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   133,
     133,   134,   134,   135,   135,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   151,
     152,   152,   153,   153,   154,   155,   155,   156,   156,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   161,   160,   162,   162,   163,   164,   164,   165,
     166,   166,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   171,   171,   171,   171,   171,   171,   172,   173,   174,
     174,   175,   175,   176,   176,   176,   176,   177,   177,   178,
     178,   179,   179,   179,   179,   180,   180,   181,   181,   181,
     181,   181,   182,   182,   182,   183,   183,   183,   184,   184,
     185,   185,   185,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   191,   191,   192,   193,   193,   194,   194,
     195,   195,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   200,   200,   200,   200,   200,   201,   201,   201,   201,
     202,   202,   203,   203,   203,   204,   204,   204,   204,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   208,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   214,   215,   215,   216,   217,   217,   218,   218,   219,
     219,   219,   220,   220,   221,   221,   222,   222,   222,   222,
     223,   223,   224,   224,   225,   225,   225,   226,   226,   227,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   231,
     232,   232,   233,   233,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   240,   240,   240,   240,
     240,   240,   240,   241,   241,   241,   241,   241,   241,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     247,   248,   248,   248,   248,   248,   248,   249,   249,   249,
     250,   250,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251
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
       1,     3,     3,     3,     2,     3,     2,     2
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
#line 175 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2433 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 176 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2439 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 179 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2448 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 183 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2457 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 189 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2463 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 190 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2469 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 191 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2475 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 192 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2481 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2487 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2493 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2499 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2505 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2511 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 200 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2517 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 203 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2528 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 210 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2540 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 218 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2550 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 223 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2559 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 227 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2568 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 233 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2574 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 234 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2580 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 238 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2589 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 242 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2598 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 247 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2604 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 250 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2617 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 259 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2623 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 259 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2629 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 260 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2635 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 260 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2641 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 262 "src/gwion.y"
             {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
  }
#line 2650 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 266 "src/gwion.y"
                         {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2659 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 271 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2668 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 277 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2674 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 280 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), sizeof(Symbol), 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2683 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 285 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2692 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 290 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), sizeof(Specialized), 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2705 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 298 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2715 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 304 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2724 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 308 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2733 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 313 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2740 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 316 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2746 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 316 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2752 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 317 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2758 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 317 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2764 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 319 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2771 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 322 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2782 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 329 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2788 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 329 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2794 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 330 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2800 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 330 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2806 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 331 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2819 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 340 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2825 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 342 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2833 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 346 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2841 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 351 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2850 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 355 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2859 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 360 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2869 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 365 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2881 "src/parser.c"
    break;

  case 64: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 373 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 2887 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_arg  */
#line 375 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 2896 "src/parser.c"
    break;

  case 66: /* fptr_list: fptr_list "," fptr_arg  */
#line 379 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 2905 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" "}"  */
#line 385 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 2912 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list "}"  */
#line 387 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 2919 "src/parser.c"
    break;

  case 69: /* stmt_pp: "<comment>"  */
#line 391 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 2925 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#include"  */
#line 392 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 2931 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#define"  */
#line 393 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 2937 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#pragma"  */
#line 394 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2943 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#undef"  */
#line 395 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 2949 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifdef"  */
#line 396 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2955 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifndef"  */
#line 397 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2961 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#else"  */
#line 398 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 2967 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#if"  */
#line 399 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 2973 "src/parser.c"
    break;

  case 78: /* stmt_pp: "\n"  */
#line 400 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 2979 "src/parser.c"
    break;

  case 79: /* stmt_pp: "import"  */
#line 401 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 2985 "src/parser.c"
    break;

  case 91: /* retry_stmt: "retry" ";"  */
#line 418 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 2995 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 423 "src/gwion.y"
                  { arg->handling = true; }
#line 3001 "src/parser.c"
    break;

  case 93: /* handler: "handle" $@1 opt_id stmt  */
#line 423 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3007 "src/parser.c"
    break;

  case 94: /* handler_list: handler  */
#line 424 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), sizeof(Handler), 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3017 "src/parser.c"
    break;

  case 95: /* handler_list: handler_list handler  */
#line 429 "src/gwion.y"
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
#line 3038 "src/parser.c"
    break;

  case 96: /* try_stmt: "try" stmt handler_list  */
#line 445 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3047 "src/parser.c"
    break;

  case 98: /* opt_id: %empty  */
#line 450 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3053 "src/parser.c"
    break;

  case 99: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 453 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3062 "src/parser.c"
    break;

  case 100: /* when_exp: "when" exp  */
#line 458 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3068 "src/parser.c"
    break;

  case 101: /* when_exp: %empty  */
#line 458 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3074 "src/parser.c"
    break;

  case 102: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 461 "src/gwion.y"
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
#line 3090 "src/parser.c"
    break;

  case 103: /* match_list: match_case_stmt  */
#line 473 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3099 "src/parser.c"
    break;

  case 104: /* match_list: match_list match_case_stmt  */
#line 477 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3108 "src/parser.c"
    break;

  case 105: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 482 "src/gwion.y"
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
#line 3123 "src/parser.c"
    break;

  case 106: /* match_stmt: "match" exp "{" match_list "}"  */
#line 493 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3137 "src/parser.c"
    break;

  case 107: /* flow: "while"  */
#line 504 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3143 "src/parser.c"
    break;

  case 108: /* flow: "until"  */
#line 505 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3149 "src/parser.c"
    break;

  case 109: /* loop_stmt: flow "(" exp ")" stmt  */
#line 510 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3162 "src/parser.c"
    break;

  case 110: /* loop_stmt: "do" stmt flow exp ";"  */
#line 519 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3176 "src/parser.c"
    break;

  case 111: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 529 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3190 "src/parser.c"
    break;

  case 112: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 539 "src/gwion.y"
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
#line 3205 "src/parser.c"
    break;

  case 113: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 550 "src/gwion.y"
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
#line 3222 "src/parser.c"
    break;

  case 114: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 563 "src/gwion.y"
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
#line 3244 "src/parser.c"
    break;

  case 115: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 581 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3257 "src/parser.c"
    break;

  case 116: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 590 "src/gwion.y"
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
#line 3274 "src/parser.c"
    break;

  case 117: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 603 "src/gwion.y"
                                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = (yyvsp[-1].exp),
    .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  }},
  .pos = (yylsp[-2])
};}
#line 3286 "src/parser.c"
    break;

  case 118: /* defer_stmt: "defer" stmt  */
#line 611 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3296 "src/parser.c"
    break;

  case 119: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 619 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3309 "src/parser.c"
    break;

  case 120: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 628 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3323 "src/parser.c"
    break;

  case 121: /* breaks: "break"  */
#line 638 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3329 "src/parser.c"
    break;

  case 122: /* breaks: "continue"  */
#line 638 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3335 "src/parser.c"
    break;

  case 123: /* jump_stmt: "return" exp ";"  */
#line 640 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3345 "src/parser.c"
    break;

  case 124: /* jump_stmt: "return" ";"  */
#line 645 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3354 "src/parser.c"
    break;

  case 125: /* jump_stmt: breaks "<integer>" ";"  */
#line 649 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3364 "src/parser.c"
    break;

  case 126: /* jump_stmt: breaks ";"  */
#line 654 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3373 "src/parser.c"
    break;

  case 127: /* exp_stmt: exp ";"  */
#line 660 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3383 "src/parser.c"
    break;

  case 128: /* exp_stmt: ";"  */
#line 665 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3392 "src/parser.c"
    break;

  case 129: /* exp: binary_exp  */
#line 671 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3398 "src/parser.c"
    break;

  case 130: /* exp: binary_exp "," exp  */
#line 673 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3410 "src/parser.c"
    break;

  case 132: /* binary_exp: binary_exp "@" decl_exp  */
#line 684 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3416 "src/parser.c"
    break;

  case 133: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 685 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3422 "src/parser.c"
    break;

  case 134: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 686 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3428 "src/parser.c"
    break;

  case 135: /* call_template: ":[" type_list "]"  */
#line 689 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3434 "src/parser.c"
    break;

  case 136: /* call_template: %empty  */
#line 689 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3440 "src/parser.c"
    break;

  case 142: /* array_exp: "[" exp "]"  */
#line 694 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3446 "src/parser.c"
    break;

  case 143: /* array_exp: "[" exp "]" array_exp  */
#line 695 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3454 "src/parser.c"
    break;

  case 144: /* array_exp: "[" exp "]" "[" "]"  */
#line 698 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3460 "src/parser.c"
    break;

  case 145: /* array_empty: "[" "]"  */
#line 702 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3466 "src/parser.c"
    break;

  case 146: /* array_empty: array_empty "[" "]"  */
#line 703 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3472 "src/parser.c"
    break;

  case 147: /* array_empty: array_empty array_exp  */
#line 704 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3478 "src/parser.c"
    break;

  case 148: /* dict_list: binary_exp ":" binary_exp  */
#line 708 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3484 "src/parser.c"
    break;

  case 149: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 709 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3490 "src/parser.c"
    break;

  case 150: /* range: "[" exp ":" exp "]"  */
#line 712 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3496 "src/parser.c"
    break;

  case 151: /* range: "[" exp ":" "]"  */
#line 713 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3502 "src/parser.c"
    break;

  case 152: /* range: "[" ":" exp "]"  */
#line 714 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3508 "src/parser.c"
    break;

  case 156: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 720 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3514 "src/parser.c"
    break;

  case 157: /* func_args: "(" arg_list  */
#line 722 "src/gwion.y"
                          { (yyval.default_args) = (yyvsp[0].default_args); }
#line 3520 "src/parser.c"
    break;

  case 158: /* func_args: "("  */
#line 722 "src/gwion.y"
                                             { (yyval.default_args) = (struct ParserArg){}; }
#line 3526 "src/parser.c"
    break;

  case 159: /* fptr_args: "(" fptr_list  */
#line 723 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3532 "src/parser.c"
    break;

  case 160: /* fptr_args: "("  */
#line 723 "src/gwion.y"
                                            { (yyval.arg_list) = NULL; }
#line 3538 "src/parser.c"
    break;

  case 161: /* arg_type: "..." ")"  */
#line 724 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3544 "src/parser.c"
    break;

  case 162: /* arg_type: ")"  */
#line 724 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3550 "src/parser.c"
    break;

  case 163: /* decl_template: ":[" specialized_list "]"  */
#line 726 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3556 "src/parser.c"
    break;

  case 164: /* decl_template: %empty  */
#line 726 "src/gwion.y"
                                                        { (yyval.specialized_list) = NULL; }
#line 3562 "src/parser.c"
    break;

  case 165: /* global: "global"  */
#line 728 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3568 "src/parser.c"
    break;

  case 166: /* storage_flag: "static"  */
#line 730 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3574 "src/parser.c"
    break;

  case 168: /* access_flag: "private"  */
#line 732 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3580 "src/parser.c"
    break;

  case 169: /* access_flag: "protect"  */
#line 733 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3586 "src/parser.c"
    break;

  case 170: /* flag: access_flag  */
#line 736 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3592 "src/parser.c"
    break;

  case 171: /* flag: storage_flag  */
#line 737 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3598 "src/parser.c"
    break;

  case 172: /* flag: access_flag storage_flag  */
#line 738 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3604 "src/parser.c"
    break;

  case 173: /* flag: %empty  */
#line 739 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3610 "src/parser.c"
    break;

  case 174: /* final: "final"  */
#line 742 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3616 "src/parser.c"
    break;

  case 175: /* final: %empty  */
#line 742 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3622 "src/parser.c"
    break;

  case 176: /* modifier: "abstract" final  */
#line 744 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3628 "src/parser.c"
    break;

  case 178: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 747 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= ((yyvsp[-4].fbflag) | (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), &(yyvsp[0].stmt));
  }
#line 3638 "src/parser.c"
    break;

  case 179: /* func_def_base: "fun" func_base func_args arg_type ";"  */
#line 752 "src/gwion.y"
                                              {
    if((yyvsp[-2].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= ((yyvsp[-4].fbflag) | (yyvsp[-1].fbflag));
    SET_FLAG((yyvsp[-3].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), NULL);
  }
#line 3651 "src/parser.c"
    break;

  case 180: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 763 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-8].fbflag) | (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3664 "src/parser.c"
    break;

  case 186: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 775 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), sizeof(Arg), 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3678 "src/parser.c"
    break;

  case 187: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 785 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3691 "src/parser.c"
    break;

  case 188: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 794 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3705 "src/parser.c"
    break;

  case 189: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 804 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].default_args).args, ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3714 "src/parser.c"
    break;

  case 190: /* operator: "operator"  */
#line 809 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3720 "src/parser.c"
    break;

  case 191: /* operator: "operator" global  */
#line 809 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3726 "src/parser.c"
    break;

  case 192: /* op_def: operator op_base code_stmt  */
#line 812 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), &(yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3732 "src/parser.c"
    break;

  case 193: /* op_def: operator op_base ";"  */
#line 814 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3738 "src/parser.c"
    break;

  case 194: /* op_def: operator "abstract" op_base ";"  */
#line 816 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3744 "src/parser.c"
    break;

  case 198: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 820 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, &(yyvsp[0].stmt));
    }
#line 3754 "src/parser.c"
    break;

  case 199: /* func_def: operator "new" func_args arg_type ";"  */
#line 826 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3766 "src/parser.c"
    break;

  case 200: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 834 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3778 "src/parser.c"
    break;

  case 201: /* type_decl_base: "<identifier>"  */
#line 843 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3784 "src/parser.c"
    break;

  case 202: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 844 "src/gwion.y"
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
#line 3801 "src/parser.c"
    break;

  case 203: /* type_decl_tmpl: type_decl_base call_template  */
#line 859 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3807 "src/parser.c"
    break;

  case 204: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 860 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3813 "src/parser.c"
    break;

  case 206: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 865 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3819 "src/parser.c"
    break;

  case 207: /* option: "?"  */
#line 868 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3825 "src/parser.c"
    break;

  case 208: /* option: OPTIONS  */
#line 868 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3831 "src/parser.c"
    break;

  case 209: /* option: %empty  */
#line 868 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3837 "src/parser.c"
    break;

  case 210: /* type_decl_opt: type_decl_noflag option  */
#line 869 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3843 "src/parser.c"
    break;

  case 212: /* type_decl: type_decl_flag type_decl_opt  */
#line 870 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3849 "src/parser.c"
    break;

  case 213: /* type_decl_flag: "late"  */
#line 873 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 3855 "src/parser.c"
    break;

  case 214: /* type_decl_flag: "const"  */
#line 874 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 3861 "src/parser.c"
    break;

  case 215: /* opt_var: "var"  */
#line 876 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 3867 "src/parser.c"
    break;

  case 216: /* opt_var: %empty  */
#line 876 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 3873 "src/parser.c"
    break;

  case 217: /* type_decl_flag2: "var"  */
#line 878 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3879 "src/parser.c"
    break;

  case 219: /* union_decl: "<identifier>" ";"  */
#line 881 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 3888 "src/parser.c"
    break;

  case 220: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 885 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 3894 "src/parser.c"
    break;

  case 221: /* union_decl: type_decl_empty "<identifier>" array_empty ";"  */
#line 886 "src/gwion.y"
                                     { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-3].type_decl), .vd = { .xid =(yyvsp[-2].sym), .array = (yyvsp[-1].array_sub), .pos = (yylsp[-2]) }  };}
#line 3900 "src/parser.c"
    break;

  case 222: /* union_list: union_decl  */
#line 888 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), sizeof(Union_Member), 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 3909 "src/parser.c"
    break;

  case 223: /* union_list: union_list union_decl  */
#line 892 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 3918 "src/parser.c"
    break;

  case 224: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 898 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3930 "src/parser.c"
    break;

  case 225: /* var_decl_list: var_decl_list "," var_decl  */
#line 908 "src/gwion.y"
                               {
     mp_vector_add(mpool(arg), &(yyvsp[-2].var_decl_list), struct Var_Decl_, (yyvsp[0].var_decl));
     (yyval.var_decl_list) = (yyvsp[-2].var_decl_list);
  }
#line 3939 "src/parser.c"
    break;

  case 226: /* var_decl_list: var_decl  */
#line 912 "src/gwion.y"
             {
     (yyval.var_decl_list) = new_mp_vector(mpool(arg), sizeof(struct Var_Decl_), 1);
     mp_vector_set((yyval.var_decl_list), struct Var_Decl_, 0, (yyvsp[0].var_decl));
  }
#line 3948 "src/parser.c"
    break;

  case 227: /* var_decl: "<identifier>"  */
#line 918 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 3954 "src/parser.c"
    break;

  case 228: /* var_decl: "<identifier>" array  */
#line 919 "src/gwion.y"
               { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 3960 "src/parser.c"
    break;

  case 229: /* arg_decl: "<identifier>"  */
#line 921 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 3966 "src/parser.c"
    break;

  case 230: /* arg_decl: "<identifier>" array_empty  */
#line 922 "src/gwion.y"
                   { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 3972 "src/parser.c"
    break;

  case 231: /* arg_decl: "<identifier>" array_exp  */
#line 923 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 3978 "src/parser.c"
    break;

  case 233: /* fptr_arg_decl: %empty  */
#line 924 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 3984 "src/parser.c"
    break;

  case 247: /* opt_exp: exp  */
#line 932 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 3990 "src/parser.c"
    break;

  case 248: /* opt_exp: %empty  */
#line 932 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 3996 "src/parser.c"
    break;

  case 250: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 935 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4002 "src/parser.c"
    break;

  case 251: /* con_exp: log_or_exp "?:" con_exp  */
#line 937 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4008 "src/parser.c"
    break;

  case 253: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 939 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4014 "src/parser.c"
    break;

  case 255: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 940 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4020 "src/parser.c"
    break;

  case 257: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 941 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4026 "src/parser.c"
    break;

  case 259: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 942 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4032 "src/parser.c"
    break;

  case 261: /* and_exp: and_exp "&" eq_exp  */
#line 943 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4038 "src/parser.c"
    break;

  case 263: /* eq_exp: eq_exp eq_op rel_exp  */
#line 944 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4044 "src/parser.c"
    break;

  case 265: /* rel_exp: rel_exp rel_op shift_exp  */
#line 945 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4050 "src/parser.c"
    break;

  case 267: /* shift_exp: shift_exp shift_op add_exp  */
#line 946 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4056 "src/parser.c"
    break;

  case 269: /* add_exp: add_exp add_op mul_exp  */
#line 947 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4062 "src/parser.c"
    break;

  case 271: /* mul_exp: mul_exp mul_op dur_exp  */
#line 948 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4068 "src/parser.c"
    break;

  case 273: /* dur_exp: dur_exp "::" cast_exp  */
#line 949 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4074 "src/parser.c"
    break;

  case 275: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 952 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4080 "src/parser.c"
    break;

  case 284: /* unary_exp: unary_op unary_exp  */
#line 959 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4086 "src/parser.c"
    break;

  case 285: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 960 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4094 "src/parser.c"
    break;

  case 286: /* unary_exp: "new" type_decl_exp  */
#line 963 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4100 "src/parser.c"
    break;

  case 287: /* unary_exp: "spork" code_stmt  */
#line 964 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yyloc)); }
#line 4106 "src/parser.c"
    break;

  case 288: /* unary_exp: "fork" code_stmt  */
#line 965 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yyloc)); }
#line 4112 "src/parser.c"
    break;

  case 289: /* unary_exp: "$" type_decl_empty  */
#line 966 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4118 "src/parser.c"
    break;

  case 290: /* lambda_list: "<identifier>"  */
#line 969 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4128 "src/parser.c"
    break;

  case 291: /* lambda_list: lambda_list "<identifier>"  */
#line 974 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4138 "src/parser.c"
    break;

  case 292: /* lambda_arg: "\\" lambda_list  */
#line 979 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4144 "src/parser.c"
    break;

  case 293: /* lambda_arg: "\\"  */
#line 979 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4150 "src/parser.c"
    break;

  case 294: /* type_list: type_decl_empty  */
#line 982 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), sizeof(Type_Decl*), 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4159 "src/parser.c"
    break;

  case 295: /* type_list: type_list "," type_decl_empty  */
#line 986 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4168 "src/parser.c"
    break;

  case 296: /* call_paren: "(" exp ")"  */
#line 992 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4174 "src/parser.c"
    break;

  case 297: /* call_paren: "(" ")"  */
#line 992 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4180 "src/parser.c"
    break;

  case 300: /* dot_exp: post_exp "." "<identifier>"  */
#line 996 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4193 "src/parser.c"
    break;

  case 302: /* post_exp: post_exp array_exp  */
#line 1007 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4199 "src/parser.c"
    break;

  case 303: /* post_exp: post_exp range  */
#line 1009 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4205 "src/parser.c"
    break;

  case 304: /* post_exp: post_exp call_template call_paren  */
#line 1011 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4212 "src/parser.c"
    break;

  case 305: /* post_exp: post_exp post_op  */
#line 1014 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4218 "src/parser.c"
    break;

  case 306: /* post_exp: dot_exp  */
#line 1015 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4224 "src/parser.c"
    break;

  case 307: /* interp_exp: "<interp string end>"  */
#line 1019 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4230 "src/parser.c"
    break;

  case 308: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1020 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4236 "src/parser.c"
    break;

  case 309: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1021 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4242 "src/parser.c"
    break;

  case 310: /* interp: "${" interp_exp  */
#line 1023 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4248 "src/parser.c"
    break;

  case 311: /* interp: interp "${" interp_exp  */
#line 1024 "src/gwion.y"
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
#line 4263 "src/parser.c"
    break;

  case 312: /* prim_exp: "<identifier>"  */
#line 1036 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4269 "src/parser.c"
    break;

  case 313: /* prim_exp: "<integer>"  */
#line 1037 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4275 "src/parser.c"
    break;

  case 314: /* prim_exp: "<float>"  */
#line 1038 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4281 "src/parser.c"
    break;

  case 315: /* prim_exp: interp  */
#line 1039 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4287 "src/parser.c"
    break;

  case 316: /* prim_exp: "<litteral string>"  */
#line 1040 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4293 "src/parser.c"
    break;

  case 317: /* prim_exp: "<litteral char>"  */
#line 1041 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4299 "src/parser.c"
    break;

  case 318: /* prim_exp: array  */
#line 1042 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4305 "src/parser.c"
    break;

  case 319: /* prim_exp: "{" dict_list "}"  */
#line 1043 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4311 "src/parser.c"
    break;

  case 320: /* prim_exp: range  */
#line 1044 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4317 "src/parser.c"
    break;

  case 321: /* prim_exp: "<<<" exp ">>>"  */
#line 1045 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4323 "src/parser.c"
    break;

  case 322: /* prim_exp: "(" exp ")"  */
#line 1046 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4329 "src/parser.c"
    break;

  case 323: /* prim_exp: "`" "<identifier>" "`"  */
#line 1047 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->d.prim.prim_type = ae_prim_locale; }
#line 4335 "src/parser.c"
    break;

  case 324: /* prim_exp: lambda_arg code_stmt  */
#line 1048 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-1]).first), (yyvsp[-1].arg_list), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4341 "src/parser.c"
    break;

  case 325: /* prim_exp: "(" op_op ")"  */
#line 1049 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4347 "src/parser.c"
    break;

  case 326: /* prim_exp: "perform" "<identifier>"  */
#line 1050 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4353 "src/parser.c"
    break;

  case 327: /* prim_exp: "(" ")"  */
#line 1051 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4359 "src/parser.c"
    break;


#line 4363 "src/parser.c"

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
