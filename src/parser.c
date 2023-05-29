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

ANN static int parser_error(const loc_t*, Scanner*const, const char *, const uint);
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
  YYSYMBOL_RBRACK2 = 9,                    /* ",]"  */
  YYSYMBOL_LBRACE = 10,                    /* "{"  */
  YYSYMBOL_RBRACE = 11,                    /* "}"  */
  YYSYMBOL_FUNCTION = 12,                  /* "fun"  */
  YYSYMBOL_VAR = 13,                       /* "var"  */
  YYSYMBOL_IF = 14,                        /* "if"  */
  YYSYMBOL_ELSE = 15,                      /* "else"  */
  YYSYMBOL_WHILE = 16,                     /* "while"  */
  YYSYMBOL_DO = 17,                        /* "do"  */
  YYSYMBOL_UNTIL = 18,                     /* "until"  */
  YYSYMBOL_LOOP = 19,                      /* "repeat"  */
  YYSYMBOL_FOR = 20,                       /* "for"  */
  YYSYMBOL_FOREACH = 21,                   /* "foreach"  */
  YYSYMBOL_MATCH = 22,                     /* "match"  */
  YYSYMBOL_CASE = 23,                      /* "case"  */
  YYSYMBOL_WHEN = 24,                      /* "when"  */
  YYSYMBOL_WHERE = 25,                     /* "where"  */
  YYSYMBOL_ENUM = 26,                      /* "enum"  */
  YYSYMBOL_TRETURN = 27,                   /* "return"  */
  YYSYMBOL_BREAK = 28,                     /* "break"  */
  YYSYMBOL_CONTINUE = 29,                  /* "continue"  */
  YYSYMBOL_TRY = 30,                       /* "try"  */
  YYSYMBOL_PERFORM = 31,                   /* "perform"  */
  YYSYMBOL_HANDLET = 32,                   /* "handle"  */
  YYSYMBOL_RETRY = 33,                     /* "retry"  */
  YYSYMBOL_CLASS = 34,                     /* "class"  */
  YYSYMBOL_STRUCT = 35,                    /* "struct"  */
  YYSYMBOL_TRAIT = 36,                     /* "trait"  */
  YYSYMBOL_STATIC = 37,                    /* "static"  */
  YYSYMBOL_GLOBAL = 38,                    /* "global"  */
  YYSYMBOL_PRIVATE = 39,                   /* "private"  */
  YYSYMBOL_PROTECT = 40,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 41,                  /* "abstract"  */
  YYSYMBOL_FINAL = 42,                     /* "final"  */
  YYSYMBOL_EXTENDS = 43,                   /* "extends"  */
  YYSYMBOL_DOT = 44,                       /* "."  */
  YYSYMBOL_OPERATOR = 45,                  /* "operator"  */
  YYSYMBOL_PRIMITIVE = 46,                 /* "primitive"  */
  YYSYMBOL_TYPEDEF = 47,                   /* "typedef"  */
  YYSYMBOL_DISTINCT = 48,                  /* "distinct"  */
  YYSYMBOL_FUNPTR = 49,                    /* "funptr"  */
  YYSYMBOL_NOELSE = 50,                    /* NOELSE  */
  YYSYMBOL_UNION = 51,                     /* "union"  */
  YYSYMBOL_CONSTT = 52,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 53,                   /* "..."  */
  YYSYMBOL_DEFER = 54,                     /* "defer"  */
  YYSYMBOL_BACKSLASH = 55,                 /* "\\"  */
  YYSYMBOL_OPID_A = 56,                    /* OPID_A  */
  YYSYMBOL_LOCALE = 57,                    /* LOCALE  */
  YYSYMBOL_LOCALE_INI = 58,                /* LOCALE_INI  */
  YYSYMBOL_LOCALE_END = 59,                /* LOCALE_END  */
  YYSYMBOL_LATE = 60,                      /* "late"  */
  YYSYMBOL_NUM = 61,                       /* NUM  */
  YYSYMBOL_62_integer_ = 62,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 63,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 64,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 65,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 66,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 67,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 68,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 69,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 70,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 71,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 72,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 73,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 74,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 75,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 76,                  /* "#if"  */
  YYSYMBOL_PP_NL = 77,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 78,                 /* "import"  */
  YYSYMBOL_SPREAD = 79,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 80,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 81,                /* "<interp string end>"  */
  YYSYMBOL_82_operator_id_ = 82,           /* "@<operator id>"  */
  YYSYMBOL_ID = 83,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 84,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 85,                  /* "++"  */
  YYSYMBOL_MINUS = 86,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 87,                /* "--"  */
  YYSYMBOL_TIMES = 88,                     /* "*"  */
  YYSYMBOL_DIVIDE = 89,                    /* "/"  */
  YYSYMBOL_PERCENT = 90,                   /* "%"  */
  YYSYMBOL_DOLLAR = 91,                    /* "$"  */
  YYSYMBOL_QUESTION = 92,                  /* "?"  */
  YYSYMBOL_OPTIONS = 93,                   /* OPTIONS  */
  YYSYMBOL_COLON = 94,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 95,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 96,             /* "?:"  */
  YYSYMBOL_NEW = 97,                       /* "new"  */
  YYSYMBOL_SPORK = 98,                     /* "spork"  */
  YYSYMBOL_FORK = 99,                      /* "fork"  */
  YYSYMBOL_L_HACK = 100,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 101,                   /* ">>>"  */
  YYSYMBOL_AND = 102,                      /* "&&"  */
  YYSYMBOL_EQ = 103,                       /* "=="  */
  YYSYMBOL_GE = 104,                       /* ">="  */
  YYSYMBOL_GT = 105,                       /* ">"  */
  YYSYMBOL_LE = 106,                       /* "<="  */
  YYSYMBOL_LT = 107,                       /* "<"  */
  YYSYMBOL_NEQ = 108,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 109,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 110,              /* ">>"  */
  YYSYMBOL_S_AND = 111,                    /* "&"  */
  YYSYMBOL_S_OR = 112,                     /* "|"  */
  YYSYMBOL_S_XOR = 113,                    /* "^"  */
  YYSYMBOL_OR = 114,                       /* "||"  */
  YYSYMBOL_TMPL = 115,                     /* ":["  */
  YYSYMBOL_TILDA = 116,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 117,              /* "!"  */
  YYSYMBOL_AROBASE = 118,                  /* "@"  */
  YYSYMBOL_DYNOP = 119,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 120,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 121,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 122,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 123,                   /* UTIMES  */
  YYSYMBOL_124_ = 124,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 125,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 126,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 127,                 /* $accept  */
  YYSYMBOL_prg = 128,                      /* prg  */
  YYSYMBOL_ast = 129,                      /* ast  */
  YYSYMBOL_section = 130,                  /* section  */
  YYSYMBOL_class_flag = 131,               /* class_flag  */
  YYSYMBOL_class_def = 132,                /* class_def  */
  YYSYMBOL_trait_stmt = 133,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 134,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 135,            /* trait_section  */
  YYSYMBOL_trait_ast = 136,                /* trait_ast  */
  YYSYMBOL_trait_body = 137,               /* trait_body  */
  YYSYMBOL_trait_def = 138,                /* trait_def  */
  YYSYMBOL_number = 139,                   /* number  */
  YYSYMBOL_prim_def = 140,                 /* prim_def  */
  YYSYMBOL_class_ext = 141,                /* class_ext  */
  YYSYMBOL_traits = 142,                   /* traits  */
  YYSYMBOL_extend_def = 143,               /* extend_def  */
  YYSYMBOL_class_body = 144,               /* class_body  */
  YYSYMBOL_id_list = 145,                  /* id_list  */
  YYSYMBOL_specialized_list = 146,         /* specialized_list  */
  YYSYMBOL_stmt_list = 147,                /* stmt_list  */
  YYSYMBOL_fptr_base = 148,                /* fptr_base  */
  YYSYMBOL__func_effects = 149,            /* _func_effects  */
  YYSYMBOL_func_effects = 150,             /* func_effects  */
  YYSYMBOL_func_base = 151,                /* func_base  */
  YYSYMBOL_fptr_def = 152,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 153,             /* typedef_when  */
  YYSYMBOL_type_def_type = 154,            /* type_def_type  */
  YYSYMBOL_type_def = 155,                 /* type_def  */
  YYSYMBOL_type_decl_array = 156,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 157,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 158,          /* type_decl_empty  */
  YYSYMBOL_arg = 159,                      /* arg  */
  YYSYMBOL_arg_list = 160,                 /* arg_list  */
  YYSYMBOL_locale_arg = 161,               /* locale_arg  */
  YYSYMBOL_locale_list = 162,              /* locale_list  */
  YYSYMBOL_fptr_arg = 163,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 164,                /* fptr_list  */
  YYSYMBOL_code_stmt = 165,                /* code_stmt  */
  YYSYMBOL_code_list = 166,                /* code_list  */
  YYSYMBOL_stmt_pp = 167,                  /* stmt_pp  */
  YYSYMBOL_stmt = 168,                     /* stmt  */
  YYSYMBOL_spread_stmt = 169,              /* spread_stmt  */
  YYSYMBOL_170_1 = 170,                    /* $@1  */
  YYSYMBOL_retry_stmt = 171,               /* retry_stmt  */
  YYSYMBOL_handler = 172,                  /* handler  */
  YYSYMBOL_173_2 = 173,                    /* $@2  */
  YYSYMBOL_handler_list = 174,             /* handler_list  */
  YYSYMBOL_try_stmt = 175,                 /* try_stmt  */
  YYSYMBOL_opt_id = 176,                   /* opt_id  */
  YYSYMBOL_opt_comma = 177,                /* opt_comma  */
  YYSYMBOL_enum_value = 178,               /* enum_value  */
  YYSYMBOL_enum_list = 179,                /* enum_list  */
  YYSYMBOL_enum_def = 180,                 /* enum_def  */
  YYSYMBOL_when_exp = 181,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 182,          /* match_case_stmt  */
  YYSYMBOL_match_list = 183,               /* match_list  */
  YYSYMBOL_match_stmt = 184,               /* match_stmt  */
  YYSYMBOL_flow = 185,                     /* flow  */
  YYSYMBOL_loop_stmt = 186,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 187,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 188,           /* selection_stmt  */
  YYSYMBOL_breaks = 189,                   /* breaks  */
  YYSYMBOL_jump_stmt = 190,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 191,                 /* exp_stmt  */
  YYSYMBOL_exp = 192,                      /* exp  */
  YYSYMBOL_binary_exp = 193,               /* binary_exp  */
  YYSYMBOL_call_template = 194,            /* call_template  */
  YYSYMBOL_op = 195,                       /* op  */
  YYSYMBOL_array_exp = 196,                /* array_exp  */
  YYSYMBOL_array_empty = 197,              /* array_empty  */
  YYSYMBOL_dict_list = 198,                /* dict_list  */
  YYSYMBOL_range = 199,                    /* range  */
  YYSYMBOL_array = 200,                    /* array  */
  YYSYMBOL_decl_exp = 201,                 /* decl_exp  */
  YYSYMBOL_func_args = 202,                /* func_args  */
  YYSYMBOL_fptr_args = 203,                /* fptr_args  */
  YYSYMBOL_decl_template = 204,            /* decl_template  */
  YYSYMBOL_global = 205,                   /* global  */
  YYSYMBOL_opt_global = 206,               /* opt_global  */
  YYSYMBOL_storage_flag = 207,             /* storage_flag  */
  YYSYMBOL_access_flag = 208,              /* access_flag  */
  YYSYMBOL_flag = 209,                     /* flag  */
  YYSYMBOL_final = 210,                    /* final  */
  YYSYMBOL_modifier = 211,                 /* modifier  */
  YYSYMBOL_func_def_base = 212,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 213,            /* abstract_fdef  */
  YYSYMBOL_op_op = 214,                    /* op_op  */
  YYSYMBOL_op_base = 215,                  /* op_base  */
  YYSYMBOL_operator = 216,                 /* operator  */
  YYSYMBOL_op_def = 217,                   /* op_def  */
  YYSYMBOL_func_def = 218,                 /* func_def  */
  YYSYMBOL_type_decl_base = 219,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 220,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 221,         /* type_decl_noflag  */
  YYSYMBOL_option = 222,                   /* option  */
  YYSYMBOL_type_decl_opt = 223,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 224,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 225,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 226,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 227,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 228,               /* union_decl  */
  YYSYMBOL_union_list = 229,               /* union_list  */
  YYSYMBOL_union_def = 230,                /* union_def  */
  YYSYMBOL_var_decl = 231,                 /* var_decl  */
  YYSYMBOL_arg_decl = 232,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 233,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 234,                    /* eq_op  */
  YYSYMBOL_rel_op = 235,                   /* rel_op  */
  YYSYMBOL_shift_op = 236,                 /* shift_op  */
  YYSYMBOL_add_op = 237,                   /* add_op  */
  YYSYMBOL_mul_op = 238,                   /* mul_op  */
  YYSYMBOL_opt_exp = 239,                  /* opt_exp  */
  YYSYMBOL_con_exp = 240,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 241,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 242,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 243,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 244,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 245,                  /* and_exp  */
  YYSYMBOL_eq_exp = 246,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 247,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 248,                /* shift_exp  */
  YYSYMBOL_add_exp = 249,                  /* add_exp  */
  YYSYMBOL_mul_exp = 250,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 251,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 252,                 /* cast_exp  */
  YYSYMBOL_unary_op = 253,                 /* unary_op  */
  YYSYMBOL_unary_exp = 254,                /* unary_exp  */
  YYSYMBOL_lambda_list = 255,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 256,               /* lambda_arg  */
  YYSYMBOL_type_list = 257,                /* type_list  */
  YYSYMBOL_call_paren = 258,               /* call_paren  */
  YYSYMBOL_post_op = 259,                  /* post_op  */
  YYSYMBOL_dot_exp = 260,                  /* dot_exp  */
  YYSYMBOL_post_exp = 261,                 /* post_exp  */
  YYSYMBOL_interp_exp = 262,               /* interp_exp  */
  YYSYMBOL_interp = 263,                   /* interp  */
  YYSYMBOL_capture = 264,                  /* capture  */
  YYSYMBOL__captures = 265,                /* _captures  */
  YYSYMBOL_captures = 266,                 /* captures  */
  YYSYMBOL_array_lit_end = 267,            /* array_lit_end  */
  YYSYMBOL_prim_exp = 268                  /* prim_exp  */
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
#define YYFINAL  226
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2655

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  353
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  633

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   381


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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   185,   185,   186,   189,   193,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   211,   213,   220,   229,
     233,   234,   238,   244,   245,   249,   253,   258,   258,   260,
     266,   273,   277,   277,   278,   278,   280,   285,   285,   287,
     292,   298,   306,   312,   316,   321,   324,   324,   325,   325,
     327,   330,   336,   336,   337,   337,   338,   347,   347,   349,
     353,   358,   362,   367,   372,   381,   392,   400,   401,   411,
     413,   417,   423,   425,   429,   430,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   446,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     463,   463,   473,   478,   478,   479,   484,   500,   505,   505,
     506,   506,   509,   510,   516,   521,   527,   532,   532,   535,
     547,   551,   556,   567,   578,   579,   583,   592,   602,   612,
     623,   636,   654,   663,   677,   691,   700,   711,   711,   713,
     718,   722,   727,   733,   738,   744,   745,   756,   757,   758,
     759,   762,   762,   764,   764,   764,   764,   764,   767,   768,
     771,   775,   776,   777,   781,   782,   785,   786,   787,   791,
     791,   792,   793,   794,   800,   800,   801,   801,   803,   804,
     810,   815,   817,   818,   818,   820,   820,   822,   823,   826,
     827,   828,   829,   832,   832,   834,   834,   837,   842,   849,
     855,   863,   872,   872,   872,   872,   872,   874,   884,   893,
     903,   909,   909,   911,   913,   915,   918,   918,   918,   919,
     925,   932,   941,   942,   956,   957,   961,   962,   965,   965,
     965,   966,   967,   967,   970,   971,   973,   973,   975,   975,
     978,   982,   984,   988,   994,  1003,  1005,  1006,  1006,  1008,
    1008,  1009,  1009,  1009,  1009,  1010,  1010,  1011,  1011,  1012,
    1012,  1012,  1014,  1014,  1015,  1016,  1018,  1021,  1021,  1022,
    1022,  1023,  1023,  1024,  1024,  1025,  1025,  1026,  1026,  1027,
    1027,  1028,  1028,  1029,  1029,  1030,  1030,  1031,  1031,  1033,
    1033,  1036,  1036,  1036,  1037,  1037,  1040,  1041,  1042,  1043,
    1044,  1047,  1048,  1049,  1050,  1051,  1052,  1055,  1060,  1065,
    1065,  1068,  1072,  1078,  1078,  1080,  1080,  1082,  1091,  1092,
    1094,  1096,  1099,  1101,  1105,  1106,  1107,  1109,  1110,  1121,
    1121,  1123,  1124,  1125,  1125,  1126,  1126,  1128,  1129,  1130,
    1131,  1132,  1133,  1134,  1142,  1143,  1144,  1145,  1146,  1152,
    1153,  1154,  1155,  1156
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
  ",]", "{", "}", "fun", "var", "if", "else", "while", "do", "until",
  "repeat", "for", "foreach", "match", "case", "when", "where", "enum",
  "return", "break", "continue", "try", "perform", "handle", "retry",
  "class", "struct", "trait", "static", "global", "private", "protect",
  "abstract", "final", "extends", ".", "operator", "primitive", "typedef",
  "distinct", "funptr", "NOELSE", "union", "const", "...", "defer", "\\",
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "NUM",
  "<integer>", "<float>", "<litteral string>", "<litteral char>", "${",
  "INTERP_EXP", "<comment>", "#include", "#define", "#pragma", "#undef",
  "#ifdef", "#ifndef", "#else", "#if", "\n", "import", "}...",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "<identifier>", "+", "++", "-", "--", "*", "/", "%", "$", "?", "OPTIONS",
  ":", "::", "?:", "new", "spork", "fork", "<<<", ">>>", "&&", "==", ">=",
  ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^", "||", ":[", "~", "!",
  "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY", "UMINUS", "UTIMES",
  "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_flag", "class_def", "trait_stmt", "trait_stmt_list",
  "trait_section", "trait_ast", "trait_body", "trait_def", "number",
  "prim_def", "class_ext", "traits", "extend_def", "class_body", "id_list",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "type_decl_exp", "type_decl_empty", "arg",
  "arg_list", "locale_arg", "locale_list", "fptr_arg", "fptr_list",
  "code_stmt", "code_list", "stmt_pp", "stmt", "spread_stmt", "$@1",
  "retry_stmt", "handler", "$@2", "handler_list", "try_stmt", "opt_id",
  "opt_comma", "enum_value", "enum_list", "enum_def", "when_exp",
  "match_case_stmt", "match_list", "match_stmt", "flow", "loop_stmt",
  "defer_stmt", "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty",
  "dict_list", "range", "array", "decl_exp", "func_args", "fptr_args",
  "decl_template", "global", "opt_global", "storage_flag", "access_flag",
  "flag", "final", "modifier", "func_def_base", "abstract_fdef", "op_op",
  "op_base", "operator", "op_def", "func_def", "type_decl_base",
  "type_decl_tmpl", "type_decl_noflag", "option", "type_decl_opt",
  "type_decl", "type_decl_flag", "opt_var", "type_decl_flag2",
  "union_decl", "union_list", "union_def", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "capture", "_captures", "captures",
  "array_lit_end", "prim_exp", YY_NULLPTR
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
     375,   376,   377,   378,   379,   380,   381
};
#endif

