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
  YYSYMBOL_PRIVATE = 38,                   /* "private"  */
  YYSYMBOL_PROTECT = 39,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 40,                  /* "abstract"  */
  YYSYMBOL_FINAL = 41,                     /* "final"  */
  YYSYMBOL_EXTENDS = 42,                   /* "extends"  */
  YYSYMBOL_DOT = 43,                       /* "."  */
  YYSYMBOL_HELPER = 44,                    /* HELPER  */
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
  YYSYMBOL_REQUIRE = 63,                   /* "require"  */
  YYSYMBOL_EXPORT = 64,                    /* "export"  */
  YYSYMBOL_NAMED = 65,                     /* "="  */
  YYSYMBOL_INTEGER = 66,                   /* INTEGER  */
  YYSYMBOL_67_integer_ = 67,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 68,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 69,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 70,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 71,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 72,                /* INTERP_EXP  */
  YYSYMBOL_PP_DEFINE = 73,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 74,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 75,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 76,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 77,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 78,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 79,                  /* "#if"  */
  YYSYMBOL_PP_NL = 80,                     /* "\n"  */
  YYSYMBOL_SPREAD = 81,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 82,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 83,                /* "<interp string end>"  */
  YYSYMBOL_84_operator_id_ = 84,           /* "@<operator id>"  */
  YYSYMBOL_ID = 85,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 86,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 87,                  /* "++"  */
  YYSYMBOL_MINUS = 88,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 89,                /* "--"  */
  YYSYMBOL_TIMES = 90,                     /* "*"  */
  YYSYMBOL_DIVIDE = 91,                    /* "/"  */
  YYSYMBOL_PERCENT = 92,                   /* "%"  */
  YYSYMBOL_DOLLAR = 93,                    /* "$"  */
  YYSYMBOL_QUESTION = 94,                  /* "?"  */
  YYSYMBOL_OPTIONS = 95,                   /* OPTIONS  */
  YYSYMBOL_COLON = 96,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 97,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 98,             /* "?:"  */
  YYSYMBOL_NEW = 99,                       /* "new"  */
  YYSYMBOL_SPORK = 100,                    /* "spork"  */
  YYSYMBOL_FORK = 101,                     /* "fork"  */
  YYSYMBOL_L_HACK = 102,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 103,                   /* ">>>"  */
  YYSYMBOL_AND = 104,                      /* "&&"  */
  YYSYMBOL_EQ = 105,                       /* "=="  */
  YYSYMBOL_GE = 106,                       /* ">="  */
  YYSYMBOL_GT = 107,                       /* ">"  */
  YYSYMBOL_LE = 108,                       /* "<="  */
  YYSYMBOL_LT = 109,                       /* "<"  */
  YYSYMBOL_NEQ = 110,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 111,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 112,              /* ">>"  */
  YYSYMBOL_S_AND = 113,                    /* "&"  */
  YYSYMBOL_S_OR = 114,                     /* "|"  */
  YYSYMBOL_S_XOR = 115,                    /* "^"  */
  YYSYMBOL_OR = 116,                       /* "||"  */
  YYSYMBOL_TMPL = 117,                     /* ":["  */
  YYSYMBOL_TILDA = 118,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 119,              /* "!"  */
  YYSYMBOL_AROBASE = 120,                  /* "@"  */
  YYSYMBOL_DYNOP = 121,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 122,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 123,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 124,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 125,                   /* UTIMES  */
  YYSYMBOL_SECTION_LIST = 126,             /* SECTION_LIST  */
  YYSYMBOL_STMT_LIST3 = 127,               /* STMT_LIST3  */
  YYSYMBOL_STMT_LIST2 = 128,               /* STMT_LIST2  */
  YYSYMBOL_STMT_LIST1 = 129,               /* STMT_LIST1  */
  YYSYMBOL_YYACCEPT = 130,                 /* $accept  */
  YYSYMBOL_ast = 131,                      /* ast  */
  YYSYMBOL_section_list = 132,             /* section_list  */
  YYSYMBOL_section = 133,                  /* section  */
  YYSYMBOL_class_flag = 134,               /* class_flag  */
  YYSYMBOL_class_def = 135,                /* class_def  */
  YYSYMBOL_class_body = 136,               /* class_body  */
  YYSYMBOL_trait_def = 137,                /* trait_def  */
  YYSYMBOL_number = 138,                   /* number  */
  YYSYMBOL_decimal = 139,                  /* decimal  */
  YYSYMBOL_prim_def = 140,                 /* prim_def  */
  YYSYMBOL_extends = 141,                  /* extends  */
  YYSYMBOL_traits = 142,                   /* traits  */
  YYSYMBOL_extend_def = 143,               /* extend_def  */
  YYSYMBOL_taglist = 144,                  /* taglist  */
  YYSYMBOL_taglist2 = 145,                 /* taglist2  */
  YYSYMBOL_specialized = 146,              /* specialized  */
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
  YYSYMBOL_arg = 158,                      /* arg  */
  YYSYMBOL_arg_list = 159,                 /* arg_list  */
  YYSYMBOL_locale_arg = 160,               /* locale_arg  */
  YYSYMBOL_locale_list = 161,              /* locale_list  */
  YYSYMBOL_code_stmt = 162,                /* code_stmt  */
  YYSYMBOL_code_list = 163,                /* code_list  */
  YYSYMBOL_stmt_pp = 164,                  /* stmt_pp  */
  YYSYMBOL_stmt = 165,                     /* stmt  */
  YYSYMBOL_spread_stmt = 166,              /* spread_stmt  */
  YYSYMBOL_167_1 = 167,                    /* $@1  */
  YYSYMBOL_using_stmt = 168,               /* using_stmt  */
  YYSYMBOL_import_item = 169,              /* import_item  */
  YYSYMBOL_import_list = 170,              /* import_list  */
  YYSYMBOL_import_stmt = 171,              /* import_stmt  */
  YYSYMBOL_require_stmt = 172,             /* require_stmt  */
  YYSYMBOL_retry_stmt = 173,               /* retry_stmt  */
  YYSYMBOL_handler = 174,                  /* handler  */
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
  YYSYMBOL_decl_template = 204,            /* decl_template  */
  YYSYMBOL_export = 205,                   /* export  */
  YYSYMBOL_opt_export = 206,               /* opt_export  */
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
  YYSYMBOL_222_2 = 222,                    /* $@2  */
  YYSYMBOL_option = 223,                   /* option  */
  YYSYMBOL_type_decl_opt = 224,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 225,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 226,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 227,          /* type_decl_flag2  */
  YYSYMBOL_variable = 228,                 /* variable  */
  YYSYMBOL_variable_list = 229,            /* variable_list  */
  YYSYMBOL_union_def = 230,                /* union_def  */
  YYSYMBOL_var_decl = 231,                 /* var_decl  */
  YYSYMBOL_arg_decl = 232,                 /* arg_decl  */
  YYSYMBOL_eq_op = 233,                    /* eq_op  */
  YYSYMBOL_rel_op = 234,                   /* rel_op  */
  YYSYMBOL_shift_op = 235,                 /* shift_op  */
  YYSYMBOL_add_op = 236,                   /* add_op  */
  YYSYMBOL_mul_op = 237,                   /* mul_op  */
  YYSYMBOL_opt_exp = 238,                  /* opt_exp  */
  YYSYMBOL_con_exp = 239,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 240,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 241,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 242,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 243,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 244,                  /* and_exp  */
  YYSYMBOL_eq_exp = 245,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 246,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 247,                /* shift_exp  */
  YYSYMBOL_add_exp = 248,                  /* add_exp  */
  YYSYMBOL_mul_exp = 249,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 250,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 251,                 /* cast_exp  */
  YYSYMBOL_unary_op = 252,                 /* unary_op  */
  YYSYMBOL_unary_exp = 253,                /* unary_exp  */
  YYSYMBOL_lambda_list = 254,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 255,               /* lambda_arg  */
  YYSYMBOL_tmplarg_exp = 256,              /* tmplarg_exp  */
  YYSYMBOL_tmplarg = 257,                  /* tmplarg  */
  YYSYMBOL_tmplarg_list = 258,             /* tmplarg_list  */
  YYSYMBOL_arg_exps = 259,                 /* arg_exps  */
  YYSYMBOL_call_paren = 260,               /* call_paren  */
  YYSYMBOL_post_op = 261,                  /* post_op  */
  YYSYMBOL_exp_error = 262,                /* exp_error  */
  YYSYMBOL_dot_exp = 263,                  /* dot_exp  */
  YYSYMBOL_post_exp = 264,                 /* post_exp  */
  YYSYMBOL_interp_exp = 265,               /* interp_exp  */
  YYSYMBOL_interp = 266,                   /* interp  */
  YYSYMBOL_capture = 267,                  /* capture  */
  YYSYMBOL_capture_list = 268,             /* capture_list  */
  YYSYMBOL_captures = 269,                 /* captures  */
  YYSYMBOL_array_lit_ed = 270,             /* array_lit_ed  */
  YYSYMBOL_basic_exp = 271,                /* basic_exp  */
  YYSYMBOL_prim_exp = 272                  /* prim_exp  */
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
#define YYFINAL  239
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  378
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  674

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   384


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
     125,   126,   127,   128,   129
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   206,   206,   207,   210,   211,   212,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   227,   229,   236,
     245,   246,   246,   246,   247,   248,   254,   261,   268,   272,
     272,   273,   273,   275,   279,   280,   283,   284,   286,   292,
     299,   300,   302,   303,   305,   308,   308,   309,   309,   311,
     314,   320,   320,   321,   321,   322,   331,   331,   334,   337,
     341,   344,   350,   362,   367,   367,   381,   383,   385,   390,
     391,   392,   393,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   409,   410,   414,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   436,
     443,   443,   452,   455,   459,   464,   468,   473,   481,   485,
     490,   493,   498,   503,   505,   506,   510,   514,   517,   517,
     518,   518,   521,   522,   526,   527,   528,   531,   536,   536,
     539,   548,   549,   551,   560,   569,   570,   574,   581,   589,
     597,   606,   615,   625,   632,   641,   648,   655,   664,   664,
     666,   667,   668,   669,   672,   673,   676,   677,   687,   688,
     689,   690,   691,   693,   693,   695,   695,   695,   695,   695,
     698,   699,   702,   706,   707,   708,   712,   713,   716,   717,
     718,   722,   722,   723,   724,   725,   730,   735,   735,   738,
     739,   743,   747,   749,   750,   750,   752,   752,   754,   755,
     758,   759,   760,   761,   764,   764,   766,   766,   769,   773,
     778,   784,   792,   801,   801,   801,   801,   801,   803,   811,
     818,   826,   832,   832,   834,   836,   838,   841,   841,   841,
     842,   847,   852,   859,   860,   871,   875,   876,   880,   881,
     881,   884,   884,   884,   885,   886,   886,   889,   890,   892,
     892,   895,   899,   900,   901,   902,   905,   914,   916,   917,
     921,   921,   922,   922,   922,   922,   923,   923,   924,   924,
     925,   925,   925,   927,   927,   928,   929,   931,   933,   936,
     936,   937,   937,   938,   938,   939,   939,   940,   940,   941,
     941,   942,   942,   943,   943,   944,   944,   945,   945,   946,
     946,   948,   948,   951,   951,   951,   952,   952,   955,   956,
     957,   958,   959,   962,   963,   964,   965,   966,   967,   970,
     973,   978,   978,   980,   980,   981,   984,   988,   989,   992,
     993,   999,  1007,  1008,  1009,  1017,  1021,  1028,  1028,  1031,
    1038,  1047,  1051,  1052,  1054,  1056,  1059,  1061,  1065,  1066,
    1067,  1069,  1070,  1081,  1081,  1083,  1084,  1085,  1085,  1086,
    1086,  1089,  1093,  1094,  1095,  1098,  1099,  1100,  1101,  1105,
    1106,  1107,  1108,  1109,  1115,  1116,  1117,  1118,  1119
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
  "class", "struct", "trait", "static", "private", "protect", "abstract",
  "final", "extends", ".", "HELPER", "operator", "primitive", "typedef",
  "distinct", "funptr", "NOELSE", "union", "const", "...", "defer", "\\",
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "using",
  "import", "require", "export", "=", "INTEGER", "<integer>", "<float>",
  "<litteral string>", "<litteral char>", "${", "INTERP_EXP", "#define",
  "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if", "\n", "}...",
  "<interp string lit>", "<interp string end>", "@<operator id>",
  "<identifier>", "+", "++", "-", "--", "*", "/", "%", "$", "?", "OPTIONS",
  ":", "::", "?:", "new", "spork", "fork", "<<<", ">>>", "&&", "==", ">=",
  ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^", "||", ":[", "~", "!",
  "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY", "UMINUS", "UTIMES",
  "SECTION_LIST", "STMT_LIST3", "STMT_LIST2", "STMT_LIST1", "$accept",
  "ast", "section_list", "section", "class_flag", "class_def",
  "class_body", "trait_def", "number", "decimal", "prim_def", "extends",
  "traits", "extend_def", "taglist", "taglist2", "specialized",
  "specialized_list", "stmt_list", "fptr_base", "_func_effects",
  "func_effects", "func_base", "fptr_def", "typedef_when", "type_def_type",
  "type_def", "type_decl_array", "arg", "arg_list", "locale_arg",
  "locale_list", "code_stmt", "code_list", "stmt_pp", "stmt",
  "spread_stmt", "$@1", "using_stmt", "import_item", "import_list",
  "import_stmt", "require_stmt", "retry_stmt", "handler", "handler_list",
  "try_stmt", "opt_id", "opt_comma", "enum_value", "enum_list", "enum_def",
  "when_exp", "match_case_stmt", "match_list", "match_stmt", "flow",
  "loop_stmt", "defer_stmt", "selection_stmt", "breaks", "jump_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "dict_list", "range", "array", "decl_exp", "func_args",
  "decl_template", "export", "opt_export", "storage_flag", "access_flag",
  "flag", "final", "modifier", "func_def_base", "abstract_fdef", "op_op",
  "op_base", "operator", "op_def", "func_def", "type_decl_base",
  "type_decl_tmpl", "type_decl_noflag", "$@2", "option", "type_decl_opt",
  "type_decl", "type_decl_flag", "type_decl_flag2", "variable",
  "variable_list", "union_def", "var_decl", "arg_decl", "eq_op", "rel_op",
  "shift_op", "add_op", "mul_op", "opt_exp", "con_exp", "log_or_exp",
  "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp",
  "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp", "cast_exp",
  "unary_op", "unary_exp", "lambda_list", "lambda_arg", "tmplarg_exp",
  "tmplarg", "tmplarg_list", "arg_exps", "call_paren", "post_op",
  "exp_error", "dot_exp", "post_exp", "interp_exp", "interp", "capture",
  "capture_list", "captures", "array_lit_ed", "basic_exp", "prim_exp", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-473)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-271)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1349,  -473,  2053,  2287,  1459,   247,  -473,    82,  -473,  1676,
    -473,   102,   142,   181,  2660,   247,  1864,  -473,  -473,  1676,
       5,   201,   247,   247,   153,   207,   153,   247,  -473,  -473,
     247,   247,  -473,   134,  1676,   143,    28,   187,  -473,   299,
     218,   228,  -473,  -473,  -473,  -473,  2171,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,   254,  -473,  -473,  -473,  -473,
     207,   207,  2819,  2819,  2660,  -473,  -473,  -473,   324,  1349,
     668,  -473,  -473,  -473,  -473,   256,  -473,  1783,  -473,   247,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,   328,  -473,  -473,  -473,    58,  -473,  -473,   334,
      74,  -473,  -473,  -473,  -473,   257,  -473,  -473,  -473,   247,
    -473,  -473,   140,   239,   241,   249,   253,    73,   317,   120,
     113,   282,   263,   276,  2917,  -473,   286,  -473,   390,  -473,
     118,   322,  -473,  -473,  -473,  2660,  -473,   389,   409,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,   411,  -473,   423,  -473,  -473,  -473,  -473,   305,
    2660,   335,   319,  -473,  1121,    70,   219,  -473,  -473,  -473,
    -473,   402,  -473,  -473,    93,   309,  2660,   197,  2703,  1907,
      15,   422,   350,  -473,   437,   414,  -473,  -473,  -473,   356,
     346,   358,  -473,   363,  -473,   247,  -473,    52,  -473,   339,
     415,   245,  -473,   452,   213,  -473,   376,   402,   207,   379,
     370,  -473,  -473,   383,   464,   387,  2660,   377,   471,    48,
    -473,    63,  2171,  -473,   403,  -473,  2660,  -473,   472,  1569,
    -473,    41,  -473,  -473,   466,  -473,  -473,   466,   375,  -473,
    -473,  -473,   394,  -473,   207,  2660,  -473,  -473,   477,  -473,
    -473,  -473,  2660,  2776,  2776,  2776,   331,   402,  2998,   261,
     207,   207,  2874,  2917,  2917,  2917,  2917,  2917,  2917,  -473,
    -473,  2917,  2917,  2917,  -473,  2917,  -473,  2917,  2917,   207,
    -473,   473,  -473,  2214,    54,   749,   472,  -473,   475,  -473,
    -473,  -473,  2171,   332,  -473,  -473,   399,   478,  2330,  -473,
    -473,  -473,  -473,  -473,  2660,  2660,  -473,    96,   267,  -473,
     207,  -473,   207,   479,  2660,    64,   481,  1907,   485,   486,
     404,   396,   470,   484,  -473,     5,  -473,   414,   381,   455,
    -473,  -473,   381,   408,   207,   339,  -473,  -473,  -473,  -473,
    -473,  2403,  -473,  -473,   433,   469,   421,   381,   394,  -473,
     205,   502,  -473,   451,    49,  -473,  -473,   424,  -473,   426,
    -473,  2171,   101,   771,   277,  -473,  -473,  1231,  -473,  -473,
      20,  1569,  -473,  -473,  -473,  -473,   354,   427,   508,  -473,
    -473,  -473,  -473,  -473,   402,   512,   272,   402,   381,   381,
    -473,  -473,   381,    90,  2917,   428,  -473,   239,   241,   249,
     253,    73,   317,   120,   113,   282,   263,   276,  -473,  1569,
    -473,  -473,    57,  -473,  -473,  -473,  -473,  -473,  -473,   127,
     322,  -473,  -473,  2446,  -473,  -473,  -473,  -473,   509,   101,
     342,  -473,   440,  -473,   283,  -473,  -473,   441,   442,  1676,
     525,  2660,  1676,  2544,    41,  -473,  2660,  2660,  -473,    99,
     323,  1676,  -473,    29,   489,  -473,   408,   394,   311,   381,
    -473,   213,   524,   530,   449,   453,   533,   381,   527,    69,
    -473,   535,   538,   205,  -473,   542,   543,    53,   445,  -473,
     401,  -473,  -473,  -473,  -473,  -473,   101,  -473,  1980,  -473,
     536,  -473,  -473,  -473,  -473,   480,   381,  1676,   546,  -473,
    -473,  -473,  -473,   549,   551,   555,  -473,  -473,  -473,   482,
    -473,  2917,    72,   556,   749,  -473,  -473,  -473,  2660,  -473,
     468,   207,  -473,   381,   381,   547,  -473,   562,  -473,  1676,
     563,   474,   565,   552,   548,  -473,   483,  -473,  -473,   570,
    -473,   207,   567,   408,  -473,    85,   408,   311,   573,  -473,
     891,  -473,   402,  -473,  -473,  -473,  -473,  -473,  -473,   550,
    -473,   207,   466,   572,  -473,  -473,   450,  -473,   424,  2660,
     101,  -473,  -473,   557,  -473,  -473,   207,   207,   207,  -473,
    -473,  -473,  2587,  -473,  -473,   101,  2660,  -473,   402,  -473,
    1676,  1676,  -473,  1676,  2660,  1676,  2660,   487,  1676,   433,
     495,   571,   501,  -473,  -473,    47,  -473,   580,   311,  -473,
     585,  -473,  1011,   469,   594,   515,  -473,  -473,  2989,   520,
    -473,  -473,   466,   407,   410,  -473,   101,  2660,   600,   601,
     598,   603,  -473,   101,   610,  -473,  -473,  -473,   608,  -473,
    -473,  1676,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,   604,  -473,   611,  -473,   613,  -473,  -473,  -473,  -473,
    -473,  -473,   207,  -473,  -473,  -473,  1676,  1676,  -473,  -473,
    -473,   615,  -473,  -473
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   155,     0,   274,     0,   203,   249,     0,   135,     0,
     136,     0,     0,     0,     0,   203,     0,   148,   149,     0,
     119,     0,   203,   203,   195,     0,   222,   203,    53,    54,
     203,   203,   248,     0,     0,   322,     0,     0,   247,     0,
       0,     0,    26,   362,   363,   364,     0,    73,    74,    75,
      76,    77,    78,    79,    80,   365,   337,   303,   338,   304,
       0,     0,     0,     0,     0,   307,   306,   373,     0,     2,
       0,     9,    10,   361,    16,     0,    11,     7,    14,   203,
      15,    87,    90,    42,    94,    95,    96,    97,    93,    92,
      12,    88,     0,    85,    91,    86,     0,    89,    82,     0,
     156,   370,   158,   227,   228,     0,   229,     8,   250,   203,
      13,   183,   275,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,     0,   301,   358,   305,    83,   347,
     308,   367,   366,   342,   378,     0,   268,   303,   304,   271,
     272,   169,   165,   265,   263,   264,   262,   166,   266,   267,
     167,   168,     0,   213,     0,   215,   214,   217,   216,   308,
       0,   273,     0,    66,     0,   156,     0,   196,   198,   199,
     193,     0,   197,   201,   200,   205,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,   118,   377,   113,     0,
     205,     0,   194,     0,   235,   203,   233,     0,    29,   164,
     238,   243,   245,    57,     0,   223,     0,     0,     0,     0,
       0,   145,   319,   321,     0,     0,   274,   233,     0,     0,
      36,     0,     0,   348,     0,   351,     0,   318,   313,     0,
     365,     0,   314,   310,     0,   315,   311,     0,     0,     1,
       6,     5,     0,    43,     0,     0,   153,    27,     0,    98,
      84,   154,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
     261,     0,     0,     0,   269,     0,   270,     0,     0,     0,
     309,     0,    99,     0,     0,     0,     0,   181,   182,   344,
     343,   346,     0,     0,   372,   376,     0,     0,     0,   360,
     359,   368,    68,    67,     0,     0,   369,     0,     0,   202,
       0,   204,     0,     0,     0,   365,     0,     0,     0,   353,
       0,     0,     0,     0,   150,   119,   115,   117,   192,   205,
     207,    17,   192,    31,     0,   164,   236,   239,   241,   242,
     244,     0,    56,   246,     0,    47,     0,   192,     0,   320,
       0,     0,   273,     0,     0,   102,   110,     0,   112,     0,
     349,     0,   159,     0,     0,   312,    69,     0,   353,   355,
       0,     0,   316,   317,   371,    34,     0,     0,     0,   152,
     157,   162,   160,   161,     0,     0,     0,     0,   192,   192,
     225,   224,   192,     0,     0,     0,   278,   280,   282,   284,
     286,   288,   290,   292,   294,   296,   298,   300,   302,     0,
     374,   173,     0,   339,   340,   341,   325,   326,   327,     0,
     324,   323,   345,     0,   175,   352,   180,   179,     0,   176,
       0,   188,   259,    60,     0,   209,   208,     0,     0,     0,
       0,     0,     0,     0,     0,   354,     0,     0,   131,     0,
       0,     0,   116,     0,    30,   206,    31,     0,     0,   192,
     237,     0,     0,     0,     0,    48,     0,   192,     0,     0,
      62,    64,     0,     0,    81,   365,   347,   164,   105,   108,
       0,    37,   350,   336,   335,   333,   329,   334,     0,   332,
      72,    70,   357,   356,    33,     0,   192,     0,     0,   226,
     231,   230,   221,     0,     0,     0,   186,   257,   184,     0,
     277,     0,   156,   170,     0,   163,   174,   178,     0,   258,
      59,     0,   187,   192,   192,   146,   138,     0,   143,     0,
       0,     0,     0,   129,   134,   132,   122,   126,   124,   121,
     114,     0,     0,    31,    40,     0,    31,     0,    32,    22,
       0,    25,     0,   240,    28,    45,    46,    50,    44,     0,
     100,     0,     0,     0,   104,   103,     0,   111,     0,     0,
     330,    71,    35,    51,   137,   232,     0,     0,     0,   185,
     276,   375,     0,   171,   328,   177,     0,    61,     0,    49,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,   191,    38,     0,   189,     0,     0,    19,
       0,    21,     0,    47,   233,     0,   253,   254,     0,     0,
      63,   211,     0,   365,   347,   109,   331,     0,     0,     0,
       0,     0,   172,    58,     0,   147,   144,   140,     0,   141,
     128,     0,   133,   123,   125,   127,    39,    41,   190,    18,
      23,     0,    20,     0,   251,     0,   256,   255,   101,   210,
      52,    55,     0,   219,   220,   212,     0,   130,    24,   234,
     252,     0,   142,   218
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -473,  -473,    81,   -59,   122,  -473,  -472,  -473,   -91,   275,
    -473,   168,  -384,  -473,  -305,  -473,    27,  -473,    -3,  -473,
    -473,    21,  -473,  -473,  -473,  -473,  -473,   -11,  -282,  -473,
    -473,   160,  -473,   -61,  -438,    -6,  -473,  -473,  -473,    68,
    -473,  -473,  -473,  -473,   310,  -473,  -473,   314,  -473,    40,
    -473,  -473,  -473,   193,  -473,  -473,   467,  -473,  -473,  -473,
    -473,  -473,  -140,    24,    25,  -153,  -473,  -258,  -473,  -473,
    -114,   443,   124,  -199,  -280,   237,  -473,   476,  -473,    32,
    -155,  -473,  -473,  -473,   391,   392,  -473,  -473,  -473,   448,
    -473,   186,  -473,  -473,   454,   614,   -19,  -473,    34,  -473,
    -473,   145,  -473,  -473,  -100,   -98,   -96,   -99,   439,  -231,
    -473,   393,   397,   398,   405,   388,   406,   419,   386,   395,
     416,   429,   -88,    22,  -473,  -473,  -473,   151,  -473,  -473,
    -238,  -115,  -473,  -318,     0,  -189,  -278,  -220,  -473,     1,
    -473,  -262,  -473
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    68,    69,    70,   189,    71,   551,    72,    73,   248,
      74,    75,   458,    76,   376,   221,   544,   545,    77,   207,
     465,   466,   171,    78,   628,    79,    80,   432,   470,   434,
     471,   472,    81,   232,    82,    83,    84,   619,    85,   479,
     480,    86,    87,    88,   326,   327,    89,   187,   601,   538,
     539,    90,   597,   448,   449,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   286,   153,   287,   288,   166,
     101,   290,   102,   308,   454,   172,   193,   173,   174,   190,
     312,   331,   103,   104,   154,   259,   105,   106,   107,   199,
     200,   201,   461,   340,   202,   203,   108,   109,   617,   618,
     110,   508,   520,   271,   155,   156,   157,   158,   162,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   213,   126,   417,   418,   419,   364,
     365,   127,   128,   129,   159,   225,   131,   321,   370,   234,
     301,   132,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     130,   164,   235,   177,   130,   247,   204,   420,   345,   130,
     240,   369,   537,   185,   198,   291,   289,   260,   272,   130,
     204,   273,   277,   421,   275,   433,   152,   161,   211,   165,
     424,   395,   396,   360,   130,   330,   476,   175,   181,   317,
     184,   204,   204,   469,   291,   289,   336,   182,   422,   227,
     228,   356,   456,   194,     2,   413,     3,   195,   386,   135,
     283,   246,   208,   209,   237,   513,   358,   468,   441,   130,
     224,   243,   547,   495,   252,   609,   252,   130,   252,   560,
      20,   541,   542,   581,   233,   236,   204,   176,   238,   605,
     186,   506,   170,   606,   258,   363,   296,   194,   414,   541,
     319,   195,   431,   425,    35,   368,   359,   178,   503,   504,
     534,   244,   505,   214,   543,    42,   492,    43,    44,    45,
      46,   616,   447,  -164,    42,   283,   368,   281,   320,   226,
     167,   514,   543,   320,   475,   515,   649,   196,   607,   415,
      56,   261,    58,   389,   357,   191,   280,   179,    32,   206,
     493,    64,   548,   298,   320,   509,    38,   170,   243,   604,
     293,   284,   608,   510,   130,   253,   304,   253,   260,   253,
     285,    67,   482,   372,   455,   507,   373,   443,   269,   552,
     616,   196,   460,   270,   297,   498,   180,   558,   502,   204,
     254,   255,   254,   255,   254,   255,   253,   346,   391,   136,
     313,   274,   316,   318,   188,    56,   194,    58,   194,   197,
     195,   -65,   195,     8,   194,    10,   573,   170,   195,   210,
     410,   254,   255,   305,   531,   204,   367,   334,   212,   130,
     306,   148,   149,   377,   262,   285,   420,   204,   263,   587,
     352,   204,   204,   588,   589,   258,   224,   436,   624,   392,
     393,   362,   421,   247,   165,   583,   264,    32,   194,    32,
     204,   192,   195,   205,   390,    38,   204,    38,   408,   378,
     435,   371,   216,   215,   416,   500,   380,   371,   487,   620,
     580,   488,   371,   489,   167,   168,   169,   521,   204,   522,
     196,   204,   196,   204,   629,   630,   631,   256,   196,   437,
     194,   438,   272,   219,   195,   273,   277,   412,   275,    32,
    -164,   170,   283,   220,   549,   204,   224,    38,   197,   226,
     197,   550,   428,   459,   239,   501,   197,   299,   300,   429,
     430,   204,   194,   245,   249,   250,   195,   251,   440,   338,
     339,   318,   196,   265,    56,    57,    58,    59,   296,   310,
     311,    32,   242,   613,   477,   266,   257,   494,   495,    38,
     278,   243,   291,   289,   267,   462,   268,   130,   367,   279,
     197,   130,   276,   139,   140,    65,    66,   381,   382,   383,
     671,    37,   231,    32,   217,   224,   329,   311,   486,   634,
     282,    38,    56,   292,    58,  -269,    47,    48,    49,    50,
      51,    52,    53,    54,   567,   568,   367,   307,   536,   130,
    -107,  -107,   197,  -106,  -106,  -270,   196,   294,    56,    57,
      58,    59,   285,   143,   144,   145,   146,   253,   304,   295,
     384,   298,   322,   525,   512,   323,   528,   253,   518,   130,
     324,   328,   130,   332,   197,   540,   325,   462,   333,    65,
      66,   130,   254,   255,   204,     2,   285,     3,   337,   341,
     135,   344,   254,   255,   347,   527,   348,   530,   349,   350,
     532,   533,   351,   354,   355,   361,   371,   363,   374,   375,
     379,    20,   423,   409,   415,   439,   426,   442,   251,   445,
     444,   574,   446,   447,   450,   204,   311,   130,   453,    42,
     464,   621,   204,   416,   457,    35,   467,   473,   643,   478,
     474,   481,   496,   570,   497,   499,    42,   517,    43,    44,
      45,    46,   204,   592,   511,   519,   523,   524,   526,   130,
     602,    25,   513,   554,   555,   623,   557,   559,   556,   561,
     204,   566,   204,   585,   562,   564,   565,   571,   615,   575,
     130,   194,    64,   240,   576,   195,   577,   204,   204,   204,
     578,   659,   590,   582,   586,   572,   477,   507,   591,   593,
     594,   595,    67,   598,   600,   603,   596,   495,   622,   599,
     536,   627,   645,   641,   635,   636,   646,   637,   648,   639,
     130,   130,   642,   130,   626,   130,   650,   654,   130,   204,
     655,   658,    32,   661,   663,   662,   462,   615,    37,   664,
      38,   633,   130,   665,   666,   668,   670,   669,   638,   463,
     640,   673,   546,    47,    48,    49,    50,    51,    52,    53,
      54,   612,   647,   563,   653,   614,   625,   452,   667,   451,
     644,   130,   535,   204,   314,   335,   342,   553,   385,   388,
     309,   660,   657,   218,   579,   353,   401,   397,   343,   404,
     672,   243,   398,   197,   399,   584,   130,   130,    -4,   241,
     405,    -4,   400,    -4,     0,    -4,     0,   402,    -4,    -4,
      -4,    -4,    -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,   403,     0,   406,    -4,    -4,    -4,    -4,    -4,    -4,
       0,    -4,    -4,    -4,    -4,     0,     0,   407,     0,     0,
      -4,     0,     0,    -4,    -4,    -4,    -4,    -4,     0,    -4,
      -4,    -4,    -4,    -4,     0,    -4,    -4,     0,    -4,    -4,
      -4,    -4,     0,     0,    -4,     0,    -4,    -4,    -4,    -4,
       0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,
     194,     0,     0,    -4,   195,    -4,    -4,    -4,    -4,     0,
       0,    -4,     0,     0,    -4,     0,     0,    -4,    -4,    -4,
      -4,   483,   484,     0,     0,     0,     2,   485,     3,     0,
       0,   135,     0,     0,     6,     0,    -4,    -4,     0,     0,
      -4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    20,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,     0,     0,    32,     0,     0,    35,     0,     0,     0,
       0,    38,     0,     0,   196,     0,     0,    42,     0,    43,
      44,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,   197,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,   610,    67,     1,     0,     2,     0,     3,     0,
       0,     4,   611,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,    25,     0,     0,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,    40,    41,     0,     0,    42,     0,    43,
      44,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   -30,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,   651,    67,     1,     0,     2,     0,     3,     0,
       0,     4,   652,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,     0,     0,
       0,     0,     0,    25,     0,     0,    26,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,    36,    37,
       0,    38,    39,    40,    41,     0,     0,    42,     0,    43,
      44,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,   -30,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,   302,     0,     1,     0,     2,     0,     3,    65,
      66,     4,   303,    67,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,    40,    41,     0,     0,    42,     0,    43,
      44,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,   490,     0,     1,     0,     2,     0,     3,    65,
      66,     4,   491,    67,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,     0,     0,    37,
       0,    38,    39,    40,    41,     0,     0,    42,     0,    43,
      44,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     1,    67,     2,     0,     3,     0,     0,     4,
       0,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,    25,     0,     0,    26,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,     0,    36,    37,     0,    38,
      39,    40,    41,     0,     0,    42,     0,    43,    44,    45,
      46,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,   -30,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     163,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,    40,    41,     0,     0,    42,     0,    43,    44,    45,
      46,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    65,    66,     4,
     366,    67,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,    40,    41,     0,     0,    42,     0,    43,    44,    45,
      46,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,    56,    57,    58,    59,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,     0,     0,     4,    65,    66,     6,
       7,    67,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,    40,    41,
       0,     0,    42,     0,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     0,     4,    65,    66,     6,     7,    67,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
      16,    17,    18,    19,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,     0,
       0,    37,     0,    38,    39,    40,    41,     0,     0,    42,
       0,    43,    44,    45,    46,     0,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,   183,    55,     2,
      56,     3,    58,     0,   135,     0,    60,     6,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,    32,   135,     0,    35,
       6,     0,     0,     0,    38,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,    32,
       0,     0,    35,    61,    62,    63,    64,    38,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,     0,
       0,     0,    65,    66,   569,     2,    67,     3,     0,     0,
     135,     0,    55,     6,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,     0,    32,     0,     0,    35,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     2,   134,
       3,     0,     0,   135,     0,    55,     6,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,     0,     0,    32,     0,     0,    35,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,   136,
      56,   137,    58,   138,   139,   140,    60,     0,   141,     0,
       0,     0,    61,    62,    63,    64,     0,     0,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,    65,    66,   150,   151,    67,     2,     0,     3,     0,
       0,   135,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   411,    32,   135,     0,    35,     6,     0,     0,
       0,    38,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,   222,   223,     0,    55,     0,    56,    57,
      58,    59,     0,     0,    60,     0,    32,     0,     0,    35,
      61,    62,    63,    64,    38,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,     0,     0,     0,    65,
      66,     0,     2,    67,     3,     0,     0,   135,     0,    55,
       6,    56,    57,    58,    59,     0,     0,    60,     0,     0,
     160,     0,     0,    61,    62,    63,    64,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     2,    67,     3,   427,    32,
     135,     0,    35,     6,     0,     0,     0,    38,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,    59,     0,     0,
      60,     0,    32,   160,     0,    35,    61,    62,    63,    64,
      38,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,     0,     0,     0,    65,    66,     0,     2,    67,
       3,   411,     0,   135,     0,    55,     6,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     2,    67,     3,   516,    32,   135,     0,    35,     6,
       0,     0,     0,    38,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,    59,     0,     0,    60,     0,    32,     0,
       0,    35,    61,    62,    63,    64,    38,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,     0,     0,
       0,    65,    66,     0,     0,    67,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     2,
     529,     3,     0,     0,   135,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,   632,    32,   135,     0,    35,
       6,     0,     0,     0,    38,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,    59,     0,     0,    60,     0,    32,
       0,     0,    35,    61,    62,    63,    64,    38,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,     0,
       0,     0,    65,    66,     0,     2,    67,     3,     0,     0,
     135,     0,    55,     6,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     2,    67,
       3,     0,    32,   135,     0,    35,     6,     0,     0,     0,
      38,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
      59,     0,     0,    60,     0,    32,     0,     0,    35,    61,
      62,    63,    64,    38,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,     0,     0,     0,    65,    66,
       0,     2,    67,     3,     0,     0,   135,     0,   315,     6,
      56,    57,    58,    59,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     2,    67,     3,     0,    32,   229,
       0,    35,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,    42,     0,    43,    44,    45,    46,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,    35,    61,    62,    63,    64,     2,
       0,     3,     0,     0,   135,    42,     0,    43,    44,    45,
      46,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,     0,     0,     0,   230,    20,    56,    57,    58,    59,
       0,     0,    60,     0,     0,   231,     0,     0,    61,    62,
      63,    64,     2,     0,     3,     0,     0,   135,     0,    35,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      42,    67,    43,    44,    45,    46,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,    56,    57,    58,    59,     0,     0,    60,     0,     0,
     394,     0,    35,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,     0,
     194,     0,    65,    66,   195,     0,    67,     0,     0,     0,
     656,     0,   230,     0,    56,    57,    58,    59,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,    67,
       0,    32,     0,     0,     0,     0,     0,    37,     0,    38,
       0,     0,     0,     0,   387,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,   614,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,    56,   274,    58,   276,   139,
     140,     0,     0,   141,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   142,   143,   144,   145,   146,   147,   148,
     149,     0,     0,     0,     0,     0,     0,     0,   150,   151
};

