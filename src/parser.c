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
  YYSYMBOL_class_body = 133,               /* class_body  */
  YYSYMBOL_trait_def = 134,                /* trait_def  */
  YYSYMBOL_number = 135,                   /* number  */
  YYSYMBOL_decimal = 136,                  /* decimal  */
  YYSYMBOL_prim_def = 137,                 /* prim_def  */
  YYSYMBOL_class_ext = 138,                /* class_ext  */
  YYSYMBOL_traits = 139,                   /* traits  */
  YYSYMBOL_extend_def = 140,               /* extend_def  */
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
  YYSYMBOL_code_list = 162,                /* code_list  */
  YYSYMBOL_stmt_pp = 163,                  /* stmt_pp  */
  YYSYMBOL_stmt = 164,                     /* stmt  */
  YYSYMBOL_spread_stmt = 165,              /* spread_stmt  */
  YYSYMBOL_166_1 = 166,                    /* $@1  */
  YYSYMBOL_retry_stmt = 167,               /* retry_stmt  */
  YYSYMBOL_handler = 168,                  /* handler  */
  YYSYMBOL_169_2 = 169,                    /* $@2  */
  YYSYMBOL_handler_list = 170,             /* handler_list  */
  YYSYMBOL_try_stmt = 171,                 /* try_stmt  */
  YYSYMBOL_opt_id = 172,                   /* opt_id  */
  YYSYMBOL_opt_comma = 173,                /* opt_comma  */
  YYSYMBOL_enum_value = 174,               /* enum_value  */
  YYSYMBOL_enum_list = 175,                /* enum_list  */
  YYSYMBOL_enum_def = 176,                 /* enum_def  */
  YYSYMBOL_when_exp = 177,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 178,          /* match_case_stmt  */
  YYSYMBOL_match_list = 179,               /* match_list  */
  YYSYMBOL_match_stmt = 180,               /* match_stmt  */
  YYSYMBOL_flow = 181,                     /* flow  */
  YYSYMBOL_loop_stmt = 182,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 183,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 184,           /* selection_stmt  */
  YYSYMBOL_breaks = 185,                   /* breaks  */
  YYSYMBOL_jump_stmt = 186,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 187,                 /* exp_stmt  */
  YYSYMBOL_exp = 188,                      /* exp  */
  YYSYMBOL_binary_exp = 189,               /* binary_exp  */
  YYSYMBOL_call_template = 190,            /* call_template  */
  YYSYMBOL_op = 191,                       /* op  */
  YYSYMBOL_array_exp = 192,                /* array_exp  */
  YYSYMBOL_array_empty = 193,              /* array_empty  */
  YYSYMBOL_dict_list = 194,                /* dict_list  */
  YYSYMBOL_range = 195,                    /* range  */
  YYSYMBOL_array = 196,                    /* array  */
  YYSYMBOL_decl_exp = 197,                 /* decl_exp  */
  YYSYMBOL_func_args = 198,                /* func_args  */
  YYSYMBOL_fptr_args = 199,                /* fptr_args  */
  YYSYMBOL_decl_template = 200,            /* decl_template  */
  YYSYMBOL_global = 201,                   /* global  */
  YYSYMBOL_opt_global = 202,               /* opt_global  */
  YYSYMBOL_storage_flag = 203,             /* storage_flag  */
  YYSYMBOL_access_flag = 204,              /* access_flag  */
  YYSYMBOL_flag = 205,                     /* flag  */
  YYSYMBOL_final = 206,                    /* final  */
  YYSYMBOL_modifier = 207,                 /* modifier  */
  YYSYMBOL_func_def_base = 208,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 209,            /* abstract_fdef  */
  YYSYMBOL_op_op = 210,                    /* op_op  */
  YYSYMBOL_op_base = 211,                  /* op_base  */
  YYSYMBOL_operator = 212,                 /* operator  */
  YYSYMBOL_op_def = 213,                   /* op_def  */
  YYSYMBOL_func_def = 214,                 /* func_def  */
  YYSYMBOL_type_decl_base = 215,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 216,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 217,         /* type_decl_noflag  */
  YYSYMBOL_option = 218,                   /* option  */
  YYSYMBOL_type_decl_opt = 219,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 220,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 221,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 222,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 223,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 224,               /* union_decl  */
  YYSYMBOL_union_list = 225,               /* union_list  */
  YYSYMBOL_union_def = 226,                /* union_def  */
  YYSYMBOL_var_decl = 227,                 /* var_decl  */
  YYSYMBOL_arg_decl = 228,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 229,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 230,                    /* eq_op  */
  YYSYMBOL_rel_op = 231,                   /* rel_op  */
  YYSYMBOL_shift_op = 232,                 /* shift_op  */
  YYSYMBOL_add_op = 233,                   /* add_op  */
  YYSYMBOL_mul_op = 234,                   /* mul_op  */
  YYSYMBOL_opt_exp = 235,                  /* opt_exp  */
  YYSYMBOL_con_exp = 236,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 237,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 238,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 239,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 240,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 241,                  /* and_exp  */
  YYSYMBOL_eq_exp = 242,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 243,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 244,                /* shift_exp  */
  YYSYMBOL_add_exp = 245,                  /* add_exp  */
  YYSYMBOL_mul_exp = 246,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 247,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 248,                 /* cast_exp  */
  YYSYMBOL_unary_op = 249,                 /* unary_op  */
  YYSYMBOL_unary_exp = 250,                /* unary_exp  */
  YYSYMBOL_lambda_list = 251,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 252,               /* lambda_arg  */
  YYSYMBOL_type_list = 253,                /* type_list  */
  YYSYMBOL_call_paren = 254,               /* call_paren  */
  YYSYMBOL_post_op = 255,                  /* post_op  */
  YYSYMBOL_dot_exp = 256,                  /* dot_exp  */
  YYSYMBOL_post_exp = 257,                 /* post_exp  */
  YYSYMBOL_interp_exp = 258,               /* interp_exp  */
  YYSYMBOL_interp = 259,                   /* interp  */
  YYSYMBOL_capture = 260,                  /* capture  */
  YYSYMBOL__captures = 261,                /* _captures  */
  YYSYMBOL_captures = 262,                 /* captures  */
  YYSYMBOL_array_lit_end = 263,            /* array_lit_end  */
  YYSYMBOL_prim_exp = 264                  /* prim_exp  */
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
#define YYLAST   2624

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  622

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
     232,   232,   234,   240,   247,   254,   258,   258,   259,   259,
     261,   266,   271,   277,   285,   291,   295,   300,   303,   303,
     304,   304,   306,   309,   315,   315,   316,   316,   317,   326,
     326,   328,   332,   337,   341,   346,   351,   360,   371,   379,
     380,   390,   392,   396,   402,   404,   408,   409,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     425,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   442,   442,   452,   457,   457,   458,   463,   479,
     484,   484,   485,   485,   488,   489,   495,   500,   506,   511,
     511,   514,   526,   530,   535,   546,   557,   558,   562,   571,
     581,   591,   602,   615,   633,   642,   656,   670,   679,   690,
     690,   692,   697,   701,   706,   712,   717,   723,   724,   735,
     736,   737,   738,   741,   741,   743,   743,   743,   743,   743,
     746,   747,   750,   754,   755,   756,   760,   761,   764,   765,
     766,   770,   770,   771,   772,   773,   779,   779,   780,   780,
     782,   783,   789,   794,   796,   797,   797,   799,   799,   801,
     802,   805,   806,   807,   808,   811,   811,   813,   813,   816,
     821,   828,   834,   842,   851,   851,   851,   851,   851,   853,
     863,   872,   882,   888,   888,   890,   892,   894,   897,   897,
     897,   898,   904,   911,   920,   921,   935,   936,   940,   941,
     944,   944,   944,   945,   946,   946,   949,   950,   952,   952,
     954,   954,   957,   961,   963,   967,   973,   982,   984,   985,
     985,   987,   987,   988,   988,   988,   988,   989,   989,   990,
     990,   991,   991,   991,   993,   993,   994,   995,   997,  1000,
    1000,  1001,  1001,  1002,  1002,  1003,  1003,  1004,  1004,  1005,
    1005,  1006,  1006,  1007,  1007,  1008,  1008,  1009,  1009,  1010,
    1010,  1012,  1012,  1015,  1015,  1015,  1016,  1016,  1019,  1020,
    1021,  1022,  1023,  1026,  1027,  1028,  1029,  1030,  1031,  1034,
    1039,  1044,  1044,  1047,  1051,  1057,  1057,  1059,  1059,  1061,
    1070,  1071,  1073,  1075,  1078,  1080,  1084,  1085,  1086,  1088,
    1089,  1100,  1100,  1102,  1103,  1104,  1104,  1105,  1105,  1107,
    1108,  1111,  1112,  1113,  1114,  1115,  1123,  1124,  1125,  1126,
    1127,  1133,  1134,  1135,  1136,  1137
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
  "class_flag", "class_def", "class_body", "trait_def", "number",
  "decimal", "prim_def", "class_ext", "traits", "extend_def", "id_list",
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

