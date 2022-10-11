/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

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
void lex_spread(void *data);

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
  YYSYMBOL_PRIMITIVE = 45,                 /* "primitive"  */
  YYSYMBOL_TYPEDEF = 46,                   /* "typedef"  */
  YYSYMBOL_DISTINCT = 47,                  /* "distinct"  */
  YYSYMBOL_FUNPTR = 48,                    /* "funptr"  */
  YYSYMBOL_NOELSE = 49,                    /* NOELSE  */
  YYSYMBOL_UNION = 50,                     /* "union"  */
  YYSYMBOL_CONSTT = 51,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 52,                   /* "..."  */
  YYSYMBOL_DEFER = 53,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 54,                 /* "\\"  */
  YYSYMBOL_OPID_A = 55,                    /* OPID_A  */
  YYSYMBOL_LOCALE = 56,                    /* LOCALE  */
  YYSYMBOL_LOCALE_INI = 57,                /* LOCALE_INI  */
  YYSYMBOL_LOCALE_END = 58,                /* LOCALE_END  */
  YYSYMBOL_LATE = 59,                      /* "late"  */
  YYSYMBOL_NUM = 60,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 61,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 62,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 63,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 64,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 65,                /* INTERP_EXP  */
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
  YYSYMBOL_SPREAD = 77,                    /* "}..."  */
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
  YYSYMBOL_LOCALE_EXP = 118,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 119,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 120,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 121,                   /* UTIMES  */
  YYSYMBOL_122_ = 122,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 123,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 124,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 125,                 /* $accept  */
  YYSYMBOL_prg = 126,                      /* prg  */
  YYSYMBOL_ast = 127,                      /* ast  */
  YYSYMBOL_section = 128,                  /* section  */
  YYSYMBOL_class_flag = 129,               /* class_flag  */
  YYSYMBOL_class_def = 130,                /* class_def  */
  YYSYMBOL_trait_stmt = 131,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 132,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 133,            /* trait_section  */
  YYSYMBOL_trait_ast = 134,                /* trait_ast  */
  YYSYMBOL_trait_body = 135,               /* trait_body  */
  YYSYMBOL_trait_def = 136,                /* trait_def  */
  YYSYMBOL_prim_def = 137,                 /* prim_def  */
  YYSYMBOL_class_ext = 138,                /* class_ext  */
  YYSYMBOL_traits = 139,                   /* traits  */
  YYSYMBOL_extend_def = 140,               /* extend_def  */
  YYSYMBOL_class_body = 141,               /* class_body  */
  YYSYMBOL_id_list = 142,                  /* id_list  */
  YYSYMBOL_specialized_list = 143,         /* specialized_list  */
  YYSYMBOL_stmt_list = 144,                /* stmt_list  */
  YYSYMBOL_fptr_base = 145,                /* fptr_base  */
  YYSYMBOL__func_effects = 146,            /* _func_effects  */
  YYSYMBOL_func_effects = 147,             /* func_effects  */
  YYSYMBOL_func_base = 148,                /* func_base  */
  YYSYMBOL_fptr_def = 149,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 150,             /* typedef_when  */
  YYSYMBOL_type_def_type = 151,            /* type_def_type  */
  YYSYMBOL_type_def = 152,                 /* type_def  */
  YYSYMBOL_type_decl_array = 153,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 154,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 155,          /* type_decl_empty  */
  YYSYMBOL_arg = 156,                      /* arg  */
  YYSYMBOL_arg_list = 157,                 /* arg_list  */
  YYSYMBOL_locale_arg = 158,               /* locale_arg  */
  YYSYMBOL_locale_list = 159,              /* locale_list  */
  YYSYMBOL_fptr_arg = 160,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 161,                /* fptr_list  */
  YYSYMBOL_code_stmt = 162,                /* code_stmt  */
  YYSYMBOL_code_list = 163,                /* code_list  */
  YYSYMBOL_stmt_pp = 164,                  /* stmt_pp  */
  YYSYMBOL_stmt = 165,                     /* stmt  */
  YYSYMBOL_spread_stmt = 166,              /* spread_stmt  */
  YYSYMBOL_167_1 = 167,                    /* $@1  */
  YYSYMBOL_retry_stmt = 168,               /* retry_stmt  */
  YYSYMBOL_handler = 169,                  /* handler  */
  YYSYMBOL_170_2 = 170,                    /* $@2  */
  YYSYMBOL_handler_list = 171,             /* handler_list  */
  YYSYMBOL_try_stmt = 172,                 /* try_stmt  */
  YYSYMBOL_opt_id = 173,                   /* opt_id  */
  YYSYMBOL_enum_def = 174,                 /* enum_def  */
  YYSYMBOL_when_exp = 175,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 176,          /* match_case_stmt  */
  YYSYMBOL_match_list = 177,               /* match_list  */
  YYSYMBOL_match_stmt = 178,               /* match_stmt  */
  YYSYMBOL_flow = 179,                     /* flow  */
  YYSYMBOL_loop_stmt = 180,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 181,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 182,           /* selection_stmt  */
  YYSYMBOL_breaks = 183,                   /* breaks  */
  YYSYMBOL_jump_stmt = 184,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 185,                 /* exp_stmt  */
  YYSYMBOL_exp = 186,                      /* exp  */
  YYSYMBOL_binary_exp = 187,               /* binary_exp  */
  YYSYMBOL_call_template = 188,            /* call_template  */
  YYSYMBOL_op = 189,                       /* op  */
  YYSYMBOL_array_exp = 190,                /* array_exp  */
  YYSYMBOL_array_empty = 191,              /* array_empty  */
  YYSYMBOL_dict_list = 192,                /* dict_list  */
  YYSYMBOL_range = 193,                    /* range  */
  YYSYMBOL_array = 194,                    /* array  */
  YYSYMBOL_decl_exp = 195,                 /* decl_exp  */
  YYSYMBOL_func_args = 196,                /* func_args  */
  YYSYMBOL_fptr_args = 197,                /* fptr_args  */
  YYSYMBOL_decl_template = 198,            /* decl_template  */
  YYSYMBOL_global = 199,                   /* global  */
  YYSYMBOL_opt_global = 200,               /* opt_global  */
  YYSYMBOL_storage_flag = 201,             /* storage_flag  */
  YYSYMBOL_access_flag = 202,              /* access_flag  */
  YYSYMBOL_flag = 203,                     /* flag  */
  YYSYMBOL_final = 204,                    /* final  */
  YYSYMBOL_modifier = 205,                 /* modifier  */
  YYSYMBOL_func_def_base = 206,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 207,            /* abstract_fdef  */
  YYSYMBOL_op_op = 208,                    /* op_op  */
  YYSYMBOL_op_base = 209,                  /* op_base  */
  YYSYMBOL_operator = 210,                 /* operator  */
  YYSYMBOL_op_def = 211,                   /* op_def  */
  YYSYMBOL_func_def = 212,                 /* func_def  */
  YYSYMBOL_type_decl_base = 213,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 214,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 215,         /* type_decl_noflag  */
  YYSYMBOL_option = 216,                   /* option  */
  YYSYMBOL_type_decl_opt = 217,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 218,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 219,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 220,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 221,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 222,               /* union_decl  */
  YYSYMBOL_union_list = 223,               /* union_list  */
  YYSYMBOL_union_def = 224,                /* union_def  */
  YYSYMBOL_var_decl = 225,                 /* var_decl  */
  YYSYMBOL_arg_decl = 226,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 227,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 228,                    /* eq_op  */
  YYSYMBOL_rel_op = 229,                   /* rel_op  */
  YYSYMBOL_shift_op = 230,                 /* shift_op  */
  YYSYMBOL_add_op = 231,                   /* add_op  */
  YYSYMBOL_mul_op = 232,                   /* mul_op  */
  YYSYMBOL_opt_exp = 233,                  /* opt_exp  */
  YYSYMBOL_con_exp = 234,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 235,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 236,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 237,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 238,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 239,                  /* and_exp  */
  YYSYMBOL_eq_exp = 240,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 241,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 242,                /* shift_exp  */
  YYSYMBOL_add_exp = 243,                  /* add_exp  */
  YYSYMBOL_mul_exp = 244,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 245,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 246,                 /* cast_exp  */
  YYSYMBOL_unary_op = 247,                 /* unary_op  */
  YYSYMBOL_unary_exp = 248,                /* unary_exp  */
  YYSYMBOL_lambda_list = 249,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 250,               /* lambda_arg  */
  YYSYMBOL_type_list = 251,                /* type_list  */
  YYSYMBOL_call_paren = 252,               /* call_paren  */
  YYSYMBOL_post_op = 253,                  /* post_op  */
  YYSYMBOL_dot_exp = 254,                  /* dot_exp  */
  YYSYMBOL_post_exp = 255,                 /* post_exp  */
  YYSYMBOL_interp_exp = 256,               /* interp_exp  */
  YYSYMBOL_interp = 257,                   /* interp  */
  YYSYMBOL_capture = 258,                  /* capture  */
  YYSYMBOL__captures = 259,                /* _captures  */
  YYSYMBOL_captures = 260,                 /* captures  */
  YYSYMBOL_prim_exp = 261                  /* prim_exp  */
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
#define YYFINAL  228
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2695

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  125
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  344
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   379


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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   180,   180,   181,   184,   188,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   206,   208,   215,   224,
     228,   229,   233,   239,   240,   244,   248,   253,   253,   255,
     261,   265,   265,   266,   266,   268,   273,   273,   275,   280,
     286,   294,   300,   304,   309,   312,   312,   313,   313,   315,
     318,   324,   324,   325,   325,   326,   335,   335,   337,   341,
     346,   350,   355,   360,   369,   380,   388,   389,   399,   401,
     405,   411,   413,   417,   418,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   434,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   451,
     451,   461,   466,   466,   467,   472,   488,   493,   493,   496,
     501,   501,   504,   516,   520,   525,   536,   547,   548,   552,
     561,   571,   581,   592,   605,   623,   632,   646,   653,   662,
     673,   673,   675,   680,   684,   689,   695,   700,   706,   707,
     718,   719,   720,   721,   724,   724,   726,   726,   726,   726,
     726,   729,   730,   733,   737,   738,   739,   743,   744,   747,
     748,   749,   753,   753,   754,   755,   756,   762,   762,   763,
     763,   765,   766,   772,   777,   779,   780,   780,   782,   782,
     784,   785,   788,   789,   790,   791,   794,   794,   796,   796,
     799,   804,   811,   817,   825,   834,   834,   834,   834,   834,
     836,   846,   855,   865,   871,   871,   873,   875,   877,   880,
     880,   880,   881,   887,   894,   903,   904,   918,   919,   923,
     924,   927,   927,   927,   928,   929,   929,   932,   933,   935,
     935,   937,   937,   940,   944,   946,   950,   956,   965,   967,
     968,   968,   970,   970,   971,   971,   971,   971,   972,   972,
     973,   973,   974,   974,   974,   976,   976,   977,   978,   980,
     983,   983,   984,   984,   985,   985,   986,   986,   987,   987,
     988,   988,   989,   989,   990,   990,   991,   991,   992,   992,
     993,   993,   995,   995,   998,   998,   998,   999,   999,  1002,
    1003,  1004,  1005,  1006,  1009,  1010,  1011,  1012,  1013,  1014,
    1017,  1022,  1027,  1027,  1030,  1034,  1040,  1040,  1042,  1042,
    1044,  1053,  1054,  1056,  1058,  1061,  1063,  1067,  1068,  1069,
    1071,  1072,  1083,  1083,  1085,  1086,  1087,  1087,  1089,  1090,
    1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,
    1106,  1107,  1108,  1109,  1110
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
  "final", "extends", ".", "operator", "primitive", "typedef", "distinct",
  "funptr", "NOELSE", "union", "const", "...", "defer", "\\", "OPID_A",
  "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "<integer>", "<float>",
  "<litteral string>", "<litteral char>", "${", "INTERP_EXP", "<comment>",
  "#include", "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else",
  "#if", "\n", "import", "}...", "<interp string lit>",
  "<interp string end>", "@<operator id>", "<identifier>", "+", "++", "-",
  "--", "*", "/", "%", "$", "?", "OPTIONS", ":", "::", "?:", "new",
  "spork", "fork", "<<<", ">>>", "&&", "==", ">=", ">", "<=", "<", "!=",
  "<<", ">>", "&", "|", "^", "||", ":[", "~", "!", "@",
  "<dynamic_operator>", "`foo`", "RANGE_EMPTY", "UMINUS", "UTIMES", "=",
  "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "prim_def",
  "class_ext", "traits", "extend_def", "class_body", "id_list",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "locale_arg", "locale_list", "fptr_arg", "fptr_list",
  "code_stmt", "code_list", "stmt_pp", "stmt", "spread_stmt", "$@1",
  "retry_stmt", "handler", "$@2", "handler_list", "try_stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "match_stmt",
  "flow", "loop_stmt", "defer_stmt", "selection_stmt", "breaks",
  "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template", "op",
  "array_exp", "array_empty", "dict_list", "range", "array", "decl_exp",
  "func_args", "fptr_args", "decl_template", "global", "opt_global",
  "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "opt_var", "type_decl_flag2", "union_decl",
  "union_list", "union_def", "var_decl", "arg_decl", "fptr_arg_decl",
  "eq_op", "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "capture", "_captures", "captures", "prim_exp", YY_NULLPTR
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
     375,   376,   377,   378,   379
};
#endif

