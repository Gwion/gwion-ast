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

ANN static int parser_error(const loc_t*, Scanner*const, const char *, const uint);
ANN static Symbol sig_name(const Scanner*, const pos_t);
ANN static Symbol lambda_name(const Scanner*, const pos_t);
ANN void lex_spread(void *data);

#define YYLIST_INI(type, dest, src)          \
  dest = new_mp_vector(mpool(arg), type, 1); \
  mp_vector_set(dest, type, 0, src);

#define YYLIST_END(type, dest, src, new )          \
    mp_vector_add(mpool(arg), &(src), type, new);  \
    dest = src;


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
  YYSYMBOL_ast = 128,                      /* ast  */
  YYSYMBOL_section_list = 129,             /* section_list  */
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
  YYSYMBOL_specialized = 142,              /* specialized  */
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
  YYSYMBOL_opt_comma = 174,                /* opt_comma  */
  YYSYMBOL_enum_value = 175,               /* enum_value  */
  YYSYMBOL_enum_list = 176,                /* enum_list  */
  YYSYMBOL_enum_def = 177,                 /* enum_def  */
  YYSYMBOL_when_exp = 178,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 179,          /* match_case_stmt  */
  YYSYMBOL_match_list = 180,               /* match_list  */
  YYSYMBOL_match_stmt = 181,               /* match_stmt  */
  YYSYMBOL_flow = 182,                     /* flow  */
  YYSYMBOL_loop_stmt = 183,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 184,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 185,           /* selection_stmt  */
  YYSYMBOL_breaks = 186,                   /* breaks  */
  YYSYMBOL_jump_stmt = 187,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 188,                 /* exp_stmt  */
  YYSYMBOL_exp = 189,                      /* exp  */
  YYSYMBOL_binary_exp = 190,               /* binary_exp  */
  YYSYMBOL_call_template = 191,            /* call_template  */
  YYSYMBOL_op = 192,                       /* op  */
  YYSYMBOL_array_exp = 193,                /* array_exp  */
  YYSYMBOL_array_empty = 194,              /* array_empty  */
  YYSYMBOL_dict_list = 195,                /* dict_list  */
  YYSYMBOL_range = 196,                    /* range  */
  YYSYMBOL_array = 197,                    /* array  */
  YYSYMBOL_decl_exp = 198,                 /* decl_exp  */
  YYSYMBOL_func_args = 199,                /* func_args  */
  YYSYMBOL_fptr_args = 200,                /* fptr_args  */
  YYSYMBOL_decl_template = 201,            /* decl_template  */
  YYSYMBOL_global = 202,                   /* global  */
  YYSYMBOL_opt_global = 203,               /* opt_global  */
  YYSYMBOL_storage_flag = 204,             /* storage_flag  */
  YYSYMBOL_access_flag = 205,              /* access_flag  */
  YYSYMBOL_flag = 206,                     /* flag  */
  YYSYMBOL_final = 207,                    /* final  */
  YYSYMBOL_modifier = 208,                 /* modifier  */
  YYSYMBOL_func_def_base = 209,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 210,            /* abstract_fdef  */
  YYSYMBOL_op_op = 211,                    /* op_op  */
  YYSYMBOL_op_base = 212,                  /* op_base  */
  YYSYMBOL_operator = 213,                 /* operator  */
  YYSYMBOL_op_def = 214,                   /* op_def  */
  YYSYMBOL_func_def = 215,                 /* func_def  */
  YYSYMBOL_type_decl_base = 216,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 217,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 218,         /* type_decl_noflag  */
  YYSYMBOL_option = 219,                   /* option  */
  YYSYMBOL_type_decl_opt = 220,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 221,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 222,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 223,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 224,          /* type_decl_flag2  */
  YYSYMBOL_variable = 225,                 /* variable  */
  YYSYMBOL_variable_list = 226,            /* variable_list  */
  YYSYMBOL_union_def = 227,                /* union_def  */
  YYSYMBOL_var_decl = 228,                 /* var_decl  */
  YYSYMBOL_arg_decl = 229,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 230,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 231,                    /* eq_op  */
  YYSYMBOL_rel_op = 232,                   /* rel_op  */
  YYSYMBOL_shift_op = 233,                 /* shift_op  */
  YYSYMBOL_add_op = 234,                   /* add_op  */
  YYSYMBOL_mul_op = 235,                   /* mul_op  */
  YYSYMBOL_opt_exp = 236,                  /* opt_exp  */
  YYSYMBOL_con_exp = 237,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 238,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 239,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 240,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 241,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 242,                  /* and_exp  */
  YYSYMBOL_eq_exp = 243,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 244,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 245,                /* shift_exp  */
  YYSYMBOL_add_exp = 246,                  /* add_exp  */
  YYSYMBOL_mul_exp = 247,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 248,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 249,                 /* cast_exp  */
  YYSYMBOL_unary_op = 250,                 /* unary_op  */
  YYSYMBOL_unary_exp = 251,                /* unary_exp  */
  YYSYMBOL_lambda_list = 252,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 253,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 254,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 255,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 256,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 257,               /* call_paren  */
  YYSYMBOL_post_op = 258,                  /* post_op  */
  YYSYMBOL_dot_exp = 259,                  /* dot_exp  */
  YYSYMBOL_post_exp = 260,                 /* post_exp  */
  YYSYMBOL_interp_exp = 261,               /* interp_exp  */
  YYSYMBOL_interp = 262,                   /* interp  */
  YYSYMBOL_capture = 263,                  /* capture  */
  YYSYMBOL_capture_list = 264,             /* capture_list  */
  YYSYMBOL_captures = 265,                 /* captures  */
  YYSYMBOL_array_lit_ed = 266,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 267,                /* basic_exp  */
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
#define YYFINAL  227
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  624

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
       0,   202,   202,   203,   206,   207,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   222,   224,   231,   240,
     240,   240,   242,   248,   255,   262,   266,   266,   267,   267,
     269,   274,   275,   277,   283,   290,   291,   293,   294,   296,
     299,   299,   300,   300,   302,   305,   311,   311,   312,   312,
     313,   322,   322,   324,   328,   333,   337,   342,   346,   355,
     367,   375,   376,   387,   389,   390,   393,   395,   399,   400,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   432,   432,   441,   446,   446,   447,   451,
     467,   470,   470,   471,   471,   474,   475,   482,   483,   486,
     491,   491,   494,   503,   504,   506,   515,   524,   525,   529,
     536,   544,   552,   561,   571,   584,   591,   601,   613,   620,
     629,   629,   631,   632,   633,   634,   637,   638,   641,   642,
     652,   653,   654,   655,   657,   657,   659,   659,   659,   659,
     659,   662,   663,   666,   670,   671,   672,   676,   677,   680,
     681,   682,   686,   686,   687,   688,   689,   695,   695,   696,
     696,   699,   700,   704,   708,   710,   711,   711,   713,   713,
     715,   716,   719,   720,   721,   722,   725,   725,   727,   727,
     730,   735,   742,   748,   756,   765,   765,   765,   765,   765,
     767,   777,   786,   796,   802,   802,   804,   806,   808,   811,
     811,   811,   812,   818,   825,   834,   835,   849,   850,   854,
     855,   858,   858,   858,   859,   860,   860,   863,   864,   866,
     866,   868,   868,   871,   875,   877,   878,   881,   890,   892,
     893,   893,   895,   895,   896,   896,   896,   896,   897,   897,
     898,   898,   899,   899,   899,   901,   901,   902,   903,   905,
     908,   908,   909,   909,   910,   910,   911,   911,   912,   912,
     913,   913,   914,   914,   915,   915,   916,   916,   917,   917,
     918,   918,   920,   920,   923,   923,   923,   924,   924,   927,
     928,   929,   930,   931,   934,   935,   936,   937,   938,   939,
     942,   945,   950,   950,   952,   953,   956,   960,   961,   964,
     965,   967,   967,   969,   978,   979,   981,   983,   986,   988,
     992,   993,   994,   996,   997,  1008,  1008,  1010,  1011,  1012,
    1012,  1013,  1013,  1016,  1020,  1021,  1022,  1025,  1026,  1027,
    1028,  1036,  1037,  1038,  1039,  1040,  1046,  1047,  1048,  1049,
    1050
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
  "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "ast", "section_list",
  "section", "class_flag", "class_def", "class_body", "trait_def",
  "number", "decimal", "prim_def", "class_ext", "traits", "extend_def",
  "id_list", "specialized", "specialized_list", "stmt_list", "fptr_base",
  "_func_effects", "func_effects", "func_base", "fptr_def", "typedef_when",
  "type_def_type", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "locale_arg", "locale_list",
  "fptr_arg", "fptr_list", "code_stmt", "code_list", "stmt_pp", "stmt",
  "spread_stmt", "$@1", "retry_stmt", "handler", "$@2", "handler_list",
  "try_stmt", "opt_id", "opt_comma", "enum_value", "enum_list", "enum_def",
  "when_exp", "match_case_stmt", "match_list", "match_stmt", "flow",
  "loop_stmt", "defer_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "dict_list", "range", "array", "decl_exp", "func_args",
  "fptr_args", "decl_template", "global", "opt_global", "storage_flag",
  "access_flag", "flag", "final", "modifier", "func_def_base",
  "abstract_fdef", "op_op", "op_base", "operator", "op_def", "func_def",
  "type_decl_base", "type_decl_tmpl", "type_decl_noflag", "option",
  "type_decl_opt", "type_decl", "type_decl_flag", "opt_var",
  "type_decl_flag2", "variable", "variable_list", "union_def", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "tmplarg_exp", "tmplarg", "tmplarg_list",
  "call_paren", "post_op", "dot_exp", "post_exp", "interp_exp", "interp",
  "capture", "capture_list", "captures", "array_lit_ed", "basic_exp",
  "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-461)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-253)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     836,  -461,  1512,  1669,   944,   243,  -461,    66,  -461,  1373,
    -461,    92,   122,   180,  2176,   243,   336,  -461,  -461,  1373,
     105,   198,   243,   243,   174,   253,   174,   243,  -461,  -461,
     243,   243,  -461,   135,  1373,   148,     6,   154,  -461,  -461,
    -461,  -461,  -461,  1628,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
     253,   253,  2280,  2280,  2176,  -461,  -461,  -461,   247,   836,
    -461,  -461,  -461,  -461,  -461,  -461,  1373,  -461,   243,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,  -461,   258,  -461,
    -461,  -461,    63,  -461,  -461,   282,    55,  -461,  -461,  -461,
    -461,   296,  -461,  -461,  -461,   243,  -461,  -461,    -4,   194,
     191,   175,   179,    64,   188,    46,    -1,   229,   204,   223,
    2320,  -461,   233,  -461,  -461,    50,   257,  -461,  -461,  -461,
    2176,  -461,   325,   326,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,  -461,  -461,  -461,  -461,  -461,   328,  -461,   329,
    -461,  -461,  -461,  -461,  2176,   234,   107,  -461,  1052,    39,
     331,  -461,  -461,  -461,  -461,   339,  -461,  -461,   186,   209,
    2176,   182,  2217,  1471,   262,   337,   267,  -461,   348,   320,
    -461,  -461,  -461,   271,   212,   274,  -461,   275,   243,  -461,
      28,  -461,   265,   245,   319,   216,  -461,   358,    94,  -461,
     285,   364,   253,   287,   277,  -461,  -461,   291,   371,   294,
    2176,  1628,  -461,   311,  -461,  -461,  -461,   375,  1160,   -25,
    -461,  -461,   377,  -461,  -461,   377,   284,  -461,  -461,  -461,
     253,  2176,  -461,  -461,   386,  -461,  2176,  2176,  2176,  2176,
     444,   339,  2338,   143,   253,   253,  2176,  2320,  2320,  2320,
    2320,  2320,  2320,  -461,  -461,  2320,  2320,  2320,  -461,  2320,
    -461,  2320,  2320,   253,  -461,   380,  1669,   315,   178,   375,
    -461,  -461,  -461,  1628,   -18,  -461,  -461,   395,  1765,  -461,
    -461,  -461,  -461,  2176,  -461,   176,   158,  -461,   253,  -461,
     253,   388,  2176,   400,    33,  1471,    25,   382,   396,  -461,
    -461,  -461,   320,   293,   368,  -461,  -461,   293,   321,   253,
     245,   333,  -461,    94,  -461,  -461,  -461,  1806,  -461,   407,
    -461,  -461,   365,   250,   387,   342,   293,   333,  -461,   253,
     423,  -461,   370,  -461,  1628,  1902,  -461,  -461,  1268,  -461,
     347,  -461,     1,  1160,  -461,  -461,  -461,   349,   425,  -461,
    -461,  -461,  -461,  -461,   339,   434,   201,   339,   293,   293,
    -461,  -461,   293,    30,   344,  -461,   194,   191,   175,   179,
      64,   188,    46,    -1,   229,   204,   223,  -461,  1160,  -461,
      23,  -461,  -461,  -461,  -461,   121,  -461,  -461,  -461,  -461,
    -461,   431,    57,  -461,   359,  -461,   228,  -461,  -461,   367,
     372,  1373,   438,  2176,  1373,  1943,   376,   441,  2176,  -461,
      68,    60,   105,  -461,    21,   404,  -461,   321,   333,   210,
     293,  -461,  -461,   322,  -461,  -461,   450,  2039,  -461,   457,
    -461,   359,  -461,   240,   378,   379,   460,   293,   459,   192,
    -461,   463,   464,   253,  -461,  -461,  -461,   465,  -461,  -461,
    -461,  -461,   293,  1373,   471,  -461,  -461,  -461,  -461,   470,
     473,   475,  -461,  -461,   393,  2320,    52,   474,   178,  -461,
    -461,  2176,  -461,   389,   253,  -461,   293,   293,   467,  -461,
      41,  -461,  1373,   480,   394,  -461,  2176,   466,   462,  -461,
    -461,   373,  -461,   485,  1373,   253,   487,   321,  -461,    56,
     253,   321,   210,   489,  -461,   604,  -461,   364,  -461,   415,
    -461,  -461,  -461,  -461,   253,  -461,  -461,  -461,  -461,  -461,
     357,  -461,   253,   377,   495,  -461,   478,  -461,  -461,   253,
     253,   253,  -461,  -461,  -461,  2080,  -461,  -461,  -461,  2176,
    -461,   364,  -461,  1373,  1373,  -461,  1373,   441,    71,  2176,
     411,  1373,   427,    60,   500,  -461,   429,  -461,  -461,    13,
    -461,   505,  -461,   210,  -461,  -461,   720,   387,  -461,  -461,
     511,   432,  -461,   255,   437,  -461,  -461,   377,  2176,   514,
     515,   516,   517,  -461,   -13,   518,  -461,  -461,  -461,  2176,
    1373,  -461,  1373,  -461,  -461,  -461,  -461,  -461,  -461,  -461,
    -461,  -461,   519,  -461,   521,  -461,  -461,  -461,  -461,   -13,
    -461,   253,  -461,  -461,  -461,    76,  -461,  1373,  -461,  -461,
     520,  1373,  -461,  -461
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   137,     0,   256,     0,   185,   231,     0,   117,     0,
     118,     0,     0,     0,     0,   185,     0,   130,   131,     0,
     102,     0,   185,   185,   177,     0,   204,   185,    48,    49,
     185,   185,   228,     0,     0,   303,     0,     0,   227,    23,
     334,   335,   336,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   337,   311,   284,   312,   285,
       0,     0,     0,     0,     0,   288,   287,   345,     0,     2,
       4,     8,     9,   333,    15,    10,     6,    13,   185,    14,
      85,    88,    37,    92,    91,    90,    11,    86,     0,    83,
      89,    84,     0,    87,    82,     0,   138,   342,   140,   209,
     210,     0,   211,     7,   232,   185,    12,   164,   257,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
       0,   282,   330,   286,   319,   289,   339,   338,   314,   350,
       0,   250,   284,   285,   253,   254,   150,   146,   247,   245,
     246,   244,   147,   248,   249,   148,   149,     0,   195,     0,
     197,   196,   199,   198,     0,   255,     0,    66,     0,   138,
       0,   178,   175,   180,   181,     0,   179,   183,   182,   187,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     101,   349,    95,     0,   187,     0,   176,     0,   185,   215,
       0,    54,     0,   145,   219,   223,   225,    52,     0,   205,
       0,     0,     0,     0,     0,   127,   300,   302,     0,     0,
     256,     0,   320,     0,   323,   299,    53,   294,     0,     0,
     295,   291,     0,   296,   292,     0,     0,     1,     5,    38,
       0,     0,   135,    24,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   256,     0,     0,     0,
       0,     0,     0,   242,   243,     0,     0,     0,   251,     0,
     252,     0,     0,     0,   290,     0,     0,     0,     0,     0,
     315,   316,   318,     0,     0,   344,   348,     0,     0,   332,
     331,   340,    67,     0,   341,     0,     0,   184,     0,   186,
       0,     0,     0,   337,     0,     0,     0,     0,     0,   132,
      96,    98,   100,   174,   187,   189,    16,   174,    28,     0,
     145,     0,   217,     0,   221,   222,   224,     0,   162,   163,
      51,   226,     0,     0,    42,     0,   174,     0,   301,    62,
       0,   255,     0,   321,     0,     0,   293,    68,     0,   325,
       0,   327,     0,     0,   297,   298,   343,     0,     0,   134,
     139,   143,   141,   142,     0,     0,     0,     0,   174,   174,
     207,   206,   174,     0,     0,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   283,     0,   346,
       0,   313,   305,   306,   307,     0,   304,   317,   324,   161,
     160,     0,   157,   168,     0,    57,     0,   191,   190,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,   113,
       0,     0,   102,    99,     0,    27,   188,    28,     0,     0,
     174,   218,    31,     0,   220,   154,     0,     0,   156,     0,
     170,   241,    64,     0,     0,    43,     0,   174,     0,     0,
      59,    61,     0,    62,    81,   322,   310,     0,    69,   326,
     329,   328,   174,     0,     0,   208,   213,   212,   203,     0,
       0,     0,   238,   165,     0,     0,   138,   151,     0,   144,
     159,     0,   239,    56,     0,   167,   174,   174,   128,   120,
       0,   125,     0,     0,     0,   229,     0,   111,   116,   114,
     105,     0,   107,   104,     0,     0,     0,    28,    35,     0,
       0,    28,     0,    29,    21,     0,    22,     0,    30,     0,
     155,    25,   240,    63,     0,   169,    40,    41,    45,    39,
       0,    93,     0,     0,     0,   309,    46,   119,   214,     0,
       0,     0,   166,   258,   347,     0,   152,   308,   158,     0,
      58,     0,    44,     0,     0,   121,     0,   230,     0,     0,
       0,     0,     0,   103,     0,    97,     0,   173,    33,     0,
     171,     0,    26,     0,    18,    20,     0,    42,    32,    65,
     215,     0,   235,     0,     0,    60,   193,     0,     0,     0,
       0,     0,     0,   153,    55,     0,   129,   126,   122,     0,
       0,   110,     0,   115,   106,   108,   109,    34,    36,   172,
      17,    19,     0,   233,     0,   237,   236,    94,   192,    47,
      50,     0,   201,   202,   194,     0,   123,   112,   216,   234,
       0,     0,   200,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -461,  -461,    31,   -66,   187,  -461,  -460,  -461,   -87,   206,
    -461,  -461,  -383,  -461,  -295,   -39,  -461,    -3,  -461,  -461,
     -34,  -461,  -461,  -461,  -461,  -461,   -52,    40,   -11,  -258,
    -461,  -461,    95,    29,  -461,  -461,   -59,  -461,    -9,  -461,
    -461,  -461,   237,  -461,  -461,  -461,   132,  -461,    -8,  -461,
    -461,  -461,   136,  -461,  -461,   381,  -461,  -461,  -461,  -461,
    -461,  -151,    38,     8,  -170,  -461,  -191,  -461,    77,   424,
    -461,    83,  -215,  -454,  -290,   173,  -461,   383,  -461,    15,
    -168,  -461,  -461,  -461,   312,   313,  -461,  -461,  -461,   366,
    -461,   244,  -461,   360,  -461,   -23,    12,  -461,   -10,  -461,
    -461,   100,   134,  -461,  -461,  -103,  -102,   -98,   -96,  -148,
    -240,  -461,   318,   323,   317,   324,   316,   314,   327,   334,
     335,   309,   330,   -86,   -12,  -461,  -461,  -461,   103,  -461,
    -241,  -101,  -461,  -461,  -203,  -461,   232,  -461,   -15,  -461,
    -249,  -461
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   183,    71,   506,    72,    73,   234,
      74,   501,   419,    75,   423,   498,   499,    76,   201,   435,
     436,   165,    77,   579,    78,    79,   191,   217,   394,   440,
     396,   441,   442,   432,   433,    80,   220,    81,    82,    83,
     574,    84,   301,   412,   302,    85,   181,   554,   492,   493,
      86,   550,   409,   410,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   269,   148,   270,   319,   160,    97,
     320,    98,   286,   324,   415,   166,   187,   167,   168,   184,
     290,   306,    99,   100,   149,   243,   101,   102,   103,   193,
     194,   195,   316,   196,   197,   104,   486,   105,   572,   573,
     106,   463,   473,   513,   255,   150,   151,   152,   153,   156,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   207,   122,   383,   384,   385,
     336,   123,   124,   125,   214,   126,   341,   342,   222,   281,
     127,   128
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     171,   158,   198,   228,   223,   233,   318,   365,   333,   216,
     179,   256,   159,   257,   192,   244,   305,   417,   259,   386,
     169,   261,   295,   312,   272,   205,   356,   395,   387,   406,
     176,   467,   439,   188,   502,   335,   438,   198,   198,   404,
     147,   155,   564,   236,   162,   202,   203,   544,   225,   215,
     221,   224,   175,   567,   178,  -145,   236,   266,   339,   236,
     559,   471,   332,   534,   560,   495,   232,   229,   459,   460,
     388,   170,   461,   495,   496,   237,   283,   590,   198,   488,
     237,   213,   621,   131,   339,   258,   340,   585,   246,   208,
     242,   408,   247,   230,   267,   450,   497,   172,   364,   188,
     238,   239,   226,   600,   497,   238,   239,   265,   264,   561,
     248,   189,   340,   462,   558,   279,   280,   278,   563,   407,
     245,    39,   464,   503,    39,   468,   237,   173,   428,   469,
     507,   445,   237,   283,   237,    56,   416,    58,   274,   454,
     421,   359,   458,   490,   405,   237,   360,   519,   237,   229,
     237,   238,   239,   343,   244,   143,   144,   238,   239,   238,
     239,   397,   526,   344,   237,   268,   345,   253,   343,   237,
     238,   239,   254,   238,   239,   238,   239,   189,   347,   198,
     294,   188,   393,   188,   361,   174,   541,   542,   180,   238,
     239,   325,   277,   363,   238,   239,   509,   186,     8,   199,
      10,   182,   521,   309,   456,   190,   379,   198,   291,   209,
     185,   343,   162,   504,   200,   338,   540,   198,   204,   386,
     505,   198,   198,   161,   162,   533,   159,   398,    32,   242,
      32,   206,   474,   362,   475,   233,    38,   210,    38,    39,
     198,    40,    41,    42,   514,   198,   515,   227,   331,   213,
     288,   289,   377,   304,   289,   188,   430,   382,   188,   189,
     188,   189,   198,   231,   575,   198,   605,   198,   256,   348,
     257,   580,   581,   582,   350,   259,   536,   399,   261,   400,
     161,   162,   163,   164,   331,   235,   198,   190,   251,   190,
     252,   392,   138,   139,   140,   141,   249,   457,   420,   262,
     198,   188,    32,   250,   380,    32,   198,    32,   314,   315,
      38,   213,   431,    38,   263,    38,   391,   260,   134,   135,
     351,   352,   353,   273,   491,   508,   509,   219,   278,   229,
     402,  -251,  -252,   189,   275,   276,   189,   240,   570,   177,
     338,     2,   284,     3,   285,   296,   130,   297,    32,     6,
     298,   299,   300,   620,   303,   426,    38,   307,   308,   311,
     268,   190,   188,   313,   190,   317,   190,    20,   322,   323,
     326,   327,   213,   447,   328,   338,   329,   330,   334,   189,
     335,    56,    57,    58,    59,   346,   466,   343,    32,   349,
     378,    35,   478,   241,   401,   481,    38,    39,   381,    40,
      41,    42,    43,   389,   403,   408,   411,   190,   414,    32,
     289,   480,    65,    66,   427,   418,   422,    38,   434,    55,
     198,    56,    57,    58,    59,   437,    39,    60,   443,   444,
     449,   453,   452,    61,    62,    63,    64,   455,   465,   470,
     570,   479,   472,   483,   527,   198,   487,   500,   216,   188,
     476,   198,    65,    66,   485,   477,    67,   382,   467,   484,
     511,   516,   517,   518,   576,   426,   491,   522,   190,   520,
     523,   525,   198,   545,   528,   529,   462,   198,   530,   274,
     531,   535,   543,   539,   556,   555,   546,   551,   547,   553,
     549,   198,   552,   509,   548,   557,    32,   198,   568,   198,
     228,   577,   578,   431,    38,   592,   198,   198,   198,   571,
     594,   596,   597,   599,   603,   604,   607,   610,   608,   611,
     598,   614,   612,   613,   619,   618,   622,   189,   429,    56,
      57,    58,    59,   602,   586,   587,   566,   588,   524,   413,
     562,   354,   593,   569,   494,   595,   489,   584,   538,   271,
     198,   287,   292,   355,   358,   190,   310,   424,   321,   589,
      65,    66,   571,   606,   532,   512,   366,   368,   370,   371,
     375,   537,   367,   426,   451,   369,     0,     0,     0,     0,
       0,   616,     0,   372,     0,     0,   609,   591,   198,   617,
       0,   373,   376,     0,   374,     0,     0,   615,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   229,     2,
       0,     3,   623,     0,     4,   565,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     1,    67,     2,     0,     3,     0,     0,
       4,   601,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    15,    16,    17,    18,
      19,    20,     0,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,    28,    29,    30,
       0,    31,    32,    33,    34,    35,     0,    36,    37,     0,
      38,    39,     0,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     1,
      67,     2,     0,     3,     0,     0,     4,     0,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,    25,
       0,    26,    27,    28,    29,    30,     0,    31,    32,    33,
      34,    35,     0,    36,    37,     0,    38,    39,     0,    40,
      41,    42,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    65,    66,     4,   157,    67,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,     0,    40,    41,    42,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
      65,    66,     4,   282,    67,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,    35,     0,     0,
      37,     0,    38,    39,     0,    40,    41,    42,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,    65,    66,
       4,   337,    67,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,     0,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    65,    66,     4,   448,
      67,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
       0,    40,    41,    42,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     0,     4,    65,    66,     6,     7,    67,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,     0,    40,    41,    42,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     1,     0,     2,     0,     3,     0,
       0,   130,     0,     0,     6,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   129,     3,
       0,     0,   130,    32,     0,     6,    35,     0,     0,     0,
       0,    38,    39,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,    32,     0,     0,    35,    61,    62,
      63,    64,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,    55,   131,    56,   132,    58,
     133,   134,   135,    60,     0,   136,     0,     0,     0,    61,
      62,    63,    64,     0,     0,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,     0,     0,    65,    66,
     145,   146,    67,     2,     0,     3,     0,     0,   130,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,   130,
      32,     0,     6,    35,     0,     0,     0,     0,    38,    39,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,   211,   212,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,    32,     0,     0,    35,    61,    62,    63,    64,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,   154,     0,     0,    61,    62,    63,    64,
       2,     0,     3,   390,     0,   130,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   425,     0,   130,    32,     0,     6,
      35,     0,     0,     0,     0,    38,    39,     0,    40,    41,
      42,    43,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     2,   446,     3,
       0,     0,   130,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,   482,
       3,     0,     0,   130,    32,     0,     6,    35,     0,     0,
       0,     0,    38,    39,     0,    40,    41,    42,    43,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,    39,     0,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     2,     0,     3,   510,     0,   130,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   583,     0,
     130,    32,     0,     6,    35,     0,     0,     0,     0,    38,
      39,     0,    40,    41,    42,    43,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,    32,     0,     0,    35,    61,    62,    63,    64,
      38,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     2,     0,     3,     0,     0,   130,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,   130,    32,     0,
       6,    35,     0,     0,     0,     0,    38,    39,     0,    40,
      41,    42,    43,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,    32,
       0,     0,    35,    61,    62,    63,    64,    38,    39,     0,
      40,    41,    42,    43,     0,     2,     0,     3,     0,     0,
     218,     0,    65,    66,     0,     0,    67,     0,     0,     0,
     293,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,    20,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
     130,     0,     0,    65,    66,    35,     0,    67,     0,     0,
       0,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,   219,    35,     0,    61,    62,    63,
      64,    39,     0,    40,    41,    42,    43,     0,     0,     0,
       0,     0,     0,     0,   357,     0,    65,    66,     0,     0,
      67,     0,     0,    55,     0,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,   131,    56,   258,    58,   260,   134,   135,     0,
       0,   136,     0,     0,     0,     0,    65,    66,     0,     0,
      67,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,     0,     0,     0,     0,     0,   145,   146
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    69,    63,    92,   197,   247,   211,    61,
      19,   114,     4,   115,    25,   101,   184,   307,   116,   268,
       5,   117,   173,   193,   125,    34,   241,   285,   269,     4,
      15,     8,   327,     5,   417,     5,   326,    60,    61,     6,
       2,     3,   502,     4,    38,    30,    31,     6,    63,    60,
      62,    63,    14,   507,    16,     5,     4,     7,    83,     4,
       4,     4,   210,    11,     8,    52,     3,    76,   358,   359,
     273,     5,   362,    52,    53,    93,    94,     6,   101,    11,
      93,    43,     6,    84,    83,    86,   111,   541,    92,    83,
     101,    23,    96,    78,    44,    94,    83,     5,   246,     5,
     118,   119,    64,   563,    83,   118,   119,   122,   120,    53,
     114,    83,   111,    83,   497,     8,     9,    94,   501,    94,
     105,    61,   363,   418,    61,     4,    93,     5,   319,     8,
     420,   334,    93,    94,    93,    85,   304,    87,   130,   354,
     310,   242,   357,    83,   295,    93,     3,   437,    93,   158,
      93,   118,   119,    10,   240,   109,   110,   118,   119,   118,
     119,     3,   452,   222,    93,   115,   225,   103,    10,    93,
     118,   119,   108,   118,   119,   118,   119,    83,   230,   202,
     172,     5,     6,     5,   243,     5,   476,   477,    83,   118,
     119,   202,   154,   245,   118,   119,     4,    24,    16,    26,
      18,     3,    10,   188,     3,   111,   265,   230,   170,    36,
      23,    10,    38,     3,    27,   218,   474,   240,    83,   468,
      10,   244,   245,    37,    38,   465,   218,   286,    52,   240,
      52,    83,     4,   244,     6,   322,    60,    83,    60,    61,
     263,    63,    64,    65,     4,   268,     6,     0,   210,   211,
      41,    42,   263,    41,    42,     5,     6,   268,     5,    83,
       5,    83,   285,     5,   522,   288,    11,   290,   371,   231,
     372,   529,   530,   531,   236,   373,   467,   288,   374,   290,
      37,    38,    39,    40,   246,     3,   309,   111,   113,   111,
     111,   283,   104,   105,   106,   107,   102,   356,   309,    95,
     323,     5,    52,   112,   266,    52,   329,    52,    92,    93,
      60,   273,   323,    60,    91,    60,   278,    88,    89,    90,
     237,   238,   239,    66,   411,     3,     4,    94,    94,   338,
     292,     6,     6,    83,     6,     6,    83,    41,    83,     3,
     343,     5,    11,     7,     5,    83,    10,    10,    52,    13,
      83,     3,    32,   611,    83,   317,    60,    83,    83,    94,
     115,   111,     5,    44,   111,     7,   111,    31,    83,     5,
      83,    94,   334,   335,    83,   378,     5,    83,    67,    83,
       5,    85,    86,    87,    88,   101,   378,    10,    52,     3,
      10,    55,   401,    97,     6,   404,    60,    61,    83,    63,
      64,    65,    66,     8,     4,    23,    10,   111,   115,    52,
      42,   403,   116,   117,     7,    94,    83,    60,    31,    83,
     443,    85,    86,    87,    88,    83,    61,    91,     5,    59,
      83,     6,    83,    97,    98,    99,   100,     3,    94,     8,
      83,     3,    83,   405,   453,   468,   408,    43,   500,     5,
      83,   474,   116,   117,    13,    83,   120,   468,     8,    83,
       3,    83,    83,     3,   523,   427,   553,     4,   111,    10,
       6,     6,   495,   482,     3,     5,    83,   500,     5,   471,
       5,     7,    15,    94,   495,   494,     6,    25,    94,     4,
      24,   514,   119,     4,   486,     8,    52,   520,    83,   522,
     566,     6,    24,   514,    60,    94,   529,   530,   531,   520,
      83,    11,    83,     8,     3,    83,    79,     3,   577,     4,
     559,     3,     6,     6,     3,     6,     6,    83,   322,    85,
      86,    87,    88,   567,   543,   544,   505,   546,   443,   302,
     500,    97,   551,   514,   412,   553,   410,   539,   471,   125,
     573,   168,   171,   240,   242,   111,   190,   313,   198,   547,
     116,   117,   573,   573,   464,   431,   248,   250,   252,   255,
     261,   468,   249,   535,   342,   251,    -1,    -1,    -1,    -1,
      -1,   590,    -1,   256,    -1,    -1,   578,   549,   611,   592,
      -1,   257,   262,    -1,   259,    -1,    -1,   589,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   617,     5,
      -1,     7,   621,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    60,    61,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,    -1,     3,   120,     5,    -1,     7,    -1,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    -1,    57,    58,    -1,
      60,    61,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,     3,
     120,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    -1,    60,    61,    -1,    63,
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
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
     116,   117,    10,    11,   120,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,   116,   117,    13,    14,   120,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   116,
     117,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      -1,    -1,    91,    -1,    52,    -1,    -1,    55,    97,    98,
      99,   100,    60,    61,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,
      -1,   120,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,   120,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    10,
      52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    52,    -1,    -1,    55,    97,    98,    99,   100,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,    94,    -1,    -1,    97,    98,    99,   100,
       5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,    -1,
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
      -1,    -1,    -1,    97,    98,    99,   100,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    10,    52,    -1,    13,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    64,    65,    66,    -1,
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
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      10,    52,    -1,    13,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    52,    -1,    -1,    55,    97,    98,    99,   100,
      60,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,   120,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    52,    -1,
      13,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    52,
      -1,    -1,    55,    97,    98,    99,   100,    60,    61,    -1,
      63,    64,    65,    66,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,
      -1,    31,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,   116,   117,    55,    -1,   120,    -1,    -1,
      -1,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    94,    55,    -1,    97,    98,    99,
     100,    61,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,   116,   117,    -1,    -1,
     120,    -1,    -1,    83,    -1,    85,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    -1,    -1,    -1,    -1,   116,   117,    -1,    -1,
     120,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,   119
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      63,    64,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    83,    85,    86,    87,    88,
      91,    97,    98,    99,   100,   116,   117,   120,   128,   129,
     130,   132,   134,   135,   137,   140,   144,   149,   151,   152,
     162,   164,   165,   166,   168,   172,   177,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   196,   198,   209,
     210,   213,   214,   215,   222,   224,   227,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   253,   258,   259,   260,   262,   267,   268,     6,
      10,    84,    86,    88,    89,    90,    93,   103,   104,   105,
     106,   107,   108,   109,   110,   118,   119,   189,   192,   211,
     232,   233,   234,   235,    94,   189,   236,    11,   144,   190,
     195,    37,    38,    39,    40,   148,   202,   204,   205,   206,
       5,   165,     5,     5,     5,   189,   206,     3,   189,   165,
      83,   173,     3,   131,   206,   131,   202,   203,     5,    83,
     111,   153,   155,   216,   217,   218,   220,   221,   222,   202,
     131,   145,   206,   206,    83,   165,    83,   252,    83,   202,
      83,    80,    81,   189,   261,   155,   153,   154,    10,    94,
     163,   251,   265,   163,   251,   265,   189,     0,   130,   165,
     206,     5,     3,   135,   136,     3,     4,    93,   118,   119,
      41,    97,   155,   212,   250,   206,    92,    96,   114,   102,
     112,   113,   111,   103,   108,   231,   232,   233,    86,   234,
      88,   235,    95,    91,   251,   265,     7,    44,   115,   191,
     193,   196,   258,    66,   190,     6,     6,   189,    94,     8,
       9,   266,    11,    94,    11,     5,   199,   204,    41,    42,
     207,   189,   182,    83,   190,   188,    83,    10,    83,     3,
      32,   169,   171,    83,    41,   207,   208,    83,    83,   206,
     216,    94,   191,    44,    92,    93,   219,     7,   193,   194,
     197,   220,    83,     5,   200,   155,    83,    94,    83,     5,
      83,   189,   236,   261,    67,     5,   257,    11,   144,    83,
     111,   263,   264,    10,   163,   163,   101,   153,   189,     3,
     189,   198,   198,   198,    97,   212,   199,    56,   211,   258,
       3,   163,   155,   153,   236,   237,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   155,    10,   163,
     189,    83,   155,   254,   255,   256,   267,   257,   261,     8,
       8,   189,   190,     6,   155,   156,   157,     3,   163,   155,
     155,     6,   189,     4,     6,   188,     4,    94,    23,   179,
     180,    10,   170,   169,   115,   201,   207,   201,    94,   139,
     155,   191,    83,   141,   218,     8,   189,     7,   193,   136,
       6,   155,   160,   161,    31,   146,   147,    83,   201,   141,
     156,   158,   159,     5,    59,   261,     6,   189,    11,    83,
      94,   263,    83,     6,   199,     3,     3,   163,   199,   201,
     201,   201,    83,   228,   257,    94,   190,     8,     4,     8,
       8,     4,    83,   229,     4,     6,    83,    83,   165,     3,
     190,   165,     6,   189,    83,    13,   223,   189,    11,   179,
      83,   135,   175,   176,   173,    52,    53,    83,   142,   143,
      43,   138,   139,   141,     3,    10,   133,   201,     3,     4,
       8,     3,   229,   230,     4,     6,    83,    83,     3,   201,
      10,    10,     4,     6,   159,     6,   201,   165,     3,     5,
       5,     5,   228,   237,    11,     7,   193,   255,   195,    94,
     156,   201,   201,    15,     6,   165,     6,    94,   190,    24,
     178,    25,   119,     4,   174,   165,   155,     8,   139,     4,
       8,    53,   154,   139,   133,    11,   129,   200,    83,   160,
      83,   155,   225,   226,   167,   156,   163,     6,    24,   150,
     156,   156,   156,     8,   190,   200,   165,   165,   165,   223,
       6,   189,    94,   165,    83,   175,    11,    83,   142,     8,
     133,    11,   147,     3,    83,    11,   225,    79,   163,   190,
       3,     4,     6,     6,     3,   190,   165,   144,     6,     3,
     156,     6,     6,   165
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   131,   132,   132,   133,
     133,   133,   134,   135,   136,   137,   138,   138,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   149,   150,   150,   151,   151,
     152,   153,   153,   154,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   167,   166,   168,   170,   169,   171,   171,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     178,   178,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   185,   185,
     186,   186,   187,   187,   187,   187,   188,   188,   189,   189,
     190,   190,   190,   190,   191,   191,   192,   192,   192,   192,
     192,   193,   193,   193,   194,   194,   194,   195,   195,   196,
     196,   196,   197,   197,   198,   198,   198,   199,   199,   200,
     200,   201,   201,   201,   201,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   210,   211,   211,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   215,
     215,   215,   215,   215,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   219,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   228,   229,
     230,   230,   231,   231,   232,   232,   232,   232,   233,   233,
     234,   234,   235,   235,   235,   236,   236,   237,   237,   237,
     238,   238,   239,   239,   240,   240,   241,   241,   242,   242,
     243,   243,   244,   244,   245,   245,   246,   246,   247,   247,
     248,   248,   249,   249,   250,   250,   250,   250,   250,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     252,   252,   253,   253,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   260,   260,   260,   260,   260,   260,
     261,   261,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   267,   267,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     7,     6,     3,
       2,     1,     5,     1,     1,     5,     2,     0,     0,     2,
       5,     1,     3,     2,     3,     1,     3,     1,     2,     4,
       2,     2,     0,     1,     5,     5,     0,     2,     1,     1,
       7,     2,     1,     1,     1,     4,     2,     1,     3,     1,
       3,     1,     0,     2,     1,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     2,     0,     4,     1,     2,
       3,     1,     0,     1,     0,     1,     3,     1,     3,     7,
       2,     0,     5,     1,     2,     7,     5,     1,     1,     5,
       5,     6,     7,     8,    10,     5,     7,     2,     5,     7,
       1,     1,     3,     2,     3,     2,     2,     1,     1,     3,
       1,     3,     3,     3,     3,     0,     1,     1,     1,     1,
       1,     3,     4,     5,     2,     3,     2,     3,     5,     5,
       4,     4,     1,     1,     1,     4,     5,     3,     2,     3,
       2,     3,     4,     3,     0,     1,     1,     0,     1,     1,
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
       2,     2,     2,     3,     2,     2,     2,     3,     3,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     3,     1,     2,     2,     3,     2,     1,
       1,     2,     3,     2,     3,     1,     2,     1,     2,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     5,     3,     2,
       2
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
  case 2: /* ast: section_list  */
