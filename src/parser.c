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
ANN int gwion_error(loc_t, const Scanner*, const char *);
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
  YYSYMBOL_MATCH = 21,                     /* "match"  */
  YYSYMBOL_CASE = 22,                      /* "case"  */
  YYSYMBOL_WHEN = 23,                      /* "when"  */
  YYSYMBOL_WHERE = 24,                     /* "where"  */
  YYSYMBOL_ENUM = 25,                      /* "enum"  */
  YYSYMBOL_TRETURN = 26,                   /* "return"  */
  YYSYMBOL_BREAK = 27,                     /* "break"  */
  YYSYMBOL_CONTINUE = 28,                  /* "continue"  */
  YYSYMBOL_CLASS = 29,                     /* "class"  */
  YYSYMBOL_STRUCT = 30,                    /* "struct"  */
  YYSYMBOL_STATIC = 31,                    /* "static"  */
  YYSYMBOL_GLOBAL = 32,                    /* "global"  */
  YYSYMBOL_PRIVATE = 33,                   /* "private"  */
  YYSYMBOL_PROTECT = 34,                   /* "protect"  */
  YYSYMBOL_ABSTRACT = 35,                  /* "abstract"  */
  YYSYMBOL_FINAL = 36,                     /* "final"  */
  YYSYMBOL_EXTENDS = 37,                   /* "extends"  */
  YYSYMBOL_DOT = 38,                       /* "."  */
  YYSYMBOL_OPERATOR = 39,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 40,                   /* "typedef"  */
  YYSYMBOL_FUNCDEF = 41,                   /* "funcdef"  */
  YYSYMBOL_NOELSE = 42,                    /* NOELSE  */
  YYSYMBOL_UNION = 43,                     /* "union"  */
  YYSYMBOL_CONSTT = 44,                    /* "const"  */
  YYSYMBOL_ELLIPSE = 45,                   /* "..."  */
  YYSYMBOL_VARLOOP = 46,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 47,                 /* "\\"  */
  YYSYMBOL_OPID_A = 48,                    /* OPID_A  */
  YYSYMBOL_OPID_E = 49,                    /* OPID_E  */
  YYSYMBOL_LATE = 50,                      /* "LATE"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_STRING_LIT = 53,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 54,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 55,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 56,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 57,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 58,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 59,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 60,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 61,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 62,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 63,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 64,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 65,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 66,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 67,                  /* "#if"  */
  YYSYMBOL_PP_NL = 68,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 69,                /* "require"  */
  YYSYMBOL_70_operator_id_ = 70,           /* "@<operator id>"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "&<operator id>"  */
  YYSYMBOL_ID = 72,                        /* "<identifier>"  */
  YYSYMBOL_PLUS = 73,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 74,                  /* "++"  */
  YYSYMBOL_MINUS = 75,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 76,                /* "--"  */
  YYSYMBOL_TIMES = 77,                     /* "*"  */
  YYSYMBOL_DIVIDE = 78,                    /* "/"  */
  YYSYMBOL_PERCENT = 79,                   /* "%"  */
  YYSYMBOL_DOLLAR = 80,                    /* "$"  */
  YYSYMBOL_QUESTION = 81,                  /* "?"  */
  YYSYMBOL_OPTIONS = 82,                   /* OPTIONS  */
  YYSYMBOL_COLON = 83,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 84,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 85,             /* "?:"  */
  YYSYMBOL_NEW = 86,                       /* "new"  */
  YYSYMBOL_SPORK = 87,                     /* "spork"  */
  YYSYMBOL_FORK = 88,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 89,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 90,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 91,                    /* ">>>"  */
  YYSYMBOL_AND = 92,                       /* "&&"  */
  YYSYMBOL_EQ = 93,                        /* "=="  */
  YYSYMBOL_GE = 94,                        /* ">="  */
  YYSYMBOL_GT = 95,                        /* ">"  */
  YYSYMBOL_LE = 96,                        /* "<="  */
  YYSYMBOL_LT = 97,                        /* "<"  */
  YYSYMBOL_NEQ = 98,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 99,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 100,              /* ">>"  */
  YYSYMBOL_S_AND = 101,                    /* "&"  */
  YYSYMBOL_S_OR = 102,                     /* "|"  */
  YYSYMBOL_S_XOR = 103,                    /* "^"  */
  YYSYMBOL_OR = 104,                       /* "||"  */
  YYSYMBOL_TMPL = 105,                     /* ":["  */
  YYSYMBOL_TILDA = 106,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 107,              /* "!"  */
  YYSYMBOL_DYNOP = 108,                    /* "<dynamic_operator>"  */
  YYSYMBOL_RANGE_EMPTY = 109,              /* RANGE_EMPTY  */
  YYSYMBOL_UMINUS = 110,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 111,                   /* UTIMES  */
  YYSYMBOL_112_ = 112,                     /* "="  */
  YYSYMBOL_STMT_ASSOC = 113,               /* STMT_ASSOC  */
  YYSYMBOL_STMT_NOASSOC = 114,             /* STMT_NOASSOC  */
  YYSYMBOL_YYACCEPT = 115,                 /* $accept  */
  YYSYMBOL_prg = 116,                      /* prg  */
  YYSYMBOL_ast = 117,                      /* ast  */
  YYSYMBOL_section = 118,                  /* section  */
  YYSYMBOL_class_type = 119,               /* class_type  */
  YYSYMBOL_class_def = 120,                /* class_def  */
  YYSYMBOL_class_ext = 121,                /* class_ext  */
  YYSYMBOL_class_body = 122,               /* class_body  */
  YYSYMBOL_id_list = 123,                  /* id_list  */
  YYSYMBOL_stmt_list = 124,                /* stmt_list  */
  YYSYMBOL_fptr_base = 125,                /* fptr_base  */
  YYSYMBOL_func_base = 126,                /* func_base  */
  YYSYMBOL_fptr_def = 127,                 /* fptr_def  */
  YYSYMBOL_type_def = 128,                 /* type_def  */
  YYSYMBOL_type_decl_array = 129,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 130,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 131,          /* type_decl_empty  */
  YYSYMBOL_arg = 132,                      /* arg  */
  YYSYMBOL_arg_list = 133,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 134,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 135,                /* fptr_list  */
  YYSYMBOL_code_stmt = 136,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 137,                  /* stmt_pp  */
  YYSYMBOL_stmt = 138,                     /* stmt  */
  YYSYMBOL_opt_id = 139,                   /* opt_id  */
  YYSYMBOL_enum_def = 140,                 /* enum_def  */
  YYSYMBOL_when_exp = 141,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 142,          /* match_case_stmt  */
  YYSYMBOL_match_list = 143,               /* match_list  */
  YYSYMBOL_where_stmt = 144,               /* where_stmt  */
  YYSYMBOL_match_stmt = 145,               /* match_stmt  */
  YYSYMBOL_flow = 146,                     /* flow  */
  YYSYMBOL_loop_stmt = 147,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 148,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 149,           /* selection_stmt  */
  YYSYMBOL_breaks = 150,                   /* breaks  */
  YYSYMBOL_jump_stmt = 151,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 152,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 153,                 /* exp_stmt  */
  YYSYMBOL_exp = 154,                      /* exp  */
  YYSYMBOL_binary_exp = 155,               /* binary_exp  */
  YYSYMBOL_call_template = 156,            /* call_template  */
  YYSYMBOL_op = 157,                       /* op  */
  YYSYMBOL_array_exp = 158,                /* array_exp  */
  YYSYMBOL_array_empty = 159,              /* array_empty  */
  YYSYMBOL_range = 160,                    /* range  */
  YYSYMBOL_array = 161,                    /* array  */
  YYSYMBOL_decl_exp = 162,                 /* decl_exp  */
  YYSYMBOL_func_args = 163,                /* func_args  */
  YYSYMBOL_fptr_args = 164,                /* fptr_args  */
  YYSYMBOL_arg_type = 165,                 /* arg_type  */
  YYSYMBOL_decl_template = 166,            /* decl_template  */
  YYSYMBOL_global = 167,                   /* global  */
  YYSYMBOL_storage_flag = 168,             /* storage_flag  */
  YYSYMBOL_access_flag = 169,              /* access_flag  */
  YYSYMBOL_flag = 170,                     /* flag  */
  YYSYMBOL_final = 171,                    /* final  */
  YYSYMBOL_modifier = 172,                 /* modifier  */
  YYSYMBOL_func_def_base = 173,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 174,            /* abstract_fdef  */
  YYSYMBOL_op_op = 175,                    /* op_op  */
  YYSYMBOL_op_base = 176,                  /* op_base  */
  YYSYMBOL_operator = 177,                 /* operator  */
  YYSYMBOL_op_def = 178,                   /* op_def  */
  YYSYMBOL_func_def = 179,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 180,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 181,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 182,         /* type_decl_noflag  */
  YYSYMBOL_option = 183,                   /* option  */
  YYSYMBOL_type_decl_opt = 184,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 185,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 186,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 187,          /* type_decl_flag2  */
  YYSYMBOL_union_list = 188,               /* union_list  */
  YYSYMBOL_union_def = 189,                /* union_def  */
  YYSYMBOL_var_decl_list = 190,            /* var_decl_list  */
  YYSYMBOL_var_decl = 191,                 /* var_decl  */
  YYSYMBOL_arg_decl = 192,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 193,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 194,                    /* eq_op  */
  YYSYMBOL_rel_op = 195,                   /* rel_op  */
  YYSYMBOL_shift_op = 196,                 /* shift_op  */
  YYSYMBOL_add_op = 197,                   /* add_op  */
  YYSYMBOL_mul_op = 198,                   /* mul_op  */
  YYSYMBOL_opt_exp = 199,                  /* opt_exp  */
  YYSYMBOL_con_exp = 200,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 201,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 202,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 203,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 204,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 205,                  /* and_exp  */
  YYSYMBOL_eq_exp = 206,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 207,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 208,                /* shift_exp  */
  YYSYMBOL_add_exp = 209,                  /* add_exp  */
  YYSYMBOL_mul_exp = 210,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 211,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 212,                 /* cast_exp  */
  YYSYMBOL_unary_op = 213,                 /* unary_op  */
  YYSYMBOL_unary_exp = 214,                /* unary_exp  */
  YYSYMBOL_lambda_list = 215,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 216,               /* lambda_arg  */
  YYSYMBOL_type_list = 217,                /* type_list  */
  YYSYMBOL_call_paren = 218,               /* call_paren  */
  YYSYMBOL_post_op = 219,                  /* post_op  */
  YYSYMBOL_dot_exp = 220,                  /* dot_exp  */
  YYSYMBOL_post_exp = 221,                 /* post_exp  */
  YYSYMBOL_interp_exp = 222,               /* interp_exp  */
  YYSYMBOL_interp = 223,                   /* interp  */
  YYSYMBOL_typeof_exp = 224,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 225                  /* prim_exp  */
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
#define YYFINAL  171
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1646

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   369


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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   151,   151,   152,   155,   156,   160,   161,   162,   163,
     164,   165,   166,   169,   169,   171,   182,   182,   184,   184,
     186,   186,   188,   189,   191,   194,   197,   203,   210,   210,
     212,   216,   221,   222,   224,   225,   234,   235,   235,   242,
     243,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   261,   262,   263,   264,   265,   266,   267,   268,
     271,   271,   274,   277,   277,   280,   288,   289,   291,   291,
     293,   301,   302,   305,   307,   309,   311,   313,   315,   319,
     322,   324,   328,   328,   330,   331,   332,   333,   336,   336,
     339,   340,   344,   345,   348,   349,   350,   351,   354,   354,
     356,   356,   356,   356,   359,   360,   361,   365,   366,   367,
     371,   372,   373,   376,   376,   378,   379,   381,   381,   382,
     382,   383,   383,   385,   385,   387,   389,   389,   391,   392,
     395,   396,   397,   398,   401,   401,   403,   403,   406,   413,
     422,   422,   422,   422,   422,   424,   426,   428,   433,   439,
     439,   440,   443,   443,   443,   446,   450,   451,   455,   456,
     459,   459,   459,   460,   461,   461,   464,   465,   467,   467,
     469,   470,   473,   483,   484,   487,   488,   490,   491,   492,
     493,   493,   495,   495,   496,   496,   496,   496,   497,   497,
     498,   498,   499,   499,   499,   501,   501,   502,   503,   505,
     508,   508,   509,   509,   510,   510,   511,   511,   512,   512,
     513,   513,   514,   514,   515,   515,   516,   516,   517,   517,
     518,   518,   520,   520,   523,   523,   523,   524,   524,   524,
     524,   527,   528,   529,   530,   531,   532,   533,   536,   537,
     538,   538,   541,   542,   546,   546,   548,   548,   550,   559,
     560,   562,   564,   567,   569,   571,   575,   576,   577,   579,
     580,   591,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606
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
  "\"repeat\"", "\"for\"", "\"foreach\"", "\"match\"", "\"case\"",
  "\"when\"", "\"where\"", "\"enum\"", "\"return\"", "\"break\"",
  "\"continue\"", "\"class\"", "\"struct\"", "\"static\"", "\"global\"",
  "\"private\"", "\"protect\"", "\"abstract\"", "\"final\"", "\"extends\"",
  "\".\"", "\"operator\"", "\"typedef\"", "\"funcdef\"", "NOELSE",
  "\"union\"", "\"const\"", "\"...\"", "\"varloop\"", "\"\\\\\"", "OPID_A",
  "OPID_E", "\"LATE\"", "\"<integer>\"", "FLOATT", "\"<litteral string>\"",
  "\"<litteral char>\"", "\"`\"", "\"<interp string>\"", "INTERP_EXP",
  "\"<interp string>`\"", "\"<comment>\"", "\"#include\"", "\"#define\"",
  "\"#pragma\"", "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"",
  "\"#if\"", "\"\\n\"", "\"require\"", "\"@<operator id>\"",
  "\"&<operator id>\"", "\"<identifier>\"", "\"+\"", "\"++\"", "\"-\"",
  "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "OPTIONS",
  "\":\"", "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"",
  "\"typeof\"", "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"",
  "\">\"", "\"<=\"", "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"",
  "\"|\"", "\"^\"", "\"||\"", "\":[\"", "\"~\"", "\"!\"",
  "\"<dynamic_operator>\"", "RANGE_EMPTY", "UMINUS", "UTIMES", "\"=\"",
  "STMT_ASSOC", "STMT_NOASSOC", "$accept", "prg", "ast", "section",
  "class_type", "class_def", "class_ext", "class_body", "id_list",
  "stmt_list", "fptr_base", "func_base", "fptr_def", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "opt_id",
  "enum_def", "when_exp", "match_case_stmt", "match_list", "where_stmt",
  "match_stmt", "flow", "loop_stmt", "varloop_stmt", "selection_stmt",
  "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp", "binary_exp",
  "call_template", "op", "array_exp", "array_empty", "range", "array",
  "decl_exp", "func_args", "fptr_args", "arg_type", "decl_template",
  "global", "storage_flag", "access_flag", "flag", "final", "modifier",
  "func_def_base", "abstract_fdef", "op_op", "op_base", "operator",
  "op_def", "func_def", "type_decl_tmpl", "type_decl_next",
  "type_decl_noflag", "option", "type_decl_opt", "type_decl",
  "type_decl_flag", "type_decl_flag2", "union_list", "union_def",
  "var_decl_list", "var_decl", "arg_decl", "fptr_arg_decl", "eq_op",
  "rel_op", "shift_op", "add_op", "mul_op", "opt_exp", "con_exp",
  "log_or_exp", "log_and_exp", "inc_or_exp", "exc_or_exp", "and_exp",
  "eq_exp", "rel_exp", "shift_exp", "add_exp", "mul_exp", "dur_exp",
  "cast_exp", "unary_op", "unary_exp", "lambda_list", "lambda_arg",
  "type_list", "call_paren", "post_op", "dot_exp", "post_exp",
  "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
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
     365,   366,   367,   368,   369
};
#endif

