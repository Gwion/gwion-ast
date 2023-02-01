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
  YYSYMBOL_enum_def = 178,                 /* enum_def  */
  YYSYMBOL_when_exp = 179,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 180,          /* match_case_stmt  */
  YYSYMBOL_match_list = 181,               /* match_list  */
  YYSYMBOL_match_stmt = 182,               /* match_stmt  */
  YYSYMBOL_flow = 183,                     /* flow  */
  YYSYMBOL_loop_stmt = 184,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 185,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 186,           /* selection_stmt  */
  YYSYMBOL_breaks = 187,                   /* breaks  */
  YYSYMBOL_jump_stmt = 188,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 189,                 /* exp_stmt  */
  YYSYMBOL_exp = 190,                      /* exp  */
  YYSYMBOL_binary_exp = 191,               /* binary_exp  */
  YYSYMBOL_call_template = 192,            /* call_template  */
  YYSYMBOL_op = 193,                       /* op  */
  YYSYMBOL_array_exp = 194,                /* array_exp  */
  YYSYMBOL_array_empty = 195,              /* array_empty  */
  YYSYMBOL_dict_list = 196,                /* dict_list  */
  YYSYMBOL_range = 197,                    /* range  */
  YYSYMBOL_array = 198,                    /* array  */
  YYSYMBOL_decl_exp = 199,                 /* decl_exp  */
  YYSYMBOL_func_args = 200,                /* func_args  */
  YYSYMBOL_fptr_args = 201,                /* fptr_args  */
  YYSYMBOL_decl_template = 202,            /* decl_template  */
  YYSYMBOL_global = 203,                   /* global  */
  YYSYMBOL_opt_global = 204,               /* opt_global  */
  YYSYMBOL_storage_flag = 205,             /* storage_flag  */
  YYSYMBOL_access_flag = 206,              /* access_flag  */
  YYSYMBOL_flag = 207,                     /* flag  */
  YYSYMBOL_final = 208,                    /* final  */
  YYSYMBOL_modifier = 209,                 /* modifier  */
  YYSYMBOL_func_def_base = 210,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 211,            /* abstract_fdef  */
  YYSYMBOL_op_op = 212,                    /* op_op  */
  YYSYMBOL_op_base = 213,                  /* op_base  */
  YYSYMBOL_operator = 214,                 /* operator  */
  YYSYMBOL_op_def = 215,                   /* op_def  */
  YYSYMBOL_func_def = 216,                 /* func_def  */
  YYSYMBOL_type_decl_base = 217,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 218,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 219,         /* type_decl_noflag  */
  YYSYMBOL_option = 220,                   /* option  */
  YYSYMBOL_type_decl_opt = 221,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 222,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 223,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 224,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 225,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 226,               /* union_decl  */
  YYSYMBOL_union_list = 227,               /* union_list  */
  YYSYMBOL_union_def = 228,                /* union_def  */
  YYSYMBOL_var_decl = 229,                 /* var_decl  */
  YYSYMBOL_arg_decl = 230,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 231,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 232,                    /* eq_op  */
  YYSYMBOL_rel_op = 233,                   /* rel_op  */
  YYSYMBOL_shift_op = 234,                 /* shift_op  */
  YYSYMBOL_add_op = 235,                   /* add_op  */
  YYSYMBOL_mul_op = 236,                   /* mul_op  */
  YYSYMBOL_opt_exp = 237,                  /* opt_exp  */
  YYSYMBOL_con_exp = 238,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 239,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 240,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 241,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 242,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 243,                  /* and_exp  */
  YYSYMBOL_eq_exp = 244,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 245,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 246,                /* shift_exp  */
  YYSYMBOL_add_exp = 247,                  /* add_exp  */
  YYSYMBOL_mul_exp = 248,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 249,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 250,                 /* cast_exp  */
  YYSYMBOL_unary_op = 251,                 /* unary_op  */
  YYSYMBOL_unary_exp = 252,                /* unary_exp  */
  YYSYMBOL_lambda_list = 253,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 254,               /* lambda_arg  */
  YYSYMBOL_type_list = 255,                /* type_list  */
  YYSYMBOL_call_paren = 256,               /* call_paren  */
  YYSYMBOL_post_op = 257,                  /* post_op  */
  YYSYMBOL_dot_exp = 258,                  /* dot_exp  */
  YYSYMBOL_post_exp = 259,                 /* post_exp  */
  YYSYMBOL_interp_exp = 260,               /* interp_exp  */
  YYSYMBOL_interp = 261,                   /* interp  */
  YYSYMBOL_capture = 262,                  /* capture  */
  YYSYMBOL__captures = 263,                /* _captures  */
  YYSYMBOL_captures = 264,                 /* captures  */
  YYSYMBOL_array_lit_end = 265,            /* array_lit_end  */
  YYSYMBOL_prim_exp = 266                  /* prim_exp  */
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
#define YYLAST   2632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  349
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  627

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
       0,   181,   181,   182,   185,   189,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   207,   209,   216,   225,
     229,   230,   234,   240,   241,   245,   249,   254,   254,   256,
     262,   269,   273,   273,   274,   274,   276,   281,   281,   283,
     288,   294,   302,   308,   312,   317,   320,   320,   321,   321,
     323,   326,   332,   332,   333,   333,   334,   343,   343,   345,
     349,   354,   358,   363,   368,   377,   388,   396,   397,   407,
     409,   413,   419,   421,   425,   426,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   442,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     459,   459,   469,   474,   474,   475,   480,   496,   501,   501,
     502,   502,   504,   509,   509,   512,   524,   528,   533,   544,
     555,   556,   560,   569,   579,   589,   600,   613,   631,   640,
     654,   668,   677,   688,   688,   690,   695,   699,   704,   710,
     715,   721,   722,   733,   734,   735,   736,   739,   739,   741,
     741,   741,   741,   741,   744,   745,   748,   752,   753,   754,
     758,   759,   762,   763,   764,   768,   768,   769,   770,   771,
     777,   777,   778,   778,   780,   781,   787,   792,   794,   795,
     795,   797,   797,   799,   800,   803,   804,   805,   806,   809,
     809,   811,   811,   814,   819,   826,   832,   840,   849,   849,
     849,   849,   849,   851,   861,   870,   880,   886,   886,   888,
     890,   892,   895,   895,   895,   896,   902,   909,   918,   919,
     933,   934,   938,   939,   942,   942,   942,   943,   944,   944,
     947,   948,   950,   950,   952,   952,   955,   959,   961,   965,
     971,   980,   982,   983,   983,   985,   985,   986,   986,   986,
     986,   987,   987,   988,   988,   989,   989,   989,   991,   991,
     992,   993,   995,   998,   998,   999,   999,  1000,  1000,  1001,
    1001,  1002,  1002,  1003,  1003,  1004,  1004,  1005,  1005,  1006,
    1006,  1007,  1007,  1008,  1008,  1010,  1010,  1013,  1013,  1013,
    1014,  1014,  1017,  1018,  1019,  1020,  1021,  1024,  1025,  1026,
    1027,  1028,  1029,  1032,  1037,  1042,  1042,  1045,  1049,  1055,
    1055,  1057,  1057,  1059,  1068,  1069,  1071,  1073,  1076,  1078,
    1082,  1083,  1084,  1086,  1087,  1098,  1098,  1100,  1101,  1102,
    1102,  1103,  1103,  1105,  1106,  1107,  1108,  1109,  1110,  1111,
    1119,  1120,  1121,  1122,  1123,  1129,  1130,  1131,  1132,  1133
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
  "opt_comma", "enum_def", "when_exp", "match_case_stmt", "match_list",
  "match_stmt", "flow", "loop_stmt", "defer_stmt", "selection_stmt",
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "dict_list", "range", "array",
  "decl_exp", "func_args", "fptr_args", "decl_template", "global",
  "opt_global", "storage_flag", "access_flag", "flag", "final", "modifier",
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
  "interp_exp", "interp", "capture", "_captures", "captures",
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