static const yytype_int16 yycheck[] =
{
       0,     4,    63,     9,     4,    96,    25,   285,   207,     9,
      69,   231,   450,    19,    25,   130,   130,   105,   118,    19,
      39,   119,   121,   285,   120,   307,     2,     3,    34,     4,
     288,   262,   263,   222,    34,   190,   354,     5,    14,   179,
      16,    60,    61,   348,   159,   159,   199,    15,   286,    60,
      61,     3,   332,     1,     5,     1,     7,     5,   257,    10,
       7,     3,    30,    31,    63,     8,     3,   347,     4,    69,
      46,    77,   456,     4,     4,   547,     4,    77,     4,    10,
      31,    52,    53,    11,    62,    63,   105,     5,    64,     4,
      85,     1,    64,     8,   105,     5,    43,     1,    44,    52,
      85,     5,     6,   292,    55,    85,    43,     5,   388,   389,
      11,    79,   392,    85,    85,    66,    96,    68,    69,    70,
      71,   559,    23,     5,    66,     7,    85,   126,   113,    65,
      37,     4,    85,   113,    85,     8,   608,    85,    53,    85,
      87,   109,    89,   258,    96,    23,   124,     5,    52,    27,
     370,   102,   457,    96,   113,   393,    60,    64,   164,   543,
     135,    43,   546,   394,   164,    95,    96,    95,   256,    95,
     117,   122,   361,   234,   329,    85,   237,   317,   105,   459,
     618,    85,   335,   110,   160,   384,     5,   467,   387,   208,
     120,   121,   120,   121,   120,   121,    95,   208,   259,    86,
     176,    88,   178,   179,     3,    87,     1,    89,     1,   113,
       5,     6,     5,    16,     1,    18,   496,    64,     5,    85,
     281,   120,   121,     4,   444,   244,   229,   195,    85,   229,
      11,   111,   112,   244,    94,   117,   514,   256,    98,   521,
     216,   260,   261,   523,   524,   256,   222,   308,   566,   260,
     261,   226,   514,   344,   229,   513,   116,    52,     1,    52,
     279,    24,     5,    26,     3,    60,   285,    60,   279,   245,
       3,    10,    85,    36,   285,     3,   252,    10,     1,   561,
     511,     4,    10,     6,    37,    38,    39,     4,   307,     6,
      85,   310,    85,   312,   576,   577,   578,    40,    85,   310,
       1,   312,   402,    85,     5,   403,   405,   283,   404,    52,
       5,    64,     7,    85,     3,   334,   292,    60,   113,    65,
     113,    10,   298,   334,     0,   386,   113,     8,     9,   304,
     305,   350,     1,     5,     0,     1,     5,     3,   314,    94,
      95,   317,    85,   104,    87,    88,    89,    90,    43,    40,
      41,    52,    96,   552,   354,   114,    99,     3,     4,    60,
      97,   367,   477,   477,   115,   341,   113,   367,   371,    93,
     113,   371,    90,    91,    92,   118,   119,   253,   254,   255,
     662,    58,    96,    52,    85,   361,    40,    41,   363,   588,
       0,    60,    87,    71,    89,     6,    73,    74,    75,    76,
      77,    78,    79,    80,     3,     4,   409,     5,    85,   409,
       3,     4,   113,     3,     4,     6,    85,     6,    87,    88,
      89,    90,   117,   106,   107,   108,   109,    95,    96,     6,
      99,    96,    10,   439,   409,    85,   442,    95,    96,   439,
       3,    85,   442,    85,   113,   451,    32,   423,    85,   118,
     119,   451,   120,   121,   473,     5,   117,     7,    43,     7,
      10,    85,   120,   121,    85,   441,    96,   443,    85,     5,
     446,   447,    85,    96,     3,    72,    10,     5,   103,    85,
       3,    31,     7,    10,    85,     6,     8,     6,     3,    85,
       4,   497,    96,    23,    10,   514,    41,   497,   117,    66,
      31,   562,   521,   514,    96,    55,    85,     5,   599,    85,
      59,    85,    85,   488,     6,     3,    66,     8,    68,    69,
      70,    71,   541,   529,    96,    85,    85,    85,     3,   529,
     541,    42,     8,     3,    85,    85,     3,    10,    85,     4,
     559,    96,   561,   518,     6,     3,     3,    11,   559,     3,
     550,     1,   102,   612,     5,     5,     5,   576,   577,   578,
       5,   622,    15,     7,    96,    85,   566,    85,     6,     6,
      96,     6,   122,    25,     4,     8,    24,     4,     6,    96,
      85,    24,    11,    96,   590,   591,    85,   593,     8,   595,
     590,   591,   598,   593,   569,   595,    11,     3,   598,   618,
      85,    81,    52,     3,     6,     4,   582,   618,    58,     6,
      60,   586,   612,     3,     6,    11,     3,     6,   594,   344,
     596,     6,   454,    73,    74,    75,    76,    77,    78,    79,
      80,   550,   605,   473,   613,    85,   568,   327,   641,   325,
     600,   641,   449,   662,   177,   197,   203,   461,   256,   258,
     174,   627,   618,    39,   509,   216,   268,   264,   204,   273,
     666,   667,   265,   113,   266,   514,   666,   667,     0,     1,
     275,     3,   267,     5,    -1,     7,    -1,   271,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,   272,    -1,   277,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,   278,    -1,    -1,
      42,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    -1,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
       1,    -1,    -1,    85,     5,    87,    88,    89,    90,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,   101,
     102,     0,     1,    -1,    -1,    -1,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,   118,   119,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    31,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    85,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,   113,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,     1,   122,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,     1,   122,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,    -1,     7,   118,
     119,    10,    11,   122,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,     5,    -1,     7,   118,
     119,    10,    11,   122,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     119,    -1,     3,   122,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    57,    58,    -1,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   118,   119,    10,
      11,   122,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   118,   119,    10,
      11,   122,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,    -1,    10,   118,   119,    13,
      14,   122,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,    -1,    10,   118,   119,    13,    14,   122,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,     3,    85,     5,
      87,     7,    89,    -1,    10,    -1,    93,    13,    -1,    -1,
      -1,    -1,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,    52,    10,    -1,    55,
      13,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    52,
      -1,    -1,    55,    99,   100,   101,   102,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    -1,   118,   119,     4,     5,   122,     7,    -1,    -1,
      10,    -1,    85,    13,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,    -1,    -1,    10,    -1,    85,    13,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
      -1,    -1,   122,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    -1,    99,   100,   101,   102,    -1,    -1,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
      -1,   118,   119,   120,   121,   122,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    52,    10,    -1,    55,    13,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    -1,    52,    -1,    -1,    55,
      99,   100,   101,   102,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    -1,   118,
     119,    -1,     5,   122,     7,    -1,    -1,    10,    -1,    85,
      13,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    99,   100,   101,   102,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   118,   119,    -1,     5,   122,     7,     8,    52,
      10,    -1,    55,    13,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    52,    96,    -1,    55,    99,   100,   101,   102,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,   118,   119,    -1,     5,   122,
       7,     8,    -1,    10,    -1,    85,    13,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
      -1,     5,   122,     7,     8,    52,    10,    -1,    55,    13,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    -1,    -1,    93,    -1,    52,    -1,
      -1,    55,    99,   100,   101,   102,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    -1,
      -1,   118,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    52,    10,    -1,    55,
      13,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    52,
      -1,    -1,    55,    99,   100,   101,   102,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    -1,   118,   119,    -1,     5,   122,     7,    -1,    -1,
      10,    -1,    85,    13,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,     5,   122,
       7,    -1,    52,    10,    -1,    55,    13,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    -1,    -1,    93,    -1,    52,    -1,    -1,    55,    99,
     100,   101,   102,    60,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    -1,    -1,   118,   119,
      -1,     5,   122,     7,    -1,    -1,    10,    -1,    85,    13,
      87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    99,   100,   101,   102,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,     5,   122,     7,    -1,    52,    10,
      -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    55,    99,   100,   101,   102,     5,
      -1,     7,    -1,    -1,    10,    66,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    85,    31,    87,    88,    89,    90,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
     101,   102,     5,    -1,     7,    -1,    -1,    10,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,
      66,   122,    68,    69,    70,    71,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    93,    -1,    -1,
      96,    -1,    55,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
       1,    -1,   118,   119,     5,    -1,   122,    -1,    -1,    -1,
      11,    -1,    85,    -1,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,   122,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    42,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    63,    66,    68,    69,    70,    71,    73,    74,    75,
      76,    77,    78,    79,    80,    85,    87,    88,    89,    90,
      93,    99,   100,   101,   102,   118,   119,   122,   131,   132,
     133,   135,   137,   138,   140,   141,   143,   148,   153,   155,
     156,   162,   164,   165,   166,   168,   171,   172,   173,   176,
     181,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   200,   202,   212,   213,   216,   217,   218,   226,   227,
     230,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   255,   261,   262,   263,
     264,   266,   271,   272,     6,    10,    86,    88,    90,    91,
      92,    95,   105,   106,   107,   108,   109,   110,   111,   112,
     120,   121,   193,   196,   214,   234,   235,   236,   237,   264,
      96,   193,   238,    11,   148,   194,   199,    37,    38,    39,
      64,   152,   205,   207,   208,   209,     5,   165,     5,     5,
       5,   193,   209,     3,   193,   165,    85,   177,     3,   134,
     209,   134,   205,   206,     1,     5,    85,   113,   157,   219,
     220,   221,   224,   225,   226,   205,   134,   149,   209,   209,
      85,   165,    85,   254,    85,   205,    85,    85,   225,    85,
      85,   145,    82,    83,   193,   265,    65,   157,   157,    10,
      85,    96,   163,   253,   269,   163,   253,   269,   193,     0,
     133,     1,    96,   165,   209,     5,     3,   138,   139,     0,
       1,     3,     4,    95,   120,   121,    40,    99,   157,   215,
     252,   209,    94,    98,   116,   104,   114,   115,   113,   105,
     110,   233,   234,   235,    88,   236,    90,   237,    97,    93,
     253,   269,     0,     7,    43,   117,   195,   197,   198,   200,
     201,   261,    71,   194,     6,     6,    43,   193,    96,     8,
       9,   270,     1,    11,    96,     4,    11,     5,   203,   207,
      40,    41,   210,   193,   186,    85,   193,   192,   193,    85,
     113,   267,    10,    85,     3,    32,   174,   175,    85,    40,
     210,   211,    85,    85,   209,   219,   195,    43,    94,    95,
     223,     7,   201,   224,    85,   203,   157,    85,    96,    85,
       5,    85,   193,   238,    96,     3,     3,    96,     3,    43,
     265,    72,   194,     5,   259,   260,    11,   148,    85,   267,
     268,    10,   163,   163,   103,    85,   144,   157,   193,     3,
     193,   202,   202,   202,    99,   215,   203,    56,   214,   261,
       3,   163,   157,   157,    96,   239,   239,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   157,    10,
     163,     8,   193,     1,    44,    85,   157,   256,   257,   258,
     266,   271,   260,     7,   197,   265,     8,     8,   193,   194,
     194,     6,   157,   158,   159,     3,   163,   157,   157,     6,
     193,     4,     6,   192,     4,    85,    96,    23,   183,   184,
      10,   177,   174,   117,   204,   210,   204,    96,   142,   157,
     195,   222,   193,   139,    31,   150,   151,    85,   204,   144,
     158,   160,   161,     5,    59,    85,   263,   264,    85,   169,
     170,    85,   265,     0,     1,     6,   194,     1,     4,     6,
       1,    11,    96,   267,     3,     4,    85,     6,   203,     3,
       3,   163,   203,   204,   204,   204,     1,    85,   231,   260,
     239,    96,   194,     8,     4,     8,     8,     8,    96,    85,
     232,     4,     6,    85,    85,   165,     3,   193,   165,     6,
     193,   267,   193,   193,    11,   183,    85,   164,   179,   180,
     165,    52,    53,    85,   146,   147,   141,   142,   144,     3,
      10,   136,   204,   221,     3,    85,    85,     3,   204,    10,
      10,     4,     6,   161,     3,     3,    96,     3,     4,     4,
     194,    11,    85,   204,   165,     3,     5,     5,     5,   231,
     239,    11,     7,   197,   257,   194,    96,   158,   204,   204,
      15,     6,   165,     6,    96,     6,    24,   182,    25,    96,
       4,   178,   157,     8,   142,     4,     8,    53,   142,   136,
       1,    11,   132,   203,    85,   157,   164,   228,   229,   167,
     158,   163,     6,    85,   263,   169,   194,    24,   154,   158,
     158,   158,     8,   194,   203,   165,   165,   165,   193,   165,
     193,    96,   165,   138,   179,    11,    85,   146,     8,   136,
      11,     1,    11,   151,     3,    85,    11,   228,    81,   163,
     193,     3,     4,     6,     6,     3,     6,   148,    11,     6,
       3,   158,   165,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   130,   131,   131,   132,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   135,   135,
     136,   136,   136,   136,   136,   137,   138,   139,   140,   141,
     141,   142,   142,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   150,   150,   151,   151,   152,
     153,   154,   154,   155,   155,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   162,   163,
     163,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     167,   166,   168,   168,   168,   169,   169,   169,   170,   170,
     171,   171,   172,   173,   174,   175,   175,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   181,   182,   182,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   189,   189,   190,   190,
     191,   191,   191,   191,   192,   192,   193,   193,   194,   194,
     194,   194,   194,   195,   195,   196,   196,   196,   196,   196,
     197,   197,   197,   198,   198,   198,   199,   199,   200,   200,
     200,   201,   201,   202,   202,   202,   202,   203,   203,   204,
     204,   204,   204,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   212,   213,   214,   214,   214,   214,   214,   215,   215,
     215,   215,   216,   216,   217,   217,   217,   218,   218,   218,
     218,   218,   218,   219,   219,   219,   220,   220,   221,   222,
     221,   223,   223,   223,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   228,   229,   229,   230,   231,   232,   232,
     233,   233,   234,   234,   234,   234,   235,   235,   236,   236,
     237,   237,   237,   238,   238,   239,   239,   239,   239,   240,
     240,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   249,   249,   250,
     250,   251,   251,   252,   252,   252,   252,   252,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   255,   255,   256,   256,   257,   257,   258,   258,   259,
     259,   259,   260,   260,   260,   260,   260,   261,   261,   262,
     262,   263,   264,   264,   264,   264,   264,   264,   265,   265,
     265,   266,   266,   267,   267,   268,   268,   269,   269,   270,
     270,   271,   271,   271,   271,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     7,     6,
       3,     2,     1,     3,     4,     5,     1,     1,     5,     2,
       0,     0,     2,     4,     1,     3,     1,     3,     2,     3,
       1,     3,     1,     2,     4,     2,     2,     0,     1,     5,
       5,     0,     2,     1,     1,     7,     2,     1,     4,     2,
       1,     3,     1,     3,     1,     0,     2,     3,     3,     2,
       3,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     7,     3,     5,     5,     1,     3,     3,     1,     3,
       3,     5,     3,     2,     3,     1,     2,     3,     1,     0,
       1,     0,     1,     3,     1,     3,     1,     7,     2,     0,
       5,     1,     2,     7,     5,     1,     1,     5,     5,     6,
       7,     7,     9,     5,     7,     2,     5,     7,     1,     1,
       3,     2,     3,     2,     2,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     0,     1,     1,     1,     1,     1,
       3,     4,     5,     2,     3,     2,     3,     5,     5,     4,
       4,     1,     1,     1,     4,     5,     4,     3,     2,     3,
       4,     3,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     2,     1,     4,     4,
       7,     6,     8,     1,     1,     1,     1,     1,     8,     6,
       6,     3,     1,     2,     3,     3,     4,     1,     1,     1,
       4,     4,     5,     1,     7,     1,     2,     3,     1,     0,
       4,     1,     1,     0,     2,     1,     2,     1,     1,     1,
       1,     2,     3,     1,     1,     2,     7,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     5,     4,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     2,     2,     2,     3,     3,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     4,     2,     2,     2,     2,     2,     1,     1,     3,
       3,     3,     1,     2,     2,     3,     2,     1,     1,     2,
       3,     2,     3,     1,     2,     1,     2,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     5,     3,     2,     2
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
#line 2713 "src/parser.c"
    break;

  case 3: /* ast: %empty  */
#line 207 "src/gwion.y"
           { (yyval.ast) = NULL; }
#line 2719 "src/parser.c"
    break;

  case 4: /* section_list: section  */
#line 210 "src/gwion.y"
            { LIST_INI(section, (yyval.ast), (yyvsp[0].section)); }
#line 2725 "src/parser.c"
    break;

  case 5: /* section_list: section error  */
#line 211 "src/gwion.y"
                  { LIST_INI(section, (yyval.ast), (yyvsp[-1].section)); }
#line 2731 "src/parser.c"
    break;

  case 6: /* section_list: section_list section  */
#line 212 "src/gwion.y"
                                            { LIST_END(section, (yyval.ast), (yyvsp[-1].ast), (yyvsp[0].section)); }
#line 2737 "src/parser.c"
    break;

  case 7: /* section: stmt_list  */
#line 215 "src/gwion.y"
                                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list), (yylsp[0]));}
