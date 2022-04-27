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
  YYSYMBOL_LOCALE = 57,                    /* LOCALE  */
  YYSYMBOL_LOCALE_INI = 58,                /* LOCALE_INI  */
  YYSYMBOL_LOCALE_END = 59,                /* LOCALE_END  */
  YYSYMBOL_LATE = 60,                      /* "late"  */
  YYSYMBOL_NUM = 61,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 62,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 63,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 64,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 65,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 66,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 67,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 68,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 69,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 70,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 71,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 72,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 73,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 74,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 75,                  /* "#if"  */
  YYSYMBOL_PP_NL = 76,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 77,                 /* "import"  */
  YYSYMBOL_INTERP_LIT = 78,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 79,                /* "<interp string end>"  */
  YYSYMBOL_80_operator_id_ = 80,           /* "@<operator id>"  */
  YYSYMBOL_ID = 81,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 82,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 83,                  /* "++"  */
  YYSYMBOL_MINUS = 84,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 85,                /* "--"  */
  YYSYMBOL_TIMES = 86,                     /* "*"  */
  YYSYMBOL_DIVIDE = 87,                    /* "/"  */
  YYSYMBOL_PERCENT = 88,                   /* "%"  */
  YYSYMBOL_DOLLAR = 89,                    /* "$"  */
  YYSYMBOL_QUESTION = 90,                  /* "?"  */
  YYSYMBOL_OPTIONS = 91,                   /* OPTIONS  */
  YYSYMBOL_COLON = 92,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 93,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 94,             /* "?:"  */
  YYSYMBOL_NEW = 95,                       /* "new"  */
  YYSYMBOL_SPORK = 96,                     /* "spork"  */
  YYSYMBOL_FORK = 97,                      /* "fork"  */
  YYSYMBOL_L_HACK = 98,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 99,                    /* ">>>"  */
  YYSYMBOL_AND = 100,                      /* "&&"  */
  YYSYMBOL_EQ = 101,                       /* "=="  */
  YYSYMBOL_GE = 102,                       /* ">="  */
  YYSYMBOL_GT = 103,                       /* ">"  */
  YYSYMBOL_LE = 104,                       /* "<="  */
  YYSYMBOL_LT = 105,                       /* "<"  */
  YYSYMBOL_NEQ = 106,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 107,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 108,              /* ">>"  */
  YYSYMBOL_S_AND = 109,                    /* "&"  */
  YYSYMBOL_S_OR = 110,                     /* "|"  */
  YYSYMBOL_S_XOR = 111,                    /* "^"  */
  YYSYMBOL_OR = 112,                       /* "||"  */
  YYSYMBOL_TMPL = 113,                     /* ":["  */
  YYSYMBOL_TILDA = 114,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 115,              /* "!"  */
  YYSYMBOL_AROBASE = 116,                  /* "@"  */
  YYSYMBOL_DYNOP = 117,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 118,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 119,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 120,                   /* UTIMES  */
  YYSYMBOL_121_ = 121,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 122,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 123,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 124,                 /* $accept  */
  YYSYMBOL_prg = 125,                      /* prg  */
  YYSYMBOL_ast = 126,                      /* ast  */
  YYSYMBOL_section = 127,                  /* section  */
  YYSYMBOL_class_flag = 128,               /* class_flag  */
  YYSYMBOL_class_def = 129,                /* class_def  */
  YYSYMBOL_trait_stmt = 130,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 131,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 132,            /* trait_section  */
  YYSYMBOL_trait_ast = 133,                /* trait_ast  */
  YYSYMBOL_trait_body = 134,               /* trait_body  */
  YYSYMBOL_trait_def = 135,                /* trait_def  */
  YYSYMBOL_class_ext = 136,                /* class_ext  */
  YYSYMBOL_traits = 137,                   /* traits  */
  YYSYMBOL_extend_body = 138,              /* extend_body  */
  YYSYMBOL_extend_def = 139,               /* extend_def  */
  YYSYMBOL_class_body = 140,               /* class_body  */
  YYSYMBOL_id_list = 141,                  /* id_list  */
  YYSYMBOL_specialized_list = 142,         /* specialized_list  */
  YYSYMBOL_stmt_list = 143,                /* stmt_list  */
  YYSYMBOL_fptr_base = 144,                /* fptr_base  */
  YYSYMBOL__func_effects = 145,            /* _func_effects  */
  YYSYMBOL_func_effects = 146,             /* func_effects  */
  YYSYMBOL_func_base = 147,                /* func_base  */
  YYSYMBOL_fptr_def = 148,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 149,             /* typedef_when  */
  YYSYMBOL_type_def_type = 150,            /* type_def_type  */
  YYSYMBOL_type_def = 151,                 /* type_def  */
  YYSYMBOL_type_decl_array = 152,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 153,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 154,          /* type_decl_empty  */
  YYSYMBOL_arg = 155,                      /* arg  */
  YYSYMBOL_arg_list = 156,                 /* arg_list  */
  YYSYMBOL_locale_arg = 157,               /* locale_arg  */
  YYSYMBOL_locale_list = 158,              /* locale_list  */
  YYSYMBOL_fptr_arg = 159,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 160,                /* fptr_list  */
  YYSYMBOL_code_stmt = 161,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 162,                  /* stmt_pp  */
  YYSYMBOL_stmt = 163,                     /* stmt  */
  YYSYMBOL_retry_stmt = 164,               /* retry_stmt  */
  YYSYMBOL_handler = 165,                  /* handler  */
  YYSYMBOL_166_1 = 166,                    /* $@1  */
  YYSYMBOL_handler_list = 167,             /* handler_list  */
  YYSYMBOL_try_stmt = 168,                 /* try_stmt  */
  YYSYMBOL_opt_id = 169,                   /* opt_id  */
  YYSYMBOL_enum_def = 170,                 /* enum_def  */
  YYSYMBOL_when_exp = 171,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 172,          /* match_case_stmt  */
  YYSYMBOL_match_list = 173,               /* match_list  */
  YYSYMBOL_match_stmt = 174,               /* match_stmt  */
  YYSYMBOL_flow = 175,                     /* flow  */
  YYSYMBOL_loop_stmt = 176,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 177,             /* varloop_stmt  */
  YYSYMBOL_defer_stmt = 178,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 179,           /* selection_stmt  */
  YYSYMBOL_breaks = 180,                   /* breaks  */
  YYSYMBOL_jump_stmt = 181,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 182,                 /* exp_stmt  */
  YYSYMBOL_exp = 183,                      /* exp  */
  YYSYMBOL_binary_exp = 184,               /* binary_exp  */
  YYSYMBOL_call_template = 185,            /* call_template  */
  YYSYMBOL_op = 186,                       /* op  */
  YYSYMBOL_array_exp = 187,                /* array_exp  */
  YYSYMBOL_array_empty = 188,              /* array_empty  */
  YYSYMBOL_dict_list = 189,                /* dict_list  */
  YYSYMBOL_range = 190,                    /* range  */
  YYSYMBOL_array = 191,                    /* array  */
  YYSYMBOL_decl_exp = 192,                 /* decl_exp  */
  YYSYMBOL_func_args = 193,                /* func_args  */
  YYSYMBOL_fptr_args = 194,                /* fptr_args  */
  YYSYMBOL_arg_type = 195,                 /* arg_type  */
  YYSYMBOL_decl_template = 196,            /* decl_template  */
  YYSYMBOL_global = 197,                   /* global  */
  YYSYMBOL_storage_flag = 198,             /* storage_flag  */
  YYSYMBOL_access_flag = 199,              /* access_flag  */
  YYSYMBOL_flag = 200,                     /* flag  */
  YYSYMBOL_final = 201,                    /* final  */
  YYSYMBOL_modifier = 202,                 /* modifier  */
  YYSYMBOL_func_def_base = 203,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 204,            /* abstract_fdef  */
  YYSYMBOL_op_op = 205,                    /* op_op  */
  YYSYMBOL_op_base = 206,                  /* op_base  */
  YYSYMBOL_operator = 207,                 /* operator  */
  YYSYMBOL_op_def = 208,                   /* op_def  */
  YYSYMBOL_func_def = 209,                 /* func_def  */
  YYSYMBOL_type_decl_base = 210,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 211,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 212,         /* type_decl_noflag  */
  YYSYMBOL_option = 213,                   /* option  */
  YYSYMBOL_type_decl_opt = 214,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 215,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 216,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 217,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 218,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 219,               /* union_decl  */
  YYSYMBOL_union_list = 220,               /* union_list  */
  YYSYMBOL_union_def = 221,                /* union_def  */
  YYSYMBOL_var_decl_list = 222,            /* var_decl_list  */
  YYSYMBOL_var_decl = 223,                 /* var_decl  */
  YYSYMBOL_arg_decl = 224,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 225,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 226,                    /* eq_op  */
  YYSYMBOL_rel_op = 227,                   /* rel_op  */
  YYSYMBOL_shift_op = 228,                 /* shift_op  */
  YYSYMBOL_add_op = 229,                   /* add_op  */
  YYSYMBOL_mul_op = 230,                   /* mul_op  */
  YYSYMBOL_opt_exp = 231,                  /* opt_exp  */
  YYSYMBOL_con_exp = 232,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 233,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 234,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 235,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 236,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 237,                  /* and_exp  */
  YYSYMBOL_eq_exp = 238,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 239,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 240,                /* shift_exp  */
  YYSYMBOL_add_exp = 241,                  /* add_exp  */
  YYSYMBOL_mul_exp = 242,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 243,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 244,                 /* cast_exp  */
  YYSYMBOL_unary_op = 245,                 /* unary_op  */
  YYSYMBOL_unary_exp = 246,                /* unary_exp  */
  YYSYMBOL_lambda_list = 247,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 248,               /* lambda_arg  */
  YYSYMBOL_type_list = 249,                /* type_list  */
  YYSYMBOL_call_paren = 250,               /* call_paren  */
  YYSYMBOL_post_op = 251,                  /* post_op  */
  YYSYMBOL_dot_exp = 252,                  /* dot_exp  */
  YYSYMBOL_post_exp = 253,                 /* post_exp  */
  YYSYMBOL_interp_exp = 254,               /* interp_exp  */
  YYSYMBOL_interp = 255,                   /* interp  */
  YYSYMBOL_capture = 256,                  /* capture  */
  YYSYMBOL__captures = 257,                /* _captures  */
  YYSYMBOL_captures = 258,                 /* captures  */
  YYSYMBOL_prim_exp = 259                  /* prim_exp  */
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
#define YYFINAL  223
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  344
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  616

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   378


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
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   179,   179,   180,   183,   187,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   204,   206,   213,   222,   226,
     227,   231,   237,   238,   242,   246,   251,   251,   253,   263,
     263,   264,   264,   266,   270,   275,   281,   281,   283,   288,
     294,   302,   308,   312,   317,   320,   320,   321,   321,   323,
     326,   333,   333,   334,   334,   335,   344,   344,   346,   350,
     355,   359,   364,   369,   378,   389,   397,   398,   408,   410,
     414,   420,   422,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   439,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   456,   461,   461,
     462,   467,   483,   488,   488,   491,   496,   496,   499,   511,
     515,   520,   531,   542,   543,   547,   556,   566,   576,   587,
     600,   618,   627,   641,   649,   656,   665,   676,   676,   678,
     683,   687,   692,   698,   703,   709,   710,   721,   722,   723,
     724,   727,   727,   729,   729,   729,   729,   729,   732,   733,
     736,   740,   741,   742,   746,   747,   750,   751,   752,   756,
     756,   757,   758,   760,   760,   761,   761,   762,   762,   764,
     764,   766,   768,   768,   770,   771,   774,   775,   776,   777,
     780,   780,   782,   782,   785,   790,   798,   804,   812,   822,
     822,   822,   822,   822,   824,   834,   843,   853,   859,   859,
     861,   863,   865,   868,   868,   868,   869,   875,   883,   893,
     894,   909,   910,   914,   915,   918,   918,   918,   919,   920,
     920,   923,   924,   926,   926,   928,   928,   931,   935,   936,
     938,   942,   948,   958,   962,   968,   969,   971,   972,   973,
     974,   974,   976,   976,   977,   977,   977,   977,   978,   978,
     979,   979,   980,   980,   980,   982,   982,   983,   984,   986,
     989,   989,   990,   990,   991,   991,   992,   992,   993,   993,
     994,   994,   995,   995,   996,   996,   997,   997,   998,   998,
     999,   999,  1001,  1001,  1004,  1004,  1004,  1005,  1005,  1008,
    1009,  1010,  1011,  1012,  1015,  1016,  1017,  1018,  1019,  1020,
    1023,  1028,  1033,  1033,  1036,  1040,  1046,  1046,  1048,  1048,
    1050,  1059,  1060,  1062,  1064,  1067,  1069,  1073,  1074,  1075,
    1077,  1078,  1089,  1089,  1091,  1092,  1093,  1093,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,
    1107,  1108,  1109,  1110,  1111
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
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "<integer>",
  "<float>", "<litteral string>", "<litteral char>", "${", "INTERP_EXP",
  "<comment>", "#include", "#define", "#pragma", "#undef", "#ifdef",
  "#ifndef", "#else", "#if", "\n", "import", "<interp string lit>",
  "<interp string end>", "@<operator id>", "<identifier>", "+", "++", "-",
  "--", "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new",
  "spork", "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=",
  "<<", ">>", "&", "|", "^", "||", ":[", "~", "!", "@",
  "<dynamic_operator>", "RANGE_EMPTY", "UMINUS", "UTIMES", "=",
  "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "class_ext",
  "traits", "extend_body", "extend_def", "class_body", "id_list",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "locale_arg", "locale_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "retry_stmt", "handler", "$@1",
  "handler_list", "try_stmt", "opt_id", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "match_stmt", "flow", "loop_stmt",
  "varloop_stmt", "defer_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "dict_list", "range", "array", "decl_exp", "func_args",
  "fptr_args", "arg_type", "decl_template", "global", "storage_flag",
  "access_flag", "flag", "final", "modifier", "func_def_base",
  "abstract_fdef", "op_op", "op_base", "operator", "op_def", "func_def",
  "type_decl_base", "type_decl_tmpl", "type_decl_noflag", "option",
  "type_decl_opt", "type_decl", "type_decl_flag", "opt_var",
  "type_decl_flag2", "union_decl", "union_list", "union_def",
  "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl", "eq_op",
  "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "capture", "_captures", "captures", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-438)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     600,  -438,  1120,  1456,   713,   322,  -438,    97,  -438,   930,
    -438,   106,   121,   160,  2078,   322,  1331,  -438,  -438,   930,
       2,   165,   322,   322,   322,   285,   137,  -438,  -438,   322,
     322,  -438,  2078,   930,   126,   128,    18,   131,  -438,  -438,
    -438,  -438,  -438,  1519,  -438,  -438,  -438,  -438,  -438,  -438,
    -438,  -438,  -438,  -438,  -438,  -438,  -438,  -438,  -438,  -438,
     285,   285,  2178,  2178,  2078,  -438,  -438,   215,   600,  -438,
    -438,  -438,  -438,   930,  -438,   322,  -438,  -438,  -438,  -438,
    -438,  -438,  -438,  -438,   212,  -438,  -438,  -438,  -438,    44,
    -438,  -438,   217,    38,  -438,   218,  -438,  -438,  -438,  -438,
    -438,   211,  -438,  -438,  -438,   322,  -438,  -438,   -33,   133,
     129,   130,   122,   -31,   307,   120,   -15,   108,   159,   167,
    2241,  -438,   162,  -438,  -438,   268,   193,  -438,  -438,  2078,
    -438,   258,   270,  -438,  -438,  -438,  -438,  -438,  -438,  -438,
    -438,  -438,  -438,  -438,  -438,  -438,   274,  -438,   276,  -438,
    -438,  -438,  -438,  -438,  2078,    25,  -438,   826,    23,   277,
    -438,  -438,  -438,  -438,   284,  -438,  -438,   152,   195,  2078,
     119,  2140,  1394,   210,   293,   226,  -438,   309,   279,  -438,
    -438,   238,   203,   241,   243,   322,  -438,    31,  -438,   246,
     227,   287,   209,  -438,   332,    51,  -438,   337,   285,   263,
      75,  -438,  -438,   265,   292,   344,   269,  1581,  1519,  -438,
     286,  -438,  -438,  -438,   350,   -21,  -438,  -438,   347,  -438,
    -438,   347,   273,  -438,  -438,  -438,   285,  2078,  -438,   361,
    -438,  2078,  2078,  2078,  2078,  1643,  -438,   248,   284,  1060,
      63,   285,   285,  2078,  2241,  2241,  2241,  2241,  2241,  2241,
    -438,  -438,  2241,  2241,  2241,  -438,  2241,  -438,  2241,  2241,
     285,  -438,   358,  1705,   295,   285,   369,  -438,  -438,  -438,
    1519,   187,  -438,  -438,   371,   373,  1768,  -438,  2078,  -438,
     285,    35,  -438,   285,  -438,   285,   376,  2078,   379,    65,
    1394,    30,   364,   378,  -438,  -438,  -438,   279,   280,   348,
    -438,  -438,   280,   246,   285,   227,   311,   381,  -438,    51,
    -438,  -438,  -438,  1830,  -438,  -438,   285,    35,   315,   280,
     713,  -438,  -438,  -438,   285,   392,  -438,   339,  -438,  1519,
    2078,  -438,   320,  -438,   -27,  -438,  -438,  -438,   321,   397,
    -438,  -438,  -438,  -438,  -438,  -438,   398,   284,   402,    35,
     284,   280,   280,  -438,  -438,   280,   333,  -438,   323,  -438,
     133,   129,   130,   122,   -31,   307,   120,   -15,   108,   159,
     167,  -438,   713,  -438,  -438,  -438,   123,  1892,  -438,  -438,
    -438,  1954,  -438,  -438,   405,    46,   335,  -438,   413,  -438,
     412,   100,   338,   340,   930,   417,  2078,   930,  2016,   341,
     418,  2078,  -438,    52,   311,   343,  -438,   351,   387,  -438,
     246,   422,   280,  -438,  -438,   432,    86,  -438,   335,  -438,
     433,   408,   280,   431,  -438,   437,   436,   285,  -438,  -438,
     438,  -438,  -438,  -438,   280,   930,    35,  -438,   104,   439,
     441,   442,   443,   332,   448,  -438,  2241,    42,   285,  -438,
    -438,   450,  -438,  -438,  2078,   332,   362,   285,  -438,  -438,
    -438,   280,   280,   446,  -438,    81,  -438,   930,   455,   370,
    -438,  2078,   440,   445,  -438,   114,  -438,   930,   246,   149,
     285,   246,   456,  1026,   337,   383,    66,  -438,  -438,  -438,
     285,   385,   390,   471,  -438,   318,   285,   347,   472,  -438,
     454,  -438,   477,  -438,  -438,  -438,   285,   285,   285,  -438,
     333,  -438,  -438,  -438,  -438,  -438,  -438,   218,  2078,  -438,
     337,  -438,   930,   930,  -438,   930,   418,    85,  2078,   389,
     930,  -438,  -438,  -438,   401,  -438,  -438,   478,   600,  -438,
    1235,  -438,  1026,   476,  -438,  -438,  -438,    35,  -438,  -438,
    -438,  -438,  -438,  -438,  -438,   485,   409,  -438,   174,  -438,
    -438,   347,  2078,   486,  -438,   487,   488,   489,  -438,   113,
      35,  -438,  -438,  -438,  2078,   930,  -438,   930,  -438,   246,
     600,   600,   482,  -438,  -438,  -438,   408,  -438,   170,  -438,
    -438,  -438,   113,  -438,   285,  -438,  -438,   490,    89,  -438,
     930,  -438,   491,  -438,   492,  -438,   494,   219,   493,  -438,
     930,  -438,  -438,  -438,  -438,  -438
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   134,     0,     0,     0,   179,   225,     0,   113,     0,
     114,     0,     0,     0,     0,   179,     0,   127,   128,     0,
       0,     0,   179,   179,   179,     0,   198,    53,    54,   179,
     179,   222,     0,     0,   303,     0,     0,     0,   221,   329,
     330,   332,   333,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   328,   308,   284,   309,   285,
       0,     0,     0,     0,     0,   288,   287,     0,     2,     4,
       8,     9,    10,     6,    13,   179,    14,    89,    92,    42,
      96,    95,    11,    90,     0,    87,    93,    94,    88,     0,
      91,    86,     0,   135,   159,   160,   336,   334,   137,   203,
     204,     0,   205,     7,   226,   179,    12,   161,   257,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
       0,   282,   327,   286,   316,   289,   331,   311,   344,     0,
     250,   284,   285,   253,   254,   147,   143,   247,   245,   246,
     244,   144,   248,   249,   145,   146,     0,   189,     0,   191,
     190,   193,   192,   151,     0,     0,    71,     0,   135,     0,
     172,   171,   174,   175,     0,   173,   177,   176,   181,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,   343,
      97,     0,   181,     0,     0,   179,   209,     0,    59,    31,
     142,   213,   217,   219,    57,     0,   199,     0,     0,     0,
       0,   124,   300,   302,     0,     0,     0,     0,     0,   317,
       0,   320,   299,    58,   294,     0,   295,   291,     0,   296,
     292,     0,     0,     1,     5,    43,     0,     0,   132,     0,
     133,     0,     0,     0,     0,     0,   153,     0,     0,     0,
       0,     0,     0,   256,     0,     0,     0,     0,     0,     0,
     242,   243,     0,     0,     0,   251,     0,   252,     0,     0,
       0,   290,     0,     0,     0,     0,     0,   312,   313,   315,
       0,     0,   338,   342,     0,   148,     0,    72,     0,   335,
     164,     0,   178,     0,   180,     0,     0,     0,   328,     0,
       0,     0,     0,     0,   129,    98,   100,   102,   170,   181,
     183,    15,   170,    31,     0,   142,     0,     0,   211,     0,
     215,   216,   218,     0,    56,   220,   166,     0,     0,   170,
       0,   123,   301,   339,    67,     0,    85,     0,   318,     0,
     256,   322,     0,   324,     0,   297,   298,   337,     0,     0,
     131,   136,   140,   138,   139,   152,     0,     0,     0,     0,
       0,   170,   170,   201,   200,   170,     0,   255,     0,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,     0,   340,   310,   304,     0,     0,   314,   321,
     158,     0,   149,   157,     0,   154,     0,    62,   163,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   109,     0,     0,   104,   101,     0,    30,   182,
      31,     0,   170,   212,    38,    32,     0,   214,   241,    69,
     165,    47,   170,     0,    64,    66,     0,    67,    84,   319,
       0,   323,   326,   325,   170,     0,     0,   202,     0,     0,
       0,     0,     0,   235,   162,   234,     0,   135,     0,   141,
     307,     0,   150,   156,     0,   237,    61,     0,   167,   185,
     184,   170,   170,   125,   116,     0,   121,     0,     0,     0,
     223,     0,   107,   112,   110,     0,   103,     0,    31,     0,
       0,    31,     0,    27,     0,     0,     0,    33,   240,    68,
       0,     0,    48,     0,    44,     0,     0,     0,     0,   293,
      51,   115,     0,   207,   206,   197,     0,     0,     0,   236,
       0,   258,   341,   305,   306,   155,   239,   238,     0,    63,
       0,    49,     0,     0,   117,     0,   224,     0,     0,     0,
       0,   105,    99,    40,     0,   169,    29,     0,    37,    20,
      22,    24,    26,     0,    19,    18,    23,     0,    39,    35,
      34,    70,    45,    46,    50,   209,     0,   230,     0,    65,
     187,     0,     0,     0,   208,     0,     0,     0,   233,    60,
       0,   126,   122,   118,     0,     0,   106,     0,   111,    31,
      37,    36,     0,    21,    25,    28,    47,   227,     0,   232,
     231,   186,    52,    55,     0,   195,   196,     0,     0,   119,
     108,    41,     0,    17,     0,   228,     0,     0,     0,   188,
       0,    16,   210,   229,   194,   120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -438,  -438,   496,   -62,   304,  -438,   -43,  -438,   -42,  -438,
    -438,  -438,  -438,  -291,  -438,  -438,   -77,   101,  -438,    -3,
    -438,  -438,   -80,  -438,  -438,  -438,  -438,  -438,   -57,    24,
     -20,  -258,  -438,  -438,    83,    19,  -438,   -54,  -434,    -9,
    -438,   214,  -438,  -438,  -438,  -438,  -438,  -438,   105,  -438,
    -438,   342,  -438,  -438,  -438,  -438,  -438,  -438,  -165,    78,
      -1,  -158,  -438,   -82,  -437,    61,   393,  -169,    82,  -209,
    -431,  -301,  -251,    37,   353,  -438,    15,  -154,  -438,  -438,
    -438,   283,   289,  -438,  -438,  -390,   336,  -438,   220,  -438,
     329,  -438,   -23,     1,  -438,   -30,  -438,  -438,  -438,    20,
     115,  -438,  -438,   -99,   -98,   -97,   -96,   201,  -233,  -438,
     291,   288,   294,   296,   290,   297,   298,   278,   299,   282,
     300,   -87,    -4,  -438,  -438,  -438,  -438,   -90,  -438,  -438,
    -185,  -438,   208,  -438,   -24,  -438
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    67,   581,    69,   181,    70,   539,   540,   541,   542,
     543,    71,   481,   307,   486,    72,   582,   415,   479,    73,
     197,   492,   493,   164,    74,   563,    75,    76,   188,   214,
     239,   424,   388,   425,   426,   419,   420,    77,    78,    79,
      80,   296,   405,   297,    81,   477,    82,   529,   402,   403,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   266,   147,    94,    95,   159,    96,    97,    98,   281,
     317,   391,   408,   165,   166,   167,   182,   285,   301,    99,
     100,   148,   240,   101,   102,   103,   190,   191,   192,   312,
     193,   194,   104,   471,   105,   557,   558,   106,   444,   445,
     456,   489,   252,   149,   150,   151,   152,   358,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   203,   122,   376,   378,   123,   124,   125,
     211,   126,   333,   334,   218,   127
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   195,   158,   213,   189,   224,   290,   216,   219,
     178,   359,   411,   236,   241,   253,   421,   254,   517,   256,
     168,   258,   387,   328,   201,   314,   487,   231,   300,   349,
     175,   200,   308,   275,   399,   269,   185,   195,   195,   221,
     212,   389,   231,   267,   198,   199,   231,   228,   438,   544,
     454,   410,   512,   547,   331,   161,   185,   243,   217,   220,
     331,   244,   473,   196,   225,   432,   353,   130,   423,   255,
     250,   397,   320,   206,   401,   251,   549,     5,   195,   245,
     146,   155,   332,   179,   320,   379,   390,   523,   332,   570,
     226,   575,   174,   546,   177,   610,   550,     5,   262,   205,
     440,   441,   169,   459,   442,   229,   544,   503,   544,   320,
      26,   171,   186,   320,   232,   278,   261,   276,   485,   482,
     242,   210,   400,    36,   531,   398,   172,   448,   271,   232,
      26,   449,   186,   232,     8,   502,    10,   232,   436,   233,
     234,   439,   222,    36,   429,   409,   321,   413,   225,   352,
     241,   607,   546,   534,   233,   234,   232,   535,   233,   234,
     187,   484,   233,   234,   335,   173,   232,   336,   180,   338,
     289,   494,   232,   605,   161,   195,   232,   606,   318,   185,
     232,   233,   234,   500,   589,   356,   354,   533,   160,   161,
     537,   233,   234,   382,   257,   133,   134,   233,   234,   519,
     304,   233,   234,   195,   232,   233,   234,   202,   373,   204,
     520,   521,   207,   511,   195,   223,   185,   227,   195,   195,
     230,   355,   613,   386,    31,   235,   235,   142,   143,   233,
     234,   249,   274,   246,    38,   283,   284,   195,   559,   247,
     371,   248,   195,   299,   284,   375,   586,   286,   565,   566,
     567,   237,   259,   185,   215,   555,   260,   195,   270,   418,
     195,    31,   195,   392,  -251,   393,   253,   386,   254,   597,
     256,    38,   258,  -142,   509,   263,  -252,   385,   232,   278,
     272,   195,   273,   187,   412,   327,   210,   279,   601,   280,
     185,   291,   186,   195,    56,    57,    58,    59,    31,   310,
     311,   195,   292,   233,   234,   339,   238,   293,    38,   341,
     295,   264,   294,   346,   342,   343,   344,   157,   545,   298,
     187,   357,   302,   185,   303,    65,    66,   183,   184,   186,
     309,    56,    57,    58,    59,    31,   608,   460,   306,   313,
     265,   155,   316,   347,   319,    38,   322,   323,   210,   324,
     325,    56,   329,    58,   384,   330,   320,   187,   160,   161,
     162,   163,    65,    66,   340,   395,   186,   372,    31,   157,
     386,   447,   337,   516,   377,   545,   374,   545,    38,   380,
     381,   265,   394,   396,   504,   463,   401,   404,   466,   284,
     416,   346,   414,   407,   187,   465,   422,   427,   428,   555,
     386,   431,   434,   435,   195,   437,   275,   210,   357,   137,
     138,   139,   140,   453,   443,   446,   455,   457,   458,   461,
     464,   462,   469,   213,   476,   195,   501,   187,   513,   480,
     470,   483,   478,   418,   195,   236,   485,   490,   491,   386,
     495,   496,   497,   560,   499,   505,   506,   507,   508,   386,
     386,   386,   510,   271,   518,   451,   514,   195,   524,   346,
     522,   525,   526,   528,   548,   538,   552,   195,   532,   530,
     527,   553,   195,   195,   554,   556,   468,   562,   561,   472,
     564,   577,   579,   195,   195,   195,   585,   580,   587,   593,
     588,   594,   603,   609,   595,   596,    68,   583,   612,   614,
     584,   611,   153,   602,   536,   475,   604,   591,   474,   551,
     498,   406,   287,   571,   572,   515,   573,   569,   268,   224,
     282,   578,   351,   305,   315,   236,   348,   574,   590,   417,
     568,   430,   367,   488,   361,   195,   360,   386,   556,   364,
     369,   362,   433,     0,   363,     0,     0,     0,     0,   365,
       0,   366,     0,     0,     0,   368,     0,     0,     0,   370,
       0,   592,     0,     0,     0,     0,   599,     0,     0,     0,
       0,   195,     0,   598,   600,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   615,     0,     1,     0,     2,   576,     3,     0,     4,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    25,     0,    26,    27,    28,    29,     0,    30,
      31,     0,    32,    33,    34,    35,     0,    36,    37,     0,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     1,     0,     2,     0,
       3,     0,     4,   156,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     1,
       0,     2,     0,     3,     0,     4,   277,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     4,
      65,    66,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     1,
       0,     2,     0,     3,     0,   129,     0,     5,     6,     0,
       0,     0,     0,     0,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      34,    35,     0,    36,    37,     0,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,   350,     0,     0,     0,
       0,    61,    62,    63,    64,     2,   128,     3,     0,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
      65,    66,   130,    56,   255,    58,   257,   133,   134,     0,
      20,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,     0,
      31,     0,     0,     0,    34,    35,   144,   145,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,   130,    56,   131,    58,   132,   133,   134,    60,
       0,   135,     0,     0,     0,    61,    62,    63,    64,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,     0,
       0,     0,     0,     0,    65,    66,   144,   145,     1,     0,
       2,     0,     3,     0,   129,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    34,
      35,     0,     0,    37,     0,    38,    39,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,   176,     0,     2,     0,     3,     0,
     129,     0,     0,     6,     0,     0,     0,     0,     0,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    34,    35,     0,     0,     0,
       0,    38,    39,    40,    41,    42,    43,     1,     0,     2,
       0,     3,     0,   129,     0,     0,     6,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,    20,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    65,    66,     0,    34,    35,
       0,     0,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     2,     0,     3,   153,   129,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,    20,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    65,    66,
      34,    35,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     2,     0,     3,     0,   129,     0,
       0,     6,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,   154,    20,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      65,    66,     0,    34,    35,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     2,     0,     3,     0,
     129,     0,     0,     6,     0,     0,     0,   208,   209,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,    20,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,    65,    66,    34,    35,     0,     0,     0,
     326,    38,    39,    40,    41,    42,    43,     0,     2,     0,
       3,   345,   129,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,    20,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    65,    66,    34,    35,     0,
       0,     0,     0,    38,    39,    40,    41,    42,    43,     0,
       2,     0,     3,     0,   129,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,    20,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    65,    66,    34,
      35,     0,     0,     0,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     2,     0,     3,   383,   129,     0,     0,
       6,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   154,    20,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    65,
      66,     0,    34,    35,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     2,     0,     3,   153,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
      20,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,    65,    66,    34,    35,     0,     0,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     2,   450,     3,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,    20,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,    65,    66,    34,    35,     0,     0,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     2,
       0,     3,   452,   129,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,    20,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    65,    66,    34,    35,
       0,     0,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     2,   467,     3,     0,   129,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,    20,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    65,    66,
      34,    35,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     2,     0,     3,     0,   129,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,    20,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      65,    66,    34,    35,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     2,     0,     3,     0,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
      20,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     4,     0,     0,
      31,     0,    65,    66,    34,    35,     0,     0,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,    34,    35,     0,    61,    62,    63,    64,    39,
      40,    41,    42,    43,     0,     0,     2,     0,     3,     0,
     129,     0,     0,     0,    65,    66,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
     215,    20,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    34,    35,     0,     0,     0,
       0,     0,    39,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,     4,    61,    25,    68,   172,    62,    63,
      19,   244,   303,    95,   101,   114,   317,   115,   455,   116,
       5,   117,   280,   208,    33,   194,   416,     4,   182,   238,
      15,    32,   190,     8,     4,   125,     5,    60,    61,    63,
      60,     6,     4,   125,    29,    30,     4,     3,   349,   483,
       4,   302,    10,   484,    81,    37,     5,    90,    62,    63,
      81,    94,    10,    26,    73,    92,     3,    82,   319,    84,
     101,     6,     9,    36,    22,   106,    10,    11,   101,   112,
       2,     3,   109,    81,     9,   270,    51,     6,   109,   520,
      75,     6,    14,   483,    16,     6,   486,    11,   122,    81,
     351,   352,     5,     3,   355,    61,   540,     3,   542,     9,
      44,     5,    81,     9,    91,    92,   120,    92,     4,   410,
     105,    43,    92,    57,    10,   290,     5,     4,   129,    91,
      44,     8,    81,    91,    15,   436,    17,    91,   347,   116,
     117,   350,    64,    57,   329,   299,   200,   305,   157,   239,
     237,   588,   542,     4,   116,   117,    91,     8,   116,   117,
     109,   412,   116,   117,   218,     5,    91,   221,     3,   226,
     171,   422,    91,     3,    37,   198,    91,     7,   198,     5,
      91,   116,   117,   434,    10,   242,   240,   478,    36,    37,
     481,   116,   117,   275,    86,    87,    88,   116,   117,   457,
     185,   116,   117,   226,    91,   116,   117,    81,   262,    81,
     461,   462,    81,   446,   237,     0,     5,     5,   241,   242,
       3,   241,     3,   280,    50,     7,     7,   107,   108,   116,
     117,   109,   154,   100,    60,    40,    41,   260,   496,   110,
     260,   111,   265,    40,    41,   265,   547,   169,   506,   507,
     508,    40,    93,     5,    92,    81,    89,   280,    65,   316,
     283,    50,   285,   283,     6,   285,   365,   324,   366,   570,
     367,    60,   368,     5,   443,     7,     6,   278,    91,    92,
       6,   304,     6,   109,   304,   207,   208,    10,   579,     5,
       5,    81,    81,   316,    83,    84,    85,    86,    50,    90,
      91,   324,     9,   116,   117,   227,    95,    81,    60,   231,
      31,    43,     3,   235,   232,   233,   234,   320,   483,    81,
     109,   243,    81,     5,    81,   114,   115,    23,    24,    81,
      43,    83,    84,    85,    86,    50,   594,   391,    92,     7,
     113,   263,     5,    95,    81,    60,    81,    55,   270,     5,
      81,    83,    66,    85,   276,     5,     9,   109,    36,    37,
      38,    39,   114,   115,     3,   287,    81,     9,    50,   372,
     427,   372,    99,   455,     5,   540,    81,   542,    60,     8,
       7,   113,     6,     4,   438,   394,    22,     9,   397,    41,
       9,   313,    81,   113,   109,   396,    81,     5,    59,    81,
     457,    81,    81,     6,   427,     3,     8,   329,   330,   102,
     103,   104,   105,     8,    81,    92,    81,     4,     6,    81,
       3,    81,    81,   480,    81,   448,   435,   109,   448,    42,
      12,     9,    81,   490,   457,   517,     4,     4,    30,   496,
       9,     4,     6,   497,     6,     6,     5,     5,     5,   506,
     507,   508,     4,   454,    92,   377,     6,   480,   467,   381,
      14,     6,    92,    23,    81,     9,    81,   490,   477,    24,
     471,    81,   495,   496,     3,   495,   398,    23,     6,   401,
       3,    92,    81,   506,   507,   508,    10,     9,     3,     3,
      81,     4,    10,     3,     6,     6,     0,   540,     6,     6,
     542,    10,     8,   580,   480,   404,   586,   561,   403,   490,
     427,   297,   170,   522,   523,   454,   525,   518,   125,   581,
     167,   530,   239,   187,   195,   607,   237,   526,   558,   309,
     510,   330,   254,   418,   246,   558,   245,   594,   558,   249,
     258,   247,   334,    -1,   248,    -1,    -1,    -1,    -1,   252,
      -1,   253,    -1,    -1,    -1,   256,    -1,    -1,    -1,   259,
      -1,   562,    -1,    -1,    -1,    -1,   575,    -1,    -1,    -1,
      -1,   594,    -1,   574,   577,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   600,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   610,    -1,     3,    -1,     5,   528,     7,    -1,     9,
      -1,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    -1,    49,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    -1,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,     3,    -1,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,
     114,   115,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    56,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,     5,     6,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    82,    83,    84,    85,    86,    87,    88,    -1,
      30,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      50,    -1,    -1,    -1,    54,    55,   116,   117,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,     3,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    63,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,     3,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,     3,    -1,     5,
      -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    30,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,   114,   115,    -1,    54,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      -1,     5,    -1,     7,     8,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
      86,    -1,    -1,    89,    -1,    -1,    30,    -1,    -1,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   114,   115,
      54,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    92,    30,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
     114,   115,    -1,    54,    55,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   114,   115,    54,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,     5,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    30,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   114,   115,    54,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    30,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,   114,   115,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,     5,    -1,     7,     8,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    92,    30,    -1,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   114,
     115,    -1,    54,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,
      30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,   114,   115,    54,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,     5,     6,     7,
      -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    30,    -1,    -1,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   114,   115,    54,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    -1,     5,
      -1,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    30,    -1,    -1,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   114,   115,    54,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      -1,     5,     6,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
      86,    -1,    -1,    89,    -1,    -1,    30,    -1,    -1,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,   114,   115,
      54,    55,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    30,    -1,
      -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
     114,   115,    54,    55,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    -1,     5,    -1,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,
      30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,
      50,    -1,   114,   115,    54,    55,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    54,    55,    -1,    95,    96,    97,    98,    61,
      62,    63,    64,    65,    -1,    -1,     5,    -1,     7,    -1,
       9,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    81,
      -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,
      92,    30,    -1,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      49,    50,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    63,    64,    65,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    81,    83,    84,    85,    86,
      89,    95,    96,    97,    98,   114,   115,   125,   126,   127,
     129,   135,   139,   143,   148,   150,   151,   161,   162,   163,
     164,   168,   170,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   187,   188,   190,   191,   192,   203,
     204,   207,   208,   209,   216,   218,   221,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   248,   251,   252,   253,   255,   259,     6,     9,
      82,    84,    86,    87,    88,    91,   101,   102,   103,   104,
     105,   106,   107,   108,   116,   117,   183,   186,   205,   227,
     228,   229,   230,     8,    92,   183,    10,   143,   184,   189,
      36,    37,    38,    39,   147,   197,   198,   199,   200,     5,
     163,     5,     5,     5,   183,   200,     3,   183,   163,    81,
       3,   128,   200,   128,   128,     5,    81,   109,   152,   154,
     210,   211,   212,   214,   215,   216,   197,   144,   200,   200,
     184,   163,    81,   247,    81,    81,   197,    81,    78,    79,
     183,   254,   154,   152,   153,    92,   161,   246,   258,   161,
     246,   258,   183,     0,   127,   163,   200,     5,     3,    61,
       3,     4,    91,   116,   117,     7,   187,    40,    95,   154,
     206,   245,   200,    90,    94,   112,   100,   110,   111,   109,
     101,   106,   226,   227,   228,    84,   229,    86,   230,    93,
      89,   246,   258,     7,    43,   113,   185,   187,   190,   251,
      65,   184,     6,     6,   183,     8,    92,    10,    92,    10,
       5,   193,   198,    40,    41,   201,   183,   175,    81,   184,
     182,    81,     9,    81,     3,    31,   165,   167,    81,    40,
     201,   202,    81,    81,   200,   210,    92,   137,   185,    43,
      90,    91,   213,     7,   191,   214,     5,   194,   154,    81,
       9,   161,    81,    55,     5,    81,    59,   183,   254,    66,
       5,    81,   109,   256,   257,   161,   161,    99,   152,   183,
       3,   183,   192,   192,   192,     8,   183,    95,   206,   193,
      56,   205,   251,     3,   161,   154,   152,   183,   231,   232,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   154,     9,   161,    81,   154,   249,     5,   250,   254,
       8,     7,   187,     8,   183,   184,   152,   155,   156,     6,
      51,   195,   154,   154,     6,   183,     4,     6,   182,     4,
      92,    22,   172,   173,     9,   166,   165,   113,   196,   201,
     196,   137,   154,   185,    81,   141,     9,   212,   152,   159,
     160,   195,    81,   196,   155,   157,   158,     5,    59,   254,
     231,    81,    92,   256,    81,     6,   193,     3,   195,   193,
     196,   196,   196,    81,   222,   223,    92,   184,     4,     8,
       6,   183,     8,     8,     4,    81,   224,     4,     6,     3,
     161,    81,    81,   163,     3,   184,   163,     6,   183,    81,
      12,   217,   183,    10,   172,   141,    81,   169,    81,   142,
      42,   136,   137,     9,   196,     4,   138,   209,   224,   225,
       4,    30,   145,   146,   196,     9,     4,     6,   158,     6,
     196,   163,   195,     3,   161,     6,     5,     5,     5,   191,
       4,   232,    10,   154,     6,   189,   187,   188,    92,   155,
     196,   196,    14,     6,   163,     6,    92,   184,    23,   171,
      24,    10,   163,   137,     4,     8,   153,   137,     9,   130,
     131,   132,   133,   134,   162,   182,   209,   194,    81,    10,
     209,   159,    81,    81,     3,    81,   154,   219,   220,   155,
     161,     6,    23,   149,     3,   155,   155,   155,   223,   184,
     194,   163,   163,   163,   217,     6,   183,    92,   163,    81,
       9,   126,   140,   130,   132,    10,   195,     3,    81,    10,
     219,   161,   184,     3,     4,     6,     6,   195,   184,   163,
     143,   137,   140,    10,   146,     3,     7,   188,   155,     3,
       6,    10,     6,     3,     6,   163
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   137,   138,   138,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   147,
     148,   149,   149,   150,   150,   151,   152,   152,   153,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   160,
     160,   161,   161,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   166,   165,
     167,   167,   168,   169,   169,   170,   171,   171,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   178,   179,   179,   180,   180,   181,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     184,   185,   185,   186,   186,   186,   186,   186,   187,   187,
     187,   188,   188,   188,   189,   189,   190,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   198,   198,   199,   199,   200,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   204,   205,
     205,   205,   205,   205,   206,   206,   206,   206,   207,   207,
     208,   208,   208,   209,   209,   209,   209,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   213,   214,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   219,
     220,   220,   221,   222,   222,   223,   223,   224,   224,   224,
     225,   225,   226,   226,   227,   227,   227,   227,   228,   228,
     229,   229,   230,   230,   230,   231,   231,   232,   232,   232,
     233,   233,   234,   234,   235,   235,   236,   236,   237,   237,
     238,   238,   239,   239,   240,   240,   241,   241,   242,   242,
     243,   243,   244,   244,   245,   245,   245,   245,   245,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   250,   251,   251,
     252,   253,   253,   253,   253,   253,   253,   254,   254,   254,
     255,   255,   256,   256,   257,   257,   258,   258,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259
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
       4,     2,     1,     3,     1,     3,     1,     0,     2,     1,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     4,
       1,     2,     3,     1,     0,     6,     2,     0,     5,     1,
       2,     7,     5,     1,     1,     5,     5,     6,     7,     8,
      10,     5,     7,     3,     2,     5,     7,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     3,     1,     3,     3,
       3,     3,     0,     1,     1,     1,     1,     1,     3,     4,
       5,     2,     3,     2,     3,     5,     5,     4,     4,     1,
       1,     1,     4,     2,     1,     2,     1,     2,     1,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     0,     2,     1,     5,     5,     7,     6,     9,     1,
       1,     1,     1,     1,     8,     6,     6,     4,     1,     2,
       3,     3,     4,     1,     1,     1,     5,     5,     6,     1,
       8,     2,     3,     1,     3,     1,     1,     0,     2,     1,
       2,     1,     1,     1,     0,     1,     1,     2,     3,     4,
       1,     2,     7,     3,     1,     1,     2,     1,     2,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     5,     2,     2,     2,     3,     3,     2,
       1,     2,     2,     1,     1,     3,     3,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     1,     1,     2,     3,
       2,     3,     1,     2,     1,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     3,
       3,     5,     3,     2,     2
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
#line 179 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2507 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 180 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2513 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 183 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2522 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 187 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2531 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 193 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2537 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2543 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2549 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2555 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2561 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2567 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2573 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 200 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2579 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 201 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2585 "src/parser.c"
    break;

  case 15: /* class_flag: flag modifier  */