#define YYPACT_NINF (-464)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     585,  -464,  1663,  1777,   699,   150,  -464,    65,  -464,  1145,
    -464,    68,    79,   118,  2413,   150,  1529,  -464,  -464,  1145,
     123,   208,   150,   150,   176,   297,   176,   150,  -464,  -464,
     150,   150,  -464,   139,  1145,   167,    24,   175,  -464,  -464,
    -464,  -464,  -464,  1847,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
     297,   297,  2514,  2514,  2413,  -464,  -464,  -464,   260,   585,
    -464,  -464,  -464,  -464,  -464,  1145,  -464,   150,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,   258,  -464,  -464,
    -464,    48,  -464,  -464,   262,    40,  -464,   261,  -464,  -464,
    -464,  -464,  -464,   257,  -464,  -464,  -464,   150,  -464,  -464,
      12,   185,   166,   163,   177,   -41,   210,   124,    11,   154,
     194,   200,  2577,  -464,   198,  -464,  -464,    96,   232,  -464,
    -464,  2413,  -464,   292,   293,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,   295,  -464,
     298,  -464,  -464,  -464,  -464,  -464,  2413,    29,  -464,   813,
      26,   299,  -464,  -464,  -464,  -464,   302,  -464,  -464,    97,
     197,  2413,    92,  2475,  1569,   229,   308,   237,  -464,   316,
     290,  -464,  -464,  -464,   243,   205,   248,  -464,   250,   150,
    -464,    30,  -464,   240,   221,   301,   164,  -464,   338,    23,
    -464,   266,   344,   297,   269,   259,  -464,  -464,   272,   349,
     280,  1909,  1847,  -464,   300,  -464,  -464,  -464,   357,   927,
     -28,  -464,  -464,   354,  -464,  -464,   354,   265,  -464,  -464,
    -464,   297,  2413,  -464,   364,  -464,  2413,  2413,  2413,  2413,
    1971,  -464,   274,   302,   452,    69,   297,   297,  2413,  2577,
    2577,  2577,  2577,  2577,  2577,  -464,  -464,  2577,  2577,  2577,
    -464,  2577,  -464,  2577,  2577,   297,  -464,   361,  2033,   303,
     297,   369,  -464,  -464,  -464,  1847,   -17,  -464,  -464,   371,
     373,  2103,  -464,  2413,  -464,   317,   113,  -464,   297,  -464,
     297,   376,  2413,   389,    50,  1569,    28,   374,   386,  -464,
    -464,  -464,   290,   284,   358,  -464,  -464,   284,   310,   297,
     221,   323,  -464,    23,  -464,  -464,  -464,  2165,  -464,  -464,
     345,   322,   378,   328,   284,   323,  -464,   297,   406,  -464,
     355,  -464,  1847,  2413,  -464,  1041,  -464,   331,  -464,   -13,
     927,  -464,  -464,  -464,   333,   409,  -464,  -464,  -464,  -464,
    -464,  -464,   408,   302,   415,   149,   302,   284,   284,  -464,
    -464,   284,    31,  -464,   327,  -464,   185,   166,   163,   177,
     -41,   210,   124,    11,   154,   194,   200,  -464,   927,  -464,
    -464,  -464,   219,  2227,  -464,  -464,  -464,  2289,  -464,  -464,
     412,    45,  -464,   340,  -464,   143,  -464,  -464,   342,   343,
    1145,   422,  2413,  1145,  2351,   346,   416,  2413,  -464,    49,
     323,   123,  -464,    10,   387,  -464,   310,   323,   161,   284,
    -464,  -464,   277,  -464,   427,  -464,   340,  -464,   195,   351,
     352,   431,   284,   426,   174,  -464,   432,   433,   297,  -464,
    -464,   435,  -464,  -464,  -464,  -464,   284,  1145,   434,  -464,
    -464,  -464,  -464,   437,   440,   441,  2413,  -464,  -464,  2577,
      37,   297,  -464,  -464,   442,  -464,  -464,  2413,  -464,   359,
     297,  -464,   284,   284,   438,  -464,    77,  -464,  1145,   447,
     362,  -464,  2413,   424,   436,  -464,   165,  1145,   448,   310,
     225,   297,   310,   446,   453,  -464,  1337,  -464,   344,  -464,
     377,  -464,  -464,  -464,   297,  -464,  -464,  -464,  -464,  -464,
     341,  -464,   297,   354,   455,  -464,   439,  -464,  -464,   297,
     297,   297,   458,  -464,  -464,  -464,  -464,  -464,  2413,  -464,
     344,  -464,  1145,  1145,  -464,  1145,   416,    80,  2413,   375,
    1145,  -464,  -464,  -464,  -464,    17,  -464,  -464,   456,   585,
    -464,  1433,  -464,  1241,  -464,  -464,  -464,   378,  -464,  -464,
     465,   390,  -464,   202,   395,  -464,  -464,   354,  2413,   470,
     471,   468,   473,   396,    89,   477,  -464,  -464,  -464,  2413,
    1145,  -464,  1145,  -464,   474,   310,   585,   585,   466,  -464,
    -464,  -464,   478,  -464,   482,  -464,  -464,  -464,  -464,    89,
    -464,   297,  -464,  -464,  -464,  -464,    86,  -464,  1145,  -464,
    -464,   480,  -464,  -464,  -464,   481,  1145,  -464,  -464,  -464
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   137,     0,     0,     0,   185,   231,     0,   117,     0,
     118,     0,     0,     0,     0,   185,     0,   130,   131,     0,
     108,     0,   185,   185,   177,     0,   204,   185,    53,    54,
     185,   185,   228,     0,     0,   303,     0,     0,   227,   329,
     330,   332,   333,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   328,   308,   284,   309,   285,
       0,     0,     0,     0,     0,   288,   287,   339,     0,     2,
       4,     8,     9,    15,    10,     6,    13,   185,    14,    91,
      94,    42,    98,    97,    96,    11,    92,     0,    89,    95,
      90,     0,    93,    88,     0,   138,   162,   163,   336,   334,
     140,   209,   210,     0,   211,     7,   232,   185,    12,   164,
     257,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,     0,   282,   327,   286,   316,   289,   331,   311,
     344,     0,   250,   284,   285,   253,   254,   150,   146,   247,
     245,   246,   244,   147,   248,   249,   148,   149,     0,   195,
       0,   197,   196,   199,   198,   154,     0,     0,    71,     0,
     138,     0,   178,   175,   180,   181,     0,   179,   183,   182,
     187,     0,     0,     0,     0,     0,     0,     0,   133,     0,
       0,   107,   343,   101,     0,   187,     0,   176,     0,   185,
     215,     0,    59,     0,   145,   219,   223,   225,    57,     0,
     205,     0,     0,     0,     0,     0,   127,   300,   302,     0,
       0,     0,     0,   317,     0,   320,   299,    58,   294,     0,
       0,   295,   291,     0,   296,   292,     0,     0,     1,     5,
      43,     0,     0,   135,     0,   136,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,     0,     0,   256,     0,
       0,     0,     0,     0,     0,   242,   243,     0,     0,     0,
     251,     0,   252,     0,     0,     0,   290,     0,     0,     0,
       0,     0,   312,   313,   315,     0,     0,   338,   342,     0,
     151,     0,    72,     0,   335,     0,     0,   184,     0,   186,
       0,     0,     0,   328,     0,     0,     0,     0,     0,   132,
     102,   104,   106,   174,   187,   189,    16,   174,    33,     0,
     145,     0,   217,     0,   221,   222,   224,     0,    56,   226,
       0,     0,    47,     0,   174,     0,   301,    67,     0,    87,
       0,   318,     0,   256,    73,     0,   322,     0,   324,     0,
       0,   297,   298,   337,     0,     0,   134,   139,   143,   141,
     142,   155,     0,     0,     0,     0,     0,   174,   174,   207,
     206,   174,     0,   255,     0,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   283,     0,   340,
     310,   304,     0,     0,   314,   321,   161,     0,   152,   160,
       0,   157,   168,     0,    62,     0,   191,   190,     0,     0,
       0,     0,     0,     0,     0,     0,   230,     0,   113,     0,
       0,   108,   105,     0,    32,   188,    33,     0,     0,   174,
     218,    38,     0,   220,     0,   170,   241,    69,     0,     0,
      48,     0,   174,     0,     0,    64,    66,     0,    67,    86,
     319,     0,    74,   323,   326,   325,   174,     0,     0,   208,
     213,   212,   203,     0,     0,     0,   256,   238,   165,     0,
     138,     0,   144,   307,     0,   153,   159,     0,   239,    61,
       0,   167,   174,   174,   128,   120,     0,   125,     0,     0,
       0,   229,     0,   111,   116,   114,     0,     0,     0,    33,
       0,     0,    33,     0,    34,    28,     0,    29,     0,    35,
       0,    30,   240,    68,     0,   169,    45,    46,    50,    44,
       0,    99,     0,     0,     0,   293,    51,   119,   214,     0,
       0,     0,     0,   258,   341,   305,   306,   158,     0,    63,
       0,    49,     0,     0,   121,     0,   230,     0,     0,     0,
       0,   109,   103,   173,    40,     0,   171,    31,     0,    37,
      21,    23,    25,     0,    20,    19,    24,    47,    39,    70,
     215,     0,   235,     0,     0,    65,   193,     0,     0,     0,
       0,     0,     0,     0,    60,     0,   129,   126,   122,     0,
       0,   110,     0,   115,     0,    33,    37,    36,     0,    22,
      27,    26,     0,   233,     0,   237,   236,   100,   192,    52,
      55,     0,   201,   202,   166,   194,     0,   123,   112,   172,
      41,     0,    18,   216,   234,     0,     0,    17,   200,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -464,  -464,   488,   -67,   207,  -464,   -58,  -464,   -59,  -464,
    -464,  -464,  -464,  -464,  -395,  -464,   -91,  -291,  -464,    -3,
    -464,  -464,   -61,  -464,  -464,  -464,  -464,  -464,   -47,     6,
     -18,  -262,  -464,  -464,    63,    -2,  -464,  -464,   -50,  -463,
      -9,  -464,  -464,  -464,   201,  -464,  -464,  -464,    93,  -464,
    -464,    99,  -464,  -464,   334,  -464,  -464,  -464,  -464,  -464,
    -166,     3,    -1,  -165,  -464,   -82,  -464,    38,   382,   312,
      55,  -193,  -441,  -281,   101,  -464,   347,  -464,    33,  -158,
    -464,  -464,  -464,   267,   270,  -464,  -464,  -438,   324,  -464,
     206,  -464,   314,  -464,   -21,   -22,  -464,   -45,  -464,  -464,
     -52,   102,  -464,  -464,  -105,   -99,   -98,   -97,  -321,  -240,
    -464,   275,   271,   278,   276,   279,   287,   288,   273,   286,
     285,   306,   -87,    -8,  -464,  -464,  -464,  -464,   -96,  -464,
    -464,  -188,  -464,   211,  -464,   -11,  -464
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,   587,    70,   184,    71,   550,   551,   552,   553,
     497,    72,    73,   492,   418,    74,   588,   422,   490,    75,
     202,   430,   431,   166,    76,   569,    77,    78,   192,   218,
     393,   435,   395,   436,   437,   427,   428,    79,   221,    80,
      81,    82,   564,    83,   301,   411,   302,    84,   182,    85,
     539,   408,   409,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   271,   149,    96,    97,   161,    98,    99,
     100,   286,   322,   414,   167,   188,   168,   169,   185,   290,
     306,   101,   102,   150,   245,   103,   104,   105,   194,   195,
     196,   316,   197,   198,   106,   482,   107,   562,   563,   108,
     458,   469,   503,   257,   151,   152,   153,   154,   364,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   208,   124,   382,   384,   125,   126,
     127,   215,   128,   338,   339,   223,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     172,   159,   229,   160,   199,   148,   157,   193,   295,   365,
     180,   258,   441,   224,   217,   241,   246,   176,   259,   179,
     261,   493,   263,   394,   331,   206,   416,   305,   189,   312,
     236,   274,   405,   554,   434,   189,   456,   280,   170,   199,
     199,   236,   216,   433,   236,   272,   214,   524,   177,   467,
     355,   233,   226,   336,   222,   225,   403,   557,   556,   484,
     255,   163,   488,   203,   204,   256,   230,   227,   336,   584,
     171,   407,   359,   173,   237,   283,   453,   454,   340,   444,
     455,   337,   199,   533,   174,   244,   580,   385,   554,   575,
     554,   489,   616,   132,   544,   260,   337,   548,   585,   238,
     239,  -145,   248,   268,   190,   209,   249,     8,   234,    10,
     231,   190,   457,   267,   266,   556,   396,   237,   283,   486,
     406,   281,   340,   175,   250,   187,   494,   200,   237,   404,
     276,   237,   191,   162,   163,   522,   237,   210,   498,   269,
     247,   237,   238,   239,   440,   420,   415,   470,   358,   471,
     230,   509,   450,   238,   239,   246,   238,   239,   340,   279,
     448,   238,   239,   452,   495,   516,   238,   239,   237,   500,
     496,   237,   294,   341,   291,   541,   342,   237,   500,    56,
     237,    58,   199,   511,   344,   323,   162,   163,   164,   165,
     610,   530,   531,   238,   239,   360,   238,   239,   388,   504,
     362,   505,   238,   239,   181,   238,   239,   189,   529,   270,
     199,   183,   595,   163,   330,   214,   335,   379,   160,   523,
     205,   199,   309,   461,   244,   199,   199,   462,   361,   545,
     186,   144,   145,   546,   201,   345,   397,   288,   289,   347,
     262,   135,   136,   352,   199,   304,   289,   377,   207,   199,
     565,   363,   381,    32,   314,   315,   211,   570,   571,   572,
     228,    38,   189,   232,   199,   235,   258,   199,   240,   199,
     398,   157,   399,   259,   253,   261,   252,   263,   214,   189,
     499,   500,   391,   560,   390,   251,   254,   264,   199,   265,
     220,   419,   348,   349,   350,   401,   275,   242,  -251,  -252,
     199,   277,   189,   426,   278,   451,   199,   285,    32,   284,
     296,   191,   139,   140,   141,   142,    38,   297,   298,   299,
     352,   300,   189,   392,   303,    32,   230,   189,   425,   307,
     555,   308,   311,    38,   270,   214,   363,   335,   190,   615,
      56,    57,    58,    59,   313,   317,   189,   320,    32,   321,
     324,   325,   243,   326,   327,   190,    38,    56,    57,    58,
      59,   328,   333,   340,   343,   332,   191,   346,    32,   353,
     378,    65,    66,    32,   383,   335,    38,   460,   190,   386,
     387,    38,   400,   191,   380,   555,   464,   555,    65,    66,
     352,   474,    32,   402,   477,   410,   407,   413,   190,   289,
      38,   476,   417,   190,   421,   424,   191,   479,   429,   432,
     483,   438,   443,   439,   446,   447,   280,   199,   449,   459,
     466,   468,   560,   472,   473,   475,   191,   480,   481,   491,
     501,   191,   506,   507,   508,   510,   512,   518,   517,   513,
     199,   515,   519,   525,   217,   520,   521,   538,   526,   199,
     191,   528,   532,   535,   536,   549,   543,   500,   558,   363,
     540,   567,   568,   566,   573,   586,   276,   582,   593,   534,
     199,   594,   597,   600,   602,   601,   612,   457,   542,   603,
     605,   537,   609,   199,   613,   614,   426,   618,    69,   199,
     617,   199,   561,   589,   591,   611,   592,   547,   199,   199,
     199,   514,   559,   412,   487,   527,   292,   356,   485,   273,
     318,   357,   354,   319,   579,   310,   287,   598,   596,   423,
     229,   604,   367,   576,   577,   366,   578,   574,   502,   369,
     368,   583,   373,   370,   132,    56,   260,    58,   262,   135,
     136,   581,   199,   137,   371,   561,   372,   374,   375,     0,
     445,     0,     0,   138,   139,   140,   141,   142,   143,   144,
     145,     0,     0,     0,     0,     0,     0,   599,   146,   147,
     376,   607,     0,     0,     0,     0,     0,     0,   606,   608,
     199,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     4,     0,     5,     6,     7,   230,
       8,     9,    10,    11,    12,    13,    14,   619,     0,     0,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,    37,     0,    38,    39,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     1,    67,     2,     0,     3,     0,     4,   158,
       0,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     1,    67,     2,     0,
       3,     0,     4,   282,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       1,    67,     2,     0,     3,     0,     4,   334,     0,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     1,    67,     2,     0,     3,     0,
       4,   442,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     4,    65,    66,     6,     7,    67,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     1,     0,     2,     0,     3,     0,
     131,   590,     5,     6,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    35,     0,    36,    37,     0,
      38,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       1,     0,     2,     0,     3,     0,   131,     0,     5,     6,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    35,     0,    36,    37,     0,    38,    39,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     1,     0,     2,     0,
       3,     0,   131,     0,     0,     6,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    35,     0,     0,
      37,     0,    38,    39,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,   178,     0,     2,     0,     3,     0,   131,     0,
       0,     6,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,   131,     0,
      32,     6,     0,    35,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
      32,     0,     0,    35,    61,    62,    63,    64,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     2,   130,
       3,     0,   131,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    35,     0,     0,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,   132,    56,   133,    58,   134,
     135,   136,    60,     0,   137,     0,     0,     0,    61,    62,
      63,    64,     0,     0,   138,   139,   140,   141,   142,   143,
     144,   145,     0,     0,     0,     0,     0,    65,    66,   146,
     147,    67,     2,     0,     3,   155,   131,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    35,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,   131,     0,    55,     6,
      56,    57,    58,    59,     0,     0,    60,     0,     0,   156,
       0,     0,    61,    62,    63,    64,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,    32,     0,
       0,    35,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     2,     0,     3,     0,   131,     0,
       0,     6,     0,     0,     0,   212,   213,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,    20,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    65,    66,    35,     0,    67,     0,   329,    38,    39,
      40,    41,    42,    43,     0,     0,     2,     0,     3,   351,
     131,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,    20,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    65,    66,    35,     0,    67,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,     2,     0,
       3,     0,   131,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,    20,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    65,    66,    35,     0,    67,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   389,   131,     0,    55,     6,    56,    57,    58,    59,
       0,     0,    60,     0,     0,   156,     0,     0,    61,    62,
      63,    64,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,    32,     0,     0,    35,     0,     0,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       2,     0,     3,   155,   131,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,    20,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    65,    66,    35,
       0,    67,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     2,   463,     3,     0,   131,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,    20,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    65,
      66,    35,     0,    67,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,     2,     0,     3,   465,   131,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,    20,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    65,    66,    35,     0,    67,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,     2,   478,     3,     0,
     131,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,    20,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    65,    66,    35,     0,    67,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,     2,     0,
       3,     0,   131,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,    20,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    65,    66,    35,     0,    67,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       2,     0,     3,     0,   131,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,    20,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,   219,     0,     0,    32,    65,    66,    35,
       0,    67,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   293,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,    35,     0,
      61,    62,    63,    64,    39,    40,    41,    42,    43,     0,
       0,     0,     2,     0,     3,     0,   131,     0,     0,    65,
      66,     0,     0,    67,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,   220,    20,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    35,    67,     0,     0,     0,     0,    39,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67
};