#define YYPACT_NINF (-469)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-260)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     611,  -469,  1677,  1834,   719,   278,  -469,    57,  -469,  1148,
    -469,    95,   109,   120,  2382,   278,  1540,  -469,  -469,  1148,
     -31,   149,   278,   278,   117,   297,   117,   278,  -469,  -469,
     278,   278,  -469,    99,  1148,   116,     9,   119,  -469,  -469,
    -469,  -469,  -469,  1793,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
     297,   297,   424,   424,  2382,  -469,  -469,  -469,   213,   611,
    -469,  -469,  -469,  -469,  -469,  -469,  1148,  -469,   278,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,   218,  -469,
    -469,  -469,    37,  -469,  -469,   222,    35,  -469,  -469,  -469,
    -469,   273,  -469,  -469,  -469,   278,  -469,  -469,   -20,   125,
     152,   118,   157,    48,   223,    58,    11,   147,   176,   184,
    2518,  -469,   185,  -469,  -469,   166,   217,  -469,  -469,  2382,
    -469,   279,   286,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,   293,  -469,   294,  -469,
    -469,  -469,  -469,  2382,   203,   200,  -469,   827,    28,   290,
    -469,  -469,  -469,  -469,   298,  -469,  -469,   202,   207,  2382,
     115,  2478,  1581,   226,   296,   227,  -469,   309,   281,  -469,
    -469,  -469,   237,   220,   239,  -469,   241,   278,  -469,    25,
    -469,   238,   221,   295,   197,  -469,   328,    24,  -469,   255,
     337,   297,   260,   251,  -469,  -469,   263,   345,   268,  1930,
    1793,  -469,   285,  -469,  -469,  -469,   357,   935,   -22,  -469,
    -469,   354,  -469,  -469,   354,   264,  -469,  -469,  -469,   297,
    2382,  -469,   363,  -469,  2382,  2382,  2382,  2382,   335,   298,
    2536,    63,   297,   297,  2382,  2518,  2518,  2518,  2518,  2518,
    2518,  -469,  -469,  2518,  2518,  2518,  -469,  2518,  -469,  2518,
    2518,   297,  -469,   358,  1834,   288,   297,   364,  -469,  -469,
    -469,  1793,    93,  -469,  -469,   366,  1971,  -469,  -469,  -469,
    -469,  2382,  -469,   236,    71,  -469,   297,  -469,   297,   369,
    2382,   368,    44,  1581,    32,   353,   371,  -469,  -469,  -469,
     281,   270,   336,  -469,  -469,   270,   289,   297,   221,   310,
    -469,    24,  -469,  -469,  -469,  2067,  -469,   372,  -469,  -469,
     338,   271,   367,   314,   270,   310,  -469,   297,   396,  -469,
     343,  -469,  1793,  2382,  -469,  1043,  -469,   320,  -469,   -24,
     935,  -469,  -469,  -469,   321,   399,  -469,  -469,  -469,  -469,
    -469,   298,   403,   103,   298,   270,   270,  -469,  -469,   270,
      26,  -469,   313,  -469,   125,   152,   118,   157,    48,   223,
      58,    11,   147,   176,   184,  -469,   935,  -469,    38,  -469,
    -469,    56,  2108,  -469,  -469,  -469,  -469,   404,    41,  -469,
     330,  -469,   173,  -469,  -469,   332,   334,  1148,   408,  2382,
    1148,  2204,   341,   406,  2382,  -469,    52,     7,   -31,  -469,
       3,   382,  -469,   289,   310,   108,   270,  -469,  -469,   291,
    -469,  -469,   418,  2245,  -469,   425,  -469,   330,  -469,   191,
     344,   347,   430,   270,   426,    73,  -469,   431,   432,   297,
    -469,  -469,   436,  -469,  -469,  -469,  -469,   270,  1148,   434,
    -469,  -469,  -469,  -469,   438,   439,   440,  2382,  -469,  -469,
    2518,    31,   442,   297,  -469,  -469,   444,  -469,  2382,  -469,
     359,   297,  -469,   270,   270,   441,  -469,    47,  -469,  1148,
     448,   370,  -469,  2382,   433,   435,  -469,   342,  -469,  -469,
     458,  1148,   455,   289,   188,   297,   289,   456,   461,  -469,
    1344,  -469,   337,  -469,   384,  -469,  -469,  -469,  -469,   297,
    -469,  -469,  -469,  -469,  -469,   303,  -469,   297,   354,   462,
    -469,   447,  -469,  -469,   297,   297,   297,   467,  -469,  -469,
    2341,  -469,  -469,  -469,  -469,  2382,  -469,   337,  -469,  1148,
    1148,  -469,  1148,   406,    51,  2382,   380,  1148,   392,     7,
     465,  -469,  -469,  -469,     5,  -469,  -469,   470,   611,  -469,
    1442,  -469,  1246,  -469,  -469,  -469,   367,  -469,  -469,   474,
     400,  -469,   169,   412,  -469,  -469,   354,  2382,   492,   493,
     490,   498,   415,  -469,    98,   502,  -469,  -469,  -469,  2382,
    1148,  -469,  1148,  -469,  -469,  -469,  -469,   500,   289,   611,
     611,   495,  -469,  -469,  -469,   507,  -469,   511,  -469,  -469,
    -469,  -469,    98,  -469,   297,  -469,  -469,  -469,  -469,    65,
    -469,  1148,  -469,  -469,   506,  -469,  -469,  -469,   513,  1148,
    -469,  -469,  -469
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   144,     0,   263,     0,   192,   238,     0,   124,     0,
     125,     0,     0,     0,     0,   192,     0,   137,   138,     0,
     109,     0,   192,   192,   184,     0,   211,   192,    54,    55,
     192,   192,   235,     0,     0,   310,     0,     0,   234,    30,
     339,   341,   342,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   337,   315,   291,   316,   292,
       0,     0,     0,     0,     0,   295,   294,   348,     0,     2,
       4,     8,     9,   338,    15,    10,     6,    13,   192,    14,
      92,    95,    43,    99,    98,    97,    11,    93,     0,    90,
      96,    91,     0,    94,    89,     0,   145,   345,   147,   216,
     217,     0,   218,     7,   239,   192,    12,   171,   264,   267,
     269,   271,   273,   275,   277,   279,   281,   283,   285,   287,
       0,   289,   334,   293,   323,   296,   340,   318,   353,     0,
     257,   291,   292,   260,   261,   157,   153,   254,   252,   253,
     251,   154,   255,   256,   155,   156,     0,   202,     0,   204,
     203,   206,   205,     0,   262,     0,    72,     0,   145,     0,
     185,   182,   187,   188,     0,   186,   190,   189,   194,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,   108,
     352,   102,     0,   194,     0,   183,     0,   192,   222,     0,
      60,     0,   152,   226,   230,   232,    58,     0,   212,     0,
       0,     0,     0,     0,   134,   307,   309,     0,     0,     0,
       0,   324,     0,   327,   306,    59,   301,     0,     0,   302,
     298,     0,   303,   299,     0,     0,     1,     5,    44,     0,
       0,   142,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
       0,   249,   250,     0,     0,     0,   258,     0,   259,     0,
       0,     0,   297,     0,     0,     0,     0,     0,   319,   320,
     322,     0,     0,   347,   351,     0,     0,   336,   335,   343,
      73,     0,   344,     0,     0,   191,     0,   193,     0,     0,
       0,   337,     0,     0,     0,     0,     0,   139,   103,   105,
     107,   181,   194,   196,    16,   181,    34,     0,   152,     0,
     224,     0,   228,   229,   231,     0,   169,   170,    57,   233,
       0,     0,    48,     0,   181,     0,   308,    68,     0,    88,
       0,   325,     0,   263,    74,     0,   329,     0,   331,     0,
       0,   304,   305,   346,     0,     0,   141,   146,   150,   148,
     149,     0,     0,     0,     0,   181,   181,   214,   213,   181,
       0,   262,     0,   266,   268,   270,   272,   274,   276,   278,
     280,   282,   284,   286,   288,   290,     0,   349,     0,   317,
     311,     0,     0,   321,   328,   168,   167,     0,   164,   175,
       0,    63,     0,   198,   197,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,   120,     0,     0,   109,   106,
       0,    33,   195,    34,     0,     0,   181,   225,    39,     0,
     227,   161,     0,     0,   163,     0,   177,   248,    70,     0,
       0,    49,     0,   181,     0,     0,    65,    67,     0,    68,
      87,   326,     0,    75,   330,   333,   332,   181,     0,     0,
     215,   220,   219,   210,     0,     0,     0,   263,   245,   172,
       0,   145,   158,     0,   151,   314,     0,   166,     0,   246,
      62,     0,   174,   181,   181,   135,   127,     0,   132,     0,
       0,     0,   236,     0,   118,   123,   121,     0,   112,   114,
     111,     0,     0,    34,     0,     0,    34,     0,    35,    28,
       0,    29,     0,    36,     0,   162,    31,   247,    69,     0,
     176,    46,    47,    51,    45,     0,   100,     0,     0,     0,
     300,    52,   126,   221,     0,     0,     0,     0,   265,   350,
       0,   159,   312,   313,   165,     0,    64,     0,    50,     0,
       0,   128,     0,   237,     0,     0,     0,     0,     0,   110,
       0,   104,   180,    41,     0,   178,    32,     0,    38,    21,
      23,    25,     0,    20,    19,    24,    48,    40,    71,   222,
       0,   242,     0,     0,    66,   200,     0,     0,     0,     0,
       0,     0,     0,   160,    61,     0,   136,   133,   129,     0,
       0,   117,     0,   122,   113,   115,   116,     0,    34,    38,
      37,     0,    22,    27,    26,     0,   240,     0,   244,   243,
     101,   199,    53,    56,     0,   208,   209,   173,   201,     0,
     130,   119,   179,    42,     0,    18,   223,   241,     0,     0,
      17,   207,   131
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -469,  -469,   520,   -65,   171,  -469,   -35,  -469,   -36,  -469,
    -469,  -469,   -76,  -469,  -469,  -394,  -469,   -72,  -297,  -469,
      -3,  -469,  -469,   -38,  -469,  -469,  -469,  -469,  -469,   -54,
      34,   -16,  -270,  -469,  -469,   100,    23,  -469,  -469,   -60,
    -459,    -9,  -469,  -469,  -469,   242,  -469,  -469,  -469,   129,
    -469,    -6,  -469,  -469,  -469,   139,  -469,  -469,   376,  -469,
    -469,  -469,  -469,  -469,  -166,    77,     1,  -170,  -469,  -188,
    -469,    79,   423,  -469,    22,  -215,  -468,  -240,   164,  -469,
     383,  -469,    18,  -157,  -469,  -469,  -469,   311,   315,  -469,
    -469,  -457,   365,  -469,   244,  -469,   355,  -469,   -23,    14,
    -469,   -14,  -469,  -469,   -21,   132,  -469,  -469,  -103,  -101,
    -104,   -99,  -229,  -228,  -469,   316,   317,   312,   318,   319,
     322,   323,   308,   325,   306,   324,   -81,    -8,  -469,  -469,
    -469,  -469,   -98,  -469,  -469,  -189,  -469,   229,  -469,   -12,
    -469,  -469
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,   600,    70,   182,    71,   559,   560,   561,   562,
     501,    72,    73,    74,   496,   415,    75,   601,   419,   494,
      76,   200,   431,   432,   164,    77,   578,    78,    79,   190,
     216,   390,   436,   392,   437,   438,   428,   429,    80,   219,
      81,    82,    83,   573,    84,   299,   408,   300,    85,   180,
     550,   489,   490,    86,   546,   405,   406,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   267,   147,   268,
     317,   159,    97,   318,    98,   284,   322,   411,   165,   186,
     166,   167,   183,   288,   304,    99,   100,   148,   241,   101,
     102,   103,   192,   193,   194,   314,   195,   196,   104,   483,
     105,   571,   572,   106,   459,   470,   508,   253,   149,   150,
     151,   152,   155,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   206,   122,
     381,   383,   123,   124,   125,   213,   126,   338,   339,   221,
     279,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   197,   222,   227,   158,   293,   215,   316,   191,
     178,   254,   257,   391,   255,   362,   232,   363,   259,   497,
     242,   331,   310,   168,   353,   204,   303,   270,   435,   187,
     187,   457,   234,   175,   566,   234,   402,   197,   197,   234,
     231,   563,   529,   565,   214,   468,   462,   161,   201,   202,
     400,   224,   179,   540,   220,   223,   492,   590,   597,   336,
     463,   336,   169,   485,   464,   413,   357,   228,   487,   585,
     445,   629,   244,   340,   393,   404,   245,   504,   197,   146,
     154,   340,   384,   516,   434,   240,   493,   337,   598,   337,
     488,   174,   207,   177,   246,   130,   229,   256,    39,   553,
     171,   563,   557,   563,   442,   565,   451,   188,   188,   458,
     263,   499,   262,   340,   172,   454,   455,   498,   500,   456,
     212,   235,   281,   243,   235,   173,   403,   401,   235,   424,
     272,     8,   276,    10,   235,   189,   449,   235,   417,   453,
     235,   225,   356,   441,   235,   412,   236,   237,   228,   236,
     237,   251,   181,   236,   237,   161,   252,   242,   235,   236,
     237,   341,   236,   237,   342,   236,   237,   142,   143,   236,
     237,  -152,   292,   264,   187,   344,   502,   471,   197,   472,
     608,   358,   203,   236,   237,   323,   235,   281,   185,   360,
     198,   235,   554,   514,   184,   509,   555,   510,   199,   205,
     208,   536,   209,   377,   623,   307,   197,   521,   277,   278,
     265,   236,   237,   226,   335,   197,   236,   237,   158,   197,
     197,    32,   240,   230,   394,   233,   359,   247,   527,    38,
     275,   249,   528,   537,   538,   258,   133,   134,   197,   160,
     161,   187,   389,   197,   425,   375,   289,   574,   286,   287,
     380,    56,   569,    58,   579,   580,   581,   348,   349,   350,
     197,   302,   287,   197,   248,   197,   254,   257,   250,   255,
     395,   260,   396,   259,   531,   261,   187,   426,   187,   218,
     189,   266,   388,   271,   197,  -258,   330,   212,    32,   312,
     313,   416,  -259,   452,   503,   504,    38,   276,   197,   273,
     274,   282,   187,   283,   197,   427,   295,   345,   187,   294,
     296,   347,   297,   298,   238,   160,   161,   162,   163,   188,
     301,   361,   305,    32,   306,    32,   228,   137,   138,   139,
     140,    38,   309,    38,   564,   315,   266,   335,   320,   311,
     187,   378,   321,   324,   628,   325,   326,   189,   212,    32,
     327,   328,   332,   387,   188,    32,   188,    38,    56,    57,
      58,    59,   333,    38,   340,   343,   346,   398,   376,   382,
     239,   379,   399,   335,   385,   397,   404,   461,   287,   423,
     188,   407,   189,   414,   189,   410,   569,    32,   475,    65,
      66,   478,   422,   418,   564,    38,   564,   433,   430,    39,
     477,   439,   440,   444,   447,   448,   450,   460,   189,   212,
     361,   476,   467,   469,   189,   473,   197,   474,   188,   482,
      56,    57,    58,    59,   481,   495,   462,   511,   506,     2,
     512,     3,   351,   513,   217,   517,   515,   523,   518,   522,
     197,   215,   520,   524,   525,   526,   189,   532,   197,   530,
     533,    65,    66,   535,   542,    20,   539,   545,   575,   466,
     547,   548,   549,   552,   543,   504,   558,   567,   576,   272,
     541,   577,   197,   582,   592,   594,   596,   606,   480,    35,
     599,   484,   551,   607,   544,    39,   197,    40,    41,    42,
      43,   610,   197,   427,   197,   613,   615,   614,   458,   570,
     422,   197,   197,   197,   616,   618,   625,    55,   622,    56,
      57,    58,    59,   626,   627,    60,   611,   630,   218,   631,
      69,    61,    62,    63,    64,   602,   604,   624,   605,   556,
     586,   587,   568,   588,   361,   227,   584,   491,   593,   519,
      65,    66,   409,   595,    67,   486,   290,   534,   269,   197,
     285,   355,   319,   352,   308,   420,   570,   589,   609,   507,
     366,   617,   364,   371,   365,   373,     0,   367,   446,   368,
       0,     0,     0,     0,     0,   369,     0,   370,   612,     0,
       0,   620,   372,     0,   374,     0,     0,     0,     0,   621,
     619,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,     0,     0,
       0,     0,   228,     0,     1,     0,     2,     0,     3,     0,
     632,     4,   591,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     156,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    65,    66,     4,   280,    67,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,    65,    66,     4,   334,    67,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,     0,     0,    37,     0,    38,    39,     0,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,    65,    66,     4,   443,    67,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,     0,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,     0,     0,     4,    65,
      66,     6,     7,    67,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     1,
       0,     2,     0,     3,     0,     0,   129,   603,     5,     6,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    35,     0,    36,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     1,     0,     2,
       0,     3,     0,     0,   129,     0,     5,     6,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,    32,     0,     0,    35,
       0,    36,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     1,     0,     2,     0,     3,
       0,     0,   129,     0,     0,     6,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    35,     0,     0,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,   176,     0,     2,     0,     3,     0,     0,
     129,     0,     0,     6,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       0,   129,    32,     0,     6,    35,     0,     0,     0,     0,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,    32,     0,     0,    35,    61,    62,    63,
      64,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     2,   128,     3,     0,     0,   129,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   130,    56,   131,    58,   132,   133,   134,    60,     0,
     135,     0,     0,     0,    61,    62,    63,    64,     0,     0,
     136,   137,   138,   139,   140,   141,   142,   143,     0,     0,
       0,     0,     0,    65,    66,   144,   145,    67,     2,     0,
       3,     0,     0,   129,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,   129,    32,     0,     6,    35,     0,
       0,     0,     0,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,   210,   211,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,    32,     0,     0,    35,
      61,    62,    63,    64,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,   153,     0,
       0,    61,    62,    63,    64,     2,     0,     3,     0,     0,
     129,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   386,
       0,   129,    32,     0,     6,    35,     0,     0,     0,   329,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,    32,     0,     0,    35,    61,    62,    63,
      64,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     2,     0,     3,   421,     0,   129,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,   465,     3,     0,     0,   129,    32,
       0,     6,    35,     0,     0,     0,     0,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
      32,     0,     0,    35,    61,    62,    63,    64,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     2,
     479,     3,     0,     0,   129,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,   505,     0,   129,    32,     0,     6,    35,
       0,     0,     0,     0,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,    32,     0,     0,
      35,    61,    62,    63,    64,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     2,     0,     3,   583,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,   129,    32,     0,     6,    35,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,    32,     0,     0,    35,    61,    62,
      63,    64,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     2,     0,     3,     0,     0,   129,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,   129,     0,
      32,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,    35,     0,    61,    62,    63,    64,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,   354,     0,    65,    66,     0,     0,    67,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
     130,    56,   256,    58,   258,   133,   134,     0,     0,   135,
       0,     0,     0,     0,    65,    66,     0,     0,    67,   136,
     137,   138,   139,   140,   141,   142,   143,     0,     0,     0,
       0,     0,     0,     0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    63,    69,     4,   172,    61,   196,    25,
      19,   114,   116,   283,   115,   244,    92,   245,   117,   413,
     101,   210,   192,     5,   239,    34,   183,   125,   325,     5,
       5,     5,     4,    15,   502,     4,     4,    60,    61,     4,
       3,   500,    11,   500,    60,     4,     8,    38,    30,    31,
       6,    63,    83,     6,    62,    63,    53,     6,    53,    83,
       4,    83,     5,    11,     8,   305,     3,    76,    61,   537,
      94,     6,    92,    10,     3,    23,    96,     4,   101,     2,
       3,    10,   271,    10,   324,   101,    83,   111,    83,   111,
      83,    14,    83,    16,   114,    84,    78,    86,    61,   493,
       5,   560,   496,   562,   333,   562,     3,    83,    83,    83,
     122,     3,   120,    10,     5,   355,   356,   414,    10,   359,
      43,    93,    94,   105,    93,     5,    94,   293,    93,   317,
     129,    16,    94,    18,    93,   111,   351,    93,   308,   354,
      93,    64,   240,   332,    93,   302,   118,   119,   157,   118,
     119,   103,     3,   118,   119,    38,   108,   238,    93,   118,
     119,   221,   118,   119,   224,   118,   119,   109,   110,   118,
     119,     5,   171,     7,     5,   229,   416,     4,   201,     6,
      11,   241,    83,   118,   119,   201,    93,    94,    24,   243,
      26,    93,     4,   433,    23,     4,     8,     6,    27,    83,
      36,   471,    83,   263,   598,   187,   229,   447,     8,     9,
      44,   118,   119,     0,   217,   238,   118,   119,   217,   242,
     243,    52,   238,     5,   284,     3,   242,   102,   457,    60,
     153,   113,   460,   473,   474,    88,    89,    90,   261,    37,
      38,     5,     6,   266,   320,   261,   169,   517,    41,    42,
     266,    85,    83,    87,   524,   525,   526,   235,   236,   237,
     283,    41,    42,   286,   112,   288,   369,   371,   111,   370,
     286,    95,   288,   372,   462,    91,     5,     6,     5,    94,
     111,   115,   281,    66,   307,     6,   209,   210,    52,    92,
      93,   307,     6,   353,     3,     4,    60,    94,   321,     6,
       6,    11,     5,     5,   327,   321,    10,   230,     5,    83,
      83,   234,     3,    32,    41,    37,    38,    39,    40,    83,
      83,   244,    83,    52,    83,    52,   335,   104,   105,   106,
     107,    60,    94,    60,   500,     7,   115,   340,    83,    44,
       5,   264,     5,    83,   614,    94,    83,   111,   271,    52,
       5,    83,    67,   276,    83,    52,    83,    60,    85,    86,
      87,    88,     5,    60,    10,   101,     3,   290,    10,     5,
      97,    83,     4,   376,     8,     6,    23,   376,    42,     7,
      83,    10,   111,    94,   111,   115,    83,    52,   397,   116,
     117,   400,   315,    83,   560,    60,   562,    83,    31,    61,
     399,     5,    59,    83,    83,     6,     3,    94,   111,   332,
     333,     3,     8,    83,   111,    83,   439,    83,    83,    13,
      85,    86,    87,    88,    83,    43,     8,    83,     3,     5,
      83,     7,    97,     3,    10,     4,    10,     3,     6,   448,
     463,   495,     6,     5,     5,     5,   111,   463,   471,     7,
       6,   116,   117,    94,     6,    31,    15,    24,   518,   382,
      25,   119,     4,     8,    94,     4,    10,    83,     6,   468,
     479,    24,   495,     6,    94,    83,    11,     3,   401,    55,
      10,   404,   491,    83,   483,    61,   509,    63,    64,    65,
      66,    79,   515,   509,   517,     3,     6,     4,    83,   515,
     423,   524,   525,   526,     6,     3,    11,    83,     8,    85,
      86,    87,    88,     6,     3,    91,   576,    11,    94,     6,
       0,    97,    98,    99,   100,   560,   562,   599,   566,   495,
     539,   540,   509,   542,   457,   600,   535,   408,   547,   439,
     116,   117,   300,   549,   120,   406,   170,   468,   125,   572,
     167,   240,   197,   238,   189,   311,   572,   543,   572,   427,
     248,   582,   246,   255,   247,   259,    -1,   249,   339,   250,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   254,   577,    -1,
      -1,   590,   257,    -1,   260,    -1,    -1,    -1,    -1,   592,
     589,   614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,
      -1,    -1,   621,    -1,     3,    -1,     5,    -1,     7,    -1,
     629,    10,   545,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   116,   117,    10,
      11,   120,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   116,   117,    10,    11,   120,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,   116,   117,    10,    11,   120,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,   116,   117,    10,    11,   120,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,   116,
     117,    13,    14,   120,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    57,    58,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    57,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,    99,
     100,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,    -1,    -1,
      -1,    -1,    -1,   116,   117,   118,   119,   120,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,
      97,    98,    99,   100,    60,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    97,    98,    99,   100,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,    59,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,    99,
     100,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    10,    52,
      -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      52,    -1,    -1,    55,    97,    98,    99,   100,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,    -1,    10,    52,    -1,    13,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,    -1,
      55,    97,    98,    99,   100,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,     5,    -1,     7,     8,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,
      99,   100,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    55,    -1,    97,    98,    99,   100,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      63,    64,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    83,    85,    86,    87,    88,
      91,    97,    98,    99,   100,   116,   117,   120,   128,   129,
     130,   132,   138,   139,   140,   143,   147,   152,   154,   155,
     165,   167,   168,   169,   171,   175,   180,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   199,   201,   212,
     213,   216,   217,   218,   225,   227,   230,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   256,   259,   260,   261,   263,   268,     6,    10,
      84,    86,    88,    89,    90,    93,   103,   104,   105,   106,
     107,   108,   109,   110,   118,   119,   192,   195,   214,   235,
     236,   237,   238,    94,   192,   239,    11,   147,   193,   198,
      37,    38,    39,    40,   151,   205,   207,   208,   209,     5,
     168,     5,     5,     5,   192,   209,     3,   192,   168,    83,
     176,     3,   131,   209,   131,   205,   206,     5,    83,   111,
     156,   158,   219,   220,   221,   223,   224,   225,   205,   131,
     148,   209,   209,    83,   168,    83,   255,    83,   205,    83,
      80,    81,   192,   262,   158,   156,   157,    10,    94,   166,
     254,   266,   166,   254,   266,   192,     0,   130,   168,   209,
       5,     3,   139,     3,     4,    93,   118,   119,    41,    97,
     158,   215,   253,   209,    92,    96,   114,   102,   112,   113,
     111,   103,   108,   234,   235,   236,    86,   237,    88,   238,
      95,    91,   254,   266,     7,    44,   115,   194,   196,   199,
     259,    66,   193,     6,     6,   192,    94,     8,     9,   267,
      11,    94,    11,     5,   202,   207,    41,    42,   210,   192,
     185,    83,   193,   191,    83,    10,    83,     3,    32,   172,
     174,    83,    41,   210,   211,    83,    83,   209,   219,    94,
     194,    44,    92,    93,   222,     7,   196,   197,   200,   223,
      83,     5,   203,   158,    83,    94,    83,     5,    83,    59,
     192,   262,    67,     5,    11,   147,    83,   111,   264,   265,
      10,   166,   166,   101,   156,   192,     3,   192,   201,   201,
     201,    97,   215,   202,    56,   214,   259,     3,   166,   158,
     156,   192,   239,   240,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   158,    10,   166,   192,    83,
     158,   257,     5,   258,   262,     8,     8,   192,   193,     6,
     158,   159,   160,     3,   166,   158,   158,     6,   192,     4,
       6,   191,     4,    94,    23,   182,   183,    10,   173,   172,
     115,   204,   210,   204,    94,   142,   158,   194,    83,   145,
     221,     8,   192,     7,   196,   139,     6,   158,   163,   164,
      31,   149,   150,    83,   204,   145,   159,   161,   162,     5,
      59,   262,   239,    11,    83,    94,   264,    83,     6,   202,
       3,     3,   166,   202,   204,   204,   204,     5,    83,   231,
      94,   193,     8,     4,     8,     6,   192,     8,     4,    83,
     232,     4,     6,    83,    83,   168,     3,   193,   168,     6,
     192,    83,    13,   226,   192,    11,   182,    61,    83,   178,
     179,   176,    53,    83,   146,    43,   141,   142,   145,     3,
      10,   137,   204,     3,     4,     8,     3,   232,   233,     4,
       6,    83,    83,     3,   204,    10,    10,     4,     6,   162,
       6,   204,   168,     3,     5,     5,     5,   239,   240,    11,
       7,   196,   158,     6,   198,    94,   159,   204,   204,    15,
       6,   168,     6,    94,   193,    24,   181,    25,   119,     4,
     177,   168,     8,   142,     4,     8,   157,   142,    10,   133,
     134,   135,   136,   167,   191,   218,   203,    83,   163,    83,
     158,   228,   229,   170,   159,   166,     6,    24,   153,   159,
     159,   159,     6,     8,   193,   203,   168,   168,   168,   226,
       6,   192,    94,   168,    83,   178,    11,    53,    83,    10,
     129,   144,   133,    11,   135,   150,     3,    83,    11,   228,
      79,   166,   193,     3,     4,     6,     6,   231,     3,   193,
     168,   147,     8,   142,   144,    11,     6,     3,   159,     6,
      11,     6,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     139,   140,   141,   141,   142,   142,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   150,
     151,   152,   153,   153,   154,   154,   155,   156,   156,   157,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     170,   169,   171,   173,   172,   174,   174,   175,   176,   176,
     177,   177,   178,   178,   179,   179,   180,   181,   181,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   186,   186,
     186,   186,   186,   186,   187,   188,   188,   189,   189,   190,
     190,   190,   190,   191,   191,   192,   192,   193,   193,   193,
     193,   194,   194,   195,   195,   195,   195,   195,   196,   196,
     196,   197,   197,   197,   198,   198,   199,   199,   199,   200,
     200,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     204,   204,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   209,   209,   210,   210,   211,   211,   212,   212,   212,
     212,   213,   214,   214,   214,   214,   214,   215,   215,   215,
     215,   216,   216,   217,   217,   217,   218,   218,   218,   218,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     222,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   229,   229,   230,   231,   232,   233,   233,   234,
     234,   235,   235,   235,   235,   236,   236,   237,   237,   238,
     238,   238,   239,   239,   240,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   251,   251,   252,
     252,   253,   253,   253,   253,   253,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   261,   261,
     261,   261,   261,   261,   262,   262,   262,   263,   263,   264,
     264,   265,   265,   266,   266,   267,   267,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     9,     8,     1,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     5,
       1,     5,     2,     0,     0,     2,     5,     1,     0,     1,
       3,     2,     4,     1,     2,     4,     2,     2,     0,     1,
       5,     5,     0,     2,     1,     1,     7,     2,     1,     1,
       1,     4,     2,     1,     3,     1,     3,     1,     0,     2,
       1,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     2,     0,     4,     1,     2,     3,     1,     0,
       1,     0,     1,     3,     1,     3,     7,     2,     0,     5,
       1,     2,     7,     5,     1,     1,     5,     5,     6,     7,
       8,    10,     5,     7,     2,     5,     7,     1,     1,     3,
       2,     3,     2,     2,     1,     1,     3,     1,     3,     3,
       3,     3,     0,     1,     1,     1,     1,     1,     3,     4,
       5,     2,     3,     2,     3,     5,     5,     4,     4,     1,
       1,     1,     4,     7,     3,     2,     3,     2,     3,     5,
       3,     0,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     0,     2,     1,     4,     4,     7,
       6,     8,     1,     1,     1,     1,     1,     8,     6,     6,
       3,     1,     2,     3,     3,     4,     1,     1,     1,     4,
       4,     5,     1,     7,     2,     3,     1,     3,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       2,     3,     1,     2,     7,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     5,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       5,     2,     2,     2,     3,     3,     2,     1,     2,     2,
       1,     1,     3,     3,     2,     1,     1,     3,     1,     2,
       2,     3,     2,     1,     1,     2,     3,     2,     3,     1,
       2,     1,     2,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       5,     3,     2,     2
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
#line 185 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2590 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 186 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2596 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 189 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2605 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 193 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2614 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2620 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 200 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2626 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 201 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2632 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2638 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2644 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 204 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2650 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 205 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2656 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 206 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2662 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 207 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2668 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 208 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2674 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 211 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2680 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 214 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2691 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 221 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2703 "src/parser.c"
    break;

  case 19: /* trait_stmt: exp_stmt  */