#line 2743 "src/parser.c"
    break;

  case 8: /* section: func_def  */
#line 216 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def), (yylsp[0]));  }
#line 2749 "src/parser.c"
    break;

  case 9: /* section: class_def  */
#line 217 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def), (yylsp[0])); }
#line 2755 "src/parser.c"
    break;

  case 10: /* section: trait_def  */
#line 218 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def), (yylsp[0])); }
#line 2761 "src/parser.c"
    break;

  case 11: /* section: extend_def  */
#line 219 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def), (yylsp[0])); }
#line 2767 "src/parser.c"
    break;

  case 12: /* section: enum_def  */
#line 220 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def), (yylsp[0])); }
#line 2773 "src/parser.c"
    break;

  case 13: /* section: union_def  */
#line 221 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def), (yylsp[0])); }
#line 2779 "src/parser.c"
    break;

  case 14: /* section: fptr_def  */
#line 222 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def), (yylsp[0])); }
#line 2785 "src/parser.c"
    break;

  case 15: /* section: type_def  */
#line 223 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def), (yylsp[0])); }
#line 2791 "src/parser.c"
    break;

  case 16: /* section: prim_def  */
#line 224 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def), (yylsp[0])); }
#line 2797 "src/parser.c"
    break;

  case 17: /* class_flag: flag modifier  */