#define YYPACT_NINF (-323)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     428,    30,   836,   894,   533,    83,  -323,    50,  -323,   629,
    -323,    60,    72,    80,  1416,    83,   717,  -323,  -323,  -323,
    -323,    37,    83,    83,    83,  -323,  1416,     2,  -323,  -323,
    -323,  -323,  -323,   952,  -323,  -323,  -323,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,  -323,
       0,     0,    82,    82,    88,  1416,  -323,  -323,   107,  -323,
     428,    83,  -323,  -323,  -323,  -323,  -323,  -323,  1512,  -323,
    -323,   118,  -323,  -323,  -323,    24,  -323,  -323,  -323,   131,
      20,  -323,   133,  -323,  -323,  -323,  -323,  -323,  1539,  -323,
    -323,  -323,    83,  -323,  -323,   -33,    57,    40,    51,    54,
     -62,    35,   -39,   -24,    69,    73,    76,   215,  -323,    82,
    -323,  -323,    32,   104,  -323,  -323,  -323,  -323,   154,   155,
    -323,  1416,    26,  -323,   152,  -323,  -323,  -323,  -323,   158,
    -323,  -323,    56,    64,  1416,    63,  1416,   775,    94,   160,
      95,  -323,   167,  -323,     0,   166,     0,   101,    10,     2,
    -323,   952,  -323,   122,  -323,    75,  -323,  -323,   143,  -323,
      22,  -323,   179,   -13,  -323,  -323,  -323,  -323,  -323,  1416,
      96,  -323,  -323,    91,  -323,  1416,  -323,   186,  -323,  1416,
    1416,  1416,  1416,  1010,  -323,  -323,  -323,   738,    82,     0,
       0,  1416,   215,   215,   215,   215,   215,   215,  -323,  -323,
     215,  -323,  -323,  -323,  -323,   215,  -323,  -323,   215,  -323,
    -323,   215,  -323,  -323,  -323,   215,   215,     0,  -323,  -323,
    1068,   124,  -323,     0,   189,  -323,  -323,  -323,   952,   215,
    -323,   191,   190,  1126,  -323,     0,    41,  -323,     0,  -323,
       0,   194,  1416,   195,   775,   119,   181,  -323,   197,  -323,
     132,     0,    41,   136,   106,  -323,  -323,  -323,   952,  -323,
     137,  -323,  -323,  -323,  1184,  -323,  -323,   208,  -323,  -323,
    -323,   144,   211,  -323,  -323,  -323,  -323,  -323,  -323,   213,
     158,  -323,  -323,  -323,  -323,  -323,   218,  -323,  -323,  -323,
    -323,   219,  -323,   220,   156,  -323,   146,  -323,    57,    40,
      51,    54,   -62,    35,   -39,   -24,    69,    73,    76,  -323,
    -323,   227,   226,  1242,  -323,  -323,  -323,  -323,  1300,  -323,
    -323,   228,  -323,   233,   168,  -323,   232,    82,   170,   171,
     629,   236,   629,  1358,  1416,  1416,   181,   234,   173,   106,
     243,  -323,   168,   246,   106,   173,   241,  -323,  -323,  -323,
     106,   629,   245,     0,     0,     0,   179,  -323,   248,   215,
       0,  -323,  -323,   247,  -323,  -323,     0,   179,   172,  -323,
    -323,   106,   106,   240,  -323,  -323,   629,   250,    14,   235,
    -323,   237,   255,   254,   257,     0,  -323,  -323,  -323,  -323,
     263,     0,   238,  -323,  -323,   261,   266,   267,  -323,   156,
    -323,  -323,  -323,  -323,  -323,   133,  1416,   166,  -323,   629,
    -323,   629,   629,  1416,   193,   629,  -323,   173,  -323,  -323,
    -323,  -323,   202,   268,     0,   270,     0,    82,  -323,  -323,
     -26,    41,  -323,  -323,  -323,  -323,   629,  -323,  -323,   274,
    -323,  -323,   428,   275,  -323,   277,  -323,     0,  -323,   272,
    -323,  -323,  -323,  -323
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    89,     0,     0,     0,   133,   168,     0,    71,     0,
      72,     0,     0,     0,     0,   133,     0,    82,    83,    13,
      14,   149,   133,   133,   133,   167,     0,   241,   166,   263,
     264,   266,   267,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   262,   246,   224,   247,   225,
       0,     0,   228,   229,     0,     0,   230,   227,     0,     2,
       4,   133,     8,     6,    11,    12,    55,    58,    22,     9,
      56,     0,    53,    59,    54,     0,    57,    91,    52,     0,
      92,   113,   114,   269,   268,    94,   152,   153,     0,   154,
       7,   169,   133,    10,   115,   197,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,     0,   222,     0,
     226,   255,   231,   265,   274,   249,    88,   273,     0,     0,
     107,     0,     0,    39,     0,   126,   125,   128,   129,     0,
     127,   131,   130,   135,     0,     0,     0,     0,     0,     0,
      61,    85,     0,   150,     0,     0,     0,     0,     0,   238,
     240,     0,   256,     0,   259,    99,    31,   237,   156,   158,
     162,   164,    29,     0,   159,    30,   234,   235,   236,     0,
       0,     1,     5,   135,    23,     0,    87,     0,    90,     0,
       0,     0,     0,     0,   109,   228,   229,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,     0,   182,   183,
       0,   187,   185,   186,   184,     0,   188,   189,     0,   190,
     191,     0,   192,   193,   194,     0,     0,     0,   232,   272,
       0,     0,   254,     0,     0,   250,   251,   253,     0,     0,
     271,     0,   104,     0,    40,   118,     0,   132,     0,   134,
       0,     0,     0,     0,     0,     0,     0,    60,     0,    84,
       0,   120,     0,     0,   124,    79,   239,   257,     0,   155,
       0,   160,   161,   163,     0,    28,   165,     0,   270,   136,
     137,     0,     0,    86,    93,    95,    97,    96,   108,     0,
       0,   103,   100,   101,   102,   140,     0,   142,   141,   144,
     143,     0,   151,     0,     0,   195,     0,   199,   201,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   221,   223,
     248,   242,     0,     0,   252,   260,   233,   112,     0,   105,
     111,     0,    34,   117,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,     0,   124,
      37,   119,   181,     0,   124,     0,     0,   258,   157,   261,
     124,     0,     0,     0,     0,     0,   175,   116,   174,     0,
       0,    98,   245,     0,   106,   110,     0,   177,    33,   121,
     138,   124,   124,    80,    74,    78,     0,     0,     0,    64,
      67,    69,    20,     0,     0,     0,   180,    36,    26,    24,
       0,     0,    17,    73,   148,     0,     0,     0,   176,     0,
     198,   243,   244,    35,   179,   178,     0,     0,    25,     0,
      75,     0,     0,     0,     0,     0,    70,     0,    62,    27,
      38,   123,     0,     0,     0,     0,     0,     0,   147,   173,
      32,     0,    81,    76,    77,    63,     0,    68,    21,     0,
     172,    16,    19,     0,   146,     0,    65,   170,    18,     0,
     145,   139,   171,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -323,  -323,   -54,  -323,  -323,  -323,  -323,  -323,  -322,    -4,
    -323,  -323,  -323,  -323,   -47,  -141,   -45,  -313,  -323,  -323,
    -100,   -43,  -323,    -6,  -323,  -323,  -323,  -323,   -50,  -323,
    -323,   153,  -323,  -323,  -323,  -323,  -323,   293,  -119,    -1,
     -19,   141,  -323,   -74,   -70,   187,  -151,   -29,    18,  -107,
    -240,  -260,   285,   175,  -323,     6,   135,  -323,  -323,  -323,
    -323,  -323,  -323,  -323,  -323,  -323,    49,  -323,  -323,   147,
    -178,    -5,  -323,  -136,  -323,   -86,  -323,   -28,  -323,  -323,
     129,   138,   140,   149,  -323,  -176,  -323,   125,   126,   128,
     123,   142,   151,   139,   130,   145,   127,   117,   249,   -93,
     198,  -323,   -20,  -323,   -77,  -323,  -323,  -134,  -323,   -25,
    -323
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,    59,    60,    61,    62,   425,   449,   383,    63,
     145,   129,    64,    65,   156,   166,   311,   322,   323,   340,
     341,    66,    67,    68,   248,    69,   414,   336,   337,   416,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   224,   285,    81,    82,    83,    84,    85,   236,   252,
     327,   346,   130,   131,   132,   133,   240,   271,    86,    87,
     286,   188,    88,    89,    90,   158,   159,   160,   263,   161,
     162,    91,    92,   423,    93,   357,   358,   368,   387,   200,
     205,   208,   211,   215,   296,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     150,   109,   312,   314,   110,   111,   112,   154,   113,   114,
     115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     124,   119,   122,   135,   165,   157,   172,   148,   184,   167,
     168,   265,   343,   139,   218,   142,   297,   257,   244,     4,
     412,   140,   180,   390,   179,   164,   164,   176,   144,   146,
     147,   198,   153,  -100,   232,   227,   199,   -99,   225,   220,
     395,   396,   397,   187,    25,   163,   163,   325,   191,   209,
      28,   210,   192,   403,   170,   134,   181,   324,   180,   155,
     206,   207,   180,   164,   174,   136,   219,   173,   180,   126,
     221,   193,   155,   342,   149,   177,    54,   137,     8,   384,
      10,   222,   182,   163,   389,   138,   326,   125,   126,    54,
     392,     4,   181,   169,   315,   438,   181,   250,   190,   238,
     239,   253,   181,   261,   262,   255,    46,   171,    48,   233,
     291,   407,   408,   443,   125,   126,   127,   128,   182,   164,
     231,   164,   182,   175,   347,   333,   269,   239,   182,   201,
     202,   203,   204,   241,   178,   243,   316,   223,   164,   163,
     183,   163,   195,   294,   293,   292,   212,   213,   214,   194,
     153,   275,   276,   277,   196,   197,   217,   216,   319,   228,
     229,   230,   234,   235,   164,   164,   245,   247,   267,   246,
     249,   251,   309,   254,   272,   324,   324,   324,   274,   258,
     223,   260,   279,   400,   163,   163,   264,   268,   324,   273,
     295,   445,   164,   328,   313,   329,   310,   318,   164,   317,
     330,   332,   334,   335,   339,   398,   338,   342,   344,   155,
     164,   345,   163,   164,   349,   164,   350,   351,   163,   122,
       2,   232,     3,   353,   354,   355,   164,   153,   356,   359,
     163,   360,   321,   163,   361,   163,   365,   366,   369,   374,
     367,   331,   371,   372,   381,   382,   163,   385,   324,   388,
     391,   394,   399,   402,   409,   406,   411,   153,   413,   417,
     419,   415,    27,   279,   418,   426,    29,    30,    31,    32,
      33,   421,   427,   428,   439,   424,   436,   447,   440,   442,
     451,   450,   453,   441,   370,   420,   380,    45,   242,    46,
      47,    48,    49,   404,   116,    50,   259,   405,   352,   226,
     431,    51,    52,    53,    54,    55,   143,   237,   270,   348,
     266,   452,   363,   429,   386,   378,   287,   279,   298,   301,
     299,    56,    57,   300,   373,   288,   375,   289,   164,   164,
     164,   184,   377,   308,   379,   164,   290,   189,   305,   302,
     401,   164,   307,     0,   304,   393,   422,   256,   163,   163,
     163,   303,     0,     0,     0,   163,   306,     0,     0,     0,
     164,   163,     0,     0,     0,     0,   164,     0,     0,     0,
     410,     0,     0,     0,     0,     0,     0,   165,     0,     0,
     163,     0,     0,     0,   444,     0,   163,   430,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
       0,   164,   422,   432,     0,   433,   434,     0,     0,   437,
       0,     0,   435,     0,     0,     0,     0,     0,     0,   163,
       0,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   446,     2,     0,     3,     0,     4,     0,     5,
       6,     7,   163,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,    23,
       0,    24,    25,     0,    26,    27,     0,     0,    28,    29,
      30,    31,    32,    33,     0,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     0,     0,
      45,     0,    46,    47,    48,    49,     0,     0,    50,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     1,     0,     2,     0,
       3,     0,     4,   123,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,     0,     0,    28,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,    45,     0,    46,    47,    48,
      49,     0,     0,    50,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,     4,    56,
      57,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,     0,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,    27,     0,     0,    28,
      29,    30,    31,    32,    33,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,    45,     0,    46,    47,    48,    49,     0,     0,    50,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
     141,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,    27,     0,     0,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     1,     0,
       2,     0,     3,     0,     0,     0,   280,     6,     0,    45,
       0,    46,    47,    48,    49,     0,     0,    50,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
       0,   209,    46,   210,    48,   212,   213,   214,     0,    25,
     281,     0,    27,    56,    57,    28,    29,    30,    31,    32,
      33,   282,   201,   202,   203,   204,   283,   206,   207,     0,
       0,     2,   117,     3,     0,     0,   284,    45,     6,    46,
      47,    48,    49,     0,     0,    50,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    56,    57,    27,     0,   118,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   120,     0,     0,     0,     6,     0,    45,     0,
      46,    47,    48,    49,     0,     0,    50,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    27,    56,    57,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,    45,     0,    46,    47,
      48,    49,     0,     0,    50,     0,     0,   121,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    27,
      56,    57,    28,    29,    30,    31,    32,    33,   151,     0,
     152,     0,     0,     0,     0,     2,     0,     3,   278,     0,
       0,     0,     6,     0,    45,     0,    46,    47,    48,    49,
       0,     0,    50,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    27,    56,    57,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       6,     0,    45,     0,    46,    47,    48,    49,     0,     0,
      50,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    27,    56,    57,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,   320,     0,     0,     0,     6,     0,
      45,     0,    46,    47,    48,    49,     0,     0,    50,     0,
       0,   121,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,    27,    56,    57,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   120,     0,     0,     0,     6,     0,    45,     0,
      46,    47,    48,    49,     0,     0,    50,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    27,    56,    57,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     2,   362,     3,
       0,     0,     0,     0,     6,     0,    45,     0,    46,    47,
      48,    49,     0,     0,    50,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    27,
      56,    57,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   364,     0,
       0,     0,     6,     0,    45,     0,    46,    47,    48,    49,
       0,     0,    50,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    27,    56,    57,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     2,   376,     3,     0,     0,     0,     0,
       6,     0,    45,     0,    46,    47,    48,    49,     0,     0,
      50,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    27,    56,    57,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
      45,     0,    46,    47,    48,    49,     0,     0,    50,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,    27,    56,    57,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
      46,    47,    48,    49,     0,     0,    50,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     4,    56,    57,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
       0,     0,    28,    29,    30,    31,    32,    33,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,    25,    45,     0,    46,     0,    48,    28,
       0,     0,    50,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57
};

