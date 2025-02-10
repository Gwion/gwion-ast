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

#define LIST_INI(type, dest, src)              \
  dest = new_##type##list(mpool(arg), 1);      \
  type##list_set(dest, 0, (src));

#define LIST_END(type, dest, src, new )        \
    type##list_add(mpool(arg), &(src), (new)); \
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
  YYSYMBOL_USING = 61,                     /* "using"  */
  YYSYMBOL_IMPORT = 62,                    /* "import"  */
  YYSYMBOL_NAMED = 63,                     /* "="  */
  YYSYMBOL_INTEGER = 64,                   /* INTEGER  */
  YYSYMBOL_65_integer_ = 65,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 66,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 67,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 68,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 69,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 70,                /* INTERP_EXP  */
  YYSYMBOL_PP_INCLUDE = 71,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 72,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 73,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 74,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 75,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 76,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 77,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 78,                  /* "#if"  */
  YYSYMBOL_PP_NL = 79,                     /* "\n"  */
  YYSYMBOL_SPREAD = 80,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 81,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 82,                /* "<interp string end>"  */
  YYSYMBOL_83_operator_id_ = 83,           /* "@<operator id>"  */
  YYSYMBOL_ID = 84,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 85,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 86,                  /* "++"  */
  YYSYMBOL_MINUS = 87,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 88,                /* "--"  */
  YYSYMBOL_TIMES = 89,                     /* "*"  */
  YYSYMBOL_DIVIDE = 90,                    /* "/"  */
  YYSYMBOL_PERCENT = 91,                   /* "%"  */
  YYSYMBOL_DOLLAR = 92,                    /* "$"  */
  YYSYMBOL_QUESTION = 93,                  /* "?"  */
  YYSYMBOL_OPTIONS = 94,                   /* OPTIONS  */
  YYSYMBOL_COLON = 95,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 96,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 97,             /* "?:"  */
  YYSYMBOL_NEW = 98,                       /* "new"  */
  YYSYMBOL_SPORK = 99,                     /* "spork"  */
  YYSYMBOL_FORK = 100,                     /* "fork"  */
  YYSYMBOL_L_HACK = 101,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 102,                   /* ">>>"  */
  YYSYMBOL_AND = 103,                      /* "&&"  */
  YYSYMBOL_EQ = 104,                       /* "=="  */
  YYSYMBOL_GE = 105,                       /* ">="  */
  YYSYMBOL_GT = 106,                       /* ">"  */
  YYSYMBOL_LE = 107,                       /* "<="  */
  YYSYMBOL_LT = 108,                       /* "<"  */
  YYSYMBOL_NEQ = 109,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 110,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 111,              /* ">>"  */
  YYSYMBOL_S_AND = 112,                    /* "&"  */
  YYSYMBOL_S_OR = 113,                     /* "|"  */
  YYSYMBOL_S_XOR = 114,                    /* "^"  */
  YYSYMBOL_OR = 115,                       /* "||"  */
  YYSYMBOL_TMPL = 116,                     /* ":["  */
  YYSYMBOL_TILDA = 117,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 118,              /* "!"  */
  YYSYMBOL_AROBASE = 119,                  /* "@"  */
  YYSYMBOL_DYNOP = 120,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 121,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 122,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 123,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 124,                   /* UTIMES  */
  YYSYMBOL_SECTION_LIST = 125,             /* SECTION_LIST  */
  YYSYMBOL_STMT_LIST3 = 126,               /* STMT_LIST3  */
  YYSYMBOL_STMT_LIST2 = 127,               /* STMT_LIST2  */
  YYSYMBOL_STMT_LIST1 = 128,               /* STMT_LIST1  */
  YYSYMBOL_YYACCEPT = 129,                 /* $accept  */
  YYSYMBOL_ast = 130,                      /* ast  */
  YYSYMBOL_section_list = 131,             /* section_list  */
  YYSYMBOL_section = 132,                  /* section  */
  YYSYMBOL_class_flag = 133,               /* class_flag  */
  YYSYMBOL_class_def = 134,                /* class_def  */
  YYSYMBOL_class_body = 135,               /* class_body  */
  YYSYMBOL_trait_def = 136,                /* trait_def  */
  YYSYMBOL_number = 137,                   /* number  */
  YYSYMBOL_decimal = 138,                  /* decimal  */
  YYSYMBOL_prim_def = 139,                 /* prim_def  */
  YYSYMBOL_extends = 140,                  /* extends  */
  YYSYMBOL_traits = 141,                   /* traits  */
  YYSYMBOL_extend_def = 142,               /* extend_def  */
  YYSYMBOL_taglist = 143,                  /* taglist  */
  YYSYMBOL_specialized = 144,              /* specialized  */
  YYSYMBOL_specialized_list = 145,         /* specialized_list  */
  YYSYMBOL_stmt_list = 146,                /* stmt_list  */
  YYSYMBOL_fptr_base = 147,                /* fptr_base  */
  YYSYMBOL__func_effects = 148,            /* _func_effects  */
  YYSYMBOL_func_effects = 149,             /* func_effects  */
  YYSYMBOL_func_base = 150,                /* func_base  */
  YYSYMBOL_fptr_def = 151,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 152,             /* typedef_when  */
  YYSYMBOL_type_def_type = 153,            /* type_def_type  */
  YYSYMBOL_type_def = 154,                 /* type_def  */
  YYSYMBOL_type_decl_array = 155,          /* type_decl_array  */
  YYSYMBOL_arg = 156,                      /* arg  */
  YYSYMBOL_arg_list = 157,                 /* arg_list  */
  YYSYMBOL_locale_arg = 158,               /* locale_arg  */
  YYSYMBOL_locale_list = 159,              /* locale_list  */
  YYSYMBOL_code_stmt = 160,                /* code_stmt  */
  YYSYMBOL_code_list = 161,                /* code_list  */
  YYSYMBOL_stmt_pp = 162,                  /* stmt_pp  */
  YYSYMBOL_stmt = 163,                     /* stmt  */
  YYSYMBOL_spread_stmt = 164,              /* spread_stmt  */
  YYSYMBOL_165_1 = 165,                    /* $@1  */
  YYSYMBOL_using_stmt = 166,               /* using_stmt  */
  YYSYMBOL_import_item = 167,              /* import_item  */
  YYSYMBOL_import_list = 168,              /* import_list  */
  YYSYMBOL_import_stmt = 169,              /* import_stmt  */
  YYSYMBOL_retry_stmt = 170,               /* retry_stmt  */
  YYSYMBOL_handler = 171,                  /* handler  */
  YYSYMBOL_handler_list = 172,             /* handler_list  */
  YYSYMBOL_try_stmt = 173,                 /* try_stmt  */
  YYSYMBOL_opt_id = 174,                   /* opt_id  */
  YYSYMBOL_opt_comma = 175,                /* opt_comma  */
  YYSYMBOL_enum_value = 176,               /* enum_value  */
  YYSYMBOL_enum_list = 177,                /* enum_list  */
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
  YYSYMBOL_type_decl_flag2 = 223,          /* type_decl_flag2  */
  YYSYMBOL_variable = 224,                 /* variable  */
  YYSYMBOL_variable_list = 225,            /* variable_list  */
  YYSYMBOL_union_def = 226,                /* union_def  */
  YYSYMBOL_var_decl = 227,                 /* var_decl  */
  YYSYMBOL_arg_decl = 228,                 /* arg_decl  */
  YYSYMBOL_eq_op = 229,                    /* eq_op  */
  YYSYMBOL_rel_op = 230,                   /* rel_op  */
  YYSYMBOL_shift_op = 231,                 /* shift_op  */
  YYSYMBOL_add_op = 232,                   /* add_op  */
  YYSYMBOL_mul_op = 233,                   /* mul_op  */
  YYSYMBOL_opt_exp = 234,                  /* opt_exp  */
  YYSYMBOL_con_exp = 235,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 236,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 237,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 238,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 239,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 240,                  /* and_exp  */
  YYSYMBOL_eq_exp = 241,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 242,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 243,                /* shift_exp  */
  YYSYMBOL_add_exp = 244,                  /* add_exp  */
  YYSYMBOL_mul_exp = 245,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 246,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 247,                 /* cast_exp  */
  YYSYMBOL_unary_op = 248,                 /* unary_op  */
  YYSYMBOL_unary_exp = 249,                /* unary_exp  */
  YYSYMBOL_lambda_list = 250,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 251,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 252,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 253,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 254,             /* tmplarg_list  */
  YYSYMBOL_call_paren = 255,               /* call_paren  */
  YYSYMBOL_post_op = 256,                  /* post_op  */
  YYSYMBOL_dot_exp = 257,                  /* dot_exp  */
  YYSYMBOL_post_exp = 258,                 /* post_exp  */
  YYSYMBOL_interp_exp = 259,               /* interp_exp  */
  YYSYMBOL_interp = 260,                   /* interp  */
  YYSYMBOL_capture = 261,                  /* capture  */
  YYSYMBOL_capture_list = 262,             /* capture_list  */
  YYSYMBOL_captures = 263,                 /* captures  */
  YYSYMBOL_array_lit_ed = 264,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 265,                /* basic_exp  */
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
#define YYFINAL  233
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3264

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  360
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  649

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   383


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
     125,   126,   127,   128
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   206,   206,   207,   210,   211,   212,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   227,   229,   236,
     245,   246,   246,   246,   247,   253,   260,   267,   271,   271,
     272,   272,   274,   279,   280,   282,   288,   295,   296,   298,
     299,   300,   301,   304,   304,   305,   305,   307,   310,   316,
     316,   317,   317,   318,   327,   327,   330,   333,   337,   340,
     346,   358,   363,   363,   377,   379,   383,   384,   385,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   417,   417,   426,   429,   433,   438,   442,   447,
     455,   459,   464,   467,   473,   475,   476,   480,   484,   487,
     487,   488,   488,   491,   492,   496,   497,   498,   501,   506,
     506,   509,   518,   519,   521,   530,   539,   540,   544,   551,
     559,   567,   576,   585,   595,   602,   611,   618,   625,   634,
     634,   636,   637,   638,   639,   642,   643,   646,   647,   657,
     658,   659,   660,   661,   663,   663,   665,   665,   665,   665,
     665,   668,   669,   672,   676,   677,   678,   682,   683,   686,
     687,   688,   692,   692,   693,   694,   695,   701,   701,   704,
     705,   709,   713,   715,   716,   716,   718,   718,   720,   721,
     724,   725,   726,   727,   730,   730,   732,   732,   735,   739,
     744,   750,   758,   767,   767,   767,   767,   767,   769,   777,
     784,   792,   798,   798,   800,   802,   804,   807,   807,   807,
     808,   813,   818,   825,   826,   840,   841,   845,   846,   849,
     849,   849,   850,   851,   851,   854,   855,   857,   857,   860,
     864,   865,   866,   867,   870,   879,   881,   882,   886,   886,
     887,   887,   887,   887,   888,   888,   889,   889,   890,   890,
     890,   892,   892,   893,   894,   896,   898,   901,   901,   902,
     902,   903,   903,   904,   904,   905,   905,   906,   906,   907,
     907,   908,   908,   909,   909,   910,   910,   911,   911,   913,
     913,   916,   916,   916,   917,   917,   920,   921,   922,   923,
     924,   927,   928,   929,   930,   931,   932,   935,   938,   943,
     943,   945,   945,   946,   949,   953,   954,   957,   958,   960,
     960,   962,   965,   969,   970,   972,   974,   977,   979,   981,
     985,   986,   987,   989,   990,  1001,  1001,  1003,  1004,  1005,
    1005,  1006,  1006,  1009,  1013,  1014,  1015,  1018,  1019,  1020,
    1021,  1025,  1026,  1027,  1028,  1029,  1035,  1036,  1037,  1038,
    1039
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
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "using",
  "import", "=", "INTEGER", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "${", "INTERP_EXP", "#include", "#define", "#pragma",
  "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "}...",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "<identifier>", "+", "++", "-", "--", "*", "/", "%", "$", "?", "OPTIONS",
  ":", "::", "?:", "new", "spork", "fork", "<<<", ">>>", "&&", "==", ">=",
  ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^", "||", ":[", "~", "!",
  "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY", "UMINUS", "UTIMES",
  "SECTION_LIST", "STMT_LIST3", "STMT_LIST2", "STMT_LIST1", "$accept",
  "ast", "section_list", "section", "class_flag", "class_def",
  "class_body", "trait_def", "number", "decimal", "prim_def", "extends",
  "traits", "extend_def", "taglist", "specialized", "specialized_list",
  "stmt_list", "fptr_base", "_func_effects", "func_effects", "func_base",
  "fptr_def", "typedef_when", "type_def_type", "type_def",
  "type_decl_array", "arg", "arg_list", "locale_arg", "locale_list",
  "code_stmt", "code_list", "stmt_pp", "stmt", "spread_stmt", "$@1",
  "using_stmt", "import_item", "import_list", "import_stmt", "retry_stmt",
  "handler", "handler_list", "try_stmt", "opt_id", "opt_comma",
  "enum_value", "enum_list", "enum_def", "when_exp", "match_case_stmt",
  "match_list", "match_stmt", "flow", "loop_stmt", "defer_stmt",
  "selection_stmt", "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "dict_list", "range",
  "array", "decl_exp", "func_args", "decl_template", "global",
  "opt_global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_base", "type_decl_tmpl",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "variable", "variable_list",
  "union_def", "var_decl", "arg_decl", "eq_op", "rel_op", "shift_op",
  "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
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

#define YYPACT_NINF (-464)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-259)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1426,  -464,  1993,  2279,  1535,   301,  -464,    78,  -464,  1750,
    -464,    89,   123,   178,  2783,   301,  1849,  -464,  -464,  1750,
      88,   193,   301,   301,   171,   146,   171,   301,  -464,  -464,
     301,   301,  -464,   121,  1750,   152,    22,   157,  -464,   216,
     169,  -464,  -464,  -464,  -464,  2110,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,   184,  -464,  -464,  -464,  -464,
     146,   146,  2954,  2954,  2783,  -464,  -464,  -464,   257,   744,
    -464,  -464,  -464,  -464,  -464,   165,  -464,   625,  -464,   301,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,   261,  -464,  -464,  -464,    63,  -464,  -464,   266,    95,
    -464,  -464,  -464,  -464,   386,  -464,  -464,  -464,   301,  -464,
    -464,   240,   176,   149,   174,   187,   -35,   243,   163,   137,
     269,   222,   214,  3072,  -464,   237,  -464,  -464,   109,   287,
    -464,  -464,  -464,  2783,  -464,   336,   359,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
     367,  -464,   370,  -464,  -464,  -464,  -464,  2783,   289,   273,
    -464,  1200,    61,   114,  -464,  -464,  -464,  -464,   374,  -464,
    -464,   275,   284,  2783,    68,  2855,  1921,    -4,   375,   303,
    -464,   385,   357,  -464,  -464,  -464,   306,   293,   309,  -464,
     310,   301,  -464,    58,  -464,   279,   352,   259,  -464,   390,
      35,  -464,   315,   374,   146,   320,   312,  -464,  -464,   321,
     403,   325,  2783,   316,   407,    46,  2110,  -464,   347,  -464,
    2783,  -464,   413,  1644,  -464,     8,  -464,  -464,   410,  -464,
    -464,   410,   319,  -464,  -464,  -464,   338,  -464,  -464,   146,
    2783,  -464,  -464,   421,  -464,  2783,  2927,  2927,  2927,  2069,
     374,  1787,   135,   146,   146,  3025,  3072,  3072,  3072,  3072,
    3072,  3072,  -464,  -464,  3072,  3072,  3072,  -464,  3072,  -464,
    3072,  3072,   146,  -464,   415,  2207,    56,   381,   424,  -464,
     419,  -464,  -464,  -464,  2110,   151,  -464,  -464,   422,  2351,
    -464,  -464,  -464,  -464,  2783,  2783,  -464,    53,   159,  -464,
     146,  -464,   146,   433,  2783,    48,   434,  1921,   438,   369,
     348,   428,   442,  -464,    88,  -464,   357,   328,   416,  -464,
    -464,   328,   362,   146,   279,  -464,    35,  -464,  -464,  -464,
    2423,  -464,  -464,   391,   430,   378,   328,   338,  -464,   146,
     458,  -464,   405,    66,  -464,  -464,   382,  -464,  2110,   -19,
    2495,  -464,  -464,  1309,  -464,  -464,     3,  1644,  -464,  -464,
    -464,  -464,   358,   383,   463,  -464,  -464,  -464,  -464,  -464,
     374,   473,   182,   374,   328,   328,  -464,  -464,   328,    65,
    3072,   387,  -464,   176,   149,   174,   187,   -35,   243,   163,
     137,   269,   222,   214,  -464,  1644,  -464,  -464,    34,  -464,
    -464,  -464,  -464,  -464,   155,   287,  -464,   314,  -464,  2567,
    -464,  -464,  -464,  -464,   470,   -19,   210,  -464,   396,  -464,
     103,  -464,  -464,   397,   401,  1750,   485,  2783,  1750,  2639,
       8,  -464,  2783,  2783,  -464,   167,   219,  1750,  -464,    26,
     447,  -464,   362,   338,   249,   328,  -464,  -464,   483,   491,
     411,   412,   494,   328,   492,   189,  -464,   497,   500,   146,
    -464,   504,   505,    60,   414,  -464,   360,  -464,  -464,   506,
     499,  -464,  -464,  -464,  -464,   427,   328,  1750,   511,  -464,
    -464,  -464,  -464,   510,   512,   514,  -464,  -464,   436,  -464,
    3072,    92,   517,   381,  -464,  -464,  -464,  -464,  2783,  -464,
     426,   146,  -464,   328,   328,   513,  -464,   519,  -464,  1750,
     521,   435,   523,   507,   515,  -464,   440,  -464,  -464,   532,
    -464,   146,   530,   362,  -464,    73,   362,   249,   535,  -464,
     863,  -464,   374,  -464,  -464,  -464,  -464,  -464,  3152,  -464,
     146,   410,   537,  -464,  -464,   482,  -464,   382,  -464,  -464,
    -464,   520,  -464,  -464,   146,   146,   146,  -464,  -464,  -464,
    2711,  -464,  -464,   -19,  2783,  -464,   374,  -464,  1750,  1750,
    -464,  1750,  2783,  1750,  2783,   446,  1750,   391,   461,   536,
     468,  -464,  -464,     1,  -464,   545,   249,  -464,   544,  -464,
     982,   430,   552,   472,  -464,  -464,  3123,   477,  -464,  -464,
     410,   364,   368,  -464,  2783,   555,   557,   559,   562,  -464,
     -19,   560,  -464,  -464,  -464,   563,  -464,  -464,  1750,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,   564,
    -464,   568,  -464,  -464,  -464,  -464,  -464,  -464,   146,  -464,
    -464,  -464,  1750,  1091,  -464,  -464,   566,  -464,  -464
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   146,     0,   262,     0,   193,   237,     0,   126,     0,
     127,     0,     0,     0,     0,   193,     0,   139,   140,     0,
     110,     0,   193,   193,   185,     0,   212,   193,    51,    52,
     193,   193,   236,     0,     0,   310,     0,     0,   235,     0,
       0,    25,   344,   345,   346,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   347,   319,   291,   320,   292,
       0,     0,     0,     0,     0,   295,   294,   355,     0,     0,
       4,     9,    10,   343,    16,     0,    11,     0,    14,   193,
      15,    82,    85,    39,    89,    90,    91,    88,    87,    12,
      83,     0,    80,    86,    81,     0,    84,    79,     0,   147,
     352,   149,   217,   218,     0,   219,     8,   238,   193,    13,
     174,   263,   267,   269,   271,   273,   275,   277,   279,   281,
     283,   285,   287,     0,   289,   340,   293,   329,   296,   349,
     348,   323,   360,     0,   256,   291,   292,   259,   260,   160,
     156,   253,   251,   252,   250,   157,   254,   255,   158,   159,
       0,   203,     0,   205,   204,   207,   206,     0,   261,     0,
      64,     0,   147,     0,   186,   183,   188,   189,     0,   187,
     191,   190,   195,     0,     0,     0,     0,     0,     0,     0,
     142,     0,     0,   109,   359,   104,     0,   195,     0,   184,
       0,   193,   223,     0,    28,   155,   227,   231,   233,    55,
       0,   213,     0,     0,     0,     0,     0,   136,   307,   309,
       0,     0,   262,   223,     0,     0,     0,   330,     0,   333,
       0,   306,   301,     0,   347,     0,   302,   298,     0,   303,
     299,     0,     0,     1,     6,     5,     0,    41,    40,     0,
       0,   144,    26,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,   249,     0,     0,     0,   257,     0,   258,
       0,     0,     0,   297,     0,     0,     0,     0,     0,   172,
     173,   325,   324,   328,     0,     0,   354,   358,     0,     0,
     342,   341,   350,    65,     0,     0,   351,     0,     0,   192,
       0,   194,     0,     0,     0,   347,     0,     0,   335,     0,
       0,     0,     0,   141,   110,   106,   108,   182,   195,   197,
      17,   182,    30,     0,   155,   225,     0,   229,   230,   232,
       0,    54,   234,     0,    45,     0,   182,     0,   308,    63,
       0,   261,     0,     0,    94,   102,     0,   331,     0,   150,
       0,   300,    66,     0,   335,   337,     0,     0,   304,   305,
     353,    33,     0,     0,     0,   143,   148,   153,   151,   152,
       0,     0,     0,     0,   182,   182,   215,   214,   182,     0,
       0,     0,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,     0,   356,   164,     0,   322,
     321,   313,   314,   315,     0,   312,   311,     0,   326,     0,
     166,   334,   171,   170,     0,   167,     0,   178,   247,    58,
       0,   199,   198,     0,     0,     0,     0,     0,     0,     0,
       0,   336,     0,     0,   122,     0,     0,     0,   107,     0,
      29,   196,    30,     0,     0,   182,   226,   228,     0,     0,
       0,    46,     0,   182,     0,     0,    60,    62,     0,    63,
      78,   347,   329,   155,    97,   100,     0,   332,   318,     0,
      41,    67,   339,   338,    32,     0,   182,     0,     0,   216,
     221,   220,   211,     0,     0,     0,   245,   175,     0,   265,
       0,   147,   161,     0,   154,   327,   165,   169,     0,   246,
      57,     0,   177,   182,   182,   137,   129,     0,   134,     0,
       0,     0,     0,   120,   125,   123,   113,   117,   115,   112,
     105,     0,     0,    30,    37,     0,    30,     0,    31,    22,
       0,    24,     0,    27,    43,    44,    48,    42,     0,    92,
       0,     0,     0,    96,    95,     0,   103,     0,   317,    68,
      34,    49,   128,   222,     0,     0,     0,   176,   264,   357,
       0,   162,   316,   168,     0,    59,     0,    47,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   181,    35,     0,   179,     0,     0,    19,     0,    21,
       0,    45,   223,     0,   241,   242,     0,     0,    61,   201,
       0,   347,   329,   101,     0,     0,     0,     0,     0,   163,
      56,     0,   138,   135,   131,     0,   132,   119,     0,   124,
     114,   116,   118,    36,    38,   180,    18,    23,    20,     0,
     239,     0,   244,   243,    93,   200,    50,    53,     0,   209,
     210,   202,     0,     0,   224,   240,     0,   133,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -464,  -464,    43,   -67,   181,  -464,  -463,  -464,   -91,   242,
    -464,   136,  -387,  -464,  -300,    -6,  -464,    -3,  -464,  -464,
     -12,  -464,  -464,  -464,  -464,  -464,   -16,  -291,  -464,  -464,
     119,  -464,   -58,  -421,    -9,  -464,  -464,  -464,    37,  -464,
    -464,  -464,   265,  -464,  -464,   268,  -464,     7,  -464,  -464,
    -464,   153,  -464,  -464,   417,  -464,  -464,  -464,  -464,  -464,
    -149,    27,    28,  -160,  -464,  -258,  -464,  -464,  -117,   394,
      62,  -196,  -285,   177,  -464,   418,  -464,    16,  -139,  -464,
    -464,  -464,   335,   341,  -464,  -464,  -464,   402,  -464,   270,
    -464,   398,   558,   -22,  -464,    -2,  -464,  -464,   112,  -464,
    -464,  -105,  -104,  -103,  -102,   392,  -236,  -464,   345,   349,
     346,   350,   351,   342,   343,   353,   354,   339,   340,   -78,
      -1,  -464,  -464,  -464,   120,  -464,  -222,  -120,  -319,  -310,
    -182,  -264,  -202,  -464,   -13,  -464,  -249,  -464
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   186,    71,   531,    72,    73,   243,
      74,    75,   444,    76,   362,   524,   525,    77,   203,   451,
     452,   168,    78,   605,    79,    80,   418,   456,   420,   457,
     458,    81,   226,    82,    83,    84,   597,    85,   465,   466,
      86,    87,   315,   316,    88,   184,   579,   518,   519,    89,
     575,   434,   435,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   278,   151,   279,   280,   163,   100,   282,
     101,   298,   440,   169,   190,   170,   171,   187,   302,   320,
     102,   103,   152,   252,   104,   105,   106,   195,   196,   197,
     329,   198,   199,   107,   108,   595,   596,   109,   487,   500,
     264,   153,   154,   155,   156,   159,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   209,   125,   402,   403,   404,   351,   126,   127,   128,
     219,   129,   310,   356,   228,   292,   130,   131
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     174,   161,   235,   200,   242,   229,   419,   334,   283,   194,
     182,   281,   265,   405,   266,   517,   268,   200,   270,   381,
     382,   172,   410,   355,   462,   207,   253,   307,   406,   150,
     158,   179,   162,   463,   347,   325,   442,   455,   200,   200,
     191,   178,   492,   181,   221,   222,   204,   205,   319,   345,
     231,   454,   427,   521,   372,   527,   408,   399,   191,   417,
     165,   227,   230,   191,   587,   245,   241,   275,   238,   262,
     350,     2,   218,     3,   263,   246,   133,   583,   521,   522,
     308,   584,   200,   173,     8,   523,    10,   354,   251,   483,
     484,   232,   354,   485,   175,   239,   245,    20,   472,   245,
     247,   248,   411,   559,   276,    32,   210,   501,   309,   502,
     523,   220,   274,    38,  -155,   309,   275,   594,   295,   192,
     309,    35,   273,   626,   254,   296,   585,    41,   176,   289,
      41,   375,    42,    43,    44,    45,   582,   192,   376,   586,
     400,   346,   192,   528,   489,   357,    56,   193,    58,   486,
     461,   191,   238,   276,   473,   246,   294,   488,   429,   493,
     532,   285,   421,   494,   446,   193,   467,    64,   537,   357,
     358,   253,   183,   359,   478,   594,   277,   482,   514,   441,
     247,   248,   200,   177,   288,   480,   246,    67,   335,   246,
     433,   551,   357,   475,   377,    56,   185,    58,    32,   539,
     303,   189,   306,   201,   188,   206,    38,   323,   202,   165,
     565,   247,   248,   211,   247,   248,   396,   200,   566,   567,
     353,   191,   134,   363,   267,   277,   602,   200,   511,   405,
     192,   200,   200,   251,   561,   463,   208,   378,   379,   341,
     422,   212,   242,   218,   406,   246,   294,   220,   349,   598,
     200,   162,   529,   215,   558,   200,   394,   233,   193,   530,
     236,   401,   259,   606,   607,   608,   240,   364,    32,   244,
     247,   248,   366,   146,   147,   200,    38,    37,   200,   258,
     200,   290,   291,   265,   423,   266,   424,   268,   260,   270,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   261,
     213,   200,   398,   516,   246,   498,   272,   445,   367,   368,
     369,   218,   164,   165,   481,   495,   414,   200,   271,     2,
     468,     3,   415,   416,   133,   300,   301,     6,   193,   247,
     248,   426,   225,   255,   318,   301,   591,   256,   164,   165,
     166,   167,  -257,   283,   238,    20,   281,   646,   141,   142,
     143,   144,   327,   328,   353,   257,   284,   448,   269,   137,
     138,   474,   475,   546,   547,  -258,    32,   -99,   -99,    35,
     611,   -98,   -98,   286,    38,   218,   287,   469,    41,   297,
      42,    43,    44,    45,   289,   311,   191,   312,   313,   314,
     317,   191,   353,   321,   322,   277,   326,   330,    55,   333,
      56,    57,    58,    59,   336,   338,    60,   337,   339,   340,
     344,   343,    61,    62,    63,    64,   505,   348,   350,   508,
     357,   360,   361,   491,   365,   395,   409,   249,   520,   407,
     412,    65,    66,    32,   469,    67,   448,   200,    32,   425,
     428,    38,   430,   432,   439,    41,    38,    42,    43,    44,
      45,   433,   436,   431,   507,    41,   510,   443,   301,   512,
     513,   450,   453,   459,   460,   192,   464,   476,   552,   477,
     192,   200,    56,    57,    58,    59,   479,   401,   497,   200,
     499,   503,   490,   599,   250,   504,   620,     2,   506,     3,
      25,   492,   133,   193,   533,   534,   535,   536,   193,   200,
     570,   540,   538,    65,    66,   580,   541,   543,   544,   545,
     549,   550,   548,    20,   553,   554,   200,   555,   200,   556,
     486,   564,   593,   235,   560,   569,   563,   571,   568,   573,
     572,   574,   200,   200,   200,   577,   578,    35,   581,   475,
     576,   618,   635,   600,   604,   516,    41,   622,    42,    43,
      44,    45,   623,   625,   627,   630,   631,   634,   637,   612,
     613,   638,   614,   641,   616,   639,   601,   619,   640,   642,
     644,   645,   648,   590,   200,   449,   526,   624,   542,   629,
     593,   438,   437,    64,   603,   621,   374,   448,   515,   299,
     371,   304,   610,   331,   633,   324,   447,   214,   332,   615,
     557,   617,   383,    67,   342,   385,   388,   384,   389,   392,
     386,   393,   387,   562,     0,   643,   200,     0,     0,   390,
       0,     0,   391,     0,     0,    -7,   237,     0,     1,     0,
       2,   636,     3,   647,   238,     4,    -7,    -7,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    -7,    16,    17,    18,    19,    20,     0,    21,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,    -7,     0,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    32,    33,    34,
      35,     0,    -7,    37,     0,    38,    39,    40,     0,    41,
       0,    42,    43,    44,    45,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    -7,    58,    -7,     0,     0,    60,     0,     0,
      -7,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -7,    -7,    -2,   234,    67,     1,     0,     2,
       0,     3,     0,     0,     4,     0,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,   -29,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,   588,    67,     1,     0,     2,     0,
       3,     0,     0,     4,   589,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,     0,
      36,    37,     0,    38,    39,    40,     0,    41,     0,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,     0,    60,     0,     0,   -29,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,   234,    67,     1,     0,     2,     0,     3,
       0,     0,     4,   628,     5,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,     0,    21,    22,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,    26,    27,    28,
      29,    30,     0,    31,    32,    33,    34,    35,     0,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,    43,
      44,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   -29,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,     1,     0,     2,     0,     3,    65,
      66,     4,  -121,    67,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,  -121,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,    40,     0,    41,     0,    42,    43,    44,
      45,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,     1,     0,     2,     0,     3,    65,    66,
       4,   293,    67,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,    40,     0,    41,     0,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
     470,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     471,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,    40,     0,    41,     0,    42,    43,    44,    45,     0,
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
      34,    35,     0,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,    43,    44,    45,     0,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,    56,    57,    58,    59,     0,     0,    60,     0,
       0,   -29,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,    65,    66,     4,   160,    67,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,     0,    16,    17,    18,    19,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,     0,     0,    37,     0,    38,    39,    40,     0,    41,
       0,    42,    43,    44,    45,     0,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       0,     3,    65,    66,     4,   352,    67,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
       0,     0,    37,     0,    38,    39,    40,     0,    41,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     0,
       4,    65,    66,     6,     7,    67,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,     0,     0,    37,     0,
      38,    39,    40,     0,    41,     0,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,   373,     0,     0,     0,     0,    61,    62,
      63,    64,   180,     0,     2,     0,     3,     0,     0,   133,
       0,     0,     6,     0,     0,     0,     0,    65,    66,     0,
       0,    67,   134,    56,   267,    58,   269,   137,   138,     0,
      20,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,    32,     0,     0,    35,     0,   148,   149,     0,    38,
       0,     0,     0,    41,     0,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     1,     0,     2,     0,     3,     0,
       0,   133,     0,    55,     6,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,    32,     0,     0,    35,     0,     0,     0,
       0,    38,     0,     0,     0,    41,     0,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     2,   132,
       3,     0,     0,   133,     0,    55,     6,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,    32,     0,     0,    35,     0,
       0,     0,     0,    38,     0,     0,     0,    41,     0,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,    55,   134,    56,
     135,    58,   136,   137,   138,    60,     0,   139,     0,     0,
       0,    61,    62,    63,    64,     0,     0,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
      65,    66,   148,   149,    67,     2,     0,     3,     0,     0,
     133,    32,     0,     6,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,     0,    56,    57,    58,    59,     0,
       0,     0,    32,     0,     0,    35,     0,   370,     0,     0,
      38,     0,     0,     0,    41,     0,    42,    43,    44,    45,
       0,   193,     0,     0,     0,     0,    65,    66,     0,     0,
       0,   216,   217,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     2,     0,     3,   397,     0,   133,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,    35,     0,     0,     0,     0,    38,     0,     0,
       0,    41,     0,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,   133,
       0,    55,     6,    56,    57,    58,    59,     0,     0,    60,
       0,     0,   157,     0,     0,    61,    62,    63,    64,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,    32,     0,     0,    35,     0,     0,     0,     0,    38,
       0,     0,     0,    41,     0,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   413,
       0,   133,     0,    55,     6,    56,    57,    58,    59,     0,
       0,    60,     0,     0,   157,     0,     0,    61,    62,    63,
      64,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,    32,     0,     0,    35,     0,     0,     0,
       0,    38,     0,     0,     0,    41,     0,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   397,     0,   133,     0,    55,     6,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,    32,     0,     0,    35,     0,
       0,     0,     0,    38,     0,     0,     0,    41,     0,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       2,   468,     3,     0,     0,   133,     0,    55,     6,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,    32,     0,     0,
      35,     0,     0,     0,     0,    38,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   496,     0,   133,     0,    55,
       6,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,    32,
       0,     0,    35,     0,     0,     0,     0,    38,     0,     0,
       0,    41,     0,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     2,   509,     3,     0,     0,   133,
       0,    55,     6,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,    32,     0,     0,    35,     0,     0,     0,     0,    38,
       0,     0,     0,    41,     0,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   609,
       0,   133,     0,    55,     6,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,     0,     0,    32,     0,     0,    35,     0,     0,     0,
       0,    38,     0,     0,     0,    41,     0,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     0,     0,   133,     0,    55,     6,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,    32,     0,     0,    35,     0,
       0,     0,     0,    38,     0,     0,     0,    41,     0,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,   133,     0,    55,     6,    56,
      57,    58,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,    67,     0,     0,    32,     0,     0,
      35,     0,     0,     0,     0,    38,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,   133,     0,   305,
       6,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,    20,     2,
       0,     3,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,     0,     0,    32,
       0,     0,    35,     0,     0,    20,     0,    38,     0,     0,
       0,    41,     0,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,   224,     0,    56,    57,    58,    59,     0,    41,    60,
      42,    43,    44,    45,     0,    61,    62,    63,    64,     0,
       2,     0,     3,     0,     0,   133,     0,     0,   224,     0,
      56,    57,    58,    59,    65,    66,    60,     0,    67,   225,
       0,     0,    61,    62,    63,    64,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     2,     0,     3,
      35,     0,   133,     0,     0,     0,     0,     0,     0,    41,
       0,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,   224,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
     380,     0,     0,    61,    62,    63,    64,    35,   191,     0,
       0,     0,     0,     0,   632,     0,    41,     0,    42,    43,
      44,    45,    65,    66,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   191,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,    32,     0,     0,     0,     0,
       0,    37,     0,    38,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,    32,     0,     0,   592,     0,     0,
      37,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,   193,   592,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193
};