#line 227 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2803 "src/parser.c"
    break;

  case 18: /* class_def: "class" class_flag "<identifier>" decl_template extends traits class_body  */
#line 230 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-5].flag), MK_TAG((yyvsp[-4].sym), (yylsp[-4])), (yyvsp[-2].type_decl), (yyvsp[0].ast));
      if((yyvsp[-3].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-1].taglist);
    }
#line 2814 "src/parser.c"
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
#line 2826 "src/parser.c"
    break;

  case 20: /* class_body: "{" section_list "}"  */
#line 245 "src/gwion.y"
                                   { (yyval.ast) = (yyvsp[-1].ast); }
#line 2832 "src/parser.c"
    break;

  case 21: /* class_body: "{" "}"  */
#line 246 "src/gwion.y"
                     { (yyval.ast) = NULL; }
#line 2838 "src/parser.c"
    break;

  case 22: /* class_body: ";"  */
#line 246 "src/gwion.y"
                                          { (yyval.ast) = NULL; }
#line 2844 "src/parser.c"
    break;

  case 23: /* class_body: "{" error "}"  */
#line 246 "src/gwion.y"
                                                                         { (yyval.ast) = NULL; }
#line 2850 "src/parser.c"
    break;

  case 24: /* class_body: "{" section_list error "}"  */