#line 204 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2591 "src/parser.c"
    break;

  case 16: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 207 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2602 "src/parser.c"
    break;

  case 17: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 214 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2614 "src/parser.c"
    break;

  case 18: /* trait_stmt: exp_stmt  */
#line 222 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2624 "src/parser.c"
    break;

  case 20: /* trait_stmt_list: trait_stmt  */
#line 227 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2633 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 231 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2642 "src/parser.c"
    break;

  case 22: /* trait_section: trait_stmt_list  */
#line 237 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2648 "src/parser.c"
    break;

  case 23: /* trait_section: func_def  */
#line 238 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2654 "src/parser.c"
    break;

  case 24: /* trait_ast: trait_section  */
#line 242 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2663 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_ast trait_section  */
#line 246 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2672 "src/parser.c"
    break;

  case 27: /* trait_body: %empty  */
#line 251 "src/gwion.y"
                         { (yyval.ast) = NULL; }
#line 2678 "src/parser.c"
    break;

  case 28: /* trait_def: "trait" class_flag "<identifier>" traits "{" trait_body "}"  */
#line 254 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-1].ast), (yylsp[-4]));
      (yyval.trait_def)->traits = (yyvsp[-3].id_list);
      if(GET_FLAG((yyval.trait_def), abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", (yylsp[-4])); }
        UNSET_FLAG((yyval.trait_def), abstract);
      }
    }