#define YYPACT_NINF (-466)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-252)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     827,  -466,  1599,  1756,   935,   291,  -466,    44,  -466,  1364,
    -466,    55,    81,    90,  2304,   291,  1462,  -466,  -466,  1364,
      52,   147,   291,   291,   136,   228,   136,   291,  -466,  -466,
     291,   291,  -466,   103,  1364,   117,    21,   122,  -466,  -466,
    -466,  -466,  -466,  1715,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
     228,   228,  2440,  2440,  2304,  -466,  -466,  -466,   183,   827,
    -466,  -466,  -466,  -466,  -466,  -466,  1364,  -466,   291,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,   188,  -466,
    -466,  -466,    63,  -466,  -466,   205,    40,  -466,  -466,  -466,
    -466,   229,  -466,  -466,  -466,   291,  -466,  -466,   123,   120,
     126,   140,   138,    57,   249,   -36,   159,   142,   164,   174,
    2504,  -466,   185,  -466,  -466,    47,   237,  -466,  -466,  2304,
    -466,   301,   307,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,   314,  -466,   315,  -466,
    -466,  -466,  -466,  2304,   231,    98,  -466,  1043,    20,   321,
    -466,  -466,  -466,  -466,   329,  -466,  -466,    85,   233,  2304,
     242,  2400,  1503,   252,   327,   261,  -466,   344,   318,  -466,
    -466,  -466,   268,   245,   275,  -466,   276,   291,  -466,    45,
    -466,   266,   246,   319,   250,  -466,   355,    25,  -466,   281,
     362,   228,   285,   277,  -466,  -466,   287,   367,   290,  1852,
    1715,  -466,   308,  -466,  -466,  -466,   371,  1151,    -2,  -466,
    -466,   369,  -466,  -466,   369,   280,  -466,  -466,  -466,   228,
    2304,  -466,  -466,   374,  -466,  2304,  2304,  2304,  2304,   297,
     329,   462,    60,   228,   228,  2304,  2504,  2504,  2504,  2504,
    2504,  2504,  -466,  -466,  2504,  2504,  2504,  -466,  2504,  -466,
    2504,  2504,   228,  -466,   376,  1756,   304,   228,   383,  -466,
    -466,  -466,  1715,   133,  -466,  -466,   382,  1893,  -466,  -466,
    -466,  -466,  2304,  -466,    59,   100,  -466,   228,  -466,   228,
     385,  2304,   389,    73,  1503,    24,   372,   386,  -466,  -466,
    -466,   318,   282,   356,  -466,  -466,   282,   305,   228,   246,
     317,  -466,    25,  -466,  -466,  -466,  1989,  -466,   395,  -466,
    -466,   342,   241,   373,   322,   282,   317,  -466,   228,   401,
    -466,   348,  -466,  1715,  2304,  -466,  1259,  -466,   326,  -466,
     -22,  1151,  -466,  -466,  -466,   328,   404,  -466,  -466,  -466,
    -466,  -466,   329,   409,   146,   329,   282,   282,  -466,  -466,
     282,    46,  -466,   324,  -466,   120,   126,   140,   138,    57,
     249,   -36,   159,   142,   164,   174,  -466,  1151,  -466,    33,
    -466,  -466,   203,  2030,  -466,  -466,  -466,  -466,   408,    58,
    -466,   336,  -466,   278,  -466,  -466,   337,   338,  1364,   419,
    2304,  1364,  2126,   340,   411,  2304,  -466,    76,    22,    52,
    -466,     2,   384,  -466,   305,   317,   170,   282,  -466,  -466,
     292,  -466,  -466,   417,  2167,  -466,   423,  -466,   336,  -466,
     302,   345,   346,   427,   282,   421,   177,  -466,   428,   429,
     228,  -466,  -466,   430,  -466,  -466,  -466,  -466,   282,  1364,
     435,  -466,  -466,  -466,  -466,   434,   438,   439,  2304,  -466,
    -466,  2504,    28,   426,   228,  -466,  -466,   440,  -466,  2304,
    -466,   351,   228,  -466,   282,   282,   432,  -466,    78,  -466,
    1364,   442,   357,  -466,  2304,   431,   425,  -466,  -466,   333,
    -466,   449,  1364,   446,   305,   209,   228,   305,   170,   453,
    -466,   595,  -466,   362,  -466,   375,  -466,  -466,  -466,  -466,
     228,  -466,  -466,  -466,  -466,  -466,   258,  -466,   228,   369,
     454,  -466,   437,  -466,  -466,   228,   228,   228,   456,  -466,
    -466,  2263,  -466,  -466,  -466,  -466,  2304,  -466,   362,  -466,
    1364,  1364,  -466,  1364,   411,    91,  2304,   378,  1364,   380,
      22,   455,  -466,  -466,  -466,     5,  -466,  -466,   170,  -466,
    -466,   711,   373,  -466,  -466,   464,   391,  -466,    42,   390,
    -466,  -466,   369,  2304,   465,   461,   470,   471,   396,  -466,
      70,   475,  -466,  -466,  -466,  2304,  1364,  -466,  1364,  -466,
    -466,  -466,  -466,   472,   305,  -466,  -466,   476,  -466,   478,
    -466,  -466,  -466,  -466,    70,  -466,   228,  -466,  -466,  -466,
    -466,   110,  -466,  1364,  -466,  -466,  -466,  -466,   480,  1364,
    -466,  -466
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   136,     0,   255,     0,   184,   230,     0,   116,     0,
     117,     0,     0,     0,     0,   184,     0,   129,   130,     0,
     101,     0,   184,   184,   176,     0,   203,   184,    46,    47,
     184,   184,   227,     0,     0,   302,     0,     0,   226,    23,
     331,   333,   334,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,   329,   307,   283,   308,   284,
       0,     0,     0,     0,     0,   287,   286,   340,     0,     2,
       4,     8,     9,   330,    15,    10,     6,    13,   184,    14,
      84,    87,    35,    91,    90,    89,    11,    85,     0,    82,
      88,    83,     0,    86,    81,     0,   137,   337,   139,   208,
     209,     0,   210,     7,   231,   184,    12,   163,   256,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
       0,   281,   326,   285,   315,   288,   332,   310,   345,     0,
     249,   283,   284,   252,   253,   149,   145,   246,   244,   245,
     243,   146,   247,   248,   147,   148,     0,   194,     0,   196,
     195,   198,   197,     0,   254,     0,    64,     0,   137,     0,
     177,   174,   179,   180,     0,   178,   182,   181,   186,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,   100,
     344,    94,     0,   186,     0,   175,     0,   184,   214,     0,
      52,     0,   144,   218,   222,   224,    50,     0,   204,     0,
       0,     0,     0,     0,   126,   299,   301,     0,     0,     0,
       0,   316,     0,   319,   298,    51,   293,     0,     0,   294,
     290,     0,   295,   291,     0,     0,     1,     5,    36,     0,
       0,   134,    24,     0,   135,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,   241,   242,     0,     0,     0,   250,     0,   251,
       0,     0,     0,   289,     0,     0,     0,     0,     0,   311,
     312,   314,     0,     0,   339,   343,     0,     0,   328,   327,
     335,    65,     0,   336,     0,     0,   183,     0,   185,     0,
       0,     0,   329,     0,     0,     0,     0,     0,   131,    95,
      97,    99,   173,   186,   188,    16,   173,    28,     0,   144,
       0,   216,     0,   220,   221,   223,     0,   161,   162,    49,
     225,     0,     0,    40,     0,   173,     0,   300,    60,     0,
      80,     0,   317,     0,   255,    66,     0,   321,     0,   323,
       0,     0,   296,   297,   338,     0,     0,   133,   138,   142,
     140,   141,     0,     0,     0,     0,   173,   173,   206,   205,
     173,     0,   254,     0,   258,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,     0,   341,     0,
     309,   303,     0,     0,   313,   320,   160,   159,     0,   156,
     167,     0,    55,     0,   190,   189,     0,     0,     0,     0,
       0,     0,     0,     0,   229,     0,   112,     0,     0,   101,
      98,     0,    27,   187,    28,     0,     0,   173,   217,    31,
       0,   219,   153,     0,     0,   155,     0,   169,   240,    62,
       0,     0,    41,     0,   173,     0,     0,    57,    59,     0,
      60,    79,   318,     0,    67,   322,   325,   324,   173,     0,
       0,   207,   212,   211,   202,     0,     0,     0,   255,   237,
     164,     0,   137,   150,     0,   143,   306,     0,   158,     0,
     238,    54,     0,   166,   173,   173,   127,   119,     0,   124,
       0,     0,     0,   228,     0,   110,   115,   113,   104,     0,
     106,   103,     0,     0,    28,     0,     0,    28,     0,    29,
      21,     0,    22,     0,    30,     0,   154,    25,   239,    61,
       0,   168,    38,    39,    43,    37,     0,    92,     0,     0,
       0,   292,    44,   118,   213,     0,     0,     0,     0,   257,
     342,     0,   151,   304,   305,   157,     0,    56,     0,    42,
       0,     0,   120,     0,   229,     0,     0,     0,     0,     0,
     102,     0,    96,   172,    33,     0,   170,    26,     0,    18,
      20,     0,    40,    32,    63,   214,     0,   234,     0,     0,
      58,   192,     0,     0,     0,     0,     0,     0,     0,   152,
      53,     0,   128,   125,   121,     0,     0,   109,     0,   114,
     105,   107,   108,     0,    28,    17,    19,     0,   232,     0,
     236,   235,    93,   191,    45,    48,     0,   200,   201,   165,
     193,     0,   122,   111,   171,    34,   215,   233,     0,     0,
     199,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -466,  -466,   -17,   -65,   213,  -466,  -465,  -466,   -86,   167,
    -466,  -466,  -396,  -466,  -295,  -466,    -3,  -466,  -466,   -73,
    -466,  -466,  -466,  -466,  -466,   -54,    -5,    11,  -270,  -466,
    -466,    61,   -18,  -466,  -466,   -60,  -466,    -9,  -466,  -466,
    -466,   193,  -466,  -466,  -466,    88,  -466,   -52,  -466,  -466,
    -466,    92,  -466,  -466,   330,  -466,  -466,  -466,  -466,  -466,
    -150,    32,     1,  -169,  -466,  -187,  -466,    36,   381,  -466,
      54,  -200,  -446,  -280,   143,  -466,   341,  -466,    12,  -162,
    -466,  -466,  -466,   269,   270,  -466,  -466,  -466,   325,  -466,
     195,  -466,   316,  -466,   -23,   -33,  -466,   -53,  -466,  -466,
     -62,    89,  -466,  -466,  -102,  -100,  -103,  -101,  -234,  -238,
    -466,   272,   274,   271,   273,   279,   284,   286,   288,   267,
     264,   265,   -82,     6,  -466,  -466,  -466,  -466,   -96,  -466,
    -466,  -190,  -466,   189,  -466,    -7,  -466,  -466
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   182,    71,   502,    72,    73,   233,
      74,   497,   416,    75,   420,   495,    76,   200,   432,   433,
     164,    77,   574,    78,    79,   190,   216,   391,   437,   393,
     438,   439,   429,   430,    80,   219,    81,    82,    83,   569,
      84,   300,   409,   301,    85,   180,   551,   490,   491,    86,
     547,   406,   407,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,   268,   147,   269,   318,   159,    97,   319,
      98,   285,   323,   412,   165,   186,   166,   167,   183,   289,
     305,    99,   100,   148,   242,   101,   102,   103,   192,   193,
     194,   315,   195,   196,   104,   484,   105,   567,   568,   106,
     460,   471,   509,   254,   149,   150,   151,   152,   155,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   206,   122,   382,   384,   123,   124,
     125,   213,   126,   339,   340,   221,   280,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   157,   197,   222,   227,   158,   232,   215,   364,   317,
     178,   363,   255,   258,   392,   256,   260,   168,   498,   243,
     332,   304,   294,   311,   235,   204,   414,   175,   403,   271,
     187,   436,   235,   559,   146,   154,   191,   197,   197,   530,
     354,   463,   201,   202,   235,   435,   174,   187,   177,   169,
     187,   458,  -144,   600,   265,   493,   224,   562,   593,   161,
     171,   337,   469,   358,   187,   390,   231,   228,   220,   223,
     341,   214,   446,   142,   143,   212,   455,   456,   197,   401,
     457,   337,   385,    39,   541,   494,   172,   486,   594,   338,
     229,   266,   581,   595,    32,   173,   225,   586,   554,   405,
     443,   558,    38,   394,   207,   488,   278,   279,   188,   338,
     341,    32,   241,   236,   282,   264,   619,   244,   404,    38,
     499,   236,   160,   161,    39,   565,   263,   277,   188,   459,
     273,   425,    56,   236,    58,   179,   189,   503,   237,   238,
     418,   413,   188,   442,   402,   357,   237,   238,   228,   452,
     181,   236,   450,   189,   515,   454,   341,   243,   237,   238,
     252,   342,   267,   236,   343,   253,   236,   185,   522,   198,
     189,   236,   293,   500,   161,   345,   237,   238,   197,   208,
     501,   505,   359,   226,   236,   276,   203,   517,   237,   238,
     361,   237,   238,   230,   538,   539,   237,   238,   615,   308,
     205,   290,   537,   236,   378,   209,   197,   464,   234,   237,
     238,   465,   324,   555,   336,   245,   197,   556,   158,   246,
     197,   197,   248,   529,   528,   395,   236,   282,   237,   238,
     259,   133,   134,   187,   187,   232,   184,   247,   249,   197,
     199,   331,   212,   130,   197,   257,   187,   427,   570,   251,
     241,   237,   238,   250,   360,   575,   576,   577,     8,   261,
      10,   197,   346,   187,   197,   262,   197,   348,   255,   258,
     239,   256,   260,   376,   287,   288,   532,   362,   381,   218,
      32,    32,   472,   389,   473,   197,   303,   288,    38,    38,
     349,   350,   351,    32,   453,   504,   505,   379,   396,   197,
     397,    38,   187,   272,   212,   197,   510,  -250,   511,   388,
      32,   188,   188,  -251,    56,    57,    58,    59,    38,   417,
     274,   275,   489,   399,   188,   277,   240,   228,   160,   161,
     162,   163,   283,   428,   284,   295,   618,   296,   336,   189,
     189,   565,   313,   314,   297,    65,    66,   298,   423,    32,
     299,   302,   189,   137,   138,   139,   140,    38,   306,   307,
     310,   267,   316,   312,   321,   212,   362,   322,   325,   189,
     327,   326,   328,   329,   336,   333,   334,   347,   462,   341,
     188,   344,    56,    57,    58,    59,   377,   380,   383,   476,
     386,   398,   479,   400,   352,   405,   408,   411,   288,   415,
     419,   478,   424,    39,   431,   434,   440,   441,   189,   445,
     449,   448,   451,    65,    66,   467,   468,   197,   461,   470,
     474,   475,   477,   482,   483,   463,   507,   496,   512,   513,
     514,   516,   518,   531,   481,   519,   521,   485,   524,   525,
     523,   197,   215,   526,   527,   536,   534,   540,   543,   197,
     548,   544,   549,   550,   553,   546,   423,   505,   563,   571,
     572,   573,   578,   590,   489,   606,   592,   598,   605,   602,
     273,   542,   588,   197,   599,   533,   607,   608,   610,   459,
     614,   617,   616,   552,   561,   545,   620,   197,   426,   597,
     362,   557,   564,   197,   410,   197,   227,   492,   591,   487,
     291,   520,   197,   197,   197,   535,   270,   421,   286,   353,
     356,   585,   603,   320,   309,   601,   609,   508,   355,   365,
     367,   428,   366,   368,   374,   373,   375,   566,     0,   447,
     369,   582,   583,     0,   584,     0,     0,   580,   370,   589,
       0,   371,     0,     0,   372,   197,   130,    56,   257,    58,
     259,   133,   134,     0,     0,   135,     0,     0,     0,     0,
       0,     0,     0,   423,     0,   136,   137,   138,   139,   140,
     141,   142,   143,     0,   604,     0,     0,   612,   587,   566,
     144,   145,     0,   197,     0,   613,   611,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,   228,     4,   560,     5,     6,     7,
     621,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,    30,     0,    31,    32,    33,    34,
      35,     0,    36,    37,     0,    38,    39,     0,    40,    41,
      42,    43,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     1,    67,     2,     0,     3,     0,
       0,     4,   596,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,     0,    25,     0,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,     0,    40,    41,    42,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       1,    67,     2,     0,     3,     0,     0,     4,     0,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,     0,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      25,     0,    26,    27,    28,    29,    30,     0,    31,    32,
      33,    34,    35,     0,    36,    37,     0,    38,    39,     0,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,    65,    66,     4,   156,    67,     6,     7,
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
       3,    65,    66,     4,   281,    67,     6,     7,     0,     8,
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
      66,     4,   335,    67,     6,     7,     0,     8,     9,    10,
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
     444,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,     0,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,     0,     0,     4,    65,    66,     6,     7,    67,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,   176,     0,     2,     0,     3,
       0,     0,   129,     0,     0,     6,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     0,   129,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,   128,     3,     0,     0,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,   130,    56,   131,    58,   132,   133,   134,
      60,     0,   135,     0,     0,     0,    61,    62,    63,    64,
       0,     0,   136,   137,   138,   139,   140,   141,   142,   143,
       0,     0,     0,     0,     0,    65,    66,   144,   145,    67,
       2,     0,     3,     0,     0,   129,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,   129,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,   210,   211,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
     153,     0,     0,    61,    62,    63,    64,     2,     0,     3,
       0,     0,   129,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   387,     0,   129,    32,     0,     6,    35,     0,     0,
       0,   330,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,     0,     3,   422,     0,   129,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,   466,     3,     0,     0,
     129,    32,     0,     6,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,    32,     0,     0,    35,    61,    62,    63,    64,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     2,   480,     3,     0,     0,   129,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   506,     0,   129,    32,     0,
       6,    35,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,    32,
       0,     0,    35,    61,    62,    63,    64,    38,    39,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     2,     0,
       3,   579,     0,   129,     0,     0,     6,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,   129,    32,     0,     6,    35,     0,
       0,     0,     0,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,    32,     0,     0,    35,
      61,    62,    63,    64,    38,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     2,     0,     3,     0,     0,
     129,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
     217,     0,    32,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   292,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,    35,     0,    61,    62,    63,
      64,    39,     0,    40,    41,    42,    43,     0,     0,     2,
       0,     3,     0,     0,   129,     0,    65,    66,     0,     0,
      67,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,   218,    20,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    35,
      67,     0,     0,     0,     0,    39,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    63,    69,     4,    92,    61,   246,   196,
      19,   245,   114,   116,   284,   115,   117,     5,   414,   101,
     210,   183,   172,   192,     4,    34,   306,    15,     4,   125,
       5,   326,     4,   498,     2,     3,    25,    60,    61,    11,
     240,     8,    30,    31,     4,   325,    14,     5,    16,     5,
       5,     5,     5,    11,     7,    53,    63,   503,    53,    38,
       5,    83,     4,     3,     5,     6,     3,    76,    62,    63,
      10,    60,    94,   109,   110,    43,   356,   357,   101,     6,
     360,    83,   272,    61,     6,    83,     5,    11,    83,   111,
      78,    44,   538,   558,    52,     5,    64,     6,   494,    23,
     334,   497,    60,     3,    83,    83,     8,     9,    83,   111,
      10,    52,   101,    93,    94,   122,     6,   105,    94,    60,
     415,    93,    37,    38,    61,    83,   120,    94,    83,    83,
     129,   318,    85,    93,    87,    83,   111,   417,   118,   119,
     309,   303,    83,   333,   294,   241,   118,   119,   157,     3,
       3,    93,   352,   111,   434,   355,    10,   239,   118,   119,
     103,   221,   115,    93,   224,   108,    93,    24,   448,    26,
     111,    93,   171,     3,    38,   229,   118,   119,   201,    36,
      10,     4,   242,     0,    93,   153,    83,    10,   118,   119,
     244,   118,   119,     5,   474,   475,   118,   119,   594,   187,
      83,   169,   472,    93,   264,    83,   229,     4,     3,   118,
     119,     8,   201,     4,   217,    92,   239,     8,   217,    96,
     243,   244,   102,   461,   458,   285,    93,    94,   118,   119,
      88,    89,    90,     5,     5,   321,    23,   114,   112,   262,
      27,   209,   210,    84,   267,    86,     5,     6,   518,   111,
     239,   118,   119,   113,   243,   525,   526,   527,    16,    95,
      18,   284,   230,     5,   287,    91,   289,   235,   370,   372,
      41,   371,   373,   262,    41,    42,   463,   245,   267,    94,
      52,    52,     4,   282,     6,   308,    41,    42,    60,    60,
     236,   237,   238,    52,   354,     3,     4,   265,   287,   322,
     289,    60,     5,    66,   272,   328,     4,     6,     6,   277,
      52,    83,    83,     6,    85,    86,    87,    88,    60,   308,
       6,     6,   408,   291,    83,    94,    97,   336,    37,    38,
      39,    40,    11,   322,     5,    83,   606,    10,   341,   111,
     111,    83,    92,    93,    83,   116,   117,     3,   316,    52,
      32,    83,   111,   104,   105,   106,   107,    60,    83,    83,
      94,   115,     7,    44,    83,   333,   334,     5,    83,   111,
      83,    94,     5,    83,   377,    67,     5,     3,   377,    10,
      83,   101,    85,    86,    87,    88,    10,    83,     5,   398,
       8,     6,   401,     4,    97,    23,    10,   115,    42,    94,
      83,   400,     7,    61,    31,    83,     5,    59,   111,    83,
       6,    83,     3,   116,   117,   383,     8,   440,    94,    83,
      83,    83,     3,    83,    13,     8,     3,    43,    83,    83,
       3,    10,     4,     7,   402,     6,     6,   405,     3,     5,
     449,   464,   496,     5,     5,    94,     6,    15,     6,   472,
      25,    94,   119,     4,     8,    24,   424,     4,    83,   519,
       6,    24,     6,    83,   550,     4,    11,     3,     3,    79,
     469,   480,    94,   496,    83,   464,     6,     6,     3,    83,
       8,     3,     6,   492,   501,   484,     6,   510,   321,   562,
     458,   496,   510,   516,   301,   518,   561,   409,   550,   407,
     170,   440,   525,   526,   527,   469,   125,   312,   167,   239,
     241,   544,   572,   197,   189,   568,   578,   428,    56,   247,
     249,   510,   248,   250,   260,   258,   261,   516,    -1,   340,
     251,   540,   541,    -1,   543,    -1,    -1,   536,   254,   548,
      -1,   255,    -1,    -1,   256,   568,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   531,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   573,    -1,    -1,   586,   546,   568,
     118,   119,    -1,   606,    -1,   588,   585,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,   613,    10,    11,    12,    13,    14,
     619,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,     3,   120,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
       3,   120,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    -1,    60,    61,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,   116,   117,    13,    14,   120,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,
      98,    99,   100,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,     5,     6,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    10,    52,    -1,    13,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    52,    -1,
      -1,    55,    97,    98,    99,   100,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      94,    -1,    -1,    97,    98,    99,   100,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    59,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,
      98,    99,   100,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
      -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,     5,    -1,     7,     8,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,
      10,    52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    52,    -1,    -1,    55,    97,    98,    99,   100,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    10,    52,    -1,
      13,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    52,
      -1,    -1,    55,    97,    98,    99,   100,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,     5,    -1,
       7,     8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    52,    -1,    -1,    55,
      97,    98,    99,   100,    60,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    55,    -1,    97,    98,    99,
     100,    61,    -1,    63,    64,    65,    66,    -1,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    94,    31,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    55,
     120,    -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,    -1,   120
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
     130,   132,   134,   135,   137,   140,   143,   148,   150,   151,
     161,   163,   164,   165,   167,   171,   176,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   195,   197,   208,
     209,   212,   213,   214,   221,   223,   226,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   252,   255,   256,   257,   259,   264,     6,    10,
      84,    86,    88,    89,    90,    93,   103,   104,   105,   106,
     107,   108,   109,   110,   118,   119,   188,   191,   210,   231,
     232,   233,   234,    94,   188,   235,    11,   143,   189,   194,
      37,    38,    39,    40,   147,   201,   203,   204,   205,     5,
     164,     5,     5,     5,   188,   205,     3,   188,   164,    83,
     172,     3,   131,   205,   131,   201,   202,     5,    83,   111,
     152,   154,   215,   216,   217,   219,   220,   221,   201,   131,
     144,   205,   205,    83,   164,    83,   251,    83,   201,    83,
      80,    81,   188,   258,   154,   152,   153,    10,    94,   162,
     250,   262,   162,   250,   262,   188,     0,   130,   164,   205,
       5,     3,   135,   136,     3,     4,    93,   118,   119,    41,
      97,   154,   211,   249,   205,    92,    96,   114,   102,   112,
     113,   111,   103,   108,   230,   231,   232,    86,   233,    88,
     234,    95,    91,   250,   262,     7,    44,   115,   190,   192,
     195,   255,    66,   189,     6,     6,   188,    94,     8,     9,
     263,    11,    94,    11,     5,   198,   203,    41,    42,   206,
     188,   181,    83,   189,   187,    83,    10,    83,     3,    32,
     168,   170,    83,    41,   206,   207,    83,    83,   205,   215,
      94,   190,    44,    92,    93,   218,     7,   192,   193,   196,
     219,    83,     5,   199,   154,    83,    94,    83,     5,    83,
      59,   188,   258,    67,     5,    11,   143,    83,   111,   260,
     261,    10,   162,   162,   101,   152,   188,     3,   188,   197,
     197,   197,    97,   211,   198,    56,   210,   255,     3,   162,
     154,   152,   188,   235,   236,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   154,    10,   162,   188,
      83,   154,   253,     5,   254,   258,     8,     8,   188,   189,
       6,   154,   155,   156,     3,   162,   154,   154,     6,   188,
       4,     6,   187,     4,    94,    23,   178,   179,    10,   169,
     168,   115,   200,   206,   200,    94,   139,   154,   190,    83,
     141,   217,     8,   188,     7,   192,   136,     6,   154,   159,
     160,    31,   145,   146,    83,   200,   141,   155,   157,   158,
       5,    59,   258,   235,    11,    83,    94,   260,    83,     6,
     198,     3,     3,   162,   198,   200,   200,   200,     5,    83,
     227,    94,   189,     8,     4,     8,     6,   188,     8,     4,
      83,   228,     4,     6,    83,    83,   164,     3,   189,   164,
       6,   188,    83,    13,   222,   188,    11,   178,    83,   135,
     174,   175,   172,    53,    83,   142,    43,   138,   139,   141,
       3,    10,   133,   200,     3,     4,     8,     3,   228,   229,
       4,     6,    83,    83,     3,   200,    10,    10,     4,     6,
     158,     6,   200,   164,     3,     5,     5,     5,   235,   236,
      11,     7,   192,   154,     6,   194,    94,   155,   200,   200,
      15,     6,   164,     6,    94,   189,    24,   177,    25,   119,
       4,   173,   164,     8,   139,     4,     8,   153,   139,   133,
      11,   129,   199,    83,   159,    83,   154,   224,   225,   166,
     155,   162,     6,    24,   149,   155,   155,   155,     6,     8,
     189,   199,   164,   164,   164,   222,     6,   188,    94,   164,
      83,   174,    11,    53,    83,   133,    11,   146,     3,    83,
      11,   224,    79,   162,   189,     3,     4,     6,     6,   227,
       3,   189,   164,   143,     8,   139,     6,     3,   155,     6,
       6,   164
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   131,   132,   132,   133,
     133,   133,   134,   135,   136,   137,   138,   138,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   145,   145,
     146,   146,   147,   148,   149,   149,   150,   150,   151,   152,
     152,   153,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   166,   165,   167,   169,   168,   170,   170,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   177,
     177,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   184,   184,   185,
     185,   186,   186,   186,   186,   187,   187,   188,   188,   189,
     189,   189,   189,   190,   190,   191,   191,   191,   191,   191,
     192,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     195,   196,   196,   197,   197,   197,   198,   198,   199,   199,
     200,   200,   200,   200,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   205,   205,   206,   206,   207,   207,   208,
     208,   208,   208,   209,   210,   210,   210,   210,   210,   211,
     211,   211,   211,   212,   212,   213,   213,   213,   214,   214,
     214,   214,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   218,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   224,   225,   225,   226,   227,   228,   229,
     229,   230,   230,   231,   231,   231,   231,   232,   232,   233,
     233,   234,   234,   234,   235,   235,   236,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   249,   249,   249,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     257,   257,   257,   257,   257,   257,   258,   258,   258,   259,
     259,   260,   260,   261,   261,   262,   262,   263,   263,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     7,     6,     3,
       2,     1,     5,     1,     1,     5,     2,     0,     0,     2,
       5,     1,     3,     2,     4,     1,     2,     4,     2,     2,
       0,     1,     5,     5,     0,     2,     1,     1,     7,     2,
       1,     1,     1,     4,     2,     1,     3,     1,     3,     1,
       0,     2,     1,     3,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     2,     0,     4,     1,     2,     3,
       1,     0,     1,     0,     1,     3,     1,     3,     7,     2,
       0,     5,     1,     2,     7,     5,     1,     1,     5,     5,
       6,     7,     8,    10,     5,     7,     2,     5,     7,     1,
       1,     3,     2,     3,     2,     2,     1,     1,     3,     1,
       3,     3,     3,     3,     0,     1,     1,     1,     1,     1,
       3,     4,     5,     2,     3,     2,     3,     5,     5,     4,
       4,     1,     1,     1,     4,     7,     3,     2,     3,     2,
       3,     5,     3,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     2,     1,     4,
       4,     7,     6,     8,     1,     1,     1,     1,     1,     8,
       6,     6,     3,     1,     2,     3,     3,     4,     1,     1,
       1,     4,     4,     5,     1,     7,     2,     3,     1,     3,
       1,     1,     0,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     2,     3,     1,     2,     7,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     5,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     5,     2,     2,     2,     3,     3,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     1,     1,     2,     3,     2,
       3,     1,     2,     1,     2,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     5,     3,     2,     2
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
#line 2572 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 189 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2578 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 192 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2587 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 196 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2596 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2602 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2608 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 204 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2614 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 205 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2620 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 206 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2626 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 207 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2632 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 208 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2638 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 209 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2644 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 210 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2650 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 211 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2656 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 214 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2662 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 217 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-2].type_decl), (yyvsp[0].ast), (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2673 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 224 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), (yyvsp[-3].sym), NULL, (yyvsp[0].ast), (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2685 "src/parser.c"
    break;

  case 19: /* class_body: "{" ast "}"  */