static const yytype_int16 yycheck[] =
{
       4,     2,     3,     9,    51,    50,    60,    26,    82,    52,
      53,   162,   252,    14,   107,    16,   192,   151,   137,     9,
       6,    15,    48,   345,     4,    50,    51,     3,    22,    23,
      24,    93,    33,     3,     8,   112,    98,     5,   112,     7,
     353,   354,   355,    88,    44,    50,    51,     6,    81,    73,
      50,    75,    85,   366,    55,     5,    82,   235,    48,    72,
      99,   100,    48,    88,    68,     5,   109,    61,    48,    32,
      38,   104,    72,   251,    72,    51,    89,     5,    15,   339,
      17,    49,   108,    88,   344,     5,    45,    31,    32,    89,
     350,     9,    82,     5,   228,   417,    82,   144,    92,    35,
      36,   146,    82,    81,    82,   148,    74,     0,    76,    83,
     187,   371,   372,   426,    31,    32,    33,    34,   108,   144,
     121,   146,   108,     5,   258,   244,    35,    36,   108,    94,
      95,    96,    97,   134,     3,   136,   229,   105,   163,   144,
       7,   146,   102,   190,   189,   188,    77,    78,    79,    92,
     151,   180,   181,   182,   103,   101,    80,    84,   232,    55,
       6,     6,    10,     5,   189,   190,    72,    72,   169,     9,
       3,     5,   217,    72,   175,   353,   354,   355,   179,    57,
     105,    38,   183,   359,   189,   190,     7,    91,   366,     3,
     191,   431,   217,   238,     5,   240,    72,     7,   223,     8,
       6,     6,    83,    22,    72,   356,     9,   385,    72,    72,
     235,   105,   217,   238,     6,   240,    72,     6,   223,   220,
       5,     8,     7,     5,     5,     5,   251,   228,    72,    83,
     235,     4,   233,   238,     8,   240,     8,     4,     6,     3,
      72,   242,    72,    72,    10,    72,   251,     4,   426,     3,
       9,     6,     4,     6,    14,    83,     6,   258,    23,     4,
       3,    24,    47,   264,    10,     4,    51,    52,    53,    54,
      55,     8,     6,     6,    72,    37,    83,     3,    10,     9,
       3,     6,    10,   424,   327,   385,   336,    72,   135,    74,
      75,    76,    77,   367,     1,    80,   155,   367,   280,   112,
     407,    86,    87,    88,    89,    90,    21,   132,   173,   260,
     163,   447,   313,   399,   342,   334,   187,   318,   193,   196,
     194,   106,   107,   195,   330,   187,   332,   187,   353,   354,
     355,   405,   333,   216,   335,   360,   187,    88,   208,   197,
     360,   366,   215,    -1,   205,   351,   391,   149,   353,   354,
     355,   200,    -1,    -1,    -1,   360,   211,    -1,    -1,    -1,
     385,   366,    -1,    -1,    -1,    -1,   391,    -1,    -1,    -1,
     376,    -1,    -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,
     385,    -1,    -1,    -1,   427,    -1,   391,   406,   442,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,
      -1,   426,   447,   409,    -1,   411,   412,    -1,    -1,   415,
      -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,   424,
      -1,   426,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,   436,     5,    -1,     7,    -1,     9,    -1,    11,
      12,    13,   447,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107,     3,    -1,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,   106,
     107,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    48,    12,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    -1,    44,
      82,    -1,    47,   106,   107,    50,    51,    52,    53,    54,
      55,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,     5,     6,     7,    -1,    -1,   108,    72,    12,    74,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,   106,   107,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,   106,   107,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
     106,   107,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,   106,   107,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,   106,   107,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,   106,   107,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,   106,   107,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
     106,   107,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,   106,   107,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,   106,   107,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,   106,   107,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,     9,   106,   107,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    44,    72,    -1,    74,    -1,    76,    50,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    25,    26,    27,    28,    29,
      30,    39,    40,    41,    43,    44,    46,    47,    50,    51,
      52,    53,    54,    55,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    72,    74,    75,    76,    77,
      80,    86,    87,    88,    89,    90,   106,   107,   116,   117,
     118,   119,   120,   124,   127,   128,   136,   137,   138,   140,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   158,   159,   160,   161,   162,   173,   174,   177,   178,
     179,   186,   187,   189,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   216,
     219,   220,   221,   223,   224,   225,   152,     6,    49,   154,
       8,    83,   154,    10,   124,    31,    32,    33,    34,   126,
     167,   168,   169,   170,     5,   138,     5,     5,     5,   154,
     170,     3,   154,   167,   170,   125,   170,   170,   155,    72,
     215,    56,    58,   154,   222,    72,   129,   131,   180,   181,
     182,   184,   185,   186,   224,   129,   130,   136,   136,     5,
     154,     0,   117,   170,   124,     5,     3,    51,     3,     4,
      48,    82,   108,     7,   158,    87,    88,   131,   176,   213,
     170,    81,    85,   104,    92,   102,   103,   101,    93,    98,
     194,    94,    95,    96,    97,   195,    99,   100,   196,    73,
      75,   197,    77,    78,    79,   198,    84,    80,   214,   136,
       7,    38,    49,   105,   156,   158,   160,   219,    55,     6,
       6,   154,     8,    83,    10,     5,   163,   168,    35,    36,
     171,   154,   146,   154,   153,    72,     9,    72,   139,     3,
     129,     5,   164,   131,    72,   136,   215,   222,    57,   156,
      38,    81,    82,   183,     7,   161,   184,   154,    91,    35,
     171,   172,   154,     3,   154,   162,   162,   162,     8,   154,
      48,    82,    93,    98,   108,   157,   175,   195,   196,   197,
     198,   219,   136,   131,   129,   154,   199,   200,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   131,
      72,   131,   217,     5,   218,   222,   214,     8,     7,   158,
       8,   154,   132,   133,   185,     6,    45,   165,   131,   131,
       6,   154,     6,   153,    83,    22,   142,   143,     9,    72,
     134,   135,   185,   165,    72,   105,   166,   222,   181,     6,
      72,     6,   163,     5,     5,     5,    72,   190,   191,    83,
       4,     8,     6,   154,     8,     8,     4,    72,   192,     6,
     136,    72,    72,   138,     3,   138,     6,   154,   155,   154,
     143,    10,    72,   123,   166,     4,   192,   193,     3,   166,
     123,     9,   166,   138,     6,   132,   132,   132,   161,     4,
     200,   217,     6,   132,   158,   159,    83,   166,   166,    14,
     138,     6,     6,    23,   141,    24,   144,     4,    10,     3,
     135,     8,   131,   188,    37,   121,     4,     6,     6,   190,
     155,   164,   138,   138,   138,   154,    83,   138,   123,    72,
      10,   130,     9,   132,   136,   165,   124,     3,   117,   122,
       6,     3,   188,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   126,   127,   128,   129,   129,
     130,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     139,   139,   140,   141,   141,   142,   143,   143,   144,   144,
     145,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   155,   156,   156,
     157,   157,   157,   157,   158,   158,   158,   159,   159,   159,
     160,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   168,   168,   169,   169,
     170,   170,   170,   170,   171,   171,   172,   172,   173,   174,
     175,   175,   175,   175,   175,   176,   176,   176,   176,   177,
     177,   178,   179,   179,   179,   180,   181,   181,   182,   182,
     183,   183,   183,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   190,   190,   191,   191,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   213,   213,   213,   213,   213,
     213,   214,   214,   214,   214,   214,   214,   214,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   219,   220,   221,
     221,   221,   221,   221,   221,   221,   222,   222,   222,   223,
     223,   224,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     9,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     5,     5,     6,     2,     1,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     2,     0,     5,     1,     2,     2,     0,
       6,     1,     1,     5,     5,     6,     7,     7,     5,     3,
       5,     7,     1,     1,     3,     2,     3,     2,     2,     1,
       2,     1,     1,     3,     1,     3,     3,     3,     3,     0,
       1,     1,     1,     1,     3,     4,     5,     2,     3,     2,
       5,     4,     4,     1,     1,     1,     4,     2,     1,     2,
       1,     2,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     1,     1,     5,     9,
       1,     1,     1,     1,     1,     7,     6,     5,     4,     1,
       2,     3,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     0,     2,     1,     2,     1,     1,     1,     1,
       3,     4,     7,     3,     1,     1,     2,     1,     2,     2,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     5,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     2,     2,     2,     2,     1,     2,
       2,     1,     1,     3,     3,     2,     1,     1,     3,     1,
       2,     2,     3,     2,     2,     1,     1,     2,     3,     2,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     1
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
#line 148 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1739 "src/parser.c"
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
#line 151 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2040 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 152 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2046 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 155 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2052 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 156 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2058 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 160 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2064 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 161 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2070 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 162 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2076 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 163 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2082 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 164 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2088 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 165 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2094 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 166 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2100 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 169 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2106 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 169 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2112 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 172 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2126 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 182 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2132 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 182 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2138 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 184 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2144 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 186 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); }
#line 2150 "src/parser.c"
    break;

  case 21: /* id_list: "<identifier>" "," id_list  */
#line 186 "src/gwion.y"
                                                                      { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list)); }