#define YYPACT_NINF (-465)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-256)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     605,  -465,  1671,  1828,   713,   324,  -465,    47,  -465,  1142,
    -465,    69,    72,    77,  2376,   324,  1534,  -465,  -465,  1142,
     -23,   126,   324,   324,    25,   297,    25,   324,  -465,  -465,
     324,   324,  -465,    36,  1142,   109,    13,   112,  -465,  -465,
    -465,  -465,  -465,  1787,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
     297,   297,  2512,  2512,  2376,  -465,  -465,  -465,   155,   605,
    -465,  -465,  -465,  -465,  -465,  -465,  1142,  -465,   324,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   161,  -465,
    -465,  -465,    56,  -465,  -465,   212,    58,  -465,  -465,  -465,
    -465,   225,  -465,  -465,  -465,   324,  -465,  -465,    83,   131,
     149,   165,   176,   -42,   298,    96,   152,   193,   196,   208,
      24,  -465,   210,  -465,  -465,   232,   250,  -465,  -465,  2376,
    -465,   315,   321,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,   327,  -465,   329,  -465,
    -465,  -465,  -465,  2376,   230,   306,  -465,   821,    43,   328,
    -465,  -465,  -465,  -465,   338,  -465,  -465,   294,   304,  2376,
     242,  2472,  1575,   267,   358,   289,  -465,   371,   349,  -465,
    -465,  -465,   299,   317,   307,  -465,   309,   324,  -465,    33,
    -465,   295,   279,   352,   274,  -465,   390,    23,  -465,   323,
     395,   297,   326,   313,  -465,  -465,   330,   405,   331,  1924,
    1787,  -465,   345,  -465,  -465,  -465,   410,   929,    -8,  -465,
    -465,   406,  -465,  -465,   406,   316,  -465,  -465,  -465,   297,
    2376,  -465,   416,  -465,  2376,  2376,  2376,  2376,   268,   338,
     452,    55,   297,   297,  2376,    24,    24,    24,    24,    24,
      24,  -465,  -465,    24,    24,    24,  -465,    24,  -465,    24,
      24,   297,  -465,   411,  1828,   337,   297,   417,  -465,  -465,
    -465,  1787,   116,  -465,  -465,   415,  1965,  -465,  -465,  -465,
    -465,  2376,  -465,    48,   215,  -465,   297,  -465,   297,   418,
    2376,   421,    63,  1575,    31,   403,   420,  -465,  -465,  -465,
     349,   312,   386,  -465,  -465,   312,   339,   297,   279,   348,
    -465,    23,  -465,  -465,  -465,  2061,  -465,   425,  -465,  -465,
     374,   288,   407,   351,   312,   348,  -465,   297,   435,  -465,
     382,  -465,  1787,  2376,  -465,  1037,  -465,   360,  -465,    52,
     929,  -465,  -465,  -465,   361,   440,  -465,  -465,  -465,  -465,
    -465,   338,   444,   216,   338,   312,   312,  -465,  -465,   312,
      44,  -465,   354,  -465,   131,   149,   165,   176,   -42,   298,
      96,   152,   193,   196,   208,  -465,   929,  -465,    19,  -465,
    -465,   163,  2102,  -465,  -465,  -465,  -465,   441,    67,  -465,
     368,  -465,   286,  -465,  -465,   369,   370,  1142,   451,  2376,
    1142,  2198,   376,   443,  2376,  -465,    91,   348,   -23,  -465,
      -5,   414,  -465,   339,   348,   239,   312,  -465,  -465,   373,
    -465,  -465,   453,  2239,  -465,   457,  -465,   368,  -465,   303,
     379,   381,   462,   312,   456,   246,  -465,   464,   463,   297,
    -465,  -465,   466,  -465,  -465,  -465,  -465,   312,  1142,   470,
    -465,  -465,  -465,  -465,   469,   471,   473,  2376,  -465,  -465,
      24,    39,   468,   297,  -465,  -465,   474,  -465,  2376,  -465,
     387,   297,  -465,   312,   312,   472,  -465,    75,  -465,  1142,
     477,   392,  -465,  2376,   460,   465,  -465,   485,  1142,   484,
     339,   251,   297,   339,   486,   491,  -465,  1338,  -465,   395,
    -465,   422,  -465,  -465,  -465,  -465,   297,  -465,  -465,  -465,
    -465,  -465,   300,  -465,   297,   406,   492,  -465,   475,  -465,
    -465,   297,   297,   297,   497,  -465,  -465,  2335,  -465,  -465,
    -465,  -465,  2376,  -465,   395,  -465,  1142,  1142,  -465,  1142,
     443,    80,  2376,   412,  1142,   422,   493,  -465,  -465,  -465,
     101,  -465,  -465,   487,   605,  -465,  1436,  -465,  1240,  -465,
    -465,  -465,   407,  -465,  -465,   504,   426,  -465,   318,   431,
    -465,  -465,   406,  2376,   509,   510,   507,   511,   432,  -465,
      94,   513,  -465,  -465,  -465,  2376,  1142,  -465,  1142,  -465,
    -465,   514,   339,   605,   605,   508,  -465,  -465,  -465,   512,
    -465,   518,  -465,  -465,  -465,  -465,    94,  -465,   297,  -465,
    -465,  -465,  -465,    85,  -465,  1142,  -465,  -465,   515,  -465,
    -465,  -465,   517,  1142,  -465,  -465,  -465
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   140,     0,   259,     0,   188,   234,     0,   120,     0,
     121,     0,     0,     0,     0,   188,     0,   133,   134,     0,
     109,     0,   188,   188,   180,     0,   207,   188,    54,    55,
     188,   188,   231,     0,     0,   306,     0,     0,   230,    30,
     335,   337,   338,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   333,   311,   287,   312,   288,
       0,     0,     0,     0,     0,   291,   290,   344,     0,     2,
       4,     8,     9,   334,    15,    10,     6,    13,   188,    14,
      92,    95,    43,    99,    98,    97,    11,    93,     0,    90,
      96,    91,     0,    94,    89,     0,   141,   341,   143,   212,
     213,     0,   214,     7,   235,   188,    12,   167,   260,   263,
     265,   267,   269,   271,   273,   275,   277,   279,   281,   283,
       0,   285,   330,   289,   319,   292,   336,   314,   349,     0,
     253,   287,   288,   256,   257,   153,   149,   250,   248,   249,
     247,   150,   251,   252,   151,   152,     0,   198,     0,   200,
     199,   202,   201,     0,   258,     0,    72,     0,   141,     0,
     181,   178,   183,   184,     0,   182,   186,   185,   190,     0,
       0,     0,     0,     0,     0,     0,   136,     0,     0,   108,
     348,   102,     0,   190,     0,   179,     0,   188,   218,     0,
      60,     0,   148,   222,   226,   228,    58,     0,   208,     0,
       0,     0,     0,     0,   130,   303,   305,     0,     0,     0,
       0,   320,     0,   323,   302,    59,   297,     0,     0,   298,
     294,     0,   299,   295,     0,     0,     1,     5,    44,     0,
       0,   138,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,     0,     0,     0,     0,     0,
       0,   245,   246,     0,     0,     0,   254,     0,   255,     0,
       0,     0,   293,     0,     0,     0,     0,     0,   315,   316,
     318,     0,     0,   343,   347,     0,     0,   332,   331,   339,
      73,     0,   340,     0,     0,   187,     0,   189,     0,     0,
       0,   333,     0,     0,     0,     0,     0,   135,   103,   105,
     107,   177,   190,   192,    16,   177,    34,     0,   148,     0,
     220,     0,   224,   225,   227,     0,   165,   166,    57,   229,
       0,     0,    48,     0,   177,     0,   304,    68,     0,    88,
       0,   321,     0,   259,    74,     0,   325,     0,   327,     0,
       0,   300,   301,   342,     0,     0,   137,   142,   146,   144,
     145,     0,     0,     0,     0,   177,   177,   210,   209,   177,
       0,   258,     0,   262,   264,   266,   268,   270,   272,   274,
     276,   278,   280,   282,   284,   286,     0,   345,     0,   313,
     307,     0,     0,   317,   324,   164,   163,     0,   160,   171,
       0,    63,     0,   194,   193,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,   116,     0,     0,   109,   106,
       0,    33,   191,    34,     0,     0,   177,   221,    39,     0,
     223,   157,     0,     0,   159,     0,   173,   244,    70,     0,
       0,    49,     0,   177,     0,     0,    65,    67,     0,    68,
      87,   322,     0,    75,   326,   329,   328,   177,     0,     0,
     211,   216,   215,   206,     0,     0,     0,   259,   241,   168,
       0,   141,   154,     0,   147,   310,     0,   162,     0,   242,
      62,     0,   170,   177,   177,   131,   123,     0,   128,     0,
       0,     0,   232,     0,   114,   119,   117,   111,     0,     0,
      34,     0,     0,    34,     0,    35,    28,     0,    29,     0,
      36,     0,   158,    31,   243,    69,     0,   172,    46,    47,
      51,    45,     0,   100,     0,     0,     0,   296,    52,   122,
     217,     0,     0,     0,     0,   261,   346,     0,   155,   308,
     309,   161,     0,    64,     0,    50,     0,     0,   124,     0,
     233,     0,     0,     0,     0,   110,     0,   104,   176,    41,
       0,   174,    32,     0,    38,    21,    23,    25,     0,    20,
      19,    24,    48,    40,    71,   218,     0,   238,     0,     0,
      66,   196,     0,     0,     0,     0,     0,     0,     0,   156,
      61,     0,   132,   129,   125,     0,     0,   113,     0,   118,
     112,     0,    34,    38,    37,     0,    22,    27,    26,     0,
     236,     0,   240,   239,   101,   195,    53,    56,     0,   204,
     205,   169,   197,     0,   126,   115,   175,    42,     0,    18,
     219,   237,     0,     0,    17,   203,   127
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -465,  -465,   524,   -61,   252,  -465,   -31,  -465,   -29,  -465,
    -465,  -465,   -74,  -465,  -465,  -392,  -465,   -59,  -160,  -465,
      -3,  -465,  -465,   -30,  -465,  -465,  -465,  -465,  -465,   -55,
      51,   -18,  -270,  -465,  -465,   105,    40,  -465,  -465,   -52,
    -464,    -9,  -465,  -465,  -465,   248,  -465,  -465,  -465,   141,
    -465,  -465,  -465,   145,  -465,  -465,   383,  -465,  -465,  -465,
    -465,  -465,  -163,    54,    -1,  -166,  -465,  -191,  -465,    84,
     429,  -465,    60,  -202,  -435,  -283,   205,  -465,   396,  -465,
      15,  -159,  -465,  -465,  -465,   325,   335,  -465,  -465,  -453,
     375,  -465,   255,  -465,   372,  -465,   -21,    27,  -465,     0,
    -465,  -465,    -4,   148,  -465,  -465,  -112,  -101,   -99,   -98,
    -229,  -233,  -465,   332,   333,   334,   340,   336,   341,   322,
     342,   343,   320,   344,   -85,    76,  -465,  -465,  -465,  -465,
     -93,  -465,  -465,  -187,  -465,   244,  -465,   -27,  -465,  -465
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,   594,    70,   182,    71,   555,   556,   557,   558,
     498,    72,    73,    74,   493,   415,    75,   595,   419,   491,
      76,   200,   431,   432,   164,    77,   574,    78,    79,   190,
     216,   390,   436,   392,   437,   438,   428,   429,    80,   219,
      81,    82,    83,   569,    84,   299,   408,   300,    85,   180,
     546,    86,   543,   405,   406,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,   267,   147,   268,   317,   159,
      97,   318,    98,   284,   322,   411,   165,   186,   166,   167,
     183,   288,   304,    99,   100,   148,   241,   101,   102,   103,
     192,   193,   194,   314,   195,   196,   104,   483,   105,   567,
     568,   106,   459,   470,   505,   253,   149,   150,   151,   152,
     155,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   206,   122,   381,   383,
     123,   124,   125,   213,   126,   338,   339,   221,   279,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   254,   158,   197,   316,   215,   191,   227,   293,
     178,   222,   363,   391,   255,   362,   242,   257,   232,   259,
     168,   494,   413,   331,   303,   204,   310,   462,   187,     2,
     175,     3,   270,   559,   129,   402,   224,   353,   187,   197,
     197,   434,   214,   234,   561,   201,   202,   234,   489,   457,
     526,   161,   169,   187,   389,    20,   146,   154,   357,   231,
     179,   251,   234,   161,   562,   340,   252,   228,   174,   400,
     177,   468,   454,   455,   171,   336,   456,   172,   490,    35,
     197,   537,   173,   240,   384,    39,   586,    40,    41,    42,
      43,   623,   559,   229,   559,   263,   207,   212,   549,   581,
      32,   553,   485,   337,   442,   561,   188,    55,    38,    56,
      57,    58,    59,   276,   404,    60,   188,    39,   225,   203,
     243,    61,    62,    63,    64,   403,   424,   458,   272,   181,
     401,   188,   235,   499,   189,   336,   235,   281,   220,   223,
      65,    66,   417,   412,    67,   441,   445,   356,   228,   449,
     511,   235,   453,   242,   591,   226,   235,   236,   237,   189,
     235,   236,   237,   337,   518,   435,   230,   463,   235,   341,
     292,   464,   342,   235,   344,   244,   236,   237,   235,   245,
     197,   236,   237,   323,   592,   236,   237,   235,   360,   358,
     534,   535,   205,   236,   237,   209,   262,   246,   236,   237,
     617,   533,   307,   236,   237,   142,   143,   275,   197,   235,
     281,   377,   236,   237,   335,   233,   158,   197,   393,   451,
     240,   197,   197,   289,   359,   340,   340,   525,   524,   185,
     187,   198,   394,   247,   236,   237,   130,  -148,   256,   264,
     197,   208,   496,   375,   570,   197,   425,   487,   380,   497,
     501,   575,   576,   577,   495,   550,   513,   254,     8,   551,
      10,   248,   197,   330,   212,   197,   238,   197,   395,   255,
     396,   528,   257,   187,   259,   184,   265,    32,   249,   199,
     388,   258,   133,   134,   345,    38,   197,   250,   347,   416,
     471,   260,   472,   187,   426,   348,   349,   350,   361,   261,
     197,   452,   187,   427,   218,   187,   197,   506,   188,   507,
      56,    57,    58,    59,   277,   278,   271,    56,   378,    58,
      32,  -254,   239,   187,   276,   212,   228,  -255,    38,   602,
     387,   160,   161,   273,   560,   274,   189,   335,   622,   282,
      32,    65,    66,   283,   398,   286,   287,   266,    38,    32,
     294,   188,    32,    56,    57,    58,    59,    38,   302,   287,
      38,   160,   161,   162,   163,   351,   312,   313,   295,   422,
      32,   188,   296,   335,   297,   461,   500,   501,    38,   189,
     188,   298,   301,   565,    65,    66,   212,   361,   475,   309,
     305,   478,   306,   560,   266,   560,   311,   315,   477,   189,
     321,   565,   137,   138,   139,   140,   320,   325,   189,   324,
     327,   189,   332,   326,   328,   333,   340,   343,   197,   346,
     379,   376,   382,   385,   397,   399,   404,   410,   287,   189,
     407,   418,   423,   414,   433,    39,   466,   215,   430,   519,
     439,   440,   197,   444,   447,   529,   448,   450,   460,   467,
     197,   469,   473,   474,   476,   480,   482,   492,   484,   481,
     503,   462,   508,   571,   509,   510,   512,   272,   514,   515,
     538,   197,   517,   520,   521,   527,   522,   422,   523,   547,
     530,   532,   541,   539,   542,   197,   540,   536,   427,   545,
     544,   197,   548,   197,   566,   501,   554,   593,   572,   573,
     197,   197,   197,   578,   590,   563,   588,   600,   354,   601,
     604,   361,   607,   609,   608,   458,   612,   610,   620,   619,
     605,   621,   616,   625,    69,   596,   624,   582,   583,   598,
     584,   580,   599,   227,   618,   589,   130,    56,   256,    58,
     258,   133,   134,   552,   516,   135,   564,   197,   409,   488,
     566,   486,   531,   290,   269,   136,   137,   138,   139,   140,
     141,   142,   143,   285,   308,   355,   420,   585,   603,   319,
     144,   145,   606,   352,   611,   504,   370,   614,   364,   373,
     365,   422,   366,   446,   613,   615,   368,   197,     0,   367,
       0,     0,     0,     0,   369,     0,   587,   371,     0,     0,
     372,     0,     0,     0,   374,     0,   228,     0,     1,     0,
       2,     0,     3,     0,   626,     4,     0,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,    30,     0,    31,    32,    33,    34,
      35,     0,    36,    37,     0,    38,    39,     0,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,    65,    66,     4,   156,    67,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,     0,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,    65,
      66,     4,   280,    67,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     334,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    65,    66,     4,   443,    67,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     0,     4,    65,    66,     6,     7,    67,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     1,     0,     2,     0,     3,     0,     0,
     129,   597,     5,     6,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    35,     0,    36,    37,     0,
      38,    39,     0,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     1,     0,     2,     0,     3,     0,     0,   129,     0,
       5,     6,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    35,     0,    36,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     1,
       0,     2,     0,     3,     0,     0,   129,     0,     0,     6,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    35,     0,     0,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,   176,     0,     2,
       0,     3,     0,     0,   129,     0,     0,     6,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     0,   129,    32,     0,     6,    35,
       0,     0,     0,     0,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,    32,     0,     0,
      35,    61,    62,    63,    64,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     2,   128,     3,     0,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,   130,    56,   131,    58,   132,
     133,   134,    60,     0,   135,     0,     0,     0,    61,    62,
      63,    64,     0,     0,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,     0,     0,     0,    65,    66,   144,
     145,    67,     2,     0,     3,     0,     0,   129,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,   129,    32,
       0,     6,    35,     0,     0,     0,     0,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,   210,   211,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
      32,     0,     0,    35,    61,    62,    63,    64,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,   153,     0,     0,    61,    62,    63,    64,     2,
       0,     3,     0,     0,   129,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,   386,     0,   129,    32,     0,     6,    35,
       0,     0,     0,   329,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,    32,     0,     0,
      35,    61,    62,    63,    64,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     2,     0,     3,   421,
       0,   129,     0,     0,     6,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   465,     3,
       0,     0,   129,    32,     0,     6,    35,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,    32,     0,     0,    35,    61,    62,
      63,    64,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     2,   479,     3,     0,     0,   129,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,   502,     0,   129,
      32,     0,     6,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,    32,     0,     0,    35,    61,    62,    63,    64,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       2,     0,     3,   579,     0,   129,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,   129,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,     0,     3,
       0,     0,   129,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,   217,     0,    32,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,    35,     0,    61,
      62,    63,    64,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,   218,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67
};