#line 232 "src/gwion.y"
                          { (yyval.ast) = (yyvsp[-1].ast); }
#line 2691 "src/parser.c"
    break;

  case 20: /* class_body: "{" "}"  */
#line 232 "src/gwion.y"
                                                 { (yyval.ast) = NULL; }
#line 2697 "src/parser.c"
    break;

  case 21: /* class_body: ";"  */
#line 232 "src/gwion.y"
                                                                      { (yyval.ast) = NULL; }
#line 2703 "src/parser.c"
    break;

  case 22: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 235 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2712 "src/parser.c"
    break;

  case 23: /* number: INTEGER  */
#line 240 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2723 "src/parser.c"
    break;

  case 24: /* decimal: number  */
#line 247 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2734 "src/parser.c"
    break;

  case 25: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 255 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2742 "src/parser.c"
    break;

  case 26: /* class_ext: "extends" type_decl_exp  */
#line 258 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2748 "src/parser.c"
    break;

  case 27: /* class_ext: %empty  */
#line 258 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2754 "src/parser.c"
    break;

  case 28: /* traits: %empty  */
#line 259 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2760 "src/parser.c"
    break;

  case 29: /* traits: ":" id_list  */
#line 259 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2766 "src/parser.c"
    break;

  case 30: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 261 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2774 "src/parser.c"
    break;

  case 31: /* id_list: "<identifier>"  */
