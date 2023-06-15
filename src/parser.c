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
  YYSYMBOL_INTEGER = 61,                   /* INTEGER  */
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
  YYSYMBOL_decimal = 140,                  /* decimal  */
  YYSYMBOL_prim_def = 141,                 /* prim_def  */
  YYSYMBOL_class_ext = 142,                /* class_ext  */
  YYSYMBOL_traits = 143,                   /* traits  */
  YYSYMBOL_extend_def = 144,               /* extend_def  */
  YYSYMBOL_class_body = 145,               /* class_body  */
  YYSYMBOL_id_list = 146,                  /* id_list  */
  YYSYMBOL_specialized_list = 147,         /* specialized_list  */
  YYSYMBOL_stmt_list = 148,                /* stmt_list  */
  YYSYMBOL_fptr_base = 149,                /* fptr_base  */
  YYSYMBOL__func_effects = 150,            /* _func_effects  */
  YYSYMBOL_func_effects = 151,             /* func_effects  */
  YYSYMBOL_func_base = 152,                /* func_base  */
  YYSYMBOL_fptr_def = 153,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 154,             /* typedef_when  */
  YYSYMBOL_type_def_type = 155,            /* type_def_type  */
  YYSYMBOL_type_def = 156,                 /* type_def  */
  YYSYMBOL_type_decl_array = 157,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 158,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 159,          /* type_decl_empty  */
  YYSYMBOL_arg = 160,                      /* arg  */
  YYSYMBOL_arg_list = 161,                 /* arg_list  */
  YYSYMBOL_locale_arg = 162,               /* locale_arg  */
  YYSYMBOL_locale_list = 163,              /* locale_list  */
  YYSYMBOL_fptr_arg = 164,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 165,                /* fptr_list  */
  YYSYMBOL_code_stmt = 166,                /* code_stmt  */
  YYSYMBOL_code_list = 167,                /* code_list  */
  YYSYMBOL_stmt_pp = 168,                  /* stmt_pp  */
  YYSYMBOL_stmt = 169,                     /* stmt  */
  YYSYMBOL_spread_stmt = 170,              /* spread_stmt  */
  YYSYMBOL_171_1 = 171,                    /* $@1  */
  YYSYMBOL_retry_stmt = 172,               /* retry_stmt  */
  YYSYMBOL_handler = 173,                  /* handler  */
  YYSYMBOL_174_2 = 174,                    /* $@2  */
  YYSYMBOL_handler_list = 175,             /* handler_list  */
  YYSYMBOL_try_stmt = 176,                 /* try_stmt  */
  YYSYMBOL_opt_id = 177,                   /* opt_id  */
  YYSYMBOL_opt_comma = 178,                /* opt_comma  */
  YYSYMBOL_enum_value = 179,               /* enum_value  */
  YYSYMBOL_enum_list = 180,                /* enum_list  */
  YYSYMBOL_enum_def = 181,                 /* enum_def  */
  YYSYMBOL_when_exp = 182,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 183,          /* match_case_stmt  */
  YYSYMBOL_match_list = 184,               /* match_list  */
  YYSYMBOL_match_stmt = 185,               /* match_stmt  */
  YYSYMBOL_flow = 186,                     /* flow  */
  YYSYMBOL_loop_stmt = 187,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 188,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 189,           /* selection_stmt  */
  YYSYMBOL_breaks = 190,                   /* breaks  */
  YYSYMBOL_jump_stmt = 191,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 192,                 /* exp_stmt  */
  YYSYMBOL_exp = 193,                      /* exp  */
  YYSYMBOL_binary_exp = 194,               /* binary_exp  */
  YYSYMBOL_call_template = 195,            /* call_template  */
  YYSYMBOL_op = 196,                       /* op  */
  YYSYMBOL_array_exp = 197,                /* array_exp  */
  YYSYMBOL_array_empty = 198,              /* array_empty  */
  YYSYMBOL_dict_list = 199,                /* dict_list  */
  YYSYMBOL_range = 200,                    /* range  */
  YYSYMBOL_array = 201,                    /* array  */
  YYSYMBOL_decl_exp = 202,                 /* decl_exp  */
  YYSYMBOL_func_args = 203,                /* func_args  */
  YYSYMBOL_fptr_args = 204,                /* fptr_args  */
  YYSYMBOL_decl_template = 205,            /* decl_template  */
  YYSYMBOL_global = 206,                   /* global  */
  YYSYMBOL_opt_global = 207,               /* opt_global  */
  YYSYMBOL_storage_flag = 208,             /* storage_flag  */
  YYSYMBOL_access_flag = 209,              /* access_flag  */
  YYSYMBOL_flag = 210,                     /* flag  */
  YYSYMBOL_final = 211,                    /* final  */
  YYSYMBOL_modifier = 212,                 /* modifier  */
  YYSYMBOL_func_def_base = 213,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 214,            /* abstract_fdef  */
  YYSYMBOL_op_op = 215,                    /* op_op  */
  YYSYMBOL_op_base = 216,                  /* op_base  */
  YYSYMBOL_operator = 217,                 /* operator  */
  YYSYMBOL_op_def = 218,                   /* op_def  */
  YYSYMBOL_func_def = 219,                 /* func_def  */
  YYSYMBOL_type_decl_base = 220,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 221,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 222,         /* type_decl_noflag  */
  YYSYMBOL_option = 223,                   /* option  */
  YYSYMBOL_type_decl_opt = 224,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 225,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 226,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 227,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 228,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 229,               /* union_decl  */
  YYSYMBOL_union_list = 230,               /* union_list  */
  YYSYMBOL_union_def = 231,                /* union_def  */
  YYSYMBOL_var_decl = 232,                 /* var_decl  */
  YYSYMBOL_arg_decl = 233,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 234,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 235,                    /* eq_op  */
  YYSYMBOL_rel_op = 236,                   /* rel_op  */
  YYSYMBOL_shift_op = 237,                 /* shift_op  */
  YYSYMBOL_add_op = 238,                   /* add_op  */
  YYSYMBOL_mul_op = 239,                   /* mul_op  */
  YYSYMBOL_opt_exp = 240,                  /* opt_exp  */
  YYSYMBOL_con_exp = 241,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 242,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 243,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 244,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 245,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 246,                  /* and_exp  */
  YYSYMBOL_eq_exp = 247,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 248,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 249,                /* shift_exp  */
  YYSYMBOL_add_exp = 250,                  /* add_exp  */
  YYSYMBOL_mul_exp = 251,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 252,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 253,                 /* cast_exp  */
  YYSYMBOL_unary_op = 254,                 /* unary_op  */
  YYSYMBOL_unary_exp = 255,                /* unary_exp  */
  YYSYMBOL_lambda_list = 256,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 257,               /* lambda_arg  */
  YYSYMBOL_type_list = 258,                /* type_list  */
  YYSYMBOL_call_paren = 259,               /* call_paren  */
  YYSYMBOL_post_op = 260,                  /* post_op  */
  YYSYMBOL_dot_exp = 261,                  /* dot_exp  */
  YYSYMBOL_post_exp = 262,                 /* post_exp  */
  YYSYMBOL_interp_exp = 263,               /* interp_exp  */
  YYSYMBOL_interp = 264,                   /* interp  */
  YYSYMBOL_capture = 265,                  /* capture  */
  YYSYMBOL__captures = 266,                /* _captures  */
  YYSYMBOL_captures = 267,                 /* captures  */
  YYSYMBOL_array_lit_end = 268,            /* array_lit_end  */
  YYSYMBOL_prim_exp = 269                  /* prim_exp  */
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
#define YYLAST   2635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  634

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
       0,   188,   188,   189,   192,   196,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   214,   216,   223,   232,
     236,   237,   241,   247,   248,   252,   256,   261,   261,   263,
     269,   276,   283,   287,   287,   288,   288,   290,   295,   295,
     297,   302,   308,   316,   322,   326,   331,   334,   334,   335,
     335,   337,   340,   346,   346,   347,   347,   348,   357,   357,
     359,   363,   368,   372,   377,   382,   391,   402,   410,   411,
     421,   423,   427,   433,   435,   439,   440,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   456,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   473,   473,   483,   488,   488,   489,   494,   510,   515,
     515,   516,   516,   519,   520,   526,   531,   537,   542,   542,
     545,   557,   561,   566,   577,   588,   589,   593,   602,   612,
     622,   633,   646,   664,   673,   687,   701,   710,   721,   721,
     723,   728,   732,   737,   743,   748,   754,   755,   766,   767,
     768,   769,   772,   772,   774,   774,   774,   774,   774,   777,
     778,   781,   785,   786,   787,   791,   792,   795,   796,   797,
     801,   801,   802,   803,   804,   810,   810,   811,   811,   813,
     814,   820,   825,   827,   828,   828,   830,   830,   832,   833,
     836,   837,   838,   839,   842,   842,   844,   844,   847,   852,
     859,   865,   873,   882,   882,   882,   882,   882,   884,   894,
     903,   913,   919,   919,   921,   923,   925,   928,   928,   928,
     929,   935,   942,   951,   952,   966,   967,   971,   972,   975,
     975,   975,   976,   977,   977,   980,   981,   983,   983,   985,
     985,   988,   992,   994,   998,  1004,  1013,  1015,  1016,  1016,
    1018,  1018,  1019,  1019,  1019,  1019,  1020,  1020,  1021,  1021,
    1022,  1022,  1022,  1024,  1024,  1025,  1026,  1028,  1031,  1031,
    1032,  1032,  1033,  1033,  1034,  1034,  1035,  1035,  1036,  1036,
    1037,  1037,  1038,  1038,  1039,  1039,  1040,  1040,  1041,  1041,
    1043,  1043,  1046,  1046,  1046,  1047,  1047,  1050,  1051,  1052,
    1053,  1054,  1057,  1058,  1059,  1060,  1061,  1062,  1065,  1070,
    1075,  1075,  1078,  1082,  1088,  1088,  1090,  1090,  1092,  1101,
    1102,  1104,  1106,  1109,  1111,  1115,  1116,  1117,  1119,  1120,
    1131,  1131,  1133,  1134,  1135,  1135,  1136,  1136,  1138,  1139,
    1142,  1143,  1144,  1145,  1146,  1154,  1155,  1156,  1157,  1158,
    1164,  1165,  1166,  1167,  1168
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
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "INTEGER",
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
  "decimal", "prim_def", "class_ext", "traits", "extend_def", "class_body",
  "id_list", "specialized_list", "stmt_list", "fptr_base", "_func_effects",
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

