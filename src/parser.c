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
  YYSYMBOL_DECIMAL = 61,                   /* DECIMAL  */
  YYSYMBOL_BINARY = 62,                    /* BINARY  */
  YYSYMBOL_HEXA = 63,                      /* HEXA  */
  YYSYMBOL_OCTAL = 64,                     /* OCTAL  */
  YYSYMBOL_65_integer_ = 65,               /* "<integer>"  */
  YYSYMBOL_FLOATT = 66,                    /* "<float>"  */
  YYSYMBOL_STRING_LIT = 67,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 68,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 69,              /* "${"  */
  YYSYMBOL_INTERP_EXP = 70,                /* INTERP_EXP  */
  YYSYMBOL_PP_COMMENT = 71,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 72,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 73,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 74,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 75,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 76,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 77,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 78,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 79,                  /* "#if"  */
  YYSYMBOL_PP_NL = 80,                     /* "\n"  */
  YYSYMBOL_PP_IMPORT = 81,                 /* "import"  */
  YYSYMBOL_SPREAD = 82,                    /* "}..."  */
  YYSYMBOL_INTERP_LIT = 83,                /* "<interp string lit>"  */
  YYSYMBOL_INTERP_END = 84,                /* "<interp string end>"  */
  YYSYMBOL_85_operator_id_ = 85,           /* "@<operator id>"  */
  YYSYMBOL_ID = 86,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 87,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 88,                  /* "++"  */
  YYSYMBOL_MINUS = 89,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 90,                /* "--"  */
  YYSYMBOL_TIMES = 91,                     /* "*"  */
  YYSYMBOL_DIVIDE = 92,                    /* "/"  */
  YYSYMBOL_PERCENT = 93,                   /* "%"  */
  YYSYMBOL_DOLLAR = 94,                    /* "$"  */
  YYSYMBOL_QUESTION = 95,                  /* "?"  */
  YYSYMBOL_OPTIONS = 96,                   /* OPTIONS  */
  YYSYMBOL_COLON = 97,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 98,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 99,             /* "?:"  */
  YYSYMBOL_NEW = 100,                      /* "new"  */
  YYSYMBOL_SPORK = 101,                    /* "spork"  */
  YYSYMBOL_FORK = 102,                     /* "fork"  */
  YYSYMBOL_L_HACK = 103,                   /* "<<<"  */
  YYSYMBOL_R_HACK = 104,                   /* ">>>"  */
  YYSYMBOL_AND = 105,                      /* "&&"  */
  YYSYMBOL_EQ = 106,                       /* "=="  */
  YYSYMBOL_GE = 107,                       /* ">="  */
  YYSYMBOL_GT = 108,                       /* ">"  */
  YYSYMBOL_LE = 109,                       /* "<="  */
  YYSYMBOL_LT = 110,                       /* "<"  */
  YYSYMBOL_NEQ = 111,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 112,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 113,              /* ">>"  */
  YYSYMBOL_S_AND = 114,                    /* "&"  */
  YYSYMBOL_S_OR = 115,                     /* "|"  */
  YYSYMBOL_S_XOR = 116,                    /* "^"  */
  YYSYMBOL_OR = 117,                       /* "||"  */
  YYSYMBOL_TMPL = 118,                     /* ":["  */
  YYSYMBOL_TILDA = 119,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 120,              /* "!"  */
  YYSYMBOL_AROBASE = 121,                  /* "@"  */
  YYSYMBOL_DYNOP = 122,                    /* "<dynamic_operator>"  */
  YYSYMBOL_LOCALE_EXP = 123,               /* "`foo`"  */
  YYSYMBOL_RANGE_EMPTY = 124,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 125,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 126,                   /* UTIMES  */
  YYSYMBOL_127_ = 127,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 128,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 129,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 130,                 /* $accept  */
  YYSYMBOL_prg = 131,                      /* prg  */
  YYSYMBOL_ast = 132,                      /* ast  */
  YYSYMBOL_section = 133,                  /* section  */
  YYSYMBOL_class_flag = 134,               /* class_flag  */
  YYSYMBOL_class_def = 135,                /* class_def  */
  YYSYMBOL_trait_stmt = 136,               /* trait_stmt  */
  YYSYMBOL_trait_stmt_list = 137,          /* trait_stmt_list  */
  YYSYMBOL_trait_section = 138,            /* trait_section  */
  YYSYMBOL_trait_ast = 139,                /* trait_ast  */
  YYSYMBOL_trait_body = 140,               /* trait_body  */
  YYSYMBOL_trait_def = 141,                /* trait_def  */
  YYSYMBOL_integer = 142,                  /* integer  */
  YYSYMBOL_number = 143,                   /* number  */
  YYSYMBOL_prim_def = 144,                 /* prim_def  */
  YYSYMBOL_class_ext = 145,                /* class_ext  */
  YYSYMBOL_traits = 146,                   /* traits  */
  YYSYMBOL_extend_def = 147,               /* extend_def  */
  YYSYMBOL_class_body = 148,               /* class_body  */
  YYSYMBOL_id_list = 149,                  /* id_list  */
  YYSYMBOL_specialized_list = 150,         /* specialized_list  */
  YYSYMBOL_stmt_list = 151,                /* stmt_list  */
  YYSYMBOL_fptr_base = 152,                /* fptr_base  */
  YYSYMBOL__func_effects = 153,            /* _func_effects  */
  YYSYMBOL_func_effects = 154,             /* func_effects  */
  YYSYMBOL_func_base = 155,                /* func_base  */
  YYSYMBOL_fptr_def = 156,                 /* fptr_def  */
  YYSYMBOL_typedef_when = 157,             /* typedef_when  */
  YYSYMBOL_type_def_type = 158,            /* type_def_type  */
  YYSYMBOL_type_def = 159,                 /* type_def  */
  YYSYMBOL_type_decl_array = 160,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 161,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 162,          /* type_decl_empty  */
  YYSYMBOL_arg = 163,                      /* arg  */
  YYSYMBOL_arg_list = 164,                 /* arg_list  */
  YYSYMBOL_locale_arg = 165,               /* locale_arg  */
  YYSYMBOL_locale_list = 166,              /* locale_list  */
  YYSYMBOL_fptr_arg = 167,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 168,                /* fptr_list  */
  YYSYMBOL_code_stmt = 169,                /* code_stmt  */
  YYSYMBOL_code_list = 170,                /* code_list  */
  YYSYMBOL_stmt_pp = 171,                  /* stmt_pp  */
  YYSYMBOL_stmt = 172,                     /* stmt  */
  YYSYMBOL_spread_stmt = 173,              /* spread_stmt  */
  YYSYMBOL_174_1 = 174,                    /* $@1  */
  YYSYMBOL_retry_stmt = 175,               /* retry_stmt  */
  YYSYMBOL_handler = 176,                  /* handler  */
  YYSYMBOL_177_2 = 177,                    /* $@2  */
  YYSYMBOL_handler_list = 178,             /* handler_list  */
  YYSYMBOL_try_stmt = 179,                 /* try_stmt  */
  YYSYMBOL_opt_id = 180,                   /* opt_id  */
  YYSYMBOL_opt_comma = 181,                /* opt_comma  */
  YYSYMBOL_enum_value = 182,               /* enum_value  */
  YYSYMBOL_enum_list = 183,                /* enum_list  */
  YYSYMBOL_enum_def = 184,                 /* enum_def  */
  YYSYMBOL_when_exp = 185,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 186,          /* match_case_stmt  */
  YYSYMBOL_match_list = 187,               /* match_list  */
  YYSYMBOL_match_stmt = 188,               /* match_stmt  */
  YYSYMBOL_flow = 189,                     /* flow  */
  YYSYMBOL_loop_stmt = 190,                /* loop_stmt  */
  YYSYMBOL_defer_stmt = 191,               /* defer_stmt  */
  YYSYMBOL_selection_stmt = 192,           /* selection_stmt  */
  YYSYMBOL_breaks = 193,                   /* breaks  */
  YYSYMBOL_jump_stmt = 194,                /* jump_stmt  */
  YYSYMBOL_exp_stmt = 195,                 /* exp_stmt  */
  YYSYMBOL_exp = 196,                      /* exp  */
  YYSYMBOL_binary_exp = 197,               /* binary_exp  */
  YYSYMBOL_call_template = 198,            /* call_template  */
  YYSYMBOL_op = 199,                       /* op  */
  YYSYMBOL_array_exp = 200,                /* array_exp  */
  YYSYMBOL_array_empty = 201,              /* array_empty  */
  YYSYMBOL_dict_list = 202,                /* dict_list  */
  YYSYMBOL_range = 203,                    /* range  */
  YYSYMBOL_array = 204,                    /* array  */
  YYSYMBOL_decl_exp = 205,                 /* decl_exp  */
  YYSYMBOL_func_args = 206,                /* func_args  */
  YYSYMBOL_fptr_args = 207,                /* fptr_args  */
  YYSYMBOL_decl_template = 208,            /* decl_template  */
  YYSYMBOL_global = 209,                   /* global  */
  YYSYMBOL_opt_global = 210,               /* opt_global  */
  YYSYMBOL_storage_flag = 211,             /* storage_flag  */
  YYSYMBOL_access_flag = 212,              /* access_flag  */
  YYSYMBOL_flag = 213,                     /* flag  */
  YYSYMBOL_final = 214,                    /* final  */
  YYSYMBOL_modifier = 215,                 /* modifier  */
  YYSYMBOL_func_def_base = 216,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 217,            /* abstract_fdef  */
  YYSYMBOL_op_op = 218,                    /* op_op  */
  YYSYMBOL_op_base = 219,                  /* op_base  */
  YYSYMBOL_operator = 220,                 /* operator  */
  YYSYMBOL_op_def = 221,                   /* op_def  */
  YYSYMBOL_func_def = 222,                 /* func_def  */
  YYSYMBOL_type_decl_base = 223,           /* type_decl_base  */
  YYSYMBOL_type_decl_tmpl = 224,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_noflag = 225,         /* type_decl_noflag  */
  YYSYMBOL_option = 226,                   /* option  */
  YYSYMBOL_type_decl_opt = 227,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 228,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 229,           /* type_decl_flag  */
  YYSYMBOL_opt_var = 230,                  /* opt_var  */
  YYSYMBOL_type_decl_flag2 = 231,          /* type_decl_flag2  */
  YYSYMBOL_union_decl = 232,               /* union_decl  */
  YYSYMBOL_union_list = 233,               /* union_list  */
  YYSYMBOL_union_def = 234,                /* union_def  */
  YYSYMBOL_var_decl = 235,                 /* var_decl  */
  YYSYMBOL_arg_decl = 236,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 237,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 238,                    /* eq_op  */
  YYSYMBOL_rel_op = 239,                   /* rel_op  */
  YYSYMBOL_shift_op = 240,                 /* shift_op  */
  YYSYMBOL_add_op = 241,                   /* add_op  */
  YYSYMBOL_mul_op = 242,                   /* mul_op  */
  YYSYMBOL_opt_exp = 243,                  /* opt_exp  */
  YYSYMBOL_con_exp = 244,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 245,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 246,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 247,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 248,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 249,                  /* and_exp  */
  YYSYMBOL_eq_exp = 250,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 251,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 252,                /* shift_exp  */
  YYSYMBOL_add_exp = 253,                  /* add_exp  */
  YYSYMBOL_mul_exp = 254,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 255,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 256,                 /* cast_exp  */
  YYSYMBOL_unary_op = 257,                 /* unary_op  */
  YYSYMBOL_unary_exp = 258,                /* unary_exp  */
  YYSYMBOL_lambda_list = 259,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 260,               /* lambda_arg  */
  YYSYMBOL_type_list = 261,                /* type_list  */
  YYSYMBOL_call_paren = 262,               /* call_paren  */
  YYSYMBOL_post_op = 263,                  /* post_op  */
  YYSYMBOL_dot_exp = 264,                  /* dot_exp  */
  YYSYMBOL_post_exp = 265,                 /* post_exp  */
  YYSYMBOL_interp_exp = 266,               /* interp_exp  */
  YYSYMBOL_interp = 267,                   /* interp  */
  YYSYMBOL_capture = 268,                  /* capture  */
  YYSYMBOL__captures = 269,                /* _captures  */
  YYSYMBOL_captures = 270,                 /* captures  */
  YYSYMBOL_array_lit_end = 271,            /* array_lit_end  */
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
#define YYFINAL  230
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2710

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  357
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  637

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
       0,   188,   188,   189,   192,   196,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   214,   216,   223,   232,
     236,   237,   241,   247,   248,   252,   256,   261,   261,   263,
     269,   270,   271,   272,   274,   281,   285,   285,   286,   286,
     288,   293,   293,   295,   300,   306,   314,   320,   324,   329,
     332,   332,   333,   333,   335,   338,   344,   344,   345,   345,
     346,   355,   355,   357,   361,   366,   370,   375,   380,   389,
     400,   408,   409,   419,   421,   425,   431,   433,   437,   438,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   454,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   471,   471,   481,   486,   486,   487,
     492,   508,   513,   513,   514,   514,   517,   518,   524,   529,
     535,   540,   540,   543,   555,   559,   564,   575,   586,   587,
     591,   600,   610,   620,   631,   644,   662,   671,   685,   699,
     708,   719,   719,   721,   726,   730,   735,   741,   746,   752,
     753,   764,   765,   766,   767,   770,   770,   772,   772,   772,
     772,   772,   775,   776,   779,   783,   784,   785,   789,   790,
     793,   794,   795,   799,   799,   800,   801,   802,   808,   808,
     809,   809,   811,   812,   818,   823,   825,   826,   826,   828,
     828,   830,   831,   834,   835,   836,   837,   840,   840,   842,
     842,   845,   850,   857,   863,   871,   880,   880,   880,   880,
     880,   882,   892,   901,   911,   917,   917,   919,   921,   923,
     926,   926,   926,   927,   933,   940,   949,   950,   964,   965,
     969,   970,   973,   973,   973,   974,   975,   975,   978,   979,
     981,   981,   983,   983,   986,   990,   992,   996,  1002,  1011,
    1013,  1014,  1014,  1016,  1016,  1017,  1017,  1017,  1017,  1018,
    1018,  1019,  1019,  1020,  1020,  1020,  1022,  1022,  1023,  1024,
    1026,  1029,  1029,  1030,  1030,  1031,  1031,  1032,  1032,  1033,
    1033,  1034,  1034,  1035,  1035,  1036,  1036,  1037,  1037,  1038,
    1038,  1039,  1039,  1041,  1041,  1044,  1044,  1044,  1045,  1045,
    1048,  1049,  1050,  1051,  1052,  1055,  1056,  1057,  1058,  1059,
    1060,  1063,  1068,  1073,  1073,  1076,  1080,  1086,  1086,  1088,
    1088,  1090,  1099,  1100,  1102,  1104,  1107,  1109,  1113,  1114,
    1115,  1117,  1118,  1129,  1129,  1131,  1132,  1133,  1133,  1134,
    1134,  1136,  1137,  1140,  1141,  1142,  1143,  1144,  1152,  1153,
    1154,  1155,  1156,  1162,  1163,  1164,  1165,  1166
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
  "OPID_A", "LOCALE", "LOCALE_INI", "LOCALE_END", "late", "DECIMAL",
  "BINARY", "HEXA", "OCTAL", "<integer>", "<float>", "<litteral string>",
  "<litteral char>", "${", "INTERP_EXP", "<comment>", "#include",
  "#define", "#pragma", "#undef", "#ifdef", "#ifndef", "#else", "#if",
  "\n", "import", "}...", "<interp string lit>", "<interp string end>",
  "@<operator id>", "<identifier>", "+", "++", "-", "--", "*", "/", "%",
  "$", "?", "OPTIONS", ":", "::", "?:", "new", "spork", "fork", "<<<",
  ">>>", "&&", "==", ">=", ">", "<=", "<", "!=", "<<", ">>", "&", "|", "^",
  "||", ":[", "~", "!", "@", "<dynamic_operator>", "`foo`", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "=", "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg",
  "ast", "section", "class_flag", "class_def", "trait_stmt",
  "trait_stmt_list", "trait_section", "trait_ast", "trait_body",
  "trait_def", "integer", "number", "prim_def", "class_ext", "traits",
  "extend_def", "class_body", "id_list", "specialized_list", "stmt_list",
  "fptr_base", "_func_effects", "func_effects", "func_base", "fptr_def",
  "typedef_when", "type_def_type", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "locale_arg",
  "locale_list", "fptr_arg", "fptr_list", "code_stmt", "code_list",
  "stmt_pp", "stmt", "spread_stmt", "$@1", "retry_stmt", "handler", "$@2",
  "handler_list", "try_stmt", "opt_id", "opt_comma", "enum_value",
  "enum_list", "enum_def", "when_exp", "match_case_stmt", "match_list",
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
};
#endif