#line 267 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2783 "src/parser.c"
    break;

  case 32: /* id_list: id_list "," "<identifier>"  */
#line 272 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2792 "src/parser.c"
    break;

  case 33: /* specialized_list: "<identifier>" traits  */
#line 277 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2805 "src/parser.c"
    break;

  case 34: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 285 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2815 "src/parser.c"
    break;

  case 35: /* stmt_list: stmt  */
#line 291 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2824 "src/parser.c"
    break;

  case 36: /* stmt_list: stmt_list stmt  */
#line 295 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2833 "src/parser.c"
    break;

  case 37: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 300 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2840 "src/parser.c"
    break;

  case 38: /* _func_effects: "perform" "<identifier>"  */
#line 303 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2846 "src/parser.c"
    break;

  case 39: /* _func_effects: _func_effects "<identifier>"  */
#line 303 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2852 "src/parser.c"
    break;

  case 40: /* func_effects: %empty  */
#line 304 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2858 "src/parser.c"
    break;

  case 41: /* func_effects: _func_effects  */
#line 304 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2864 "src/parser.c"
    break;

  case 42: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 306 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2871 "src/parser.c"
    break;

  case 43: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 309 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2881 "src/parser.c"
    break;

  case 44: /* typedef_when: %empty  */
#line 315 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2887 "src/parser.c"
    break;

  case 45: /* typedef_when: "when" binary_exp  */