#line 247 "src/gwion.y"
                                      { (yyval.ast) = (yyvsp[-2].ast); }
#line 2856 "src/parser.c"
    break;

  case 25: /* trait_def: "trait" opt_export "<identifier>" traits class_body  */
#line 249 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].taglist);
    }
#line 2865 "src/parser.c"
    break;

  case 26: /* number: INTEGER  */
#line 254 "src/gwion.y"
                {
  if((yyvsp[0].yyint).num < 0 || (yyvsp[0].yyint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type);
}
#line 2876 "src/parser.c"
    break;

  case 27: /* decimal: number  */
#line 261 "src/gwion.y"
                {
  if((yyvsp[0].gwint).int_type != gwint_decimal) {
    parser_error(&(yylsp[0]), arg, "only decimals accepted here", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2887 "src/parser.c"
    break;

  case 28: /* prim_def: "primitive" class_flag "<identifier>" decimal ";"  */
#line 269 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].gwint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2895 "src/parser.c"
    break;

  case 29: /* extends: "extends" type_decl_array  */
#line 272 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2901 "src/parser.c"
    break;

  case 30: /* extends: %empty  */
#line 272 "src/gwion.y"
                                                          { (yyval.type_decl) = NULL; }
#line 2907 "src/parser.c"
    break;

  case 31: /* traits: %empty  */
#line 273 "src/gwion.y"
               { (yyval.taglist) = NULL; }
#line 2913 "src/parser.c"
    break;

  case 32: /* traits: ":" taglist  */
#line 273 "src/gwion.y"
                                            { (yyval.taglist) = (yyvsp[0].taglist); }
#line 2919 "src/parser.c"
    break;

  case 33: /* extend_def: extends ":" taglist ";"  */
#line 275 "src/gwion.y"
                                    {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].taglist));
}
#line 2927 "src/parser.c"
    break;

  case 34: /* taglist: "<identifier>"  */
#line 279 "src/gwion.y"
                 { LIST_INI(tag, (yyval.taglist), MK_TAG((yyvsp[0].sym), (yylsp[0]))); }
#line 2933 "src/parser.c"
    break;

  case 35: /* taglist: taglist "," "<identifier>"  */
#line 280 "src/gwion.y"
                 { LIST_END(tag, (yyval.taglist), (yyvsp[-2].taglist), MK_TAG((yyvsp[0].sym), (yylsp[0]))); }
#line 2939 "src/parser.c"
    break;

  case 36: /* taglist2: "<identifier>"  */
#line 283 "src/gwion.y"
                  { LIST_INI(tag, (yyval.taglist), MK_TAG((yyvsp[0].sym), (yylsp[0]))); }
#line 2945 "src/parser.c"
    break;

  case 37: /* taglist2: taglist2 "." "<identifier>"  */
#line 284 "src/gwion.y"
                  { LIST_END(tag, (yyval.taglist), (yyvsp[-2].taglist), MK_TAG((yyvsp[0].sym), (yylsp[0]))); }
#line 2951 "src/parser.c"
    break;

  case 38: /* specialized: "<identifier>" traits  */
#line 286 "src/gwion.y"
                       {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1])),
        .traits = (yyvsp[0].taglist),
      };
  }
#line 2962 "src/parser.c"
    break;

  case 39: /* specialized: "const" type_decl_array "<identifier>"  */
#line 292 "src/gwion.y"
                               {
    (yyval.specialized) = (Specialized) {
        .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])),
        .td = (yyvsp[-1].type_decl),
      };
  }
#line 2973 "src/parser.c"
    break;

  case 40: /* specialized_list: specialized  */
#line 299 "src/gwion.y"
                              { LIST_INI(specialized, (yyval.specialized_list), (yyvsp[0].specialized)); }
#line 2979 "src/parser.c"
    break;

  case 41: /* specialized_list: specialized_list "," specialized  */
#line 300 "src/gwion.y"
                                     { LIST_END(specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), (yyvsp[0].specialized)); }
#line 2985 "src/parser.c"
    break;

  case 42: /* stmt_list: stmt  */
#line 302 "src/gwion.y"
                                   { LIST_INI(stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 2991 "src/parser.c"
    break;

  case 43: /* stmt_list: stmt_list stmt  */
#line 303 "src/gwion.y"
                                   { LIST_END(stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt));}
#line 2997 "src/parser.c"
    break;

  case 44: /* fptr_base: flag type_decl_array "<identifier>" decl_template  */
#line 305 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 3004 "src/parser.c"
    break;

  case 45: /* _func_effects: "perform" "<identifier>"  */
#line 308 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 3010 "src/parser.c"
    break;

  case 46: /* _func_effects: _func_effects "<identifier>"  */
#line 308 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 3016 "src/parser.c"
    break;

  case 47: /* func_effects: %empty  */
#line 309 "src/gwion.y"
                     { (yyval.vector).ptr = NULL; }
#line 3022 "src/parser.c"
    break;

  case 48: /* func_effects: _func_effects  */
#line 309 "src/gwion.y"
                                                        { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 3028 "src/parser.c"
    break;

  case 49: /* func_base: flag final type_decl_array "<identifier>" decl_template  */
#line 311 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 3035 "src/parser.c"
    break;

  case 50: /* fptr_def: "funptr" fptr_base func_args func_effects ";"  */
#line 314 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 3045 "src/parser.c"
    break;

  case 51: /* typedef_when: %empty  */
#line 320 "src/gwion.y"
                     { (yyval.exp) = NULL;}
#line 3051 "src/parser.c"
    break;

  case 52: /* typedef_when: "when" exp  */
#line 320 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3057 "src/parser.c"
    break;

  case 53: /* type_def_type: "typedef"  */
#line 321 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 3063 "src/parser.c"
    break;

  case 54: /* type_def_type: "distinct"  */
#line 321 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 3069 "src/parser.c"
    break;

  case 55: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 322 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 3082 "src/parser.c"
    break;

  case 56: /* type_decl_array: type_decl array  */
#line 331 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 3088 "src/parser.c"
    break;

  case 58: /* arg: type_decl_array arg_decl ":" binary_exp  */
#line 334 "src/gwion.y"
                                            {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-3].type_decl), (yyvsp[-2].var_decl)), .exp = (yyvsp[0].exp) };
  }
#line 3096 "src/parser.c"
    break;

  case 59: /* arg: type_decl_array arg_decl  */
#line 337 "src/gwion.y"
                             {
    (yyval.arg) = (Arg) { .var = MK_VAR((yyvsp[-1].type_decl), (yyvsp[0].var_decl)) };
  }
#line 3104 "src/parser.c"
    break;

  case 60: /* arg_list: arg  */
#line 341 "src/gwion.y"
         {
       LIST_INI(arg, (yyval.arg_list), (yyvsp[0].arg));
     }
#line 3112 "src/parser.c"
    break;

  case 61: /* arg_list: arg_list "," arg  */
#line 344 "src/gwion.y"
                              {
     arglist_add(mpool(arg), &(yyvsp[-2].arg_list), (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3121 "src/parser.c"
    break;

  case 62: /* locale_arg: arg  */
#line 350 "src/gwion.y"
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
#line 3138 "src/parser.c"
    break;

  case 63: /* locale_arg: locale_arg "," arg  */
#line 362 "src/gwion.y"
                                {
     arglist_add(mpool(arg), &(yyvsp[-2].arg_list), (yyvsp[0].arg));
     (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 3147 "src/parser.c"
    break;

  case 65: /* locale_list: %empty  */
#line 368 "src/gwion.y"
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
#line 3163 "src/parser.c"
    break;

  case 66: /* code_stmt: "{" "}"  */
#line 381 "src/gwion.y"
            {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc)); }
#line 3170 "src/parser.c"
    break;

  case 67: /* code_stmt: "{" stmt_list "}"  */
#line 383 "src/gwion.y"
                      {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3177 "src/parser.c"
    break;

  case 68: /* code_stmt: "{" stmt_list error  */
#line 385 "src/gwion.y"
                         {
    (yyval.stmt) = MK_STMT(ae_stmt_code, (yyloc), .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) });}
#line 3184 "src/parser.c"
    break;

  case 69: /* code_list: "{" "}"  */
#line 390 "src/gwion.y"
            { (yyval.stmt_list) = new_stmtlist(mpool(arg), 0); }
#line 3190 "src/parser.c"
    break;

  case 70: /* code_list: "{" stmt_list "}"  */
#line 391 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3196 "src/parser.c"
    break;

  case 71: /* code_list: "{" stmt_list error "}"  */
#line 392 "src/gwion.y"
                            { (yyval.stmt_list) = (yyvsp[-2].stmt_list); }
#line 3202 "src/parser.c"
    break;

  case 72: /* code_list: "{" stmt_list error  */
#line 393 "src/gwion.y"
                        { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3208 "src/parser.c"
    break;

  case 73: /* stmt_pp: "#define"  */
#line 396 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3214 "src/parser.c"
    break;

  case 74: /* stmt_pp: "#pragma"  */
#line 397 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3220 "src/parser.c"
    break;

  case 75: /* stmt_pp: "#undef"  */
#line 398 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3226 "src/parser.c"
    break;

  case 76: /* stmt_pp: "#ifdef"  */
#line 399 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3232 "src/parser.c"
    break;

  case 77: /* stmt_pp: "#ifndef"  */
#line 400 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyloc), .data = (yyvsp[0].sval)); }
#line 3238 "src/parser.c"
    break;

  case 78: /* stmt_pp: "#else"  */
#line 401 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyloc), .data = (yyvsp[0].sval)); }
#line 3244 "src/parser.c"
    break;

  case 79: /* stmt_pp: "#if"  */
#line 402 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyloc), .data = (yyvsp[0].sval)); }
#line 3250 "src/parser.c"
    break;

  case 80: /* stmt_pp: "\n"  */
#line 403 "src/gwion.y"
               { if(!arg->getter->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl, (yyloc), .data = (yyvsp[0].sval)); }
#line 3256 "src/parser.c"
    break;

  case 81: /* stmt_pp: LOCALE_INI "<identifier>" opt_exp LOCALE_END  */
#line 405 "src/gwion.y"
    { (yyval.stmt) = MK_STMT_PP(locale, (yyloc), .xid = (yyvsp[-2].sym), .exp = (yyvsp[-1].exp)); }
#line 3262 "src/parser.c"
    break;

  case 83: /* stmt: exp_error  */
#line 410 "src/gwion.y"
              {
  (yyval.stmt) = MK_STMT_EXP((yylsp[0]), (yyvsp[0].exp));
        parser_error(&(yylsp[0]), arg, "unfinished expression 2", 0);
}
#line 3271 "src/parser.c"
    break;

  case 84: /* stmt: exp error  */
#line 414 "src/gwion.y"
              {
  (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp));
        parser_error(&(yylsp[-1]), arg, "unfinished expression", 0);
}
#line 3280 "src/parser.c"
    break;

  case 98: /* stmt: exp $end  */
#line 432 "src/gwion.y"
              {
  (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp));
        parser_error(&(yylsp[-1]), arg, "unfinished expression", 0);
}
#line 3289 "src/parser.c"
    break;

  case 99: /* stmt: exp_error $end  */
#line 436 "src/gwion.y"
                    {
  (yyval.stmt) = MK_STMT_EXP((yylsp[-1]), (yyvsp[-1].exp));
        parser_error(&(yylsp[-1]), arg, "unfinished expression 3", 0);
}
#line 3298 "src/parser.c"
    break;

  case 100: /* $@1: %empty  */
#line 443 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3304 "src/parser.c"
    break;

  case 101: /* spread_stmt: "..." "<identifier>" ":" taglist "{" $@1 "}..."  */
#line 443 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .tag = MK_TAG((yyvsp[-5].sym), (yylsp[-5])),
    .list = (yyvsp[-3].taglist),
    .data = (yyvsp[0].sval),
  };
  (yyval.stmt) = MK_STMT(ae_stmt_spread, (yylsp[-5]), .stmt_spread = spread);
}
#line 3317 "src/parser.c"
    break;

  case 102: /* using_stmt: "using" type_decl ";"  */