#define YYPACT_NINF (-463)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-261)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     612,  -463,  1678,  1835,   720,   249,  -463,    49,  -463,  1149,
    -463,    68,    76,   102,  2383,   249,  1541,  -463,  -463,  1149,
     -33,   107,   249,   249,    83,   182,    83,   249,  -463,  -463,
     249,   249,  -463,    57,  1149,    75,    21,    86,  -463,  -463,
    -463,  -463,  -463,  1794,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
     182,   182,   270,   270,  2383,  -463,  -463,  -463,   188,   612,
    -463,  -463,  -463,  -463,  -463,  -463,  1149,  -463,   249,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,   217,  -463,
    -463,  -463,    30,  -463,  -463,   260,    45,  -463,  -463,  -463,
    -463,  1450,  -463,  -463,  -463,   249,  -463,  -463,   123,   165,
     158,   177,   167,   -40,   204,    22,   152,   224,   189,   203,
     425,  -463,   206,  -463,  -463,    27,   254,  -463,  -463,  2383,
    -463,   309,   318,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  -463,  -463,   320,  -463,   324,  -463,
    -463,  -463,  -463,  2383,   238,   171,  -463,   828,    31,   328,
    -463,  -463,  -463,  -463,   336,  -463,  -463,   215,   262,  2383,
     229,  2479,  1582,   265,   340,   268,  -463,   349,   322,  -463,
    -463,  -463,   276,   287,   277,  -463,   279,   249,  -463,    26,
    -463,   271,   251,   327,   250,  -463,   365,    90,  -463,   290,
     370,   182,   293,   283,  -463,  -463,   296,   375,   298,  1931,
    1794,  -463,   315,  -463,  -463,  -463,   378,   936,    17,  -463,
    -463,   374,  -463,  -463,   374,   284,  -463,  -463,  -463,   182,
    2383,  -463,  -463,   388,  -463,  2383,  2383,  2383,  2383,  2472,
     336,  2516,   117,   182,   182,  2383,   425,   425,   425,   425,
     425,   425,  -463,  -463,   425,   425,   425,  -463,   425,  -463,
     425,   425,   182,  -463,   383,  1835,   311,   182,   390,  -463,
    -463,  -463,  1794,   110,  -463,  -463,   389,  1972,  -463,  -463,
    -463,  -463,  2383,  -463,    46,   164,  -463,   182,  -463,   182,
     392,  2383,   395,    63,  1582,    24,   373,   393,  -463,  -463,
    -463,   322,   289,   366,  -463,  -463,   289,   313,   182,   251,
     326,  -463,    90,  -463,  -463,  -463,  2068,  -463,   403,  -463,
    -463,   350,    87,   381,   330,   289,   326,  -463,   182,   409,
    -463,   356,  -463,  1794,  2383,  -463,  1044,  -463,   333,  -463,
     -22,   936,  -463,  -463,  -463,   335,   413,  -463,  -463,  -463,
    -463,  -463,   336,   417,   214,   336,   289,   289,  -463,  -463,
     289,    43,  -463,   329,  -463,   165,   158,   177,   167,   -40,
     204,    22,   152,   224,   189,   203,  -463,   936,  -463,    28,
    -463,  -463,   185,  2109,  -463,  -463,  -463,  -463,   414,    58,
    -463,   338,  -463,   312,  -463,  -463,   341,   342,  1149,   423,
    2383,  1149,  2205,   344,   415,  2383,  -463,   100,     4,   -33,
    -463,    11,   386,  -463,   313,   326,   230,   289,  -463,  -463,
     343,  -463,  -463,   426,  2246,  -463,   428,  -463,   338,  -463,
     317,   353,   354,   430,   289,   429,   239,  -463,   434,   437,
     182,  -463,  -463,   438,  -463,  -463,  -463,  -463,   289,  1149,
     442,  -463,  -463,  -463,  -463,   441,   445,   446,  2383,  -463,
    -463,   425,    42,   440,   182,  -463,  -463,   447,  -463,  2383,
    -463,   358,   182,  -463,   289,   289,   439,  -463,    73,  -463,
    1149,   451,   364,  -463,  2383,   435,   436,  -463,  -463,   346,
    -463,   458,  1149,   455,   313,   246,   182,   313,   456,   463,
    -463,  1345,  -463,   370,  -463,   385,  -463,  -463,  -463,  -463,
     182,  -463,  -463,  -463,  -463,  -463,   208,  -463,   182,   374,
     466,  -463,   452,  -463,  -463,   182,   182,   182,   469,  -463,
    -463,  2342,  -463,  -463,  -463,  -463,  2383,  -463,   370,  -463,
    1149,  1149,  -463,  1149,   415,    78,  2383,   384,  1149,   396,
       4,   470,  -463,  -463,  -463,    13,  -463,  -463,   459,   612,
    -463,  1443,  -463,  1247,  -463,  -463,  -463,   381,  -463,  -463,
     479,   401,  -463,   148,   418,  -463,  -463,   374,  2383,   489,
     494,   493,   495,   422,  -463,    93,   503,  -463,  -463,  -463,
    2383,  1149,  -463,  1149,  -463,  -463,  -463,  -463,   499,   313,
     612,   612,   498,  -463,  -463,  -463,   508,  -463,   512,  -463,
    -463,  -463,  -463,    93,  -463,   182,  -463,  -463,  -463,  -463,
      91,  -463,  1149,  -463,  -463,   506,  -463,  -463,  -463,   513,
    1149,  -463,  -463,  -463
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   145,     0,   264,     0,   193,   239,     0,   125,     0,
     126,     0,     0,     0,     0,   193,     0,   138,   139,     0,
     110,     0,   193,   193,   185,     0,   212,   193,    55,    56,
     193,   193,   236,     0,     0,   311,     0,     0,   235,    30,
     340,   342,   343,     0,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,   338,   316,   292,   317,   293,
       0,     0,     0,     0,     0,   296,   295,   349,     0,     2,
       4,     8,     9,   339,    15,    10,     6,    13,   193,    14,
      93,    96,    44,   100,    99,    98,    11,    94,     0,    91,
      97,    92,     0,    95,    90,     0,   146,   346,   148,   217,
     218,     0,   219,     7,   240,   193,    12,   172,   265,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
       0,   290,   335,   294,   324,   297,   341,   319,   354,     0,
     258,   292,   293,   261,   262,   158,   154,   255,   253,   254,
     252,   155,   256,   257,   156,   157,     0,   203,     0,   205,
     204,   207,   206,     0,   263,     0,    73,     0,   146,     0,
     186,   183,   188,   189,     0,   187,   191,   190,   195,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,   109,
     353,   103,     0,   195,     0,   184,     0,   193,   223,     0,
      61,     0,   153,   227,   231,   233,    59,     0,   213,     0,
       0,     0,     0,     0,   135,   308,   310,     0,     0,     0,
       0,   325,     0,   328,   307,    60,   302,     0,     0,   303,
     299,     0,   304,   300,     0,     0,     1,     5,    45,     0,
       0,   143,    31,     0,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,   250,   251,     0,     0,     0,   259,     0,   260,
       0,     0,     0,   298,     0,     0,     0,     0,     0,   320,
     321,   323,     0,     0,   348,   352,     0,     0,   337,   336,
     344,    74,     0,   345,     0,     0,   192,     0,   194,     0,
       0,     0,   338,     0,     0,     0,     0,     0,   140,   104,
     106,   108,   182,   195,   197,    16,   182,    35,     0,   153,
       0,   225,     0,   229,   230,   232,     0,   170,   171,    58,
     234,     0,     0,    49,     0,   182,     0,   309,    69,     0,
      89,     0,   326,     0,   264,    75,     0,   330,     0,   332,
       0,     0,   305,   306,   347,     0,     0,   142,   147,   151,
     149,   150,     0,     0,     0,     0,   182,   182,   215,   214,
     182,     0,   263,     0,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   285,   287,   289,   291,     0,   350,     0,
     318,   312,     0,     0,   322,   329,   169,   168,     0,   165,
     176,     0,    64,     0,   199,   198,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,   121,     0,     0,   110,
     107,     0,    34,   196,    35,     0,     0,   182,   226,    40,
       0,   228,   162,     0,     0,   164,     0,   178,   249,    71,
       0,     0,    50,     0,   182,     0,     0,    66,    68,     0,
      69,    88,   327,     0,    76,   331,   334,   333,   182,     0,
       0,   216,   221,   220,   211,     0,     0,     0,   264,   246,
     173,     0,   146,   159,     0,   152,   315,     0,   167,     0,
     247,    63,     0,   175,   182,   182,   136,   128,     0,   133,
       0,     0,     0,   237,     0,   119,   124,   122,   113,     0,
     115,   112,     0,     0,    35,     0,     0,    35,     0,    36,
      28,     0,    29,     0,    37,     0,   163,    32,   248,    70,
       0,   177,    47,    48,    52,    46,     0,   101,     0,     0,
       0,   301,    53,   127,   222,     0,     0,     0,     0,   266,
     351,     0,   160,   313,   314,   166,     0,    65,     0,    51,
       0,     0,   129,     0,   238,     0,     0,     0,     0,     0,
     111,     0,   105,   181,    42,     0,   179,    33,     0,    39,
      21,    23,    25,     0,    20,    19,    24,    49,    41,    72,
     223,     0,   243,     0,     0,    67,   201,     0,     0,     0,
       0,     0,     0,     0,   161,    62,     0,   137,   134,   130,
       0,     0,   118,     0,   123,   114,   116,   117,     0,    35,
      39,    38,     0,    22,    27,    26,     0,   241,     0,   245,
     244,   102,   200,    54,    57,     0,   209,   210,   174,   202,
       0,   131,   120,   180,    43,     0,    18,   224,   242,     0,
       0,    17,   208,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -463,  -463,   520,   -66,   235,  -463,   -35,  -463,   -42,  -463,
    -463,  -463,   -86,   207,  -463,  -463,  -392,  -463,   -73,  -296,
    -463,    -3,  -463,  -463,   -38,  -463,  -463,  -463,  -463,  -463,
     -54,    37,   -16,  -270,  -463,  -463,    96,    33,  -463,  -463,
     -59,  -462,    -9,  -463,  -463,  -463,   237,  -463,  -463,  -463,
     131,  -463,    -4,  -463,  -463,  -463,   137,  -463,  -463,   377,
    -463,  -463,  -463,  -463,  -463,  -161,    72,     1,  -168,  -463,
    -184,  -463,    79,   424,  -463,    60,  -200,  -456,  -280,    34,
    -463,   387,  -463,    12,  -160,  -463,  -463,  -463,   310,   314,
    -463,  -463,  -460,   363,  -463,   243,  -463,   359,  -463,   -23,
      14,  -463,   -14,  -463,  -463,   -21,   132,  -463,  -463,  -101,
     -99,   -98,   -97,  -226,  -231,  -463,   316,   319,   321,   323,
     325,   307,   331,   308,   337,   305,   332,   -93,    -7,  -463,
    -463,  -463,  -463,   -96,  -463,  -463,  -189,  -463,   226,  -463,
      -6,  -463,  -463
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,   601,    70,   182,    71,   560,   561,   562,   563,
     502,    72,    73,   233,    74,   497,   416,    75,   602,   420,
     495,    76,   200,   432,   433,   164,    77,   579,    78,    79,
     190,   216,   391,   437,   393,   438,   439,   429,   430,    80,
     219,    81,    82,    83,   574,    84,   300,   409,   301,    85,
     180,   551,   490,   491,    86,   547,   406,   407,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   268,   147,
     269,   318,   159,    97,   319,    98,   285,   323,   412,   165,
     186,   166,   167,   183,   289,   305,    99,   100,   148,   242,
     101,   102,   103,   192,   193,   194,   315,   195,   196,   104,
     484,   105,   572,   573,   106,   460,   471,   509,   254,   149,
     150,   151,   152,   155,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   206,
     122,   382,   384,   123,   124,   125,   213,   126,   339,   340,
     221,   280,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   197,   227,   222,   158,   232,   215,   243,   191,
     178,   294,   317,   255,   392,   364,   256,   168,   258,   363,
     260,   332,   498,   304,   311,   204,   414,   175,   403,   271,
     436,   187,  -153,   231,   265,   235,   463,   197,   197,   564,
     354,   566,   201,   202,   214,   435,   235,   567,   458,   235,
     179,   187,   390,   530,   169,   220,   223,   224,   185,   161,
     198,   337,   469,   252,   493,    39,   598,   228,   253,   401,
     208,   266,   446,   171,   146,   154,   455,   456,   197,   541,
     457,   172,   586,   385,   591,   241,   174,   488,   177,   338,
     229,    39,   187,   427,   494,   187,   599,   630,    32,   564,
     337,   564,   554,   566,   207,   558,    38,   173,   443,   188,
     181,   486,    56,   263,    58,   212,   264,   244,   404,   499,
     358,   161,   277,   405,   236,   282,   459,   341,   338,   188,
     273,   142,   143,   402,   425,   236,   225,   503,   236,    32,
     203,   418,   267,   413,   442,   357,   243,    38,   228,   237,
     238,   236,   450,   187,   515,   454,   236,   189,   205,   609,
     237,   238,   342,   237,   238,   343,   236,   394,   522,   209,
     188,   236,   293,   188,   341,   345,   237,   238,   197,   278,
     279,   237,   238,   359,   236,   324,   236,   187,   226,   464,
     361,   237,   238,   465,   538,   539,   237,   238,   189,   308,
      32,   189,   537,   236,   282,   378,   197,   624,    38,   237,
     238,   237,   238,   187,   336,   245,   197,   452,   158,   246,
     197,   197,   230,   241,   341,   276,   395,   360,   237,   238,
     529,   570,   528,   500,    32,   232,   130,   247,   257,   197,
     501,   290,    38,   505,   197,     8,   376,    10,   575,   517,
     555,   381,   160,   161,   556,   580,   581,   582,   184,   189,
      32,   197,   199,   234,   197,   188,   197,   248,    38,   255,
     249,   396,   256,   397,   258,     2,   260,     3,   251,   532,
     217,   331,   212,   389,   261,   197,   160,   161,   162,   163,
     250,   570,   417,   189,   262,   453,   349,   350,   351,   197,
     218,    20,   346,   287,   288,   197,   428,   348,   137,   138,
     139,   140,   259,   133,   134,  -259,   472,   362,   473,   189,
     272,   510,   489,   511,  -260,    35,   274,   228,   303,   288,
     275,    39,   277,    40,    41,    42,    43,   379,   336,   283,
     565,   284,   313,   314,   212,   629,   504,   505,   295,   388,
     296,   297,   298,    55,   299,    56,    57,    58,    59,   302,
     306,    60,   307,   399,   218,   310,   267,    61,    62,    63,
      64,   312,   316,   321,   336,   322,   325,   326,   462,   327,
     328,   329,   333,   334,   341,   344,    65,    66,   423,   476,
      67,   347,   479,   377,   380,   383,   405,   386,   398,   400,
     565,   478,   565,   408,   411,   212,   362,   415,   288,   419,
     424,    39,   431,   434,   440,   441,   445,   197,   448,   449,
     451,   470,   468,   461,   474,   475,   477,   482,   483,   496,
       2,   507,     3,   514,   463,   129,   512,   513,   518,   516,
     523,   197,   215,   519,   521,   524,   525,   531,   533,   197,
     526,   527,   536,   534,   540,   467,    20,   543,   544,   546,
     576,   548,   550,   553,   489,   549,   559,   505,   568,   600,
     273,   542,   577,   197,   481,   583,   578,   485,   593,   595,
      35,   597,   607,   552,   608,   545,    39,   197,    40,    41,
      42,    43,   614,   197,   428,   197,   423,   611,   615,   616,
     571,   617,   197,   197,   197,   459,   619,   623,    55,   626,
      56,    57,    58,    59,   627,   628,    60,   631,   612,   632,
      69,   605,    61,    62,    63,    64,   603,   625,   426,   606,
     362,   587,   588,   557,   589,   227,   520,   585,   410,   594,
     492,    65,    66,   569,   487,    67,   596,   291,   535,   270,
     197,   356,   309,   353,   286,   421,   320,   571,   590,   610,
     508,   370,   618,   365,   372,   374,   447,   366,     0,     0,
     367,     0,     0,   368,     0,     0,   369,     0,     0,   613,
       0,     0,   621,     0,     0,     0,   371,     0,     0,     0,
     622,   620,   197,   375,     0,   373,     0,     0,     0,     0,
       0,     0,     0,   423,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,     0,     1,     0,     2,   592,     3,
       0,   633,     4,     0,     5,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,     0,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    34,    35,     0,    36,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,    65,    66,
       4,   156,    67,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,     0,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    65,    66,     4,   281,
      67,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,    65,    66,     4,   335,    67,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    65,    66,     4,   444,    67,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,     0,     4,
      65,    66,     6,     7,    67,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       1,     0,     2,     0,     3,     0,     0,   129,   604,     5,
       6,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    35,     0,    36,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     1,     0,
       2,     0,     3,     0,     0,   129,     0,     5,     6,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,    32,     0,     0,
      35,     0,    36,    37,     0,    38,    39,     0,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     1,     0,     2,     0,
       3,     0,     0,   129,     0,   187,     6,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,     0,     0,     0,    32,     0,     0,    35,     0,
       0,    37,    32,    38,    39,     0,    40,    41,    42,    43,
      38,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,   188,    60,    56,    57,    58,    59,     0,
      61,    62,    63,    64,   176,     0,     2,   240,     3,     0,
       0,   129,     0,     0,     6,     0,     0,     0,     0,    65,
      66,   189,     0,    67,     0,     0,    65,    66,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     0,   129,    32,     0,     6,    35,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,    32,     0,     0,    35,    61,    62,
      63,    64,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     2,   128,     3,     0,     0,   129,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,   130,    56,   131,    58,   132,   133,   134,    60,
       0,   135,     0,     0,     0,    61,    62,    63,    64,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,     0,
       0,     0,     0,     0,    65,    66,   144,   145,    67,     2,
       0,     3,     0,     0,   129,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,   129,    32,     0,     6,    35,
       0,     0,     0,     0,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,   210,   211,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,    32,     0,     0,
      35,    61,    62,    63,    64,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,   153,
       0,     0,    61,    62,    63,    64,     2,     0,     3,     0,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
     387,     0,   129,    32,     0,     6,    35,     0,     0,     0,
     330,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,    32,     0,     0,    35,    61,    62,
      63,    64,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     2,     0,     3,   422,     0,   129,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,   466,     3,     0,     0,   129,
      32,     0,     6,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,    32,     0,     0,    35,    61,    62,    63,    64,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       2,   480,     3,     0,     0,   129,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   506,     0,   129,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,     0,     3,
     584,     0,   129,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,   129,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   187,     0,     0,
      61,    62,    63,    64,     2,     0,     3,     0,     0,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,    32,    38,     0,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   188,     0,    56,    57,    58,
      59,     0,   292,     0,    56,    57,    58,    59,     0,   352,
      60,     0,   355,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,   189,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
     130,    56,   257,    58,   259,   133,   134,     0,     0,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   136,
     137,   138,   139,   140,   141,   142,   143,     0,     0,     0,
       0,     0,     0,     0,   144,   145
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    69,    63,     4,    92,    61,   101,    25,
      19,   172,   196,   114,   284,   246,   115,     5,   116,   245,
     117,   210,   414,   183,   192,    34,   306,    15,     4,   125,
     326,     5,     5,     3,     7,     4,     8,    60,    61,   501,
     240,   501,    30,    31,    60,   325,     4,   503,     5,     4,
      83,     5,     6,    11,     5,    62,    63,    63,    24,    38,
      26,    83,     4,   103,    53,    61,    53,    76,   108,     6,
      36,    44,    94,     5,     2,     3,   356,   357,   101,     6,
     360,     5,   538,   272,     6,   101,    14,    83,    16,   111,
      78,    61,     5,     6,    83,     5,    83,     6,    52,   561,
      83,   563,   494,   563,    83,   497,    60,     5,   334,    83,
       3,    11,    85,   120,    87,    43,   122,   105,    94,   415,
       3,    38,    94,    23,    93,    94,    83,    10,   111,    83,
     129,   109,   110,   294,   318,    93,    64,   417,    93,    52,
      83,   309,   115,   303,   333,   241,   239,    60,   157,   118,
     119,    93,   352,     5,   434,   355,    93,   111,    83,    11,
     118,   119,   221,   118,   119,   224,    93,     3,   448,    83,
      83,    93,   171,    83,    10,   229,   118,   119,   201,     8,
       9,   118,   119,   242,    93,   201,    93,     5,     0,     4,
     244,   118,   119,     8,   474,   475,   118,   119,   111,   187,
      52,   111,   472,    93,    94,   264,   229,   599,    60,   118,
     119,   118,   119,     5,   217,    92,   239,     3,   217,    96,
     243,   244,     5,   239,    10,   153,   285,   243,   118,   119,
     461,    83,   458,     3,    52,   321,    84,   114,    86,   262,
      10,   169,    60,     4,   267,    16,   262,    18,   518,    10,
       4,   267,    37,    38,     8,   525,   526,   527,    23,   111,
      52,   284,    27,     3,   287,    83,   289,   102,    60,   370,
     112,   287,   371,   289,   372,     5,   373,     7,   111,   463,
      10,   209,   210,   282,    95,   308,    37,    38,    39,    40,
     113,    83,   308,   111,    91,   354,   236,   237,   238,   322,
      94,    31,   230,    41,    42,   328,   322,   235,   104,   105,
     106,   107,    88,    89,    90,     6,     4,   245,     6,   111,
      66,     4,   408,     6,     6,    55,     6,   336,    41,    42,
       6,    61,    94,    63,    64,    65,    66,   265,   341,    11,
     501,     5,    92,    93,   272,   615,     3,     4,    83,   277,
      10,    83,     3,    83,    32,    85,    86,    87,    88,    83,
      83,    91,    83,   291,    94,    94,   115,    97,    98,    99,
     100,    44,     7,    83,   377,     5,    83,    94,   377,    83,
       5,    83,    67,     5,    10,   101,   116,   117,   316,   398,
     120,     3,   401,    10,    83,     5,    23,     8,     6,     4,
     561,   400,   563,    10,   115,   333,   334,    94,    42,    83,
       7,    61,    31,    83,     5,    59,    83,   440,    83,     6,
       3,    83,     8,    94,    83,    83,     3,    83,    13,    43,
       5,     3,     7,     3,     8,    10,    83,    83,     4,    10,
     449,   464,   496,     6,     6,     3,     5,     7,   464,   472,
       5,     5,    94,     6,    15,   383,    31,     6,    94,    24,
     519,    25,     4,     8,   550,   119,    10,     4,    83,    10,
     469,   480,     6,   496,   402,     6,    24,   405,    94,    83,
      55,    11,     3,   492,    83,   484,    61,   510,    63,    64,
      65,    66,     3,   516,   510,   518,   424,    79,     4,     6,
     516,     6,   525,   526,   527,    83,     3,     8,    83,    11,
      85,    86,    87,    88,     6,     3,    91,    11,   577,     6,
       0,   563,    97,    98,    99,   100,   561,   600,   321,   567,
     458,   540,   541,   496,   543,   601,   440,   536,   301,   548,
     409,   116,   117,   510,   407,   120,   550,   170,   469,   125,
     573,   241,   189,   239,   167,   312,   197,   573,   544,   573,
     428,   254,   583,   247,   256,   260,   340,   248,    -1,    -1,
     249,    -1,    -1,   250,    -1,    -1,   251,    -1,    -1,   578,
      -1,    -1,   591,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     593,   590,   615,   261,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   531,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   622,    -1,     3,    -1,     5,   546,     7,
      -1,   630,    10,    -1,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,   116,   117,
      10,    11,   120,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,   116,   117,    10,    11,
     120,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,   116,   117,    10,    11,   120,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   116,   117,    10,    11,   120,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
     116,   117,    13,    14,   120,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
       3,    -1,     5,    -1,     7,    -1,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,     3,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,    -1,     5,    13,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    52,    60,    61,    -1,    63,    64,    65,    66,
      60,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    83,    91,    85,    86,    87,    88,    -1,
      97,    98,    99,   100,     3,    -1,     5,    97,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   116,
     117,   111,    -1,   120,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,
      99,   100,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    10,    52,    -1,    13,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,    -1,
      55,    97,    98,    99,   100,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    94,
      -1,    -1,    97,    98,    99,   100,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
       8,    -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,
      59,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,
      99,   100,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    10,
      52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    52,    -1,    -1,    55,    97,    98,    99,   100,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,
      98,    99,   100,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,     5,    -1,    -1,
      97,    98,    99,   100,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    60,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    83,    -1,    85,    86,    87,    88,    -1,    97,
      91,    -1,    56,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
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
     130,   132,   138,   139,   141,   144,   148,   153,   155,   156,
     166,   168,   169,   170,   172,   176,   181,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   200,   202,   213,
     214,   217,   218,   219,   226,   228,   231,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   257,   260,   261,   262,   264,   269,     6,    10,
      84,    86,    88,    89,    90,    93,   103,   104,   105,   106,
     107,   108,   109,   110,   118,   119,   193,   196,   215,   236,
     237,   238,   239,    94,   193,   240,    11,   148,   194,   199,
      37,    38,    39,    40,   152,   206,   208,   209,   210,     5,
     169,     5,     5,     5,   193,   210,     3,   193,   169,    83,
     177,     3,   131,   210,   131,   206,   207,     5,    83,   111,
     157,   159,   220,   221,   222,   224,   225,   226,   206,   131,
     149,   210,   210,    83,   169,    83,   256,    83,   206,    83,
      80,    81,   193,   263,   159,   157,   158,    10,    94,   167,
     255,   267,   167,   255,   267,   193,     0,   130,   169,   210,
       5,     3,   139,   140,     3,     4,    93,   118,   119,    41,
      97,   159,   216,   254,   210,    92,    96,   114,   102,   112,
     113,   111,   103,   108,   235,   236,   237,    86,   238,    88,
     239,    95,    91,   255,   267,     7,    44,   115,   195,   197,
     200,   260,    66,   194,     6,     6,   193,    94,     8,     9,
     268,    11,    94,    11,     5,   203,   208,    41,    42,   211,
     193,   186,    83,   194,   192,    83,    10,    83,     3,    32,
     173,   175,    83,    41,   211,   212,    83,    83,   210,   220,
      94,   195,    44,    92,    93,   223,     7,   197,   198,   201,
     224,    83,     5,   204,   159,    83,    94,    83,     5,    83,
      59,   193,   263,    67,     5,    11,   148,    83,   111,   265,
     266,    10,   167,   167,   101,   157,   193,     3,   193,   202,
     202,   202,    97,   216,   203,    56,   215,   260,     3,   167,
     159,   157,   193,   240,   241,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   159,    10,   167,   193,
      83,   159,   258,     5,   259,   263,     8,     8,   193,   194,
       6,   159,   160,   161,     3,   167,   159,   159,     6,   193,
       4,     6,   192,     4,    94,    23,   183,   184,    10,   174,
     173,   115,   205,   211,   205,    94,   143,   159,   195,    83,
     146,   222,     8,   193,     7,   197,   140,     6,   159,   164,
     165,    31,   150,   151,    83,   205,   146,   160,   162,   163,
       5,    59,   263,   240,    11,    83,    94,   265,    83,     6,
     203,     3,     3,   167,   203,   205,   205,   205,     5,    83,
     232,    94,   194,     8,     4,     8,     6,   193,     8,     4,
      83,   233,     4,     6,    83,    83,   169,     3,   194,   169,
       6,   193,    83,    13,   227,   193,    11,   183,    83,   139,
     179,   180,   177,    53,    83,   147,    43,   142,   143,   146,
       3,    10,   137,   205,     3,     4,     8,     3,   233,   234,
       4,     6,    83,    83,     3,   205,    10,    10,     4,     6,
     163,     6,   205,   169,     3,     5,     5,     5,   240,   241,
      11,     7,   197,   159,     6,   199,    94,   160,   205,   205,
      15,     6,   169,     6,    94,   194,    24,   182,    25,   119,
       4,   178,   169,     8,   143,     4,     8,   158,   143,    10,
     133,   134,   135,   136,   168,   192,   219,   204,    83,   164,
      83,   159,   229,   230,   171,   160,   167,     6,    24,   154,
     160,   160,   160,     6,     8,   194,   204,   169,   169,   169,
     227,     6,   193,    94,   169,    83,   179,    11,    53,    83,
      10,   129,   145,   133,    11,   135,   151,     3,    83,    11,
     229,    79,   167,   194,     3,     4,     6,     6,   232,     3,
     194,   169,   148,     8,   143,   145,    11,     6,     3,   160,
       6,    11,     6,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     139,   140,   141,   142,   142,   143,   143,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   153,   154,   154,   155,   155,   156,   157,   157,
     158,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   165,   165,   166,   166,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   171,   170,   172,   174,   173,   175,   175,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   182,   182,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   189,   189,   190,   190,
     191,   191,   191,   191,   192,   192,   193,   193,   194,   194,
     194,   194,   195,   195,   196,   196,   196,   196,   196,   197,
     197,   197,   198,   198,   198,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   202,   203,   203,   204,   204,   205,
     205,   205,   205,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   210,   210,   211,   211,   212,   212,   213,   213,
     213,   213,   214,   215,   215,   215,   215,   215,   216,   216,
     216,   216,   217,   217,   218,   218,   218,   219,   219,   219,
     219,   219,   219,   220,   220,   221,   221,   222,   222,   223,
     223,   223,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   230,   231,   232,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   237,   238,   238,
     239,   239,   239,   240,   240,   241,   241,   241,   242,   242,
     243,   243,   244,   244,   245,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   250,   251,   251,   252,   252,
     253,   253,   254,   254,   254,   254,   254,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   262,
     262,   262,   262,   262,   262,   263,   263,   263,   264,   264,
     265,   265,   266,   266,   267,   267,   268,   268,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     9,     8,     1,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     5,
       1,     1,     5,     2,     0,     0,     2,     5,     1,     0,
       1,     3,     2,     4,     1,     2,     4,     2,     2,     0,
       1,     5,     5,     0,     2,     1,     1,     7,     2,     1,
       1,     1,     4,     2,     1,     3,     1,     3,     1,     0,
       2,     1,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     2,     0,     4,     1,     2,     3,     1,
       0,     1,     0,     1,     3,     1,     3,     7,     2,     0,
       5,     1,     2,     7,     5,     1,     1,     5,     5,     6,
       7,     8,    10,     5,     7,     2,     5,     7,     1,     1,
       3,     2,     3,     2,     2,     1,     1,     3,     1,     3,
       3,     3,     3,     0,     1,     1,     1,     1,     1,     3,
       4,     5,     2,     3,     2,     3,     5,     5,     4,     4,
       1,     1,     1,     4,     7,     3,     2,     3,     2,     3,
       5,     3,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     2,     1,     4,     4,
       7,     6,     8,     1,     1,     1,     1,     1,     8,     6,
       6,     3,     1,     2,     3,     3,     4,     1,     1,     1,
       4,     4,     5,     1,     7,     2,     3,     1,     3,     1,
       1,     0,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     2,     3,     1,     2,     7,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     5,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     5,     2,     2,     2,     3,     3,     2,     1,     2,
       2,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     1,     1,     2,     3,     2,     3,
       1,     2,     1,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
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
#line 188 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2588 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 189 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2594 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 192 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2603 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 196 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2612 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2618 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2624 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 204 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2630 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 205 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2636 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 206 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2642 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 207 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2648 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 208 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2654 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 209 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2660 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 210 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2666 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 211 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2672 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 214 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2678 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 217 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2689 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 224 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2701 "src/parser.c"
    break;

  case 19: /* trait_stmt: exp_stmt  */