#define YYPACT_NINF (-471)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-264)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     615,  -471,  1714,  1877,   726,   266,  -471,    78,  -471,  1167,
    -471,    81,    93,   103,  2438,   266,  1571,  -471,  -471,  1167,
     -30,   116,   266,   266,   100,   157,   100,   266,  -471,  -471,
     266,   266,  -471,    49,  1167,    74,    21,    95,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  1833,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,  -471,   157,   157,   461,   461,  2438,  -471,  -471,
    -471,   190,   615,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    1167,  -471,   266,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
    -471,  -471,   188,  -471,  -471,  -471,    42,  -471,  -471,   200,
      33,  -471,  -471,  -471,  -471,   345,  -471,  -471,  -471,   266,
    -471,  -471,   138,   115,   117,   109,   134,   110,   212,   -38,
     152,   240,   154,   195,  2570,  -471,   202,  -471,  -471,    22,
     232,  -471,  -471,  2438,  -471,   304,   308,  -471,  -471,  -471,
    -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,  -471,
     310,  -471,   320,  -471,  -471,  -471,  -471,  2438,   237,   248,
    -471,   837,    28,   329,  -471,  -471,  -471,  -471,   337,  -471,
    -471,   224,   236,  2438,   269,  2504,  1615,   257,   334,   260,
    -471,   344,   317,  -471,  -471,  -471,   265,   282,   267,  -471,
     268,   266,  -471,    30,  -471,   258,   238,   314,   170,  -471,
     352,    50,  -471,   274,   357,   157,   277,   270,  -471,  -471,
     279,   361,   283,  1976,  1833,  -471,   298,  -471,  -471,  -471,
     365,   948,   -26,  -471,  -471,   363,  -471,  -471,   363,   271,
    -471,  -471,  -471,   157,  2438,  -471,   371,  -471,  2438,  2438,
    2438,  2438,   193,   337,  2588,    51,   157,   157,  2438,  2570,
    2570,  2570,  2570,  2570,  2570,  -471,  -471,  2570,  2570,  2570,
    -471,  2570,  -471,  2570,  2570,   157,  -471,   366,  1877,   293,
     157,   373,  -471,  -471,  -471,  1833,    73,  -471,  -471,   372,
    2042,  -471,  -471,  -471,  -471,  2438,  -471,   186,    96,  -471,
     157,  -471,   157,   376,  2438,   379,    52,  1615,    29,   362,
     374,  -471,  -471,  -471,   317,   272,   346,  -471,  -471,   272,
     290,   157,   238,   305,  -471,    50,  -471,  -471,  -471,  2108,
    -471,   386,  -471,  -471,   333,   312,   369,   316,   272,   305,
    -471,   157,   398,  -471,   347,  -471,  1833,  2438,  -471,  1059,
    -471,   321,  -471,     4,   948,  -471,  -471,  -471,   322,   403,
    -471,  -471,  -471,  -471,  -471,   337,   407,   111,   337,   272,
     272,  -471,  -471,   272,    47,  -471,   315,  -471,   115,   117,
     109,   134,   110,   212,   -38,   152,   240,   154,   195,  -471,
     948,  -471,    40,  -471,  -471,   198,  2174,  -471,  -471,  -471,
    -471,   408,    45,  -471,   331,  -471,   288,  -471,  -471,   332,
     335,  1167,   412,  2438,  1167,  2240,   336,   406,  2438,  -471,
      53,   150,   -30,  -471,    14,   368,  -471,   290,   305,   205,
     272,  -471,  -471,   325,  -471,  -471,   415,  2306,  -471,   421,
    -471,   331,  -471,   292,   339,   341,   425,   272,   419,    68,
    -471,   426,   431,   157,  -471,  -471,   433,  -471,  -471,  -471,
    -471,   272,  1167,   429,  -471,  -471,  -471,  -471,   435,   436,
     437,  2438,  -471,  -471,  2570,    35,   439,   157,  -471,  -471,
     441,  -471,  2438,  -471,   351,   157,  -471,   272,   272,   434,
    -471,    57,  -471,  1167,   444,   356,  -471,  2438,   430,   432,
    -471,  -471,   338,  -471,   451,  1167,   448,   290,   227,   157,
     290,   457,   454,  -471,  1369,  -471,   357,  -471,   375,  -471,
    -471,  -471,  -471,   157,  -471,  -471,  -471,  -471,  -471,   275,
    -471,   157,   363,   463,  -471,   446,  -471,  -471,   157,   157,
     157,   466,  -471,  -471,  2372,  -471,  -471,  -471,  -471,  2438,
    -471,   357,  -471,  1167,  1167,  -471,  1167,   406,    62,  2438,
     378,  1167,   391,   150,   467,  -471,  -471,  -471,    34,  -471,
    -471,   469,   615,  -471,  1470,  -471,  1268,  -471,  -471,  -471,
     369,  -471,  -471,   477,   395,  -471,    25,   401,  -471,  -471,
     363,  2438,   481,   483,   485,   487,   409,  -471,    79,   486,
    -471,  -471,  -471,  2438,  1167,  -471,  1167,  -471,  -471,  -471,
    -471,   491,   290,   615,   615,   489,  -471,  -471,  -471,   488,
    -471,   498,  -471,  -471,  -471,  -471,    79,  -471,   157,  -471,
    -471,  -471,  -471,    75,  -471,  1167,  -471,  -471,   497,  -471,
    -471,  -471,   496,  1167,  -471,  -471,  -471
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,   148,     0,   267,     0,   196,   242,     0,   128,     0,
     129,     0,     0,     0,     0,   196,     0,   141,   142,     0,
     113,     0,   196,   196,   188,     0,   215,   196,    58,    59,
     196,   196,   239,     0,     0,   314,     0,     0,   238,    30,
      31,    32,    33,   343,   345,   346,     0,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   341,   319,
     295,   320,   296,     0,     0,     0,     0,     0,   299,   298,
     352,     0,     2,     4,     8,     9,    34,   342,    15,    10,
       6,    13,   196,    14,    96,    99,    47,   103,   102,   101,
      11,    97,     0,    94,   100,    95,     0,    98,    93,     0,
     149,   349,   151,   220,   221,     0,   222,     7,   243,   196,
      12,   175,   268,   271,   273,   275,   277,   279,   281,   283,
     285,   287,   289,   291,     0,   293,   338,   297,   327,   300,
     344,   322,   357,     0,   261,   295,   296,   264,   265,   161,
     157,   258,   256,   257,   255,   158,   259,   260,   159,   160,
       0,   206,     0,   208,   207,   210,   209,     0,   266,     0,
      76,     0,   149,     0,   189,   186,   191,   192,     0,   190,
     194,   193,   198,     0,     0,     0,     0,     0,     0,     0,
     144,     0,     0,   112,   356,   106,     0,   198,     0,   187,
       0,   196,   226,     0,    64,     0,   156,   230,   234,   236,
      62,     0,   216,     0,     0,     0,     0,     0,   138,   311,
     313,     0,     0,     0,     0,   328,     0,   331,   310,    63,
     305,     0,     0,   306,   302,     0,   307,   303,     0,     0,
       1,     5,    48,     0,     0,   146,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,   253,   254,     0,     0,     0,
     262,     0,   263,     0,     0,     0,   301,     0,     0,     0,
       0,     0,   323,   324,   326,     0,     0,   351,   355,     0,
       0,   340,   339,   347,    77,     0,   348,     0,     0,   195,
       0,   197,     0,     0,     0,   341,     0,     0,     0,     0,
       0,   143,   107,   109,   111,   185,   198,   200,    16,   185,
      38,     0,   156,     0,   228,     0,   232,   233,   235,     0,
     173,   174,    61,   237,     0,     0,    52,     0,   185,     0,
     312,    72,     0,    92,     0,   329,     0,   267,    78,     0,
     333,     0,   335,     0,     0,   308,   309,   350,     0,     0,
     145,   150,   154,   152,   153,     0,     0,     0,     0,   185,
     185,   218,   217,   185,     0,   266,     0,   270,   272,   274,
     276,   278,   280,   282,   284,   286,   288,   290,   292,   294,
       0,   353,     0,   321,   315,     0,     0,   325,   332,   172,
     171,     0,   168,   179,     0,    67,     0,   202,   201,     0,
       0,     0,     0,     0,     0,     0,     0,   241,     0,   124,
       0,     0,   113,   110,     0,    37,   199,    38,     0,     0,
     185,   229,    43,     0,   231,   165,     0,     0,   167,     0,
     181,   252,    74,     0,     0,    53,     0,   185,     0,     0,
      69,    71,     0,    72,    91,   330,     0,    79,   334,   337,
     336,   185,     0,     0,   219,   224,   223,   214,     0,     0,
       0,   267,   249,   176,     0,   149,   162,     0,   155,   318,
       0,   170,     0,   250,    66,     0,   178,   185,   185,   139,
     131,     0,   136,     0,     0,     0,   240,     0,   122,   127,
     125,   116,     0,   118,   115,     0,     0,    38,     0,     0,
      38,     0,    39,    28,     0,    29,     0,    40,     0,   166,
      35,   251,    73,     0,   180,    50,    51,    55,    49,     0,
     104,     0,     0,     0,   304,    56,   130,   225,     0,     0,
       0,     0,   269,   354,     0,   163,   316,   317,   169,     0,
      68,     0,    54,     0,     0,   132,     0,   241,     0,     0,
       0,     0,     0,   114,     0,   108,   184,    45,     0,   182,
      36,     0,    42,    21,    23,    25,     0,    20,    19,    24,
      52,    44,    75,   226,     0,   246,     0,     0,    70,   204,
       0,     0,     0,     0,     0,     0,     0,   164,    65,     0,
     140,   137,   133,     0,     0,   121,     0,   126,   117,   119,
     120,     0,    38,    42,    41,     0,    22,    27,    26,     0,
     244,     0,   248,   247,   105,   203,    57,    60,     0,   212,
     213,   177,   205,     0,   134,   123,   183,    46,     0,    18,
     227,   245,     0,     0,    17,   211,   135
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -471,  -471,   509,   -68,   217,  -471,   -54,  -471,   -55,  -471,
    -471,  -471,  -471,  -390,  -471,  -471,  -403,  -471,   -91,  -267,
    -471,    -3,  -471,  -471,   -57,  -471,  -471,  -471,  -471,  -471,
     -61,    15,   -16,  -270,  -471,  -471,    72,     5,  -471,  -471,
     -60,  -462,    -9,  -471,  -471,  -471,   213,  -471,  -471,  -471,
     107,  -471,   -32,  -471,  -471,  -471,   121,  -471,  -471,   358,
    -471,  -471,  -471,  -471,  -471,  -165,    77,     1,  -170,  -471,
    -193,  -471,    54,   404,  -471,    97,  -178,  -449,  -290,    91,
    -471,   370,  -471,    13,  -163,  -471,  -471,  -471,   295,   301,
    -471,  -471,  -470,   353,  -471,   229,  -471,   355,  -471,   -23,
      -2,  -471,   -28,  -471,  -471,   -29,   123,  -471,  -471,  -110,
    -106,  -105,  -101,  -232,  -237,  -471,   309,   318,   313,   319,
     323,   311,   328,   307,   306,   324,   326,   -83,   -15,  -471,
    -471,  -471,  -471,   -98,  -471,  -471,  -191,  -471,   228,  -471,
     -13,  -471,  -471
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    71,   604,    73,   186,    74,   563,   564,   565,   566,
     505,    75,    76,    77,    78,   500,   419,    79,   605,   423,
     498,    80,   204,   435,   436,   168,    81,   582,    82,    83,
     194,   220,   394,   440,   396,   441,   442,   432,   433,    84,
     223,    85,    86,    87,   577,    88,   303,   412,   304,    89,
     184,   554,   493,   494,    90,   550,   409,   410,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   271,   151,
     272,   321,   163,   101,   322,   102,   288,   326,   415,   169,
     190,   170,   171,   187,   292,   308,   103,   104,   152,   245,
     105,   106,   107,   196,   197,   198,   318,   199,   200,   108,
     487,   109,   575,   576,   110,   463,   474,   512,   257,   153,
     154,   155,   156,   159,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   210,
     126,   385,   387,   127,   128,   129,   217,   130,   342,   343,
     225,   283,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     174,   161,   201,   219,   231,   162,   226,   320,   258,   195,
     182,   297,   367,   259,   501,   261,   366,   395,   172,   417,
     263,   492,   246,   335,   307,   208,   314,  -156,   179,   268,
     191,   274,   238,   406,   569,   191,   612,   238,   438,   238,
     201,   201,   567,   205,   206,   235,   533,   218,   466,   472,
     224,   227,   461,   228,   361,   191,   183,   570,   404,   165,
     340,   344,   439,   544,   489,   357,   269,   496,   594,   458,
     459,   232,   508,   460,   146,   147,   408,    32,   520,   150,
     158,   633,   201,   173,   388,    38,   175,   601,   341,   244,
     340,   178,   589,   181,   557,   233,   569,   561,   176,   397,
     497,   449,   567,   236,   567,   446,   344,   211,   177,   266,
      59,   573,    61,   267,   455,   189,   192,   202,   341,   185,
     602,   344,   247,   216,   239,   285,   407,   212,   428,   239,
     506,   239,   405,   462,   276,   207,   192,   280,   165,   193,
     270,   239,   421,   416,   229,   445,   360,   518,   239,   240,
     241,   502,   232,   239,   240,   241,   240,   241,   239,   246,
     209,   525,   191,   492,   193,   345,   240,   241,   346,   239,
     285,   239,   348,   240,   241,   239,   296,   453,   240,   241,
     457,   213,   201,   240,   241,   362,   364,   541,   542,   327,
     230,   191,   393,   234,   240,   241,   240,   241,   191,   627,
     240,   241,   467,   237,   311,   540,   468,   381,   503,    32,
     201,    39,    40,    41,    42,   504,   255,    38,   339,   201,
     251,   256,   162,   201,   201,   253,   244,   532,   398,   531,
     363,   558,   252,   248,   279,   559,   491,   249,    32,   134,
     188,   260,   201,   192,   203,    32,    38,   201,   254,   379,
     293,   578,   264,    38,   384,   250,   281,   282,   583,   584,
     585,   164,   165,   258,   201,   316,   317,   201,   259,   201,
     261,   193,   192,   535,   399,   263,   400,   290,   291,   192,
     191,    59,    60,    61,    62,     8,   392,    10,   201,   265,
     334,   216,   475,   355,   476,   420,   513,   456,   514,   222,
     193,   275,   201,   164,   165,   166,   167,   193,   201,   431,
    -262,   349,    68,    69,  -263,   351,   277,   191,   430,   141,
     142,   143,   144,   306,   291,   365,   278,    32,   507,   508,
     232,   262,   137,   138,   280,    38,   352,   353,   354,   568,
     286,   339,   287,   298,   299,   382,   300,   301,   632,   302,
     191,   305,   216,   309,   310,   313,   270,   391,   315,   319,
     324,   573,   325,   328,    32,   330,   331,   329,   336,   332,
     337,   402,    38,   344,   350,   347,   380,   339,   386,   383,
     389,   465,   401,   403,   411,   408,   242,   418,   291,   193,
     414,   422,   479,   427,   429,   482,   426,    32,   192,   568,
     434,   568,   437,   443,   481,    38,   444,   448,   451,   452,
     454,   499,   464,   216,   365,   480,   471,   473,   477,   486,
     201,   478,   485,   466,   510,   515,   193,   516,   517,   519,
     521,   192,   527,    59,    60,    61,    62,   522,   219,   524,
     528,   529,   530,   526,   201,   243,   534,   537,   539,   543,
     546,   536,   201,   547,   549,   553,   556,   551,   508,   193,
     552,   571,   579,   470,    68,    69,     2,   562,     3,   580,
     581,   221,   586,   276,   545,   596,   201,   598,   600,   603,
     610,   611,   484,   614,   617,   488,   555,   618,   548,   622,
     201,   619,    20,   620,   630,   462,   201,   431,   201,   626,
     629,   631,   635,   574,   426,   201,   201,   201,   634,    72,
     606,   608,   628,   609,   560,   523,    35,   413,   572,   495,
     615,   599,    39,    40,    41,    42,   538,    43,    44,    45,
      46,   490,   294,   273,   590,   591,   231,   592,   365,   359,
     588,   289,   597,   356,   424,   593,   312,    58,   613,    59,
      60,    61,    62,   201,   511,    63,   323,   621,   222,   368,
     574,    64,    65,    66,    67,   370,   375,   376,   373,   369,
       0,   450,   371,     0,     0,     0,     0,   372,     0,     0,
      68,    69,   616,     0,    70,   624,   374,   377,     0,     0,
     378,     0,     0,   625,   623,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   426,     0,     0,     0,     0,   232,     0,     1,     0,
       2,     0,     3,     0,   636,     4,   595,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    28,    29,    30,     0,    31,    32,    33,    34,
      35,     0,    36,    37,     0,    38,    39,    40,    41,    42,
       0,    43,    44,    45,    46,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,     0,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,    68,    69,     4,   160,    70,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,     0,     0,    37,     0,    38,    39,    40,    41,
      42,     0,    43,    44,    45,    46,     0,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
      63,     0,     0,     0,     0,     0,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,    68,    69,     4,   284,    70,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     0,     3,    68,    69,     4,   338,
      70,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,     0,     0,    37,     0,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,    68,    69,     4,
     447,    70,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,     0,     0,    37,     0,    38,
      39,    40,    41,    42,     0,    43,    44,    45,    46,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     0,     4,    68,    69,
       6,     7,    70,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,     0,     0,    37,     0,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    63,     0,     0,     0,     0,     0,    64,    65,    66,
      67,     1,     0,     2,     0,     3,     0,     0,   133,   607,
       5,     6,     0,     0,     0,     0,    68,    69,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
      32,     0,     0,    35,     0,    36,    37,     0,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,     0,     0,     0,    64,    65,
      66,    67,     1,     0,     2,     0,     3,     0,     0,   133,
       0,     5,     6,     0,     0,     0,     0,    68,    69,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,    32,     0,     0,    35,     0,    36,    37,     0,    38,
      39,    40,    41,    42,     0,    43,    44,    45,    46,     0,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,    58,     0,    59,    60,    61,
      62,     0,     0,    63,     0,     0,     0,     0,     0,    64,
      65,    66,    67,     1,     0,     2,     0,     3,     0,     0,
     133,     0,     0,     6,     0,     0,     0,     0,    68,    69,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    35,     0,     0,    37,     0,
      38,    39,    40,    41,    42,     0,    43,    44,    45,    46,
       0,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,   180,     0,     2,     0,     3,     0,
       0,   133,     0,     0,     6,     0,     0,     0,     0,    68,
      69,     0,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,    32,     0,   133,    35,     0,     6,     0,
       0,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,    62,     0,     0,    63,     0,    32,     0,     0,
      35,    64,    65,    66,    67,    38,    39,    40,    41,    42,
       0,    43,    44,    45,    46,     0,     0,     0,     0,     0,
      68,    69,     0,     0,    70,     0,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,    62,     0,     0,    63,
       0,     0,     0,     0,     0,    64,    65,    66,    67,     2,
     132,     3,     0,     0,   133,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    68,    69,     0,     0,    70,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,    35,
       0,     0,     0,     0,    38,    39,    40,    41,    42,     0,
      43,    44,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,   134,    59,   135,    61,   136,   137,   138,    63,     0,
     139,     0,     0,     0,    64,    65,    66,    67,     0,     0,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
       0,     0,     0,    68,    69,   148,   149,    70,     2,     0,
       3,     0,     0,   133,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,    32,     0,   133,    35,     0,
       6,     0,     0,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,   214,   215,     0,    58,
       0,    59,    60,    61,    62,     0,     0,    63,     0,    32,
       0,     0,    35,    64,    65,    66,    67,    38,    39,    40,
      41,    42,     0,    43,    44,    45,    46,     0,     0,     0,
       0,     0,    68,    69,     0,     0,    70,     0,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,    62,     0,
       0,    63,     0,     0,   157,     0,     0,    64,    65,    66,
      67,     2,     0,     3,     0,     0,   133,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    68,    69,     0,     0,
      70,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,    35,     0,     0,     0,   333,    38,    39,    40,    41,
      42,     0,    43,    44,    45,    46,     0,     2,     0,     3,
     390,     0,   133,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
      63,     0,     0,    20,     0,     0,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    68,    69,    35,     0,    70,
       0,     0,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,     0,     2,     0,     3,   425,     0,   133,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,    63,     0,     0,    20,
       0,     0,    64,    65,    66,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    68,    69,    35,     0,    70,     0,     0,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,     2,
     469,     3,     0,     0,   133,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,    20,     0,     0,    64,    65,
      66,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    68,    69,    35,
       0,    70,     0,     0,    38,    39,    40,    41,    42,     0,
      43,    44,    45,    46,     0,     2,   483,     3,     0,     0,
     133,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      58,     0,    59,    60,    61,    62,     0,     0,    63,     0,
       0,    20,     0,     0,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    68,    69,    35,     0,    70,     0,     0,
      38,    39,    40,    41,    42,     0,    43,    44,    45,    46,
       0,     2,     0,     3,   509,     0,   133,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,    63,     0,     0,    20,     0,     0,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    68,
      69,    35,     0,    70,     0,     0,    38,    39,    40,    41,
      42,     0,    43,    44,    45,    46,     0,     2,     0,     3,
     587,     0,   133,     0,     0,     6,     0,     0,     0,     0,
       0,     0,    58,     0,    59,    60,    61,    62,     0,     0,
      63,     0,     0,    20,     0,     0,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    68,    69,    35,     0,    70,
       0,     0,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,     0,     2,     0,     3,     0,     0,   133,     0,
       0,     6,     0,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,    62,     0,     0,    63,     0,     0,    20,
       0,     0,    64,    65,    66,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    68,    69,    35,     0,    70,     0,     0,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,     0,     2,
       0,     3,     0,     0,   133,     0,     0,     6,     0,     0,
       0,     0,     0,     0,    58,     0,    59,    60,    61,    62,
       0,     0,    63,     0,     0,    20,     0,     0,    64,    65,
      66,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    68,    69,    35,
       0,    70,     0,     0,    38,    39,    40,    41,    42,     0,
      43,    44,    45,    46,     0,     2,     0,     3,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,     0,    59,    60,    61,    62,     0,     0,    63,     0,
       0,    20,     0,     0,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    35,     0,    70,     0,     0,
       0,    39,    40,    41,    42,     0,    43,    44,    45,    46,
       0,     0,     0,     0,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    59,    60,
      61,    62,     0,     0,    63,     0,     0,     0,     0,     0,
      64,    65,    66,    67,     0,   134,    59,   260,    61,   262,
     137,   138,     0,     0,   139,     0,     0,     0,     0,    68,
      69,     0,     0,    70,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,   148,
     149
};