static const yytype_int16 yycheck[] =
{
       9,     4,    69,    25,    95,    63,   297,   203,   128,    25,
      19,   128,   117,   277,   118,   436,   119,    39,   120,   255,
     256,     5,   280,   225,   343,    34,   104,   176,   277,     2,
       3,    15,     4,   343,   216,   195,   321,   337,    60,    61,
       5,    14,     8,    16,    60,    61,    30,    31,   187,     3,
      63,   336,     4,    52,   250,   442,   278,     1,     5,     6,
      38,    62,    63,     5,   527,     4,     3,     7,    77,   104,
       5,     5,    45,     7,   109,    94,    10,     4,    52,    53,
      84,     8,   104,     5,    16,    84,    18,    84,   104,   374,
     375,    64,    84,   378,     5,    79,     4,    31,    95,     4,
     119,   120,   284,    11,    44,    52,    84,     4,   112,     6,
      84,    63,   125,    60,     5,   112,     7,   538,     4,    84,
     112,    55,   123,   586,   108,    11,    53,    64,     5,    95,
      64,   251,    66,    67,    68,    69,   523,    84,     3,   526,
      84,    95,    84,   443,   380,    10,    86,   112,    88,    84,
      84,     5,   161,    44,   356,    94,    95,   379,   307,     4,
     445,   133,     3,     8,   324,   112,   348,   101,   453,    10,
     228,   249,    84,   231,   370,   596,   116,   373,    11,   318,
     119,   120,   204,     5,   157,     3,    94,   121,   204,    94,
      23,   476,    10,     4,   252,    86,     3,    88,    52,    10,
     173,    24,   175,    26,    23,    84,    60,   191,    27,    38,
     501,   119,   120,    36,   119,   120,   274,   239,   503,   504,
     223,     5,    85,   239,    87,   116,   545,   249,   430,   493,
      84,   253,   254,   249,   492,   545,    84,   253,   254,   212,
     298,    84,   333,   216,   493,    94,    95,    63,   220,   540,
     272,   223,     3,    84,   490,   277,   272,     0,   112,    10,
      95,   277,   113,   554,   555,   556,     5,   240,    52,     3,
     119,   120,   245,   110,   111,   297,    60,    58,   300,   103,
     302,     8,     9,   388,   300,   389,   302,   390,   114,   391,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   112,
      84,   323,   275,    84,    94,    95,    92,   323,   246,   247,
     248,   284,    37,    38,   372,     1,   289,   339,    96,     5,
       6,     7,   294,   295,    10,    41,    42,    13,   112,   119,
     120,   304,    95,    93,    41,    42,   532,    97,    37,    38,
      39,    40,     6,   463,   353,    31,   463,   638,   105,   106,
     107,   108,    93,    94,   357,   115,    69,   330,    89,    90,
      91,     3,     4,     3,     4,     6,    52,     3,     4,    55,
     566,     3,     4,     6,    60,   348,     6,   350,    64,     5,
      66,    67,    68,    69,    95,    10,     5,    84,     3,    32,
      84,     5,   395,    84,    84,   116,    44,     7,    84,    84,
      86,    87,    88,    89,    84,    84,    92,    95,     5,    84,
       3,    95,    98,    99,   100,   101,   425,    70,     5,   428,
      10,   102,    84,   395,     3,    10,     7,    41,   437,     5,
       8,   117,   118,    52,   407,   121,   409,   459,    52,     6,
       6,    60,     4,    95,   116,    64,    60,    66,    67,    68,
      69,    23,    10,    84,   427,    64,   429,    95,    42,   432,
     433,    31,    84,     5,    59,    84,    84,    84,   477,     6,
      84,   493,    86,    87,    88,    89,     3,   493,     8,   501,
      84,    84,    95,   541,    98,    84,   577,     5,     3,     7,
      43,     8,    10,   112,     3,    84,    84,     3,   112,   521,
     509,     4,    10,   117,   118,   521,     6,     3,     3,    95,
      11,    84,     6,    31,     3,     5,   538,     5,   540,     5,
      84,    95,   538,   590,     7,     6,   498,     6,    15,     6,
      95,    24,   554,   555,   556,    95,     4,    55,     8,     4,
      25,    95,   600,     6,    24,    84,    64,    11,    66,    67,
      68,    69,    84,     8,    10,     3,    84,    80,     3,   568,
     569,     4,   571,     3,   573,     6,    84,   576,     6,     6,
       6,     3,     6,   530,   596,   333,   440,   583,   459,   591,
     596,   316,   314,   101,   547,   578,   251,   560,   435,   171,
     249,   174,   564,   199,   596,   193,   326,    39,   200,   572,
     488,   574,   257,   121,   212,   259,   264,   258,   265,   270,
     260,   271,   261,   493,    -1,   618,   638,    -1,    -1,   266,
      -1,    -1,   268,    -1,    -1,     0,     1,    -1,     3,    -1,
       5,   604,     7,   642,   643,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    60,    61,    62,    -1,    64,
      -1,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,     0,     1,   121,     3,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    57,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,    95,
      -1,    -1,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,    -1,     1,   121,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    -1,
      57,    58,    -1,    60,    61,    62,    -1,    64,    -1,    66,
      67,    68,    69,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    95,    -1,
      -1,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,     1,   121,     3,    -1,     5,    -1,     7,
      -1,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    -1,    64,    -1,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,    -1,     7,   117,
     118,    10,    11,   121,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    -1,    64,    -1,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,     7,   117,   118,
      10,    11,   121,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,    -1,     7,   117,   118,    10,
      11,   121,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    64,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,     3,
     121,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,
      -1,    95,    -1,    -1,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,   117,   118,    10,    11,   121,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    64,
      -1,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,   117,   118,    10,    11,   121,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,   117,   118,    13,    14,   121,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    56,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,   121,    85,    86,    87,    88,    89,    90,    91,    -1,
      31,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    52,    -1,    -1,    55,    -1,   119,   120,    -1,    60,
      -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    84,    13,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
     121,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    10,    -1,    84,    13,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,   121,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,   121,     5,    -1,     7,    -1,    -1,
      10,    52,    -1,    13,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    98,    -1,    -1,
      60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,
      -1,   112,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
      -1,    81,    82,    -1,    84,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,     5,    -1,     7,     8,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    10,
      -1,    84,    13,    86,    87,    88,    89,    -1,    -1,    92,
      -1,    -1,    95,    -1,    -1,    98,    99,   100,   101,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,   118,    -1,    -1,   121,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    10,    -1,    84,    13,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    95,    -1,    -1,    98,    99,   100,
     101,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
     121,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    10,    -1,    84,    13,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,   121,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    10,    -1,    84,    13,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,   121,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    84,
      13,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,   121,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    10,
      -1,    84,    13,    86,    87,    88,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,   118,    -1,    -1,   121,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    10,    -1,    84,    13,    86,    87,    88,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
     121,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    64,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    10,    -1,    84,    13,    86,    87,    88,
      89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,   121,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    84,    13,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,   121,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,    84,
      13,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,    -1,    31,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,   121,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    31,    -1,    60,    -1,    -1,
      -1,    64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    84,    -1,    86,    87,    88,    89,    -1,    64,    92,
      66,    67,    68,    69,    -1,    98,    99,   100,   101,    -1,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    84,    -1,
      86,    87,    88,    89,   117,   118,    92,    -1,   121,    95,
      -1,    -1,    98,    99,   100,   101,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,    -1,    -1,   121,    -1,     5,    -1,     7,
      55,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    98,    99,   100,   101,    55,     5,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    64,    -1,    66,    67,
      68,    69,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,     5,    86,    87,
      88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,   117,
     118,    -1,    -1,   121,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    52,    -1,    -1,    84,    -1,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,   112,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    64,    66,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    84,    86,    87,    88,    89,
      92,    98,    99,   100,   101,   117,   118,   121,   130,   131,
     132,   134,   136,   137,   139,   140,   142,   146,   151,   153,
     154,   160,   162,   163,   164,   166,   169,   170,   173,   178,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     197,   199,   209,   210,   213,   214,   215,   222,   223,   226,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   251,   256,   257,   258,   260,
     265,   266,     6,    10,    85,    87,    89,    90,    91,    94,
     104,   105,   106,   107,   108,   109,   110,   111,   119,   120,
     190,   193,   211,   230,   231,   232,   233,    95,   190,   234,
      11,   146,   191,   196,    37,    38,    39,    40,   150,   202,
     204,   205,   206,     5,   163,     5,     5,     5,   190,   206,
       3,   190,   163,    84,   174,     3,   133,   206,   133,   202,
     203,     5,    84,   112,   155,   216,   217,   218,   220,   221,
     222,   202,   133,   147,   206,   206,    84,   163,    84,   250,
      84,   202,    84,    84,   221,    84,    81,    82,   190,   259,
      63,   155,   155,    10,    84,    95,   161,   249,   263,   161,
     249,   263,   190,     0,     1,   132,    95,     1,   163,   206,
       5,     3,   137,   138,     3,     4,    94,   119,   120,    41,
      98,   155,   212,   248,   206,    93,    97,   115,   103,   113,
     114,   112,   104,   109,   229,   230,   231,    87,   232,    89,
     233,    96,    92,   249,   263,     7,    44,   116,   192,   194,
     195,   197,   198,   256,    69,   191,     6,     6,   190,    95,
       8,     9,   264,    11,    95,     4,    11,     5,   200,   204,
      41,    42,   207,   190,   183,    84,   190,   189,    84,   112,
     261,    10,    84,     3,    32,   171,   172,    84,    41,   207,
     208,    84,    84,   206,   216,   192,    44,    93,    94,   219,
       7,   198,   220,    84,   200,   155,    84,    95,    84,     5,
      84,   190,   234,    95,     3,     3,    95,   259,    70,   191,
       5,   255,    11,   146,    84,   261,   262,    10,   161,   161,
     102,    84,   143,   155,   190,     3,   190,   199,   199,   199,
      98,   212,   200,    56,   211,   256,     3,   161,   155,   155,
      95,   235,   235,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   155,    10,   161,     8,   190,     1,
      84,   155,   252,   253,   254,   260,   265,     5,   255,     7,
     194,   259,     8,     8,   190,   191,   191,     6,   155,   156,
     157,     3,   161,   155,   155,     6,   190,     4,     6,   189,
       4,    84,    95,    23,   180,   181,    10,   174,   171,   116,
     201,   207,   201,    95,   141,   155,   192,   218,   190,   138,
      31,   148,   149,    84,   201,   143,   156,   158,   159,     5,
      59,    84,   257,   258,    84,   167,   168,   259,     6,   190,
       1,    11,    95,   261,     3,     4,    84,     6,   200,     3,
       3,   161,   200,   201,   201,   201,    84,   227,   255,   235,
      95,   191,     8,     4,     8,     1,     8,     8,    95,    84,
     228,     4,     6,    84,    84,   163,     3,   190,   163,     6,
     190,   261,   190,   190,    11,   180,    84,   162,   176,   177,
     163,    52,    53,    84,   144,   145,   140,   141,   143,     3,
      10,   135,   201,     3,    84,    84,     3,   201,    10,    10,
       4,     6,   159,     3,     3,    95,     3,     4,     6,    11,
      84,   201,   163,     3,     5,     5,     5,   227,   235,    11,
       7,   194,   253,   191,    95,   156,   201,   201,    15,     6,
     163,     6,    95,     6,    24,   179,    25,    95,     4,   175,
     155,     8,   141,     4,     8,    53,   141,   135,     1,    11,
     131,   200,    84,   155,   162,   224,   225,   165,   156,   161,
       6,    84,   257,   167,    24,   152,   156,   156,   156,     8,
     191,   200,   163,   163,   163,   190,   163,   190,    95,   163,
     137,   176,    11,    84,   144,     8,   135,    10,    11,   149,
       3,    84,    11,   224,    80,   161,   190,     3,     4,     6,
       6,     3,     6,   146,     6,     3,   156,   163,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   129,   130,   130,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   134,   134,
     135,   135,   135,   135,   136,   137,   138,   139,   140,   140,
     141,   141,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   146,   147,   148,   148,   149,   149,   150,   151,   152,
     152,   153,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   165,   164,   166,   166,   166,   167,   167,   167,
     168,   168,   169,   169,   170,   171,   172,   172,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   177,   178,   179,
     179,   180,   181,   181,   182,   182,   183,   183,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   186,   186,   187,
     187,   188,   188,   188,   188,   189,   189,   190,   190,   191,
     191,   191,   191,   191,   192,   192,   193,   193,   193,   193,
     193,   194,   194,   194,   195,   195,   195,   196,   196,   197,
     197,   197,   198,   198,   199,   199,   199,   200,   200,   201,
     201,   201,   201,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   207,   207,   208,   208,   209,   209,
     209,   209,   210,   211,   211,   211,   211,   211,   212,   212,
     212,   212,   213,   213,   214,   214,   214,   215,   215,   215,
     215,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   219,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   224,   225,   225,   226,   227,   228,   228,   229,   229,
     230,   230,   230,   230,   231,   231,   232,   232,   233,   233,
     233,   234,   234,   235,   235,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   248,   248,   248,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   258,   258,   258,   258,   258,
     259,   259,   259,   260,   260,   261,   261,   262,   262,   263,
     263,   264,   264,   265,   265,   265,   265,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     7,     6,
       3,     2,     1,     3,     5,     1,     1,     5,     2,     0,
       0,     2,     4,     1,     3,     2,     3,     1,     3,     1,
       2,     2,     4,     2,     2,     0,     1,     5,     5,     0,
       2,     1,     1,     7,     2,     1,     4,     2,     1,     3,
       1,     3,     1,     0,     2,     3,     2,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     3,     5,     5,     1,     3,     3,
       1,     3,     3,     5,     2,     3,     1,     2,     3,     1,
       0,     1,     0,     1,     3,     1,     3,     1,     7,     2,
       0,     5,     1,     2,     7,     5,     1,     1,     5,     5,
       6,     7,     7,     9,     5,     7,     2,     5,     7,     1,
       1,     3,     2,     3,     2,     2,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     0,     1,     1,     1,     1,
       1,     3,     4,     5,     2,     3,     2,     3,     5,     5,
       4,     4,     1,     1,     1,     4,     5,     3,     2,     3,
       4,     3,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     2,     1,     4,     4,
       7,     6,     8,     1,     1,     1,     1,     1,     8,     6,
       6,     3,     1,     2,     3,     3,     4,     1,     1,     1,
       4,     4,     5,     1,     7,     2,     3,     1,     3,     1,
       1,     0,     2,     1,     2,     1,     1,     1,     1,     2,
       3,     1,     1,     2,     7,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     5,     4,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     2,     2,     2,     3,     3,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     3,     3,     1,     2,     2,     3,     4,     2,     1,
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
#line 206 "src/gwion.y"
                  { arg->getter->ppa->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2723 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 207 "src/gwion.y"
           { (yyval.ast) = NULL; }
#line 2729 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 210 "src/gwion.y"
            { LIST_INI(section, (yyval.ast), (yyvsp[0].section)); }
#line 2735 "src/parser.c"
    break;

  case 5: /* section_list: section_list section  */
#line 211 "src/gwion.y"
                                            { LIST_END(section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2741 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 215 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0])); }