static const yytype_int16 yycheck[] =
{
       9,     4,   114,     4,    25,   196,    61,    25,    69,   172,
      19,    63,   245,   283,   115,   244,   101,   116,    92,   117,
       5,   413,   305,   210,   183,    34,   192,     8,     5,     5,
      15,     7,   125,   497,    10,     4,    63,   239,     5,    60,
      61,   324,    60,     4,   497,    30,    31,     4,    53,     5,
      11,    38,     5,     5,     6,    31,     2,     3,     3,     3,
      83,   103,     4,    38,   499,    10,   108,    76,    14,     6,
      16,     4,   355,   356,     5,    83,   359,     5,    83,    55,
     101,     6,     5,   101,   271,    61,     6,    63,    64,    65,
      66,     6,   556,    78,   558,   122,    83,    43,   490,   534,
      52,   493,    11,   111,   333,   558,    83,    83,    60,    85,
      86,    87,    88,    94,    23,    91,    83,    61,    64,    83,
     105,    97,    98,    99,   100,    94,   317,    83,   129,     3,
     293,    83,    93,   416,   111,    83,    93,    94,    62,    63,
     116,   117,   308,   302,   120,   332,    94,   240,   157,   351,
     433,    93,   354,   238,    53,     0,    93,   118,   119,   111,
      93,   118,   119,   111,   447,   325,     5,     4,    93,   221,
     171,     8,   224,    93,   229,    92,   118,   119,    93,    96,
     201,   118,   119,   201,    83,   118,   119,    93,   243,   241,
     473,   474,    83,   118,   119,    83,   120,   114,   118,   119,
     592,   471,   187,   118,   119,   109,   110,   153,   229,    93,
      94,   263,   118,   119,   217,     3,   217,   238,     3,     3,
     238,   242,   243,   169,   242,    10,    10,   460,   457,    24,
       5,    26,   284,   102,   118,   119,    84,     5,    86,     7,
     261,    36,     3,   261,   514,   266,   320,   407,   266,    10,
       4,   521,   522,   523,   414,     4,    10,   369,    16,     8,
      18,   112,   283,   209,   210,   286,    41,   288,   286,   370,
     288,   462,   371,     5,   372,    23,    44,    52,   113,    27,
     281,    88,    89,    90,   230,    60,   307,   111,   234,   307,
       4,    95,     6,     5,     6,   235,   236,   237,   244,    91,
     321,   353,     5,   321,    94,     5,   327,     4,    83,     6,
      85,    86,    87,    88,     8,     9,    66,    85,   264,    87,
      52,     6,    97,     5,    94,   271,   335,     6,    60,    11,
     276,    37,    38,     6,   497,     6,   111,   340,   608,    11,
      52,   116,   117,     5,   290,    41,    42,   115,    60,    52,
      83,    83,    52,    85,    86,    87,    88,    60,    41,    42,
      60,    37,    38,    39,    40,    97,    92,    93,    10,   315,
      52,    83,    83,   376,     3,   376,     3,     4,    60,   111,
      83,    32,    83,    83,   116,   117,   332,   333,   397,    94,
      83,   400,    83,   556,   115,   558,    44,     7,   399,   111,
       5,    83,   104,   105,   106,   107,    83,    94,   111,    83,
       5,   111,    67,    83,    83,     5,    10,   101,   439,     3,
      83,    10,     5,     8,     6,     4,    23,   115,    42,   111,
      10,    83,     7,    94,    83,    61,   382,   492,    31,   448,
       5,    59,   463,    83,    83,   463,     6,     3,    94,     8,
     471,    83,    83,    83,     3,   401,    13,    43,   404,    83,
       3,     8,    83,   515,    83,     3,    10,   468,     4,     6,
     479,   492,     6,     3,     5,     7,     5,   423,     5,   488,
       6,    94,   483,     6,    24,   506,    94,    15,   506,     4,
      25,   512,     8,   514,   512,     4,    10,    10,     6,    24,
     521,   522,   523,     6,    11,    83,    94,     3,    56,    83,
      79,   457,     3,     6,     4,    83,     3,     6,     6,    11,
     572,     3,     8,     6,     0,   556,    11,   536,   537,   558,
     539,   532,   562,   594,   593,   544,    84,    85,    86,    87,
      88,    89,    90,   492,   439,    93,   506,   568,   300,   408,
     568,   406,   468,   170,   125,   103,   104,   105,   106,   107,
     108,   109,   110,   167,   189,   240,   311,   540,   568,   197,
     118,   119,   573,   238,   578,   427,   254,   586,   246,   259,
     247,   527,   248,   339,   585,   588,   250,   608,    -1,   249,
      -1,    -1,    -1,    -1,   253,    -1,   542,   255,    -1,    -1,
     257,    -1,    -1,    -1,   260,    -1,   615,    -1,     3,    -1,
       5,    -1,     7,    -1,   623,    10,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
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
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,   116,
     117,    10,    11,   120,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
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
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,   116,   117,    13,    14,   120,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,     3,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    58,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,    -1,    10,    52,    -1,    13,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,    -1,
      55,    97,    98,    99,   100,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,    -1,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,   120,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    10,    52,
      -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      52,    -1,    -1,    55,    97,    98,    99,   100,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    94,    -1,    -1,    97,    98,    99,   100,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,     8,    -1,    10,    52,    -1,    13,    55,
      -1,    -1,    -1,    59,    60,    61,    -1,    63,    64,    65,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
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
      -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,    10,
      52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    52,    -1,    -1,    55,    97,    98,    99,   100,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    10,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    55,    -1,    97,
      98,    99,   100,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120
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
     165,   167,   168,   169,   171,   175,   178,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   197,   199,   210,
     211,   214,   215,   216,   223,   225,   228,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   254,   257,   258,   259,   261,   266,     6,    10,
      84,    86,    88,    89,    90,    93,   103,   104,   105,   106,
     107,   108,   109,   110,   118,   119,   190,   193,   212,   233,
     234,   235,   236,    94,   190,   237,    11,   147,   191,   196,
      37,    38,    39,    40,   151,   203,   205,   206,   207,     5,
     168,     5,     5,     5,   190,   207,     3,   190,   168,    83,
     176,     3,   131,   207,   131,   203,   204,     5,    83,   111,
     156,   158,   217,   218,   219,   221,   222,   223,   203,   131,
     148,   207,   207,    83,   168,    83,   253,    83,   203,    83,
      80,    81,   190,   260,   158,   156,   157,    10,    94,   166,
     252,   264,   166,   252,   264,   190,     0,   130,   168,   207,
       5,     3,   139,     3,     4,    93,   118,   119,    41,    97,
     158,   213,   251,   207,    92,    96,   114,   102,   112,   113,
     111,   103,   108,   232,   233,   234,    86,   235,    88,   236,
      95,    91,   252,   264,     7,    44,   115,   192,   194,   197,
     257,    66,   191,     6,     6,   190,    94,     8,     9,   265,
      11,    94,    11,     5,   200,   205,    41,    42,   208,   190,
     183,    83,   191,   189,    83,    10,    83,     3,    32,   172,
     174,    83,    41,   208,   209,    83,    83,   207,   217,    94,
     192,    44,    92,    93,   220,     7,   194,   195,   198,   221,
      83,     5,   201,   158,    83,    94,    83,     5,    83,    59,
     190,   260,    67,     5,    11,   147,    83,   111,   262,   263,
      10,   166,   166,   101,   156,   190,     3,   190,   199,   199,
     199,    97,   213,   200,    56,   212,   257,     3,   166,   158,
     156,   190,   237,   238,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   158,    10,   166,   190,    83,
     158,   255,     5,   256,   260,     8,     8,   190,   191,     6,
     158,   159,   160,     3,   166,   158,   158,     6,   190,     4,
       6,   189,     4,    94,    23,   180,   181,    10,   173,   172,
     115,   202,   208,   202,    94,   142,   158,   192,    83,   145,
     219,     8,   190,     7,   194,   139,     6,   158,   163,   164,
      31,   149,   150,    83,   202,   145,   159,   161,   162,     5,
      59,   260,   237,    11,    83,    94,   262,    83,     6,   200,
       3,     3,   166,   200,   202,   202,   202,     5,    83,   229,
      94,   191,     8,     4,     8,     6,   190,     8,     4,    83,
     230,     4,     6,    83,    83,   168,     3,   191,   168,     6,
     190,    83,    13,   224,   190,    11,   180,   145,   176,    53,
      83,   146,    43,   141,   142,   145,     3,    10,   137,   202,
       3,     4,     8,     3,   230,   231,     4,     6,    83,    83,
       3,   202,    10,    10,     4,     6,   162,     6,   202,   168,
       3,     5,     5,     5,   237,   238,    11,     7,   194,   158,
       6,   196,    94,   159,   202,   202,    15,     6,   168,     6,
      94,   191,    24,   179,    25,     4,   177,   168,     8,   142,
       4,     8,   157,   142,    10,   133,   134,   135,   136,   167,
     189,   216,   201,    83,   163,    83,   158,   226,   227,   170,
     159,   166,     6,    24,   153,   159,   159,   159,     6,     8,
     191,   201,   168,   168,   168,   224,     6,   190,    94,   168,
      11,    53,    83,    10,   129,   144,   133,    11,   135,   150,
       3,    83,    11,   226,    79,   166,   191,     3,     4,     6,
       6,   229,     3,   191,   168,   147,     8,   142,   144,    11,
       6,     3,   159,     6,    11,     6,   168
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
     177,   177,   178,   179,   179,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   184,   184,   184,   184,   184,   184,
     185,   186,   186,   187,   187,   188,   188,   188,   188,   189,
     189,   190,   190,   191,   191,   191,   191,   192,   192,   193,
     193,   193,   193,   193,   194,   194,   194,   195,   195,   195,
     196,   196,   197,   197,   197,   198,   198,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   202,   202,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   207,   207,   208,
     208,   209,   209,   210,   210,   210,   210,   211,   212,   212,
     212,   212,   212,   213,   213,   213,   213,   214,   214,   215,
     215,   215,   216,   216,   216,   216,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   220,   221,   222,   222,
     223,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   229,   230,   231,   231,   232,   232,   233,   233,   233,
     233,   234,   234,   235,   235,   236,   236,   236,   237,   237,
     238,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   251,   251,   251,
     251,   251,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   259,   259,   259,   259,   259,   259,
     260,   260,   260,   261,   261,   262,   262,   263,   263,   264,
     264,   265,   265,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266
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
       1,     0,     7,     2,     0,     5,     1,     2,     7,     5,
       1,     1,     5,     5,     6,     7,     8,    10,     5,     7,
       2,     5,     7,     1,     1,     3,     2,     3,     2,     2,
       1,     1,     3,     1,     3,     3,     3,     3,     0,     1,
       1,     1,     1,     1,     3,     4,     5,     2,     3,     2,
       3,     5,     5,     4,     4,     1,     1,     1,     4,     7,
       3,     2,     3,     2,     3,     5,     3,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       0,     2,     1,     4,     4,     7,     6,     8,     1,     1,
       1,     1,     1,     8,     6,     6,     3,     1,     2,     3,
       3,     4,     1,     1,     1,     4,     4,     5,     1,     7,
       2,     3,     1,     3,     1,     1,     0,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     2,     3,     1,     2,
       7,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     5,     2,     2,     2,
       3,     3,     2,     1,     2,     2,     1,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     2,     3,     2,     1,
       1,     2,     3,     2,     3,     1,     2,     1,     2,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     5,     3,     2,     2
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
#line 181 "src/gwion.y"
         { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2576 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 182 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2582 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 185 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2591 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 189 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2600 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 195 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2606 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 196 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2612 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 197 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2618 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 198 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2624 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 199 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2630 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 200 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2636 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 201 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2642 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2648 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2654 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 204 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2660 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 207 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2666 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 210 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2677 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits "{" class_body "}"  */
#line 217 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-6].flag), (yyvsp[-5].sym), NULL, (yyvsp[-1].ast), (yylsp[-5]));
      if((yyvsp[-4].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-4].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2689 "src/parser.c"
    break;

  case 19: /* trait_stmt: exp_stmt  */
#line 225 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2699 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt  */
#line 230 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2708 "src/parser.c"
    break;

  case 22: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 234 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2717 "src/parser.c"
    break;

  case 23: /* trait_section: trait_stmt_list  */
#line 240 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2723 "src/parser.c"
    break;

  case 24: /* trait_section: func_def  */
#line 241 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2729 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_section  */
#line 245 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2738 "src/parser.c"
    break;

  case 26: /* trait_ast: trait_ast trait_section  */
#line 249 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2747 "src/parser.c"
    break;

  case 27: /* trait_body: "{" trait_ast "}"  */
#line 254 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2753 "src/parser.c"
    break;

  case 28: /* trait_body: ";"  */
#line 254 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2759 "src/parser.c"
    break;

  case 29: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 257 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2768 "src/parser.c"
    break;

  case 30: /* number: NUM  */
#line 262 "src/gwion.y"
            {
  if((yyvsp[0].lval) > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.lval) = (yyvsp[0].lval);
}
#line 2779 "src/parser.c"
    break;

  case 31: /* prim_def: "primitive" class_flag "<identifier>" number ";"  */
#line 270 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].lval), (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2787 "src/parser.c"
    break;

  case 32: /* class_ext: "extends" type_decl_exp  */
#line 273 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2793 "src/parser.c"
    break;

  case 33: /* class_ext: %empty  */
#line 273 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2799 "src/parser.c"
    break;

  case 34: /* traits: %empty  */
#line 274 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2805 "src/parser.c"
    break;

  case 35: /* traits: ":" id_list  */
#line 274 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2811 "src/parser.c"
    break;

  case 36: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 276 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2819 "src/parser.c"
    break;

  case 38: /* class_body: %empty  */
#line 281 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2825 "src/parser.c"
    break;

  case 39: /* id_list: "<identifier>"  */
#line 284 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2834 "src/parser.c"
    break;

  case 40: /* id_list: id_list "," "<identifier>"  */
#line 289 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2843 "src/parser.c"
    break;

  case 41: /* specialized_list: "<identifier>" traits  */
#line 294 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2856 "src/parser.c"
    break;

  case 42: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 302 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2866 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt  */
#line 308 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2875 "src/parser.c"
    break;

  case 44: /* stmt_list: stmt_list stmt  */
#line 312 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2884 "src/parser.c"
    break;

  case 45: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 317 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2891 "src/parser.c"
    break;

  case 46: /* _func_effects: "perform" "<identifier>"  */
#line 320 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2897 "src/parser.c"
    break;

  case 47: /* _func_effects: _func_effects "<identifier>"  */
#line 320 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2903 "src/parser.c"
    break;

  case 48: /* func_effects: %empty  */
#line 321 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2909 "src/parser.c"
    break;

  case 49: /* func_effects: _func_effects  */
#line 321 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2915 "src/parser.c"
    break;

  case 50: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 323 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2922 "src/parser.c"
    break;

  case 51: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 326 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2932 "src/parser.c"
    break;

  case 52: /* typedef_when: %empty  */
#line 332 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2938 "src/parser.c"
    break;

  case 53: /* typedef_when: "when" binary_exp  */
#line 332 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2944 "src/parser.c"
    break;

  case 54: /* type_def_type: "typedef"  */
#line 333 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2950 "src/parser.c"
    break;

  case 55: /* type_def_type: "distinct"  */
#line 333 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2956 "src/parser.c"
    break;

  case 56: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 334 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2969 "src/parser.c"
    break;

  case 57: /* type_decl_array: type_decl array  */
#line 343 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2975 "src/parser.c"
    break;

  case 59: /* type_decl_exp: type_decl_array  */
#line 345 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2983 "src/parser.c"
    break;

  case 60: /* type_decl_empty: type_decl_array  */
#line 349 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2991 "src/parser.c"
    break;

  case 61: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 354 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 3000 "src/parser.c"
    break;

  case 62: /* arg: type_decl_empty arg_decl  */
#line 358 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 3009 "src/parser.c"
    break;

  case 63: /* arg_list: arg  */
#line 363 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3019 "src/parser.c"
    break;

  case 64: /* arg_list: arg_list "," arg  */
#line 368 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3031 "src/parser.c"
    break;

  case 65: /* locale_arg: arg  */
#line 377 "src/gwion.y"
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
#line 3047 "src/parser.c"
    break;

  case 66: /* locale_arg: locale_arg "," arg  */
#line 388 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3059 "src/parser.c"
    break;

  case 68: /* locale_list: %empty  */
#line 397 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3073 "src/parser.c"
    break;

  case 69: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 407 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3079 "src/parser.c"
    break;

  case 70: /* fptr_list: fptr_arg  */
#line 409 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3088 "src/parser.c"
    break;

  case 71: /* fptr_list: fptr_list "," fptr_arg  */
#line 413 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3097 "src/parser.c"
    break;

  case 72: /* code_stmt: "{" "}"  */
#line 419 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3104 "src/parser.c"
    break;

  case 73: /* code_stmt: "{" stmt_list "}"  */
#line 421 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3111 "src/parser.c"
    break;

  case 74: /* code_list: "{" "}"  */
#line 425 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3117 "src/parser.c"
    break;

  case 75: /* code_list: "{" stmt_list "}"  */
#line 426 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3123 "src/parser.c"
    break;

  case 76: /* stmt_pp: "<comment>"  */
#line 429 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3129 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#include"  */
#line 430 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3135 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#define"  */
#line 431 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3141 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#pragma"  */
#line 432 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3147 "src/parser.c"
    break;

  case 80: /* stmt_pp: "#undef"  */
#line 433 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3153 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#ifdef"  */
#line 434 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3159 "src/parser.c"
    break;

  case 82: /* stmt_pp: "#ifndef"  */
#line 435 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3165 "src/parser.c"
    break;

  case 83: /* stmt_pp: "#else"  */
#line 436 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3171 "src/parser.c"
    break;

  case 84: /* stmt_pp: "#if"  */
#line 437 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3177 "src/parser.c"
    break;

  case 85: /* stmt_pp: "\n"  */
#line 438 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3183 "src/parser.c"
    break;

  case 86: /* stmt_pp: "import"  */
#line 439 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3189 "src/parser.c"
    break;

  case 87: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 440 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3196 "src/parser.c"
    break;

  case 88: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 442 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3203 "src/parser.c"
    break;

  case 100: /* $@1: %empty  */
#line 459 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3209 "src/parser.c"
    break;

  case 101: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 459 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3223 "src/parser.c"
    break;

  case 102: /* retry_stmt: "retry" ";"  */
#line 469 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3233 "src/parser.c"
    break;

  case 103: /* $@2: %empty  */
#line 474 "src/gwion.y"
                  { arg->handling = true; }
#line 3239 "src/parser.c"
    break;

  case 104: /* handler: "handle" $@2 opt_id stmt  */
#line 474 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3245 "src/parser.c"
    break;

  case 105: /* handler_list: handler  */
#line 475 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3255 "src/parser.c"
    break;

  case 106: /* handler_list: handler_list handler  */
#line 480 "src/gwion.y"
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
#line 3276 "src/parser.c"
    break;

  case 107: /* try_stmt: "try" stmt handler_list  */
#line 496 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3285 "src/parser.c"
    break;

  case 109: /* opt_id: %empty  */
#line 501 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3291 "src/parser.c"
    break;

  case 111: /* opt_comma: %empty  */
#line 502 "src/gwion.y"
                 {}
#line 3297 "src/parser.c"
    break;

  case 112: /* enum_def: "enum" flag "<identifier>" "{" id_list opt_comma "}"  */
#line 504 "src/gwion.y"
                                             {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].id_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3306 "src/parser.c"
    break;

  case 113: /* when_exp: "when" exp  */
#line 509 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3312 "src/parser.c"
    break;

  case 114: /* when_exp: %empty  */
#line 509 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3318 "src/parser.c"
    break;

  case 115: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 512 "src/gwion.y"
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
#line 3334 "src/parser.c"
    break;

  case 116: /* match_list: match_case_stmt  */
#line 524 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3343 "src/parser.c"
    break;

  case 117: /* match_list: match_list match_case_stmt  */
#line 528 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3352 "src/parser.c"
    break;

  case 118: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 533 "src/gwion.y"
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
#line 3367 "src/parser.c"
    break;

  case 119: /* match_stmt: "match" exp "{" match_list "}"  */
#line 544 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3381 "src/parser.c"
    break;

  case 120: /* flow: "while"  */
#line 555 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3387 "src/parser.c"
    break;

  case 121: /* flow: "until"  */
#line 556 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3393 "src/parser.c"
    break;

  case 122: /* loop_stmt: flow "(" exp ")" stmt  */
#line 561 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3406 "src/parser.c"
    break;

  case 123: /* loop_stmt: "do" stmt flow exp ";"  */
#line 570 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3420 "src/parser.c"
    break;

  case 124: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 580 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3434 "src/parser.c"
    break;

  case 125: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 590 "src/gwion.y"
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
#line 3449 "src/parser.c"
    break;

  case 126: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 601 "src/gwion.y"
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
#line 3466 "src/parser.c"
    break;

  case 127: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 614 "src/gwion.y"
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
#line 3488 "src/parser.c"
    break;

  case 128: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 632 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3501 "src/parser.c"
    break;

  case 129: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 641 "src/gwion.y"
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
#line 3518 "src/parser.c"
    break;

  case 130: /* defer_stmt: "defer" stmt  */
#line 654 "src/gwion.y"
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
#line 3535 "src/parser.c"
    break;

  case 131: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 669 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3548 "src/parser.c"
    break;

  case 132: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 678 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3562 "src/parser.c"
    break;

  case 133: /* breaks: "break"  */
#line 688 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3568 "src/parser.c"
    break;

  case 134: /* breaks: "continue"  */
#line 688 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3574 "src/parser.c"
    break;

  case 135: /* jump_stmt: "return" exp ";"  */
#line 690 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3584 "src/parser.c"
    break;

  case 136: /* jump_stmt: "return" ";"  */
#line 695 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3593 "src/parser.c"
    break;

  case 137: /* jump_stmt: breaks number ";"  */
#line 699 "src/gwion.y"
                        { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].lval) }},
      .pos = (yylsp[-2])
    };
  }