static const yytype_int16 yycheck[] =
{
       9,     4,    25,    64,    72,     4,    66,   200,   118,    25,
      19,   176,   249,   119,   417,   120,   248,   287,     5,   309,
     121,   411,   105,   214,   187,    34,   196,     5,    15,     7,
       5,   129,     4,     4,   504,     5,    11,     4,   328,     4,
      63,    64,   504,    30,    31,     3,    11,    63,     8,     4,
      65,    66,     5,    66,     3,     5,    86,   506,     6,    38,
      86,    10,   329,     6,    11,   243,    44,    53,     6,   359,
     360,    80,     4,   363,   112,   113,    23,    52,    10,     2,
       3,     6,   105,     5,   275,    60,     5,    53,   114,   105,
      86,    14,   541,    16,   497,    82,   566,   500,     5,     3,
      86,    97,   564,    61,   566,   337,    10,    86,     5,   124,
      88,    86,    90,   126,     3,    24,    86,    26,   114,     3,
      86,    10,   109,    46,    96,    97,    97,    36,   321,    96,
     420,    96,   297,    86,   133,    86,    86,    97,    38,   114,
     118,    96,   312,   306,    67,   336,   244,   437,    96,   121,
     122,   418,   161,    96,   121,   122,   121,   122,    96,   242,
      86,   451,     5,   553,   114,   225,   121,   122,   228,    96,
      97,    96,   233,   121,   122,    96,   175,   355,   121,   122,
     358,    86,   205,   121,   122,   245,   247,   477,   478,   205,
       0,     5,     6,     5,   121,   122,   121,   122,     5,   602,
     121,   122,     4,     3,   191,   475,     8,   267,     3,    52,
     233,    61,    62,    63,    64,    10,   106,    60,   221,   242,
     105,   111,   221,   246,   247,   116,   242,   464,   288,   461,
     246,     4,   115,    95,   157,     8,    86,    99,    52,    87,
      23,    89,   265,    86,    27,    52,    60,   270,   114,   265,
     173,   521,    98,    60,   270,   117,     8,     9,   528,   529,
     530,    37,    38,   373,   287,    95,    96,   290,   374,   292,
     375,   114,    86,   466,   290,   376,   292,    41,    42,    86,
       5,    88,    89,    90,    91,    16,   285,    18,   311,    94,
     213,   214,     4,   100,     6,   311,     4,   357,     6,    97,
     114,    69,   325,    37,    38,    39,    40,   114,   331,   325,
       6,   234,   119,   120,     6,   238,     6,     5,     6,   107,
     108,   109,   110,    41,    42,   248,     6,    52,     3,     4,
     339,    91,    92,    93,    97,    60,   239,   240,   241,   504,
      11,   344,     5,    86,    10,   268,    86,     3,   618,    32,
       5,    86,   275,    86,    86,    97,   118,   280,    44,     7,
      86,    86,     5,    86,    52,    86,     5,    97,    70,    86,
       5,   294,    60,    10,     3,   104,    10,   380,     5,    86,
       8,   380,     6,     4,    10,    23,    41,    97,    42,   114,
     118,    86,   401,     7,    61,   404,   319,    52,    86,   564,
      31,   566,    86,     5,   403,    60,    59,    86,    86,     6,
       3,    43,    97,   336,   337,     3,     8,    86,    86,    13,
     443,    86,    86,     8,     3,    86,   114,    86,     3,    10,
       4,    86,     3,    88,    89,    90,    91,     6,   499,     6,
       5,     5,     5,   452,   467,   100,     7,     6,    97,    15,
       6,   467,   475,    97,    24,     4,     8,    25,     4,   114,
     122,    86,   522,   386,   119,   120,     5,    10,     7,     6,
      24,    10,     6,   472,   483,    97,   499,    86,    11,    10,
       3,    86,   405,    82,     3,   408,   495,     4,   487,     3,
     513,     6,    31,     6,     6,    86,   519,   513,   521,     8,
      11,     3,     6,   519,   427,   528,   529,   530,    11,     0,
     564,   566,   603,   570,   499,   443,    55,   304,   513,   412,
     580,   553,    61,    62,    63,    64,   472,    66,    67,    68,
      69,   410,   174,   129,   543,   544,   604,   546,   461,   244,
     539,   171,   551,   242,   315,   547,   193,    86,   576,    88,
      89,    90,    91,   576,   431,    94,   201,   586,    97,   250,
     576,   100,   101,   102,   103,   252,   259,   261,   257,   251,
      -1,   343,   253,    -1,    -1,    -1,    -1,   254,    -1,    -1,
     119,   120,   581,    -1,   123,   594,   258,   263,    -1,    -1,
     264,    -1,    -1,   596,   593,   618,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   534,    -1,    -1,    -1,    -1,   625,    -1,     3,    -1,
       5,    -1,     7,    -1,   633,    10,   549,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    57,    58,    -1,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,   119,   120,    10,    11,   123,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,   119,   120,    10,    11,   123,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,   119,   120,    10,    11,
     123,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,   119,   120,    10,
      11,   123,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    -1,    -1,    58,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,    -1,    10,   119,   120,
      13,    14,   123,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,     3,    -1,     5,    -1,     7,    -1,    -1,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    58,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,     3,    -1,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,   119,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    57,    58,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,   103,     3,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   119,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,   103,     3,    -1,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    52,    -1,    10,    55,    -1,    13,    -1,
      -1,    60,    61,    62,    63,    64,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,
      89,    90,    91,    -1,    -1,    94,    -1,    52,    -1,    -1,
      55,   100,   101,   102,   103,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
     119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,   103,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    52,    -1,    10,    55,    -1,
      13,    -1,    -1,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,
      -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,    52,
      -1,    -1,    55,   100,   101,   102,   103,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    -1,    -1,    97,    -1,    -1,   100,   101,   102,
     103,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,
      94,    -1,    -1,    31,    -1,    -1,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,   119,   120,    55,    -1,   123,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    -1,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      88,    89,    90,    91,    -1,    -1,    94,    -1,    -1,    31,
      -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,   119,   120,    55,    -1,   123,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    31,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,   119,   120,    55,
      -1,   123,    -1,    -1,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,
      -1,    31,    -1,    -1,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,   119,   120,    55,    -1,   123,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    -1,    -1,    31,    -1,    -1,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,   119,
     120,    55,    -1,   123,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    -1,     5,    -1,     7,
       8,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    89,    90,    91,    -1,    -1,
      94,    -1,    -1,    31,    -1,    -1,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,   119,   120,    55,    -1,   123,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    -1,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      88,    89,    90,    91,    -1,    -1,    94,    -1,    -1,    31,
      -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,   119,   120,    55,    -1,   123,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    31,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,   119,   120,    55,
      -1,   123,    -1,    -1,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    69,    -1,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    88,    89,    90,    91,    -1,    -1,    94,    -1,
      -1,    31,    -1,    -1,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    55,    -1,   123,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,   103,    -1,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    96,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,   123,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     5,     7,    10,    12,    13,    14,    16,    17,
      18,    19,    20,    21,    22,    26,    27,    28,    29,    30,
      31,    33,    34,    35,    36,    43,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    57,    58,    60,    61,
      62,    63,    64,    66,    67,    68,    69,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    86,    88,
      89,    90,    91,    94,   100,   101,   102,   103,   119,   120,
     123,   131,   132,   133,   135,   141,   142,   143,   144,   147,
     151,   156,   158,   159,   169,   171,   172,   173,   175,   179,
     184,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   203,   205,   216,   217,   220,   221,   222,   229,   231,
     234,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   260,   263,   264,   265,
     267,   272,     6,    10,    87,    89,    91,    92,    93,    96,
     106,   107,   108,   109,   110,   111,   112,   113,   121,   122,
     196,   199,   218,   239,   240,   241,   242,    97,   196,   243,
      11,   151,   197,   202,    37,    38,    39,    40,   155,   209,
     211,   212,   213,     5,   172,     5,     5,     5,   196,   213,
       3,   196,   172,    86,   180,     3,   134,   213,   134,   209,
     210,     5,    86,   114,   160,   162,   223,   224,   225,   227,
     228,   229,   209,   134,   152,   213,   213,    86,   172,    86,
     259,    86,   209,    86,    83,    84,   196,   266,   162,   160,
     161,    10,    97,   170,   258,   270,   170,   258,   270,   196,
       0,   133,   172,   213,     5,     3,    61,     3,     4,    96,
     121,   122,    41,   100,   162,   219,   257,   213,    95,    99,
     117,   105,   115,   116,   114,   106,   111,   238,   239,   240,
      89,   241,    91,   242,    98,    94,   258,   270,     7,    44,
     118,   198,   200,   203,   263,    69,   197,     6,     6,   196,
      97,     8,     9,   271,    11,    97,    11,     5,   206,   211,
      41,    42,   214,   196,   189,    86,   197,   195,    86,    10,
      86,     3,    32,   176,   178,    86,    41,   214,   215,    86,
      86,   213,   223,    97,   198,    44,    95,    96,   226,     7,
     200,   201,   204,   227,    86,     5,   207,   162,    86,    97,
      86,     5,    86,    59,   196,   266,    70,     5,    11,   151,
      86,   114,   268,   269,    10,   170,   170,   104,   160,   196,
       3,   196,   205,   205,   205,   100,   219,   206,    56,   218,
     263,     3,   170,   162,   160,   196,   243,   244,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   162,
      10,   170,   196,    86,   162,   261,     5,   262,   266,     8,
       8,   196,   197,     6,   162,   163,   164,     3,   170,   162,
     162,     6,   196,     4,     6,   195,     4,    97,    23,   186,
     187,    10,   177,   176,   118,   208,   214,   208,    97,   146,
     162,   198,    86,   149,   225,     8,   196,     7,   200,    61,
       6,   162,   167,   168,    31,   153,   154,    86,   208,   149,
     163,   165,   166,     5,    59,   266,   243,    11,    86,    97,
     268,    86,     6,   206,     3,     3,   170,   206,   208,   208,
     208,     5,    86,   235,    97,   197,     8,     4,     8,     6,
     196,     8,     4,    86,   236,     4,     6,    86,    86,   172,
       3,   197,   172,     6,   196,    86,    13,   230,   196,    11,
     186,    86,   143,   182,   183,   180,    53,    86,   150,    43,
     145,   146,   149,     3,    10,   140,   208,     3,     4,     8,
       3,   236,   237,     4,     6,    86,    86,     3,   208,    10,
      10,     4,     6,   166,     6,   208,   172,     3,     5,     5,
       5,   243,   244,    11,     7,   200,   162,     6,   202,    97,
     163,   208,   208,    15,     6,   172,     6,    97,   197,    24,
     185,    25,   122,     4,   181,   172,     8,   146,     4,     8,
     161,   146,    10,   136,   137,   138,   139,   171,   195,   222,
     207,    86,   167,    86,   162,   232,   233,   174,   163,   170,
       6,    24,   157,   163,   163,   163,     6,     8,   197,   207,
     172,   172,   172,   230,     6,   196,    97,   172,    86,   182,
      11,    53,    86,    10,   132,   148,   136,    11,   138,   154,
       3,    86,    11,   232,    82,   170,   197,     3,     4,     6,
       6,   235,     3,   197,   172,   151,     8,   146,   148,    11,
       6,     3,   163,     6,    11,     6,   172
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   130,   131,   131,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     142,   142,   142,   142,   143,   144,   145,   145,   146,   146,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     153,   153,   154,   154,   155,   156,   157,   157,   158,   158,
     159,   160,   160,   161,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   174,   173,   175,   177,   176,   178,
     178,   179,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   185,   185,   186,   187,   187,   188,   188,   189,   189,
     190,   190,   190,   190,   190,   190,   190,   190,   191,   192,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   196,
     196,   197,   197,   197,   197,   198,   198,   199,   199,   199,
     199,   199,   200,   200,   200,   201,   201,   201,   202,   202,
     203,   203,   203,   204,   204,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   208,   208,   209,   210,   210,   211,
     211,   212,   212,   213,   213,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   216,   217,   218,   218,   218,   218,
     218,   219,   219,   219,   219,   220,   220,   221,   221,   221,
     222,   222,   222,   222,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   226,   227,   228,   228,   229,   229,
     230,   230,   231,   231,   232,   232,   233,   233,   234,   235,
     236,   237,   237,   238,   238,   239,   239,   239,   239,   240,
     240,   241,   241,   242,   242,   242,   243,   243,   244,   244,
     244,   245,   245,   246,   246,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   252,   253,   253,   254,
     254,   255,   255,   256,   256,   257,   257,   257,   257,   257,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   259,   259,   260,   260,   261,   261,   262,   262,   263,
     263,   264,   265,   265,   265,   265,   265,   265,   266,   266,
     266,   267,   267,   268,   268,   269,   269,   270,   270,   271,
     271,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     9,     8,     1,
       1,     1,     2,     1,     1,     1,     2,     3,     1,     5,
       1,     1,     1,     1,     1,     5,     2,     0,     0,     2,
       5,     1,     0,     1,     3,     2,     4,     1,     2,     4,
       2,     2,     0,     1,     5,     5,     0,     2,     1,     1,
       7,     2,     1,     1,     1,     4,     2,     1,     3,     1,
       3,     1,     0,     2,     1,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     2,     0,     4,     1,
       2,     3,     1,     0,     1,     0,     1,     3,     1,     3,
       7,     2,     0,     5,     1,     2,     7,     5,     1,     1,
       5,     5,     6,     7,     8,    10,     5,     7,     2,     5,
       7,     1,     1,     3,     2,     3,     2,     2,     1,     1,
       3,     1,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     3,     5,
       5,     4,     4,     1,     1,     1,     4,     7,     3,     2,
       3,     2,     3,     5,     3,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     0,     2,
       1,     4,     4,     7,     6,     8,     1,     1,     1,     1,
       1,     8,     6,     6,     3,     1,     2,     3,     3,     4,
       1,     1,     1,     4,     4,     5,     1,     7,     2,     3,
       1,     3,     1,     1,     0,     2,     1,     2,     1,     1,
       1,     0,     1,     1,     2,     3,     1,     2,     7,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     5,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     5,     2,     2,     2,     3,     3,
       2,     1,     2,     2,     1,     1,     3,     3,     2,     1,
       1,     3,     1,     2,     2,     3,     2,     1,     1,     2,
       3,     2,     3,     1,     2,     1,     2,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     5,     3,     2,     2
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
#line 2608 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 189 "src/gwion.y"
                { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }
#line 2614 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 192 "src/gwion.y"
            {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2623 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 196 "src/gwion.y"
                {
    mp_vector_add(mpool(arg), &((yyvsp[-1].ast)), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2632 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 202 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2638 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 203 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2644 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 204 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(class, class_def, (yyvsp[0].class_def)); }
#line 2650 "src/parser.c"
    break;

  case 9: /* section: trait_def  */
#line 205 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(trait, trait_def, (yyvsp[0].trait_def)); }
#line 2656 "src/parser.c"
    break;

  case 10: /* section: extend_def  */
#line 206 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(extend, extend_def, (yyvsp[0].extend_def)); }
#line 2662 "src/parser.c"
    break;

  case 11: /* section: enum_def  */
#line 207 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(enum, enum_def, (yyvsp[0].enum_def)); }
#line 2668 "src/parser.c"
    break;

  case 12: /* section: union_def  */
#line 208 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(union, union_def, (yyvsp[0].union_def)); }
#line 2674 "src/parser.c"
    break;

  case 13: /* section: fptr_def  */
#line 209 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(fptr, fptr_def, (yyvsp[0].fptr_def)); }
#line 2680 "src/parser.c"
    break;

  case 14: /* section: type_def  */
#line 210 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(type, type_def, (yyvsp[0].type_def)); }
#line 2686 "src/parser.c"
    break;

  case 15: /* section: prim_def  */
#line 211 "src/gwion.y"
                 { (yyval.section) = MK_SECTION(primitive, prim_def, (yyvsp[0].prim_def)); }
#line 2692 "src/parser.c"
    break;

  case 16: /* class_flag: flag modifier  */
#line 214 "src/gwion.y"
                          { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2698 "src/parser.c"
    break;

  case 17: /* class_def: "class" class_flag "<identifier>" decl_template class_ext traits "{" class_body "}"  */
#line 217 "src/gwion.y"
    {
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-7].flag), (yyvsp[-6].sym), (yyvsp[-4].type_decl), (yyvsp[-1].ast), (yylsp[-6]));
      if((yyvsp[-5].specialized_list))
        (yyval.class_def)->base.tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
      (yyval.class_def)->traits = (yyvsp[-3].id_list);
    }
#line 2709 "src/parser.c"
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
#line 2721 "src/parser.c"
    break;

  case 19: /* trait_stmt: exp_stmt  */
#line 232 "src/gwion.y"
                     {
    if((yyvsp[0].stmt).d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&(yyloc), arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 2731 "src/parser.c"
    break;

  case 21: /* trait_stmt_list: trait_stmt  */
#line 237 "src/gwion.y"
                             {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2740 "src/parser.c"
    break;

  case 22: /* trait_stmt_list: trait_stmt_list trait_stmt  */
#line 241 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2749 "src/parser.c"
    break;

  case 23: /* trait_section: trait_stmt_list  */
#line 247 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(stmt, stmt_list, (yyvsp[0].stmt_list)); }
#line 2755 "src/parser.c"
    break;

  case 24: /* trait_section: func_def  */
#line 248 "src/gwion.y"
                       { (yyval.section) = MK_SECTION(func, func_def, (yyvsp[0].func_def)); }
#line 2761 "src/parser.c"
    break;

  case 25: /* trait_ast: trait_section  */
#line 252 "src/gwion.y"
                  {
    (yyval.ast) = new_mp_vector(mpool(arg), Section, 1);
    mp_vector_set((yyval.ast), Section, 0, (yyvsp[0].section));
  }
#line 2770 "src/parser.c"
    break;

  case 26: /* trait_ast: trait_ast trait_section  */
#line 256 "src/gwion.y"
                            {
    mp_vector_add(mpool(arg), &(yyvsp[-1].ast), Section, (yyvsp[0].section));
    (yyval.ast) = (yyvsp[-1].ast);
  }
#line 2779 "src/parser.c"
    break;

  case 27: /* trait_body: "{" trait_ast "}"  */
#line 261 "src/gwion.y"
                                { (yyval.ast) = (yyvsp[-1].ast); }
#line 2785 "src/parser.c"
    break;

  case 28: /* trait_body: ";"  */
#line 261 "src/gwion.y"
                                                   { (yyval.ast) = NULL; }
#line 2791 "src/parser.c"
    break;

  case 29: /* trait_def: "trait" opt_global "<identifier>" traits trait_body  */
#line 264 "src/gwion.y"
    {
      (yyval.trait_def) = new_trait_def(mpool(arg), (yyvsp[-3].flag), (yyvsp[-2].sym), (yyvsp[0].ast), (yylsp[-2]));
      (yyval.trait_def)->traits = (yyvsp[-1].id_list);
    }
#line 2800 "src/parser.c"
    break;

  case 30: /* integer: DECIMAL  */
#line 269 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2806 "src/parser.c"
    break;

  case 31: /* integer: BINARY  */
#line 270 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2812 "src/parser.c"
    break;

  case 32: /* integer: HEXA  */
#line 271 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2818 "src/parser.c"
    break;

  case 33: /* integer: OCTAL  */
#line 272 "src/gwion.y"
                 { (yyval.gwint) = GWINT((yyvsp[0].yyint).num, (yyvsp[0].yyint).int_type); }
#line 2824 "src/parser.c"
    break;

  case 34: /* number: integer  */
#line 274 "src/gwion.y"
                {
  if((yyvsp[0].gwint).num < 0 || (yyvsp[0].gwint).num > INTPTR_MAX) {
    parser_error(&(yylsp[0]), arg, "number too big", 0); YYERROR;
  }
  (yyval.gwint) = (yyvsp[0].gwint);
}
#line 2835 "src/parser.c"
    break;

  case 35: /* prim_def: "primitive" class_flag "<identifier>" DECIMAL ";"  */
#line 282 "src/gwion.y"
    {
      (yyval.prim_def) = new_prim_def(mpool(arg), (yyvsp[-2].sym), (yyvsp[-1].yyint).num, (yylsp[-2]), (yyvsp[-3].flag));
    }
#line 2843 "src/parser.c"
    break;

  case 36: /* class_ext: "extends" type_decl_exp  */
#line 285 "src/gwion.y"
                                    { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2849 "src/parser.c"
    break;

  case 37: /* class_ext: %empty  */
#line 285 "src/gwion.y"
                                                   { (yyval.type_decl) = NULL; }
#line 2855 "src/parser.c"
    break;

  case 38: /* traits: %empty  */
#line 286 "src/gwion.y"
        { (yyval.id_list) = NULL; }
#line 2861 "src/parser.c"
    break;

  case 39: /* traits: ":" id_list  */
#line 286 "src/gwion.y"
                                     { (yyval.id_list) = (yyvsp[0].id_list); }
#line 2867 "src/parser.c"
    break;

  case 40: /* extend_def: "extends" type_decl_empty ":" id_list ";"  */
#line 288 "src/gwion.y"
                                                      {
  (yyval.extend_def) = new_extend_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-1].id_list));
}
#line 2875 "src/parser.c"
    break;

  case 42: /* class_body: %empty  */
#line 293 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2881 "src/parser.c"
    break;

  case 43: /* id_list: "<identifier>"  */
#line 296 "src/gwion.y"
  {
    (yyval.id_list) = new_mp_vector(mpool(arg), Symbol, 1);
    mp_vector_set((yyval.id_list), Symbol, 0, (yyvsp[0].sym));
  }
#line 2890 "src/parser.c"
    break;

  case 44: /* id_list: id_list "," "<identifier>"  */
#line 301 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].id_list), Symbol, (yyvsp[0].sym));
    (yyval.id_list) = (yyvsp[-2].id_list);
  }
#line 2899 "src/parser.c"
    break;

  case 45: /* specialized_list: "<identifier>" traits  */
#line 306 "src/gwion.y"
                            {
    (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
    mp_vector_set((yyval.specialized_list), Specialized, 0, ((Specialized) {
        .xid = (yyvsp[-1].sym),
        .traits = (yyvsp[0].id_list),
        .pos = (yylsp[-1])
      }));
  }
#line 2912 "src/parser.c"
    break;

  case 46: /* specialized_list: specialized_list "," "<identifier>" traits  */
#line 314 "src/gwion.y"
                                    {
    Specialized spec = { .xid = (yyvsp[-1].sym), .traits = (yyvsp[0].id_list), .pos = (yylsp[-1]) };
    mp_vector_add(mpool(arg), &(yyvsp[-3].specialized_list), Specialized, spec);
    (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  }
#line 2922 "src/parser.c"
    break;

  case 47: /* stmt_list: stmt  */
#line 320 "src/gwion.y"
                {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 2931 "src/parser.c"
    break;

  case 48: /* stmt_list: stmt_list stmt  */
#line 324 "src/gwion.y"
                 {
  mp_vector_add(mpool(arg), &(yyvsp[-1].stmt_list), struct Stmt_, (yyvsp[0].stmt));
  (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 2940 "src/parser.c"
    break;

  case 49: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 329 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag), (yylsp[-2]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2947 "src/parser.c"
    break;

  case 50: /* _func_effects: "perform" "<identifier>"  */
#line 332 "src/gwion.y"
                            { vector_init(&(yyval.vector)); vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2953 "src/parser.c"
    break;

  case 51: /* _func_effects: _func_effects "<identifier>"  */
#line 332 "src/gwion.y"
                                                                                                  { vector_add(&(yyval.vector), (m_uint)(yyvsp[0].sym)); }
#line 2959 "src/parser.c"
    break;

  case 52: /* func_effects: %empty  */
#line 333 "src/gwion.y"
              { (yyval.vector).ptr = NULL; }
#line 2965 "src/parser.c"
    break;

  case 53: /* func_effects: _func_effects  */
#line 333 "src/gwion.y"
                                                 { (yyval.vector).ptr = (yyvsp[0].vector).ptr; }
#line 2971 "src/parser.c"
    break;

  case 54: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 335 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag), (yylsp[-1]));
  if((yyvsp[0].specialized_list)) { (yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[0].specialized_list)); } }
#line 2978 "src/parser.c"
    break;

  case 55: /* fptr_def: "funptr" fptr_base fptr_args func_effects ";"  */
#line 338 "src/gwion.y"
                                                        {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
  (yyval.fptr_def)->base->effects.ptr = (yyvsp[-1].vector).ptr;
}
#line 2988 "src/parser.c"
    break;

  case 56: /* typedef_when: %empty  */
#line 344 "src/gwion.y"
              { (yyval.exp) = NULL;}
#line 2994 "src/parser.c"
    break;

  case 57: /* typedef_when: "when" binary_exp  */
#line 344 "src/gwion.y"
                                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3000 "src/parser.c"
    break;

  case 58: /* type_def_type: "typedef"  */
#line 345 "src/gwion.y"
                         { (yyval.yybool) = false; }
#line 3006 "src/parser.c"
    break;

  case 59: /* type_def_type: "distinct"  */
#line 345 "src/gwion.y"
                                                      { (yyval.yybool) = true; }
#line 3012 "src/parser.c"
    break;

  case 60: /* type_def: type_def_type flag type_decl_array "<identifier>" decl_template typedef_when ";"  */
#line 346 "src/gwion.y"
                                                                               {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), (yylsp[-3]));
  (yyvsp[-4].type_decl)->flag |= (yyvsp[-5].flag);
  (yyval.type_def)->when = (yyvsp[-1].exp);
  if((yyvsp[-2].specialized_list))
    (yyval.type_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
  (yyval.type_def)->distinct = (yyvsp[-6].yybool);
}
#line 3025 "src/parser.c"
    break;

  case 61: /* type_decl_array: type_decl array  */
#line 355 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 3031 "src/parser.c"
    break;

  case 63: /* type_decl_exp: type_decl_array  */
#line 357 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3039 "src/parser.c"
    break;

  case 64: /* type_decl_empty: type_decl_array  */
#line 361 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { parser_error(&(yyloc), arg, "type must be defined with empty []'s", 0204); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3047 "src/parser.c"
    break;

  case 65: /* arg: type_decl_empty arg_decl ":" binary_exp  */
#line 366 "src/gwion.y"
                                            {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-3].type_decl), .var_decl = (yyvsp[-2].var_decl), .exp = (yyvsp[0].exp) };
    (yyval.default_args).flag = fbflag_default;
  }