#line 2747 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2753 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2759 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2765 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2771 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2777 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2783 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 222 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2789 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 223 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2795 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 224 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2801 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 227 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2807 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template extends traits class_body  */
#line 230 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].taglist);
    }
#line 2818 "src/parser.c"
    break;

  case 19: /* class_def: "struct" class_flag "<identifier>" decl_template traits class_body  */
#line 237 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-4].flag), MK_TAG((yyvsp[-3].sym), (yylsp[-3])), NULL, (yyvsp[0].ast));
      if((yyvsp[-2].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      (yyval.class_def)->cflag |= cflag_struct;
      (yyval.class_def)->traits = (yyvsp[-1].taglist);
    }
#line 2830 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 245 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2836 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 246 "src/gwion.y"
                     { (yyval.ast) = NULL; }
#line 2842 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 246 "src/gwion.y"
                                          { (yyval.ast) = NULL; }
#line 2848 "src/parser.c"
    break;

  case 23: /* class_body: "{" error "{"  */
#line 246 "src/gwion.y"
                                                                         { (yyval.ast) = NULL; }
#line 2854 "src/parser.c"
    break;

  case 24: /* trait_def: "trait" opt_global "<identifier>" traits class_body  */
#line 248 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].taglist);
    }
#line 2863 "src/parser.c"
    break;

  case 25: /* number: INTEGER  */