#line 3603 "src/parser.c"
    break;

  case 138: /* jump_stmt: breaks ";"  */
#line 704 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3612 "src/parser.c"
    break;

  case 139: /* exp_stmt: exp ";"  */
#line 710 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3622 "src/parser.c"
    break;

  case 140: /* exp_stmt: ";"  */
#line 715 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3631 "src/parser.c"
    break;

  case 141: /* exp: binary_exp  */
#line 721 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3637 "src/parser.c"
    break;

  case 142: /* exp: binary_exp "," exp  */
#line 723 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3649 "src/parser.c"
    break;

  case 144: /* binary_exp: binary_exp "@" decl_exp  */
#line 734 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3655 "src/parser.c"
    break;

  case 145: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 735 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3661 "src/parser.c"
    break;

  case 146: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 736 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3667 "src/parser.c"
    break;

  case 147: /* call_template: ":[" type_list "]"  */
#line 739 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3673 "src/parser.c"
    break;

  case 148: /* call_template: %empty  */
#line 739 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3679 "src/parser.c"
    break;

  case 154: /* array_exp: "[" exp "]"  */
#line 744 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3685 "src/parser.c"
    break;

  case 155: /* array_exp: "[" exp "]" array_exp  */
#line 745 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3693 "src/parser.c"
    break;

  case 156: /* array_exp: "[" exp "]" "[" "]"  */