#line 315 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2893 "src/parser.c"
    break;

  case 46: /* type_def_type: "typedef"  */
#line 316 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2899 "src/parser.c"
    break;

  case 47: /* type_def_type: "distinct"  */
#line 316 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2905 "src/parser.c"
    break;

  case 48: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 317 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2918 "src/parser.c"
    break;

  case 49: /* type_decl_array: type_decl array  */
#line 326 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2924 "src/parser.c"
    break;

  case 51: /* type_decl_exp: type_decl_array  */
#line 328 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2932 "src/parser.c"
    break;

  case 52: /* type_decl_empty: type_decl_array  */
#line 332 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2940 "src/parser.c"
    break;

  case 53: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 337 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2949 "src/parser.c"
    break;

  case 54: /* arg: type_decl_empty arg_decl  */
#line 341 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 2958 "src/parser.c"
    break;

  case 55: /* arg_list: arg  */
#line 346 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2968 "src/parser.c"
    break;

  case 56: /* arg_list: arg_list "," arg  */
#line 351 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2980 "src/parser.c"
    break;

  case 57: /* locale_arg: arg  */
#line 360 "src/gwion.y"
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
#line 2996 "src/parser.c"
    break;

  case 58: /* locale_arg: locale_arg "," arg  */
#line 371 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3008 "src/parser.c"
    break;

  case 60: /* locale_list: %empty  */