#line 3056 "src/parser.c"
    break;

  case 66: /* arg: type_decl_empty arg_decl  */
#line 370 "src/gwion.y"
                             {
    (yyval.default_args).arg = (Arg) { .td =  (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl)};
    (yyval.default_args).flag = fbflag_none;
  }
#line 3065 "src/parser.c"
    break;

  case 67: /* arg_list: arg  */
#line 375 "src/gwion.y"
         {
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, (yyvsp[0].default_args).arg);
       (yyval.default_args).flag = (yyvsp[0].default_args).flag;
     }
#line 3075 "src/parser.c"
    break;

  case 68: /* arg_list: arg_list "," arg  */
#line 380 "src/gwion.y"
                              {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3087 "src/parser.c"
    break;

  case 69: /* locale_arg: arg  */
#line 389 "src/gwion.y"
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
#line 3103 "src/parser.c"
    break;

  case 70: /* locale_arg: locale_arg "," arg  */
#line 400 "src/gwion.y"
                                {
     if((yyvsp[-2].default_args).flag == fbflag_default && !(yyvsp[0].default_args).arg.exp)
        { parser_error(&(yylsp[0]), arg, "missing default argument", 0205); YYERROR;}
     else (yyvsp[-2].default_args).flag = (yyvsp[0].default_args).flag;
     mp_vector_add(mpool(arg), &(yyvsp[-2].default_args).args, Arg, (yyvsp[0].default_args).arg);
     (yyval.default_args) = (yyvsp[-2].default_args);
   }
#line 3115 "src/parser.c"
    break;

  case 72: /* locale_list: %empty  */
#line 409 "src/gwion.y"
    {
       Arg self = {
         .td = new_type_decl(mpool(arg), insert_symbol("string"), (yyloc)),
         .var_decl = (struct Var_Decl_) { .xid = insert_symbol("self"), .pos = (yyloc) },
         .exp = NULL
       };
       (yyval.default_args).args = new_mp_vector(mpool(arg), Arg, 1);
       mp_vector_set((yyval.default_args).args, Arg, 0, self);
    }
#line 3129 "src/parser.c"
    break;

  case 73: /* fptr_arg: type_decl_empty fptr_arg_decl  */
#line 419 "src/gwion.y"
                                        { (yyval.arg) = (Arg) { .td = (yyvsp[-1].type_decl), .var_decl = (yyvsp[0].var_decl) }; }
#line 3135 "src/parser.c"
    break;

  case 74: /* fptr_list: fptr_arg  */
#line 421 "src/gwion.y"
           {
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, (yyvsp[0].arg));
  }