#line 229 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2713 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt  */
#line 234 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2722 "src/parser.c"
    break;

  case 22: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 238 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2731 "src/parser.c"
    break;

  case 23: /* trait_section: trait_stmt_list  */
#line 244 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2737 "src/parser.c"
    break;

  case 24: /* trait_section: func_def  */
#line 245 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2743 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_section  */
#line 249 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2752 "src/parser.c"
    break;

  case 26: /* trait_ast: trait_ast trait_section  */
#line 253 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2761 "src/parser.c"
    break;

  case 27: /* trait_body: "{" trait_ast "}"  */
#line 258 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2767 "src/parser.c"
    break;

  case 28: /* trait_body: ";"  */
#line 258 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2773 "src/parser.c"
    break;

  case 29: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 261 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2782 "src/parser.c"
    break;

  case 30: /* number: NUM  */
#line 266 "src/gwion.y"
            {
  if((yyvsp[0].lval) > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.lval) = (yyvsp[0].lval);
}
#line 2793 "src/parser.c"
    break;

  case 31: /* prim_def: "primitive" class_flag "<identifier>" number ";"  */
#line 274 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].lval), (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2801 "src/parser.c"
    break;

  case 32: /* class_ext: "extends" type_decl_exp  */
#line 277 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2807 "src/parser.c"
    break;

  case 33: /* class_ext: %empty  */