#line 2691 "src/parser.c"
    break;

  case 29: /* class_ext: "extends" type_decl_exp  */
#line 263 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2697 "src/parser.c"
    break;

  case 30: /* class_ext: %empty  */
#line 263 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2703 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 264 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2709 "src/parser.c"
    break;

  case 32: /* traits: ":" id_list  */
#line 264 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2715 "src/parser.c"
    break;

  case 33: /* extend_body: func_def  */
#line 266 "src/gwion.y"
             {
    (yyval.ast) = new_mp_vector(mpool(arg), sizeof(Section), 1);
    mp_vector_set((yyval.ast), Section, 0, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
  }
#line 2724 "src/parser.c"
    break;

  case 34: /* extend_body: extend_body func_def  */
#line 270 "src/gwion.y"
                         {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, MK_SECTION(func, func_def, (yyvsp[0].func_def)));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2733 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty traits "{" extend_body "}"  */
#line 275 "src/gwion.y"
                                                                 {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-1].ast));
  (yyval.extend_def)->traits = (yyvsp[-3].id_list);
}
#line 2742 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 281 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2748 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 284 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), sizeof(Symbol), 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2757 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 289 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2766 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 294 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), sizeof(Specialized), 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2779 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 302 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2789 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 308 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2798 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 312 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2807 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 317 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2814 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 320 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2820 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 320 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2826 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 321 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2832 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 321 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2838 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 323 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2845 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";"  */
#line 326 "src/gwion.y"
                                                                 {
  (yyvsp[-4].func_base)->args = (yyvsp[-3].arg_list);
  (yyvsp[-4].func_base)->fbflag |= (yyvsp[-2].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-4].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2856 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 333 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2862 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 333 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2868 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 334 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2874 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 334 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2880 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 335 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2893 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 344 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2899 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 346 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2907 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 350 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2915 "src/parser.c"
    break;

  case 60: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 355 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2924 "src/parser.c"
    break;

  case 61: /* arg: type_decl_array arg_decl  */
#line 359 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2933 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 364 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2943 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 369 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2955 "src/parser.c"
    break;

  case 64: /* locale_arg: arg  */
#line 378 "src/gwion.y"
        {
       (yyval.default_args).args = new_mp_vector(mpool(arg), sizeof(Arg), 2);
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
       mp_vector_set((yyval.default_args).args, Arg, 1, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2971 "src/parser.c"
    break;

  case 65: /* locale_arg: locale_arg "," arg  */
#line 389 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2983 "src/parser.c"
    break;

  case 67: /* locale_list: %empty  */
#line 398 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 2997 "src/parser.c"
    break;

  case 68: /* fptr_arg: type_decl_array fptr_arg_decl  */
#line 408 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3003 "src/parser.c"
    break;

  case 69: /* fptr_list: fptr_arg  */
#line 410 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3012 "src/parser.c"
    break;

  case 70: /* fptr_list: fptr_list "," fptr_arg  */
#line 414 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3021 "src/parser.c"
    break;

  case 71: /* code_stmt: "{" "}"  */
#line 420 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3028 "src/parser.c"
    break;

  case 72: /* code_stmt: "{" stmt_list "}"  */
#line 422 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3035 "src/parser.c"
    break;

  case 73: /* stmt_pp: "<comment>"  */
#line 426 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3041 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#include"  */
#line 427 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3047 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#define"  */
#line 428 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3053 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#pragma"  */
#line 429 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3059 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#undef"  */
#line 430 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3065 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#ifdef"  */
#line 431 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3071 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#ifndef"  */
#line 432 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3077 "src/parser.c"
    break;

  case 80: /* stmt_pp: "#else"  */
#line 433 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3083 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#if"  */
#line 434 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3089 "src/parser.c"
    break;

  case 82: /* stmt_pp: "\n"  */
#line 435 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3095 "src/parser.c"
    break;

  case 83: /* stmt_pp: "import"  */
#line 436 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3101 "src/parser.c"
    break;

  case 84: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 437 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3108 "src/parser.c"
    break;

  case 85: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 439 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3115 "src/parser.c"
    break;

  case 97: /* retry_stmt: "retry" ";"  */
#line 456 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3125 "src/parser.c"
    break;

  case 98: /* $@1: %empty  */
#line 461 "src/gwion.y"
                  { arg->handling = true; }
#line 3131 "src/parser.c"
    break;

  case 99: /* handler: "handle" $@1 opt_id stmt  */
#line 461 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3137 "src/parser.c"
    break;

  case 100: /* handler_list: handler  */
#line 462 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), sizeof(Handler), 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3147 "src/parser.c"
    break;

  case 101: /* handler_list: handler_list handler  */
#line 467 "src/gwion.y"
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
#line 3168 "src/parser.c"
    break;

  case 102: /* try_stmt: "try" stmt handler_list  */
#line 483 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3177 "src/parser.c"
    break;

  case 104: /* opt_id: %empty  */
#line 488 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3183 "src/parser.c"
    break;

  case 105: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 491 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3192 "src/parser.c"
    break;

  case 106: /* when_exp: "when" exp  */
#line 496 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3198 "src/parser.c"
    break;

  case 107: /* when_exp: %empty  */
#line 496 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3204 "src/parser.c"
    break;

  case 108: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 499 "src/gwion.y"
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
#line 3220 "src/parser.c"
    break;

  case 109: /* match_list: match_case_stmt  */
#line 511 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), sizeof(struct Stmt_), 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3229 "src/parser.c"
    break;

  case 110: /* match_list: match_list match_case_stmt  */
#line 515 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3238 "src/parser.c"
    break;

  case 111: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 520 "src/gwion.y"
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
#line 3253 "src/parser.c"
    break;

  case 112: /* match_stmt: "match" exp "{" match_list "}"  */
#line 531 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3267 "src/parser.c"
    break;

  case 113: /* flow: "while"  */
#line 542 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3273 "src/parser.c"
    break;

  case 114: /* flow: "until"  */
#line 543 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3279 "src/parser.c"
    break;

  case 115: /* loop_stmt: flow "(" exp ")" stmt  */
#line 548 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3292 "src/parser.c"
    break;

  case 116: /* loop_stmt: "do" stmt flow exp ";"  */
#line 557 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3306 "src/parser.c"
    break;

  case 117: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 567 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3320 "src/parser.c"
    break;

  case 118: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 577 "src/gwion.y"
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
#line 3335 "src/parser.c"
    break;

  case 119: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 588 "src/gwion.y"
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
#line 3352 "src/parser.c"
    break;

  case 120: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 601 "src/gwion.y"
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
#line 3374 "src/parser.c"
    break;

  case 121: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 619 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3387 "src/parser.c"
    break;

  case 122: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 628 "src/gwion.y"
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
#line 3404 "src/parser.c"
    break;

  case 123: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 641 "src/gwion.y"
                                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_varloop,
  .d = { .stmt_varloop = {
    .exp = (yyvsp[-1].exp),
    .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  }},
  .pos = (yylsp[-2])
};}
#line 3416 "src/parser.c"
    break;

  case 124: /* defer_stmt: "defer" stmt  */
#line 649 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3426 "src/parser.c"
    break;

  case 125: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 657 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3439 "src/parser.c"
    break;

  case 126: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 666 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3453 "src/parser.c"
    break;

  case 127: /* breaks: "break"  */
#line 676 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3459 "src/parser.c"
    break;

  case 128: /* breaks: "continue"  */
#line 676 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3465 "src/parser.c"
    break;

  case 129: /* jump_stmt: "return" exp ";"  */
#line 678 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3475 "src/parser.c"
    break;

  case 130: /* jump_stmt: "return" ";"  */
#line 683 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3484 "src/parser.c"
    break;

  case 131: /* jump_stmt: breaks "<integer>" ";"  */
#line 687 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3494 "src/parser.c"
    break;

  case 132: /* jump_stmt: breaks ";"  */
#line 692 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3503 "src/parser.c"
    break;

  case 133: /* exp_stmt: exp ";"  */
#line 698 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3513 "src/parser.c"
    break;

  case 134: /* exp_stmt: ";"  */
#line 703 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3522 "src/parser.c"
    break;

  case 135: /* exp: binary_exp  */
#line 709 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3528 "src/parser.c"
    break;

  case 136: /* exp: binary_exp "," exp  */
#line 711 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3540 "src/parser.c"
    break;

  case 138: /* binary_exp: binary_exp "@" decl_exp  */
#line 722 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3546 "src/parser.c"
    break;

  case 139: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 723 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3552 "src/parser.c"
    break;

  case 140: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 724 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3558 "src/parser.c"
    break;

  case 141: /* call_template: ":[" type_list "]"  */
#line 727 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3564 "src/parser.c"
    break;

  case 142: /* call_template: %empty  */
#line 727 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3570 "src/parser.c"
    break;

  case 148: /* array_exp: "[" exp "]"  */
#line 732 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3576 "src/parser.c"
    break;

  case 149: /* array_exp: "[" exp "]" array_exp  */
#line 733 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3584 "src/parser.c"
    break;

  case 150: /* array_exp: "[" exp "]" "[" "]"  */
#line 736 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3590 "src/parser.c"
    break;

  case 151: /* array_empty: "[" "]"  */
#line 740 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3596 "src/parser.c"
    break;

  case 152: /* array_empty: array_empty "[" "]"  */
#line 741 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3602 "src/parser.c"
    break;

  case 153: /* array_empty: array_empty array_exp  */
#line 742 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3608 "src/parser.c"
    break;

  case 154: /* dict_list: binary_exp ":" binary_exp  */
#line 746 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3614 "src/parser.c"
    break;

  case 155: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 747 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3620 "src/parser.c"
    break;

  case 156: /* range: "[" exp ":" exp "]"  */
#line 750 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3626 "src/parser.c"
    break;

  case 157: /* range: "[" exp ":" "]"  */
#line 751 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3632 "src/parser.c"
    break;

  case 158: /* range: "[" ":" exp "]"  */
#line 752 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3638 "src/parser.c"
    break;

  case 162: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 758 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3644 "src/parser.c"
    break;

  case 163: /* func_args: "(" arg_list  */
#line 760 "src/gwion.y"
                          { (yyval.default_args) = (yyvsp[0].default_args); }
#line 3650 "src/parser.c"
    break;

  case 164: /* func_args: "("  */
#line 760 "src/gwion.y"
                                             { (yyval.default_args) = (struct ParserArg){}; }
#line 3656 "src/parser.c"
    break;

  case 165: /* fptr_args: "(" fptr_list  */
#line 761 "src/gwion.y"
                         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3662 "src/parser.c"
    break;

  case 166: /* fptr_args: "("  */
#line 761 "src/gwion.y"
                                            { (yyval.arg_list) = NULL; }
#line 3668 "src/parser.c"
    break;

  case 167: /* arg_type: "..." ")"  */
#line 762 "src/gwion.y"
                    { (yyval.fbflag) = fbflag_variadic; }
#line 3674 "src/parser.c"
    break;

  case 168: /* arg_type: ")"  */
#line 762 "src/gwion.y"
                                                   { (yyval.fbflag) = 0; }
#line 3680 "src/parser.c"
    break;

  case 169: /* decl_template: ":[" specialized_list "]"  */
#line 764 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3686 "src/parser.c"
    break;

  case 170: /* decl_template: %empty  */
#line 764 "src/gwion.y"
                                                        { (yyval.specialized_list) = NULL; }
#line 3692 "src/parser.c"
    break;

  case 171: /* global: "global"  */
#line 766 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3698 "src/parser.c"
    break;

  case 172: /* storage_flag: "static"  */
#line 768 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3704 "src/parser.c"
    break;

  case 174: /* access_flag: "private"  */
#line 770 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3710 "src/parser.c"
    break;

  case 175: /* access_flag: "protect"  */
#line 771 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3716 "src/parser.c"
    break;

  case 176: /* flag: access_flag  */
#line 774 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3722 "src/parser.c"
    break;

  case 177: /* flag: storage_flag  */
#line 775 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3728 "src/parser.c"
    break;

  case 178: /* flag: access_flag storage_flag  */
#line 776 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3734 "src/parser.c"
    break;

  case 179: /* flag: %empty  */
#line 777 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3740 "src/parser.c"
    break;

  case 180: /* final: "final"  */
#line 780 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3746 "src/parser.c"
    break;

  case 181: /* final: %empty  */
#line 780 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3752 "src/parser.c"
    break;

  case 182: /* modifier: "abstract" final  */
#line 782 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3758 "src/parser.c"
    break;

  case 184: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 785 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), &(yyvsp[0].stmt));
  }