#line 748 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3699 "src/parser.c"
    break;

  case 157: /* array_empty: "[" "]"  */
#line 752 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3705 "src/parser.c"
    break;

  case 158: /* array_empty: array_empty "[" "]"  */
#line 753 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3711 "src/parser.c"
    break;

  case 159: /* array_empty: array_empty array_exp  */
#line 754 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3717 "src/parser.c"
    break;

  case 160: /* dict_list: binary_exp ":" binary_exp  */
#line 758 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3723 "src/parser.c"
    break;

  case 161: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 759 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3729 "src/parser.c"
    break;

  case 162: /* range: "[" exp ":" exp "]"  */
#line 762 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3735 "src/parser.c"
    break;

  case 163: /* range: "[" exp ":" "]"  */
#line 763 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3741 "src/parser.c"
    break;

  case 164: /* range: "[" ":" exp "]"  */
#line 764 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3747 "src/parser.c"
    break;

  case 168: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 770 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3753 "src/parser.c"
    break;

  case 169: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 771 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3763 "src/parser.c"
    break;

  case 170: /* func_args: "(" arg_list ")"  */
#line 777 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3769 "src/parser.c"
    break;

  case 171: /* func_args: "(" ")"  */
#line 777 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3775 "src/parser.c"
    break;

  case 172: /* fptr_args: "(" fptr_list ")"  */