#line 232 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2711 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt  */
#line 237 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2720 "src/parser.c"
    break;

  case 22: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 241 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2729 "src/parser.c"
    break;

  case 23: /* trait_section: trait_stmt_list  */
#line 247 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2735 "src/parser.c"
    break;

  case 24: /* trait_section: func_def  */
#line 248 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2741 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_section  */
#line 252 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2750 "src/parser.c"
    break;

  case 26: /* trait_ast: trait_ast trait_section  */
#line 256 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2759 "src/parser.c"
    break;

  case 27: /* trait_body: "{" trait_ast "}"  */
#line 261 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2765 "src/parser.c"
    break;

  case 28: /* trait_body: ";"  */
#line 261 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2771 "src/parser.c"
    break;

  case 29: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 264 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2780 "src/parser.c"
    break;

  case 30: /* number: INTEGER  */
#line 269 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2791 "src/parser.c"
    break;

  case 31: /* decimal: number  */
#line 276 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2802 "src/parser.c"
    break;

  case 32: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 284 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2810 "src/parser.c"
    break;

  case 33: /* class_ext: "extends" type_decl_exp  */
#line 287 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2816 "src/parser.c"
    break;

  case 34: /* class_ext: %empty  */
#line 287 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2822 "src/parser.c"
    break;

  case 35: /* traits: %empty  */