#line 253 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2874 "src/parser.c"
    break;

  case 26: /* decimal: number  */
#line 260 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2885 "src/parser.c"
    break;

  case 27: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 268 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2893 "src/parser.c"
    break;

  case 28: /* extends: "extends" type_decl_array  */
#line 271 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2899 "src/parser.c"
    break;

  case 29: /* extends: %empty  */
#line 271 "src/gwion.y"
                                                          { (yyval.type_decl) = NULL; }
#line 2905 "src/parser.c"
    break;

  case 30: /* traits: %empty  */
#line 272 "src/gwion.y"
               { (yyval.taglist) = NULL; }
#line 2911 "src/parser.c"
    break;

  case 31: /* traits: ":" taglist  */
#line 272 "src/gwion.y"
                                            { (yyval.taglist) = (yyvsp[0].taglist); }
#line 2917 "src/parser.c"
    break;

  case 32: /* extend_def: extends ":" taglist ";"  */
#line 274 "src/gwion.y"
                                    {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].taglist));
}
#line 2925 "src/parser.c"
    break;

  case 33: /* taglist: "<identifier>"  */
#line 279 "src/gwion.y"
                 { LIST_INI(tag, (yyval.taglist), MK_TAG((yyvsp[0].sym), (yylsp[0]))); }