#line 277 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2813 "src/parser.c"
    break;

  case 34: /* traits: %empty  */
#line 278 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2819 "src/parser.c"
    break;

  case 35: /* traits: ":" id_list  */
#line 278 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2825 "src/parser.c"
    break;

  case 36: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 280 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2833 "src/parser.c"
    break;

  case 38: /* class_body: %empty  */
#line 285 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2839 "src/parser.c"
    break;

  case 39: /* id_list: "<identifier>"  */
#line 288 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2848 "src/parser.c"
    break;

  case 40: /* id_list: id_list "," "<identifier>"  */
#line 293 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2857 "src/parser.c"
    break;

  case 41: /* specialized_list: "<identifier>" traits  */
#line 298 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2870 "src/parser.c"
    break;

  case 42: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 306 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2880 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt  */
#line 312 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2889 "src/parser.c"
    break;

  case 44: /* stmt_list: stmt_list stmt  */
#line 316 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2898 "src/parser.c"
    break;

  case 45: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 321 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2905 "src/parser.c"
    break;

  case 46: /* _func_effects: "perform" "<identifier>"  */
#line 324 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2911 "src/parser.c"
    break;

  case 47: /* _func_effects: _func_effects "<identifier>"  */
#line 324 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2917 "src/parser.c"
    break;

  case 48: /* func_effects: %empty  */