#line 202 "src/gwion.y"
                  { arg->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2556 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 203 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2562 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 206 "src/gwion.y"
            { YYLIST_INI(Section, (yyval.ast), (yyvsp[0].section)); }
#line 2568 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 207 "src/gwion.y"
                         { YYLIST_END(Section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2574 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 210 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2580 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 211 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def));  }
#line 2586 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 212 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2592 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 213 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2598 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 214 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2604 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 215 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2610 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2616 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2622 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2628 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2634 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 222 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2640 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits class_body  */
#line 225 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), (yyvsp[-4].sym), (yyvsp[-2].type_decl), (yyvsp[0].ast), (yylsp[-4]));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2651 "src/parser.c"
    break;

  case 18: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 232 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), (yyvsp[-3].sym), NULL, (yyvsp[0].ast), (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].id_list);
    }
#line 2663 "src/parser.c"
    break;

  case 19: /* class_body: "{" section_list "}"  */
#line 240 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2669 "src/parser.c"
    break;

  case 20: /* class_body: "{" "}"  */
#line 240 "src/gwion.y"
                                                          { (yyval.ast) = NULL; }
#line 2675 "src/parser.c"
    break;

  case 21: /* class_body: ";"  */
#line 240 "src/gwion.y"
                                                                               { (yyval.ast) = NULL; }
