/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2.51-de63"

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
#line 7 "src/gwion.y"

#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(loc_t, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 94 "src/parser.c"

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
  YYSYMBOL_GOTO = 21,                      /* "goto"  */
  YYSYMBOL_MATCH = 22,                     /* "match"  */
  YYSYMBOL_CASE = 23,                      /* "case"  */
  YYSYMBOL_WHEN = 24,                      /* "when"  */
  YYSYMBOL_WHERE = 25,                     /* "where"  */
  YYSYMBOL_ENUM = 26,                      /* "enum"  */
  YYSYMBOL_TRETURN = 27,                   /* "return"  */
  YYSYMBOL_BREAK = 28,                     /* "break"  */
  YYSYMBOL_CONTINUE = 29,                  /* "continue"  */
  YYSYMBOL_CLASS = 30,                     /* "class"  */
  YYSYMBOL_STRUCT = 31,                    /* "struct"  */
  YYSYMBOL_STATIC = 32,                    /* "static"  */
  YYSYMBOL_GLOBAL = 33,                    /* "global"  */
  YYSYMBOL_PRIVATE = 34,                   /* "private"  */
  YYSYMBOL_PROTECT = 35,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 36,                  /* "abstract"  */
  YYSYMBOL_FINAL = 37,                     /* "final"  */
  YYSYMBOL_EXTENDS = 38,                   /* "extends"  */
  YYSYMBOL_DOT = 39,                       /* "."  */
  YYSYMBOL_OPERATOR = 40,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 41,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 42,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 43,                    /* NOELSE  */
  YYSYMBOL_UNION = 44,                     /* "union"  */
  YYSYMBOL_CONSTT = 45,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 46,                   /* "..."  */
  YYSYMBOL_VARLOOP = 47,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 48,                 /* "\\"  */
  YYSYMBOL_OPID_A = 49,                    /* OPID_A  */
  YYSYMBOL_OPID_D = 50,                    /* OPID_D  */
  YYSYMBOL_REF = 51,                       /* "ref"  */
  YYSYMBOL_NONNULL = 52,                   /* "nonnull"  */
  YYSYMBOL_NUM = 53,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 54,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 55,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 56,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 57,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 58,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 59,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 60,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 61,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 62,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 63,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 64,                 /* "#pragma"  */
  YYSYMBOL_PP_DOCSTR = 65,                 /* "##! docstring"  */
  YYSYMBOL_PP_UNDEF = 66,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 67,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 68,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 69,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 70,                  /* "#if"  */
  YYSYMBOL_PP_NL = 71,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 72,                /* "require"  */
  YYSYMBOL_73_operator_id_ = 73,           /* "@<operator id>"  */
  YYSYMBOL_74_operator_id_ = 74,           /* "$<operator id>"  */
  YYSYMBOL_ID = 75,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 76,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 77,                  /* "++"  */
  YYSYMBOL_MINUS = 78,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 79,                /* "--"  */
  YYSYMBOL_TIMES = 80,                     /* "*"  */
  YYSYMBOL_DIVIDE = 81,                    /* "/"  */
  YYSYMBOL_PERCENT = 82,                   /* "%"  */
  YYSYMBOL_DOLLAR = 83,                    /* "$"  */
  YYSYMBOL_QUESTION = 84,                  /* "?"  */
  YYSYMBOL_COLON = 85,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 86,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 87,             /* "?:"  */
  YYSYMBOL_NEW = 88,                       /* "new"  */
  YYSYMBOL_SPORK = 89,                     /* "spork"  */
  YYSYMBOL_FORK = 90,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 91,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 92,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 93,                    /* ">>>"  */
  YYSYMBOL_AND = 94,                       /* "&&"  */
  YYSYMBOL_EQ = 95,                        /* "=="  */
  YYSYMBOL_GE = 96,                        /* ">="  */
  YYSYMBOL_GT = 97,                        /* ">"  */
  YYSYMBOL_LE = 98,                        /* "<="  */
  YYSYMBOL_LT = 99,                        /* "<"  */
  YYSYMBOL_NEQ = 100,                      /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 101,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 102,              /* ">>"  */
  YYSYMBOL_S_AND = 103,                    /* "&"  */
  YYSYMBOL_S_OR = 104,                     /* "|"  */
  YYSYMBOL_S_XOR = 105,                    /* "^"  */
  YYSYMBOL_OR = 106,                       /* "||"  */
  YYSYMBOL_TMPL = 107,                     /* ":["  */
  YYSYMBOL_TILDA = 108,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 109,              /* "!"  */
  YYSYMBOL_DYNOP = 110,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 111,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 112,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 113,                   /* UTIMES  */
  YYSYMBOL_114_ = 114,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 115,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 116,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 117,                 /* $accept  */
  YYSYMBOL_prg = 118,                      /* prg  */
  YYSYMBOL_ast = 119,                      /* ast  */
  YYSYMBOL_section = 120,                  /* section  */
  YYSYMBOL_class_type = 121,               /* class_type  */
  YYSYMBOL_class_def = 122,                /* class_def  */
  YYSYMBOL_class_ext = 123,                /* class_ext  */
  YYSYMBOL_class_body = 124,               /* class_body  */
  YYSYMBOL_id_list = 125,                  /* id_list  */
  YYSYMBOL_stmt_list = 126,                /* stmt_list  */
  YYSYMBOL_fptr_base = 127,                /* fptr_base  */
  YYSYMBOL_func_base = 128,                /* func_base  */
  YYSYMBOL_fptr_def = 129,                 /* fptr_def  */
  YYSYMBOL_type_def = 130,                 /* type_def  */
  YYSYMBOL_type_decl_array = 131,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 132,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 133,          /* type_decl_empty  */
  YYSYMBOL_arg = 134,                      /* arg  */
  YYSYMBOL_arg_list = 135,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 136,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 137,                /* fptr_list  */
  YYSYMBOL_code_stmt = 138,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 139,                  /* stmt_pp  */
  YYSYMBOL_stmt = 140,                     /* stmt  */
  YYSYMBOL_opt_id = 141,                   /* opt_id  */
  YYSYMBOL_enum_def = 142,                 /* enum_def  */
  YYSYMBOL_label_stmt = 143,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 144,                /* goto_stmt  */
  YYSYMBOL_when_exp = 145,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 146,          /* match_case_stmt  */
  YYSYMBOL_match_list = 147,               /* match_list  */
  YYSYMBOL_where_stmt = 148,               /* where_stmt  */
  YYSYMBOL_match_stmt = 149,               /* match_stmt  */
  YYSYMBOL_flow = 150,                     /* flow  */
  YYSYMBOL_loop_stmt = 151,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 152,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 153,           /* selection_stmt  */
  YYSYMBOL_breaks = 154,                   /* breaks  */
  YYSYMBOL_jump_stmt = 155,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 156,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 157,                 /* exp_stmt  */
  YYSYMBOL_exp = 158,                      /* exp  */
  YYSYMBOL_binary_exp = 159,               /* binary_exp  */
  YYSYMBOL_call_template = 160,            /* call_template  */
  YYSYMBOL_op = 161,                       /* op  */
  YYSYMBOL_array_exp = 162,                /* array_exp  */
  YYSYMBOL_array_empty = 163,              /* array_empty  */
  YYSYMBOL_range = 164,                    /* range  */
  YYSYMBOL_array = 165,                    /* array  */
  YYSYMBOL_decl_exp = 166,                 /* decl_exp  */
  YYSYMBOL_union_exp = 167,                /* union_exp  */
  YYSYMBOL_func_args = 168,                /* func_args  */
  YYSYMBOL_fptr_args = 169,                /* fptr_args  */
  YYSYMBOL_arg_type = 170,                 /* arg_type  */
  YYSYMBOL_decl_template = 171,            /* decl_template  */
  YYSYMBOL_storage_flag = 172,             /* storage_flag  */
  YYSYMBOL_access_flag = 173,              /* access_flag  */
  YYSYMBOL_flag = 174,                     /* flag  */
  YYSYMBOL_final = 175,                    /* final  */
  YYSYMBOL_modifier = 176,                 /* modifier  */
  YYSYMBOL_func_def_base = 177,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 178,            /* abstract_fdef  */
  YYSYMBOL_op_op = 179,                    /* op_op  */
  YYSYMBOL_op_base = 180,                  /* op_base  */
  YYSYMBOL_op_def = 181,                   /* op_def  */
  YYSYMBOL_func_def = 182,                 /* func_def  */
  YYSYMBOL_ref = 183,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 184,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 185,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 186,         /* type_decl_noflag  */
  YYSYMBOL_type_decl = 187,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 188,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 189,          /* type_decl_flag2  */
  YYSYMBOL_decl_list = 190,                /* decl_list  */
  YYSYMBOL_union_def = 191,                /* union_def  */
  YYSYMBOL_var_decl_list = 192,            /* var_decl_list  */
  YYSYMBOL_var_decl = 193,                 /* var_decl  */
  YYSYMBOL_arg_decl = 194,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 195,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 196,                    /* eq_op  */
  YYSYMBOL_rel_op = 197,                   /* rel_op  */
  YYSYMBOL_shift_op = 198,                 /* shift_op  */
  YYSYMBOL_add_op = 199,                   /* add_op  */
  YYSYMBOL_mul_op = 200,                   /* mul_op  */
  YYSYMBOL_opt_exp = 201,                  /* opt_exp  */
  YYSYMBOL_con_exp = 202,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 203,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 204,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 205,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 206,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 207,                  /* and_exp  */
  YYSYMBOL_eq_exp = 208,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 209,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 210,                /* shift_exp  */
  YYSYMBOL_add_exp = 211,                  /* add_exp  */
  YYSYMBOL_mul_exp = 212,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 213,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 214,                 /* cast_exp  */
  YYSYMBOL_unary_op = 215,                 /* unary_op  */
  YYSYMBOL_unary_exp = 216,                /* unary_exp  */
  YYSYMBOL_lambda_list = 217,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 218,               /* lambda_arg  */
  YYSYMBOL_type_list = 219,                /* type_list  */
  YYSYMBOL_call_paren = 220,               /* call_paren  */
  YYSYMBOL_post_op = 221,                  /* post_op  */
  YYSYMBOL_dot_exp = 222,                  /* dot_exp  */
  YYSYMBOL_post_exp = 223,                 /* post_exp  */
  YYSYMBOL_interp_exp = 224,               /* interp_exp  */
  YYSYMBOL_interp = 225,                   /* interp  */
  YYSYMBOL_typeof_exp = 226,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 227                  /* prim_exp  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  180
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1616

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  457

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   371


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
     115,   116
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   149,   149,   150,   153,   154,   158,   159,   160,   161,
     162,   163,   164,   167,   167,   169,   180,   180,   182,   182,
     184,   184,   186,   187,   189,   192,   195,   201,   208,   208,
     210,   214,   219,   220,   222,   223,   232,   233,   233,   240,
     241,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   272,   272,   275,   278,   280,   282,   282,
     285,   293,   294,   296,   296,   298,   306,   307,   310,   312,
     314,   316,   318,   320,   324,   327,   329,   334,   335,   336,
     339,   340,   343,   343,   346,   347,   350,   350,   353,   354,
     355,   357,   357,   359,   359,   359,   362,   363,   364,   368,
     369,   370,   374,   375,   376,   379,   379,   381,   382,   384,
     386,   386,   387,   387,   388,   388,   390,   390,   392,   393,
     396,   397,   400,   401,   402,   403,   406,   406,   408,   408,
     411,   418,   427,   427,   427,   427,   427,   429,   431,   433,
     438,   443,   446,   446,   446,   448,   448,   451,   455,   456,
     460,   461,   464,   464,   467,   468,   469,   470,   471,   472,
     473,   475,   475,   477,   478,   481,   501,   502,   505,   506,
     508,   509,   510,   511,   511,   513,   513,   514,   514,   514,
     514,   515,   515,   516,   516,   517,   517,   517,   519,   519,
     520,   521,   523,   526,   526,   527,   527,   528,   528,   529,
     529,   530,   530,   531,   531,   532,   532,   533,   533,   534,
     534,   535,   535,   536,   536,   538,   538,   541,   541,   541,
     542,   542,   542,   542,   545,   546,   547,   548,   549,   550,
     553,   554,   555,   555,   558,   559,   562,   562,   564,   564,
     566,   574,   575,   577,   579,   582,   584,   586,   590,   591,
     592,   594,   595,   606,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\";\"", "\",\"",
  "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"fun\"",
  "\"var\"", "\"if\"", "\"else\"", "\"while\"", "\"do\"", "\"until\"",
  "\"repeat\"", "\"for\"", "\"foreach\"", "\"goto\"", "\"match\"",
  "\"case\"", "\"when\"", "\"where\"", "\"enum\"", "\"return\"",
  "\"break\"", "\"continue\"", "\"class\"", "\"struct\"", "\"static\"",
  "\"global\"", "\"private\"", "\"protect\"", "\"abstract\"", "\"final\"",
  "\"extends\"", "\".\"", "\"operator\"", "\"typedef\"", "\"funcdef\"",
  "NOELSE", "\"union\"", "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"",
  "OPID_A", "OPID_D", "\"ref\"", "\"nonnull\"", "\"<integer>\"", "FLOATT",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"`\"",
  "\"<interp string>\"", "INTERP_EXP", "\"<interp string>`\"",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"##! docstring\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"",
  "\"#else\"", "\"#if\"", "\"\\n\"", "\"require\"", "\"@<operator id>\"",
  "\"$<operator id>\"", "\"<identifier>\"", "\"+\"", "\"++\"", "\"-\"",
  "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"", "\"::\"",
  "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"", "\"<<<\"",
  "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"", "\"<\"",
  "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"", "\"||\"",
  "\":[\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "RANGE_EMPTY",
  "UMINUS", "UTIMES", "\"=\"", "STMT_ASSOC", "STMT_NOASSOC", "$accept",
  "prg", "ast", "section", "class_type", "class_def", "class_ext",
  "class_body", "id_list", "stmt_list", "fptr_base", "func_base",
  "fptr_def", "type_def", "type_decl_array", "type_decl_exp",
  "type_decl_empty", "arg", "arg_list", "fptr_arg", "fptr_list",
  "code_stmt", "stmt_pp", "stmt", "opt_id", "enum_def", "label_stmt",
  "goto_stmt", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "union_exp", "func_args", "fptr_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "final",
  "modifier", "func_def_base", "abstract_fdef", "op_op", "op_base",
  "op_def", "func_def", "ref", "type_decl_tmpl", "type_decl_next",
  "type_decl_noflag", "type_decl", "type_decl_flag", "type_decl_flag2",
  "decl_list", "union_def", "var_decl_list", "var_decl", "arg_decl",
  "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op", "mul_op",
  "opt_exp", "con_exp", "log_or_exp", "log_and_exp", "inc_or_exp",
  "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp", "add_exp",
  "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp", "lambda_list",
  "lambda_arg", "type_list", "call_paren", "post_op", "dot_exp",
  "post_exp", "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
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
     365,   366,   367,   368,   369,   370,   371
};
#endif

#define YYPACT_NINF (-319)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     422,    46,   779,   838,   529,    57,  -319,    66,  -319,   627,
    -319,    68,    77,    81,    24,  1369,    57,  1369,  -319,  -319,
    -319,  -319,   263,    57,    57,    57,   -13,  1369,    28,  -319,
      43,  -319,  -319,  -319,  -319,   897,  -319,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,    30,  -319,
    -319,  -319,  -319,     9,   112,   112,   118,  1369,  -319,  -319,
     124,  -319,   422,    57,  -319,  -319,  -319,  -319,  -319,  -319,
    1524,  -319,  -319,  -319,  -319,   123,  -319,  -319,  -319,   130,
    -319,  -319,  -319,   131,    19,  -319,   128,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,    57,  -319,  -319,   -43,    52,
      40,    45,    49,   -36,    63,   -25,   -26,    36,    67,    72,
    1426,  -319,   112,  -319,  -319,    35,   100,  -319,  -319,  -319,
    -319,   157,  -319,   158,  -319,  1369,    22,  -319,   155,  -319,
    -319,  -319,  -319,   161,  -319,    47,    60,  1369,    50,  1369,
     717,   116,   166,   162,    98,   171,    69,  -319,  -319,  -319,
     179,   112,   136,  -319,  -319,   173,   -29,     9,  -319,     9,
     176,     9,    98,  -319,   132,    38,    28,  -319,  -319,   897,
    -319,   125,  -319,  -319,  -319,  -319,  -319,  -319,  1369,    89,
    -319,  -319,    65,  -319,  1369,  -319,  -319,  1369,  1369,  1369,
     956,  -319,   -29,  1369,  1426,  1426,  1426,  1426,  1426,  1426,
    -319,  -319,  1426,  -319,  -319,  -319,  -319,  1426,  -319,  -319,
    1426,  -319,  -319,  1426,  -319,  -319,  -319,  1426,  1426,     9,
    -319,  -319,  1015,   111,  -319,     9,   182,  -319,  -319,  -319,
     897,  1426,  -319,   181,   183,  1074,  -319,     9,    29,  -319,
       9,  -319,     9,   186,  1369,   187,   717,  -319,   120,  -319,
     174,  -319,   191,  -319,  -319,   161,  -319,  -319,  -319,  -319,
     196,  -319,  -319,  -319,  -319,   197,  -319,   121,  1133,  -319,
    -319,   198,   129,     9,    29,   133,    99,  -319,  -319,  -319,
    -319,   897,   201,  -319,  -319,  -319,   135,   206,  -319,  -319,
    -319,  -319,   205,   139,  -319,   134,  -319,    52,    40,    45,
      49,   -36,    63,   -25,   -26,    36,    67,    72,  -319,  -319,
     214,   213,  1192,  -319,  -319,  -319,  -319,  1251,  -319,  -319,
     216,  -319,   221,   151,  -319,   223,   112,   159,   160,   627,
     230,   627,  1310,   153,  1369,   174,   231,   165,   236,     9,
       9,  -319,     9,    99,   239,  -319,   151,   241,    99,   165,
     237,  -319,  -319,    99,   627,   173,  -319,   244,  1426,     9,
    -319,  -319,   243,  -319,  -319,     9,   173,   167,  -319,  -319,
      99,    99,   240,  -319,  -319,   627,   245,  1369,   226,  -319,
     242,   258,   254,  -319,   261,   260,   262,   267,     9,  -319,
    -319,  -319,  -319,   264,   -29,   233,  -319,  -319,   139,  -319,
    -319,  -319,  -319,  -319,   128,  1369,   176,  -319,   627,  -319,
     627,    21,  1369,   188,   627,  -319,   165,  -319,     9,   112,
    -319,  -319,  -319,  -319,   280,   151,   274,     9,   276,  -319,
     -17,    29,  -319,  -319,   627,  -319,   627,  -319,  -319,   281,
    -319,   -29,  -319,    98,  -319,   422,   287,  -319,  -319,  -319,
    -319,   289,  -319,   283,  -319,  -319,  -319
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    93,     0,     0,     0,   135,   171,     0,    76,     0,
      77,     0,     0,     0,     0,     0,   135,    87,    88,    89,
      13,    14,     0,   135,   135,   135,   165,     0,   243,   164,
     166,   265,   266,   268,   269,     0,    41,    43,    44,    45,
      42,    46,    47,    48,    49,    50,    51,    52,   264,   248,
     227,   249,   228,     0,   231,   232,     0,     0,   233,   230,
       0,     2,     4,   135,     8,     6,    11,    12,    56,    61,
      22,     9,    57,    58,    59,     0,    54,    62,    55,     0,
      60,    95,    53,     0,    96,   115,   116,   271,   270,    98,
     152,   153,   154,     7,   172,   135,    10,   117,   200,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   221,   223,
       0,   225,     0,   229,   257,   234,   267,   276,   251,    92,
     275,     0,   264,     0,   109,     0,     0,    39,     0,   128,
     129,   130,   131,     0,   133,   132,   137,     0,     0,     0,
       0,   155,     0,     0,    64,     0,   102,   231,   232,    31,
       0,     0,   158,   160,   162,    28,     0,     0,   161,     0,
       0,     0,    64,   168,   169,     0,   240,   242,   167,     0,
     258,     0,   261,    66,    30,   237,   238,   239,     0,     0,
       1,     5,   137,    23,     0,    91,    94,     0,     0,     0,
       0,   111,     0,   199,     0,     0,     0,     0,     0,     0,
     185,   186,     0,   190,   188,   189,   187,     0,   191,   192,
       0,   193,   194,     0,   195,   196,   197,     0,     0,     0,
     235,   274,     0,     0,   256,     0,     0,   252,   253,   255,
       0,     0,   273,     0,   106,     0,    40,   121,     0,   134,
       0,   136,     0,     0,     0,     0,     0,   156,     0,    67,
       0,    63,     0,    90,   157,     0,   103,   104,   105,   142,
       0,   144,   143,   146,   145,     0,   151,     0,     0,    29,
     163,     0,     0,   123,     0,     0,   127,   170,    84,   241,
     259,     0,     0,   272,   138,   139,     0,     0,    97,    99,
     100,   110,     0,     0,   198,     0,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   250,
     244,     0,     0,   254,   262,   236,   114,     0,   107,   113,
       0,    34,   120,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,   159,     0,   127,    37,   122,   184,     0,   127,     0,
       0,   260,   263,   127,     0,   178,   118,   177,     0,     0,
     101,   247,     0,   108,   112,     0,   180,    33,   124,   140,
     127,   127,    85,    79,    83,     0,     0,     0,    69,    72,
      74,    20,     0,   150,     0,     0,     0,     0,     0,   183,
      36,    26,    24,     0,     0,    17,    78,   179,     0,   201,
     245,   246,    35,   182,   181,     0,     0,    25,     0,    80,
       0,     0,     0,     0,     0,    75,     0,    65,     0,     0,
     149,    27,    38,   126,     0,     0,     0,     0,     0,   176,
      32,     0,    86,    81,     0,    68,     0,    73,    21,     0,
     148,   173,   119,    64,    16,    19,     0,    82,    70,   147,
     174,     0,    18,     0,   141,   175,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -319,  -319,   -57,  -319,  -319,  -319,  -319,  -319,  -318,    -4,
    -319,  -319,  -319,  -319,   -46,  -132,    -3,  -314,  -319,  -319,
     -92,   -40,  -319,    -8,  -152,  -319,  -319,  -319,  -319,  -319,
     -38,  -319,  -319,   163,  -319,  -319,  -319,  -319,  -319,   297,
    -116,     1,   -21,   154,  -319,   -78,   -67,   189,  -144,   -79,
    -319,    48,  -104,  -253,  -265,   170,  -319,    32,   127,  -319,
    -319,  -319,  -319,  -319,  -319,  -319,  -319,  -319,    39,  -147,
    -220,   -10,  -319,  -134,  -319,   -87,  -319,  -317,  -319,  -319,
     175,   177,   178,   184,  -319,  -181,  -319,   115,   140,   119,
     114,   138,   122,   110,   137,   144,   141,   113,   322,   -88,
     185,  -319,   -11,  -319,   -81,  -319,  -319,  -149,  -319,   -20,
    -319
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,   428,   453,   382,    65,
     160,   133,    66,    67,   149,   175,   310,   321,   322,   344,
     345,    68,    69,    70,   252,    71,    72,    73,   413,   335,
     336,   415,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   226,   259,    85,    86,    87,    88,    89,
     424,   238,   274,   326,   350,   134,   135,   136,   242,   286,
      90,    91,   260,   151,    92,    93,   248,   152,   153,   154,
     155,    94,    95,   426,    96,   356,   357,   367,   390,   202,
     207,   210,   213,   217,   295,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     167,   112,   311,   313,   113,   114,   115,   172,   116,   117,
     118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     128,   138,   158,   123,   126,   181,   165,   174,   191,   270,
     276,   269,   156,   296,   176,   177,   143,   323,   145,   150,
     280,   347,   220,   187,   246,   384,   385,   434,   386,   389,
     234,   393,   188,   158,   229,   324,   171,   227,   163,   164,
    -102,   193,   222,   156,   194,   293,   146,     4,   144,  -103,
     211,   402,   212,   346,    26,   159,   161,   162,   179,   200,
      29,    30,    56,   195,   201,     8,   183,    10,   188,   265,
     188,   137,   221,   139,   223,   325,   208,   209,   387,   129,
     130,   314,   140,   392,   146,   224,   141,   188,   395,   129,
     130,   131,   132,   189,   168,   182,   240,   241,   438,   142,
      56,   284,   241,   166,   439,   406,   407,   235,   442,   289,
     290,   266,    49,   272,    51,   173,   214,   215,   216,   323,
     323,     4,   323,   178,   180,   278,   233,   192,   184,   189,
     332,   189,   351,   185,   186,   190,   158,   158,   243,   158,
     245,   158,   225,   315,   197,   323,   196,   156,   189,   156,
     198,   156,   199,   218,   271,   219,   318,   230,   275,   203,
     204,   205,   206,   231,   232,   236,   237,   247,   346,   249,
     171,   250,   158,   251,   253,   267,   225,   399,   446,   282,
     268,   273,   283,   277,   281,   287,   309,   312,   288,   316,
     317,   292,   329,   331,   294,   333,   146,   334,   323,   158,
     337,   339,   340,   342,   343,   158,   349,   352,   348,   156,
     353,   397,   354,   234,   355,   156,   308,   158,   359,   358,
     158,   360,   158,   126,   364,   365,   366,   156,   255,   368,
     156,   171,   156,   373,   370,   371,   320,   327,   377,   328,
     381,   380,   383,   388,   391,   330,   394,   425,   398,   401,
     412,   410,   405,   158,   408,   211,    49,   212,    51,   214,
     215,   216,   416,   156,   417,   418,   419,   414,   420,   292,
     421,   427,   423,   436,   256,   203,   204,   205,   206,   257,
     208,   209,   171,   441,   443,   445,   369,   449,   403,   258,
     454,   451,   455,   456,   425,   444,   422,   379,   119,   404,
     254,   244,   431,   338,   228,   239,   341,   450,    26,   285,
     297,   429,   300,   362,    29,    30,   299,   303,   292,   158,
     158,   372,   158,   374,   302,   261,   191,   262,   263,   156,
     156,   307,   156,   376,   264,   378,   298,   301,   146,   158,
      49,    50,    51,    52,   157,   158,   396,   304,   400,   156,
       0,   279,   147,   148,    56,   156,   411,   305,   306,     0,
       0,     0,     0,     0,     0,     0,     0,   409,   158,     0,
       0,    58,    59,     0,   158,     0,     0,     0,   156,   440,
       0,   174,     0,     0,   430,     0,     0,     0,   452,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
     432,     0,   433,     0,     0,     0,   437,   158,   156,     0,
       0,     0,     0,   435,     0,     0,     0,   156,     0,     0,
       0,   158,     0,     0,     0,     1,   447,     2,     0,     3,
       0,     4,   448,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,     0,    25,    26,     0,    27,
      28,     0,     0,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,     0,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    59,     1,     0,     2,     0,     3,     0,     4,   127,
       0,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,    28,     0,     0,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     0,     0,    48,     0,    49,    50,    51,    52,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,    58,    59,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
       0,     0,     0,     0,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,    28,     0,     0,    29,    30,
      31,    32,    33,    34,    35,     0,     0,     0,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       0,     0,    48,     0,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
       1,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    28,     0,     0,    29,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,   120,     3,     0,     0,     0,
       0,     6,   122,     0,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    58,    59,    28,     0,   121,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   124,     0,     0,     0,
       6,     0,     0,     0,   122,     0,    49,    50,    51,    52,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    58,    59,    29,
      30,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,   122,     0,    49,    50,    51,    52,     0,
       0,     0,     0,   125,     0,     0,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    28,    58,    59,    29,    30,
      31,    32,    33,    34,    35,   169,     0,   170,     0,     0,
       0,     2,     0,     3,   291,     0,     0,     0,     6,     0,
       0,     0,   122,     0,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    58,    59,    29,    30,    31,
      32,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     6,     0,     0,
       0,   122,     0,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    28,    58,    59,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   319,     0,     0,     0,     6,     0,     0,     0,
     122,     0,    49,    50,    51,    52,     0,     0,     0,     0,
     125,     0,     0,    53,    54,    55,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    58,    59,    29,    30,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     2,     0,
       3,   124,     0,     0,     0,     6,     0,     0,     0,   122,
       0,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,    58,    59,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     2,   361,     3,
       0,     0,     0,     0,     6,     0,     0,     0,   122,     0,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    58,    59,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     2,     0,     3,   363,
       0,     0,     0,     6,     0,     0,     0,   122,     0,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
      58,    59,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     2,   375,     3,     0,     0,
       0,     0,     6,     0,     0,     0,   122,     0,    49,    50,
      51,    52,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    58,
      59,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       0,     6,     0,     0,     0,   122,     0,    49,    50,    51,
      52,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    28,    58,    59,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,    49,    50,    51,    52,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    58,    59,    31,
      32,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     4,    58,    59,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,    28,     0,     0,    29,    30,    31,    32,    33,
      34,    35,     0,     0,     0,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     0,     0,    48,
       0,    49,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57
};

static const yytype_int16 yycheck[] =
{
       4,     9,    22,     2,     3,    62,    27,    53,    86,   156,
     162,   155,    22,   194,    54,    55,    15,   237,    17,    22,
     169,   274,   110,     4,   140,   339,   340,     6,   342,   346,
       8,   349,    49,    53,   115,     6,    35,   115,    51,    52,
       5,    84,     7,    53,    87,   192,    75,     9,    16,     3,
      76,   365,    78,   273,    45,    23,    24,    25,    57,    95,
      51,    52,    91,   106,   100,    15,    70,    17,    49,   150,
      49,     5,   112,     5,    39,    46,   101,   102,   343,    32,
      33,   230,     5,   348,    75,    50,     5,    49,   353,    32,
      33,    34,    35,   110,    51,    63,    36,    37,   416,    75,
      91,    36,    37,    75,   418,   370,   371,    85,   425,   188,
     189,   151,    77,   159,    79,    85,    80,    81,    82,   339,
     340,     9,   342,     5,     0,   165,   125,    95,     5,   110,
     246,   110,   281,     3,     3,     7,   156,   157,   137,   159,
     139,   161,   107,   231,   104,   365,    94,   157,   110,   159,
     105,   161,   103,    86,   157,    83,   234,    57,   161,    96,
      97,    98,    99,     6,     6,    10,     5,    51,   388,     3,
     169,     9,   192,    75,     3,    39,   107,   358,   431,   178,
       7,     5,    93,    51,    59,   184,    75,     5,   187,     8,
       7,   190,     6,     6,   193,    75,    75,    23,   418,   219,
       9,     5,     5,     5,    75,   225,   107,     6,    75,   219,
      75,   355,     6,     8,    75,   225,   219,   237,     4,    85,
     240,     8,   242,   222,     8,     4,    75,   237,    49,     6,
     240,   230,   242,     3,    75,    75,   235,   240,    85,   242,
      75,    10,     6,     4,     3,   244,     9,   394,     4,     6,
      24,     6,    85,   273,    14,    76,    77,    78,    79,    80,
      81,    82,     4,   273,    10,     4,     6,    25,     6,   268,
       3,    38,     8,    85,    95,    96,    97,    98,    99,   100,
     101,   102,   281,     3,    10,     9,   326,     6,   366,   110,
       3,   443,     3,    10,   441,   427,   388,   335,     1,   366,
     146,   138,   406,   255,   115,   135,   267,   441,    45,   182,
     195,   398,   198,   312,    51,    52,   197,   207,   317,   339,
     340,   329,   342,   331,   202,   150,   404,   150,   150,   339,
     340,   218,   342,   332,   150,   334,   196,   199,    75,   359,
      77,    78,    79,    80,    22,   365,   354,   210,   359,   359,
      -1,   166,    89,    90,    91,   365,   377,   213,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,   388,    -1,
      -1,   108,   109,    -1,   394,    -1,    -1,    -1,   388,   419,
      -1,   427,    -1,    -1,   405,    -1,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
     408,    -1,   410,    -1,    -1,    -1,   414,   427,   418,    -1,
      -1,    -1,    -1,   412,    -1,    -1,    -1,   427,    -1,    -1,
      -1,   441,    -1,    -1,    -1,     3,   434,     5,    -1,     7,
      -1,     9,   436,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    44,    45,    -1,    47,
      48,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   109,     3,    -1,     5,    -1,     7,    -1,     9,    10,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,   108,   109,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    75,    -1,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,   108,   109,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   108,   109,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,   108,   109,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   108,   109,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,   108,   109,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   108,   109,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    75,
      -1,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,   108,   109,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,   108,   109,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
     108,   109,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   108,
     109,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    75,    -1,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   108,   109,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,   108,   109,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,     9,   108,   109,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    40,    41,    42,    44,    45,    47,    48,    51,
      52,    53,    54,    55,    56,    57,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    75,    77,
      78,    79,    80,    88,    89,    90,    91,    92,   108,   109,
     118,   119,   120,   121,   122,   126,   129,   130,   138,   139,
     140,   142,   143,   144,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   162,   163,   164,   165,   166,
     177,   178,   181,   182,   188,   189,   191,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   218,   221,   222,   223,   225,   226,   227,   156,
       6,    50,    75,   158,     8,    85,   158,    10,   126,    32,
      33,    34,    35,   128,   172,   173,   174,     5,   140,     5,
       5,     5,    75,   158,   174,   158,    75,    89,    90,   131,
     133,   180,   184,   185,   186,   187,   188,   215,   226,   174,
     127,   174,   174,    51,    52,   159,    75,   217,    51,    58,
      60,   158,   224,    85,   131,   132,   138,   138,     5,   158,
       0,   119,   174,   126,     5,     3,     3,     4,    49,   110,
       7,   162,   174,    84,    87,   106,    94,   104,   105,   103,
      95,   100,   196,    96,    97,    98,    99,   197,   101,   102,
     198,    76,    78,   199,    80,    81,    82,   200,    86,    83,
     216,   138,     7,    39,    50,   107,   160,   162,   164,   221,
      57,     6,     6,   158,     8,    85,    10,     5,   168,   172,
      36,    37,   175,   158,   150,   158,   157,    51,   183,     3,
       9,    75,   141,     3,   160,    49,    95,   100,   110,   161,
     179,   197,   198,   199,   200,   221,   138,    39,     7,   165,
     186,   133,   131,     5,   169,   133,   141,    51,   138,   217,
     224,    59,   158,    93,    36,   175,   176,   158,   158,   166,
     166,     8,   158,   186,   158,   201,   202,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   133,    75,
     133,   219,     5,   220,   224,   216,     8,     7,   162,     8,
     158,   134,   135,   187,     6,    46,   170,   133,   133,     6,
     158,     6,   157,    75,    23,   146,   147,     9,   168,     5,
       5,   185,     5,    75,   136,   137,   187,   170,    75,   107,
     171,   224,     6,    75,     6,    75,   192,   193,    85,     4,
       8,     6,   158,     8,     8,     4,    75,   194,     6,   138,
      75,    75,   140,     3,   140,     6,   158,    85,   158,   147,
      10,    75,   125,     6,   134,   134,   134,   171,     4,   194,
     195,     3,   171,   125,     9,   171,   140,   165,     4,   202,
     219,     6,   134,   162,   163,    85,   171,   171,    14,   140,
       6,   159,    24,   145,    25,   148,     4,    10,     4,     6,
       6,     3,   137,     8,   167,   186,   190,    38,   123,   192,
     159,   169,   140,   140,     6,   158,    85,   140,   125,   134,
     138,     3,   194,    10,   132,     9,   170,   140,   126,     6,
     190,   141,   119,   124,     3,     3,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   128,   129,   130,   131,   131,
     132,   133,   134,   134,   135,   135,   136,   137,   137,   138,
     138,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   142,   143,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   150,   150,   151,   151,
     151,   151,   151,   151,   152,   153,   153,   154,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     159,   160,   160,   161,   161,   161,   162,   162,   162,   163,
     163,   163,   164,   164,   164,   165,   165,   166,   166,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   174,   174,   174,   174,   175,   175,   176,   176,
     177,   178,   179,   179,   179,   179,   179,   180,   180,   180,
     180,   181,   182,   182,   182,   183,   183,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     188,   189,   189,   190,   190,   191,   192,   192,   193,   193,
     194,   194,   194,   195,   195,   196,   196,   197,   197,   197,
     197,   198,   198,   199,   199,   200,   200,   200,   201,   201,
     202,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   215,
     215,   215,   215,   215,   216,   216,   216,   216,   216,   216,
     217,   217,   218,   218,   219,   219,   220,   220,   221,   221,
     222,   223,   223,   223,   223,   223,   223,   223,   224,   224,
     224,   225,   225,   226,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     6,     1,     2,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     3,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     8,     5,     3,     5,     7,     1,     1,     1,
       3,     2,     2,     1,     2,     1,     1,     3,     1,     3,
       3,     3,     0,     1,     1,     1,     3,     4,     5,     2,
       3,     2,     5,     4,     4,     1,     1,     1,     4,     2,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     0,     1,     1,
       5,     9,     1,     1,     1,     1,     1,     7,     6,     5,
       4,     3,     1,     1,     1,     0,     1,     2,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       3,     1,     1,     2,     3,     9,     3,     1,     1,     2,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     2,     2,     2,
       1,     2,     2,     1,     1,     3,     3,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     2,     1,     1,     2,
       3,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     1
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
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Scanner* arg)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_ast: /* ast  */
#line 146 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1736 "src/parser.c"
        break;

      default:
        break;
    }
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
#line 149 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2037 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 150 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2043 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 153 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2049 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 154 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2055 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 158 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2061 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 159 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2067 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 160 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2073 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 161 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2079 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 162 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2085 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 163 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2091 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 164 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2097 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 167 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2103 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 167 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2109 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 170 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2123 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 180 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2129 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 180 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2135 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 182 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2141 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 184 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); }
#line 2147 "src/parser.c"
    break;

  case 21: /* id_list: "<identifier>" "," id_list  */