#line 778 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3781 "src/parser.c"
    break;

  case 173: /* fptr_args: "(" ")"  */
#line 778 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3787 "src/parser.c"
    break;

  case 174: /* decl_template: ":[" specialized_list "]"  */
#line 780 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3793 "src/parser.c"
    break;

  case 175: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 781 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3804 "src/parser.c"
    break;

  case 176: /* decl_template: ":[" "..." "]"  */
#line 787 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3814 "src/parser.c"
    break;

  case 177: /* decl_template: %empty  */
#line 792 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3820 "src/parser.c"
    break;

  case 178: /* global: "global"  */
#line 794 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3826 "src/parser.c"
    break;

  case 180: /* opt_global: %empty  */
#line 795 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3832 "src/parser.c"
    break;

  case 181: /* storage_flag: "static"  */
#line 797 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3838 "src/parser.c"
    break;

  case 183: /* access_flag: "private"  */
#line 799 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3844 "src/parser.c"
    break;

  case 184: /* access_flag: "protect"  */
#line 800 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3850 "src/parser.c"
    break;

  case 185: /* flag: access_flag  */
#line 803 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3856 "src/parser.c"
    break;

  case 186: /* flag: storage_flag  */
#line 804 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3862 "src/parser.c"
    break;

  case 187: /* flag: access_flag storage_flag  */