#line 325 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2923 "src/parser.c"
    break;

  case 49: /* func_effects: _func_effects  */
#line 325 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2929 "src/parser.c"
    break;

  case 50: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 327 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2936 "src/parser.c"
    break;

  case 51: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 330 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2946 "src/parser.c"
    break;

  case 52: /* typedef_when: %empty  */
#line 336 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2952 "src/parser.c"
    break;

  case 53: /* typedef_when: "when" binary_exp  */
#line 336 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2958 "src/parser.c"
    break;

  case 54: /* type_def_type: "typedef"  */
#line 337 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2964 "src/parser.c"
    break;

  case 55: /* type_def_type: "distinct"  */
#line 337 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2970 "src/parser.c"
    break;

  case 56: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 338 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2983 "src/parser.c"
    break;

  case 57: /* type_decl_array: type_decl array  */
#line 347 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2989 "src/parser.c"
    break;

  case 59: /* type_decl_exp: type_decl_array  */
#line 349 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2997 "src/parser.c"
    break;

  case 60: /* type_decl_empty: type_decl_array  */
#line 353 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3005 "src/parser.c"
    break;

  case 61: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 358 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 3014 "src/parser.c"
    break;

  case 62: /* arg: type_decl_empty arg_decl  */
#line 362 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 3023 "src/parser.c"
    break;

  case 63: /* arg_list: arg  */