#line 184 "src/gwion.y"
                                                                      { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list)); }
#line 2153 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 186 "src/gwion.y"
                                   { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2159 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 187 "src/gwion.y"
                                  { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2165 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 189 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2172 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 192 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2179 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 195 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2189 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 201 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2200 "src/parser.c"
    break;

  case 29: /* type_decl_array: type_decl array  */
#line 208 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2206 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 210 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2214 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 214 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2222 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 219 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2228 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 220 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2234 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 222 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2240 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 223 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2253 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 232 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2259 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 233 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2265 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_arg "," fptr_list  */
#line 233 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2275 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 240 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2281 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 241 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), GET_LOC(&(yyloc))); }
#line 2287 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 245 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2293 "src/parser.c"
    break;

  case 42: /* stmt_pp: "##! docstring"  */
#line 246 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_docstr,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2299 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#include"  */
#line 247 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2305 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#define"  */
#line 248 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2311 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#pragma"  */
#line 249 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2317 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#undef"  */
#line 250 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2323 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifdef"  */
#line 251 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2329 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#ifndef"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2335 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#else"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2341 "src/parser.c"
    break;

  case 50: /* stmt_pp: "#if"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2347 "src/parser.c"
    break;

  case 51: /* stmt_pp: "\n"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2353 "src/parser.c"
    break;

  case 52: /* stmt_pp: "require"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2359 "src/parser.c"
    break;

  case 64: /* opt_id: %empty  */
#line 272 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2365 "src/parser.c"
    break;

  case 65: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 275 "src/gwion.y"
                                              { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2372 "src/parser.c"
    break;

  case 66: /* label_stmt: "<identifier>" ":"  */
#line 278 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2378 "src/parser.c"
    break;

  case 67: /* goto_stmt: "goto" "<identifier>" ";"  */
#line 280 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2384 "src/parser.c"
    break;

  case 68: /* when_exp: "when" exp  */
#line 282 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2390 "src/parser.c"
    break;

  case 69: /* when_exp: %empty  */
#line 282 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2396 "src/parser.c"
    break;

  case 70: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 285 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2407 "src/parser.c"
    break;

  case 71: /* match_list: match_case_stmt  */
#line 293 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2413 "src/parser.c"
    break;

  case 72: /* match_list: match_case_stmt match_list  */
#line 294 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2419 "src/parser.c"
    break;

  case 73: /* where_stmt: "where" stmt  */
#line 296 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2425 "src/parser.c"
    break;

  case 74: /* where_stmt: %empty  */
#line 296 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2431 "src/parser.c"
    break;

  case 75: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 298 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2442 "src/parser.c"
    break;

  case 76: /* flow: "while"  */
#line 306 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2448 "src/parser.c"
    break;

  case 77: /* flow: "until"  */
#line 307 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2454 "src/parser.c"
    break;

  case 78: /* loop_stmt: flow "(" exp ")" stmt  */
#line 311 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, GET_LOC(&(yyloc))); }
#line 2460 "src/parser.c"
    break;

  case 79: /* loop_stmt: "do" stmt flow exp ";"  */
#line 313 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, GET_LOC(&(yyloc))); }
#line 2466 "src/parser.c"
    break;

  case 80: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 315 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2472 "src/parser.c"
    break;

  case 81: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 317 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2478 "src/parser.c"
    break;

  case 82: /* loop_stmt: "foreach" "(" ref "<identifier>" ":" binary_exp ")" stmt  */
#line 319 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2484 "src/parser.c"
    break;

  case 83: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 321 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2490 "src/parser.c"
    break;

  case 84: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 324 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2496 "src/parser.c"
    break;

  case 85: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 328 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2502 "src/parser.c"
    break;

  case 86: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 330 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2508 "src/parser.c"
    break;

  case 87: /* breaks: "return"  */
#line 334 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2514 "src/parser.c"
    break;

  case 88: /* breaks: "break"  */
#line 335 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2520 "src/parser.c"
    break;

  case 89: /* breaks: "continue"  */
#line 336 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2526 "src/parser.c"
    break;

  case 90: /* jump_stmt: "return" exp ";"  */
#line 339 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2532 "src/parser.c"
    break;

  case 91: /* jump_stmt: breaks ";"  */
#line 340 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2538 "src/parser.c"
    break;

  case 92: /* _exp_stmt: ";" _exp_stmt  */
#line 343 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2544 "src/parser.c"
    break;

  case 93: /* _exp_stmt: ";"  */
#line 343 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2550 "src/parser.c"
    break;

  case 94: /* exp_stmt: exp ";"  */
#line 346 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2556 "src/parser.c"
    break;

  case 95: /* exp_stmt: _exp_stmt  */
#line 347 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2562 "src/parser.c"
    break;

  case 97: /* exp: binary_exp "," exp  */
#line 350 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2568 "src/parser.c"
    break;

  case 99: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 354 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2574 "src/parser.c"
    break;

  case 100: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 355 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2580 "src/parser.c"
    break;

  case 101: /* call_template: ":[" type_list "]"  */
#line 357 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2586 "src/parser.c"
    break;

  case 102: /* call_template: %empty  */
#line 357 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2592 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]"  */
#line 362 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2598 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]" array_exp  */
#line 363 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2604 "src/parser.c"
    break;

  case 108: /* array_exp: "[" exp "]" "[" "]"  */
#line 364 "src/gwion.y"
                                     { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2610 "src/parser.c"
    break;

  case 109: /* array_empty: "[" "]"  */
#line 368 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2616 "src/parser.c"
    break;

  case 110: /* array_empty: array_empty "[" "]"  */
#line 369 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2622 "src/parser.c"
    break;

  case 111: /* array_empty: array_empty array_exp  */
#line 370 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2628 "src/parser.c"
    break;

  case 112: /* range: "[" exp ":" exp "]"  */
#line 374 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2634 "src/parser.c"
    break;

  case 113: /* range: "[" exp ":" "]"  */
#line 375 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2640 "src/parser.c"
    break;

  case 114: /* range: "[" ":" exp "]"  */
#line 376 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2646 "src/parser.c"
    break;

  case 118: /* decl_exp: type_decl_flag2 flag type_decl_noflag var_decl_list  */
#line 382 "src/gwion.y"
                                                        { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), GET_LOC(&(yyloc))); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2652 "src/parser.c"
    break;

  case 119: /* union_exp: type_decl_noflag arg_decl  */
#line 384 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL), GET_LOC(&(yyloc))); }
#line 2658 "src/parser.c"
    break;

  case 120: /* func_args: "(" arg_list  */
#line 386 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2664 "src/parser.c"
    break;

  case 121: /* func_args: "("  */
#line 386 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2670 "src/parser.c"
    break;

  case 122: /* fptr_args: "(" fptr_list  */
#line 387 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2676 "src/parser.c"
    break;

  case 123: /* fptr_args: "("  */
#line 387 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2682 "src/parser.c"
    break;

  case 124: /* arg_type: "..." ")"  */
#line 388 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2688 "src/parser.c"
    break;

  case 125: /* arg_type: ")"  */
#line 388 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2694 "src/parser.c"
    break;

  case 126: /* decl_template: ":[" id_list "]"  */
#line 390 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2700 "src/parser.c"
    break;

  case 127: /* decl_template: %empty  */
#line 390 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2706 "src/parser.c"
    break;

  case 128: /* storage_flag: "static"  */
#line 392 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2712 "src/parser.c"
    break;

  case 129: /* storage_flag: "global"  */
#line 393 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2718 "src/parser.c"
    break;

  case 130: /* access_flag: "private"  */
#line 396 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2724 "src/parser.c"
    break;

  case 131: /* access_flag: "protect"  */
#line 397 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2730 "src/parser.c"
    break;

  case 132: /* flag: access_flag  */
#line 400 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2736 "src/parser.c"
    break;

  case 133: /* flag: storage_flag  */
#line 401 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2742 "src/parser.c"
    break;

  case 134: /* flag: access_flag storage_flag  */
#line 402 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2748 "src/parser.c"
    break;

  case 135: /* flag: %empty  */
#line 403 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2754 "src/parser.c"
    break;

  case 136: /* final: "final"  */
#line 406 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2760 "src/parser.c"
    break;

  case 137: /* final: %empty  */
#line 406 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2766 "src/parser.c"
    break;

  case 138: /* modifier: "abstract"  */
#line 408 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2772 "src/parser.c"
    break;

  case 140: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 411 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2782 "src/parser.c"
    break;

  case 141: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 419 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, GET_LOC(&(yyloc)));
    }
#line 2794 "src/parser.c"
    break;

  case 147: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 430 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2800 "src/parser.c"
    break;

  case 148: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 432 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2806 "src/parser.c"
    break;

  case 149: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 434 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2815 "src/parser.c"
    break;

  case 150: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 439 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2824 "src/parser.c"
    break;

  case 151: /* op_def: "operator" op_base code_stmt  */
#line 444 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2830 "src/parser.c"
    break;

  case 154: /* func_def: op_def  */
#line 446 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2836 "src/parser.c"
    break;

  case 155: /* ref: %empty  */
#line 448 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 2842 "src/parser.c"
    break;

  case 156: /* ref: "ref"  */
#line 448 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 2848 "src/parser.c"
    break;

  case 157: /* type_decl_tmpl: "<identifier>" call_template  */
#line 451 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2854 "src/parser.c"
    break;

  case 159: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 456 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2860 "src/parser.c"
    break;

  case 160: /* type_decl_noflag: type_decl_next  */
#line 460 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2866 "src/parser.c"
    break;

  case 161: /* type_decl_noflag: typeof_exp  */
#line 461 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2872 "src/parser.c"
    break;

  case 163: /* type_decl: type_decl_flag type_decl_noflag  */
#line 464 "src/gwion.y"
                                                              { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2878 "src/parser.c"
    break;

  case 164: /* type_decl_flag: "ref"  */
#line 467 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 2884 "src/parser.c"
    break;

  case 165: /* type_decl_flag: "const"  */
#line 468 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2890 "src/parser.c"
    break;

  case 166: /* type_decl_flag: "nonnull"  */
#line 469 "src/gwion.y"
            { (yyval.flag) = ae_flag_nonnull; }
#line 2896 "src/parser.c"
    break;

  case 167: /* type_decl_flag: "nonnull" "ref"  */
#line 470 "src/gwion.y"
                { (yyval.flag) = ae_flag_nonnull | ae_flag_ref; }
#line 2902 "src/parser.c"
    break;

  case 168: /* type_decl_flag: "const" "ref"  */
#line 471 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 2908 "src/parser.c"
    break;

  case 169: /* type_decl_flag: "const" "nonnull"  */
#line 472 "src/gwion.y"
                   { (yyval.flag) = ae_flag_const | ae_flag_nonnull; }
#line 2914 "src/parser.c"
    break;

  case 170: /* type_decl_flag: "const" "nonnull" "ref"  */
#line 473 "src/gwion.y"
                       { (yyval.flag) = ae_flag_const | ae_flag_nonnull | ae_flag_ref; }
#line 2920 "src/parser.c"
    break;

  case 171: /* type_decl_flag2: "var"  */
#line 475 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2926 "src/parser.c"
    break;

  case 173: /* decl_list: union_exp ";"  */
#line 477 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2932 "src/parser.c"
    break;

  case 174: /* decl_list: union_exp ";" decl_list  */
#line 478 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2938 "src/parser.c"
    break;

  case 175: /* union_def: "union" flag opt_id decl_template "{" decl_list "}" opt_id ";"  */
#line 481 "src/gwion.y"
                                                                             {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-3].decl_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->type_xid = (yyvsp[-6].sym);
      (yyval.union_def)->xid = (yyvsp[-1].sym);
      (yyval.union_def)->flag = (yyvsp[-7].flag);
      if((yyvsp[-5].id_list)) {
        if(!(yyvsp[-6].sym)) {
          gwion_error(&(yyloc), arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if((yyvsp[-1].sym)) {
          gwion_error(&(yyloc), arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-5].id_list));
      }
    }
#line 2960 "src/parser.c"
    break;

  case 176: /* var_decl_list: var_decl "," var_decl_list  */
#line 501 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2966 "src/parser.c"
    break;

  case 177: /* var_decl_list: var_decl  */
#line 502 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2972 "src/parser.c"
    break;

  case 178: /* var_decl: "<identifier>"  */
#line 505 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2978 "src/parser.c"
    break;

  case 179: /* var_decl: "<identifier>" array  */
#line 506 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2984 "src/parser.c"
    break;

  case 180: /* arg_decl: "<identifier>"  */
#line 508 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2990 "src/parser.c"
    break;

  case 181: /* arg_decl: "<identifier>" array_empty  */
#line 509 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2996 "src/parser.c"
    break;

  case 182: /* arg_decl: "<identifier>" array_exp  */
#line 510 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 3002 "src/parser.c"
    break;

  case 184: /* fptr_arg_decl: %empty  */
#line 511 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 3008 "src/parser.c"
    break;

  case 199: /* opt_exp: %empty  */
#line 519 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3014 "src/parser.c"
    break;

  case 201: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 522 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3020 "src/parser.c"
    break;

  case 202: /* con_exp: log_or_exp "?:" con_exp  */
#line 524 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3026 "src/parser.c"
    break;

  case 204: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 526 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3032 "src/parser.c"
    break;

  case 206: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 527 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3038 "src/parser.c"
    break;

  case 208: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 528 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3044 "src/parser.c"
    break;

  case 210: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3050 "src/parser.c"
    break;

  case 212: /* and_exp: and_exp "&" eq_exp  */
#line 530 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3056 "src/parser.c"
    break;

  case 214: /* eq_exp: eq_exp eq_op rel_exp  */
#line 531 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3062 "src/parser.c"
    break;

  case 216: /* rel_exp: rel_exp rel_op shift_exp  */
#line 532 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3068 "src/parser.c"
    break;

  case 218: /* shift_exp: shift_exp shift_op add_exp  */
#line 533 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3074 "src/parser.c"
    break;

  case 220: /* add_exp: add_exp add_op mul_exp  */
#line 534 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3080 "src/parser.c"
    break;

  case 222: /* mul_exp: mul_exp mul_op dur_exp  */
#line 535 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3086 "src/parser.c"
    break;

  case 224: /* dur_exp: dur_exp "::" cast_exp  */
#line 536 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3092 "src/parser.c"
    break;

  case 226: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 539 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), GET_LOC(&(yyloc))); }