#line 288 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2828 "src/parser.c"
    break;

  case 36: /* traits: ":" id_list  */
#line 288 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2834 "src/parser.c"
    break;

  case 37: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 290 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2842 "src/parser.c"
    break;

  case 39: /* class_body: %empty  */
#line 295 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2848 "src/parser.c"
    break;

  case 40: /* id_list: "<identifier>"  */
#line 298 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2857 "src/parser.c"
    break;

  case 41: /* id_list: id_list "," "<identifier>"  */
#line 303 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2866 "src/parser.c"
    break;

  case 42: /* specialized_list: "<identifier>" traits  */
#line 308 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2879 "src/parser.c"
    break;

  case 43: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 316 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2889 "src/parser.c"
    break;

  case 44: /* stmt_list: stmt  */
#line 322 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2898 "src/parser.c"
    break;

  case 45: /* stmt_list: stmt_list stmt  */
#line 326 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2907 "src/parser.c"
    break;

  case 46: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 331 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2914 "src/parser.c"
    break;

  case 47: /* _func_effects: "perform" "<identifier>"  */
#line 334 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2920 "src/parser.c"
    break;

  case 48: /* _func_effects: _func_effects "<identifier>"  */
#line 334 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2926 "src/parser.c"
    break;

  case 49: /* func_effects: %empty  */