#line 367 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3033 "src/parser.c"
    break;

  case 64: /* arg_list: arg_list "," arg  */
#line 372 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3045 "src/parser.c"
    break;

  case 65: /* locale_arg: arg  */
#line 381 "src/gwion.y"
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
#line 3061 "src/parser.c"
    break;

  case 66: /* locale_arg: locale_arg "," arg  */
#line 392 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3073 "src/parser.c"
    break;

  case 68: /* locale_list: %empty  */
#line 401 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3087 "src/parser.c"
    break;

  case 69: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 411 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3093 "src/parser.c"
    break;

  case 70: /* fptr_list: fptr_arg  */
#line 413 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3102 "src/parser.c"
    break;

  case 71: /* fptr_list: fptr_list "," fptr_arg  */
#line 417 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3111 "src/parser.c"
    break;

  case 72: /* code_stmt: "{" "}"  */
#line 423 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3118 "src/parser.c"
    break;

  case 73: /* code_stmt: "{" stmt_list "}"  */
#line 425 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3125 "src/parser.c"
    break;

  case 74: /* code_list: "{" "}"  */
#line 429 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3131 "src/parser.c"
    break;

  case 75: /* code_list: "{" stmt_list "}"  */
#line 430 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3137 "src/parser.c"
    break;

  case 76: /* stmt_pp: "<comment>"  */
#line 433 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3143 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#include"  */
#line 434 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3149 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#define"  */
#line 435 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3155 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#pragma"  */
#line 436 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3161 "src/parser.c"
    break;

  case 80: /* stmt_pp: "#undef"  */
#line 437 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3167 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#ifdef"  */
#line 438 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3173 "src/parser.c"
    break;

  case 82: /* stmt_pp: "#ifndef"  */
#line 439 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3179 "src/parser.c"
    break;

  case 83: /* stmt_pp: "#else"  */
#line 440 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3185 "src/parser.c"
    break;

  case 84: /* stmt_pp: "#if"  */
#line 441 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3191 "src/parser.c"
    break;

  case 85: /* stmt_pp: "\n"  */
#line 442 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3197 "src/parser.c"
    break;

  case 86: /* stmt_pp: "import"  */
#line 443 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3203 "src/parser.c"
    break;

  case 87: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 444 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3210 "src/parser.c"
    break;

  case 88: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 446 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3217 "src/parser.c"
    break;

  case 100: /* $@1: %empty  */
#line 463 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3223 "src/parser.c"
    break;

  case 101: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 463 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3237 "src/parser.c"
    break;

  case 102: /* retry_stmt: "retry" ";"  */
#line 473 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3247 "src/parser.c"
    break;

  case 103: /* $@2: %empty  */
#line 478 "src/gwion.y"
                  { arg->handling = true; }
#line 3253 "src/parser.c"
    break;

  case 104: /* handler: "handle" $@2 opt_id stmt  */
#line 478 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3259 "src/parser.c"
    break;

  case 105: /* handler_list: handler  */
#line 479 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3269 "src/parser.c"
    break;

  case 106: /* handler_list: handler_list handler  */
#line 484 "src/gwion.y"
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
#line 3290 "src/parser.c"
    break;

  case 107: /* try_stmt: "try" stmt handler_list  */
#line 500 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3299 "src/parser.c"
    break;

  case 109: /* opt_id: %empty  */