#line 3768 "src/parser.c"
    break;

  case 185: /* func_def_base: "fun" func_base func_args arg_type ";"  */
#line 790 "src/gwion.y"
                                              {
    if((yyvsp[-2].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-3].func_base)->args = (yyvsp[-2].default_args).args;
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    SET_FLAG((yyvsp[-3].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), NULL);
  }
#line 3781 "src/parser.c"
    break;

  case 186: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_stmt  */
#line 798 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)));
  }
#line 3792 "src/parser.c"
    break;

  case 187: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_stmt  */
#line 804 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)));
  }
#line 3803 "src/parser.c"
    break;

  case 188: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 813 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3816 "src/parser.c"
    break;

  case 194: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 825 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), sizeof(Arg), 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3830 "src/parser.c"
    break;

  case 195: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 835 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3843 "src/parser.c"
    break;

  case 196: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 844 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), sizeof(Arg), 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3857 "src/parser.c"
    break;

  case 197: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 854 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].default_args).args, ae_flag_none, (yylsp[-2]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3866 "src/parser.c"
    break;

  case 198: /* operator: "operator"  */
#line 859 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3872 "src/parser.c"
    break;

  case 199: /* operator: "operator" global  */
#line 859 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3878 "src/parser.c"
    break;

  case 200: /* op_def: operator op_base code_stmt  */
#line 862 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), &(yyvsp[0].stmt)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3884 "src/parser.c"
    break;

  case 201: /* op_def: operator op_base ";"  */
#line 864 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3890 "src/parser.c"
    break;

  case 202: /* op_def: operator "abstract" op_base ";"  */
#line 866 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3896 "src/parser.c"
    break;

  case 206: /* func_def: operator "new" func_args arg_type code_stmt  */
#line 870 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag), (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag) | (yyvsp[-2].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, &(yyvsp[0].stmt));
    }