#line 2156 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 188 "src/gwion.y"
                                   { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2162 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 189 "src/gwion.y"
                                  { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2168 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 191 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2175 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 194 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2182 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 197 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2192 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 203 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2203 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 210 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2209 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 212 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2217 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 216 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2225 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 221 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2231 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 222 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2237 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 224 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2243 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 225 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2256 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 234 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2262 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 235 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2268 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_arg "," fptr_list  */
#line 235 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2278 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 242 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2284 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 243 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), GET_LOC(&(yyloc))); }
#line 2290 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 247 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2296 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 248 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2302 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 249 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2308 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 250 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2314 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 251 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2320 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2326 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2332 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2338 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2344 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2350 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 257 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2356 "src/parser.c"
    break;

  case 61: /* opt_id: %empty  */
#line 271 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2362 "src/parser.c"
    break;

  case 62: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 274 "src/gwion.y"
                                           { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2369 "src/parser.c"
    break;

  case 63: /* when_exp: "when" exp  */
#line 277 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2375 "src/parser.c"
    break;

  case 64: /* when_exp: %empty  */
#line 277 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2381 "src/parser.c"
    break;

  case 65: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 280 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2392 "src/parser.c"
    break;

  case 66: /* match_list: match_case_stmt  */
#line 288 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2398 "src/parser.c"
    break;

  case 67: /* match_list: match_case_stmt match_list  */
#line 289 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2404 "src/parser.c"
    break;

  case 68: /* where_stmt: "where" stmt  */
#line 291 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2410 "src/parser.c"
    break;

  case 69: /* where_stmt: %empty  */
#line 291 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2416 "src/parser.c"
    break;

  case 70: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 293 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2427 "src/parser.c"
    break;

  case 71: /* flow: "while"  */
#line 301 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2433 "src/parser.c"
    break;

  case 72: /* flow: "until"  */
#line 302 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2439 "src/parser.c"
    break;

  case 73: /* loop_stmt: flow "(" exp ")" stmt  */
#line 306 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, GET_LOC(&(yyloc))); }
#line 2445 "src/parser.c"
    break;

  case 74: /* loop_stmt: "do" stmt flow exp ";"  */
#line 308 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, GET_LOC(&(yyloc))); }
#line 2451 "src/parser.c"
    break;

  case 75: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2457 "src/parser.c"
    break;

  case 76: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2463 "src/parser.c"
    break;

  case 77: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2469 "src/parser.c"
    break;

  case 78: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2475 "src/parser.c"
    break;

  case 79: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 319 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2481 "src/parser.c"
    break;

  case 80: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 323 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2487 "src/parser.c"
    break;

  case 81: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 325 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2493 "src/parser.c"
    break;

  case 82: /* breaks: "break"  */
#line 328 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2499 "src/parser.c"
    break;

  case 83: /* breaks: "continue"  */
#line 328 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2505 "src/parser.c"
    break;

  case 84: /* jump_stmt: "return" exp ";"  */
#line 330 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2511 "src/parser.c"
    break;

  case 85: /* jump_stmt: "return" ";"  */
#line 331 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, GET_LOC(&(yyloc))); }
#line 2517 "src/parser.c"
    break;

  case 86: /* jump_stmt: breaks "<integer>" ";"  */
#line 332 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2523 "src/parser.c"
    break;

  case 87: /* jump_stmt: breaks ";"  */
#line 333 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2529 "src/parser.c"
    break;

  case 88: /* _exp_stmt: ";" _exp_stmt  */
#line 336 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2535 "src/parser.c"
    break;

  case 89: /* _exp_stmt: ";"  */
#line 336 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2541 "src/parser.c"
    break;

  case 90: /* exp_stmt: exp ";"  */
#line 339 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 2547 "src/parser.c"
    break;

  case 91: /* exp_stmt: _exp_stmt  */
#line 340 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2553 "src/parser.c"
    break;

  case 93: /* exp: binary_exp "," exp  */
#line 345 "src/gwion.y"
                         { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2559 "src/parser.c"
    break;

  case 95: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 349 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2565 "src/parser.c"
    break;

  case 96: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 350 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2571 "src/parser.c"
    break;

  case 97: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 351 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2577 "src/parser.c"
    break;

  case 98: /* call_template: ":[" type_list "]"  */
#line 354 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2583 "src/parser.c"
    break;

  case 99: /* call_template: %empty  */
#line 354 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2589 "src/parser.c"
    break;

  case 104: /* array_exp: "[" exp "]"  */
#line 359 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2595 "src/parser.c"
    break;

  case 105: /* array_exp: "[" exp "]" array_exp  */
#line 360 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2601 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]" "[" "]"  */
#line 361 "src/gwion.y"
                                     { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2607 "src/parser.c"
    break;

  case 107: /* array_empty: "[" "]"  */
#line 365 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2613 "src/parser.c"
    break;

  case 108: /* array_empty: array_empty "[" "]"  */
#line 366 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2619 "src/parser.c"
    break;

  case 109: /* array_empty: array_empty array_exp  */
#line 367 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2625 "src/parser.c"
    break;

  case 110: /* range: "[" exp ":" exp "]"  */
#line 371 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2631 "src/parser.c"
    break;

  case 111: /* range: "[" exp ":" "]"  */
#line 372 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2637 "src/parser.c"
    break;

  case 112: /* range: "[" ":" exp "]"  */
#line 373 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2643 "src/parser.c"
    break;

  case 116: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 379 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), GET_LOC(&(yyloc))); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2649 "src/parser.c"
    break;

  case 117: /* func_args: "(" arg_list  */
#line 381 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2655 "src/parser.c"
    break;

  case 118: /* func_args: "("  */
#line 381 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2661 "src/parser.c"
    break;

  case 119: /* fptr_args: "(" fptr_list  */
#line 382 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2667 "src/parser.c"
    break;

  case 120: /* fptr_args: "("  */
#line 382 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2673 "src/parser.c"
    break;

  case 121: /* arg_type: "..." ")"  */
#line 383 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2679 "src/parser.c"
    break;

  case 122: /* arg_type: ")"  */
#line 383 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2685 "src/parser.c"
    break;

  case 123: /* decl_template: ":[" id_list "]"  */
#line 385 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2691 "src/parser.c"
    break;

  case 124: /* decl_template: %empty  */
#line 385 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2697 "src/parser.c"
    break;

  case 125: /* global: "global"  */
#line 387 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2703 "src/parser.c"
    break;

  case 126: /* storage_flag: "static"  */
#line 389 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2709 "src/parser.c"
    break;

  case 128: /* access_flag: "private"  */
#line 391 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2715 "src/parser.c"
    break;

  case 129: /* access_flag: "protect"  */
#line 392 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2721 "src/parser.c"
    break;

  case 130: /* flag: access_flag  */
#line 395 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2727 "src/parser.c"
    break;

  case 131: /* flag: storage_flag  */
#line 396 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2733 "src/parser.c"
    break;

  case 132: /* flag: access_flag storage_flag  */
#line 397 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2739 "src/parser.c"
    break;

  case 133: /* flag: %empty  */
#line 398 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2745 "src/parser.c"
    break;

  case 134: /* final: "final"  */
#line 401 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2751 "src/parser.c"
    break;

  case 135: /* final: %empty  */
#line 401 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2757 "src/parser.c"
    break;

  case 136: /* modifier: "abstract"  */
#line 403 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2763 "src/parser.c"
    break;

  case 138: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 406 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2773 "src/parser.c"
    break;

  case 139: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 414 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, GET_LOC(&(yyloc)));
    }
#line 2785 "src/parser.c"
    break;

  case 145: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 425 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2791 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 427 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2797 "src/parser.c"
    break;

  case 147: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 429 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2806 "src/parser.c"
    break;

  case 148: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 434 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2815 "src/parser.c"
    break;

  case 149: /* operator: "operator"  */
#line 439 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 2821 "src/parser.c"
    break;

  case 150: /* operator: "operator" global  */
#line 439 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 2827 "src/parser.c"
    break;

  case 151: /* op_def: operator op_base code_stmt  */
#line 441 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc))); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 2833 "src/parser.c"
    break;

  case 154: /* func_def: op_def  */
#line 443 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2839 "src/parser.c"
    break;

  case 155: /* type_decl_tmpl: "<identifier>" call_template  */
#line 446 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2845 "src/parser.c"
    break;

  case 157: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 451 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2851 "src/parser.c"
    break;

  case 158: /* type_decl_noflag: type_decl_next  */
#line 455 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2857 "src/parser.c"
    break;

  case 159: /* type_decl_noflag: typeof_exp  */
#line 456 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2863 "src/parser.c"
    break;

  case 160: /* option: "?"  */
#line 459 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 2869 "src/parser.c"
    break;

  case 161: /* option: OPTIONS  */
#line 459 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 2875 "src/parser.c"
    break;

  case 162: /* option: %empty  */
#line 459 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 2881 "src/parser.c"
    break;

  case 163: /* type_decl_opt: type_decl_noflag option  */
#line 460 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 2887 "src/parser.c"
    break;

  case 165: /* type_decl: type_decl_flag type_decl_opt  */
#line 461 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2893 "src/parser.c"
    break;

  case 166: /* type_decl_flag: "LATE"  */
#line 464 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 2899 "src/parser.c"
    break;

  case 167: /* type_decl_flag: "const"  */
#line 465 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2905 "src/parser.c"
    break;

  case 168: /* type_decl_flag2: "var"  */
#line 467 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2911 "src/parser.c"
    break;

  case 170: /* union_list: type_decl_empty "<identifier>" ";"  */
#line 469 "src/gwion.y"
                                   { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), GET_LOC(&(yyloc))); }