#line 2681 "src/parser.c"
    break;

  case 22: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 243 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2690 "src/parser.c"
    break;

  case 23: /* number: INTEGER  */
#line 248 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2701 "src/parser.c"
    break;

  case 24: /* decimal: number  */
#line 255 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2712 "src/parser.c"
    break;

  case 25: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 263 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2720 "src/parser.c"
    break;

  case 26: /* class_ext: "extends" type_decl_exp  */
#line 266 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2726 "src/parser.c"
    break;

  case 27: /* class_ext: %empty  */
#line 266 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2732 "src/parser.c"
    break;

  case 28: /* traits: %empty  */
#line 267 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2738 "src/parser.c"
    break;

  case 29: /* traits: ":" id_list  */
#line 267 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2744 "src/parser.c"
    break;

  case 30: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 269 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2752 "src/parser.c"
    break;

  case 31: /* id_list: "<identifier>"  */
#line 274 "src/gwion.y"
                 { YYLIST_INI(Symbol, (yyval.id_list), (yyvsp[0].sym)); }
#line 2758 "src/parser.c"
    break;

  case 32: /* id_list: id_list "," "<identifier>"  */
#line 275 "src/gwion.y"
                 { YYLIST_END(Symbol, (yyval.id_list), (yyvsp[-2].id_list), (yyvsp[0].sym)); }