#line 3906 "src/parser.c"
    break;

  case 207: /* func_def: operator "new" func_args arg_type ";"  */
#line 876 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3918 "src/parser.c"
    break;

  case 208: /* func_def: operator "abstract" "new" func_args arg_type ";"  */
#line 884 "src/gwion.y"
    {
      if((yyvsp[-2].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-3].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag) | ae_flag_abstract, (yylsp[-3]));
      base->fbflag = (yyvsp[-1].fbflag);
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3930 "src/parser.c"
    break;

  case 209: /* type_decl_base: "<identifier>"  */
#line 893 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3936 "src/parser.c"
    break;

  case 210: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")"  */
#line 894 "src/gwion.y"
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
#line 3953 "src/parser.c"
    break;

  case 211: /* type_decl_tmpl: type_decl_base call_template  */
#line 909 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3959 "src/parser.c"
    break;

  case 212: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 910 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3965 "src/parser.c"
    break;

  case 214: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 915 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3971 "src/parser.c"
    break;

  case 215: /* option: "?"  */
#line 918 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3977 "src/parser.c"
    break;

  case 216: /* option: OPTIONS  */
#line 918 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3983 "src/parser.c"
    break;

  case 217: /* option: %empty  */
#line 918 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3989 "src/parser.c"
    break;

  case 218: /* type_decl_opt: type_decl_noflag option  */