#line 2917 "src/parser.c"
    break;

  case 171: /* union_list: type_decl_empty "<identifier>" ";" union_list  */
#line 470 "src/gwion.y"
                                      { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), GET_LOC(&(yyloc))); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 2923 "src/parser.c"
    break;

  case 172: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 473 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), GET_LOC(&(yyloc)));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 2935 "src/parser.c"
    break;

  case 173: /* var_decl_list: var_decl "," var_decl_list  */
#line 483 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2941 "src/parser.c"
    break;

  case 174: /* var_decl_list: var_decl  */
#line 484 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2947 "src/parser.c"
    break;

  case 175: /* var_decl: "<identifier>"  */
#line 487 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2953 "src/parser.c"
    break;

  case 176: /* var_decl: "<identifier>" array  */
#line 488 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2959 "src/parser.c"
    break;

  case 177: /* arg_decl: "<identifier>"  */
#line 490 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2965 "src/parser.c"
    break;

  case 178: /* arg_decl: "<identifier>" array_empty  */
#line 491 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2971 "src/parser.c"
    break;

  case 179: /* arg_decl: "<identifier>" array_exp  */
#line 492 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2977 "src/parser.c"
    break;

  case 181: /* fptr_arg_decl: %empty  */
#line 493 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 2983 "src/parser.c"
    break;

  case 196: /* opt_exp: %empty  */