#line 2764 "src/parser.c"
    break;

  case 33: /* specialized: "<identifier>" traits  */
#line 277 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].id_list),
      };
  }
#line 2775 "src/parser.c"
    break;

  case 34: /* specialized: "const" type_decl_empty "<identifier>"  */
#line 283 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[-1])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2786 "src/parser.c"
    break;

  case 35: /* specialized_list: specialized  */
#line 290 "src/gwion.y"
                              { YYLIST_INI(Specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2792 "src/parser.c"
    break;

  case 36: /* specialized_list: specialized_list "," specialized  */
#line 291 "src/gwion.y"
                                     { YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2798 "src/parser.c"
    break;

  case 37: /* stmt_list: stmt  */
#line 293 "src/gwion.y"
                   { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2804 "src/parser.c"
    break;

  case 38: /* stmt_list: stmt_list stmt  */
#line 294 "src/gwion.y"
                   { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2810 "src/parser.c"
    break;

  case 39: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 296 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2817 "src/parser.c"
    break;

  case 40: /* _func_effects: "perform" "<identifier>"  */
#line 299 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2823 "src/parser.c"
    break;

  case 41: /* _func_effects: _func_effects "<identifier>"  */
#line 299 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2829 "src/parser.c"
    break;

  case 42: /* func_effects: %empty  */
#line 300 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2835 "src/parser.c"
    break;

  case 43: /* func_effects: _func_effects  */
#line 300 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2841 "src/parser.c"
    break;

  case 44: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 302 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2848 "src/parser.c"
    break;

  case 45: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 305 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2858 "src/parser.c"
    break;

  case 46: /* typedef_when: %empty  */
#line 311 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2864 "src/parser.c"
    break;

  case 47: /* typedef_when: "when" binary_exp  */
#line 311 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 2870 "src/parser.c"
    break;

  case 48: /* type_def_type: "typedef"  */
#line 312 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 2876 "src/parser.c"
    break;

  case 49: /* type_def_type: "distinct"  */
#line 312 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 2882 "src/parser.c"
    break;

  case 50: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 313 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 2895 "src/parser.c"
    break;

  case 51: /* type_decl_array: type_decl array  */
#line 322 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2901 "src/parser.c"
    break;

  case 53: /* type_decl_exp: type_decl_array  */
#line 324 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2909 "src/parser.c"
    break;

  case 54: /* type_decl_empty: type_decl_array  */
#line 328 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2917 "src/parser.c"
    break;

  case 55: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 333 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 2926 "src/parser.c"
    break;

  case 56: /* arg: type_decl_empty arg_decl  */
#line 337 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
    (yyval.default_args).flag = fbflag_none;
  }
#line 2935 "src/parser.c"
    break;

  case 57: /* arg_list: arg  */
#line 342 "src/gwion.y"
         {
       YYLIST_INI(Arg, (yyval.default_args).args, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2944 "src/parser.c"
    break;

  case 58: /* arg_list: arg_list "," arg  */
#line 346 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2956 "src/parser.c"
    break;

  case 59: /* locale_arg: arg  */
#line 355 "src/gwion.y"
        {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 2);
       Arg self = {
         .var = MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}),
         .exp = NULL
       };
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
       mp_vector_set((yyval.default_args).args, Arg, 1, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 2973 "src/parser.c"
    break;

  case 60: /* locale_arg: locale_arg "," arg  */
#line 367 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 2985 "src/parser.c"
    break;

  case 62: /* locale_list: %empty  */
#line 376 "src/gwion.y"
    {
       Arg self = {
          MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}
          ),
         .exp = NULL
       };
       YYLIST_INI(Arg, (yyval.default_args).args, self);
    }
#line 3000 "src/parser.c"
    break;

  case 63: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 387 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) }; }