#line 380 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3022 "src/parser.c"
    break;

  case 61: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 390 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3028 "src/parser.c"
    break;

  case 62: /* fptr_list: fptr_arg  */
#line 392 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3037 "src/parser.c"
    break;

  case 63: /* fptr_list: fptr_list "," fptr_arg  */
#line 396 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3046 "src/parser.c"
    break;

  case 64: /* code_stmt: "{" "}"  */
#line 402 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3053 "src/parser.c"
    break;

  case 65: /* code_stmt: "{" stmt_list "}"  */
#line 404 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3060 "src/parser.c"
    break;

  case 66: /* code_list: "{" "}"  */
#line 408 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3066 "src/parser.c"
    break;

  case 67: /* code_list: "{" stmt_list "}"  */
#line 409 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3072 "src/parser.c"
    break;

  case 68: /* stmt_pp: "<comment>"  */
#line 412 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3078 "src/parser.c"
    break;

  case 69: /* stmt_pp: "#include"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3084 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#define"  */
#line 414 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3090 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#pragma"  */
#line 415 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3096 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#undef"  */
#line 416 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3102 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#ifdef"  */
#line 417 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3108 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifndef"  */
#line 418 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3114 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#else"  */
#line 419 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3120 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#if"  */
#line 420 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3126 "src/parser.c"
    break;

  case 77: /* stmt_pp: "\n"  */
#line 421 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3132 "src/parser.c"
    break;

  case 78: /* stmt_pp: "import"  */
#line 422 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3138 "src/parser.c"
    break;

  case 79: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 423 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3145 "src/parser.c"
    break;

  case 80: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 425 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3152 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 442 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3158 "src/parser.c"
    break;

  case 93: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 442 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3172 "src/parser.c"
    break;

  case 94: /* retry_stmt: "retry" ";"  */
#line 452 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3182 "src/parser.c"
    break;

  case 95: /* $@2: %empty  */
#line 457 "src/gwion.y"
                  { arg->handling = true; }
#line 3188 "src/parser.c"
    break;

  case 96: /* handler: "handle" $@2 opt_id stmt  */
#line 457 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3194 "src/parser.c"
    break;

  case 97: /* handler_list: handler  */
#line 458 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3204 "src/parser.c"
    break;

  case 98: /* handler_list: handler_list handler  */
#line 463 "src/gwion.y"
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
#line 3225 "src/parser.c"
    break;

  case 99: /* try_stmt: "try" stmt handler_list  */
#line 479 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3234 "src/parser.c"
    break;

  case 101: /* opt_id: %empty  */
#line 484 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3240 "src/parser.c"
    break;

  case 103: /* opt_comma: %empty  */
#line 485 "src/gwion.y"
                 {}
#line 3246 "src/parser.c"
    break;

  case 104: /* enum_value: "<identifier>"  */
#line 488 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .xid = (yyvsp[0].sym) }; }
#line 3252 "src/parser.c"
    break;

  case 105: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 489 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.xid = (yyvsp[0].sym), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3263 "src/parser.c"
    break;

  case 106: /* enum_list: enum_value  */
#line 496 "src/gwion.y"
  {
    (yyval.enum_list) = new_mp_vector(mpool(arg), EnumValue, 1);
    mp_vector_set((yyval.enum_list), EnumValue, 0, (yyvsp[0].enum_value));
  }
#line 3272 "src/parser.c"
    break;

  case 107: /* enum_list: enum_list "," enum_value  */
#line 501 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].enum_list), EnumValue, (yyvsp[0].enum_value));
    (yyval.enum_list) = (yyvsp[-2].enum_list);
  }
#line 3281 "src/parser.c"
    break;

  case 108: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 506 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3290 "src/parser.c"
    break;

  case 109: /* when_exp: "when" exp  */
#line 511 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3296 "src/parser.c"
    break;

  case 110: /* when_exp: %empty  */
#line 511 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3302 "src/parser.c"
    break;

  case 111: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 514 "src/gwion.y"
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
#line 3318 "src/parser.c"
    break;

  case 112: /* match_list: match_case_stmt  */
#line 526 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3327 "src/parser.c"
    break;

  case 113: /* match_list: match_list match_case_stmt  */
#line 530 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3336 "src/parser.c"
    break;

  case 114: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 535 "src/gwion.y"
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
#line 3351 "src/parser.c"
    break;

  case 115: /* match_stmt: "match" exp "{" match_list "}"  */
#line 546 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3365 "src/parser.c"
    break;

  case 116: /* flow: "while"  */
#line 557 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3371 "src/parser.c"
    break;

  case 117: /* flow: "until"  */
#line 558 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3377 "src/parser.c"
    break;

  case 118: /* loop_stmt: flow "(" exp ")" stmt  */
#line 563 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3390 "src/parser.c"
    break;

  case 119: /* loop_stmt: "do" stmt flow exp ";"  */