#line 335 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2932 "src/parser.c"
    break;

  case 50: /* func_effects: _func_effects  */
#line 335 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2938 "src/parser.c"
    break;

  case 51: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 337 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2945 "src/parser.c"
    break;

  case 52: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 340 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2955 "src/parser.c"
    break;

  case 53: /* typedef_when: %empty  */
#line 346 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2961 "src/parser.c"
    break;

  case 54: /* typedef_when: "when" binary_exp  */
#line 346 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2967 "src/parser.c"
    break;

  case 55: /* type_def_type: "typedef"  */
#line 347 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2973 "src/parser.c"
    break;

  case 56: /* type_def_type: "distinct"  */
#line 347 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2979 "src/parser.c"
    break;

  case 57: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 348 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2992 "src/parser.c"
    break;

  case 58: /* type_decl_array: type_decl array  */
#line 357 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2998 "src/parser.c"
    break;

  case 60: /* type_decl_exp: type_decl_array  */
#line 359 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3006 "src/parser.c"
    break;

  case 61: /* type_decl_empty: type_decl_array  */
#line 363 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3014 "src/parser.c"
    break;

  case 62: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 368 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 3023 "src/parser.c"
    break;

  case 63: /* arg: type_decl_empty arg_decl  */
#line 372 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 3032 "src/parser.c"
    break;

  case 64: /* arg_list: arg  */