#line 501 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 2989 "src/parser.c"
    break;

  case 198: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 504 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2995 "src/parser.c"
    break;

  case 199: /* con_exp: log_or_exp "?:" con_exp  */
#line 506 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3001 "src/parser.c"
    break;

  case 201: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 508 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3007 "src/parser.c"
    break;

  case 203: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 509 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3013 "src/parser.c"
    break;

  case 205: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 510 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3019 "src/parser.c"
    break;

  case 207: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 511 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3025 "src/parser.c"
    break;

  case 209: /* and_exp: and_exp "&" eq_exp  */
#line 512 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3031 "src/parser.c"
    break;

  case 211: /* eq_exp: eq_exp eq_op rel_exp  */
#line 513 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3037 "src/parser.c"
    break;

  case 213: /* rel_exp: rel_exp rel_op shift_exp  */
#line 514 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3043 "src/parser.c"
    break;

  case 215: /* shift_exp: shift_exp shift_op add_exp  */
#line 515 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3049 "src/parser.c"
    break;

  case 217: /* add_exp: add_exp add_op mul_exp  */
#line 516 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3055 "src/parser.c"
    break;

  case 219: /* mul_exp: mul_exp mul_op dur_exp  */
#line 517 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3061 "src/parser.c"
    break;

  case 221: /* dur_exp: dur_exp "::" cast_exp  */