static const yytype_int16 yycheck[] =
{
       9,     4,    69,     4,    25,     2,     3,    25,   174,   249,
      19,   116,   333,    63,    61,    97,   103,    14,   117,    16,
     118,   416,   119,   285,   212,    34,   307,   185,     5,   194,
       4,   127,     4,   496,   325,     5,     5,     8,     5,    60,
      61,     4,    60,   324,     4,   127,    43,    10,    15,     4,
     243,     3,    63,    81,    62,    63,     6,   498,   496,    10,
     101,    37,    52,    30,    31,   106,    75,    64,    81,    52,
       5,    22,     3,     5,    91,    92,   357,   358,     9,    92,
     361,   109,   103,     6,     5,   103,     6,   275,   551,   530,
     553,    81,     6,    82,   489,    84,   109,   492,    81,   116,
     117,     5,    90,     7,    81,    81,    94,    15,    60,    17,
      77,    81,    81,   124,   122,   553,     3,    91,    92,   410,
      92,    92,     9,     5,   112,    24,   417,    26,    91,   295,
     131,    91,   109,    36,    37,   456,    91,    36,   419,    43,
     107,    91,   116,   117,   332,   310,   304,     4,   244,     6,
     159,   432,     3,   116,   117,   242,   116,   117,     9,   156,
     353,   116,   117,   356,     3,   446,   116,   117,    91,     4,
       9,    91,   173,   223,   171,    10,   226,    91,     4,    83,
      91,    85,   203,     9,   231,   203,    36,    37,    38,    39,
     585,   472,   473,   116,   117,   245,   116,   117,   280,     4,
     247,     6,   116,   117,    81,   116,   117,     5,   470,   113,
     231,     3,    10,    37,   211,   212,   219,   267,   219,   459,
      81,   242,   189,     4,   242,   246,   247,     8,   246,     4,
      23,   107,   108,     8,    27,   232,   286,    40,    41,   236,
      86,    87,    88,   240,   265,    40,    41,   265,    81,   270,
     512,   248,   270,    51,    90,    91,    81,   519,   520,   521,
       0,    59,     5,     5,   285,     3,   371,   288,     7,   290,
     288,   268,   290,   372,   111,   373,   110,   374,   275,     5,
       3,     4,   283,    81,   281,   100,   109,    93,   309,    89,
      92,   309,   237,   238,   239,   292,    64,    40,     6,     6,
     321,     6,     5,   321,     6,   355,   327,     5,    51,    10,
      81,   109,   102,   103,   104,   105,    59,     9,    81,     3,
     317,    31,     5,     6,    81,    51,   335,     5,     6,    81,
     496,    81,    92,    59,   113,   332,   333,   340,    81,   601,
      83,    84,    85,    86,    43,     7,     5,    81,    51,     5,
      81,    92,    95,    81,     5,    81,    59,    83,    84,    85,
      86,    81,     5,     9,    99,    65,   109,     3,    51,    95,
       9,   114,   115,    51,     5,   378,    59,   378,    81,     8,
       7,    59,     6,   109,    81,   551,   383,   553,   114,   115,
     387,   400,    51,     4,   403,     9,    22,   113,    81,    41,
      59,   402,    92,    81,    81,    60,   109,   404,    30,    81,
     407,     5,    81,    58,    81,     6,     8,   438,     3,    92,
       8,    81,    81,    81,    81,     3,   109,    81,    12,    42,
       3,   109,    81,    81,     3,     9,     4,     3,   447,     6,
     461,     6,     5,   461,   491,     5,     5,    23,     6,   470,
     109,    92,    14,     6,    92,     9,     8,     4,    81,   456,
      24,     6,    23,   513,     6,     9,   467,    92,     3,   478,
     491,    81,    77,     3,     6,     4,    10,    81,   487,     6,
       3,   482,     8,   504,     6,     3,   504,     6,     0,   510,
      10,   512,   510,   551,   553,   586,   557,   491,   519,   520,
     521,   438,   504,   302,   411,   467,   172,    55,   409,   127,
     198,   244,   242,   199,   536,   191,   169,   567,   563,   313,
     587,   573,   251,   532,   533,   250,   535,   528,   426,   253,
     252,   540,   259,   254,    82,    83,    84,    85,    86,    87,
      88,   538,   563,    91,   257,   563,   258,   261,   263,    -1,
     339,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,   568,   116,   117,
     264,   580,    -1,    -1,    -1,    -1,    -1,    -1,   579,   582,
     601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,    -1,    11,    12,    13,   608,
      15,    16,    17,    18,    19,    20,    21,   616,    -1,    -1,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      -1,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,     3,   118,     5,    -1,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,     3,   118,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
       3,   118,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,     3,   118,     5,    -1,     7,    -1,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,     9,   114,   115,    12,    13,   118,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,     3,    -1,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    54,    -1,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    -1,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,     3,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,    -1,
      51,    12,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      51,    -1,    -1,    54,    95,    96,    97,    98,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,     5,     6,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,     5,    -1,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,     9,    -1,    81,    12,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    95,    96,    97,    98,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,   118,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,     5,    -1,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    30,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,   114,   115,    54,    -1,   118,    -1,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,     5,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,   114,   115,    54,    -1,   118,    -1,    -1,
      59,    60,    61,    62,    63,    64,    -1,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    30,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,   114,   115,    54,    -1,   118,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,     9,    -1,    81,    12,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      97,    98,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
       5,    -1,     7,     8,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    30,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,   114,   115,    54,
      -1,   118,    -1,    -1,    59,    60,    61,    62,    63,    64,
      -1,    -1,     5,     6,     7,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    30,    -1,    -1,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,   114,
     115,    54,    -1,   118,    -1,    -1,    59,    60,    61,    62,
      63,    64,    -1,    -1,     5,    -1,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    30,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,   114,   115,    54,    -1,   118,    -1,    -1,    59,    60,
      61,    62,    63,    64,    -1,    -1,     5,     6,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    30,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,   114,   115,    54,    -1,   118,    -1,    -1,
      59,    60,    61,    62,    63,    64,    -1,    -1,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    30,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,   114,   115,    54,    -1,   118,
      -1,    -1,    59,    60,    61,    62,    63,    64,    -1,    -1,
       5,    -1,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    30,    -1,    -1,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,     9,    -1,    -1,    51,   114,   115,    54,
      -1,   118,    -1,    -1,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    54,    -1,
      95,    96,    97,    98,    60,    61,    62,    63,    64,    -1,
      -1,    -1,     5,    -1,     7,    -1,     9,    -1,    -1,   114,
     115,    -1,    -1,   118,    -1,    81,    -1,    83,    84,    85,
      86,    -1,    -1,    89,    -1,    -1,    92,    30,    -1,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    54,   118,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    32,    33,    34,    35,    42,    44,    45,    46,    47,
      48,    50,    51,    52,    53,    54,    56,    57,    59,    60,
      61,    62,    63,    64,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    81,    83,    84,    85,    86,
      89,    95,    96,    97,    98,   114,   115,   118,   126,   127,
     128,   130,   136,   137,   140,   144,   149,   151,   152,   162,
     164,   165,   166,   168,   172,   174,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   190,   191,   193,   194,
     195,   206,   207,   210,   211,   212,   219,   221,   224,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   250,   253,   254,   255,   257,   261,
       6,     9,    82,    84,    86,    87,    88,    91,   101,   102,
     103,   104,   105,   106,   107,   108,   116,   117,   186,   189,
     208,   229,   230,   231,   232,     8,    92,   186,    10,   144,
     187,   192,    36,    37,    38,    39,   148,   199,   201,   202,
     203,     5,   165,     5,     5,     5,   186,   203,     3,   186,
     165,    81,   173,     3,   129,   203,   129,   199,   200,     5,
      81,   109,   153,   155,   213,   214,   215,   217,   218,   219,
     199,   129,   145,   203,   203,    81,   165,    81,   249,    81,
     199,    81,    78,    79,   186,   256,   155,   153,   154,     9,
      92,   163,   248,   260,   163,   248,   260,   186,     0,   128,
     165,   203,     5,     3,    60,     3,     4,    91,   116,   117,
       7,   190,    40,    95,   155,   209,   247,   203,    90,    94,
     112,   100,   110,   111,   109,   101,   106,   228,   229,   230,
      84,   231,    86,   232,    93,    89,   248,   260,     7,    43,
     113,   188,   190,   193,   253,    64,   187,     6,     6,   186,
       8,    92,    10,    92,    10,     5,   196,   201,    40,    41,
     204,   186,   179,    81,   187,   185,    81,     9,    81,     3,
      31,   169,   171,    81,    40,   204,   205,    81,    81,   203,
     213,    92,   188,    43,    90,    91,   216,     7,   194,   217,
      81,     5,   197,   155,    81,    92,    81,     5,    81,    58,
     186,   256,    65,     5,    10,   144,    81,   109,   258,   259,
       9,   163,   163,    99,   153,   186,     3,   186,   195,   195,
     195,     8,   186,    95,   209,   196,    55,   208,   253,     3,
     163,   155,   153,   186,   233,   234,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   155,     9,   163,
      81,   155,   251,     5,   252,   256,     8,     7,   190,     8,
     186,   187,     6,   155,   156,   157,     3,   163,   155,   155,
       6,   186,     4,     6,   185,     4,    92,    22,   176,   177,
       9,   170,   169,   113,   198,   204,   198,    92,   139,   155,
     188,    81,   142,   215,    60,     6,   155,   160,   161,    30,
     146,   147,    81,   198,   142,   156,   158,   159,     5,    58,
     256,   233,    10,    81,    92,   258,    81,     6,   196,     3,
       3,   163,   196,   198,   198,   198,     5,    81,   225,    92,
     187,     4,     8,     6,   186,     8,     8,     4,    81,   226,
       4,     6,    81,    81,   165,     3,   187,   165,     6,   186,
      81,    12,   220,   186,    10,   176,   142,   173,    52,    81,
     143,    42,   138,   139,   142,     3,     9,   135,   198,     3,
       4,     3,   226,   227,     4,     6,    81,    81,     3,   198,
       9,     9,     4,     6,   159,     6,   198,   165,     3,     5,
       5,     5,   233,   234,    10,   155,     6,   192,    92,   156,
     198,   198,    14,     6,   165,     6,    92,   187,    23,   175,
      24,    10,   165,     8,   139,     4,     8,   154,   139,     9,
     131,   132,   133,   134,   164,   185,   212,   197,    81,   160,
      81,   155,   222,   223,   167,   156,   163,     6,    23,   150,
     156,   156,   156,     6,   187,   197,   165,   165,   165,   220,
       6,   186,    92,   165,    52,    81,     9,   127,   141,   131,
      10,   133,   147,     3,    81,    10,   222,    77,   163,   187,
       3,     4,     6,     6,   225,     3,   187,   165,   144,     8,
     139,   141,    10,     6,     3,   156,     6,    10,     6,   165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     137,   138,   138,   139,   139,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   146,   146,   147,   147,   148,
     149,   150,   150,   151,   151,   152,   153,   153,   154,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   167,
     166,   168,   170,   169,   171,   171,   172,   173,   173,   174,
     175,   175,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   180,   180,   180,   180,   180,   180,   181,   182,   182,
     183,   183,   184,   184,   184,   184,   185,   185,   186,   186,
     187,   187,   187,   187,   188,   188,   189,   189,   189,   189,
     189,   190,   190,   190,   191,   191,   191,   192,   192,   193,
     193,   193,   194,   194,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   198,   198,   199,   200,   200,   201,   201,
     202,   202,   203,   203,   203,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   207,   208,   208,   208,   208,   208,
     209,   209,   209,   209,   210,   210,   211,   211,   211,   212,
     212,   212,   212,   212,   212,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   217,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   225,   226,
     227,   227,   228,   228,   229,   229,   229,   229,   230,   230,
     231,   231,   232,   232,   232,   233,   233,   234,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   240,   241,   241,   242,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   247,   247,   247,   247,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   255,   255,   255,   255,   255,   255,   256,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     9,     8,     1,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     5,
       5,     2,     0,     0,     2,     5,     1,     0,     1,     3,
       2,     4,     1,     2,     4,     2,     2,     0,     1,     5,
       5,     0,     2,     1,     1,     7,     2,     1,     1,     1,
       4,     2,     1,     3,     1,     3,     1,     0,     2,     1,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     2,     0,     4,     1,     2,     3,     1,     0,     6,
       2,     0,     5,     1,     2,     7,     5,     1,     1,     5,
       5,     6,     7,     8,    10,     5,     7,     2,     5,     7,
       1,     1,     3,     2,     3,     2,     2,     1,     1,     3,
       1,     3,     3,     3,     3,     0,     1,     1,     1,     1,
       1,     3,     4,     5,     2,     3,     2,     3,     5,     5,
       4,     4,     1,     1,     1,     4,     7,     3,     2,     3,
       2,     3,     5,     3,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     0,     2,     1,
       4,     4,     7,     6,     8,     1,     1,     1,     1,     1,
       8,     6,     6,     3,     1,     2,     3,     3,     4,     1,
       1,     1,     4,     4,     5,     1,     7,     2,     3,     1,
       3,     1,     1,     0,     2,     1,     2,     1,     1,     1,
       0,     1,     1,     2,     3,     1,     2,     7,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     5,     2,     2,     2,     3,     3,     2,
       1,     2,     2,     1,     1,     3,     3,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     1,     1,     2,     3,
       2,     3,     1,     2,     1,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     1,
       3,     5,     3,     2,     2
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
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
#line 180 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2578 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 181 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2584 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 184 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2593 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 188 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2602 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 194 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2608 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2614 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2620 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2626 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2632 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2638 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 200 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2644 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 201 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2650 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2656 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2662 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 206 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2668 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 209 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2679 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 216 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2691 "src/parser.c"
    break;

  case 19: /* trait_stmt: exp_stmt  */
#line 224 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2701 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt  */
#line 229 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2710 "src/parser.c"
    break;

  case 22: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 233 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2719 "src/parser.c"
    break;

  case 23: /* trait_section: trait_stmt_list  */
#line 239 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2725 "src/parser.c"
    break;

  case 24: /* trait_section: func_def  */
#line 240 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2731 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_section  */
#line 244 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2740 "src/parser.c"
    break;

  case 26: /* trait_ast: trait_ast trait_section  */
#line 248 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2749 "src/parser.c"
    break;

  case 27: /* trait_body: "{" trait_ast "}"  */
#line 253 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2755 "src/parser.c"
    break;

  case 28: /* trait_body: ";"  */
#line 253 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2761 "src/parser.c"
    break;

  case 29: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 256 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2770 "src/parser.c"
    break;

  case 30: /* prim_def: "primitive" class_flag "<identifier>" "<integer>" ";"  */
#line 262 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].lval), (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2778 "src/parser.c"
    break;

  case 31: /* class_ext: "extends" type_decl_exp  */
#line 265 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2784 "src/parser.c"
    break;

  case 32: /* class_ext: %empty  */
#line 265 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2790 "src/parser.c"
    break;

  case 33: /* traits: %empty  */
#line 266 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2796 "src/parser.c"
    break;

  case 34: /* traits: ":" id_list  */
#line 266 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2802 "src/parser.c"
    break;

  case 35: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 268 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2810 "src/parser.c"
    break;

  case 37: /* class_body: %empty  */
#line 273 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2816 "src/parser.c"
    break;

  case 38: /* id_list: "<identifier>"  */
#line 276 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2825 "src/parser.c"
    break;

  case 39: /* id_list: id_list "," "<identifier>"  */
#line 281 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2834 "src/parser.c"
    break;

  case 40: /* specialized_list: "<identifier>" traits  */
#line 286 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2847 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 294 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2857 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 300 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2866 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 304 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2875 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 309 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2882 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 312 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2888 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 312 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2894 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 313 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2900 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 313 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2906 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 315 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2913 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 318 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2923 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 324 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2929 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" binary_exp  */
#line 324 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2935 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 325 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2941 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 325 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2947 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 326 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2960 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 335 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2966 "src/parser.c"
    break;

  case 58: /* type_decl_exp: type_decl_array  */
#line 337 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2974 "src/parser.c"
    break;

  case 59: /* type_decl_empty: type_decl_array  */
#line 341 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2982 "src/parser.c"
    break;

  case 60: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 346 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2991 "src/parser.c"
    break;

  case 61: /* arg: type_decl_empty arg_decl  */
#line 350 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 3000 "src/parser.c"
    break;

  case 62: /* arg_list: arg  */
#line 355 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3010 "src/parser.c"
    break;

  case 63: /* arg_list: arg_list "," arg  */
#line 360 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3022 "src/parser.c"
    break;

  case 64: /* locale_arg: arg  */
#line 369 "src/gwion.y"
        {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 2);
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
       mp_vector_set((yyval.default_args).args, Arg, 1, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3038 "src/parser.c"
    break;

  case 65: /* locale_arg: locale_arg "," arg  */
#line 380 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3050 "src/parser.c"
    break;

  case 67: /* locale_list: %empty  */
#line 389 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3064 "src/parser.c"
    break;

  case 68: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 399 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3070 "src/parser.c"
    break;

  case 69: /* fptr_list: fptr_arg  */
#line 401 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3079 "src/parser.c"
    break;

  case 70: /* fptr_list: fptr_list "," fptr_arg  */
#line 405 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3088 "src/parser.c"
    break;

  case 71: /* code_stmt: "{" "}"  */
#line 411 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3095 "src/parser.c"
    break;

  case 72: /* code_stmt: "{" stmt_list "}"  */
#line 413 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3102 "src/parser.c"
    break;

  case 73: /* code_list: "{" "}"  */
#line 417 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3108 "src/parser.c"
    break;

  case 74: /* code_list: "{" stmt_list "}"  */
#line 418 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3114 "src/parser.c"
    break;

  case 75: /* stmt_pp: "<comment>"  */
#line 421 "src/gwion.y"
               { /*if(!arg->ppa->lint)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3120 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#include"  */
#line 422 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3126 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#define"  */
#line 423 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3132 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#pragma"  */
#line 424 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3138 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#undef"  */
#line 425 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3144 "src/parser.c"
    break;

  case 80: /* stmt_pp: "#ifdef"  */
#line 426 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3150 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#ifndef"  */
#line 427 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3156 "src/parser.c"
    break;

  case 82: /* stmt_pp: "#else"  */
#line 428 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3162 "src/parser.c"
    break;

  case 83: /* stmt_pp: "#if"  */
#line 429 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3168 "src/parser.c"
    break;

  case 84: /* stmt_pp: "\n"  */
#line 430 "src/gwion.y"
               { if(!arg->ppa->lint)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3174 "src/parser.c"
    break;

  case 85: /* stmt_pp: "import"  */
#line 431 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3180 "src/parser.c"
    break;

  case 86: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 432 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3187 "src/parser.c"
    break;

  case 87: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 434 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3194 "src/parser.c"
    break;

  case 99: /* $@1: %empty  */
#line 451 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3200 "src/parser.c"
    break;

  case 100: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 451 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3214 "src/parser.c"
    break;

  case 101: /* retry_stmt: "retry" ";"  */
#line 461 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3224 "src/parser.c"
    break;

  case 102: /* $@2: %empty  */
#line 466 "src/gwion.y"
                  { arg->handling = true; }
#line 3230 "src/parser.c"
    break;

  case 103: /* handler: "handle" $@2 opt_id stmt  */
#line 466 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3236 "src/parser.c"
    break;

  case 104: /* handler_list: handler  */
#line 467 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3246 "src/parser.c"
    break;

  case 105: /* handler_list: handler_list handler  */
#line 472 "src/gwion.y"
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
#line 3267 "src/parser.c"
    break;

  case 106: /* try_stmt: "try" stmt handler_list  */
#line 488 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3276 "src/parser.c"
    break;

  case 108: /* opt_id: %empty  */
#line 493 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3282 "src/parser.c"
    break;

  case 109: /* enum_def: "enum" flag "<identifier>" "{" id_list "}"  */
#line 496 "src/gwion.y"
                                   {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
  }
#line 3291 "src/parser.c"
    break;

  case 110: /* when_exp: "when" exp  */
#line 501 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3297 "src/parser.c"
    break;

  case 111: /* when_exp: %empty  */
#line 501 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3303 "src/parser.c"
    break;

  case 112: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 504 "src/gwion.y"
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
#line 3319 "src/parser.c"
    break;

  case 113: /* match_list: match_case_stmt  */
#line 516 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3328 "src/parser.c"
    break;

  case 114: /* match_list: match_list match_case_stmt  */
#line 520 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3337 "src/parser.c"
    break;

  case 115: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 525 "src/gwion.y"
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
#line 3352 "src/parser.c"
    break;

  case 116: /* match_stmt: "match" exp "{" match_list "}"  */
#line 536 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3366 "src/parser.c"
    break;

  case 117: /* flow: "while"  */
#line 547 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3372 "src/parser.c"
    break;

  case 118: /* flow: "until"  */
#line 548 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3378 "src/parser.c"
    break;

  case 119: /* loop_stmt: flow "(" exp ")" stmt  */
#line 553 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3391 "src/parser.c"
    break;

  case 120: /* loop_stmt: "do" stmt flow exp ";"  */
#line 562 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3405 "src/parser.c"
    break;

  case 121: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 572 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3419 "src/parser.c"
    break;

  case 122: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 582 "src/gwion.y"
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
#line 3434 "src/parser.c"
    break;

  case 123: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 593 "src/gwion.y"
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
#line 3451 "src/parser.c"
    break;

  case 124: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 606 "src/gwion.y"
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
#line 3473 "src/parser.c"
    break;

  case 125: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 624 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3486 "src/parser.c"
    break;

  case 126: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 633 "src/gwion.y"
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
#line 3503 "src/parser.c"
    break;

  case 127: /* defer_stmt: "defer" stmt  */
#line 646 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3513 "src/parser.c"
    break;

  case 128: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 654 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3526 "src/parser.c"
    break;

  case 129: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 663 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3540 "src/parser.c"
    break;

  case 130: /* breaks: "break"  */
#line 673 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3546 "src/parser.c"
    break;

  case 131: /* breaks: "continue"  */
#line 673 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3552 "src/parser.c"
    break;

  case 132: /* jump_stmt: "return" exp ";"  */
#line 675 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3562 "src/parser.c"
    break;

  case 133: /* jump_stmt: "return" ";"  */
#line 680 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3571 "src/parser.c"
    break;

  case 134: /* jump_stmt: breaks "<integer>" ";"  */
#line 684 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3581 "src/parser.c"
    break;

  case 135: /* jump_stmt: breaks ";"  */
#line 689 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3590 "src/parser.c"
    break;

  case 136: /* exp_stmt: exp ";"  */
#line 695 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3600 "src/parser.c"
    break;

  case 137: /* exp_stmt: ";"  */
#line 700 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3609 "src/parser.c"
    break;

  case 138: /* exp: binary_exp  */
#line 706 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3615 "src/parser.c"
    break;

  case 139: /* exp: binary_exp "," exp  */
#line 708 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3627 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp "@" decl_exp  */
#line 719 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3633 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 720 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3639 "src/parser.c"
    break;

  case 143: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 721 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3645 "src/parser.c"
    break;

  case 144: /* call_template: ":[" type_list "]"  */
#line 724 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3651 "src/parser.c"
    break;

  case 145: /* call_template: %empty  */
#line 724 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3657 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]"  */
#line 729 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3663 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]" array_exp  */
#line 730 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3671 "src/parser.c"
    break;

  case 153: /* array_exp: "[" exp "]" "[" "]"  */
#line 733 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3677 "src/parser.c"
    break;

  case 154: /* array_empty: "[" "]"  */
#line 737 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3683 "src/parser.c"
    break;

  case 155: /* array_empty: array_empty "[" "]"  */
#line 738 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3689 "src/parser.c"
    break;

  case 156: /* array_empty: array_empty array_exp  */
#line 739 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3695 "src/parser.c"
    break;

  case 157: /* dict_list: binary_exp ":" binary_exp  */
#line 743 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3701 "src/parser.c"
    break;

  case 158: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 744 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3707 "src/parser.c"
    break;

  case 159: /* range: "[" exp ":" exp "]"  */
#line 747 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3713 "src/parser.c"
    break;

  case 160: /* range: "[" exp ":" "]"  */
#line 748 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3719 "src/parser.c"
    break;

  case 161: /* range: "[" ":" exp "]"  */
#line 749 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3725 "src/parser.c"
    break;

  case 165: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 755 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3731 "src/parser.c"
    break;

  case 166: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 756 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3741 "src/parser.c"
    break;

  case 167: /* func_args: "(" arg_list ")"  */
#line 762 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3747 "src/parser.c"
    break;

  case 168: /* func_args: "(" ")"  */
#line 762 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3753 "src/parser.c"
    break;

  case 169: /* fptr_args: "(" fptr_list ")"  */
#line 763 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3759 "src/parser.c"
    break;

  case 170: /* fptr_args: "(" ")"  */
#line 763 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3765 "src/parser.c"
    break;

  case 171: /* decl_template: ":[" specialized_list "]"  */
#line 765 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3771 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 766 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3782 "src/parser.c"
    break;

  case 173: /* decl_template: ":[" "..." "]"  */
#line 772 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3792 "src/parser.c"
    break;

  case 174: /* decl_template: %empty  */
#line 777 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3798 "src/parser.c"
    break;

  case 175: /* global: "global"  */
#line 779 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3804 "src/parser.c"
    break;

  case 177: /* opt_global: %empty  */
#line 780 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3810 "src/parser.c"
    break;

  case 178: /* storage_flag: "static"  */
#line 782 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3816 "src/parser.c"
    break;

  case 180: /* access_flag: "private"  */
#line 784 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3822 "src/parser.c"
    break;

  case 181: /* access_flag: "protect"  */
#line 785 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3828 "src/parser.c"
    break;

  case 182: /* flag: access_flag  */
#line 788 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3834 "src/parser.c"
    break;

  case 183: /* flag: storage_flag  */
#line 789 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3840 "src/parser.c"
    break;

  case 184: /* flag: access_flag storage_flag  */
#line 790 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3846 "src/parser.c"
    break;

  case 185: /* flag: %empty  */
#line 791 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3852 "src/parser.c"
    break;

  case 186: /* final: "final"  */
#line 794 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3858 "src/parser.c"
    break;

  case 187: /* final: %empty  */
#line 794 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3864 "src/parser.c"
    break;

  case 188: /* modifier: "abstract" final  */
#line 796 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3870 "src/parser.c"
    break;

  case 190: /* func_def_base: "fun" func_base func_args code_list  */
#line 799 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3880 "src/parser.c"
    break;

  case 191: /* func_def_base: "fun" func_base func_args ";"  */
#line 804 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3892 "src/parser.c"
    break;

  case 192: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 811 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3903 "src/parser.c"
    break;

  case 193: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 817 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3914 "src/parser.c"
    break;

  case 194: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 826 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3926 "src/parser.c"
    break;

  case 200: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 837 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3940 "src/parser.c"
    break;

  case 201: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 847 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3953 "src/parser.c"
    break;

  case 202: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 856 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3967 "src/parser.c"
    break;

  case 203: /* op_base: type_decl_empty OPID_A func_args  */
#line 866 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3976 "src/parser.c"
    break;

  case 204: /* operator: "operator"  */
#line 871 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3982 "src/parser.c"
    break;

  case 205: /* operator: "operator" global  */
#line 871 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3988 "src/parser.c"
    break;

  case 206: /* op_def: operator op_base code_list  */
#line 874 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3994 "src/parser.c"
    break;

  case 207: /* op_def: operator op_base ";"  */
#line 876 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4000 "src/parser.c"
    break;

  case 208: /* op_def: operator "abstract" op_base ";"  */
#line 878 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4006 "src/parser.c"
    break;

  case 212: /* func_def: operator "new" func_args code_list  */
#line 882 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4016 "src/parser.c"
    break;

  case 213: /* func_def: operator "new" func_args ";"  */
#line 888 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4027 "src/parser.c"
    break;

  case 214: /* func_def: operator "abstract" "new" func_args ";"  */
#line 895 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4038 "src/parser.c"
    break;

  case 215: /* type_decl_base: "<identifier>"  */
#line 903 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4044 "src/parser.c"
    break;

  case 216: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 904 "src/gwion.y"
                                                                      {
      const Symbol name = sig_name(arg, (yylsp[-4]).first);
      (yyval.type_decl) = new_type_decl(mpool(arg), name, (yylsp[-6]));
      Func_Base *fb = new_func_base(mpool(arg), (yyvsp[-4].type_decl), name, NULL, (yyvsp[-5].flag), (yylsp[-6]));
      if((yyvsp[-3].specialized_list))
        fb->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      fb->args = (yyvsp[-2].arg_list);
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = (yyvsp[-1].vector).ptr;
      (yyval.type_decl)->fptr = fptr;
  }
#line 4060 "src/parser.c"
    break;

  case 217: /* type_decl_tmpl: type_decl_base call_template  */
#line 918 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4066 "src/parser.c"
    break;

  case 218: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 919 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4072 "src/parser.c"
    break;

  case 220: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 924 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4078 "src/parser.c"
    break;

  case 221: /* option: "?"  */
#line 927 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4084 "src/parser.c"
    break;

  case 222: /* option: OPTIONS  */
#line 927 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4090 "src/parser.c"
    break;

  case 223: /* option: %empty  */
#line 927 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4096 "src/parser.c"
    break;

  case 224: /* type_decl_opt: type_decl_noflag option  */
#line 928 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4102 "src/parser.c"
    break;

  case 226: /* type_decl: type_decl_flag type_decl_opt  */
#line 929 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4108 "src/parser.c"
    break;

  case 227: /* type_decl_flag: "late"  */
#line 932 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4114 "src/parser.c"
    break;

  case 228: /* type_decl_flag: "const"  */
#line 933 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4120 "src/parser.c"
    break;

  case 229: /* opt_var: "var"  */
#line 935 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4126 "src/parser.c"
    break;

  case 230: /* opt_var: %empty  */
#line 935 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4132 "src/parser.c"
    break;

  case 231: /* type_decl_flag2: "var"  */
#line 937 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4138 "src/parser.c"
    break;

  case 233: /* union_decl: "<identifier>" ";"  */
#line 940 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4147 "src/parser.c"
    break;

  case 234: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 944 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4153 "src/parser.c"
    break;

  case 235: /* union_list: union_decl  */
#line 946 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4162 "src/parser.c"
    break;

  case 236: /* union_list: union_list union_decl  */
#line 950 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4171 "src/parser.c"
    break;

  case 237: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 956 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4183 "src/parser.c"
    break;

  case 238: /* var_decl: "<identifier>"  */
#line 965 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4189 "src/parser.c"
    break;

  case 239: /* arg_decl: "<identifier>"  */
#line 967 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4195 "src/parser.c"
    break;

  case 241: /* fptr_arg_decl: %empty  */
#line 968 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4201 "src/parser.c"
    break;

  case 255: /* opt_exp: exp  */
#line 976 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4207 "src/parser.c"
    break;

  case 256: /* opt_exp: %empty  */
#line 976 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4213 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 979 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4219 "src/parser.c"
    break;

  case 259: /* con_exp: log_or_exp "?:" con_exp  */
#line 981 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4225 "src/parser.c"
    break;

  case 261: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 983 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4231 "src/parser.c"
    break;

  case 263: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 984 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4237 "src/parser.c"
    break;

  case 265: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 985 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4243 "src/parser.c"
    break;

  case 267: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 986 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4249 "src/parser.c"
    break;

  case 269: /* and_exp: and_exp "&" eq_exp  */
#line 987 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4255 "src/parser.c"
    break;

  case 271: /* eq_exp: eq_exp eq_op rel_exp  */
#line 988 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4261 "src/parser.c"
    break;

  case 273: /* rel_exp: rel_exp rel_op shift_exp  */
#line 989 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4267 "src/parser.c"
    break;

  case 275: /* shift_exp: shift_exp shift_op add_exp  */
#line 990 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4273 "src/parser.c"
    break;

  case 277: /* add_exp: add_exp add_op mul_exp  */
#line 991 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4279 "src/parser.c"
    break;

  case 279: /* mul_exp: mul_exp mul_op dur_exp  */
#line 992 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4285 "src/parser.c"
    break;

  case 281: /* dur_exp: dur_exp "::" cast_exp  */
#line 993 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4291 "src/parser.c"
    break;

  case 283: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 996 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4297 "src/parser.c"
    break;

  case 290: /* unary_exp: unary_op unary_exp  */
#line 1003 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4303 "src/parser.c"
    break;

  case 291: /* unary_exp: "spork" unary_exp  */
#line 1004 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4309 "src/parser.c"
    break;

  case 292: /* unary_exp: "fork" unary_exp  */
#line 1005 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4315 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1006 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4323 "src/parser.c"
    break;

  case 294: /* unary_exp: "new" type_decl_exp  */
#line 1009 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4329 "src/parser.c"
    break;

  case 295: /* unary_exp: "spork" code_list  */
#line 1010 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4335 "src/parser.c"
    break;

  case 296: /* unary_exp: "fork" code_list  */
#line 1011 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4341 "src/parser.c"
    break;

  case 297: /* unary_exp: "spork" captures code_list  */
#line 1012 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4347 "src/parser.c"
    break;

  case 298: /* unary_exp: "fork" captures code_list  */
#line 1013 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4353 "src/parser.c"
    break;

  case 299: /* unary_exp: "$" type_decl_empty  */
#line 1014 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4359 "src/parser.c"
    break;

  case 300: /* lambda_list: "<identifier>"  */
#line 1017 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4369 "src/parser.c"
    break;

  case 301: /* lambda_list: lambda_list "<identifier>"  */
#line 1022 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4379 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\" lambda_list  */
#line 1027 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4385 "src/parser.c"
    break;

  case 303: /* lambda_arg: "\\"  */
#line 1027 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4391 "src/parser.c"
    break;

  case 304: /* type_list: type_decl_empty  */
#line 1030 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4400 "src/parser.c"
    break;

  case 305: /* type_list: type_list "," type_decl_empty  */
#line 1034 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4409 "src/parser.c"
    break;

  case 306: /* call_paren: "(" exp ")"  */
#line 1040 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4415 "src/parser.c"
    break;

  case 307: /* call_paren: "(" ")"  */
#line 1040 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4421 "src/parser.c"
    break;

  case 310: /* dot_exp: post_exp "." "<identifier>"  */
#line 1044 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4434 "src/parser.c"
    break;

  case 312: /* post_exp: post_exp array_exp  */
#line 1055 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4440 "src/parser.c"
    break;

  case 313: /* post_exp: post_exp range  */
#line 1057 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4446 "src/parser.c"
    break;

  case 314: /* post_exp: post_exp call_template call_paren  */
#line 1059 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4453 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp post_op  */
#line 1062 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4459 "src/parser.c"
    break;

  case 316: /* post_exp: dot_exp  */
#line 1063 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4465 "src/parser.c"
    break;

  case 317: /* interp_exp: "<interp string end>"  */
#line 1067 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4471 "src/parser.c"
    break;

  case 318: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1068 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4477 "src/parser.c"
    break;

  case 319: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1069 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4483 "src/parser.c"
    break;

  case 320: /* interp: "${" interp_exp  */
#line 1071 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4489 "src/parser.c"
    break;

  case 321: /* interp: interp "${" interp_exp  */
#line 1072 "src/gwion.y"
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
#line 4504 "src/parser.c"
    break;

  case 322: /* capture: "<identifier>"  */
#line 1083 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4510 "src/parser.c"
    break;

  case 323: /* capture: "&" "<identifier>"  */
#line 1083 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4516 "src/parser.c"
    break;

  case 324: /* _captures: capture  */
#line 1085 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4522 "src/parser.c"
    break;

  case 325: /* _captures: _captures capture  */
#line 1086 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4528 "src/parser.c"
    break;

  case 326: /* captures: ":" _captures ":"  */
#line 1087 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4534 "src/parser.c"
    break;

  case 327: /* captures: %empty  */
#line 1087 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4540 "src/parser.c"
    break;

  case 328: /* prim_exp: "<identifier>"  */
#line 1089 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4546 "src/parser.c"
    break;

  case 329: /* prim_exp: "<integer>"  */
#line 1090 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4552 "src/parser.c"
    break;

  case 330: /* prim_exp: "<float>"  */
#line 1091 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4558 "src/parser.c"
    break;

  case 331: /* prim_exp: interp  */
#line 1092 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4564 "src/parser.c"
    break;

  case 332: /* prim_exp: "<litteral string>"  */
#line 1093 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4570 "src/parser.c"
    break;

  case 333: /* prim_exp: "<litteral char>"  */
#line 1094 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4576 "src/parser.c"
    break;

  case 334: /* prim_exp: array  */
#line 1095 "src/gwion.y"
                         { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 4582 "src/parser.c"
    break;

  case 335: /* prim_exp: "{" dict_list "}"  */
#line 1096 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4588 "src/parser.c"
    break;

  case 336: /* prim_exp: range  */
#line 1097 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4594 "src/parser.c"
    break;

  case 337: /* prim_exp: "<<<" exp ">>>"  */
#line 1098 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4600 "src/parser.c"
    break;

  case 338: /* prim_exp: "(" exp ")"  */
#line 1099 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4606 "src/parser.c"
    break;

  case 339: /* prim_exp: "`foo`"  */
#line 1100 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4617 "src/parser.c"
    break;

  case 340: /* prim_exp: lambda_arg captures code_list  */
#line 1106 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4623 "src/parser.c"
    break;

  case 341: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1107 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4629 "src/parser.c"
    break;

  case 342: /* prim_exp: "(" op_op ")"  */
#line 1108 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); }
#line 4635 "src/parser.c"
    break;

  case 343: /* prim_exp: "perform" opt_id  */
#line 1109 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4641 "src/parser.c"
    break;

  case 344: /* prim_exp: "(" ")"  */
#line 1110 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4647 "src/parser.c"
    break;


#line 4651 "src/parser.c"

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

#line 1112 "src/gwion.y"

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