#line 3144 "src/parser.c"
    break;

  case 75: /* fptr_list: fptr_list "," fptr_arg  */
#line 425 "src/gwion.y"
                           {
    mp_vector_add(mpool(arg), &(yyvsp[-2].arg_list), Arg, (yyvsp[0].arg));
    (yyval.arg_list) = (yyvsp[-2].arg_list);
  }
#line 3153 "src/parser.c"
    break;

  case 76: /* code_stmt: "{" "}"  */
#line 431 "src/gwion.y"
            {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .pos = (yyloc)}; }
#line 3160 "src/parser.c"
    break;

  case 77: /* code_stmt: "{" stmt_list "}"  */
#line 433 "src/gwion.y"
                      {
    (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_code, .d = { .stmt_code = { .stmt_list = (yyvsp[-1].stmt_list) }}, .pos = (yyloc)}; }
#line 3167 "src/parser.c"
    break;

  case 78: /* code_list: "{" "}"  */
#line 437 "src/gwion.y"
            { (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 0); }
#line 3173 "src/parser.c"
    break;

  case 79: /* code_list: "{" stmt_list "}"  */
#line 438 "src/gwion.y"
                      { (yyval.stmt_list) = (yyvsp[-1].stmt_list); }
#line 3179 "src/parser.c"
    break;

  case 80: /* stmt_pp: "<comment>"  */
#line 441 "src/gwion.y"
               { /*if(!arg->ppa->fmt)return 0; */(yyval.stmt) = MK_STMT_PP(comment, (yyvsp[0].sval), (yyloc)); }
#line 3185 "src/parser.c"
    break;

  case 81: /* stmt_pp: "#include"  */
#line 442 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(include, (yyvsp[0].sval), (yyloc)); }
#line 3191 "src/parser.c"
    break;

  case 82: /* stmt_pp: "#define"  */
#line 443 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(define,  (yyvsp[0].sval), (yyloc)); }
#line 3197 "src/parser.c"
    break;

  case 83: /* stmt_pp: "#pragma"  */
#line 444 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(pragma,  (yyvsp[0].sval), (yyloc)); }
#line 3203 "src/parser.c"
    break;

  case 84: /* stmt_pp: "#undef"  */
#line 445 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(undef,   (yyvsp[0].sval), (yyloc)); }
#line 3209 "src/parser.c"
    break;

  case 85: /* stmt_pp: "#ifdef"  */
#line 446 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 3215 "src/parser.c"
    break;

  case 86: /* stmt_pp: "#ifndef"  */