#line 3098 "src/parser.c"
    break;

  case 235: /* unary_exp: unary_op unary_exp  */
#line 546 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3104 "src/parser.c"
    break;

  case 236: /* unary_exp: "(" OPID_D ")" unary_exp  */
#line 547 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3110 "src/parser.c"
    break;

  case 237: /* unary_exp: "new" type_decl_exp  */
#line 548 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3116 "src/parser.c"
    break;

  case 238: /* unary_exp: "spork" code_stmt  */
#line 549 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3122 "src/parser.c"
    break;

  case 239: /* unary_exp: "fork" code_stmt  */
#line 550 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3128 "src/parser.c"
    break;

  case 240: /* lambda_list: "<identifier>"  */
#line 553 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3134 "src/parser.c"
    break;

  case 241: /* lambda_list: "<identifier>" lambda_list  */
#line 554 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3140 "src/parser.c"
    break;

  case 242: /* lambda_arg: "\\" lambda_list  */
#line 555 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3146 "src/parser.c"
    break;

  case 243: /* lambda_arg: "\\"  */
#line 555 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3152 "src/parser.c"
    break;

  case 244: /* type_list: type_decl_empty  */
#line 558 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3158 "src/parser.c"
    break;

  case 245: /* type_list: type_decl_empty "," type_list  */