#line 3006 "src/parser.c"
    break;

  case 64: /* fptr_list: fptr_arg  */
#line 389 "src/gwion.y"
                         { YYLIST_INI(Arg, (yyval.arg_list), (yyvsp[0].arg)); }
#line 3012 "src/parser.c"
    break;

  case 65: /* fptr_list: fptr_list "," fptr_arg  */
#line 390 "src/gwion.y"
                         { YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-2].arg_list), (yyvsp[0].arg)); }
#line 3018 "src/parser.c"
    break;

  case 66: /* code_stmt: "{" "}"  */
#line 393 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3025 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" stmt_list "}"  */
#line 395 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3032 "src/parser.c"
    break;

  case 68: /* code_list: "{" "}"  */
#line 399 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), Stmt, 0); }
#line 3038 "src/parser.c"
    break;

  case 69: /* code_list: "{" stmt_list "}"  */
#line 400 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3044 "src/parser.c"
    break;

  case 70: /* stmt_pp: "<comment>"  */
#line 403 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyloc), .data = (yyvsp[0].sval)); }
#line 3050 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#include"  */
#line 404 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3056 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#define"  */
#line 405 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3062 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#pragma"  */
#line 406 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3068 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#undef"  */
#line 407 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3074 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#ifdef"  */
#line 408 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3080 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifndef"  */
#line 409 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3086 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#else"  */
#line 410 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3092 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#if"  */
#line 411 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3098 "src/parser.c"
    break;

  case 79: /* stmt_pp: "\n"  */