#line 505 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3305 "src/parser.c"
    break;

  case 111: /* opt_comma: %empty  */
#line 506 "src/gwion.y"
                 {}
#line 3311 "src/parser.c"
    break;

  case 112: /* enum_value: "<identifier>"  */
#line 509 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .xid = (yyvsp[0].sym) }; }
#line 3317 "src/parser.c"
    break;

  case 113: /* enum_value: NUM "<dynamic_operator>" "<identifier>"  */
#line 510 "src/gwion.y"
                                        { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.xid = (yyvsp[0].sym), .num = (yyvsp[-2].lval), .set = true };
          }
#line 3328 "src/parser.c"
    break;

  case 114: /* enum_list: enum_value  */
#line 517 "src/gwion.y"
  {
    (yyval.enum_list) = new_mp_vector(mpool(arg), EnumValue, 1);
    mp_vector_set((yyval.enum_list), EnumValue, 0, (yyvsp[0].enum_value));
  }
#line 3337 "src/parser.c"
    break;

  case 115: /* enum_list: enum_list "," enum_value  */
#line 522 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].enum_list), EnumValue, (yyvsp[0].enum_value));
    (yyval.enum_list) = (yyvsp[-2].enum_list);
  }
#line 3346 "src/parser.c"
    break;

  case 116: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 527 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3355 "src/parser.c"
    break;

  case 117: /* when_exp: "when" exp  */
#line 532 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3361 "src/parser.c"
    break;

  case 118: /* when_exp: %empty  */
#line 532 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3367 "src/parser.c"
    break;

  case 119: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 535 "src/gwion.y"
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
#line 3383 "src/parser.c"
    break;

  case 120: /* match_list: match_case_stmt  */
#line 547 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3392 "src/parser.c"
    break;

  case 121: /* match_list: match_list match_case_stmt  */
#line 551 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3401 "src/parser.c"
    break;

  case 122: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 556 "src/gwion.y"
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
#line 3416 "src/parser.c"
    break;

  case 123: /* match_stmt: "match" exp "{" match_list "}"  */
#line 567 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3430 "src/parser.c"
    break;

  case 124: /* flow: "while"  */
#line 578 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3436 "src/parser.c"
    break;

  case 125: /* flow: "until"  */
#line 579 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3442 "src/parser.c"
    break;

  case 126: /* loop_stmt: flow "(" exp ")" stmt  */
#line 584 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3455 "src/parser.c"
    break;

  case 127: /* loop_stmt: "do" stmt flow exp ";"  */
#line 593 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3469 "src/parser.c"
    break;

  case 128: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 603 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3483 "src/parser.c"
    break;

  case 129: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 613 "src/gwion.y"
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
#line 3498 "src/parser.c"
    break;

  case 130: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 624 "src/gwion.y"
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
#line 3515 "src/parser.c"
    break;

  case 131: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 637 "src/gwion.y"
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
#line 3537 "src/parser.c"
    break;

  case 132: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 655 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3550 "src/parser.c"
    break;

  case 133: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 664 "src/gwion.y"
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
#line 3567 "src/parser.c"
    break;

  case 134: /* defer_stmt: "defer" stmt  */
#line 677 "src/gwion.y"
                         {
    const loc_t loc = defer_stmt(&(yyvsp[0].stmt));
    if(loc.first.line) {
      // defer could maybe return the position
      parser_error(&loc, arg, "return statement in defer", 0x0209);
      YYERROR;
    }
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_defer,
    .d = { .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }},
    .pos = (yylsp[-1])
  };
}
#line 3584 "src/parser.c"
    break;

  case 135: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 692 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3597 "src/parser.c"
    break;

  case 136: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 701 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3611 "src/parser.c"
    break;

  case 137: /* breaks: "break"  */
#line 711 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3617 "src/parser.c"
    break;

  case 138: /* breaks: "continue"  */
#line 711 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3623 "src/parser.c"
    break;

  case 139: /* jump_stmt: "return" exp ";"  */
#line 713 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3633 "src/parser.c"
    break;

  case 140: /* jump_stmt: "return" ";"  */
#line 718 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3642 "src/parser.c"
    break;

  case 141: /* jump_stmt: breaks number ";"  */