#line 559 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3164 "src/parser.c"
    break;

  case 246: /* call_paren: "(" exp ")"  */
#line 562 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3170 "src/parser.c"
    break;

  case 247: /* call_paren: "(" ")"  */
#line 562 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3176 "src/parser.c"
    break;

  case 250: /* dot_exp: post_exp "." "<identifier>"  */
#line 566 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), GET_LOC(&(yyloc)));
}
#line 3189 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp array_exp  */
#line 576 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3195 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp range  */
#line 578 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3201 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp call_template call_paren  */
#line 580 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc)));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3208 "src/parser.c"
    break;

  case 255: /* post_exp: post_exp post_op  */
#line 583 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3214 "src/parser.c"
    break;

  case 256: /* post_exp: post_exp OPID_D  */
#line 585 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3220 "src/parser.c"
    break;

  case 257: /* post_exp: dot_exp  */
#line 586 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3226 "src/parser.c"
    break;

  case 258: /* interp_exp: "<interp string>`"  */
#line 590 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3232 "src/parser.c"
    break;

  case 259: /* interp_exp: "<interp string>" interp_exp  */
#line 591 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3238 "src/parser.c"
    break;

  case 260: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 592 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3244 "src/parser.c"
    break;

  case 261: /* interp: "`" interp_exp  */