#line 412 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3104 "src/parser.c"
    break;

  case 80: /* stmt_pp: "import"  */
#line 413 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyloc), .data = (yyvsp[0].sval)); }
#line 3110 "src/parser.c"
    break;

  case 81: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 415 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3116 "src/parser.c"
    break;

  case 93: /* $@1: %empty  */
#line 432 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3122 "src/parser.c"
    break;

  case 94: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 432 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-2])),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3135 "src/parser.c"
    break;

  case 95: /* retry_stmt: "retry" ";"  */
#line 441 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1]));}
#line 3144 "src/parser.c"
    break;

  case 96: /* $@2: %empty  */
#line 446 "src/gwion.y"
                  { arg->handling = true; }
#line 3150 "src/parser.c"
    break;

  case 97: /* handler: "handle" $@2 opt_id stmt  */
#line 446 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; arg->handling = false; }
#line 3156 "src/parser.c"
    break;

  case 98: /* handler_list: handler  */
#line 447 "src/gwion.y"
                      {
    YYLIST_INI(Handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3165 "src/parser.c"
    break;

  case 99: /* handler_list: handler_list handler  */
#line 451 "src/gwion.y"
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
#line 3186 "src/parser.c"
    break;

  case 100: /* try_stmt: "try" stmt handler_list  */
#line 467 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3193 "src/parser.c"
    break;

  case 102: /* opt_id: %empty  */
#line 470 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3199 "src/parser.c"
    break;

  case 104: /* opt_comma: %empty  */
#line 471 "src/gwion.y"
                 {}
#line 3205 "src/parser.c"
    break;

  case 105: /* enum_value: "<identifier>"  */
#line 474 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3211 "src/parser.c"
    break;

  case 106: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 475 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[0].sym), (yylsp[0])), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3222 "src/parser.c"
    break;

  case 107: /* enum_list: enum_value  */
#line 482 "src/gwion.y"
                            { YYLIST_INI(EnumValue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3228 "src/parser.c"
    break;

  case 108: /* enum_list: enum_list "," enum_value  */
#line 483 "src/gwion.y"
                            { YYLIST_END(EnumValue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3234 "src/parser.c"
    break;

  case 109: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 486 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3243 "src/parser.c"
    break;

  case 110: /* when_exp: "when" exp  */
#line 491 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3249 "src/parser.c"
    break;

  case 111: /* when_exp: %empty  */
#line 491 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3255 "src/parser.c"
    break;

  case 112: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 494 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3268 "src/parser.c"
    break;

  case 113: /* match_list: match_case_stmt  */
#line 503 "src/gwion.y"
                            { YYLIST_INI(Stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3274 "src/parser.c"
    break;

  case 114: /* match_list: match_list match_case_stmt  */
#line 504 "src/gwion.y"
                             { YYLIST_END(Stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3280 "src/parser.c"
    break;

  case 115: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 506 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3293 "src/parser.c"
    break;

  case 116: /* match_stmt: "match" exp "{" match_list "}"  */
#line 515 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3305 "src/parser.c"
    break;

  case 117: /* flow: "while"  */
#line 524 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3311 "src/parser.c"
    break;

  case 118: /* flow: "until"  */
#line 525 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3317 "src/parser.c"
    break;

  case 119: /* loop_stmt: flow "(" exp ")" stmt  */
#line 530 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3328 "src/parser.c"
    break;

  case 120: /* loop_stmt: "do" stmt flow exp ";"  */
#line 537 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3340 "src/parser.c"
    break;

  case 121: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 545 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3352 "src/parser.c"
    break;

  case 122: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 553 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3365 "src/parser.c"
    break;

  case 123: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 562 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-7]),
      .stmt_each = {
        .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
// what to do with opt_var?
// list rem?
  }
#line 3379 "src/parser.c"
    break;

  case 124: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 572 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-9]),
      .stmt_each = {
        .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-7])),
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
    (yyval.stmt).d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_each.idx->var = (Var_Decl){.tag=MK_TAG((yyvsp[-7].sym), (yylsp[-7]))};
    (yyval.stmt).d.stmt_each.idx->is_var = (yyvsp[-3].yybool);
// what to do with opt_var?
// list rem?
  }
#line 3396 "src/parser.c"
    break;

  case 125: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 585 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3407 "src/parser.c"
    break;

  case 126: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 592 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
    (yyval.stmt).d.stmt_loop.idx->var = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3420 "src/parser.c"
    break;

  case 127: /* defer_stmt: "defer" stmt  */
#line 601 "src/gwion.y"
                         {
    const loc_t loc = defer_stmt(&(yyvsp[0].stmt));
    if(loc.first.line) {
      // defer could maybe return the position
      parser_error(&loc, arg, "return statement in defer", 0x0209);
      YYERROR;
    }
    (yyval.stmt) = MK_STMT(ae_stmt_defer, (yylsp[-1]),
    .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) });
}
#line 3435 "src/parser.c"
    break;

  case 128: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 614 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3446 "src/parser.c"
    break;

  case 129: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 621 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3458 "src/parser.c"
    break;

  case 130: /* breaks: "break"  */
#line 629 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3464 "src/parser.c"
    break;

  case 131: /* breaks: "continue"  */
#line 629 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3470 "src/parser.c"
    break;

  case 132: /* jump_stmt: "return" exp ";"  */