#line 452 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.td = (yyvsp[-1].type_decl);
    }
#line 3325 "src/parser.c"
    break;

  case 103: /* using_stmt: "using" "<identifier>" ":" dot_exp ";"  */
#line 455 "src/gwion.y"
                                       { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = (yyvsp[-1].exp);
    (yyval.stmt).d.stmt_using.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3334 "src/parser.c"
    break;

  case 104: /* using_stmt: "using" "<identifier>" ":" "<identifier>" ";"  */
#line 459 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_using, (yyloc));
    (yyval.stmt).d.stmt_using.d.exp = new_prim_id(mpool(arg), (yyvsp[-1].sym), (yylsp[-1]));
    (yyval.stmt).d.stmt_using.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
  }
#line 3343 "src/parser.c"
    break;

  case 105: /* import_item: "<identifier>"  */
#line 464 "src/gwion.y"
                {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))
    };
  }
#line 3353 "src/parser.c"
    break;

  case 106: /* import_item: "<identifier>" ":" dot_exp  */
#line 468 "src/gwion.y"
                            {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])),
      .d = { .exp = (yyvsp[0].exp) }
    };
  }
#line 3364 "src/parser.c"
    break;

  case 107: /* import_item: "<identifier>" ":" "<identifier>"  */
#line 473 "src/gwion.y"
                       {
    (yyval.import_item) = (struct Stmt_Using_) {
      .tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])),
      .d = { .exp = new_prim_id(mpool(arg), (yyvsp[0].sym), (yylsp[0])) }
    };
  }
#line 3375 "src/parser.c"
    break;

  case 108: /* import_list: import_item  */
#line 481 "src/gwion.y"
                         {
    (yyval.import_list) = new_usingstmtlist(mpool(arg), 1);
    usingstmtlist_set((yyval.import_list), 0, (yyvsp[0].import_item));
  }
#line 3384 "src/parser.c"
    break;

  case 109: /* import_list: import_list "," import_item  */
#line 485 "src/gwion.y"
                                         {
    usingstmtlist_add(mpool(arg), &(yyvsp[-2].import_list), (yyvsp[0].import_item));
    (yyval.import_list) = (yyvsp[-2].import_list);
  }
#line 3393 "src/parser.c"
    break;

  case 110: /* import_stmt: "import" "<identifier>" ";"  */
#line 490 "src/gwion.y"
                             {
    (yyval.stmt) = MK_STMT(ae_stmt_import, (yyloc));
    (yyval.stmt).d.stmt_import.tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]));
  }
#line 3402 "src/parser.c"
    break;

  case 111: /* import_stmt: "import" "<identifier>" ":" import_list ";"  */
#line 493 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(ae_stmt_import, (yyloc));
    (yyval.stmt).d.stmt_import.tag = MK_TAG((yyvsp[-3].sym), (yylsp[-3]));
    (yyval.stmt).d.stmt_import.selection = (yyvsp[-1].import_list);
  }
#line 3412 "src/parser.c"
    break;

  case 112: /* require_stmt: "require" taglist2 ";"  */
#line 498 "src/gwion.y"
                                     {
    (yyval.stmt) = MK_STMT(ae_stmt_require, (yyloc));
    (yyval.stmt).d.stmt_require.tags = (yyvsp[-1].taglist);
  }
#line 3421 "src/parser.c"
    break;

  case 113: /* retry_stmt: "retry" ";"  */
#line 503 "src/gwion.y"
                        { (yyval.stmt) = MK_STMT(ae_stmt_retry, (yylsp[-1])); }
#line 3427 "src/parser.c"
    break;

  case 114: /* handler: "handle" opt_id stmt  */
#line 505 "src/gwion.y"
                              { (yyval.handler) = (Handler){ .tag = MK_TAG((yyvsp[-1].sym), (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-2])), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)) }; }
#line 3433 "src/parser.c"
    break;

  case 115: /* handler_list: handler  */
#line 506 "src/gwion.y"
                      {
    LIST_INI(handler, (yyval.handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).tag.sym;
  }
#line 3442 "src/parser.c"
    break;

  case 116: /* handler_list: handler_list handler  */
#line 510 "src/gwion.y"
                          {
    handlerlist_add(mpool(arg), &(yyvsp[-1].handler_list).handlers, (yyvsp[0].handler));
    (yyval.handler_list) = (yyvsp[-1].handler_list);
  }
#line 3451 "src/parser.c"
    break;

  case 117: /* try_stmt: "try" stmt handler_list  */
#line 514 "src/gwion.y"
                                  { (yyval.stmt) = MK_STMT(ae_stmt_try, (yylsp[-2]),
   .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers});}
#line 3458 "src/parser.c"
    break;

  case 119: /* opt_id: %empty  */
#line 517 "src/gwion.y"
                    { (yyval.sym) = NULL; }
#line 3464 "src/parser.c"
    break;

  case 121: /* opt_comma: %empty  */
#line 518 "src/gwion.y"
                        {}
#line 3470 "src/parser.c"
    break;

  case 122: /* enum_value: "<identifier>"  */
#line 521 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }; }
#line 3476 "src/parser.c"
    break;

  case 123: /* enum_value: "<identifier>" ":" number  */
#line 522 "src/gwion.y"
                          { 
            (yyval.enum_value) = (EnumValue) {.tag = MK_TAG((yyvsp[-2].sym), (yylsp[-2])), .gwint = (yyvsp[0].gwint), .set = true };
          }
#line 3484 "src/parser.c"
    break;

  case 124: /* enum_list: enum_value  */
#line 526 "src/gwion.y"
                            { LIST_INI(enumvalue, (yyval.enum_list), (yyvsp[0].enum_value)); }
#line 3490 "src/parser.c"
    break;

  case 125: /* enum_list: enum_list "," enum_value  */
#line 527 "src/gwion.y"
                            { LIST_END(enumvalue, (yyval.enum_list), (yyvsp[-2].enum_list), (yyvsp[0].enum_value)) ;}
#line 3496 "src/parser.c"
    break;

  case 126: /* enum_list: stmt_pp  */
#line 528 "src/gwion.y"
          { return 0;}
#line 3502 "src/parser.c"
    break;

  case 127: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 531 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3511 "src/parser.c"
    break;

  case 128: /* when_exp: "when" exp  */
#line 536 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3517 "src/parser.c"
    break;

  case 129: /* when_exp: %empty  */
#line 536 "src/gwion.y"
                                           { (yyval.exp) = NULL; }
#line 3523 "src/parser.c"
    break;

  case 130: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 539 "src/gwion.y"
                                      {
    (yyval.stmt) = MK_STMT(0 /*ae_stmt_match*/, (yylsp[-4]),
      .stmt_match = {
        .cond = (yyvsp[-3].exp),
        .when = (yyvsp[-2].exp),
        .list = (yyvsp[0].stmt_list)
    });
}
#line 3536 "src/parser.c"
    break;

  case 131: /* match_list: match_case_stmt  */
#line 548 "src/gwion.y"
                            { LIST_INI(stmt, (yyval.stmt_list), (yyvsp[0].stmt)); }
#line 3542 "src/parser.c"
    break;

  case 132: /* match_list: match_list match_case_stmt  */
#line 549 "src/gwion.y"
                             { LIST_END(stmt, (yyval.stmt_list), (yyvsp[-1].stmt_list), (yyvsp[0].stmt)); }
#line 3548 "src/parser.c"
    break;

  case 133: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 551 "src/gwion.y"
                                                        {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-6]),
    .stmt_match = {
      .cond  = (yyvsp[-5].exp),
      .list  = (yyvsp[-3].stmt_list),
      .where = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
  });
}
#line 3561 "src/parser.c"
    break;

  case 134: /* match_stmt: "match" exp "{" match_list "}"  */
#line 560 "src/gwion.y"
                               {
  (yyval.stmt) = MK_STMT(ae_stmt_match, (yylsp[-4]),
    .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
  });
}
#line 3573 "src/parser.c"
    break;

  case 135: /* flow: "while"  */
#line 569 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3579 "src/parser.c"
    break;

  case 136: /* flow: "until"  */
#line 570 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3585 "src/parser.c"
    break;

  case 137: /* loop_stmt: flow "(" exp ")" stmt  */
#line 575 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-4].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3596 "src/parser.c"
    break;

  case 138: /* loop_stmt: "do" stmt flow exp ";"  */
#line 582 "src/gwion.y"
    { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yylsp[-4]),
      .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
    });
  }
#line 3608 "src/parser.c"
    break;

  case 139: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 590 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-5]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3620 "src/parser.c"
    break;

  case 140: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 598 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_for, (yylsp[-6]),
      .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-4].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c3 = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
    });
  }
#line 3633 "src/parser.c"
    break;

  case 141: /* loop_stmt: "foreach" "(" capture ":" exp ")" stmt  */
#line 607 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-6]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3646 "src/parser.c"
    break;

  case 142: /* loop_stmt: "foreach" "(" "<identifier>" "," capture ":" exp ")" stmt  */
#line 616 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_each, (yylsp[-8]),
      .stmt_each = {
        .var = (yyvsp[-4].capture).var,
        .exp = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
        .idx = (Var_Decl){.tag=MK_TAG((yyvsp[-6].sym), (yylsp[-6]))},
        .is_ref = (yyvsp[-4].capture).is_ref
    });
  }
#line 3660 "src/parser.c"
    break;

  case 143: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 626 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-4]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
  }
#line 3671 "src/parser.c"
    break;

  case 144: /* loop_stmt: "repeat" "(" "<identifier>" "," exp ")" stmt  */
#line 633 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_loop, (yylsp[-6]),
      .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      });
    (yyval.stmt).d.stmt_loop.idx = (Var_Decl){ .tag = MK_TAG((yyvsp[-4].sym), (yylsp[-4])) };
  }
#line 3683 "src/parser.c"
    break;

  case 145: /* defer_stmt: "defer" stmt  */
#line 641 "src/gwion.y"
                         {
    (yyval.stmt) = MK_STMT(ae_stmt_defer, (yylsp[-1]),
      .stmt_defer = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
}
#line 3693 "src/parser.c"
    break;

  case 146: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 649 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-4]),
      .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3704 "src/parser.c"
    break;

  case 147: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 656 "src/gwion.y"
    { (yyval.stmt) = MK_STMT(ae_stmt_if, (yylsp[-6]),
      .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
    });
  }
#line 3716 "src/parser.c"
    break;

  case 148: /* breaks: "break"  */
#line 664 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3722 "src/parser.c"
    break;

  case 149: /* breaks: "continue"  */
#line 664 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3728 "src/parser.c"
    break;

  case 150: /* jump_stmt: "return" exp ";"  */
#line 666 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yyloc), (yyvsp[-1].exp)); }
#line 3734 "src/parser.c"
    break;

  case 151: /* jump_stmt: "return" ";"  */
#line 667 "src/gwion.y"
                     { (yyval.stmt) = MK_STMT_RETURN((yyloc), NULL); }
#line 3740 "src/parser.c"
    break;

  case 152: /* jump_stmt: breaks decimal ";"  */
#line 668 "src/gwion.y"
                         { (yyval.stmt) = MK_STMT((yyvsp[-2].stmt_t), (yyloc), .stmt_index = { .idx = (yyvsp[-1].gwint).num });}
#line 3746 "src/parser.c"
    break;

  case 153: /* jump_stmt: breaks ";"  */