#line 805 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3868 "src/parser.c"
    break;

  case 188: /* flag: %empty  */
#line 806 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3874 "src/parser.c"
    break;

  case 189: /* final: "final"  */
#line 809 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3880 "src/parser.c"
    break;

  case 190: /* final: %empty  */
#line 809 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3886 "src/parser.c"
    break;

  case 191: /* modifier: "abstract" final  */
#line 811 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3892 "src/parser.c"
    break;

  case 193: /* func_def_base: "fun" func_base func_args code_list  */
#line 814 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3902 "src/parser.c"
    break;

  case 194: /* func_def_base: "fun" func_base func_args ";"  */
#line 819 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3914 "src/parser.c"
    break;

  case 195: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 826 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3925 "src/parser.c"
    break;

  case 196: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 832 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3936 "src/parser.c"
    break;

  case 197: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 841 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3948 "src/parser.c"
    break;

  case 203: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 852 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3962 "src/parser.c"
    break;

  case 204: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 862 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3975 "src/parser.c"
    break;

  case 205: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 871 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3989 "src/parser.c"
    break;

  case 206: /* op_base: type_decl_empty OPID_A func_args  */
#line 881 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3998 "src/parser.c"
    break;

  case 207: /* operator: "operator"  */
#line 886 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4004 "src/parser.c"
    break;

  case 208: /* operator: "operator" global  */
#line 886 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4010 "src/parser.c"
    break;

  case 209: /* op_def: operator op_base code_list  */
#line 889 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4016 "src/parser.c"
    break;

  case 210: /* op_def: operator op_base ";"  */
#line 891 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4022 "src/parser.c"
    break;

  case 211: /* op_def: operator "abstract" op_base ";"  */
#line 893 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4028 "src/parser.c"
    break;

  case 215: /* func_def: operator "new" func_args code_list  */
#line 897 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4038 "src/parser.c"
    break;

  case 216: /* func_def: operator "new" func_args ";"  */
#line 903 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4049 "src/parser.c"
    break;

  case 217: /* func_def: operator "abstract" "new" func_args ";"  */
#line 910 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4060 "src/parser.c"
    break;

  case 218: /* type_decl_base: "<identifier>"  */
#line 918 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4066 "src/parser.c"
    break;

  case 219: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 919 "src/gwion.y"
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
#line 4082 "src/parser.c"
    break;

  case 220: /* type_decl_tmpl: type_decl_base call_template  */
#line 933 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4088 "src/parser.c"
    break;

  case 221: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 934 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4094 "src/parser.c"
    break;

  case 223: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 939 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4100 "src/parser.c"
    break;

  case 224: /* option: "?"  */
#line 942 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4106 "src/parser.c"
    break;

  case 225: /* option: OPTIONS  */
#line 942 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4112 "src/parser.c"
    break;

  case 226: /* option: %empty  */
#line 942 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4118 "src/parser.c"
    break;

  case 227: /* type_decl_opt: type_decl_noflag option  */
#line 943 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4124 "src/parser.c"
    break;

  case 229: /* type_decl: type_decl_flag type_decl_opt  */
#line 944 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4130 "src/parser.c"
    break;

  case 230: /* type_decl_flag: "late"  */
#line 947 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4136 "src/parser.c"
    break;

  case 231: /* type_decl_flag: "const"  */
#line 948 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4142 "src/parser.c"
    break;

  case 232: /* opt_var: "var"  */
#line 950 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4148 "src/parser.c"
    break;

  case 233: /* opt_var: %empty  */