#line 447 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 3221 "src/parser.c"
    break;

  case 87: /* stmt_pp: "#else"  */
#line 448 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(else,    (yyvsp[0].sval), (yyloc)); }
#line 3227 "src/parser.c"
    break;

  case 88: /* stmt_pp: "#if"  */
#line 449 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(endif,   (yyvsp[0].sval), (yyloc)); }
#line 3233 "src/parser.c"
    break;

  case 89: /* stmt_pp: "\n"  */
#line 450 "src/gwion.y"
               { if(!arg->ppa->fmt)return 0; (yyval.stmt) = MK_STMT_PP(nl,      (yyvsp[0].sval), (yyloc)); }
#line 3239 "src/parser.c"
    break;

  case 90: /* stmt_pp: "import"  */
#line 451 "src/gwion.y"
               { (yyval.stmt) = MK_STMT_PP(import, (yyvsp[0].sval), (yyloc)); }
#line 3245 "src/parser.c"
    break;

  case 91: /* stmt_pp: LOCALE_INI "<identifier>" exp LOCALE_END  */
#line 452 "src/gwion.y"
                                 { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .exp = (yyvsp[-1].exp), .xid = (yyvsp[-2].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-3]) }; }
#line 3252 "src/parser.c"
    break;

  case 92: /* stmt_pp: LOCALE_INI "<identifier>" LOCALE_END  */
#line 454 "src/gwion.y"
                             { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_pp,
  .d = { .stmt_pp = { .xid = (yyvsp[-1].sym), .pp_type = ae_pp_locale, }}, .pos = (yylsp[-2]) }; }
#line 3259 "src/parser.c"
    break;

  case 104: /* $@1: %empty  */
#line 471 "src/gwion.y"
                                      {lex_spread(((Scanner*)scan));}
#line 3265 "src/parser.c"
    break;

  case 105: /* spread_stmt: "..." "<identifier>" ":" id_list "{" $@1 "}..."  */
#line 471 "src/gwion.y"
                                                                             {
  struct Spread_Def_ spread = {
    .xid = (yyvsp[-5].sym),
    .list = (yyvsp[-3].id_list),
    .data = (yyvsp[0].sval),
    .pos = (yylsp[-2]).first
  };
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_spread, .d = { .stmt_spread = spread }, .pos = (yylsp[-5])};
}
#line 3279 "src/parser.c"
    break;

  case 106: /* retry_stmt: "retry" ";"  */
#line 481 "src/gwion.y"
                        {
  if(!arg->handling)
    { parser_error(&(yylsp[-1]), arg, "`retry` outside of `handle` block", 0); YYERROR; }
  (yyval.stmt) = (struct Stmt_){ .stmt_type=ae_stmt_retry, .pos=(yylsp[-1])};
}
#line 3289 "src/parser.c"
    break;

  case 107: /* $@2: %empty  */
#line 486 "src/gwion.y"
                  { arg->handling = true; }
#line 3295 "src/parser.c"
    break;

  case 108: /* handler: "handle" $@2 opt_id stmt  */
#line 486 "src/gwion.y"
                                                        { (yyval.handler) = (Handler){ .xid = (yyvsp[-1].sym), .stmt = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)), .pos = (yyvsp[-1].sym) ? (yylsp[-1]) :(yylsp[-3])}; arg->handling = false; }
#line 3301 "src/parser.c"
    break;

  case 109: /* handler_list: handler  */
#line 487 "src/gwion.y"
                      {
    (yyval.handler_list).handlers = new_mp_vector(mpool(arg), Handler, 1);
    mp_vector_set((yyval.handler_list).handlers, Handler, 0, (yyvsp[0].handler));
    (yyval.handler_list).has_xid = !!(yyvsp[0].handler).xid;
  }
#line 3311 "src/parser.c"
    break;

  case 110: /* handler_list: handler_list handler  */
#line 492 "src/gwion.y"
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
#line 3332 "src/parser.c"
    break;

  case 111: /* try_stmt: "try" stmt handler_list  */
#line 508 "src/gwion.y"
                                  { (yyval.stmt) = (struct Stmt_){ .stmt_type = ae_stmt_try,
  .d = { .stmt_try = { .stmt = cpy_stmt3(mpool(arg), &(yyvsp[-1].stmt)), .handler = (yyvsp[0].handler_list).handlers, }},
  .pos = (yylsp[-2])};
}
#line 3341 "src/parser.c"
    break;

  case 113: /* opt_id: %empty  */
#line 513 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 3347 "src/parser.c"
    break;

  case 115: /* opt_comma: %empty  */
#line 514 "src/gwion.y"
                 {}
#line 3353 "src/parser.c"
    break;

  case 116: /* enum_value: "<identifier>"  */
#line 517 "src/gwion.y"
               { (yyval.enum_value) = (EnumValue) { .xid = (yyvsp[0].sym) }; }
#line 3359 "src/parser.c"
    break;

  case 117: /* enum_value: number "<dynamic_operator>" "<identifier>"  */
#line 518 "src/gwion.y"
                                           { 
            if (strcmp(s_name((yyvsp[-1].sym)), ":=>")) {
              parser_error(&(yylsp[-2]), arg, "enum value must be set with :=>", 0x0240); YYERROR;
          }
            (yyval.enum_value) = (EnumValue) {.xid = (yyvsp[0].sym), .gwint = (yyvsp[-2].gwint), .set = true };
          }
#line 3370 "src/parser.c"
    break;

  case 118: /* enum_list: enum_value  */
#line 525 "src/gwion.y"
  {
    (yyval.enum_list) = new_mp_vector(mpool(arg), EnumValue, 1);
    mp_vector_set((yyval.enum_list), EnumValue, 0, (yyvsp[0].enum_value));
  }
#line 3379 "src/parser.c"
    break;

  case 119: /* enum_list: enum_list "," enum_value  */
#line 530 "src/gwion.y"
  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].enum_list), EnumValue, (yyvsp[0].enum_value));
    (yyval.enum_list) = (yyvsp[-2].enum_list);
  }
#line 3388 "src/parser.c"
    break;

  case 120: /* enum_def: "enum" flag "<identifier>" "{" enum_list opt_comma "}"  */
#line 535 "src/gwion.y"
                                               {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-2].enum_list), (yyvsp[-4].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-5].flag);
  }
#line 3397 "src/parser.c"
    break;

  case 121: /* when_exp: "when" exp  */
#line 540 "src/gwion.y"
                     { (yyval.exp) = (yyvsp[0].exp); }
#line 3403 "src/parser.c"
    break;

  case 122: /* when_exp: %empty  */
#line 540 "src/gwion.y"
                                    { (yyval.exp) = NULL; }
#line 3409 "src/parser.c"
    break;

  case 123: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 543 "src/gwion.y"
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
#line 3425 "src/parser.c"
    break;

  case 124: /* match_list: match_case_stmt  */
#line 555 "src/gwion.y"
                            {
  (yyval.stmt_list) = new_mp_vector(mpool(arg), struct Stmt_, 1);
  mp_vector_set((yyval.stmt_list), struct Stmt_, 0, (yyvsp[0].stmt));
}
#line 3434 "src/parser.c"
    break;

  case 125: /* match_list: match_list match_case_stmt  */
#line 559 "src/gwion.y"
                             {
    mp_vector_add(mpool(arg), &((yyvsp[-1].stmt_list)), struct Stmt_, (yyvsp[0].stmt));
    (yyval.stmt_list) = (yyvsp[-1].stmt_list);
  }
#line 3443 "src/parser.c"
    break;

  case 126: /* match_stmt: "match" exp "{" match_list "}" "where" stmt  */
#line 564 "src/gwion.y"
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
#line 3458 "src/parser.c"
    break;

  case 127: /* match_stmt: "match" exp "{" match_list "}"  */
#line 575 "src/gwion.y"
                               {
  (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_match,
    .d = { .stmt_match = {
      .cond  = (yyvsp[-3].exp),
      .list  = (yyvsp[-1].stmt_list),
    }},
    .pos = (yylsp[-4])
  };
}
#line 3472 "src/parser.c"
    break;

  case 128: /* flow: "while"  */
#line 586 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_while; }
#line 3478 "src/parser.c"
    break;

  case 129: /* flow: "until"  */
#line 587 "src/gwion.y"
            { (yyval.stmt_t) = ae_stmt_until; }
#line 3484 "src/parser.c"
    break;

  case 130: /* loop_stmt: flow "(" exp ")" stmt  */
#line 592 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-4].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3497 "src/parser.c"
    break;

  case 131: /* loop_stmt: "do" stmt flow exp ";"  */
#line 601 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_flow = {
        .cond = (yyvsp[-1].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .is_do = true
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3511 "src/parser.c"
    break;

  case 132: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 611 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_for,
      .d = { .stmt_for = {
        .c1 = cpy_stmt3(mpool(arg), &(yyvsp[-3].stmt)),
        .c2 = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt)),
      }},
      .pos = (yylsp[-5])
    };
  }
#line 3525 "src/parser.c"
    break;

  case 133: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 621 "src/gwion.y"
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
#line 3540 "src/parser.c"
    break;

  case 134: /* loop_stmt: "foreach" "(" "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 632 "src/gwion.y"
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
#line 3557 "src/parser.c"
    break;

  case 135: /* loop_stmt: "foreach" "(" "<identifier>" "," "<identifier>" ":" opt_var binary_exp ")" stmt  */
#line 645 "src/gwion.y"
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
#line 3579 "src/parser.c"
    break;

  case 136: /* loop_stmt: "repeat" "(" binary_exp ")" stmt  */
#line 663 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_loop,
      . d = { .stmt_loop = {
        .cond = (yyvsp[-2].exp),
        .body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3592 "src/parser.c"
    break;

  case 137: /* loop_stmt: "repeat" "(" "<identifier>" "," binary_exp ")" stmt  */
#line 672 "src/gwion.y"
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
#line 3609 "src/parser.c"
    break;

  case 138: /* defer_stmt: "defer" stmt  */
#line 685 "src/gwion.y"
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
#line 3626 "src/parser.c"
    break;

  case 139: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 700 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-2].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-4])
    };
  }
#line 3639 "src/parser.c"
    break;

  case 140: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 709 "src/gwion.y"
    { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_if,
      .d = { .stmt_if = {
        .cond = (yyvsp[-4].exp),
        .if_body = cpy_stmt3(mpool(arg), &(yyvsp[-2].stmt)),
        .else_body = cpy_stmt3(mpool(arg), &(yyvsp[0].stmt))
      }},
      .pos = (yylsp[-6])
    };
  }
#line 3653 "src/parser.c"
    break;

  case 141: /* breaks: "break"  */
#line 719 "src/gwion.y"
                    { (yyval.stmt_t) = ae_stmt_break; }
#line 3659 "src/parser.c"
    break;

  case 142: /* breaks: "continue"  */
#line 719 "src/gwion.y"
                                                        { (yyval.stmt_t) = ae_stmt_continue; }
#line 3665 "src/parser.c"
    break;

  case 143: /* jump_stmt: "return" exp ";"  */
#line 721 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-2])
    };
  }
#line 3675 "src/parser.c"
    break;

  case 144: /* jump_stmt: "return" ";"  */
#line 726 "src/gwion.y"
                     { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_return,
      .pos = (yylsp[-1])
    };
  }
#line 3684 "src/parser.c"
    break;

  case 145: /* jump_stmt: breaks DECIMAL ";"  */
#line 730 "src/gwion.y"
                         { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-2].stmt_t),
      .d = { .stmt_index = { .idx = (yyvsp[-1].yyint).num }},
      .pos = (yylsp[-2])
    };
  }
#line 3694 "src/parser.c"
    break;

  case 146: /* jump_stmt: breaks ";"  */
#line 735 "src/gwion.y"
               { (yyval.stmt) = (struct Stmt_) { .stmt_type = (yyvsp[-1].stmt_t),
      .d = { .stmt_index = { .idx = -1 }},
      .pos = (yylsp[-1]) };
  }
#line 3703 "src/parser.c"
    break;

  case 147: /* exp_stmt: exp ";"  */
#line 741 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .d = { .stmt_exp = { .val = (yyvsp[-1].exp) }},
      .pos = (yylsp[-1])
    };
  }
#line 3713 "src/parser.c"
    break;

  case 148: /* exp_stmt: ";"  */
#line 746 "src/gwion.y"
            { (yyval.stmt) = (struct Stmt_) { .stmt_type = ae_stmt_exp,
      .pos = (yylsp[0])
    };
  }
#line 3722 "src/parser.c"
    break;

  case 149: /* exp: binary_exp  */
#line 752 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); }
#line 3728 "src/parser.c"
    break;

  case 150: /* exp: binary_exp "," exp  */
#line 754 "src/gwion.y"
    {
      if((yyvsp[-2].exp)->next) {
        parser_error(&(yylsp[0]), arg, "invalid format for expression", 0);
        YYERROR;
      }
      (yyvsp[-2].exp)->next = (yyvsp[0].exp);
    }
#line 3740 "src/parser.c"
    break;

  case 152: /* binary_exp: binary_exp "@" decl_exp  */