#line 669 "src/gwion.y"
               { (yyval.stmt) = MK_STMT((yyvsp[-1].stmt_t), (yyloc), .stmt_index = { .idx = -1 });}
#line 3752 "src/parser.c"
    break;

  case 154: /* exp_stmt: exp ";"  */
#line 672 "src/gwion.y"
            { (yyval.stmt) = MK_STMT_EXP((yyloc), (yyvsp[-1].exp)); }
#line 3758 "src/parser.c"
    break;

  case 155: /* exp_stmt: ";"  */
#line 673 "src/gwion.y"
            { (yyval.stmt) = MK_STMT(ae_stmt_exp, (yyloc)); }
#line 3764 "src/parser.c"
    break;

  case 156: /* exp: binary_exp  */
#line 676 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3770 "src/parser.c"
    break;

  case 157: /* exp: binary_exp "," exp  */
#line 678 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3782 "src/parser.c"
    break;

  case 159: /* binary_exp: "<identifier>" "=" binary_exp  */
#line 688 "src/gwion.y"
                      { (yyval.exp) = new_exp_named(mpool(arg), (yyvsp[0].exp), MK_TAG((yyvsp[-2].sym), (yylsp[-2])), (yyloc));}
#line 3788 "src/parser.c"
    break;

  case 160: /* binary_exp: binary_exp "@" decl_exp  */
#line 689 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3794 "src/parser.c"
    break;

  case 161: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 690 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3800 "src/parser.c"
    break;

  case 162: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 691 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3806 "src/parser.c"
    break;

  case 163: /* call_template: ":[" tmplarg_list "]"  */
#line 693 "src/gwion.y"
                                     { (yyval.tmplarg_list) = (yyvsp[-1].tmplarg_list); }
#line 3812 "src/parser.c"
    break;

  case 164: /* call_template: %empty  */
#line 693 "src/gwion.y"
                                                           { (yyval.tmplarg_list) = NULL; }
#line 3818 "src/parser.c"
    break;

  case 170: /* array_exp: "[" exp "]"  */
#line 698 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3824 "src/parser.c"
    break;

  case 171: /* array_exp: "[" exp "]" array_exp  */
#line 699 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3832 "src/parser.c"
    break;

  case 172: /* array_exp: "[" exp "]" "[" "]"  */
#line 702 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3838 "src/parser.c"
    break;

  case 173: /* array_empty: "[" "]"  */
#line 706 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3844 "src/parser.c"
    break;

  case 174: /* array_empty: array_empty "[" "]"  */
#line 707 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3850 "src/parser.c"
    break;

  case 175: /* array_empty: array_empty array_exp  */
#line 708 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3856 "src/parser.c"
    break;

  case 176: /* dict_list: binary_exp ":" binary_exp  */
#line 712 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3862 "src/parser.c"
    break;

  case 177: /* dict_list: dict_list "," binary_exp ":" binary_exp  */
#line 713 "src/gwion.y"
                                            { (yyvsp[-4].exp)->next->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3868 "src/parser.c"
    break;

  case 178: /* range: "[" exp ":" exp "]"  */
#line 716 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3874 "src/parser.c"
    break;

  case 179: /* range: "[" exp ":" "]"  */
#line 717 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3880 "src/parser.c"
    break;

  case 180: /* range: "[" ":" exp "]"  */
#line 718 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3886 "src/parser.c"
    break;

  case 184: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 724 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3892 "src/parser.c"
    break;

  case 185: /* decl_exp: type_decl_flag2 flag type_decl_array call_paren var_decl  */
#line 725 "src/gwion.y"
                                                             {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-2].type_decl), &(yyvsp[0].var_decl), (yyloc));
      (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-4].flag) | (yyvsp[-3].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1]));
  }
#line 3902 "src/parser.c"
    break;

  case 186: /* decl_exp: type_decl_flag2 flag type_decl_array error  */
#line 730 "src/gwion.y"
                                               {
    Var_Decl vd = { .tag = MK_TAG(insert_symbol("@error"), (yylsp[0])) };
    (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &vd, (yyloc)); (yyval.exp)->d.exp_decl.var.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag);
  }
#line 3911 "src/parser.c"
    break;

  case 187: /* func_args: "(" arg_list ")"  */
#line 735 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3917 "src/parser.c"
    break;

  case 188: /* func_args: "(" ")"  */
#line 735 "src/gwion.y"
                                                   { (yyval.arg_list) = NULL; }
#line 3923 "src/parser.c"
    break;

  case 189: /* decl_template: ":[" specialized_list "]"  */
#line 738 "src/gwion.y"
                            { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3929 "src/parser.c"
    break;

  case 190: /* decl_template: ":[" specialized_list "..." "]"  */
#line 739 "src/gwion.y"
                                              {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  LIST_END(specialized, (yyval.specialized_list), (yyvsp[-2].specialized_list), spec);
}
#line 3938 "src/parser.c"
    break;

  case 191: /* decl_template: ":[" "..." "]"  */
#line 743 "src/gwion.y"
                                {
  Specialized spec = { .tag = MK_TAG(insert_symbol("..."), (yylsp[-1])) };
  LIST_INI(specialized, (yyval.specialized_list), spec);
}
#line 3947 "src/parser.c"
    break;

  case 192: /* decl_template: %empty  */
#line 747 "src/gwion.y"
                      { (yyval.specialized_list) = NULL; }
#line 3953 "src/parser.c"
    break;

  case 193: /* export: "export"  */
#line 749 "src/gwion.y"
                 { (yyval.flag) = ae_flag_export; }
#line 3959 "src/parser.c"
    break;

  case 195: /* opt_export: %empty  */
#line 750 "src/gwion.y"
                            { (yyval.flag) = ae_flag_none; }
#line 3965 "src/parser.c"
    break;

  case 196: /* storage_flag: "static"  */
#line 752 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3971 "src/parser.c"
    break;

  case 198: /* access_flag: "private"  */
#line 754 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3977 "src/parser.c"
    break;

  case 199: /* access_flag: "protect"  */
#line 755 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3983 "src/parser.c"
    break;

  case 200: /* flag: access_flag  */
#line 758 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3989 "src/parser.c"
    break;

  case 201: /* flag: storage_flag  */
#line 759 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3995 "src/parser.c"
    break;

  case 202: /* flag: access_flag storage_flag  */
#line 760 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 4001 "src/parser.c"
    break;

  case 203: /* flag: %empty  */
#line 761 "src/gwion.y"
           { (yyval.flag) = ae_flag_none; }
#line 4007 "src/parser.c"
    break;

  case 204: /* final: "final"  */
#line 764 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 4013 "src/parser.c"
    break;

  case 205: /* final: %empty  */
#line 764 "src/gwion.y"
                                                { (yyval.flag) = ae_flag_none; }
#line 4019 "src/parser.c"
    break;

  case 206: /* modifier: "abstract" final  */
#line 766 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 4025 "src/parser.c"
    break;

  case 208: /* func_def_base: "fun" func_base func_args code_list  */
#line 769 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 4034 "src/parser.c"
    break;

  case 209: /* func_def_base: "fun" func_base func_args ";"  */
#line 773 "src/gwion.y"
                                     {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].arg_list);
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 4044 "src/parser.c"
    break;

  case 210: /* func_def_base: LOCALE export "<identifier>" "(" locale_list ")" code_list  */
#line 778 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale;
   (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 4055 "src/parser.c"
    break;

  case 211: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 784 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 4066 "src/parser.c"
    break;

  case 212: /* abstract_fdef: "fun" flag "abstract" type_decl_array "<identifier>" decl_template func_args ";"  */
#line 793 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4078 "src/parser.c"
    break;

  case 218: /* op_base: type_decl_array op_op decl_template "(" arg "," arg ")"  */
#line 804 "src/gwion.y"
    {
      ArgList *args = new_arglist(mpool(arg), 2);
      arglist_set(args, 0, (yyvsp[-3].arg));
      arglist_set(args, 1, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 4090 "src/parser.c"
    break;

  case 219: /* op_base: type_decl_array post_op decl_template "(" arg ")"  */
#line 812 "src/gwion.y"
    {
      ArgList *args = new_arglist(mpool(arg), 1);
      arglist_set(args, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4101 "src/parser.c"
    break;

  case 220: /* op_base: unary_op type_decl_array decl_template "(" arg ")"  */
#line 819 "src/gwion.y"
    {
      ArgList *args = new_arglist(mpool(arg), 1);
      arglist_set(args, 0, (yyvsp[-1].arg));
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4113 "src/parser.c"
    break;

  case 221: /* op_base: type_decl_array OPID_A func_args  */
#line 827 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].arg_list), ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4122 "src/parser.c"
    break;

  case 222: /* operator: "operator"  */
#line 832 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4128 "src/parser.c"
    break;

  case 223: /* operator: "operator" export  */
#line 832 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4134 "src/parser.c"
    break;

  case 224: /* op_def: operator op_base code_list  */
#line 835 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4140 "src/parser.c"
    break;

  case 225: /* op_def: operator op_base ";"  */
#line 837 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4146 "src/parser.c"
    break;

  case 226: /* op_def: operator "abstract" op_base ";"  */
#line 839 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4152 "src/parser.c"
    break;

  case 230: /* func_def: operator "new" func_args code_list  */
#line 843 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag), (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4161 "src/parser.c"
    break;

  case 231: /* func_def: operator "new" func_args ";"  */
#line 848 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4170 "src/parser.c"
    break;

  case 232: /* func_def: operator "abstract" "new" func_args ";"  */
#line 853 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].arg_list), (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4179 "src/parser.c"
    break;

  case 233: /* type_decl_base: "<identifier>"  */
#line 859 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4185 "src/parser.c"
    break;

  case 234: /* type_decl_base: "(" flag type_decl_array decl_template func_args func_effects ")"  */
#line 860 "src/gwion.y"
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
#line 4201 "src/parser.c"
    break;

  case 235: /* type_decl_base: error  */
#line 871 "src/gwion.y"
          { (yyval.type_decl) = new_type_decl(mpool(arg), insert_symbol("@error"), (yyloc)); }
#line 4207 "src/parser.c"
    break;

  case 236: /* type_decl_tmpl: type_decl_base call_template  */
#line 875 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4213 "src/parser.c"
    break;

  case 237: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 876 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].tmplarg_list); }
#line 4219 "src/parser.c"
    break;

  case 239: /* $@2: %empty  */
#line 881 "src/gwion.y"
                       { arg->helper = false; }
#line 4225 "src/parser.c"
    break;

  case 240: /* type_decl_noflag: type_decl_tmpl "." $@2 type_decl_noflag  */
#line 881 "src/gwion.y"
                                                                 { (yyvsp[-3].type_decl)->next = (yyvsp[0].type_decl); }
#line 4231 "src/parser.c"
    break;

  case 241: /* option: "?"  */
#line 884 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4237 "src/parser.c"
    break;

  case 242: /* option: OPTIONS  */
#line 884 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4243 "src/parser.c"
    break;

  case 243: /* option: %empty  */
#line 884 "src/gwion.y"
                                                                        { (yyval.uval) = 0; }
#line 4249 "src/parser.c"
    break;

  case 244: /* type_decl_opt: type_decl_noflag option  */
#line 885 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4255 "src/parser.c"
    break;

  case 246: /* type_decl: type_decl_flag type_decl_opt  */
#line 886 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4261 "src/parser.c"
    break;

  case 247: /* type_decl_flag: "late"  */
#line 889 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4267 "src/parser.c"
    break;

  case 248: /* type_decl_flag: "const"  */
#line 890 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4273 "src/parser.c"
    break;

  case 249: /* type_decl_flag2: "var"  */
#line 892 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4279 "src/parser.c"
    break;

  case 251: /* variable: "<identifier>" ";"  */
#line 895 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.variable) = MK_VAR(td, (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});
}
#line 4288 "src/parser.c"
    break;

  case 252: /* variable: type_decl_array "<identifier>" ";"  */
#line 899 "src/gwion.y"
                         { (yyval.variable) = MK_VAR((yyvsp[-2].type_decl), (Var_Decl){ .tag = MK_TAG((yyvsp[-1].sym), (yylsp[-1]))});}
#line 4294 "src/parser.c"
    break;

  case 253: /* variable: stmt_pp  */
#line 900 "src/gwion.y"
          { return 0;}
#line 4300 "src/parser.c"
    break;

  case 254: /* variable_list: variable  */
#line 901 "src/gwion.y"
                        { LIST_INI(variable, (yyval.variable_list), (yyvsp[0].variable)); }
#line 4306 "src/parser.c"
    break;

  case 255: /* variable_list: variable_list variable  */
#line 902 "src/gwion.y"
                         { LIST_END(variable, (yyval.variable_list), (yyvsp[-1].variable_list), (yyvsp[0].variable)); }
#line 4312 "src/parser.c"
    break;

  case 256: /* union_def: "union" flag "<identifier>" decl_template "{" variable_list "}"  */
#line 905 "src/gwion.y"
                                                        {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].variable_list), (yylsp[-4]));
      (yyval.union_def)->tag.sym = (yyvsp[-4].sym); // put tag in ctor
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4324 "src/parser.c"
    break;

  case 257: /* var_decl: "<identifier>"  */
#line 914 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4330 "src/parser.c"
    break;

  case 258: /* arg_decl: "<identifier>"  */
#line 916 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}; }
#line 4336 "src/parser.c"
    break;

  case 259: /* arg_decl: %empty  */
#line 917 "src/gwion.y"
                 { (yyval.var_decl) = (struct Var_Decl_) {
            .tag = { .sym = NULL, .loc = {.first = arg->pos, .last = arg->pos }}};
        }
#line 4344 "src/parser.c"
    break;

  case 273: /* opt_exp: exp  */