#line 631 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3476 "src/parser.c"
    break;

  case 133: /* jump_stmt: "return" ";"  */
#line 632 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3482 "src/parser.c"
    break;

  case 134: /* jump_stmt: breaks decimal ";"  */
#line 633 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3488 "src/parser.c"
    break;

  case 135: /* jump_stmt: breaks ";"  */
#line 634 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3494 "src/parser.c"
    break;

  case 136: /* exp_stmt: exp ";"  */
#line 637 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp)); }
#line 3500 "src/parser.c"
    break;

  case 137: /* exp_stmt: ";"  */
#line 638 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yylsp[0])); }
#line 3506 "src/parser.c"
    break;

  case 138: /* exp: binary_exp  */
#line 641 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3512 "src/parser.c"
    break;

  case 139: /* exp: binary_exp "," exp  */
#line 643 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3524 "src/parser.c"
    break;

  case 141: /* binary_exp: binary_exp "@" decl_exp  */
#line 653 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3530 "src/parser.c"
    break;

  case 142: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 654 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3536 "src/parser.c"
    break;

  case 143: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 655 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3542 "src/parser.c"
    break;

  case 144: /* call_template: ":[" tmplarg_list "]"  */
#line 657 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3548 "src/parser.c"
    break;

  case 145: /* call_template: %empty  */
#line 657 "src/gwion.y"
                                                    { (yyval.tmplarg_list) = NULL; }
#line 3554 "src/parser.c"
    break;

  case 151: /* array_exp: "[" exp "]"  */
#line 662 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3560 "src/parser.c"
    break;

  case 152: /* array_exp: "[" exp "]" array_exp  */
#line 663 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3568 "src/parser.c"
    break;

  case 153: /* array_exp: "[" exp "]" "[" "]"  */
#line 666 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3574 "src/parser.c"
    break;

  case 154: /* array_empty: "[" "]"  */
#line 670 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3580 "src/parser.c"
    break;

  case 155: /* array_empty: array_empty "[" "]"  */
#line 671 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3586 "src/parser.c"
    break;

  case 156: /* array_empty: array_empty array_exp  */
#line 672 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3592 "src/parser.c"
    break;

  case 157: /* dict_list: binary_exp ":" binary_exp  */
#line 676 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3598 "src/parser.c"
    break;

  case 158: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 677 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3604 "src/parser.c"
    break;

  case 159: /* range: "[" exp ":" exp "]"  */
#line 680 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3610 "src/parser.c"
    break;

  case 160: /* range: "[" exp ":" "]"  */
#line 681 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3616 "src/parser.c"
    break;

  case 161: /* range: "[" ":" exp "]"  */
#line 682 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3622 "src/parser.c"
    break;

  case 165: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 688 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3628 "src/parser.c"
    break;

  case 166: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 689 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3638 "src/parser.c"
    break;

  case 167: /* func_args: "(" arg_list ")"  */
#line 695 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3644 "src/parser.c"
    break;

  case 168: /* func_args: "(" ")"  */
#line 695 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3650 "src/parser.c"
    break;

  case 169: /* fptr_args: "(" fptr_list ")"  */
#line 696 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3656 "src/parser.c"
    break;

  case 170: /* fptr_args: "(" ")"  */
#line 696 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3662 "src/parser.c"
    break;

  case 171: /* decl_template: ":[" specialized_list "]"  */
#line 699 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3668 "src/parser.c"
    break;

  case 172: /* decl_template: ":[" specialized_list "..." "]"  */
#line 700 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_END(Specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3677 "src/parser.c"
    break;

  case 173: /* decl_template: ":[" "..." "]"  */
#line 704 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  YYLIST_INI(Specialized, (yyval.specialized_list), spec);
}
#line 3686 "src/parser.c"
    break;

  case 174: /* decl_template: %empty  */
#line 708 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3692 "src/parser.c"
    break;

  case 175: /* global: "global"  */
#line 710 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3698 "src/parser.c"
    break;

  case 177: /* opt_global: %empty  */
#line 711 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3704 "src/parser.c"
    break;

  case 178: /* storage_flag: "static"  */
#line 713 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3710 "src/parser.c"
    break;

  case 180: /* access_flag: "private"  */
#line 715 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3716 "src/parser.c"
    break;

  case 181: /* access_flag: "protect"  */
#line 716 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3722 "src/parser.c"
    break;

  case 182: /* flag: access_flag  */
#line 719 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3728 "src/parser.c"
    break;

  case 183: /* flag: storage_flag  */
#line 720 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3734 "src/parser.c"
    break;

  case 184: /* flag: access_flag storage_flag  */
#line 721 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3740 "src/parser.c"
    break;

  case 185: /* flag: %empty  */
#line 722 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3746 "src/parser.c"
    break;

  case 186: /* final: "final"  */
#line 725 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3752 "src/parser.c"
    break;

  case 187: /* final: %empty  */
#line 725 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3758 "src/parser.c"
    break;

  case 188: /* modifier: "abstract" final  */
#line 727 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3764 "src/parser.c"
    break;

  case 190: /* func_def_base: "fun" func_base func_args code_list  */
#line 730 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3774 "src/parser.c"
    break;

  case 191: /* func_def_base: "fun" func_base func_args ";"  */
#line 735 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3786 "src/parser.c"
    break;

  case 192: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 742 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3797 "src/parser.c"
    break;

  case 193: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 748 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3808 "src/parser.c"
    break;

  case 194: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 757 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3820 "src/parser.c"
    break;

  case 200: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 768 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 3834 "src/parser.c"
    break;

  case 201: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 778 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3847 "src/parser.c"
    break;

  case 202: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 787 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 3861 "src/parser.c"
    break;

  case 203: /* op_base: type_decl_empty OPID_A func_args  */
#line 797 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 3870 "src/parser.c"
    break;

  case 204: /* operator: "operator"  */
#line 802 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3876 "src/parser.c"
    break;

  case 205: /* operator: "operator" global  */
#line 802 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 3882 "src/parser.c"
    break;

  case 206: /* op_def: operator op_base code_list  */
#line 805 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 3888 "src/parser.c"
    break;

  case 207: /* op_def: operator op_base ";"  */
#line 807 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 3894 "src/parser.c"
    break;

  case 208: /* op_def: operator "abstract" op_base ";"  */
#line 809 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 3900 "src/parser.c"
    break;

  case 212: /* func_def: operator "new" func_args code_list  */
#line 813 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 3910 "src/parser.c"
    break;

  case 213: /* func_def: operator "new" func_args ";"  */
#line 819 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 3921 "src/parser.c"
    break;

  case 214: /* func_def: operator "abstract" "new" func_args ";"  */
#line 826 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 3932 "src/parser.c"
    break;

  case 215: /* type_decl_base: "<identifier>"  */
#line 834 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3938 "src/parser.c"
    break;

  case 216: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 835 "src/gwion.y"
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
#line 3954 "src/parser.c"
    break;

  case 217: /* type_decl_tmpl: type_decl_base call_template  */
#line 849 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 3960 "src/parser.c"
    break;

  case 218: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 850 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 3966 "src/parser.c"
    break;

  case 220: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 855 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3972 "src/parser.c"
    break;

  case 221: /* option: "?"  */
#line 858 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 3978 "src/parser.c"
    break;

  case 222: /* option: OPTIONS  */
#line 858 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 3984 "src/parser.c"
    break;

  case 223: /* option: %empty  */
#line 858 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 3990 "src/parser.c"
    break;

  case 224: /* type_decl_opt: type_decl_noflag option  */
#line 859 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 3996 "src/parser.c"
    break;

  case 226: /* type_decl: type_decl_flag type_decl_opt  */
#line 860 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4002 "src/parser.c"
    break;

  case 227: /* type_decl_flag: "late"  */
#line 863 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4008 "src/parser.c"
    break;

  case 228: /* type_decl_flag: "const"  */
#line 864 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4014 "src/parser.c"
    break;

  case 229: /* opt_var: "var"  */
#line 866 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4020 "src/parser.c"
    break;

  case 230: /* opt_var: %empty  */
#line 866 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4026 "src/parser.c"
    break;

  case 231: /* type_decl_flag2: "var"  */
#line 868 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4032 "src/parser.c"
    break;

  case 233: /* variable: "<identifier>" ";"  */
#line 871 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = (Variable) { .td = td, .vd = { .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))}};
}
#line 4041 "src/parser.c"
    break;

  case 234: /* variable: type_decl_empty "<identifier>" ";"  */
#line 875 "src/gwion.y"
                         { (yyval.variable) = (Variable) { .td = (yyvsp[-2].type_decl), .vd = { .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))}};}
#line 4047 "src/parser.c"
    break;

  case 235: /* variable_list: variable  */