#line 518 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3067 "src/parser.c"
    break;

  case 223: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 521 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), GET_LOC(&(yyloc))); }
#line 3073 "src/parser.c"
    break;

  case 232: /* unary_exp: unary_op unary_exp  */
#line 528 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3079 "src/parser.c"
    break;

  case 233: /* unary_exp: "(" OPID_E ")" unary_exp  */
#line 529 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3085 "src/parser.c"
    break;

  case 234: /* unary_exp: "new" type_decl_exp  */
#line 530 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3091 "src/parser.c"
    break;

  case 235: /* unary_exp: "spork" code_stmt  */
#line 531 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3097 "src/parser.c"
    break;

  case 236: /* unary_exp: "fork" code_stmt  */
#line 532 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3103 "src/parser.c"
    break;

  case 237: /* unary_exp: "$" type_decl_empty  */
#line 533 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), GET_LOC(&(yyloc))); }
#line 3109 "src/parser.c"
    break;

  case 238: /* lambda_list: "<identifier>"  */
#line 536 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3115 "src/parser.c"
    break;

  case 239: /* lambda_list: "<identifier>" lambda_list  */
#line 537 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3121 "src/parser.c"
    break;

  case 240: /* lambda_arg: "\\" lambda_list  */
#line 538 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3127 "src/parser.c"
    break;

  case 241: /* lambda_arg: "\\"  */