#line 722 "src/gwion.y"
                        { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3652 "src/parser.c"
    break;

  case 142: /* jump_stmt: breaks ";"  */
#line 727 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3661 "src/parser.c"
    break;

  case 143: /* exp_stmt: exp ";"  */
#line 733 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3671 "src/parser.c"
    break;

  case 144: /* exp_stmt: ";"  */
#line 738 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3680 "src/parser.c"
    break;

  case 145: /* exp: binary_exp  */
#line 744 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3686 "src/parser.c"
    break;

  case 146: /* exp: binary_exp "," exp  */
#line 746 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3698 "src/parser.c"
    break;

  case 148: /* binary_exp: binary_exp "@" decl_exp  */
#line 757 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3704 "src/parser.c"
    break;

  case 149: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 758 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3710 "src/parser.c"
    break;

  case 150: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 759 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3716 "src/parser.c"
    break;

  case 151: /* call_template: ":[" type_list "]"  */
#line 762 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3722 "src/parser.c"
    break;

  case 152: /* call_template: %empty  */
#line 762 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3728 "src/parser.c"
    break;

  case 158: /* array_exp: "[" exp "]"  */
#line 767 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3734 "src/parser.c"
    break;

  case 159: /* array_exp: "[" exp "]" array_exp  */
#line 768 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3742 "src/parser.c"
    break;

  case 160: /* array_exp: "[" exp "]" "[" "]"  */
#line 771 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3748 "src/parser.c"
    break;

  case 161: /* array_empty: "[" "]"  */
#line 775 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3754 "src/parser.c"
    break;

  case 162: /* array_empty: array_empty "[" "]"  */
#line 776 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3760 "src/parser.c"
    break;

  case 163: /* array_empty: array_empty array_exp  */
#line 777 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3766 "src/parser.c"
    break;

  case 164: /* dict_list: binary_exp ":" binary_exp  */
#line 781 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3772 "src/parser.c"
    break;

  case 165: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 782 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3778 "src/parser.c"
    break;

  case 166: /* range: "[" exp ":" exp "]"  */
#line 785 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3784 "src/parser.c"
    break;

  case 167: /* range: "[" exp ":" "]"  */
#line 786 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3790 "src/parser.c"
    break;

  case 168: /* range: "[" ":" exp "]"  */
#line 787 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3796 "src/parser.c"
    break;

  case 172: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 793 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3802 "src/parser.c"
    break;

  case 173: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 794 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3812 "src/parser.c"
    break;

  case 174: /* func_args: "(" arg_list ")"  */
#line 800 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3818 "src/parser.c"
    break;

  case 175: /* func_args: "(" ")"  */
#line 800 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3824 "src/parser.c"
    break;

  case 176: /* fptr_args: "(" fptr_list ")"  */
#line 801 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3830 "src/parser.c"
    break;

  case 177: /* fptr_args: "(" ")"  */
#line 801 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3836 "src/parser.c"
    break;

  case 178: /* decl_template: ":[" specialized_list "]"  */
#line 803 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3842 "src/parser.c"
    break;

  case 179: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 804 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3853 "src/parser.c"
    break;

  case 180: /* decl_template: ":[" "..." "]"  */
#line 810 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3863 "src/parser.c"
    break;

  case 181: /* decl_template: %empty  */
#line 815 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3869 "src/parser.c"
    break;

  case 182: /* global: "global"  */
#line 817 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3875 "src/parser.c"
    break;

  case 184: /* opt_global: %empty  */
#line 818 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3881 "src/parser.c"
    break;

  case 185: /* storage_flag: "static"  */
#line 820 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3887 "src/parser.c"
    break;

  case 187: /* access_flag: "private"  */
#line 822 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3893 "src/parser.c"
    break;

  case 188: /* access_flag: "protect"  */
#line 823 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3899 "src/parser.c"
    break;

  case 189: /* flag: access_flag  */
#line 826 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3905 "src/parser.c"
    break;

  case 190: /* flag: storage_flag  */
#line 827 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3911 "src/parser.c"
    break;

  case 191: /* flag: access_flag storage_flag  */
#line 828 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3917 "src/parser.c"
    break;

  case 192: /* flag: %empty  */
#line 829 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3923 "src/parser.c"
    break;

  case 193: /* final: "final"  */
#line 832 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3929 "src/parser.c"
    break;

  case 194: /* final: %empty  */
#line 832 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3935 "src/parser.c"
    break;

  case 195: /* modifier: "abstract" final  */
#line 834 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3941 "src/parser.c"
    break;

  case 197: /* func_def_base: "fun" func_base func_args code_list  */
#line 837 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3951 "src/parser.c"
    break;

  case 198: /* func_def_base: "fun" func_base func_args ";"  */
#line 842 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3963 "src/parser.c"
    break;

  case 199: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 849 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3974 "src/parser.c"
    break;

  case 200: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 855 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3985 "src/parser.c"
    break;

  case 201: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 864 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3997 "src/parser.c"
    break;

  case 207: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 875 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 4011 "src/parser.c"
    break;

  case 208: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 885 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4024 "src/parser.c"
    break;

  case 209: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 894 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4038 "src/parser.c"
    break;

  case 210: /* op_base: type_decl_empty OPID_A func_args  */
#line 904 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4047 "src/parser.c"
    break;

  case 211: /* operator: "operator"  */
#line 909 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4053 "src/parser.c"
    break;

  case 212: /* operator: "operator" global  */
#line 909 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4059 "src/parser.c"
    break;

  case 213: /* op_def: operator op_base code_list  */
#line 912 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4065 "src/parser.c"
    break;

  case 214: /* op_def: operator op_base ";"  */
#line 914 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4071 "src/parser.c"
    break;

  case 215: /* op_def: operator "abstract" op_base ";"  */
#line 916 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4077 "src/parser.c"
    break;

  case 219: /* func_def: operator "new" func_args code_list  */
#line 920 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4087 "src/parser.c"
    break;

  case 220: /* func_def: operator "new" func_args ";"  */
#line 926 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4098 "src/parser.c"
    break;

  case 221: /* func_def: operator "abstract" "new" func_args ";"  */
#line 933 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4109 "src/parser.c"
    break;

  case 222: /* type_decl_base: "<identifier>"  */
#line 941 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4115 "src/parser.c"
    break;

  case 223: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 942 "src/gwion.y"
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
#line 4131 "src/parser.c"
    break;

  case 224: /* type_decl_tmpl: type_decl_base call_template  */
#line 956 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4137 "src/parser.c"
    break;

  case 225: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 957 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4143 "src/parser.c"
    break;

  case 227: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 962 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4149 "src/parser.c"
    break;

  case 228: /* option: "?"  */
#line 965 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4155 "src/parser.c"
    break;

  case 229: /* option: OPTIONS  */
#line 965 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4161 "src/parser.c"
    break;

  case 230: /* option: %empty  */
#line 965 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4167 "src/parser.c"
    break;

  case 231: /* type_decl_opt: type_decl_noflag option  */
#line 966 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4173 "src/parser.c"
    break;

  case 233: /* type_decl: type_decl_flag type_decl_opt  */
#line 967 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4179 "src/parser.c"
    break;

  case 234: /* type_decl_flag: "late"  */
#line 970 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4185 "src/parser.c"
    break;

  case 235: /* type_decl_flag: "const"  */
#line 971 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4191 "src/parser.c"
    break;

  case 236: /* opt_var: "var"  */
#line 973 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4197 "src/parser.c"
    break;

  case 237: /* opt_var: %empty  */
#line 973 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4203 "src/parser.c"
    break;

  case 238: /* type_decl_flag2: "var"  */
#line 975 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4209 "src/parser.c"
    break;

  case 240: /* union_decl: "<identifier>" ";"  */
#line 978 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4218 "src/parser.c"
    break;

  case 241: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 982 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4224 "src/parser.c"
    break;

  case 242: /* union_list: union_decl  */
#line 984 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4233 "src/parser.c"
    break;

  case 243: /* union_list: union_list union_decl  */
#line 988 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4242 "src/parser.c"
    break;

  case 244: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 994 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4254 "src/parser.c"
    break;

  case 245: /* var_decl: "<identifier>"  */
#line 1003 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4260 "src/parser.c"
    break;

  case 246: /* arg_decl: "<identifier>"  */
#line 1005 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4266 "src/parser.c"
    break;

  case 248: /* fptr_arg_decl: %empty  */
#line 1006 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4272 "src/parser.c"
    break;

  case 262: /* opt_exp: exp  */
#line 1014 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4278 "src/parser.c"
    break;

  case 263: /* opt_exp: %empty  */
#line 1014 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4284 "src/parser.c"
    break;

  case 265: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 1017 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4290 "src/parser.c"
    break;

  case 266: /* con_exp: log_or_exp "?:" con_exp  */
#line 1019 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4296 "src/parser.c"
    break;

  case 268: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 1021 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4302 "src/parser.c"
    break;

  case 270: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 1022 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4308 "src/parser.c"
    break;

  case 272: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1023 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4314 "src/parser.c"
    break;

  case 274: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1024 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4320 "src/parser.c"
    break;

  case 276: /* and_exp: and_exp "&" eq_exp  */
#line 1025 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4326 "src/parser.c"
    break;

  case 278: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1026 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4332 "src/parser.c"
    break;

  case 280: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1027 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4338 "src/parser.c"
    break;

  case 282: /* shift_exp: shift_exp shift_op add_exp  */
#line 1028 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4344 "src/parser.c"
    break;

  case 284: /* add_exp: add_exp add_op mul_exp  */
#line 1029 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4350 "src/parser.c"
    break;

  case 286: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1030 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4356 "src/parser.c"
    break;

  case 288: /* dur_exp: dur_exp "::" cast_exp  */
#line 1031 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4362 "src/parser.c"
    break;

  case 290: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1034 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4368 "src/parser.c"
    break;

  case 297: /* unary_exp: unary_op unary_exp  */
#line 1041 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4374 "src/parser.c"
    break;

  case 298: /* unary_exp: "spork" unary_exp  */
#line 1042 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4380 "src/parser.c"
    break;

  case 299: /* unary_exp: "fork" unary_exp  */
#line 1043 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4386 "src/parser.c"
    break;

  case 300: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1044 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4394 "src/parser.c"
    break;

  case 301: /* unary_exp: "new" type_decl_exp  */
#line 1047 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4400 "src/parser.c"
    break;

  case 302: /* unary_exp: "spork" code_list  */
#line 1048 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4406 "src/parser.c"
    break;

  case 303: /* unary_exp: "fork" code_list  */
#line 1049 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4412 "src/parser.c"
    break;

  case 304: /* unary_exp: "spork" captures code_list  */
#line 1050 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4418 "src/parser.c"
    break;

  case 305: /* unary_exp: "fork" captures code_list  */
#line 1051 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4424 "src/parser.c"
    break;

  case 306: /* unary_exp: "$" type_decl_empty  */
#line 1052 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4430 "src/parser.c"
    break;

  case 307: /* lambda_list: "<identifier>"  */
#line 1055 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4440 "src/parser.c"
    break;

  case 308: /* lambda_list: lambda_list "<identifier>"  */
#line 1060 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4450 "src/parser.c"
    break;

  case 309: /* lambda_arg: "\\" lambda_list  */
#line 1065 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4456 "src/parser.c"
    break;

  case 310: /* lambda_arg: "\\"  */
#line 1065 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4462 "src/parser.c"
    break;

  case 311: /* type_list: type_decl_empty  */
#line 1068 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4471 "src/parser.c"
    break;

  case 312: /* type_list: type_list "," type_decl_empty  */
#line 1072 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4480 "src/parser.c"
    break;

  case 313: /* call_paren: "(" exp ")"  */
#line 1078 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4486 "src/parser.c"
    break;

  case 314: /* call_paren: "(" ")"  */
#line 1078 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4492 "src/parser.c"
    break;

  case 317: /* dot_exp: post_exp "." "<identifier>"  */
#line 1082 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4505 "src/parser.c"
    break;

  case 319: /* post_exp: post_exp array_exp  */
#line 1093 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4511 "src/parser.c"
    break;

  case 320: /* post_exp: post_exp range  */
#line 1095 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4517 "src/parser.c"
    break;

  case 321: /* post_exp: post_exp call_template call_paren  */
#line 1097 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4524 "src/parser.c"
    break;

  case 322: /* post_exp: post_exp post_op  */
#line 1100 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4530 "src/parser.c"
    break;

  case 323: /* post_exp: dot_exp  */
#line 1101 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4536 "src/parser.c"
    break;

  case 324: /* interp_exp: "<interp string end>"  */
#line 1105 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4542 "src/parser.c"
    break;

  case 325: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1106 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4548 "src/parser.c"
    break;

  case 326: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1107 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4554 "src/parser.c"
    break;

  case 327: /* interp: "${" interp_exp  */
#line 1109 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4560 "src/parser.c"
    break;

  case 328: /* interp: interp "${" interp_exp  */
#line 1110 "src/gwion.y"
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
#line 4575 "src/parser.c"
    break;

  case 329: /* capture: "<identifier>"  */
#line 1121 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4581 "src/parser.c"
    break;

  case 330: /* capture: "&" "<identifier>"  */
#line 1121 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4587 "src/parser.c"
    break;

  case 331: /* _captures: capture  */
#line 1123 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4593 "src/parser.c"
    break;

  case 332: /* _captures: _captures capture  */
#line 1124 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4599 "src/parser.c"
    break;

  case 333: /* captures: ":" _captures ":"  */
#line 1125 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4605 "src/parser.c"
    break;

  case 334: /* captures: %empty  */
#line 1125 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4611 "src/parser.c"
    break;

  case 337: /* prim_exp: "<identifier>"  */
#line 1128 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4617 "src/parser.c"
    break;

  case 338: /* prim_exp: number  */
#line 1129 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4623 "src/parser.c"
    break;

  case 339: /* prim_exp: "<float>"  */
#line 1130 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4629 "src/parser.c"
    break;

  case 340: /* prim_exp: interp  */
#line 1131 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4635 "src/parser.c"
    break;

  case 341: /* prim_exp: "<litteral string>"  */
#line 1132 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4641 "src/parser.c"
    break;

  case 342: /* prim_exp: "<litteral char>"  */
#line 1133 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4647 "src/parser.c"
    break;

  case 343: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1134 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4660 "src/parser.c"
    break;

  case 344: /* prim_exp: "{" dict_list "}"  */
#line 1142 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4666 "src/parser.c"
    break;

  case 345: /* prim_exp: range  */
#line 1143 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4672 "src/parser.c"
    break;

  case 346: /* prim_exp: "<<<" exp ">>>"  */
#line 1144 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4678 "src/parser.c"
    break;

  case 347: /* prim_exp: "(" exp ")"  */
#line 1145 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4684 "src/parser.c"
    break;

  case 348: /* prim_exp: "`foo`"  */
#line 1146 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4695 "src/parser.c"
    break;

  case 349: /* prim_exp: lambda_arg captures code_list  */
#line 1152 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4701 "src/parser.c"
    break;

  case 350: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1153 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4707 "src/parser.c"
    break;

  case 351: /* prim_exp: "(" op_op ")"  */
#line 1154 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4713 "src/parser.c"
    break;

  case 352: /* prim_exp: "perform" opt_id  */
#line 1155 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4719 "src/parser.c"
    break;

  case 353: /* prim_exp: "(" ")"  */
#line 1156 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4725 "src/parser.c"
    break;


#line 4729 "src/parser.c"

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

#line 1158 "src/gwion.y"

#undef scan
ANN static int parser_error(const loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
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