#line 765 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3746 "src/parser.c"
    break;

  case 153: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 766 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3752 "src/parser.c"
    break;

  case 154: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 767 "src/gwion.y"
                                { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 3758 "src/parser.c"
    break;

  case 155: /* call_template: ":[" type_list "]"  */
#line 770 "src/gwion.y"
                                  { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 3764 "src/parser.c"
    break;

  case 156: /* call_template: %empty  */
#line 770 "src/gwion.y"
                                                 { (yyval.type_list) = NULL; }
#line 3770 "src/parser.c"
    break;

  case 162: /* array_exp: "[" exp "]"  */
#line 775 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 3776 "src/parser.c"
    break;

  case 163: /* array_exp: "[" exp "]" array_exp  */
#line 776 "src/gwion.y"
                          {
    if((yyvsp[-2].exp)->next){ parser_error(&(yylsp[-2]), arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 3784 "src/parser.c"
    break;

  case 164: /* array_exp: "[" exp "]" "[" "]"  */
#line 779 "src/gwion.y"
                         { parser_error(&(yylsp[-2]), arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
#line 3790 "src/parser.c"
    break;

  case 165: /* array_empty: "[" "]"  */
#line 783 "src/gwion.y"
                          { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 3796 "src/parser.c"
    break;

  case 166: /* array_empty: array_empty "[" "]"  */
#line 784 "src/gwion.y"
                          { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 3802 "src/parser.c"
    break;

  case 167: /* array_empty: array_empty array_exp  */
#line 785 "src/gwion.y"
                          { parser_error(&(yylsp[-1]), arg, "partially empty array init [][...]", 0x0210); YYERROR; }
#line 3808 "src/parser.c"
    break;

  case 168: /* dict_list: binary_exp ":" binary_exp  */
#line 789 "src/gwion.y"
                              { (yyvsp[-2].exp)->next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-2].exp); }
#line 3814 "src/parser.c"
    break;

  case 169: /* dict_list: binary_exp ":" binary_exp "," dict_list  */
#line 790 "src/gwion.y"
                                             { (yyvsp[-4].exp)->next = (yyvsp[-2].exp); (yyvsp[-2].exp)-> next = (yyvsp[0].exp); (yyval.exp) = (yyvsp[-4].exp); }
#line 3820 "src/parser.c"
    break;

  case 170: /* range: "[" exp ":" exp "]"  */
#line 793 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 3826 "src/parser.c"
    break;

  case 171: /* range: "[" exp ":" "]"  */
#line 794 "src/gwion.y"
                        { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 3832 "src/parser.c"
    break;

  case 172: /* range: "[" ":" exp "]"  */
#line 795 "src/gwion.y"
                                          { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 3838 "src/parser.c"
    break;

  case 176: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl  */
#line 801 "src/gwion.y"
                                                  { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), &(yyvsp[0].var_decl), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 3844 "src/parser.c"
    break;

  case 177: /* decl_exp: type_decl_flag2 flag type_decl_array "(" opt_exp ")" var_decl  */
#line 802 "src/gwion.y"
                                                                  {
      (yyval.exp) = new_exp_decl(mpool(arg), (yyvsp[-4].type_decl), &(yyvsp[0].var_decl), (yylsp[0]));
      (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-6].flag) | (yyvsp[-5].flag);
      (yyval.exp)->d.exp_decl.args = (yyvsp[-2].exp) ?: new_prim_nil(mpool(arg), (yylsp[-2]));
  }
#line 3854 "src/parser.c"
    break;

  case 178: /* func_args: "(" arg_list ")"  */
#line 808 "src/gwion.y"
                             { (yyval.default_args) = (yyvsp[-1].default_args); }
#line 3860 "src/parser.c"
    break;

  case 179: /* func_args: "(" ")"  */
#line 808 "src/gwion.y"
                                                   { (yyval.default_args) = (struct ParserArg){}; }
#line 3866 "src/parser.c"
    break;

  case 180: /* fptr_args: "(" fptr_list ")"  */
#line 809 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[-1].arg_list); }
#line 3872 "src/parser.c"
    break;

  case 181: /* fptr_args: "(" ")"  */
#line 809 "src/gwion.y"
                                                    { (yyval.arg_list) = NULL; }
#line 3878 "src/parser.c"
    break;

  case 182: /* decl_template: ":[" specialized_list "]"  */
#line 811 "src/gwion.y"
                                         { (yyval.specialized_list) = (yyvsp[-1].specialized_list); }
#line 3884 "src/parser.c"
    break;

  case 183: /* decl_template: ":[" specialized_list "," "..." "]"  */
#line 812 "src/gwion.y"
                                                    {
  (yyval.specialized_list) = (yyvsp[-3].specialized_list);
  Specialized spec = { .xid = insert_symbol("...") };
  mp_vector_add(mpool(arg), &(yyval.specialized_list), Specialized, spec);

}
#line 3895 "src/parser.c"
    break;

  case 184: /* decl_template: ":[" "..." "]"  */
#line 818 "src/gwion.y"
                                {
  Specialized spec = { .xid = insert_symbol("...") };
  (yyval.specialized_list) = new_mp_vector(mpool(arg), Specialized, 1);
  mp_vector_set((yyval.specialized_list), Specialized, 0, spec);
}
#line 3905 "src/parser.c"
    break;

  case 185: /* decl_template: %empty  */
#line 823 "src/gwion.y"
               { (yyval.specialized_list) = NULL; }
#line 3911 "src/parser.c"
    break;

  case 186: /* global: "global"  */
#line 825 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; /*arg->global = true;*/ }
#line 3917 "src/parser.c"
    break;

  case 188: /* opt_global: %empty  */
#line 826 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 3923 "src/parser.c"
    break;

  case 189: /* storage_flag: "static"  */
#line 828 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 3929 "src/parser.c"
    break;

  case 191: /* access_flag: "private"  */
#line 830 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 3935 "src/parser.c"
    break;

  case 192: /* access_flag: "protect"  */
#line 831 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3941 "src/parser.c"
    break;

  case 193: /* flag: access_flag  */
#line 834 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3947 "src/parser.c"
    break;

  case 194: /* flag: storage_flag  */
#line 835 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 3953 "src/parser.c"
    break;

  case 195: /* flag: access_flag storage_flag  */
#line 836 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3959 "src/parser.c"
    break;

  case 196: /* flag: %empty  */
#line 837 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 3965 "src/parser.c"
    break;

  case 197: /* final: "final"  */
#line 840 "src/gwion.y"
               { (yyval.flag) = ae_flag_final; }
#line 3971 "src/parser.c"
    break;

  case 198: /* final: %empty  */
#line 840 "src/gwion.y"
                                         { (yyval.flag) = ae_flag_none; }
#line 3977 "src/parser.c"
    break;

  case 199: /* modifier: "abstract" final  */
#line 842 "src/gwion.y"
                           { (yyval.flag) = ae_flag_abstract | (yyvsp[0].flag); }
#line 3983 "src/parser.c"
    break;

  case 201: /* func_def_base: "fun" func_base func_args code_list  */
#line 845 "src/gwion.y"
                                           {
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    (yyvsp[-2].func_base)->fbflag |= (yyvsp[-1].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt_list));
  }
#line 3993 "src/parser.c"
    break;

  case 202: /* func_def_base: "fun" func_base func_args ";"  */
#line 850 "src/gwion.y"
                                     {
    if((yyvsp[-1].default_args).flag == fbflag_default)
    { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
    (yyvsp[-2].func_base)->args = (yyvsp[-1].default_args).args;
    SET_FLAG((yyvsp[-2].func_base), abstract);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), NULL);
  }
#line 4005 "src/parser.c"
    break;

  case 203: /* func_def_base: LOCALE global "<identifier>" "(" locale_list ")" code_list  */
#line 857 "src/gwion.y"
                                                         {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, (yyvsp[-5].flag), (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 4016 "src/parser.c"
    break;

  case 204: /* func_def_base: LOCALE "<identifier>" "(" locale_list ")" code_list  */
#line 863 "src/gwion.y"
                                                  {
    Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("float"), (yylsp[-4]));
    Func_Base *base = new_func_base(mpool(arg), td, (yyvsp[-4].sym), (yyvsp[-2].default_args).args, ae_flag_none, (yylsp[-4]));
    base->fbflag |= fbflag_locale | (yyvsp[-2].default_args).flag;
    (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
  }
#line 4027 "src/parser.c"
    break;

  case 205: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args ";"  */
#line 872 "src/gwion.y"
    {
      Func_Base *base = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-3].sym), NULL, (yyvsp[-6].flag) | ae_flag_abstract, (yylsp[-3]));
      if((yyvsp[-2].specialized_list))
        base->tmpl = new_tmpl(mpool(arg), (yyvsp[-2].specialized_list));
      base->args = (yyvsp[-1].arg_list);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4039 "src/parser.c"
    break;

  case 211: /* op_base: type_decl_empty op_op decl_template "(" arg "," arg ")"  */
#line 883 "src/gwion.y"
    {
      if((yyvsp[-3].default_args).flag == fbflag_default || (yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-6]), arg, "default arguments not allowed in binary operators", 0210); YYERROR; };
      MP_Vector *args = new_mp_vector(mpool(arg), Arg, 2);
      *(Arg*)args->ptr = (yyvsp[-3].default_args).arg;
      *(Arg*)(args->ptr + sizeof(Arg)) = (yyvsp[-1].default_args).arg;
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-7].type_decl), (yyvsp[-6].sym), args, ae_flag_none, (yylsp[-6]));
      if((yyvsp[-5].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-5].specialized_list));
    }
#line 4053 "src/parser.c"
    break;

  case 212: /* op_base: type_decl_empty post_op decl_template "(" arg ")"  */
#line 893 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in postfix operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), args, ae_flag_none, (yylsp[-4]));
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4066 "src/parser.c"
    break;

  case 213: /* op_base: unary_op type_decl_empty decl_template "(" arg ")"  */
#line 902 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-4]), arg, "default arguments not allowed in unary operators", 0210); YYERROR; };
      Arg_List args = new_mp_vector(mpool(arg), Arg, 1);
      mp_vector_set(args, Arg, 0, (yyvsp[-1].default_args).arg);
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), args, ae_flag_none, (yylsp[-5]));
      (yyval.func_base)->fbflag |= fbflag_unary;
      if((yyvsp[-3].specialized_list))(yyval.func_base)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4080 "src/parser.c"
    break;

  case 214: /* op_base: type_decl_empty OPID_A func_args  */
#line 912 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyvsp[0].default_args).args, ae_flag_none, (yylsp[-1]));
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 4089 "src/parser.c"
    break;

  case 215: /* operator: "operator"  */
#line 917 "src/gwion.y"
                     { (yyval.flag) = ae_flag_none; }
#line 4095 "src/parser.c"
    break;

  case 216: /* operator: "operator" global  */
#line 917 "src/gwion.y"
                                                                { (yyval.flag) = (yyvsp[0].flag); }
#line 4101 "src/parser.c"
    break;

  case 217: /* op_def: operator op_base code_list  */
#line 920 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt_list)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 4107 "src/parser.c"
    break;

  case 218: /* op_def: operator op_base ";"  */
#line 922 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag) | ae_flag_abstract; }
#line 4113 "src/parser.c"
    break;

  case 219: /* op_def: operator "abstract" op_base ";"  */
#line 924 "src/gwion.y"
  { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), NULL); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-3].flag) | ae_flag_abstract; }
#line 4119 "src/parser.c"
    break;

  case 223: /* func_def: operator "new" func_args code_list  */
#line 928 "src/gwion.y"
    {
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag), (yylsp[-2]));
      base->fbflag = (yyvsp[-1].default_args).flag;
      (yyval.func_def) = new_func_def(mpool(arg), base, (yyvsp[0].stmt_list));
    }
#line 4129 "src/parser.c"
    break;

  case 224: /* func_def: operator "new" func_args ";"  */
#line 934 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-2]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-3].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL);
    }
#line 4140 "src/parser.c"
    break;

  case 225: /* func_def: operator "abstract" "new" func_args ";"  */
#line 941 "src/gwion.y"
    {
      if((yyvsp[-1].default_args).flag == fbflag_default)
      { parser_error(&(yylsp[-3]), arg, "default arguments not allowed in abstract operators", 0210); YYERROR; };
      Func_Base *const base = new_func_base(mpool(arg), NULL, (yyvsp[-2].sym), (yyvsp[-1].default_args).args, (yyvsp[-4].flag) | ae_flag_abstract, (yylsp[-2]));
      (yyval.func_def) =new_func_def(mpool(arg), base, NULL);
    }
#line 4151 "src/parser.c"
    break;

  case 226: /* type_decl_base: "<identifier>"  */
#line 949 "src/gwion.y"
       { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4157 "src/parser.c"
    break;

  case 227: /* type_decl_base: "(" flag type_decl_empty decl_template fptr_args func_effects ")"  */
#line 950 "src/gwion.y"
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
#line 4173 "src/parser.c"
    break;

  case 228: /* type_decl_tmpl: type_decl_base call_template  */
#line 964 "src/gwion.y"
                                 { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4179 "src/parser.c"
    break;

  case 229: /* type_decl_tmpl: "&" type_decl_base call_template  */
#line 965 "src/gwion.y"
                                     { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->ref = true; (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 4185 "src/parser.c"
    break;

  case 231: /* type_decl_noflag: type_decl_tmpl "." type_decl_noflag  */
#line 970 "src/gwion.y"
                                        { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 4191 "src/parser.c"
    break;

  case 232: /* option: "?"  */
#line 973 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 4197 "src/parser.c"
    break;

  case 233: /* option: OPTIONS  */
#line 973 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 4203 "src/parser.c"
    break;

  case 234: /* option: %empty  */
#line 973 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 4209 "src/parser.c"
    break;

  case 235: /* type_decl_opt: type_decl_noflag option  */
#line 974 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option = (yyvsp[0].uval); }
#line 4215 "src/parser.c"
    break;

  case 237: /* type_decl: type_decl_flag type_decl_opt  */
#line 975 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 4221 "src/parser.c"
    break;

  case 238: /* type_decl_flag: "late"  */
#line 978 "src/gwion.y"
            { (yyval.flag) = ae_flag_late; }
#line 4227 "src/parser.c"
    break;

  case 239: /* type_decl_flag: "const"  */
#line 979 "src/gwion.y"
            { (yyval.flag) = ae_flag_const; }
#line 4233 "src/parser.c"
    break;

  case 240: /* opt_var: "var"  */
#line 981 "src/gwion.y"
               { (yyval.yybool) = true; }
#line 4239 "src/parser.c"
    break;

  case 241: /* opt_var: %empty  */
#line 981 "src/gwion.y"
                                { (yyval.yybool) = false; }
#line 4245 "src/parser.c"
    break;

  case 242: /* type_decl_flag2: "var"  */
#line 983 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 4251 "src/parser.c"
    break;

  case 244: /* union_decl: "<identifier>" ";"  */
#line 986 "src/gwion.y"
                   {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), (yylsp[-1]));
  (yyval.union_member) = (Union_Member) { .td = td, .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) } };
}
#line 4260 "src/parser.c"
    break;

  case 245: /* union_decl: type_decl_empty "<identifier>" ";"  */
#line 990 "src/gwion.y"
                         { (yyval.union_member) = (Union_Member) { .td = (yyvsp[-2].type_decl), .vd = { .xid =(yyvsp[-1].sym), .pos = (yylsp[-1]) }  };}
#line 4266 "src/parser.c"
    break;

  case 246: /* union_list: union_decl  */
#line 992 "src/gwion.y"
                       {
    (yyval.union_list) = new_mp_vector(mpool(arg), Union_Member, 1);
    mp_vector_set((yyval.union_list), Union_Member, 0, (yyvsp[0].union_member));
  }
#line 4275 "src/parser.c"
    break;

  case 247: /* union_list: union_list union_decl  */
#line 996 "src/gwion.y"
                          {
    mp_vector_add(mpool(arg), &(yyvsp[-1].union_list), Union_Member, (yyvsp[0].union_member));
    (yyval.union_list) = (yyvsp[-1].union_list);
  }
#line 4284 "src/parser.c"
    break;

  case 248: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 1002 "src/gwion.y"
                                                     {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yylsp[-4]));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].specialized_list))
        (yyval.union_def)->tmpl = new_tmpl(mpool(arg), (yyvsp[-3].specialized_list));
    }