#line 2931 "src/parser.c"
    break;

  case 34: /* taglist: taglist "," "<identifier>"  */
#line 280 "src/gwion.y"
                 { LIST_END(tag, (yyval.taglist), (yyvsp[-2].taglist), MK_TAG((yyvsp[0].sym), (yylsp[0]))); }
#line 2937 "src/parser.c"
    break;

  case 35: /* specialized: "<identifier>" traits  */
#line 282 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].taglist),
      };
  }
#line 2948 "src/parser.c"
    break;

  case 36: /* specialized: "const" type_decl_array "<identifier>"  */
#line 288 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2959 "src/parser.c"
    break;

  case 37: /* specialized_list: specialized  */
#line 295 "src/gwion.y"
                              { LIST_INI(specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2965 "src/parser.c"
    break;

  case 38: /* specialized_list: specialized_list "," specialized  */
#line 296 "src/gwion.y"
                                     { LIST_END(specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2971 "src/parser.c"
    break;

  case 39: /* stmt_list: stmt  */
#line 298 "src/gwion.y"
                                   { LIST_INI(stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2977 "src/parser.c"
    break;

  case 40: /* stmt_list: stmt_list stmt  */
#line 299 "src/gwion.y"
                                   { LIST_END(stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 2983 "src/parser.c"
    break;

  case 42: /* fptr_base: flag type_decl_array "<identifier>" decl_template  */
#line 301 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2990 "src/parser.c"
    break;

  case 43: /* _func_effects: "perform" "<identifier>"  */
#line 304 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2996 "src/parser.c"
    break;

  case 44: /* _func_effects: _func_effects "<identifier>"  */
#line 304 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 3002 "src/parser.c"
    break;

  case 45: /* func_effects: %empty  */
#line 305 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 3008 "src/parser.c"
    break;

  case 46: /* func_effects: _func_effects  */
#line 305 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 3014 "src/parser.c"
    break;

  case 47: /* func_base: flag final type_decl_array "<identifier>" decl_template  */
#line 307 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 3021 "src/parser.c"
    break;

  case 48: /* fptr_def: "funptr" fptr_base func_args func_effects ";"  */
#line 310 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 3031 "src/parser.c"
    break;

  case 49: /* typedef_when: %empty  */
#line 316 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 3037 "src/parser.c"
    break;

  case 50: /* typedef_when: "when" exp  */
#line 316 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3043 "src/parser.c"
    break;

  case 51: /* type_def_type: "typedef"  */
#line 317 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 3049 "src/parser.c"
    break;

  case 52: /* type_def_type: "distinct"  */
#line 317 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 3055 "src/parser.c"
    break;

  case 53: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 318 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 3068 "src/parser.c"
    break;

  case 54: /* type_decl_array: type_decl array  */
#line 327 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 3074 "src/parser.c"
    break;

  case 56: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 330 "src/gwion.y"
                                            {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
  }
#line 3082 "src/parser.c"
    break;

  case 57: /* arg: type_decl_array arg_decl  */
#line 333 "src/gwion.y"
                             {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
  }
#line 3090 "src/parser.c"
    break;

  case 58: /* arg_list: arg  */
#line 337 "src/gwion.y"
         {
       LIST_INI(arg, (yyval.arg_list), (yyvsp[0].arg));
     }
#line 3098 "src/parser.c"
    break;

  case 59: /* arg_list: arg_list "," arg  */
#line 340 "src/gwion.y"
                              {
     arglist_add(mpool(arg), &(yyvsp[-2].arg_list), (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3107 "src/parser.c"
    break;

  case 60: /* locale_arg: arg  */
#line 346 "src/gwion.y"
        {
       (yyval.arg_list) = new_arglist(mpool(arg), 2);
       Arg self = {
         .var = MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}),
         .exp = NULL,
         .loc = (yyloc)
       };
       arglist_set((yyval.arg_list), 0, self);
       arglist_set((yyval.arg_list), 1, (yyvsp[0].arg));
     }
#line 3124 "src/parser.c"
    break;

  case 61: /* locale_arg: locale_arg "," arg  */
#line 358 "src/gwion.y"
                                {
     arglist_add(mpool(arg), &(yyvsp[-2].arg_list), (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3133 "src/parser.c"
    break;

  case 63: /* locale_list: %empty  */
#line 364 "src/gwion.y"
    {
       Arg self = {
          MK_VAR(
            new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
            (struct Var_Decl_) { .tag = MK_TAG(insert_symbol("self"), (yyloc))}
          ),
         .exp = NULL,
         .loc = (yyloc)
       };
       LIST_INI(arg, (yyval.arg_list), self);
    }
#line 3149 "src/parser.c"
    break;

  case 64: /* code_stmt: "{" "}"  */
#line 377 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3156 "src/parser.c"
    break;

  case 65: /* code_stmt: "{" stmt_list "}"  */
#line 379 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3163 "src/parser.c"
    break;

  case 66: /* code_list: "{" "}"  */
#line 383 "src/gwion.y"
            { (yyval.stmt_list) = new_stmtlist(mpool(arg), 0); }
#line 3169 "src/parser.c"
    break;

  case 67: /* code_list: "{" stmt_list "}"  */
#line 384 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3175 "src/parser.c"
    break;

  case 68: /* code_list: "{" stmt_list error "}"  */
#line 385 "src/gwion.y"
                            { (yyval.stmt_list) = (yyvsp[-2].stmt_list); }
#line 3181 "src/parser.c"
    break;

  case 69: /* stmt_pp: "#include"  */
#line 388 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyloc), .data = (yyvsp[0].sval)); }
#line 3187 "src/parser.c"
    break;

  case 70: /* stmt_pp: "#define"  */
#line 389 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3193 "src/parser.c"
    break;

  case 71: /* stmt_pp: "#pragma"  */
#line 390 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3199 "src/parser.c"
    break;

  case 72: /* stmt_pp: "#undef"  */
#line 391 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3205 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#ifdef"  */
#line 392 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3211 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#ifndef"  */
#line 393 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3217 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#else"  */
#line 394 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3223 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#if"  */
#line 395 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3229 "src/parser.c"
    break;

  case 77: /* stmt_pp: "\n"  */
#line 396 "src/gwion.y"
               { if(!arg->getter->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3235 "src/parser.c"
    break;

  case 78: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 398 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3241 "src/parser.c"
    break;

  case 92: /* $@1: %empty  */
#line 417 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3247 "src/parser.c"
    break;

  case 93: /* spread_stmt: "..." "<identifier>" ":" taglist "{" $@1 "}..."  */
#line 417 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
    .list = (yyvsp[-3].taglist),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3260 "src/parser.c"
    break;

  case 94: /* using_stmt: "using" type_decl ";"  */
#line 426 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.td = (yyvsp[-1].type_decl);
    }
#line 3268 "src/parser.c"
    break;

  case 95: /* using_stmt: "using" "<identifier>" ":" dot_exp ";"  */
#line 429 "src/gwion.y"
                                       { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = (yyvsp[-1].exp);
    (yyval.stmt).d.stmt_using.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3277 "src/parser.c"
    break;

  case 96: /* using_stmt: "using" "<identifier>" ":" "<identifier>" ";"  */
#line 433 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = new_prim_id(mpool(arg), (yyvsp[-1].sym), (yylsp[-1]));
    (yyval.stmt).d.stmt_using.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3286 "src/parser.c"
    break;

  case 97: /* import_item: "<identifier>"  */
#line 438 "src/gwion.y"
                {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))
    };
  }
#line 3296 "src/parser.c"
    break;

  case 98: /* import_item: "<identifier>" ":" dot_exp  */
#line 442 "src/gwion.y"
                            {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])),
      .d = { .exp = (yyvsp[0].exp) }
    };
  }
#line 3307 "src/parser.c"
    break;

  case 99: /* import_item: "<identifier>" ":" "<identifier>"  */
#line 447 "src/gwion.y"
                       {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])),
      .d = { .exp = new_prim_id(mpool(arg), (yyvsp[0].sym), (yylsp[0])) }
    };
  }
#line 3318 "src/parser.c"
    break;

  case 100: /* import_list: import_item  */
#line 455 "src/gwion.y"
                         {
    (yyval.import_list) = new_usingstmtlist(mpool(arg), 1);
    usingstmtlist_set((yyval.import_list), 0, (yyvsp[0].import_item));
  }
#line 3327 "src/parser.c"
    break;

  case 101: /* import_list: import_list "," import_item  */
#line 459 "src/gwion.y"
                                         {
    usingstmtlist_add(mpool(arg), &(yyvsp[-2].import_list), (yyvsp[0].import_item));
    (yyval.import_list) = (yyvsp[-2].import_list);
  }
#line 3336 "src/parser.c"
    break;

  case 102: /* import_stmt: "import" "<identifier>" ";"  */
#line 464 "src/gwion.y"
                             {
    (yyval.stmt) = MK_STMT(ae_stmt_import, (yyloc));
    (yyval.stmt).d.stmt_import.tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]));
  }