#line 377 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3042 "src/parser.c"
    break;

  case 65: /* arg_list: arg_list "," arg  */
#line 382 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3054 "src/parser.c"
    break;

  case 66: /* locale_arg: arg  */
#line 391 "src/gwion.y"
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
#line 3070 "src/parser.c"
    break;

  case 67: /* locale_arg: locale_arg "," arg  */
#line 402 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3082 "src/parser.c"
    break;

  case 69: /* locale_list: %empty  */
#line 411 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3096 "src/parser.c"
    break;

  case 70: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 421 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3102 "src/parser.c"
    break;

  case 71: /* fptr_list: fptr_arg  */
#line 423 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3111 "src/parser.c"
    break;

  case 72: /* fptr_list: fptr_list "," fptr_arg  */
#line 427 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3120 "src/parser.c"
    break;

  case 73: /* code_stmt: "{" "}"  */
#line 433 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3127 "src/parser.c"
    break;

  case 74: /* code_stmt: "{" stmt_list "}"  */
#line 435 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3134 "src/parser.c"
    break;

  case 75: /* code_list: "{" "}"  */
#line 439 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3140 "src/parser.c"
    break;

  case 76: /* code_list: "{" stmt_list "}"  */
#line 440 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3146 "src/parser.c"
    break;

  case 77: /* stmt_pp: "<comment>"  */
#line 443 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3152 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#include"  */
#line 444 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3158 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#define"  */
#line 445 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3164 "src/parser.c"
    break;

  case 80: /* stmt_pp: "#pragma"  */
#line 446 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3170 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#undef"  */
#line 447 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3176 "src/parser.c"
    break;

  case 82: /* stmt_pp: "#ifdef"  */
#line 448 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3182 "src/parser.c"
    break;

  case 83: /* stmt_pp: "#ifndef"  */
#line 449 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3188 "src/parser.c"
    break;

  case 84: /* stmt_pp: "#else"  */
#line 450 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3194 "src/parser.c"
    break;

  case 85: /* stmt_pp: "#if"  */
#line 451 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3200 "src/parser.c"
    break;

  case 86: /* stmt_pp: "\n"  */
#line 452 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3206 "src/parser.c"
    break;

  case 87: /* stmt_pp: "import"  */
#line 453 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3212 "src/parser.c"
    break;

  case 88: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 454 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3219 "src/parser.c"
    break;

  case 89: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 456 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3226 "src/parser.c"
    break;

  case 101: /* $@1: %empty  */
#line 473 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3232 "src/parser.c"
    break;

  case 102: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 473 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3246 "src/parser.c"
    break;

  case 103: /* retry_stmt: "retry" ";"  */
#line 483 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3256 "src/parser.c"
    break;

  case 104: /* $@2: %empty  */
#line 488 "src/gwion.y"
                  { arg->handling = true; }
#line 3262 "src/parser.c"
    break;

  case 105: /* handler: "handle" $@2 opt_id stmt  */
#line 488 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3268 "src/parser.c"
    break;

  case 106: /* handler_list: handler  */
#line 489 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3278 "src/parser.c"
    break;

  case 107: /* handler_list: handler_list handler  */
#line 494 "src/gwion.y"
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
#line 3299 "src/parser.c"
    break;

  case 108: /* try_stmt: "try" stmt handler_list  */
#line 510 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3308 "src/parser.c"
    break;

  case 110: /* opt_id: %empty  */
#line 515 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3314 "src/parser.c"
    break;

  case 112: /* opt_comma: %empty  */
#line 516 "src/gwion.y"
                 {}
#line 3320 "src/parser.c"
    break;

  case 113: /* enum_value: "<identifier>"  */
#line 519 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .xid = (yyvsp[0].sym) }; }
#line 3326 "src/parser.c"
    break;

  case 114: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 520 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.xid = (yyvsp[0].sym), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3337 "src/parser.c"
    break;

  case 115: /* enum_list: enum_value  */
#line 527 "src/gwion.y"
  {
    (yyval.enum_list) = new_mp_vector(mpool(arg), EnumValue, 1);
    mp_vector_set((yyval.enum_list), EnumValue, 0, (yyvsp[0].enum_value));
  }
#line 3346 "src/parser.c"
    break;

  case 116: /* enum_list: enum_list "," enum_value  */
#line 532 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].enum_list), EnumValue, (yyvsp[0].enum_value));
    (yyval.enum_list) = (yyvsp[-2].enum_list);
  }
#line 3355 "src/parser.c"
    break;

  case 117: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 537 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3364 "src/parser.c"
    break;

  case 118: /* when_exp: "when" exp  */
#line 542 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3370 "src/parser.c"
    break;

  case 119: /* when_exp: %empty  */
#line 542 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3376 "src/parser.c"
    break;

  case 120: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 545 "src/gwion.y"
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
#line 3392 "src/parser.c"
    break;

  case 121: /* match_list: match_case_stmt  */
#line 557 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3401 "src/parser.c"
    break;

  case 122: /* match_list: match_list match_case_stmt  */
#line 561 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3410 "src/parser.c"
    break;

  case 123: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 566 "src/gwion.y"
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
#line 3425 "src/parser.c"
    break;

  case 124: /* match_stmt: "match" exp "{" match_list "}"  */
#line 577 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3439 "src/parser.c"
    break;

  case 125: /* flow: "while"  */