#line 572 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3404 "src/parser.c"
    break;

  case 120: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 582 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3418 "src/parser.c"
    break;

  case 121: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 592 "src/gwion.y"
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
#line 3433 "src/parser.c"
    break;

  case 122: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 603 "src/gwion.y"
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
#line 3450 "src/parser.c"
    break;

  case 123: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 616 "src/gwion.y"
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
#line 3472 "src/parser.c"
    break;

  case 124: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 634 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3485 "src/parser.c"
    break;

  case 125: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 643 "src/gwion.y"
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
#line 3502 "src/parser.c"
    break;

  case 126: /* defer_stmt: "defer" stmt  */
#line 656 "src/gwion.y"
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
#line 3519 "src/parser.c"
    break;

  case 127: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 671 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3532 "src/parser.c"
    break;

  case 128: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 680 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3546 "src/parser.c"
    break;

  case 129: /* breaks: "break"  */
#line 690 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3552 "src/parser.c"
    break;

  case 130: /* breaks: "continue"  */
#line 690 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3558 "src/parser.c"
    break;

  case 131: /* jump_stmt: "return" exp ";"  */
#line 692 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3568 "src/parser.c"
    break;

  case 132: /* jump_stmt: "return" ";"  */
#line 697 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3577 "src/parser.c"
    break;

  case 133: /* jump_stmt: breaks decimal ";"  */
#line 701 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].gwint).num }},
      .pos = (yylsp[-2])
    };
  }
#line 3587 "src/parser.c"
    break;

  case 134: /* jump_stmt: breaks ";"  */
#line 706 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3596 "src/parser.c"
    break;

  case 135: /* exp_stmt: exp ";"  */
#line 712 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3606 "src/parser.c"
    break;

  case 136: /* exp_stmt: ";"  */
#line 717 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3615 "src/parser.c"
    break;

  case 137: /* exp: binary_exp  */
#line 723 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3621 "src/parser.c"
    break;

  case 138: /* exp: binary_exp "," exp  */
#line 725 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3633 "src/parser.c"
    break;

  case 140: /* binary_exp: binary_exp "@" decl_exp  */
#line 736 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3639 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 737 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3645 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 738 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3651 "src/parser.c"
    break;

  case 143: /* call_template: ":[" type_list "]"  */
#line 741 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3657 "src/parser.c"
    break;

  case 144: /* call_template: %empty  */
#line 741 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3663 "src/parser.c"
    break;

  case 150: /* array_exp: "[" exp "]"  */
#line 746 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3669 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]" array_exp  */
#line 747 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3677 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]" "[" "]"  */
#line 750 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3683 "src/parser.c"
    break;

  case 153: /* array_empty: "[" "]"  */
#line 754 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3689 "src/parser.c"
    break;

  case 154: /* array_empty: array_empty "[" "]"  */
#line 755 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3695 "src/parser.c"
    break;

  case 155: /* array_empty: array_empty array_exp  */
#line 756 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3701 "src/parser.c"
    break;

  case 156: /* dict_list: binary_exp ":" binary_exp  */
#line 760 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3707 "src/parser.c"
    break;

  case 157: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 761 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3713 "src/parser.c"
    break;

  case 158: /* range: "[" exp ":" exp "]"  */
#line 764 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3719 "src/parser.c"
    break;

  case 159: /* range: "[" exp ":" "]"  */
#line 765 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3725 "src/parser.c"
    break;

  case 160: /* range: "[" ":" exp "]"  */
#line 766 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3731 "src/parser.c"
    break;

  case 164: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 772 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3737 "src/parser.c"
    break;

  case 165: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 773 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3747 "src/parser.c"
    break;

  case 166: /* func_args: "(" arg_list ")"  */
#line 779 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3753 "src/parser.c"
    break;

  case 167: /* func_args: "(" ")"  */
#line 779 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3759 "src/parser.c"
    break;

  case 168: /* fptr_args: "(" fptr_list ")"  */
#line 780 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3765 "src/parser.c"
    break;

  case 169: /* fptr_args: "(" ")"  */
#line 780 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3771 "src/parser.c"
    break;

  case 170: /* decl_template: ":[" specialized_list "]"  */
#line 782 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3777 "src/parser.c"
    break;

  case 171: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 783 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3788 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" "..." "]"  */
#line 789 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3798 "src/parser.c"
    break;

  case 173: /* decl_template: %empty  */
#line 794 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3804 "src/parser.c"
    break;

  case 174: /* global: "global"  */
#line 796 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3810 "src/parser.c"
    break;

  case 176: /* opt_global: %empty  */
#line 797 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3816 "src/parser.c"
    break;

  case 177: /* storage_flag: "static"  */
#line 799 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3822 "src/parser.c"
    break;

  case 179: /* access_flag: "private"  */
#line 801 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3828 "src/parser.c"
    break;

  case 180: /* access_flag: "protect"  */
#line 802 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3834 "src/parser.c"
    break;

  case 181: /* flag: access_flag  */
#line 805 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3840 "src/parser.c"
    break;

  case 182: /* flag: storage_flag  */
#line 806 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3846 "src/parser.c"
    break;

  case 183: /* flag: access_flag storage_flag  */
#line 807 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3852 "src/parser.c"
    break;

  case 184: /* flag: %empty  */
#line 808 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3858 "src/parser.c"
    break;

  case 185: /* final: "final"  */
#line 811 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3864 "src/parser.c"
    break;

  case 186: /* final: %empty  */
#line 811 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3870 "src/parser.c"
    break;

  case 187: /* modifier: "abstract" final  */
#line 813 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3876 "src/parser.c"
    break;

  case 189: /* func_def_base: "fun" func_base func_args code_list  */
#line 816 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3886 "src/parser.c"
    break;

  case 190: /* func_def_base: "fun" func_base func_args ";"  */
#line 821 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3898 "src/parser.c"
    break;

  case 191: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 828 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3909 "src/parser.c"
    break;

  case 192: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 834 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3920 "src/parser.c"
    break;

  case 193: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 843 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3932 "src/parser.c"
    break;

  case 199: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 854 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3946 "src/parser.c"
    break;

  case 200: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 864 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3959 "src/parser.c"
    break;

  case 201: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 873 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3973 "src/parser.c"
    break;

  case 202: /* op_base: type_decl_empty OPID_A func_args  */
#line 883 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3982 "src/parser.c"
    break;

  case 203: /* operator: "operator"  */
#line 888 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3988 "src/parser.c"
    break;

  case 204: /* operator: "operator" global  */
#line 888 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3994 "src/parser.c"
    break;

  case 205: /* op_def: operator op_base code_list  */
#line 891 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4000 "src/parser.c"
    break;

  case 206: /* op_def: operator op_base ";"  */
#line 893 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4006 "src/parser.c"
    break;

  case 207: /* op_def: operator "abstract" op_base ";"  */
#line 895 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4012 "src/parser.c"
    break;

  case 211: /* func_def: operator "new" func_args code_list  */
#line 899 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4022 "src/parser.c"
    break;

  case 212: /* func_def: operator "new" func_args ";"  */
#line 905 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4033 "src/parser.c"
    break;

  case 213: /* func_def: operator "abstract" "new" func_args ";"  */
#line 912 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4044 "src/parser.c"
    break;

  case 214: /* type_decl_base: "<identifier>"  */
#line 920 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4050 "src/parser.c"
    break;

  case 215: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 921 "src/gwion.y"
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
#line 4066 "src/parser.c"
    break;

  case 216: /* type_decl_tmpl: type_decl_base call_template  */
#line 935 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4072 "src/parser.c"
    break;

  case 217: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 936 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4078 "src/parser.c"
    break;

  case 219: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 941 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4084 "src/parser.c"
    break;

  case 220: /* option: "?"  */
#line 944 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4090 "src/parser.c"
    break;

  case 221: /* option: OPTIONS  */
#line 944 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4096 "src/parser.c"
    break;

  case 222: /* option: %empty  */
#line 944 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4102 "src/parser.c"
    break;

  case 223: /* type_decl_opt: type_decl_noflag option  */
#line 945 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4108 "src/parser.c"
    break;

  case 225: /* type_decl: type_decl_flag type_decl_opt  */
#line 946 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4114 "src/parser.c"
    break;

  case 226: /* type_decl_flag: "late"  */