#line 594 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3250 "src/parser.c"
    break;

  case 262: /* interp: interp "`" interp_exp  */
#line 595 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos->last = (yyvsp[0].exp)->pos->last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3265 "src/parser.c"
    break;

  case 263: /* typeof_exp: "typeof" "(" exp ")"  */
#line 606 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3271 "src/parser.c"
    break;

  case 264: /* prim_exp: "<identifier>"  */
#line 609 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3277 "src/parser.c"
    break;

  case 265: /* prim_exp: "<integer>"  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3283 "src/parser.c"
    break;

  case 266: /* prim_exp: FLOATT  */
#line 611 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3289 "src/parser.c"
    break;

  case 267: /* prim_exp: interp  */
#line 612 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3295 "src/parser.c"
    break;

  case 268: /* prim_exp: "<litteral string>"  */
#line 613 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3301 "src/parser.c"
    break;

  case 269: /* prim_exp: "<litteral char>"  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3307 "src/parser.c"
    break;

  case 270: /* prim_exp: array  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3313 "src/parser.c"
    break;

  case 271: /* prim_exp: range  */
#line 616 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3319 "src/parser.c"
    break;

  case 272: /* prim_exp: "<<<" exp ">>>"  */
#line 617 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3325 "src/parser.c"
    break;

  case 273: /* prim_exp: "(" exp ")"  */
#line 618 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3331 "src/parser.c"
    break;

  case 274: /* prim_exp: lambda_arg code_stmt  */
#line 619 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3337 "src/parser.c"
    break;

  case 275: /* prim_exp: "(" ")"  */
#line 620 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3343 "src/parser.c"
    break;

  case 276: /* prim_exp: typeof_exp  */
#line 621 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3349 "src/parser.c"
    break;


#line 3353 "src/parser.c"

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
      yyerror (&yylloc, arg, YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 623 "src/gwion.y"