#line 588 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3445 "src/parser.c"
    break;

  case 126: /* flow: "until"  */
#line 589 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3451 "src/parser.c"
    break;

  case 127: /* loop_stmt: flow "(" exp ")" stmt  */
#line 594 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3464 "src/parser.c"
    break;

  case 128: /* loop_stmt: "do" stmt flow exp ";"  */
#line 603 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3478 "src/parser.c"
    break;

  case 129: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 613 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3492 "src/parser.c"
    break;

  case 130: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 623 "src/gwion.y"
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
#line 3507 "src/parser.c"
    break;

  case 131: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 634 "src/gwion.y"
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
#line 3524 "src/parser.c"
    break;

  case 132: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 647 "src/gwion.y"
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
#line 3546 "src/parser.c"
    break;

  case 133: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 665 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3559 "src/parser.c"
    break;

  case 134: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 674 "src/gwion.y"
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
#line 3576 "src/parser.c"
    break;

  case 135: /* defer_stmt: "defer" stmt  */
#line 687 "src/gwion.y"
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
#line 3593 "src/parser.c"
    break;

  case 136: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 702 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3606 "src/parser.c"
    break;

  case 137: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 711 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3620 "src/parser.c"
    break;

  case 138: /* breaks: "break"  */
#line 721 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3626 "src/parser.c"
    break;

  case 139: /* breaks: "continue"  */
#line 721 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3632 "src/parser.c"
    break;

  case 140: /* jump_stmt: "return" exp ";"  */
#line 723 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3642 "src/parser.c"
    break;

  case 141: /* jump_stmt: "return" ";"  */
#line 728 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3651 "src/parser.c"
    break;

  case 142: /* jump_stmt: breaks decimal ";"  */
#line 732 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].gwint).num }},
      .pos = (yylsp[-2])
    };
  }
#line 3661 "src/parser.c"
    break;

  case 143: /* jump_stmt: breaks ";"  */
#line 737 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3670 "src/parser.c"
    break;

  case 144: /* exp_stmt: exp ";"  */
#line 743 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3680 "src/parser.c"
    break;

  case 145: /* exp_stmt: ";"  */
#line 748 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3689 "src/parser.c"
    break;

  case 146: /* exp: binary_exp  */
#line 754 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3695 "src/parser.c"
    break;

  case 147: /* exp: binary_exp "," exp  */
#line 756 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3707 "src/parser.c"
    break;

  case 149: /* binary_exp: binary_exp "@" decl_exp  */
#line 767 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3713 "src/parser.c"
    break;

  case 150: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 768 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3719 "src/parser.c"
    break;

  case 151: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 769 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3725 "src/parser.c"
    break;

  case 152: /* call_template: ":[" type_list "]"  */
#line 772 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3731 "src/parser.c"
    break;

  case 153: /* call_template: %empty  */
#line 772 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3737 "src/parser.c"
    break;

  case 159: /* array_exp: "[" exp "]"  */
#line 777 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3743 "src/parser.c"
    break;

  case 160: /* array_exp: "[" exp "]" array_exp  */
#line 778 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3751 "src/parser.c"
    break;

  case 161: /* array_exp: "[" exp "]" "[" "]"  */
#line 781 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3757 "src/parser.c"
    break;

  case 162: /* array_empty: "[" "]"  */
#line 785 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3763 "src/parser.c"
    break;

  case 163: /* array_empty: array_empty "[" "]"  */
#line 786 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3769 "src/parser.c"
    break;

  case 164: /* array_empty: array_empty array_exp  */
#line 787 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3775 "src/parser.c"
    break;

  case 165: /* dict_list: binary_exp ":" binary_exp  */
#line 791 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3781 "src/parser.c"
    break;

  case 166: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 792 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3787 "src/parser.c"
    break;

  case 167: /* range: "[" exp ":" exp "]"  */
#line 795 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3793 "src/parser.c"
    break;

  case 168: /* range: "[" exp ":" "]"  */
#line 796 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3799 "src/parser.c"
    break;

  case 169: /* range: "[" ":" exp "]"  */
#line 797 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3805 "src/parser.c"
    break;

  case 173: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 803 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3811 "src/parser.c"
    break;

  case 174: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 804 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3821 "src/parser.c"
    break;

  case 175: /* func_args: "(" arg_list ")"  */
#line 810 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3827 "src/parser.c"
    break;

  case 176: /* func_args: "(" ")"  */
#line 810 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3833 "src/parser.c"
    break;

  case 177: /* fptr_args: "(" fptr_list ")"  */
#line 811 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3839 "src/parser.c"
    break;

  case 178: /* fptr_args: "(" ")"  */
#line 811 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3845 "src/parser.c"
    break;

  case 179: /* decl_template: ":[" specialized_list "]"  */
#line 813 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3851 "src/parser.c"
    break;

  case 180: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 814 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3862 "src/parser.c"
    break;

  case 181: /* decl_template: ":[" "..." "]"  */
#line 820 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3872 "src/parser.c"
    break;

  case 182: /* decl_template: %empty  */
#line 825 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3878 "src/parser.c"
    break;

  case 183: /* global: "global"  */
#line 827 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3884 "src/parser.c"
    break;

  case 185: /* opt_global: %empty  */
#line 828 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3890 "src/parser.c"
    break;

  case 186: /* storage_flag: "static"  */
#line 830 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3896 "src/parser.c"
    break;

  case 188: /* access_flag: "private"  */
#line 832 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3902 "src/parser.c"
    break;

  case 189: /* access_flag: "protect"  */
#line 833 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3908 "src/parser.c"
    break;

  case 190: /* flag: access_flag  */
#line 836 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3914 "src/parser.c"
    break;

  case 191: /* flag: storage_flag  */
#line 837 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3920 "src/parser.c"
    break;

  case 192: /* flag: access_flag storage_flag  */
#line 838 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3926 "src/parser.c"
    break;

  case 193: /* flag: %empty  */
#line 839 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3932 "src/parser.c"
    break;

  case 194: /* final: "final"  */
#line 842 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3938 "src/parser.c"
    break;

  case 195: /* final: %empty  */
#line 842 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3944 "src/parser.c"
    break;

  case 196: /* modifier: "abstract" final  */
#line 844 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3950 "src/parser.c"
    break;

  case 198: /* func_def_base: "fun" func_base func_args code_list  */
#line 847 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3960 "src/parser.c"
    break;

  case 199: /* func_def_base: "fun" func_base func_args ";"  */
#line 852 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3972 "src/parser.c"
    break;

  case 200: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 859 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3983 "src/parser.c"
    break;

  case 201: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 865 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3994 "src/parser.c"
    break;

  case 202: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 874 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4006 "src/parser.c"
    break;

  case 208: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 885 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 4020 "src/parser.c"
    break;

  case 209: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 895 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4033 "src/parser.c"
    break;

  case 210: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 904 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4047 "src/parser.c"
    break;

  case 211: /* op_base: type_decl_empty OPID_A func_args  */
#line 914 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4056 "src/parser.c"
    break;

  case 212: /* operator: "operator"  */
#line 919 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4062 "src/parser.c"
    break;

  case 213: /* operator: "operator" global  */
#line 919 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4068 "src/parser.c"
    break;

  case 214: /* op_def: operator op_base code_list  */
#line 922 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4074 "src/parser.c"
    break;

  case 215: /* op_def: operator op_base ";"  */
#line 924 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4080 "src/parser.c"
    break;

  case 216: /* op_def: operator "abstract" op_base ";"  */
#line 926 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4086 "src/parser.c"
    break;

  case 220: /* func_def: operator "new" func_args code_list  */
#line 930 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4096 "src/parser.c"
    break;

  case 221: /* func_def: operator "new" func_args ";"  */
#line 936 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4107 "src/parser.c"
    break;

  case 222: /* func_def: operator "abstract" "new" func_args ";"  */
#line 943 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4118 "src/parser.c"
    break;

  case 223: /* type_decl_base: "<identifier>"  */
#line 951 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4124 "src/parser.c"
    break;

  case 224: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 952 "src/gwion.y"
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
#line 4140 "src/parser.c"
    break;

  case 225: /* type_decl_tmpl: type_decl_base call_template  */
#line 966 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4146 "src/parser.c"
    break;

  case 226: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 967 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4152 "src/parser.c"
    break;

  case 228: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 972 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4158 "src/parser.c"
    break;

  case 229: /* option: "?"  */
#line 975 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4164 "src/parser.c"
    break;

  case 230: /* option: OPTIONS  */
#line 975 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4170 "src/parser.c"
    break;

  case 231: /* option: %empty  */
#line 975 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4176 "src/parser.c"
    break;

  case 232: /* type_decl_opt: type_decl_noflag option  */