#line 4296 "src/parser.c"
    break;

  case 249: /* var_decl: "<identifier>"  */
#line 1011 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4302 "src/parser.c"
    break;

  case 250: /* arg_decl: "<identifier>"  */
#line 1013 "src/gwion.y"
             { (yyval.var_decl) = (struct Var_Decl_) { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) }; }
#line 4308 "src/parser.c"
    break;

  case 252: /* fptr_arg_decl: %empty  */
#line 1014 "src/gwion.y"
                          { (yyval.var_decl) = (struct Var_Decl_){}; }
#line 4314 "src/parser.c"
    break;

  case 266: /* opt_exp: exp  */
#line 1022 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); }
#line 4320 "src/parser.c"
    break;

  case 267: /* opt_exp: %empty  */
#line 1022 "src/gwion.y"
                            { (yyval.exp) = NULL; }
#line 4326 "src/parser.c"
    break;

  case 269: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 1025 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 4332 "src/parser.c"
    break;

  case 270: /* con_exp: log_or_exp "?:" con_exp  */
#line 1027 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 4338 "src/parser.c"
    break;

  case 272: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 1029 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4344 "src/parser.c"
    break;

  case 274: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 1030 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4350 "src/parser.c"
    break;

  case 276: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 1031 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4356 "src/parser.c"
    break;

  case 278: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 1032 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4362 "src/parser.c"
    break;

  case 280: /* and_exp: and_exp "&" eq_exp  */
#line 1033 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4368 "src/parser.c"
    break;

  case 282: /* eq_exp: eq_exp eq_op rel_exp  */
#line 1034 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4374 "src/parser.c"
    break;

  case 284: /* rel_exp: rel_exp rel_op shift_exp  */
#line 1035 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4380 "src/parser.c"
    break;

  case 286: /* shift_exp: shift_exp shift_op add_exp  */
#line 1036 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4386 "src/parser.c"
    break;

  case 288: /* add_exp: add_exp add_op mul_exp  */
#line 1037 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4392 "src/parser.c"
    break;

  case 290: /* mul_exp: mul_exp mul_op dur_exp  */
#line 1038 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4398 "src/parser.c"
    break;

  case 292: /* dur_exp: dur_exp "::" cast_exp  */
#line 1039 "src/gwion.y"
                                                       { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4404 "src/parser.c"
    break;

  case 294: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 1042 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 4410 "src/parser.c"
    break;

  case 301: /* unary_exp: unary_op unary_exp  */
#line 1049 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 4416 "src/parser.c"
    break;

  case 302: /* unary_exp: "spork" unary_exp  */
#line 1050 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4422 "src/parser.c"
    break;

  case 303: /* unary_exp: "fork" unary_exp  */
#line 1051 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yylsp[-1])); }
#line 4428 "src/parser.c"
    break;

  case 304: /* unary_exp: "new" type_decl_exp "(" opt_exp ")"  */
#line 1052 "src/gwion.y"
                                        {
       (yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-4].sym), (yyvsp[-3].type_decl), (yyvsp[-1].exp) ?: new_prim_nil(mpool(arg), (yylsp[-1])), (yyloc));
  }
#line 4436 "src/parser.c"
    break;

  case 305: /* unary_exp: "new" type_decl_exp  */
#line 1055 "src/gwion.y"
                        {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), NULL, (yyloc)); }
#line 4442 "src/parser.c"
    break;

  case 306: /* unary_exp: "spork" code_list  */
#line 1056 "src/gwion.y"
                        { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4448 "src/parser.c"
    break;

  case 307: /* unary_exp: "fork" code_list  */
#line 1057 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt_list), (yylsp[-1])); }
#line 4454 "src/parser.c"
    break;

  case 308: /* unary_exp: "spork" captures code_list  */
#line 1058 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4460 "src/parser.c"
    break;

  case 309: /* unary_exp: "fork" captures code_list  */
#line 1059 "src/gwion.y"
                                 { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_unary.captures = (yyvsp[-1].captures); }
#line 4466 "src/parser.c"
    break;

  case 310: /* unary_exp: "$" type_decl_empty  */
#line 1060 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yylsp[0])); }
#line 4472 "src/parser.c"
    break;

  case 311: /* lambda_list: "<identifier>"  */
#line 1063 "src/gwion.y"
    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
    (yyval.arg_list) = new_mp_vector(mpool(arg), Arg, 1);
    mp_vector_set((yyval.arg_list), Arg, 0, a);
}
#line 4482 "src/parser.c"
    break;

  case 312: /* lambda_list: lambda_list "<identifier>"  */
#line 1068 "src/gwion.y"
                    {
  Arg a = (Arg) { .var_decl = { .xid = (yyvsp[0].sym), .pos = (yylsp[0]) } };
  mp_vector_add(mpool(arg), &(yyvsp[-1].arg_list), Arg, a);
  (yyval.arg_list) = (yyvsp[-1].arg_list);
}
#line 4492 "src/parser.c"
    break;

  case 313: /* lambda_arg: "\\" lambda_list  */
#line 1073 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 4498 "src/parser.c"
    break;

  case 314: /* lambda_arg: "\\"  */
#line 1073 "src/gwion.y"
                                                      { (yyval.arg_list) = NULL; }
#line 4504 "src/parser.c"
    break;

  case 315: /* type_list: type_decl_empty  */
#line 1076 "src/gwion.y"
                    {
    (yyval.type_list) = new_mp_vector(mpool(arg), Type_Decl*, 1);
    mp_vector_set((yyval.type_list), Type_Decl*, 0, (yyvsp[0].type_decl));
  }
#line 4513 "src/parser.c"
    break;

  case 316: /* type_list: type_list "," type_decl_empty  */
#line 1080 "src/gwion.y"
                                  {
    mp_vector_add(mpool(arg), &(yyvsp[-2].type_list), Type_Decl*, (yyvsp[0].type_decl));
    (yyval.type_list) = (yyvsp[-2].type_list);
  }
#line 4522 "src/parser.c"
    break;

  case 317: /* call_paren: "(" exp ")"  */
#line 1086 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); }
#line 4528 "src/parser.c"
    break;

  case 318: /* call_paren: "(" ")"  */
#line 1086 "src/gwion.y"
                                                { (yyval.exp) = NULL; }
#line 4534 "src/parser.c"
    break;

  case 321: /* dot_exp: post_exp "." "<identifier>"  */
#line 1090 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    parser_error(&(yylsp[-2]), arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 4547 "src/parser.c"
    break;

  case 323: /* post_exp: post_exp array_exp  */
#line 1101 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 4553 "src/parser.c"
    break;

  case 324: /* post_exp: post_exp range  */
#line 1103 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 4559 "src/parser.c"
    break;

  case 325: /* post_exp: post_exp call_template call_paren  */
#line 1105 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 4566 "src/parser.c"
    break;

  case 326: /* post_exp: post_exp post_op  */
#line 1108 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 4572 "src/parser.c"
    break;

  case 327: /* post_exp: dot_exp  */
#line 1109 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 4578 "src/parser.c"
    break;

  case 328: /* interp_exp: "<interp string end>"  */
#line 1113 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].string).data, (yyvsp[0].string).delim, (yyloc)); }
#line 4584 "src/parser.c"
    break;

  case 329: /* interp_exp: "<interp string lit>" interp_exp  */
#line 1114 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].string).data, (yyvsp[-1].string).delim, (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4590 "src/parser.c"
    break;

  case 330: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 1115 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 4596 "src/parser.c"
    break;

  case 331: /* interp: "${" interp_exp  */
#line 1117 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 4602 "src/parser.c"
    break;

  case 332: /* interp: interp "${" interp_exp  */
#line 1118 "src/gwion.y"
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
#line 4617 "src/parser.c"
    break;

  case 333: /* capture: "<identifier>"  */
#line 1129 "src/gwion.y"
            { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .pos = (yylsp[0]) };}
#line 4623 "src/parser.c"
    break;

  case 334: /* capture: "&" "<identifier>"  */
#line 1129 "src/gwion.y"
                                                                { (yyval.capture) = (Capture){ .xid = (yyvsp[0].sym), .is_ref = true, .pos = (yylsp[0]) }; }
#line 4629 "src/parser.c"
    break;

  case 335: /* _captures: capture  */
#line 1131 "src/gwion.y"
                   { (yyval.captures) = new_mp_vector(mpool(arg), Capture, 1); mp_vector_set((yyval.captures), Capture, 0, (yyvsp[0].capture)); }
#line 4635 "src/parser.c"
    break;

  case 336: /* _captures: _captures capture  */
#line 1132 "src/gwion.y"
                            { mp_vector_add(mpool(arg), &(yyvsp[-1].captures), Capture, (yyvsp[0].capture)); (yyval.captures) = (yyvsp[-1].captures); }
#line 4641 "src/parser.c"
    break;

  case 337: /* captures: ":" _captures ":"  */
#line 1133 "src/gwion.y"
                            { (yyval.captures) = (yyvsp[-1].captures); }
#line 4647 "src/parser.c"
    break;

  case 338: /* captures: %empty  */
#line 1133 "src/gwion.y"
                                            { (yyval.captures) = NULL; }
#line 4653 "src/parser.c"
    break;

  case 341: /* prim_exp: "<identifier>"  */
#line 1136 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 4659 "src/parser.c"
    break;

  case 342: /* prim_exp: number  */
#line 1137 "src/gwion.y"
                         { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].gwint).num, (yyloc));
    (yyval.exp)->d.prim.d.gwint.int_type = (yyvsp[0].gwint).int_type;
  }
#line 4667 "src/parser.c"
    break;

  case 343: /* prim_exp: "<float>"  */
#line 1140 "src/gwion.y"
                         { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 4673 "src/parser.c"
    break;

  case 344: /* prim_exp: interp  */
#line 1141 "src/gwion.y"
                         { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 4679 "src/parser.c"
    break;

  case 345: /* prim_exp: "<litteral string>"  */
#line 1142 "src/gwion.y"
                         { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), 0, (yyloc)); }
#line 4685 "src/parser.c"
    break;

  case 346: /* prim_exp: "<litteral char>"  */
#line 1143 "src/gwion.y"
                         { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 4691 "src/parser.c"
    break;

  case 347: /* prim_exp: "[" opt_exp array_lit_end  */
#line 1144 "src/gwion.y"
                              { 
    if(!(yyvsp[-1].exp)) {
      parser_error(&(yylsp[-2]), arg, "must provide values/expressions for array [...]", 0);
      YYERROR;
    }
    Array_Sub array = new_array_sub(mpool(arg), (yyvsp[-1].exp));
    (yyval.exp) = new_prim_array(  mpool(arg), array, (yyloc));
  }
#line 4704 "src/parser.c"
    break;

  case 348: /* prim_exp: "{" dict_list "}"  */
#line 1152 "src/gwion.y"
                         { (yyval.exp) = new_prim_dict(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4710 "src/parser.c"
    break;

  case 349: /* prim_exp: range  */
#line 1153 "src/gwion.y"
                         { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 4716 "src/parser.c"
    break;

  case 350: /* prim_exp: "<<<" exp ">>>"  */
#line 1154 "src/gwion.y"
                         { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); }
#line 4722 "src/parser.c"
    break;

  case 351: /* prim_exp: "(" exp ")"  */
#line 1155 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[-1].exp); if(!(yyvsp[-1].exp)->next) (yyval.exp)->paren = true; }
#line 4728 "src/parser.c"
    break;

  case 352: /* prim_exp: "`foo`"  */
#line 1156 "src/gwion.y"
                         {
    const loc_t loc = { .first = { .line = (yylsp[0]).first.line, .column = (yylsp[0]).first.column - 1},
                        .last = { .line = (yylsp[0]).last.line, .column = (yylsp[0]).last.column - 1}};
    (yyval.exp) = new_prim_id(mpool(arg), (yyvsp[0].sym), loc);
    (yyval.exp)->d.prim.prim_type = ae_prim_locale;
  }
#line 4739 "src/parser.c"
    break;

  case 353: /* prim_exp: lambda_arg captures code_list  */
#line 1162 "src/gwion.y"
                                  { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg->st, (yylsp[-2]).first), (yyvsp[-2].arg_list), (yyvsp[0].stmt_list), (yylsp[-2])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-1].captures);}
#line 4745 "src/parser.c"
    break;

  case 354: /* prim_exp: lambda_arg captures "{" binary_exp "}"  */
#line 1163 "src/gwion.y"
                                           { (yyval.exp) = new_exp_lambda2( mpool(arg), lambda_name(arg->st, (yylsp[-4]).first), (yyvsp[-4].arg_list), (yyvsp[-1].exp), (yylsp[-4])); (yyval.exp)->d.exp_lambda.def->captures = (yyvsp[-3].captures);}
#line 4751 "src/parser.c"
    break;

  case 355: /* prim_exp: "(" op_op ")"  */
#line 1164 "src/gwion.y"
                         { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.exp)->paren = true; }
#line 4757 "src/parser.c"
    break;

  case 356: /* prim_exp: "perform" opt_id  */
#line 1165 "src/gwion.y"
                         { (yyval.exp) = new_prim_perform(mpool(arg), (yyvsp[0].sym), (yylsp[0])); }
#line 4763 "src/parser.c"
    break;

  case 357: /* prim_exp: "(" ")"  */
#line 1166 "src/gwion.y"
                         { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 4769 "src/parser.c"
    break;


#line 4773 "src/parser.c"

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

#line 1168 "src/gwion.y"

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