#line 919 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3995 "src/parser.c"
    break;

  case 220: /* type_decl: type_decl_flag type_decl_opt  */
#line 920 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4001 "src/parser.c"
    break;

  case 221: /* type_decl_flag: "late"  */
#line 923 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4007 "src/parser.c"
    break;

  case 222: /* type_decl_flag: "const"  */
#line 924 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4013 "src/parser.c"
    break;

  case 223: /* opt_var: "var"  */
#line 926 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4019 "src/parser.c"
    break;

  case 224: /* opt_var: %empty  */
#line 926 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4025 "src/parser.c"
    break;

  case 225: /* type_decl_flag2: "var"  */
#line 928 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4031 "src/parser.c"
    break;

  case 227: /* union_decl: "<identifier>" ";"  */
#line 931 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4040 "src/parser.c"
    break;

  case 228: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 935 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4046 "src/parser.c"
    break;

  case 229: /* union_decl: type_decl_empty "<identifier>" array_empty ";"  */
#line 936 "src/gwion.y"
                                     { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-3].type_decl), .vd = { .xid =(yyvsp[-2].sym), .array = (yyvsp[-1].array_sub), .pos = (yylsp[-2]) }  };}
#line 4052 "src/parser.c"
    break;

  case 230: /* union_list: union_decl  */