#line 877 "src/gwion.y"
                         { YYLIST_INI(Variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4053 "src/parser.c"
    break;

  case 236: /* variable_list: variable_list variable  */
#line 878 "src/gwion.y"
                         { YYLIST_END(Variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4059 "src/parser.c"
    break;

  case 237: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 881 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4071 "src/parser.c"
    break;

  case 238: /* var_decl: "<identifier>"  */
#line 890 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4077 "src/parser.c"
    break;

  case 239: /* arg_decl: "<identifier>"  */
#line 892 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4083 "src/parser.c"
    break;

  case 241: /* fptr_arg_decl: %empty  */
#line 893 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4089 "src/parser.c"
    break;

  case 255: /* opt_exp: exp  */
#line 901 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4095 "src/parser.c"
    break;

  case 256: /* opt_exp: %empty  */
#line 901 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4101 "src/parser.c"
    break;

  case 258: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 904 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4107 "src/parser.c"
    break;

  case 259: /* con_exp: log_or_exp "?:" con_exp  */
#line 906 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4113 "src/parser.c"
    break;

  case 261: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 908 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4119 "src/parser.c"
    break;

  case 263: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 909 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4125 "src/parser.c"
    break;

  case 265: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 910 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4131 "src/parser.c"
    break;

  case 267: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 911 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4137 "src/parser.c"
    break;

  case 269: /* and_exp: and_exp "&" eq_exp  */
#line 912 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4143 "src/parser.c"
    break;

  case 271: /* eq_exp: eq_exp eq_op rel_exp  */
#line 913 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4149 "src/parser.c"
    break;

  case 273: /* rel_exp: rel_exp rel_op shift_exp  */
#line 914 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4155 "src/parser.c"
    break;

  case 275: /* shift_exp: shift_exp shift_op add_exp  */
#line 915 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4161 "src/parser.c"
    break;

  case 277: /* add_exp: add_exp add_op mul_exp  */
#line 916 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4167 "src/parser.c"
    break;

  case 279: /* mul_exp: mul_exp mul_op dur_exp  */
#line 917 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4173 "src/parser.c"
    break;

  case 281: /* dur_exp: dur_exp "::" cast_exp  */
#line 918 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4179 "src/parser.c"
    break;

  case 283: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 921 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4185 "src/parser.c"
    break;

  case 290: /* unary_exp: unary_op unary_exp  */
#line 928 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4191 "src/parser.c"
    break;

  case 291: /* unary_exp: "spork" unary_exp  */
#line 929 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4197 "src/parser.c"
    break;

  case 292: /* unary_exp: "fork" unary_exp  */
#line 930 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4203 "src/parser.c"
    break;

  case 293: /* unary_exp: "new" type_decl_exp call_paren  */
#line 931 "src/gwion.y"
                                   {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4211 "src/parser.c"
    break;

  case 294: /* unary_exp: "new" type_decl_exp  */
#line 934 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4217 "src/parser.c"
    break;

  case 295: /* unary_exp: "spork" code_list  */
#line 935 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4223 "src/parser.c"
    break;

  case 296: /* unary_exp: "fork" code_list  */
#line 936 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4229 "src/parser.c"
    break;

  case 297: /* unary_exp: "spork" captures code_list  */
#line 937 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4235 "src/parser.c"
    break;

  case 298: /* unary_exp: "fork" captures code_list  */
#line 938 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4241 "src/parser.c"
    break;

  case 299: /* unary_exp: "$" type_decl_empty  */
#line 939 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4247 "src/parser.c"
    break;

  case 300: /* lambda_list: "<identifier>"  */
#line 942 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_INI(Arg, (yyval.arg_list), a); }
#line 4255 "src/parser.c"
    break;

  case 301: /* lambda_list: lambda_list "<identifier>"  */
#line 945 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))})};
  YYLIST_END(Arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4264 "src/parser.c"
    break;

  case 302: /* lambda_arg: "\\" lambda_list  */
#line 950 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4270 "src/parser.c"
    break;

  case 303: /* lambda_arg: "\\"  */
#line 950 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4276 "src/parser.c"
    break;

  case 305: /* tmplarg: type_decl_empty  */
#line 953 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4284 "src/parser.c"
    break;

  case 306: /* tmplarg: tmplarg_exp  */
#line 956 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4292 "src/parser.c"
    break;

  case 307: /* tmplarg_list: tmplarg  */
#line 960 "src/gwion.y"
                           { YYLIST_INI(TmplArg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4298 "src/parser.c"
    break;

  case 308: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 961 "src/gwion.y"
                           { YYLIST_END(TmplArg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4304 "src/parser.c"
    break;

  case 309: /* call_paren: "(" exp ")"  */
#line 964 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4310 "src/parser.c"
    break;

  case 310: /* call_paren: "(" ")"  */
#line 965 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4316 "src/parser.c"
    break;

  case 313: /* dot_exp: post_exp "." "<identifier>"  */
#line 969 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expressions"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4329 "src/parser.c"
    break;

  case 315: /* post_exp: post_exp array_exp  */
#line 980 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4335 "src/parser.c"
    break;

  case 316: /* post_exp: post_exp range  */
#line 982 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4341 "src/parser.c"
    break;

  case 317: /* post_exp: post_exp call_template call_paren  */
#line 984 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4348 "src/parser.c"
    break;

  case 318: /* post_exp: post_exp post_op  */
#line 987 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4354 "src/parser.c"
    break;

  case 319: /* post_exp: dot_exp  */
#line 988 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4360 "src/parser.c"
    break;

  case 320: /* interp_exp: "<interp string end>"  */
#line 992 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4366 "src/parser.c"
    break;

  case 321: /* interp_exp: "<interp string lit>" interp_exp  */
#line 993 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4372 "src/parser.c"
    break;

  case 322: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 994 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4378 "src/parser.c"
    break;

  case 323: /* interp: "${" interp_exp  */
#line 996 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4384 "src/parser.c"
    break;

  case 324: /* interp: interp "${" interp_exp  */
#line 997 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.string.data) + strlen((yyvsp[0].exp)->d.prim.d.string.data) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.string.data, (yyvsp[0].exp)->d.prim.d.string.data);
    (yyvsp[-2].exp)->d.prim.d.string.data = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->loc.last = (yyvsp[0].exp)->loc.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 4399 "src/parser.c"
    break;

  case 325: /* capture: "<identifier>"  */
#line 1008 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4405 "src/parser.c"
    break;

  case 326: /* capture: "&" "<identifier>"  */
#line 1008 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4411 "src/parser.c"
    break;

  case 327: /* capture_list: capture  */
#line 1010 "src/gwion.y"
                       { YYLIST_INI(Capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4417 "src/parser.c"
    break;

  case 328: /* capture_list: capture_list capture  */
#line 1011 "src/gwion.y"
                       { YYLIST_END(Capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4423 "src/parser.c"
    break;

  case 329: /* captures: ":" capture_list ":"  */
#line 1012 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4429 "src/parser.c"
    break;

  case 330: /* captures: %empty  */
#line 1012 "src/gwion.y"
                                               { (yyval.captures) = NULL; }
#line 4435 "src/parser.c"
    break;

  case 333: /* basic_exp: number  */
#line 1016 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4444 "src/parser.c"
    break;

  case 334: /* basic_exp: "<float>"  */
#line 1020 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4450 "src/parser.c"
    break;

  case 335: /* basic_exp: "<litteral string>"  */
#line 1021 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4456 "src/parser.c"
    break;

  case 336: /* basic_exp: "<litteral char>"  */
#line 1022 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4462 "src/parser.c"
    break;

  case 337: /* prim_exp: "<identifier>"  */
#line 1025 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4468 "src/parser.c"
    break;

  case 339: /* prim_exp: interp  */
#line 1027 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4474 "src/parser.c"
    break;

  case 340: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1028 "src/gwion.y"
                             { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4487 "src/parser.c"
    break;

  case 341: /* prim_exp: "{" dict_list "}"  */
#line 1036 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4493 "src/parser.c"
    break;

  case 342: /* prim_exp: range  */
#line 1037 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4499 "src/parser.c"
    break;

  case 343: /* prim_exp: "<<<" exp ">>>"  */
#line 1038 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4505 "src/parser.c"
    break;

  case 344: /* prim_exp: "(" exp ")"  */
#line 1039 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4511 "src/parser.c"
    break;

  case 345: /* prim_exp: "`foo`"  */
#line 1040 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4522 "src/parser.c"
    break;

  case 346: /* prim_exp: lambda_arg captures code_list  */
#line 1046 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4528 "src/parser.c"
    break;

  case 347: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1047 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4534 "src/parser.c"
    break;

  case 348: /* prim_exp: "(" op_op ")"  */
#line 1048 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4540 "src/parser.c"
    break;

  case 349: /* prim_exp: "perform" opt_id  */
#line 1049 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4546 "src/parser.c"
    break;

  case 350: /* prim_exp: "(" ")"  */
#line 1050 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4552 "src/parser.c"
    break;


#line 4556 "src/parser.c"

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

#line 1052 "src/gwion.y"

#undef scan
#undef insert_symbol

ANN static Symbol sig_name(const Scanner *scan, const pos_t pos) {
  char c[6 + 1 + num_digit(pos.line) + num_digit(pos.column) + 2];
  sprintf(c, "@sig_%u_%u", pos.line, pos.column);
  return insert_symbol(scan->st, c);
}


ANN static Symbol lambda_name(const Scanner *scan, const pos_t pos) {
  char c[6 + 1 + num_digit(pos.line) + num_digit(pos.column) + 2];
  sprintf(c, "lambda:%u:%u", pos.line, pos.column);
  return insert_symbol(scan->st, c);
}

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
loc_t _loc = { scan->old, scan->old};
scan->error = 0;
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