#line 538 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3133 "src/parser.c"
    break;

  case 242: /* type_list: type_decl_empty  */
#line 541 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3139 "src/parser.c"
    break;

  case 243: /* type_list: type_decl_empty "," type_list  */
#line 542 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3145 "src/parser.c"
    break;

  case 244: /* call_paren: "(" exp ")"  */
#line 546 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3151 "src/parser.c"
    break;

  case 245: /* call_paren: "(" ")"  */
#line 546 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3157 "src/parser.c"
    break;

  case 248: /* dot_exp: post_exp "." "<identifier>"  */
#line 550 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), GET_LOC(&(yyloc)));
}
#line 3170 "src/parser.c"
    break;

  case 250: /* post_exp: post_exp array_exp  */
#line 561 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3176 "src/parser.c"
    break;

  case 251: /* post_exp: post_exp range  */
#line 563 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3182 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp call_template call_paren  */
#line 565 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), GET_LOC(&(yyloc)));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3189 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp post_op  */
#line 568 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3195 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp OPID_E  */
#line 570 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3201 "src/parser.c"
    break;

  case 255: /* post_exp: dot_exp  */
#line 571 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3207 "src/parser.c"
    break;

  case 256: /* interp_exp: "<interp string>`"  */
#line 575 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3213 "src/parser.c"
    break;

  case 257: /* interp_exp: "<interp string>" interp_exp  */
#line 576 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3219 "src/parser.c"
    break;

  case 258: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 577 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3225 "src/parser.c"
    break;

  case 259: /* interp: "`" interp_exp  */
#line 579 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3231 "src/parser.c"
    break;

  case 260: /* interp: interp "`" interp_exp  */
#line 580 "src/gwion.y"
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
#line 3246 "src/parser.c"
    break;

  case 261: /* typeof_exp: "typeof" "(" exp ")"  */
#line 591 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3252 "src/parser.c"
    break;

  case 262: /* prim_exp: "<identifier>"  */
#line 594 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3258 "src/parser.c"
    break;

  case 263: /* prim_exp: "<integer>"  */
#line 595 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3264 "src/parser.c"
    break;

  case 264: /* prim_exp: FLOATT  */
#line 596 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3270 "src/parser.c"
    break;

  case 265: /* prim_exp: interp  */
#line 597 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3276 "src/parser.c"
    break;

  case 266: /* prim_exp: "<litteral string>"  */
#line 598 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3282 "src/parser.c"
    break;

  case 267: /* prim_exp: "<litteral char>"  */
#line 599 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3288 "src/parser.c"
    break;

  case 268: /* prim_exp: array  */
#line 600 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3294 "src/parser.c"
    break;

  case 269: /* prim_exp: range  */
#line 601 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3300 "src/parser.c"
    break;

  case 270: /* prim_exp: "<<<" exp ">>>"  */
#line 602 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), GET_LOC(&(yyloc))); }
#line 3306 "src/parser.c"
    break;

  case 271: /* prim_exp: "(" exp ")"  */
#line 603 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3312 "src/parser.c"
    break;

  case 272: /* prim_exp: lambda_arg code_stmt  */
#line 604 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 3318 "src/parser.c"
    break;

  case 273: /* prim_exp: "(" ")"  */
#line 605 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3324 "src/parser.c"
    break;

  case 274: /* prim_exp: typeof_exp  */
#line 606 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3330 "src/parser.c"
    break;


#line 3334 "src/parser.c"

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

#line 608 "src/gwion.y"