#line 938 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), sizeof(Union_Member), 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4061 "src/parser.c"
    break;

  case 231: /* union_list: union_list union_decl  */
#line 942 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4070 "src/parser.c"
    break;

  case 232: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 948 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4082 "src/parser.c"
    break;

  case 233: /* var_decl_list: var_decl_list "," var_decl  */
#line 958 "src/gwion.y"
                               {
     mp_vector_add(mpool(arg), &(yyvsp[-2].var_decl_list), struct Var_Decl_, (yyvsp[0].var_decl));
     (yyval.var_decl_list) = (yyvsp[-2].var_decl_list);
  }
#line 4091 "src/parser.c"
    break;

  case 234: /* var_decl_list: var_decl  */
#line 962 "src/gwion.y"
             {
     (yyval.var_decl_list) = new_mp_vector(mpool(arg), sizeof(struct Var_Decl_), 1);
     mp_vector_set((yyval.var_decl_list), struct Var_Decl_, 0, (yyvsp[0].var_decl));
  }
#line 4100 "src/parser.c"
    break;

  case 235: /* var_decl: "<identifier>"  */
#line 968 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4106 "src/parser.c"
    break;

  case 236: /* var_decl: "<identifier>" array  */
#line 969 "src/gwion.y"
               { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 4112 "src/parser.c"
    break;

  case 237: /* arg_decl: "<identifier>"  */
#line 971 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4118 "src/parser.c"
    break;

  case 238: /* arg_decl: "<identifier>" array_empty  */
#line 972 "src/gwion.y"
                   { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[-1].sym), .array = (yyvsp[0].array_sub), .pos = (yylsp[-1]) }; }