#line 3345 "src/parser.c"
    break;

  case 103: /* import_stmt: "import" "<identifier>" ":" import_list ";"  */
#line 467 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(ae_stmt_import, (yyloc));
    (yyval.stmt).d.stmt_import.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
    (yyval.stmt).d.stmt_import.selection = (yyvsp[-1].import_list);
  }
#line 3355 "src/parser.c"
    break;

  case 104: /* retry_stmt: "retry" ";"  */
#line 473 "src/gwion.y"
                        { (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1])); }
#line 3361 "src/parser.c"
    break;

  case 105: /* handler: "handle" opt_id stmt  */
#line 475 "src/gwion.y"
                              { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-2])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; }
#line 3367 "src/parser.c"
    break;

  case 106: /* handler_list: handler  */
#line 476 "src/gwion.y"
                      {
    LIST_INI(handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3376 "src/parser.c"
    break;

  case 107: /* handler_list: handler_list handler  */
#line 480 "src/gwion.y"
                          {
    handlerlist_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list) = (yyvsp[-1].handler_list);
  }
#line 3385 "src/parser.c"
    break;

  case 108: /* try_stmt: "try" stmt handler_list  */
#line 484 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3392 "src/parser.c"
    break;

  case 110: /* opt_id: %empty  */
#line 487 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3398 "src/parser.c"
    break;

  case 112: /* opt_comma: %empty  */
#line 488 "src/gwion.y"
                        {}
#line 3404 "src/parser.c"
    break;

  case 113: /* enum_value: "<identifier>"  */
#line 491 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3410 "src/parser.c"
    break;

  case 114: /* enum_value: "<identifier>" ":" number  */
#line 492 "src/gwion.y"
                          { 
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])), .gwint = (yyvsp[0].gwint), .set = true };
          }
#line 3418 "src/parser.c"
    break;

  case 115: /* enum_list: enum_value  */