#line 927 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4350 "src/parser.c"
    break;

  case 274: /* opt_exp: %empty  */
#line 927 "src/gwion.y"
                                   { (yyval.exp) = NULL; }
#line 4356 "src/parser.c"
    break;

  case 276: /* con_exp: log_or_exp "?" con_exp ":" con_exp  */
#line 930 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4362 "src/parser.c"
    break;

  case 277: /* con_exp: log_or_exp "?" ":" con_exp  */
#line 932 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-3].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4368 "src/parser.c"
    break;

  case 278: /* con_exp: log_or_exp "?:" con_exp  */
#line 934 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4374 "src/parser.c"
    break;

  case 280: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 936 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4380 "src/parser.c"
    break;

  case 282: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 937 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4386 "src/parser.c"
    break;

  case 284: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 938 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4392 "src/parser.c"
    break;

  case 286: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 939 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4398 "src/parser.c"
    break;

  case 288: /* and_exp: and_exp "&" eq_exp  */
#line 940 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4404 "src/parser.c"
    break;

  case 290: /* eq_exp: eq_exp eq_op rel_exp  */
#line 941 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4410 "src/parser.c"
    break;

  case 292: /* rel_exp: rel_exp rel_op shift_exp  */
#line 942 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4416 "src/parser.c"
    break;

  case 294: /* shift_exp: shift_exp shift_op add_exp  */
#line 943 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4422 "src/parser.c"
    break;

  case 296: /* add_exp: add_exp add_op mul_exp  */
#line 944 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4428 "src/parser.c"
    break;

  case 298: /* mul_exp: mul_exp mul_op dur_exp  */
#line 945 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4434 "src/parser.c"
    break;

  case 300: /* dur_exp: dur_exp "::" cast_exp  */
#line 946 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4440 "src/parser.c"
    break;

  case 302: /* cast_exp: cast_exp "$" type_decl_array  */
#line 949 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4446 "src/parser.c"
    break;

  case 309: /* unary_exp: unary_op unary_exp  */
#line 956 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4452 "src/parser.c"
    break;

  case 310: /* unary_exp: "spork" unary_exp  */
#line 957 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4458 "src/parser.c"
    break;

  case 311: /* unary_exp: "fork" unary_exp  */
#line 958 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4464 "src/parser.c"
    break;

  case 312: /* unary_exp: "new" type_decl_array call_paren  */
#line 959 "src/gwion.y"
                                     {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].type_decl), (yyvsp[0].exp) ?: new_prim_nil(mpool(arg), (yylsp[0])), (yyloc));
  }
#line 4472 "src/parser.c"
    break;

  case 313: /* unary_exp: "new" type_decl_array  */
#line 962 "src/gwion.y"
                          {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4478 "src/parser.c"
    break;

  case 314: /* unary_exp: "spork" code_list  */
#line 963 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4484 "src/parser.c"
    break;

  case 315: /* unary_exp: "fork" code_list  */
#line 964 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4490 "src/parser.c"
    break;

  case 316: /* unary_exp: "spork" captures code_list  */
#line 965 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4496 "src/parser.c"
    break;

  case 317: /* unary_exp: "fork" captures code_list  */
#line 966 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4502 "src/parser.c"
    break;

  case 318: /* unary_exp: "$" type_decl_array  */
#line 967 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4508 "src/parser.c"
    break;

  case 319: /* lambda_list: "<identifier>"  */
#line 970 "src/gwion.y"
    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){.tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}), .loc = (yyloc)};
  LIST_INI(arg, (yyval.arg_list), a); }
#line 4516 "src/parser.c"
    break;

  case 320: /* lambda_list: lambda_list "<identifier>"  */
#line 973 "src/gwion.y"
                    {
  Arg a = (Arg) { .var = MK_VAR(NULL, (Var_Decl){ .tag = MK_TAG((yyvsp[0].sym), (yylsp[0]))}), .loc = (yyloc)};
  LIST_END(arg, (yyval.arg_list), (yyvsp[-1].arg_list), a);
}
#line 4525 "src/parser.c"
    break;

  case 321: /* lambda_arg: "\\" lambda_list  */
#line 978 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4531 "src/parser.c"
    break;

  case 322: /* lambda_arg: "\\"  */
#line 978 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4537 "src/parser.c"
    break;

  case 325: /* tmplarg: type_decl_array  */
#line 981 "src/gwion.y"
                         {
    (yyval.tmplarg) = (TmplArg) { .d = { .td = (yyvsp[0].type_decl)}, .type = tmplarg_td};
  }
#line 4545 "src/parser.c"
    break;

  case 326: /* tmplarg: tmplarg_exp  */
#line 984 "src/gwion.y"
                {
    (yyval.tmplarg) = (TmplArg) { .d = { .exp = (yyvsp[0].exp)}, .type = tmplarg_exp};
  }
#line 4553 "src/parser.c"
    break;

  case 327: /* tmplarg_list: tmplarg  */
#line 988 "src/gwion.y"
                           { LIST_INI(tmplarg, (yyval.tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4559 "src/parser.c"
    break;

  case 328: /* tmplarg_list: tmplarg_list "," tmplarg  */
#line 989 "src/gwion.y"
                           { LIST_END(tmplarg, (yyval.tmplarg_list), (yyvsp[-2].tmplarg_list), (yyvsp[0].tmplarg)); }
#line 4565 "src/parser.c"
    break;

  case 329: /* arg_exps: "(" binary_exp  */
#line 992 "src/gwion.y"
                       { (yyval.exp) = (yyvsp[0].exp); }
#line 4571 "src/parser.c"
    break;

  case 330: /* arg_exps: arg_exps "," binary_exp  */
#line 993 "src/gwion.y"
                                { 
 (yyval.exp) = (yyvsp[-2].exp);
 Exp *e = (yyvsp[-2].exp);
 while (e->next) e = e->next;
  e->next = (yyvsp[0].exp);
}
#line 4582 "src/parser.c"
    break;

  case 331: /* arg_exps: arg_exps "," "," binary_exp  */
#line 999 "src/gwion.y"
                            { 
 (yyval.exp) = (yyvsp[-3].exp);
 Exp *e = (yyvsp[-3].exp);
 while (e->next) e = e->next;
  e->next = new_prim_id(mpool(arg), insert_symbol("@error"), (yylsp[-2]));
  e->next->next = (yyvsp[0].exp);
}
#line 4594 "src/parser.c"
    break;

  case 332: /* call_paren: arg_exps ")"  */
#line 1007 "src/gwion.y"
              { (yyval.exp) = (yyvsp[-1].exp); }
#line 4600 "src/parser.c"
    break;

  case 333: /* call_paren: "(" ")"  */
#line 1008 "src/gwion.y"
        { (yyval.exp) = NULL; }
#line 4606 "src/parser.c"
    break;

  case 334: /* call_paren: arg_exps error  */
#line 1009 "src/gwion.y"
               {
  if((yyvsp[-1].exp)) {
    (yyval.exp) = (yyvsp[-1].exp);
    Exp *e = (yyvsp[-1].exp);
    while (e->next) e = e->next;
    e->next = new_prim_id(mpool(arg), insert_symbol("@error"), (yylsp[0]));
 } else
  (yyval.exp) = new_prim_id(mpool(arg), insert_symbol("@error"), (yylsp[0]));
}
#line 4620 "src/parser.c"
    break;

  case 335: /* call_paren: "(" error  */
#line 1017 "src/gwion.y"
              {

  (yyval.exp) = new_prim_id(mpool(arg), insert_symbol("@error"), (yylsp[0]));
 }
#line 4629 "src/parser.c"
    break;

  case 336: /* call_paren: "(" $end  */
#line 1021 "src/gwion.y"
             {
  (yyval.exp) = new_prim_id(mpool(arg), insert_symbol("@error"), (yylsp[0]));
}
#line 4637 "src/parser.c"
    break;

  case 339: /* exp_error: post_exp "." error  */
#line 1031 "src/gwion.y"
                    {
puts("yeah post");
arg->helper = false;
  //$$ = new_exp_dot(mpool(arg), $1, MK_TAG(insert_symbol("@"), @3), @$); // suus
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), MK_TAG(insert_symbol("@error"), (yyloc)), (yyloc)); // suus
}
#line 4648 "src/parser.c"
    break;

  case 340: /* exp_error: post_exp "." HELPER  */
#line 1038 "src/gwion.y"
                     {
puts("yeah error");
arg->helper = false;
  //$$ = new_exp_dot(mpool(arg), $1, MK_TAG(insert_symbol("@"), @3), @$); // suus
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), MK_TAG(insert_symbol("@error!"), (yyloc)), (yyloc)); // suus
}
#line 4659 "src/parser.c"
    break;

  case 341: /* dot_exp: post_exp "." "<identifier>"  */
#line 1047 "src/gwion.y"
                         {
  arg->helper = false;
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), MK_TAG((yyvsp[0].sym), (yylsp[0])), (yyloc));
}
#line 4668 "src/parser.c"
    break;

  case 343: /* post_exp: post_exp array  */
#line 1053 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4674 "src/parser.c"
    break;

  case 344: /* post_exp: post_exp range  */
#line 1055 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4680 "src/parser.c"
    break;

  case 345: /* post_exp: post_exp call_template call_paren  */
#line 1057 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].tmplarg_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].tmplarg_list)); }
#line 4687 "src/parser.c"
    break;

  case 346: /* post_exp: post_exp post_op  */
#line 1060 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4693 "src/parser.c"
    break;

  case 347: /* post_exp: dot_exp  */
#line 1061 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4699 "src/parser.c"
    break;

  case 348: /* interp_exp: "<interp string end>"  */
#line 1065 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4705 "src/parser.c"
    break;

  case 349: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1066 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4711 "src/parser.c"
    break;

  case 350: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1067 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4717 "src/parser.c"
    break;

  case 351: /* interp: "${" interp_exp  */
#line 1069 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4723 "src/parser.c"
    break;

  case 352: /* interp: interp "${" interp_exp  */
#line 1070 "src/gwion.y"
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
#line 4738 "src/parser.c"
    break;

  case 353: /* capture: "<identifier>"  */
#line 1081 "src/gwion.y"
            { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }};}
#line 4744 "src/parser.c"
    break;

  case 354: /* capture: "&" "<identifier>"  */
#line 1081 "src/gwion.y"
                                                                           { (yyval.capture) = (Capture){ .var = { .tag = MK_TAG((yyvsp[0].sym), (yylsp[0])) }, .is_ref = true }; }
#line 4750 "src/parser.c"
    break;

  case 355: /* capture_list: capture  */
#line 1083 "src/gwion.y"
                       { LIST_INI(capture, (yyval.captures), (yyvsp[0].capture)); }
#line 4756 "src/parser.c"
    break;

  case 356: /* capture_list: capture_list capture  */
#line 1084 "src/gwion.y"
                       { LIST_END(capture, (yyval.captures), (yyvsp[-1].captures), (yyvsp[0].capture)); }
#line 4762 "src/parser.c"
    break;

  case 357: /* captures: ":" capture_list ":"  */
#line 1085 "src/gwion.y"
                               { (yyval.captures) = (yyvsp[-1].captures); }
#line 4768 "src/parser.c"
    break;

  case 358: /* captures: %empty  */
#line 1085 "src/gwion.y"
                                                      { (yyval.captures) = NULL; }
#line 4774 "src/parser.c"
    break;

  case 361: /* basic_exp: number  */
#line 1089 "src/gwion.y"
                         {
  (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc)); 
  (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4783 "src/parser.c"
    break;

  case 362: /* basic_exp: "<float>"  */
#line 1093 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4789 "src/parser.c"
    break;

  case 363: /* basic_exp: "<litteral string>"  */
#line 1094 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4795 "src/parser.c"
    break;

  case 364: /* basic_exp: "<litteral char>"  */
#line 1095 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4801 "src/parser.c"
    break;

  case 365: /* prim_exp: "<identifier>"  */
#line 1098 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4807 "src/parser.c"
    break;

  case 367: /* prim_exp: interp  */
#line 1100 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4813 "src/parser.c"
    break;

  case 368: /* prim_exp: "[" opt_exp array_lit_ed  */
#line 1101 "src/gwion.y"
                             { 
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4822 "src/parser.c"
    break;

  case 369: /* prim_exp: "{" dict_list "}"  */
#line 1105 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4828 "src/parser.c"
    break;

  case 370: /* prim_exp: range  */
#line 1106 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4834 "src/parser.c"
    break;

  case 371: /* prim_exp: "<<<" exp ">>>"  */
#line 1107 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4840 "src/parser.c"
    break;

  case 372: /* prim_exp: "(" exp ")"  */
#line 1108 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4846 "src/parser.c"
    break;

  case 373: /* prim_exp: "`foo`"  */
#line 1109 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last =  { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4857 "src/parser.c"
    break;

  case 374: /* prim_exp: lambda_arg captures code_list  */
#line 1115 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4863 "src/parser.c"
    break;

  case 375: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1116 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4869 "src/parser.c"
    break;

  case 376: /* prim_exp: "(" op_op ")"  */
#line 1117 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4875 "src/parser.c"
    break;

  case 377: /* prim_exp: "perform" opt_id  */
#line 1118 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4881 "src/parser.c"
    break;

  case 378: /* prim_exp: "(" ")"  */
#line 1119 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4887 "src/parser.c"
    break;


#line 4891 "src/parser.c"

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

#line 1121 "src/gwion.y"

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
  scan->getter->error = true;
  scanner_error(scan, _main, _explain, *loc, error_code);
  loc_t _loc = { scan->old, scan->old};
  const char *syntaxerr = YY_("syntax error");
  if(!strncmp(_main, syntaxerr, strlen(syntaxerr)))
    scanner_secondary(scan, "check around here", _loc);
  return 0;
}