#line 950 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4154 "src/parser.c"
    break;

  case 234: /* type_decl_flag2: "var"  */
#line 952 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4160 "src/parser.c"
    break;

  case 236: /* union_decl: "<identifier>" ";"  */
#line 955 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4169 "src/parser.c"
    break;

  case 237: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 959 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4175 "src/parser.c"
    break;

  case 238: /* union_list: union_decl  */
#line 961 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4184 "src/parser.c"
    break;

  case 239: /* union_list: union_list union_decl  */
#line 965 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4193 "src/parser.c"
    break;

  case 240: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 971 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4205 "src/parser.c"
    break;

  case 241: /* var_decl: "<identifier>"  */
#line 980 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4211 "src/parser.c"
    break;

  case 242: /* arg_decl: "<identifier>"  */
#line 982 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4217 "src/parser.c"
    break;

  case 244: /* fptr_arg_decl: %empty  */
#line 983 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4223 "src/parser.c"
    break;

  case 258: /* opt_exp: exp  */
#line 991 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4229 "src/parser.c"
    break;

  case 259: /* opt_exp: %empty  */
#line 991 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4235 "src/parser.c"
    break;

  case 261: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 994 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4241 "src/parser.c"
    break;

  case 262: /* con_exp: log_or_exp "?:" con_exp  */
#line 996 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4247 "src/parser.c"
    break;

  case 264: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 998 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4253 "src/parser.c"
    break;

  case 266: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 999 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4259 "src/parser.c"
    break;

  case 268: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1000 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4265 "src/parser.c"
    break;

  case 270: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1001 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4271 "src/parser.c"
    break;

  case 272: /* and_exp: and_exp "&" eq_exp  */
#line 1002 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4277 "src/parser.c"
    break;

  case 274: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1003 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4283 "src/parser.c"
    break;

  case 276: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1004 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4289 "src/parser.c"
    break;

  case 278: /* shift_exp: shift_exp shift_op add_exp  */
#line 1005 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4295 "src/parser.c"
    break;

  case 280: /* add_exp: add_exp add_op mul_exp  */
#line 1006 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4301 "src/parser.c"
    break;

  case 282: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1007 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4307 "src/parser.c"
    break;

  case 284: /* dur_exp: dur_exp "::" cast_exp  */
#line 1008 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4313 "src/parser.c"
    break;

  case 286: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1011 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4319 "src/parser.c"
    break;

  case 293: /* unary_exp: unary_op unary_exp  */
#line 1018 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4325 "src/parser.c"
    break;

  case 294: /* unary_exp: "spork" unary_exp  */
#line 1019 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4331 "src/parser.c"
    break;

  case 295: /* unary_exp: "fork" unary_exp  */
#line 1020 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4337 "src/parser.c"
    break;

  case 296: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1021 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4345 "src/parser.c"
    break;

  case 297: /* unary_exp: "new" type_decl_exp  */
#line 1024 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4351 "src/parser.c"
    break;

  case 298: /* unary_exp: "spork" code_list  */
#line 1025 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4357 "src/parser.c"
    break;

  case 299: /* unary_exp: "fork" code_list  */
#line 1026 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4363 "src/parser.c"
    break;

  case 300: /* unary_exp: "spork" captures code_list  */
#line 1027 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4369 "src/parser.c"
    break;

  case 301: /* unary_exp: "fork" captures code_list  */
#line 1028 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4375 "src/parser.c"
    break;

  case 302: /* unary_exp: "$" type_decl_empty  */
#line 1029 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4381 "src/parser.c"
    break;

  case 303: /* lambda_list: "<identifier>"  */
#line 1032 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4391 "src/parser.c"
    break;

  case 304: /* lambda_list: lambda_list "<identifier>"  */
#line 1037 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4401 "src/parser.c"
    break;

  case 305: /* lambda_arg: "\\" lambda_list  */
#line 1042 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4407 "src/parser.c"
    break;

  case 306: /* lambda_arg: "\\"  */
#line 1042 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4413 "src/parser.c"
    break;

  case 307: /* type_list: type_decl_empty  */
#line 1045 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4422 "src/parser.c"
    break;

  case 308: /* type_list: type_list "," type_decl_empty  */
#line 1049 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4431 "src/parser.c"
    break;

  case 309: /* call_paren: "(" exp ")"  */
#line 1055 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4437 "src/parser.c"
    break;

  case 310: /* call_paren: "(" ")"  */
#line 1055 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4443 "src/parser.c"
    break;

  case 313: /* dot_exp: post_exp "." "<identifier>"  */
#line 1059 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4456 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp array_exp  */
#line 1070 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4462 "src/parser.c"
    break;

  case 316: /* post_exp: post_exp range  */
#line 1072 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4468 "src/parser.c"
    break;

  case 317: /* post_exp: post_exp call_template call_paren  */
#line 1074 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4475 "src/parser.c"
    break;

  case 318: /* post_exp: post_exp post_op  */
#line 1077 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4481 "src/parser.c"
    break;

  case 319: /* post_exp: dot_exp  */
#line 1078 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4487 "src/parser.c"
    break;

  case 320: /* interp_exp: "<interp string end>"  */
#line 1082 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4493 "src/parser.c"
    break;

  case 321: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1083 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4499 "src/parser.c"
    break;

  case 322: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1084 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4505 "src/parser.c"
    break;

  case 323: /* interp: "${" interp_exp  */
#line 1086 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4511 "src/parser.c"
    break;

  case 324: /* interp: interp "${" interp_exp  */
#line 1087 "src/gwion.y"
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
#line 4526 "src/parser.c"
    break;

  case 325: /* capture: "<identifier>"  */
#line 1098 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4532 "src/parser.c"
    break;

  case 326: /* capture: "&" "<identifier>"  */
#line 1098 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4538 "src/parser.c"
    break;

  case 327: /* _captures: capture  */
#line 1100 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4544 "src/parser.c"
    break;

  case 328: /* _captures: _captures capture  */
#line 1101 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4550 "src/parser.c"
    break;

  case 329: /* captures: ":" _captures ":"  */
#line 1102 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4556 "src/parser.c"
    break;

  case 330: /* captures: %empty  */
#line 1102 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4562 "src/parser.c"
    break;

  case 333: /* prim_exp: "<identifier>"  */
#line 1105 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4568 "src/parser.c"
    break;

  case 334: /* prim_exp: number  */
#line 1106 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 4574 "src/parser.c"
    break;

  case 335: /* prim_exp: "<float>"  */
#line 1107 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4580 "src/parser.c"
    break;

  case 336: /* prim_exp: interp  */
#line 1108 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4586 "src/parser.c"
    break;

  case 337: /* prim_exp: "<litteral string>"  */
#line 1109 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4592 "src/parser.c"
    break;

  case 338: /* prim_exp: "<litteral char>"  */
#line 1110 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4598 "src/parser.c"
    break;

  case 339: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1111 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4611 "src/parser.c"
    break;

  case 340: /* prim_exp: "{" dict_list "}"  */
#line 1119 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4617 "src/parser.c"
    break;

  case 341: /* prim_exp: range  */
#line 1120 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4623 "src/parser.c"
    break;

  case 342: /* prim_exp: "<<<" exp ">>>"  */
#line 1121 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4629 "src/parser.c"
    break;

  case 343: /* prim_exp: "(" exp ")"  */
#line 1122 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4635 "src/parser.c"
    break;

  case 344: /* prim_exp: "`foo`"  */
#line 1123 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4646 "src/parser.c"
    break;

  case 345: /* prim_exp: lambda_arg captures code_list  */
#line 1129 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4652 "src/parser.c"
    break;

  case 346: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1130 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4658 "src/parser.c"
    break;

  case 347: /* prim_exp: "(" op_op ")"  */
#line 1131 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4664 "src/parser.c"
    break;

  case 348: /* prim_exp: "perform" opt_id  */
#line 1132 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4670 "src/parser.c"
    break;

  case 349: /* prim_exp: "(" ")"  */
#line 1133 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4676 "src/parser.c"
    break;


#line 4680 "src/parser.c"

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

#line 1135 "src/gwion.y"

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