#line 496 "src/gwion.y"
                            { LIST_INI(enumvalue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3424 "src/parser.c"
    break;

  case 116: /* enum_list: enum_list "," enum_value  */
#line 497 "src/gwion.y"
                            { LIST_END(enumvalue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3430 "src/parser.c"
    break;

  case 117: /* enum_list: stmt_pp  */
#line 498 "src/gwion.y"
          { return 0;}
#line 3436 "src/parser.c"
    break;

  case 118: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 501 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3445 "src/parser.c"
    break;

  case 119: /* when_exp: "when" exp  */
#line 506 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3451 "src/parser.c"
    break;

  case 120: /* when_exp: %empty  */
#line 506 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3457 "src/parser.c"
    break;

  case 121: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 509 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3470 "src/parser.c"
    break;

  case 122: /* match_list: match_case_stmt  */
#line 518 "src/gwion.y"
                            { LIST_INI(stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3476 "src/parser.c"
    break;

  case 123: /* match_list: match_list match_case_stmt  */
#line 519 "src/gwion.y"
                             { LIST_END(stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3482 "src/parser.c"
    break;

  case 124: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 521 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3495 "src/parser.c"
    break;

  case 125: /* match_stmt: "match" exp "{" match_list "}"  */
#line 530 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3507 "src/parser.c"
    break;

  case 126: /* flow: "while"  */
#line 539 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3513 "src/parser.c"
    break;

  case 127: /* flow: "until"  */
#line 540 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3519 "src/parser.c"
    break;

  case 128: /* loop_stmt: flow "(" exp ")" stmt  */
#line 545 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3530 "src/parser.c"
    break;

  case 129: /* loop_stmt: "do" stmt flow exp ";"  */
#line 552 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3542 "src/parser.c"
    break;

  case 130: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 560 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3554 "src/parser.c"
    break;

  case 131: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 568 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3567 "src/parser.c"
    break;

  case 132: /* loop_stmt: "foreach" "(" capture ":" exp ")" stmt  */
#line 577 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-6]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3580 "src/parser.c"
    break;

  case 133: /* loop_stmt: "foreach" "(" "<identifier>" "," capture ":" exp ")" stmt  */
#line 586 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-8]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .idx = (Var_Decl){.tag=MK_TAG((yyvsp[-6].sym), (yylsp[-6]))},
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3594 "src/parser.c"
    break;

  case 134: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 596 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3605 "src/parser.c"
    break;

  case 135: /* loop_stmt: "repeat" "(" "<identifier>" "," exp ")" stmt  */
#line 603 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3617 "src/parser.c"
    break;

  case 136: /* defer_stmt: "defer" stmt  */
#line 611 "src/gwion.y"
                         {
    (yyval.stmt) = MK_STMT(ae_stmt_defer, (yylsp[-1]),
      .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
}
#line 3627 "src/parser.c"
    break;

  case 137: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 619 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3638 "src/parser.c"
    break;

  case 138: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 626 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3650 "src/parser.c"
    break;

  case 139: /* breaks: "break"  */
#line 634 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3656 "src/parser.c"
    break;

  case 140: /* breaks: "continue"  */
#line 634 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3662 "src/parser.c"
    break;

  case 141: /* jump_stmt: "return" exp ";"  */
#line 636 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-2]), (yyvsp[-1].exp)); }
#line 3668 "src/parser.c"
    break;

  case 142: /* jump_stmt: "return" ";"  */
#line 637 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yylsp[-1]), NULL); }
#line 3674 "src/parser.c"
    break;

  case 143: /* jump_stmt: breaks decimal ";"  */
#line 638 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-2]), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3680 "src/parser.c"
    break;

  case 144: /* jump_stmt: breaks ";"  */
#line 639 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yylsp[-1]), .stmt_index = { .idx = -1 });}
#line 3686 "src/parser.c"
    break;

  case 145: /* exp_stmt: exp ";"  */
#line 642 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yyloc), (yyvsp[-1].exp)); }
#line 3692 "src/parser.c"
    break;

  case 146: /* exp_stmt: ";"  */
#line 643 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yyloc)); }
#line 3698 "src/parser.c"
    break;

  case 147: /* exp: binary_exp  */
#line 646 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3704 "src/parser.c"
    break;

  case 148: /* exp: binary_exp "," exp  */
#line 648 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3716 "src/parser.c"
    break;

  case 150: /* binary_exp: "<identifier>" "=" binary_exp  */
#line 658 "src/gwion.y"
                      { (yyval.exp) = new_exp_named(mpool(arg), (yyvsp[0].exp), MK_TAG((yyvsp[-2].sym), (yylsp[-2])), (yyloc));}
#line 3722 "src/parser.c"
    break;

  case 151: /* binary_exp: binary_exp "@" decl_exp  */
#line 659 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3728 "src/parser.c"
    break;

  case 152: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 660 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3734 "src/parser.c"
    break;

  case 153: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 661 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3740 "src/parser.c"
    break;

  case 154: /* call_template: ":[" tmplarg_list "]"  */
#line 663 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3746 "src/parser.c"
    break;

  case 155: /* call_template: %empty  */
#line 663 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3752 "src/parser.c"
    break;

  case 161: /* array_exp: "[" exp "]"  */
#line 668 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3758 "src/parser.c"
    break;

  case 162: /* array_exp: "[" exp "]" array_exp  */
#line 669 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3766 "src/parser.c"
    break;

  case 163: /* array_exp: "[" exp "]" "[" "]"  */
#line 672 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3772 "src/parser.c"
    break;

  case 164: /* array_empty: "[" "]"  */
#line 676 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3778 "src/parser.c"
    break;

  case 165: /* array_empty: array_empty "[" "]"  */
#line 677 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3784 "src/parser.c"
    break;

  case 166: /* array_empty: array_empty array_exp  */
#line 678 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3790 "src/parser.c"
    break;

  case 167: /* dict_list: binary_exp ":" binary_exp  */
#line 682 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3796 "src/parser.c"
    break;

  case 168: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 683 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3802 "src/parser.c"
    break;

  case 169: /* range: "[" exp ":" exp "]"  */
#line 686 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3808 "src/parser.c"
    break;

  case 170: /* range: "[" exp ":" "]"  */
#line 687 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3814 "src/parser.c"
    break;

  case 171: /* range: "[" ":" exp "]"  */
#line 688 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3820 "src/parser.c"
    break;

  case 175: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 694 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3826 "src/parser.c"
    break;

  case 176: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 695 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yyloc));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3836 "src/parser.c"
    break;

  case 177: /* func_args: "(" arg_list ")"  */
#line 701 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3842 "src/parser.c"
    break;

  case 178: /* func_args: "(" ")"  */
#line 701 "src/gwion.y"
                                                   { (yyval.arg_list) = NULL; }
#line 3848 "src/parser.c"
    break;

  case 179: /* decl_template: ":[" specialized_list "]"  */
#line 704 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3854 "src/parser.c"
    break;

  case 180: /* decl_template: ":[" specialized_list "..." "]"  */
#line 705 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  LIST_END(specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3863 "src/parser.c"
    break;

  case 181: /* decl_template: ":[" "..." "]"  */
#line 709 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  LIST_INI(specialized, (yyval.specialized_list), spec);
}
#line 3872 "src/parser.c"
    break;

  case 182: /* decl_template: %empty  */
#line 713 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3878 "src/parser.c"
    break;

  case 183: /* global: "global"  */
#line 715 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3884 "src/parser.c"
    break;

  case 185: /* opt_global: %empty  */
#line 716 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3890 "src/parser.c"
    break;

  case 186: /* storage_flag: "static"  */
#line 718 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3896 "src/parser.c"
    break;

  case 188: /* access_flag: "private"  */
#line 720 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3902 "src/parser.c"
    break;

  case 189: /* access_flag: "protect"  */
#line 721 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3908 "src/parser.c"
    break;

  case 190: /* flag: access_flag  */
#line 724 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3914 "src/parser.c"
    break;

  case 191: /* flag: storage_flag  */
#line 725 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3920 "src/parser.c"
    break;

  case 192: /* flag: access_flag storage_flag  */
#line 726 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3926 "src/parser.c"
    break;

  case 193: /* flag: %empty  */
#line 727 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 3932 "src/parser.c"
    break;

  case 194: /* final: "final"  */
#line 730 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3938 "src/parser.c"
    break;

  case 195: /* final: %empty  */
#line 730 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 3944 "src/parser.c"
    break;

  case 196: /* modifier: "abstract" final  */
#line 732 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3950 "src/parser.c"
    break;

  case 198: /* func_def_base: "fun" func_base func_args code_list  */
#line 735 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3959 "src/parser.c"
    break;

  case 199: /* func_def_base: "fun" func_base func_args ";"  */
#line 739 "src/gwion.y"
                                     {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 3969 "src/parser.c"
    break;

  case 200: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 744 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3980 "src/parser.c"
    break;

  case 201: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 750 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 3991 "src/parser.c"
    break;

  case 202: /* abstract_fdef: "fun" flag "abstract" type_decl_array "<identifier>" decl_template func_args ";"  */
#line 759 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4003 "src/parser.c"
    break;

  case 208: /* op_base: type_decl_array op_op decl_template "(" arg "," arg ")"  */
#line 770 "src/gwion.y"
    {
      ArgList *args = new_arglist(mpool(arg), 2);
      arglist_set(args, 0, (yyvsp[-3].arg));
      arglist_set(args, 1, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 4015 "src/parser.c"
    break;

  case 209: /* op_base: type_decl_array post_op decl_template "(" arg ")"  */
#line 778 "src/gwion.y"
    {
      ArgList *args = new_arglist(mpool(arg), 1);
      arglist_set(args, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4026 "src/parser.c"
    break;

  case 210: /* op_base: unary_op type_decl_array decl_template "(" arg ")"  */
#line 785 "src/gwion.y"
    {
      ArgList *args = new_arglist(mpool(arg), 1);
      arglist_set(args, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4038 "src/parser.c"
    break;

  case 211: /* op_base: type_decl_array OPID_A func_args  */
#line 793 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list), ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4047 "src/parser.c"
    break;

  case 212: /* operator: "operator"  */
#line 798 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4053 "src/parser.c"
    break;

  case 213: /* operator: "operator" global  */
#line 798 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4059 "src/parser.c"
    break;

  case 214: /* op_def: operator op_base code_list  */
#line 801 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4065 "src/parser.c"
    break;

  case 215: /* op_def: operator op_base ";"  */
#line 803 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4071 "src/parser.c"
    break;

  case 216: /* op_def: operator "abstract" op_base ";"  */
#line 805 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4077 "src/parser.c"
    break;

  case 220: /* func_def: operator "new" func_args code_list  */
#line 809 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag), (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4086 "src/parser.c"
    break;

  case 221: /* func_def: operator "new" func_args ";"  */
#line 814 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4095 "src/parser.c"
    break;

  case 222: /* func_def: operator "abstract" "new" func_args ";"  */
#line 819 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4104 "src/parser.c"
    break;

  case 223: /* type_decl_base: "<identifier>"  */
#line 825 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4110 "src/parser.c"
    break;

  case 224: /* type_decl_base: "(" flag type_decl_array decl_template func_args func_effects ")"  */
#line 826 "src/gwion.y"
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
#line 4126 "src/parser.c"
    break;

  case 225: /* type_decl_tmpl: type_decl_base call_template  */
#line 840 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4132 "src/parser.c"
    break;

  case 226: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 841 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4138 "src/parser.c"
    break;

  case 228: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 846 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4144 "src/parser.c"
    break;

  case 229: /* option: "?"  */
#line 849 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4150 "src/parser.c"
    break;

  case 230: /* option: OPTIONS  */
#line 849 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4156 "src/parser.c"
    break;

  case 231: /* option: %empty  */
#line 849 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 4162 "src/parser.c"
    break;

  case 232: /* type_decl_opt: type_decl_noflag option  */
#line 850 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4168 "src/parser.c"
    break;

  case 234: /* type_decl: type_decl_flag type_decl_opt  */
#line 851 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4174 "src/parser.c"
    break;

  case 235: /* type_decl_flag: "late"  */
#line 854 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4180 "src/parser.c"
    break;

  case 236: /* type_decl_flag: "const"  */
#line 855 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4186 "src/parser.c"
    break;

  case 237: /* type_decl_flag2: "var"  */
#line 857 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4192 "src/parser.c"
    break;

  case 239: /* variable: "<identifier>" ";"  */
#line 860 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 4201 "src/parser.c"
    break;

  case 240: /* variable: type_decl_array "<identifier>" ";"  */
#line 864 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 4207 "src/parser.c"
    break;

  case 241: /* variable: stmt_pp  */
#line 865 "src/gwion.y"
          { return 0;}
#line 4213 "src/parser.c"
    break;

  case 242: /* variable_list: variable  */
#line 866 "src/gwion.y"
                        { LIST_INI(variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4219 "src/parser.c"
    break;

  case 243: /* variable_list: variable_list variable  */
#line 867 "src/gwion.y"
                         { LIST_END(variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4225 "src/parser.c"
    break;

  case 244: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 870 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4237 "src/parser.c"
    break;

  case 245: /* var_decl: "<identifier>"  */
#line 879 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4243 "src/parser.c"
    break;

  case 246: /* arg_decl: "<identifier>"  */
#line 881 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4249 "src/parser.c"
    break;

  case 247: /* arg_decl: %empty  */
#line 882 "src/gwion.y"
                 { (yyval.var_decl) = (struct Var_Decl_) {
            .tag = { .sym = NULL, .loc = {.first = arg->pos, .last = arg->pos }}};
        }
#line 4257 "src/parser.c"
    break;

  case 261: /* opt_exp: exp  */
#line 892 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4263 "src/parser.c"
    break;

  case 262: /* opt_exp: %empty  */
#line 892 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4269 "src/parser.c"
    break;

  case 264: /* con_exp: log_or_exp "?" con_exp ":" con_exp  */
#line 895 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4275 "src/parser.c"
    break;

  case 265: /* con_exp: log_or_exp "?" ":" con_exp  */
#line 897 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-3].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4281 "src/parser.c"
    break;

  case 266: /* con_exp: log_or_exp "?:" con_exp  */
#line 899 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4287 "src/parser.c"
    break;

  case 268: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 901 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4293 "src/parser.c"
    break;

  case 270: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 902 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4299 "src/parser.c"
    break;

  case 272: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 903 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4305 "src/parser.c"
    break;

  case 274: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 904 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4311 "src/parser.c"
    break;

  case 276: /* and_exp: and_exp "&" eq_exp  */
#line 905 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4317 "src/parser.c"
    break;

  case 278: /* eq_exp: eq_exp eq_op rel_exp  */
#line 906 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4323 "src/parser.c"
    break;

  case 280: /* rel_exp: rel_exp rel_op shift_exp  */
#line 907 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4329 "src/parser.c"
    break;

  case 282: /* shift_exp: shift_exp shift_op add_exp  */
#line 908 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4335 "src/parser.c"
    break;

  case 284: /* add_exp: add_exp add_op mul_exp  */
#line 909 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4341 "src/parser.c"
    break;

  case 286: /* mul_exp: mul_exp mul_op dur_exp  */
#line 910 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4347 "src/parser.c"
    break;

  case 288: /* dur_exp: dur_exp "::" cast_exp  */
#line 911 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4353 "src/parser.c"
    break;

  case 290: /* cast_exp: cast_exp "$" type_decl_array  */
#line 914 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4359 "src/parser.c"
    break;

  case 297: /* unary_exp: unary_op unary_exp  */
#line 921 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4365 "src/parser.c"
    break;

  case 298: /* unary_exp: "spork" unary_exp  */
#line 922 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4371 "src/parser.c"
    break;

  case 299: /* unary_exp: "fork" unary_exp  */
#line 923 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4377 "src/parser.c"
    break;

  case 300: /* unary_exp: "new" type_decl_array call_paren  */
#line 924 "src/gwion.y"
                                     {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4385 "src/parser.c"
    break;

  case 301: /* unary_exp: "new" type_decl_array  */
#line 927 "src/gwion.y"
                          {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4391 "src/parser.c"
    break;

  case 302: /* unary_exp: "spork" code_list  */
#line 928 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4397 "src/parser.c"
    break;

  case 303: /* unary_exp: "fork" code_list  */
#line 929 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4403 "src/parser.c"
    break;

  case 304: /* unary_exp: "spork" captures code_list  */
#line 930 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4409 "src/parser.c"
    break;

  case 305: /* unary_exp: "fork" captures code_list  */
#line 931 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4415 "src/parser.c"
    break;

  case 306: /* unary_exp: "$" type_decl_array  */
#line 932 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4421 "src/parser.c"
    break;

  case 307: /* lambda_list: "<identifier>"  */
#line 935 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}), .loc = (yyloc)};
  LIST_INI(arg, (yyval.arg_list), a); }
#line 4429 "src/parser.c"
    break;

  case 308: /* lambda_list: lambda_list "<identifier>"  */
#line 938 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}), .loc = (yyloc)};
  LIST_END(arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4438 "src/parser.c"
    break;

  case 309: /* lambda_arg: "\\" lambda_list  */
#line 943 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4444 "src/parser.c"
    break;

  case 310: /* lambda_arg: "\\"  */
#line 943 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4450 "src/parser.c"
    break;

  case 313: /* tmplarg: type_decl_array  */
#line 946 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4458 "src/parser.c"
    break;

  case 314: /* tmplarg: tmplarg_exp  */
#line 949 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4466 "src/parser.c"
    break;

  case 315: /* tmplarg_list: tmplarg  */
#line 953 "src/gwion.y"
                           { LIST_INI(tmplarg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4472 "src/parser.c"
    break;

  case 316: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 954 "src/gwion.y"
                           { LIST_END(tmplarg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4478 "src/parser.c"
    break;

  case 317: /* call_paren: "(" exp ")"  */
#line 957 "src/gwion.y"
            { (yyval.exp) = (yyvsp[-1].exp); }
#line 4484 "src/parser.c"
    break;

  case 318: /* call_paren: "(" ")"  */
#line 958 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4490 "src/parser.c"
    break;

  case 321: /* dot_exp: post_exp "." "<identifier>"  */
#line 962 "src/gwion.y"
                         {
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), MK_TAG((yyvsp[0].sym), (yylsp[0])), (yyloc));
}
#line 4498 "src/parser.c"
    break;

  case 322: /* dot_exp: post_exp "." error  */
#line 965 "src/gwion.y"
                     {
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), MK_TAG(insert_symbol("@"), (yylsp[0])), (yyloc)); // suus
}
#line 4506 "src/parser.c"
    break;

  case 324: /* post_exp: post_exp array  */
#line 971 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4512 "src/parser.c"
    break;

  case 325: /* post_exp: post_exp range  */
#line 973 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4518 "src/parser.c"
    break;

  case 326: /* post_exp: post_exp call_template call_paren  */
#line 975 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4525 "src/parser.c"
    break;

  case 327: /* post_exp: post_exp call_template "(" error  */
#line 978 "src/gwion.y"
    {(yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-3].exp), MK_TAG(insert_symbol("@"), (yylsp[-1])), (yyloc)); }
#line 4531 "src/parser.c"
    break;

  case 328: /* post_exp: post_exp post_op  */
#line 980 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4537 "src/parser.c"
    break;

  case 329: /* post_exp: dot_exp  */
#line 981 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4543 "src/parser.c"
    break;

  case 330: /* interp_exp: "<interp string end>"  */
#line 985 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4549 "src/parser.c"
    break;

  case 331: /* interp_exp: "<interp string lit>" interp_exp  */
#line 986 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4555 "src/parser.c"
    break;

  case 332: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 987 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4561 "src/parser.c"
    break;

  case 333: /* interp: "${" interp_exp  */
#line 989 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4567 "src/parser.c"
    break;

  case 334: /* interp: interp "${" interp_exp  */
#line 990 "src/gwion.y"
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
#line 4582 "src/parser.c"
    break;

  case 335: /* capture: "<identifier>"  */
#line 1001 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4588 "src/parser.c"
    break;

  case 336: /* capture: "&" "<identifier>"  */
#line 1001 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4594 "src/parser.c"
    break;

  case 337: /* capture_list: capture  */
#line 1003 "src/gwion.y"
                       { LIST_INI(capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4600 "src/parser.c"
    break;

  case 338: /* capture_list: capture_list capture  */
#line 1004 "src/gwion.y"
                       { LIST_END(capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4606 "src/parser.c"
    break;

  case 339: /* captures: ":" capture_list ":"  */
#line 1005 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4612 "src/parser.c"
    break;

  case 340: /* captures: %empty  */
#line 1005 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4618 "src/parser.c"
    break;

  case 343: /* basic_exp: number  */
#line 1009 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4627 "src/parser.c"
    break;

  case 344: /* basic_exp: "<float>"  */
#line 1013 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4633 "src/parser.c"
    break;

  case 345: /* basic_exp: "<litteral string>"  */
#line 1014 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4639 "src/parser.c"
    break;

  case 346: /* basic_exp: "<litteral char>"  */
#line 1015 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4645 "src/parser.c"
    break;

  case 347: /* prim_exp: "<identifier>"  */
#line 1018 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4651 "src/parser.c"
    break;

  case 349: /* prim_exp: interp  */
#line 1020 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4657 "src/parser.c"
    break;

  case 350: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1021 "src/gwion.y"
                             { 
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4666 "src/parser.c"
    break;

  case 351: /* prim_exp: "{" dict_list "}"  */
#line 1025 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4672 "src/parser.c"
    break;

  case 352: /* prim_exp: range  */
#line 1026 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4678 "src/parser.c"
    break;

  case 353: /* prim_exp: "<<<" exp ">>>"  */
#line 1027 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4684 "src/parser.c"
    break;

  case 354: /* prim_exp: "(" exp ")"  */
#line 1028 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4690 "src/parser.c"
    break;

  case 355: /* prim_exp: "`foo`"  */
#line 1029 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4701 "src/parser.c"
    break;

  case 356: /* prim_exp: lambda_arg captures code_list  */
#line 1035 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4707 "src/parser.c"
    break;

  case 357: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1036 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4713 "src/parser.c"
    break;

  case 358: /* prim_exp: "(" op_op ")"  */
#line 1037 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4719 "src/parser.c"
    break;

  case 359: /* prim_exp: "perform" opt_id  */
#line 1038 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4725 "src/parser.c"
    break;

  case 360: /* prim_exp: "(" ")"  */
#line 1039 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4731 "src/parser.c"
    break;


#line 4735 "src/parser.c"

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

#line 1041 "src/gwion.y"

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
  char *_explain = strchr(_main, ',');
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
  }
  scanner_error(scan, _main, _explain, *loc, error_code);
  loc_t _loc = { scan->old, scan->old};
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