#line 4124 "src/parser.c"
    break;

  case 239: /* arg_decl: "<identifier>" array_exp  */
#line 973 "src/gwion.y"
                 { parser_error(&(yylsp[0]), arg, "argument/union must be defined with empty []'s", 0210); YYERROR; }
#line 4130 "src/parser.c"
    break;

  case 241: /* fptr_arg_decl: %empty  */
#line 974 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4136 "src/parser.c"
    break;

  case 255: /* opt_exp: exp  */
#line 982 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4142 "src/parser.c"
    break;

  case 256: /* opt_exp: %empty  */
#line 982 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4148 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 985 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4154 "src/parser.c"
    break;

  case 259: /* con_exp: log_or_exp "?:" con_exp  */
#line 987 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4160 "src/parser.c"
    break;

  case 261: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 989 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4166 "src/parser.c"
    break;

  case 263: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 990 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4172 "src/parser.c"
    break;

  case 265: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 991 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4178 "src/parser.c"
    break;

  case 267: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 992 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4184 "src/parser.c"
    break;

  case 269: /* and_exp: and_exp "&" eq_exp  */
#line 993 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4190 "src/parser.c"
    break;

  case 271: /* eq_exp: eq_exp eq_op rel_exp  */
#line 994 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4196 "src/parser.c"
    break;

  case 273: /* rel_exp: rel_exp rel_op shift_exp  */
#line 995 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4202 "src/parser.c"
    break;

  case 275: /* shift_exp: shift_exp shift_op add_exp  */
#line 996 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4208 "src/parser.c"
    break;

  case 277: /* add_exp: add_exp add_op mul_exp  */
#line 997 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4214 "src/parser.c"
    break;

  case 279: /* mul_exp: mul_exp mul_op dur_exp  */
#line 998 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4220 "src/parser.c"
    break;

  case 281: /* dur_exp: dur_exp "::" cast_exp  */
#line 999 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4226 "src/parser.c"
    break;

  case 283: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1002 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4232 "src/parser.c"
    break;

  case 290: /* unary_exp: unary_op unary_exp  */
#line 1009 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4238 "src/parser.c"
    break;

  case 291: /* unary_exp: "spork" unary_exp  */
#line 1010 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4244 "src/parser.c"
    break;

  case 292: /* unary_exp: "fork" unary_exp  */
#line 1011 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4250 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1012 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4258 "src/parser.c"
    break;

  case 294: /* unary_exp: "new" type_decl_exp  */
#line 1015 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4264 "src/parser.c"
    break;

  case 295: /* unary_exp: "spork" code_stmt  */
#line 1016 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4270 "src/parser.c"
    break;

  case 296: /* unary_exp: "fork" code_stmt  */
#line 1017 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), &(yyvsp[0].stmt), (yylsp[-1])); }
#line 4276 "src/parser.c"
    break;

  case 297: /* unary_exp: "spork" captures code_stmt  */
#line 1018 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4282 "src/parser.c"
    break;

  case 298: /* unary_exp: "fork" captures code_stmt  */
#line 1019 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4288 "src/parser.c"
    break;

  case 299: /* unary_exp: "$" type_decl_empty  */
#line 1020 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4294 "src/parser.c"
    break;

  case 300: /* lambda_list: "<identifier>"  */
#line 1023 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), sizeof(Arg), 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4304 "src/parser.c"
    break;

  case 301: /* lambda_list: lambda_list "<identifier>"  */
#line 1028 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4314 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\" lambda_list  */
#line 1033 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4320 "src/parser.c"
    break;

  case 303: /* lambda_arg: "\\"  */
#line 1033 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4326 "src/parser.c"
    break;

  case 304: /* type_list: type_decl_empty  */
#line 1036 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), sizeof(Type_Decl*), 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4335 "src/parser.c"
    break;

  case 305: /* type_list: type_list "," type_decl_empty  */
#line 1040 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4344 "src/parser.c"
    break;

  case 306: /* call_paren: "(" exp ")"  */
#line 1046 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4350 "src/parser.c"
    break;

  case 307: /* call_paren: "(" ")"  */
#line 1046 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4356 "src/parser.c"
    break;

  case 310: /* dot_exp: post_exp "." "<identifier>"  */
#line 1050 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4369 "src/parser.c"
    break;

  case 312: /* post_exp: post_exp array_exp  */
#line 1061 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4375 "src/parser.c"
    break;

  case 313: /* post_exp: post_exp range  */
#line 1063 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4381 "src/parser.c"
    break;

  case 314: /* post_exp: post_exp call_template call_paren  */
#line 1065 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4388 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp post_op  */
#line 1068 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4394 "src/parser.c"
    break;

  case 316: /* post_exp: dot_exp  */
#line 1069 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4400 "src/parser.c"
    break;

  case 317: /* interp_exp: "<interp string end>"  */
#line 1073 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4406 "src/parser.c"
    break;

  case 318: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1074 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4412 "src/parser.c"
    break;

  case 319: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1075 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4418 "src/parser.c"
    break;

  case 320: /* interp: "${" interp_exp  */
#line 1077 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4424 "src/parser.c"
    break;

  case 321: /* interp: interp "${" interp_exp  */
#line 1078 "src/gwion.y"
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
#line 4439 "src/parser.c"
    break;

  case 322: /* capture: "<identifier>"  */
#line 1089 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4445 "src/parser.c"
    break;

  case 323: /* capture: "&" "<identifier>"  */
#line 1089 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4451 "src/parser.c"
    break;

  case 324: /* _captures: capture  */
#line 1091 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), sizeof(Capture), 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4457 "src/parser.c"
    break;

  case 325: /* _captures: _captures capture  */
#line 1092 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4463 "src/parser.c"
    break;

  case 326: /* captures: ":" _captures ":"  */
#line 1093 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4469 "src/parser.c"
    break;

  case 327: /* captures: %empty  */
#line 1093 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4475 "src/parser.c"
    break;

  case 328: /* prim_exp: "<identifier>"  */
#line 1095 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4481 "src/parser.c"
    break;

  case 329: /* prim_exp: "<integer>"  */
#line 1096 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4487 "src/parser.c"
    break;

  case 330: /* prim_exp: "<float>"  */
#line 1097 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4493 "src/parser.c"
    break;

  case 331: /* prim_exp: interp  */
#line 1098 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4499 "src/parser.c"
    break;

  case 332: /* prim_exp: "<litteral string>"  */
#line 1099 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4505 "src/parser.c"
    break;

  case 333: /* prim_exp: "<litteral char>"  */
#line 1100 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4511 "src/parser.c"
    break;

  case 334: /* prim_exp: array  */
#line 1101 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4517 "src/parser.c"
    break;

  case 335: /* prim_exp: "{" dict_list "}"  */
#line 1102 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4523 "src/parser.c"
    break;

  case 336: /* prim_exp: range  */
#line 1103 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4529 "src/parser.c"
    break;

  case 337: /* prim_exp: "<<<" exp ">>>"  */
#line 1104 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4535 "src/parser.c"
    break;

  case 338: /* prim_exp: "(" exp ")"  */
#line 1105 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4541 "src/parser.c"
    break;

  case 339: /* prim_exp: "`" "<identifier>" "`"  */
#line 1106 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->d.prim.prim_type = ae_prim_locale; }
#line 4547 "src/parser.c"
    break;

  case 340: /* prim_exp: lambda_arg captures code_stmt  */
#line 1107 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), &(yyvsp[0].stmt), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4553 "src/parser.c"
    break;

  case 341: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1108 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4559 "src/parser.c"
    break;

  case 342: /* prim_exp: "(" op_op ")"  */
#line 1109 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4565 "src/parser.c"
    break;

  case 343: /* prim_exp: "perform" "<identifier>"  */
#line 1110 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4571 "src/parser.c"
    break;

  case 344: /* prim_exp: "(" ")"  */
#line 1111 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4577 "src/parser.c"
    break;


#line 4581 "src/parser.c"

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

#line 1113 "src/gwion.y"

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