#line 976 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4182 "src/parser.c"
    break;

  case 234: /* type_decl: type_decl_flag type_decl_opt  */
#line 977 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4188 "src/parser.c"
    break;

  case 235: /* type_decl_flag: "late"  */
#line 980 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4194 "src/parser.c"
    break;

  case 236: /* type_decl_flag: "const"  */
#line 981 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4200 "src/parser.c"
    break;

  case 237: /* opt_var: "var"  */
#line 983 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4206 "src/parser.c"
    break;

  case 238: /* opt_var: %empty  */
#line 983 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4212 "src/parser.c"
    break;

  case 239: /* type_decl_flag2: "var"  */
#line 985 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4218 "src/parser.c"
    break;

  case 241: /* union_decl: "<identifier>" ";"  */
#line 988 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4227 "src/parser.c"
    break;

  case 242: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 992 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4233 "src/parser.c"
    break;

  case 243: /* union_list: union_decl  */
#line 994 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4242 "src/parser.c"
    break;

  case 244: /* union_list: union_list union_decl  */
#line 998 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4251 "src/parser.c"
    break;

  case 245: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 1004 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4263 "src/parser.c"
    break;

  case 246: /* var_decl: "<identifier>"  */
#line 1013 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4269 "src/parser.c"
    break;

  case 247: /* arg_decl: "<identifier>"  */
#line 1015 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4275 "src/parser.c"
    break;

  case 249: /* fptr_arg_decl: %empty  */
#line 1016 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4281 "src/parser.c"
    break;

  case 263: /* opt_exp: exp  */
#line 1024 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4287 "src/parser.c"
    break;

  case 264: /* opt_exp: %empty  */
#line 1024 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4293 "src/parser.c"
    break;

  case 266: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 1027 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4299 "src/parser.c"
    break;

  case 267: /* con_exp: log_or_exp "?:" con_exp  */
#line 1029 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4305 "src/parser.c"
    break;

  case 269: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 1031 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4311 "src/parser.c"
    break;

  case 271: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 1032 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4317 "src/parser.c"
    break;

  case 273: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1033 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4323 "src/parser.c"
    break;

  case 275: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1034 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4329 "src/parser.c"
    break;

  case 277: /* and_exp: and_exp "&" eq_exp  */
#line 1035 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4335 "src/parser.c"
    break;

  case 279: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1036 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4341 "src/parser.c"
    break;

  case 281: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1037 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4347 "src/parser.c"
    break;

  case 283: /* shift_exp: shift_exp shift_op add_exp  */
#line 1038 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4353 "src/parser.c"
    break;

  case 285: /* add_exp: add_exp add_op mul_exp  */
#line 1039 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4359 "src/parser.c"
    break;

  case 287: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1040 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4365 "src/parser.c"
    break;

  case 289: /* dur_exp: dur_exp "::" cast_exp  */
#line 1041 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4371 "src/parser.c"
    break;

  case 291: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1044 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4377 "src/parser.c"
    break;

  case 298: /* unary_exp: unary_op unary_exp  */
#line 1051 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4383 "src/parser.c"
    break;

  case 299: /* unary_exp: "spork" unary_exp  */
#line 1052 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4389 "src/parser.c"
    break;

  case 300: /* unary_exp: "fork" unary_exp  */
#line 1053 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4395 "src/parser.c"
    break;

  case 301: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1054 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4403 "src/parser.c"
    break;

  case 302: /* unary_exp: "new" type_decl_exp  */
#line 1057 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4409 "src/parser.c"
    break;

  case 303: /* unary_exp: "spork" code_list  */
#line 1058 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4415 "src/parser.c"
    break;

  case 304: /* unary_exp: "fork" code_list  */
#line 1059 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4421 "src/parser.c"
    break;

  case 305: /* unary_exp: "spork" captures code_list  */
#line 1060 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4427 "src/parser.c"
    break;

  case 306: /* unary_exp: "fork" captures code_list  */
#line 1061 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4433 "src/parser.c"
    break;

  case 307: /* unary_exp: "$" type_decl_empty  */
#line 1062 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4439 "src/parser.c"
    break;

  case 308: /* lambda_list: "<identifier>"  */
#line 1065 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4449 "src/parser.c"
    break;

  case 309: /* lambda_list: lambda_list "<identifier>"  */
#line 1070 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4459 "src/parser.c"
    break;

  case 310: /* lambda_arg: "\\" lambda_list  */
#line 1075 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4465 "src/parser.c"
    break;

  case 311: /* lambda_arg: "\\"  */
#line 1075 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4471 "src/parser.c"
    break;

  case 312: /* type_list: type_decl_empty  */
#line 1078 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4480 "src/parser.c"
    break;

  case 313: /* type_list: type_list "," type_decl_empty  */
#line 1082 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4489 "src/parser.c"
    break;

  case 314: /* call_paren: "(" exp ")"  */
#line 1088 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4495 "src/parser.c"
    break;

  case 315: /* call_paren: "(" ")"  */
#line 1088 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4501 "src/parser.c"
    break;

  case 318: /* dot_exp: post_exp "." "<identifier>"  */
#line 1092 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4514 "src/parser.c"
    break;

  case 320: /* post_exp: post_exp array_exp  */
#line 1103 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4520 "src/parser.c"
    break;

  case 321: /* post_exp: post_exp range  */
#line 1105 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4526 "src/parser.c"
    break;

  case 322: /* post_exp: post_exp call_template call_paren  */
#line 1107 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4533 "src/parser.c"
    break;

  case 323: /* post_exp: post_exp post_op  */
#line 1110 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4539 "src/parser.c"
    break;

  case 324: /* post_exp: dot_exp  */
#line 1111 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4545 "src/parser.c"
    break;

  case 325: /* interp_exp: "<interp string end>"  */
#line 1115 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4551 "src/parser.c"
    break;

  case 326: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1116 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4557 "src/parser.c"
    break;

  case 327: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1117 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4563 "src/parser.c"
    break;

  case 328: /* interp: "${" interp_exp  */
#line 1119 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4569 "src/parser.c"
    break;

  case 329: /* interp: interp "${" interp_exp  */
#line 1120 "src/gwion.y"
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
#line 4584 "src/parser.c"
    break;

  case 330: /* capture: "<identifier>"  */
#line 1131 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4590 "src/parser.c"
    break;

  case 331: /* capture: "&" "<identifier>"  */
#line 1131 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4596 "src/parser.c"
    break;

  case 332: /* _captures: capture  */
#line 1133 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4602 "src/parser.c"
    break;

  case 333: /* _captures: _captures capture  */
#line 1134 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4608 "src/parser.c"
    break;

  case 334: /* captures: ":" _captures ":"  */
#line 1135 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4614 "src/parser.c"
    break;

  case 335: /* captures: %empty  */
#line 1135 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4620 "src/parser.c"
    break;

  case 338: /* prim_exp: "<identifier>"  */
#line 1138 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4626 "src/parser.c"
    break;

  case 339: /* prim_exp: number  */
#line 1139 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc));
    (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4634 "src/parser.c"
    break;

  case 340: /* prim_exp: "<float>"  */
#line 1142 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4640 "src/parser.c"
    break;

  case 341: /* prim_exp: interp  */
#line 1143 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4646 "src/parser.c"
    break;

  case 342: /* prim_exp: "<litteral string>"  */
#line 1144 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4652 "src/parser.c"
    break;

  case 343: /* prim_exp: "<litteral char>"  */
#line 1145 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4658 "src/parser.c"
    break;

  case 344: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1146 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4671 "src/parser.c"
    break;

  case 345: /* prim_exp: "{" dict_list "}"  */
#line 1154 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4677 "src/parser.c"
    break;

  case 346: /* prim_exp: range  */
#line 1155 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4683 "src/parser.c"
    break;

  case 347: /* prim_exp: "<<<" exp ">>>"  */
#line 1156 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4689 "src/parser.c"
    break;

  case 348: /* prim_exp: "(" exp ")"  */
#line 1157 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4695 "src/parser.c"
    break;

  case 349: /* prim_exp: "`foo`"  */
#line 1158 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4706 "src/parser.c"
    break;

  case 350: /* prim_exp: lambda_arg captures code_list  */
#line 1164 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4712 "src/parser.c"
    break;

  case 351: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1165 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4718 "src/parser.c"
    break;

  case 352: /* prim_exp: "(" op_op ")"  */
#line 1166 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4724 "src/parser.c"
    break;

  case 353: /* prim_exp: "perform" opt_id  */
#line 1167 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4730 "src/parser.c"
    break;

  case 354: /* prim_exp: "(" ")"  */
#line 1168 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4736 "src/parser.c"
    break;


#line 4740 "src/parser.c"

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

#line 1170 "src/gwion.y"

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