#line 949 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4120 "src/parser.c"
    break;

  case 227: /* type_decl_flag: "const"  */
#line 950 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4126 "src/parser.c"
    break;

  case 228: /* opt_var: "var"  */
#line 952 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4132 "src/parser.c"
    break;

  case 229: /* opt_var: %empty  */
#line 952 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4138 "src/parser.c"
    break;

  case 230: /* type_decl_flag2: "var"  */
#line 954 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4144 "src/parser.c"
    break;

  case 232: /* union_decl: "<identifier>" ";"  */
#line 957 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4153 "src/parser.c"
    break;

  case 233: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 961 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4159 "src/parser.c"
    break;

  case 234: /* union_list: union_decl  */
#line 963 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4168 "src/parser.c"
    break;

  case 235: /* union_list: union_list union_decl  */
#line 967 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4177 "src/parser.c"
    break;

  case 236: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 973 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4189 "src/parser.c"
    break;

  case 237: /* var_decl: "<identifier>"  */
#line 982 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4195 "src/parser.c"
    break;

  case 238: /* arg_decl: "<identifier>"  */
#line 984 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4201 "src/parser.c"
    break;

  case 240: /* fptr_arg_decl: %empty  */
#line 985 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4207 "src/parser.c"
    break;

  case 254: /* opt_exp: exp  */
#line 993 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4213 "src/parser.c"
    break;

  case 255: /* opt_exp: %empty  */
#line 993 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4219 "src/parser.c"
    break;

  case 257: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 996 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4225 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?:" con_exp  */
#line 998 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4231 "src/parser.c"
    break;

  case 260: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 1000 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4237 "src/parser.c"
    break;

  case 262: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 1001 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4243 "src/parser.c"
    break;

  case 264: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1002 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4249 "src/parser.c"
    break;

  case 266: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1003 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4255 "src/parser.c"
    break;

  case 268: /* and_exp: and_exp "&" eq_exp  */
#line 1004 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4261 "src/parser.c"
    break;

  case 270: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1005 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4267 "src/parser.c"
    break;

  case 272: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1006 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4273 "src/parser.c"
    break;

  case 274: /* shift_exp: shift_exp shift_op add_exp  */
#line 1007 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4279 "src/parser.c"
    break;

  case 276: /* add_exp: add_exp add_op mul_exp  */
#line 1008 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4285 "src/parser.c"
    break;

  case 278: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1009 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4291 "src/parser.c"
    break;

  case 280: /* dur_exp: dur_exp "::" cast_exp  */
#line 1010 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4297 "src/parser.c"
    break;

  case 282: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1013 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4303 "src/parser.c"
    break;

  case 289: /* unary_exp: unary_op unary_exp  */
#line 1020 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4309 "src/parser.c"
    break;

  case 290: /* unary_exp: "spork" unary_exp  */
#line 1021 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4315 "src/parser.c"
    break;

  case 291: /* unary_exp: "fork" unary_exp  */
#line 1022 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4321 "src/parser.c"
    break;

  case 292: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1023 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4329 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp  */
#line 1026 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4335 "src/parser.c"
    break;

  case 294: /* unary_exp: "spork" code_list  */
#line 1027 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4341 "src/parser.c"
    break;

  case 295: /* unary_exp: "fork" code_list  */
#line 1028 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4347 "src/parser.c"
    break;

  case 296: /* unary_exp: "spork" captures code_list  */
#line 1029 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4353 "src/parser.c"
    break;

  case 297: /* unary_exp: "fork" captures code_list  */
#line 1030 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4359 "src/parser.c"
    break;

  case 298: /* unary_exp: "$" type_decl_empty  */
#line 1031 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4365 "src/parser.c"
    break;

  case 299: /* lambda_list: "<identifier>"  */
#line 1034 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4375 "src/parser.c"
    break;

  case 300: /* lambda_list: lambda_list "<identifier>"  */
#line 1039 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4385 "src/parser.c"
    break;

  case 301: /* lambda_arg: "\\" lambda_list  */
#line 1044 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4391 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\"  */
#line 1044 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4397 "src/parser.c"
    break;

  case 303: /* type_list: type_decl_empty  */
#line 1047 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4406 "src/parser.c"
    break;

  case 304: /* type_list: type_list "," type_decl_empty  */
#line 1051 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4415 "src/parser.c"
    break;

  case 305: /* call_paren: "(" exp ")"  */
#line 1057 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4421 "src/parser.c"
    break;

  case 306: /* call_paren: "(" ")"  */
#line 1057 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4427 "src/parser.c"
    break;

  case 309: /* dot_exp: post_exp "." "<identifier>"  */
#line 1061 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4440 "src/parser.c"
    break;

  case 311: /* post_exp: post_exp array_exp  */
#line 1072 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4446 "src/parser.c"
    break;

  case 312: /* post_exp: post_exp range  */
#line 1074 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4452 "src/parser.c"
    break;

  case 313: /* post_exp: post_exp call_template call_paren  */
#line 1076 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4459 "src/parser.c"
    break;

  case 314: /* post_exp: post_exp post_op  */
#line 1079 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4465 "src/parser.c"
    break;

  case 315: /* post_exp: dot_exp  */
#line 1080 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4471 "src/parser.c"
    break;

  case 316: /* interp_exp: "<interp string end>"  */
#line 1084 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4477 "src/parser.c"
    break;

  case 317: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1085 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4483 "src/parser.c"
    break;

  case 318: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1086 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4489 "src/parser.c"
    break;

  case 319: /* interp: "${" interp_exp  */
#line 1088 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4495 "src/parser.c"
    break;

  case 320: /* interp: interp "${" interp_exp  */
#line 1089 "src/gwion.y"
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
#line 4510 "src/parser.c"
    break;

  case 321: /* capture: "<identifier>"  */
#line 1100 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4516 "src/parser.c"
    break;

  case 322: /* capture: "&" "<identifier>"  */
#line 1100 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4522 "src/parser.c"
    break;

  case 323: /* _captures: capture  */
#line 1102 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4528 "src/parser.c"
    break;

  case 324: /* _captures: _captures capture  */
#line 1103 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4534 "src/parser.c"
    break;

  case 325: /* captures: ":" _captures ":"  */
#line 1104 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4540 "src/parser.c"
    break;

  case 326: /* captures: %empty  */
#line 1104 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4546 "src/parser.c"
    break;

  case 329: /* prim_exp: "<identifier>"  */
#line 1107 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4552 "src/parser.c"
    break;

  case 330: /* prim_exp: number  */
#line 1108 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc));
    (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4560 "src/parser.c"
    break;

  case 331: /* prim_exp: "<float>"  */
#line 1111 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4566 "src/parser.c"
    break;

  case 332: /* prim_exp: interp  */
#line 1112 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4572 "src/parser.c"
    break;

  case 333: /* prim_exp: "<litteral string>"  */
#line 1113 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4578 "src/parser.c"
    break;

  case 334: /* prim_exp: "<litteral char>"  */
#line 1114 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4584 "src/parser.c"
    break;

  case 335: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1115 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4597 "src/parser.c"
    break;

  case 336: /* prim_exp: "{" dict_list "}"  */
#line 1123 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4603 "src/parser.c"
    break;

  case 337: /* prim_exp: range  */
#line 1124 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4609 "src/parser.c"
    break;

  case 338: /* prim_exp: "<<<" exp ">>>"  */
#line 1125 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4615 "src/parser.c"
    break;

  case 339: /* prim_exp: "(" exp ")"  */
#line 1126 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4621 "src/parser.c"
    break;

  case 340: /* prim_exp: "`foo`"  */
#line 1127 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4632 "src/parser.c"
    break;

  case 341: /* prim_exp: lambda_arg captures code_list  */
#line 1133 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4638 "src/parser.c"
    break;

  case 342: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1134 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4644 "src/parser.c"
    break;

  case 343: /* prim_exp: "(" op_op ")"  */
#line 1135 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4650 "src/parser.c"
    break;

  case 344: /* prim_exp: "perform" opt_id  */
#line 1136 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4656 "src/parser.c"
    break;

  case 345: /* prim_exp: "(" ")"  */
#line 1137 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4662 "src/parser.c"
    break;


#line 4666 "src/parser.c"

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

#line 1139 "src/gwion.y"

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
