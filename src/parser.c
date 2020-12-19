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

#define LIST_FIRST(a)  map_set(&arg->map, (m_uint)a, (m_uint)a);

#define LIST_NEXT(a, b, t, c)                      \
  a = b;                                           \
  const t next = c;                                \
  const t list = (t)map_get(&arg->map, (m_uint)a); \
  list->next = next;                               \
  map_set(&arg->map, (m_uint) a, (m_uint)next);    \

#define LIST_REM(a) map_remove(&arg->map, (m_uint)a);

ANN int gwion_error(loc_t*, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);

#line 105 "src/parser.c"

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
  YYSYMBOL_exp_stmt = 152,                 /* exp_stmt  */
  YYSYMBOL_exp = 153,                      /* exp  */
  YYSYMBOL_binary_exp = 154,               /* binary_exp  */
  YYSYMBOL_call_template = 155,            /* call_template  */
  YYSYMBOL_op = 156,                       /* op  */
  YYSYMBOL_array_exp = 157,                /* array_exp  */
  YYSYMBOL_array_empty = 158,              /* array_empty  */
  YYSYMBOL_range = 159,                    /* range  */
  YYSYMBOL_array = 160,                    /* array  */
  YYSYMBOL_decl_exp = 161,                 /* decl_exp  */
  YYSYMBOL_func_args = 162,                /* func_args  */
  YYSYMBOL_fptr_args = 163,                /* fptr_args  */
  YYSYMBOL_arg_type = 164,                 /* arg_type  */
  YYSYMBOL_decl_template = 165,            /* decl_template  */
  YYSYMBOL_global = 166,                   /* global  */
  YYSYMBOL_storage_flag = 167,             /* storage_flag  */
  YYSYMBOL_access_flag = 168,              /* access_flag  */
  YYSYMBOL_flag = 169,                     /* flag  */
  YYSYMBOL_final = 170,                    /* final  */
  YYSYMBOL_modifier = 171,                 /* modifier  */
  YYSYMBOL_func_def_base = 172,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 173,            /* abstract_fdef  */
  YYSYMBOL_op_op = 174,                    /* op_op  */
  YYSYMBOL_op_base = 175,                  /* op_base  */
  YYSYMBOL_operator = 176,                 /* operator  */
  YYSYMBOL_op_def = 177,                   /* op_def  */
  YYSYMBOL_func_def = 178,                 /* func_def  */
  YYSYMBOL_type_decl_tmpl = 179,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 180,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 181,         /* type_decl_noflag  */
  YYSYMBOL_option = 182,                   /* option  */
  YYSYMBOL_type_decl_opt = 183,            /* type_decl_opt  */
  YYSYMBOL_type_decl = 184,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 185,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 186,          /* type_decl_flag2  */
  YYSYMBOL_union_list = 187,               /* union_list  */
  YYSYMBOL_union_def = 188,                /* union_def  */
  YYSYMBOL_var_decl_list = 189,            /* var_decl_list  */
  YYSYMBOL_var_decl = 190,                 /* var_decl  */
  YYSYMBOL_arg_decl = 191,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 192,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 193,                    /* eq_op  */
  YYSYMBOL_rel_op = 194,                   /* rel_op  */
  YYSYMBOL_shift_op = 195,                 /* shift_op  */
  YYSYMBOL_add_op = 196,                   /* add_op  */
  YYSYMBOL_mul_op = 197,                   /* mul_op  */
  YYSYMBOL_opt_exp = 198,                  /* opt_exp  */
  YYSYMBOL_con_exp = 199,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 200,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 201,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 202,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 203,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 204,                  /* and_exp  */
  YYSYMBOL_eq_exp = 205,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 206,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 207,                /* shift_exp  */
  YYSYMBOL_add_exp = 208,                  /* add_exp  */
  YYSYMBOL_mul_exp = 209,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 210,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 211,                 /* cast_exp  */
  YYSYMBOL_unary_op = 212,                 /* unary_op  */
  YYSYMBOL_unary_exp = 213,                /* unary_exp  */
  YYSYMBOL_lambda_list = 214,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 215,               /* lambda_arg  */
  YYSYMBOL_type_list = 216,                /* type_list  */
  YYSYMBOL_call_paren = 217,               /* call_paren  */
  YYSYMBOL_post_op = 218,                  /* post_op  */
  YYSYMBOL_dot_exp = 219,                  /* dot_exp  */
  YYSYMBOL_post_exp = 220,                 /* post_exp  */
  YYSYMBOL_interp_exp = 221,               /* interp_exp  */
  YYSYMBOL_interp = 222,                   /* interp  */
  YYSYMBOL_typeof_exp = 223,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 224                  /* prim_exp  */
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
#define YYFINAL  169
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  272
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  452

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
       0,   162,   162,   163,   166,   167,   171,   172,   173,   174,
     175,   176,   177,   180,   180,   182,   193,   193,   195,   195,
     197,   198,   200,   201,   203,   206,   209,   215,   222,   222,
     224,   228,   233,   234,   236,   237,   243,   244,   244,   247,
     248,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   266,   267,   268,   269,   270,   271,   272,   273,
     276,   276,   279,   285,   285,   288,   298,   299,   301,   301,
     303,   313,   314,   317,   319,   321,   323,   325,   327,   331,
     334,   336,   340,   340,   342,   343,   344,   345,   349,   350,
     354,   355,   358,   359,   360,   361,   364,   364,   366,   366,
     366,   366,   369,   370,   374,   378,   379,   380,   384,   385,
     386,   389,   389,   391,   392,   394,   394,   395,   395,   396,
     396,   398,   398,   400,   402,   402,   404,   405,   408,   409,
     410,   411,   414,   414,   416,   416,   419,   426,   435,   435,
     435,   435,   435,   437,   439,   441,   446,   452,   452,   453,
     456,   456,   456,   459,   463,   464,   468,   469,   472,   472,
     472,   473,   474,   474,   477,   478,   480,   480,   482,   483,
     486,   496,   497,   500,   501,   503,   504,   505,   506,   506,
     508,   508,   509,   509,   509,   509,   510,   510,   511,   511,
     512,   512,   512,   514,   514,   515,   516,   518,   521,   521,
     522,   522,   523,   523,   524,   524,   525,   525,   526,   526,
     527,   527,   528,   528,   529,   529,   530,   530,   531,   531,
     533,   533,   536,   536,   536,   537,   537,   537,   537,   540,
     541,   542,   543,   544,   545,   546,   549,   550,   551,   551,
     554,   555,   559,   559,   561,   561,   563,   572,   573,   575,
     577,   580,   582,   584,   588,   589,   590,   592,   593,   604,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619
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
  "breaks", "jump_stmt", "exp_stmt", "exp", "binary_exp", "call_template",
  "op", "array_exp", "array_empty", "range", "array", "decl_exp",
  "func_args", "fptr_args", "arg_type", "decl_template", "global",
  "storage_flag", "access_flag", "flag", "final", "modifier",
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

#define YYPACT_NINF (-296)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     427,  -296,   940,   998,   532,   145,  -296,    47,  -296,   733,
    -296,    57,    66,   122,  1520,   145,   821,  -296,  -296,  -296,
    -296,    89,   145,   145,   145,  -296,  1520,    64,  -296,  -296,
    -296,  -296,  -296,  1056,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
      42,    42,   130,   130,   169,  1520,  -296,  -296,   180,   427,
    -296,   145,  -296,   733,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   186,  -296,  -296,  -296,    25,  -296,  -296,    87,   -23,
    -296,   194,  -296,  -296,  -296,  -296,  -296,   202,  -296,  -296,
    -296,   145,  -296,  -296,   -11,   114,   126,   121,   138,   -32,
     102,    48,     5,   -39,   146,   162,   161,  -296,   130,  -296,
    -296,    30,   188,  -296,  -296,  -296,   238,   116,  -296,  1520,
      19,  -296,   637,  -296,  -296,  -296,  -296,   248,  -296,  -296,
      -1,   120,  1520,   113,  1520,   879,   183,    78,   185,  -296,
     157,  -296,    42,   249,    42,   187,    17,    64,  -296,  1056,
    -296,    20,  -296,   153,  -296,  -296,   222,  -296,    83,  -296,
     254,   -36,  -296,  -296,  -296,  -296,  -296,  1520,    16,  -296,
    -296,   135,  -296,  1520,  -296,   260,  -296,  1520,  1520,  1520,
    1520,  1114,  -296,  -296,  -296,   842,   130,    42,    42,  1520,
     161,   161,   161,   161,   161,   161,  -296,  -296,   161,  -296,
    -296,  -296,  -296,   161,  -296,  -296,   161,  -296,  -296,   161,
    -296,  -296,  -296,   161,   161,    42,  -296,  -296,  1172,   192,
    -296,    42,   261,  -296,  -296,  -296,  1056,   161,  -296,   104,
     258,  1230,  -296,    42,    28,  -296,    42,  -296,    42,   182,
    1520,   196,   879,   189,   247,  -296,   262,  -296,   198,    42,
      28,   203,   168,  -296,  -296,  -296,  1056,  -296,   208,  -296,
    -296,  -296,  1288,  -296,  -296,   201,  -296,  -296,  -296,   209,
     215,  -296,   -23,  -296,  -296,  -296,  -296,   129,   248,  -296,
    -296,  -296,  -296,  -296,   277,  -296,  -296,  -296,  -296,   278,
    -296,   280,   214,   283,   205,  -296,   114,   126,   121,   138,
     -32,   102,    48,     5,   -39,   146,   162,  -296,  -296,   288,
     285,  1346,  -296,  -296,  -296,  -296,  1404,  -296,  -296,   149,
    -296,   290,   223,  -296,   292,   130,   224,   227,   733,   206,
     733,  1462,  1520,  1520,  -296,    50,   228,   168,  -296,   297,
     223,   299,   168,   228,   294,  -296,  -296,  -296,   168,   733,
     298,    42,    42,    42,   254,  -296,   306,   161,    42,  -296,
    -296,   216,  -296,  -296,    42,   254,   230,  -296,  -296,   168,
     168,   301,  -296,  -296,   733,   221,    15,    41,   293,  -296,
    -296,    71,   317,    42,  -296,  -296,  -296,  -296,   150,    42,
     286,  -296,  -296,   318,   319,   320,  -296,   214,  -296,  -296,
    -296,  -296,  -296,   194,  1520,   249,  -296,   733,  -296,   733,
     733,  1520,   241,   733,  -296,   255,  -296,  -296,  -296,  -296,
     256,   322,    42,   321,    42,   130,  -296,  -296,   -23,    28,
    -296,  -296,  -296,   283,   733,  -296,  -296,   326,  -296,  -296,
     427,   328,  -296,   333,   733,    42,   427,   329,  -296,  -296,
    -296,  -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    89,     0,     0,     0,   131,   166,     0,    71,     0,
      72,     0,     0,     0,     0,   131,     0,    82,    83,    13,
      14,   147,   131,   131,   131,   165,     0,   239,   164,   261,
     262,   264,   265,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   260,   244,   222,   245,   223,
       0,     0,   226,   227,     0,     0,   228,   225,     0,     2,
       4,   131,     8,     6,    11,    12,    55,    58,    22,     9,
      56,     0,    53,    59,    54,     0,    57,    52,     0,    90,
     111,   112,   267,   266,    92,   150,   151,     0,   152,     7,
     167,   131,    10,   113,   195,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,     0,   220,     0,   224,
     253,   229,   263,   272,   247,   271,     0,     0,   105,     0,
       0,    39,     0,   124,   123,   126,   127,     0,   125,   129,
     128,   133,     0,     0,     0,     0,     0,     0,    61,    85,
       0,   148,     0,     0,     0,     0,     0,   236,   238,     0,
     254,     0,   257,    97,    31,   235,   154,   156,   160,   162,
      29,     0,   157,    30,   232,   233,   234,     0,     0,     1,
       5,   133,    23,     0,    87,     0,    88,     0,     0,     0,
       0,     0,   107,   226,   227,     0,     0,     0,     0,   194,
       0,     0,     0,     0,     0,     0,   180,   181,     0,   185,
     183,   184,   182,     0,   186,   187,     0,   188,   189,     0,
     190,   191,   192,     0,     0,     0,   230,   270,     0,     0,
     252,     0,     0,   248,   249,   251,     0,     0,   269,     0,
     102,     0,    40,   116,     0,   130,     0,   132,     0,     0,
       0,     0,     0,     0,     0,    60,     0,    84,     0,   118,
       0,     0,   122,    79,   237,   255,     0,   153,     0,   158,
     159,   161,     0,    28,   163,     0,   268,   134,   135,     0,
       0,    86,    91,    93,    95,    94,   106,     0,     0,   101,
      98,    99,   100,   138,     0,   140,   139,   142,   141,     0,
     149,     0,     0,   193,     0,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,   221,   246,   240,
       0,     0,   250,   258,   231,   110,     0,   103,   109,     0,
      34,   115,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,     0,     0,   122,    37,   117,
     179,     0,   122,     0,     0,   256,   155,   259,   122,     0,
       0,     0,     0,     0,   173,   114,   172,     0,     0,    96,
     243,     0,   104,   108,     0,   175,    33,   119,   136,   122,
     122,    80,    74,    78,     0,     0,     0,    64,    69,    67,
      20,     0,     0,     0,   178,    36,    26,    24,     0,     0,
      17,    73,   146,     0,     0,     0,   174,     0,   196,   241,
     242,    35,   177,   176,     0,     0,    25,     0,    75,     0,
       0,     0,     0,     0,    70,     0,    62,    27,    38,   121,
       0,     0,     0,     0,     0,     0,   145,   171,    32,     0,
      81,    76,    77,    63,     0,    68,    21,     0,   170,    16,
      19,     0,   144,     0,    65,   168,    18,     0,   143,   137,
     169,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -102,   -53,  -296,  -296,  -296,  -296,    -2,    -3,
    -296,  -296,  -296,  -296,   -42,   -80,   -43,  -295,  -296,   -38,
    -296,   -41,  -296,    -9,  -296,  -296,  -296,     9,  -296,  -296,
    -296,   217,  -296,  -296,  -296,  -296,  -296,  -116,     0,   -18,
     199,  -296,   -68,   -14,   242,  -150,   -69,    77,   -49,  -235,
    -253,   336,   229,  -296,    27,   190,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,   100,  -296,  -296,   207,  -201,
      -4,  -296,   -83,  -296,   -34,  -296,    24,  -296,  -296,   181,
     184,   197,   204,  -296,  -172,  -296,   176,   178,   179,   177,
     193,   175,   171,   191,   166,   164,   167,   296,   -84,   240,
    -296,    32,  -296,   -82,  -296,  -296,  -132,  -296,   -46,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,    59,    60,    61,    62,   423,   447,   381,    63,
     143,   127,    64,    65,   154,   164,   309,   320,   321,   338,
     339,    66,    67,    68,   246,    69,   412,   334,   335,   414,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     222,   283,    80,    81,    82,    83,    84,   234,   250,   325,
     344,   128,   129,   130,   131,   238,   269,    85,    86,   284,
     186,    87,    88,    89,   156,   157,   158,   261,   159,   160,
      90,    91,   421,    92,   355,   356,   366,   385,   198,   203,
     206,   209,   213,   294,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   148,
     108,   310,   312,   109,   110,   111,   152,   112,   113,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     133,   122,   117,   120,   162,   162,   170,   155,   146,   163,
     263,   165,   166,   182,   137,   341,   140,   255,   295,   242,
     177,   410,   216,   177,   177,   178,     4,   230,   174,   225,
     123,   124,   322,   151,   323,   -97,   153,   218,   210,   211,
     212,   162,   138,   223,   185,   177,   161,   161,   340,   142,
     144,   145,   132,    54,   172,   168,   393,   394,   395,   179,
     378,   196,   134,   178,   411,   178,   197,   217,   219,   401,
     189,   135,   333,   324,   190,   415,   175,   256,   207,   220,
     208,   416,   177,   161,   382,   180,    25,   244,   171,   387,
     176,   177,    28,   191,   313,   390,   162,   179,   162,   179,
     248,   251,   231,   289,    46,   253,    48,   266,   177,   273,
     274,   275,   315,   172,   153,   162,   405,   406,   188,   229,
     177,   124,   228,   180,   345,   180,   331,   136,     8,   441,
      10,    54,   239,   177,   241,   221,   147,   230,   161,     4,
     161,   162,   162,   314,   291,   290,   292,   204,   205,   151,
     322,   322,   322,   177,   415,   236,   237,   363,   419,   272,
     247,   177,   317,   322,   259,   260,     2,   265,     3,   162,
     267,   237,   307,   270,   167,   162,   123,   124,   125,   126,
     169,   277,   340,   161,   161,   398,   177,   162,   328,   293,
     162,   173,   162,   326,   443,   327,   199,   200,   201,   202,
     177,   181,   330,   162,   396,   177,   192,   347,    27,   372,
     177,   161,    29,    30,    31,    32,    33,   161,   120,   177,
     177,   349,   400,   322,   194,   177,   151,   409,   193,   161,
     214,   319,   161,    45,   161,    46,    47,    48,    49,   195,
     329,    50,   215,   226,   227,   161,    25,    51,    52,    53,
      54,    55,    28,   233,   249,   243,   151,   245,   221,   252,
     258,   262,   277,   271,   308,   316,   311,    56,    57,   333,
     337,   336,   332,   343,   153,   342,    46,    47,    48,    49,
     153,   348,   351,   352,   368,   353,   354,   177,   357,   183,
     184,    54,   358,   359,   364,   365,   369,   402,   367,   370,
     380,   383,   386,   389,   392,   162,   162,   162,    56,    57,
     397,   361,   162,   404,   376,   407,   277,   413,   162,   371,
     417,   373,   424,   422,   434,   425,   426,   436,   437,   445,
     440,   375,   438,   377,   448,   182,   449,   162,   446,   451,
     391,   388,   439,   162,   379,   418,   420,   161,   161,   161,
     240,   403,   257,   224,   161,   350,   429,   141,   346,   235,
     161,   268,   450,   427,   384,   408,   285,   296,   264,   286,
     297,   299,   298,   301,   302,   304,   162,   305,   162,   161,
     163,   306,   287,   187,   442,   161,   428,   254,   300,   288,
     399,     0,     0,   170,     0,     0,     0,   303,   430,   162,
     431,   432,   420,     0,   435,     0,     0,     0,     0,     0,
       0,   433,     0,     0,     0,     0,     0,     0,   161,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   444,     2,     0,     3,   172,     4,     0,     5,     6,
       7,   161,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,     0,
      24,    25,     0,    26,    27,     0,     0,    28,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,    45,
       0,    46,    47,    48,    49,     0,     0,    50,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     1,     0,     2,     0,     3,
       0,     4,   121,     0,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    26,    27,
       0,     0,    28,    29,    30,    31,    32,    33,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,    45,     0,    46,    47,    48,    49,
       0,     0,    50,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       1,     0,     2,     0,     3,     0,     4,   232,     0,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    26,    27,     0,     0,    28,    29,    30,
      31,    32,    33,     0,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,    45,
       0,    46,    47,    48,    49,     0,     0,    50,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     0,
       3,     0,     4,    56,    57,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,     0,    16,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
      27,     0,     0,    28,    29,    30,    31,    32,    33,     0,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,    45,     0,    46,    47,    48,
      49,     0,     0,    50,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,   139,     0,     2,     0,     3,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,    27,     0,
       0,    28,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,     1,     0,     2,     0,     3,     0,     0,     0,
     278,     6,     0,    45,     0,    46,    47,    48,    49,     0,
       0,    50,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,   207,    46,   208,    48,   210,
     211,   212,     0,    25,   279,     0,    27,    56,    57,    28,
      29,    30,    31,    32,    33,   280,   199,   200,   201,   202,
     281,   204,   205,     0,     0,     2,   115,     3,     0,     0,
     282,    45,     6,    46,    47,    48,    49,     0,     0,    50,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    56,    57,    27,     0,   116,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   118,     0,     0,     0,
       6,     0,    45,     0,    46,    47,    48,    49,     0,     0,
      50,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    27,    56,    57,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
      45,     0,    46,    47,    48,    49,     0,     0,    50,     0,
       0,   119,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,    27,    56,    57,    28,    29,    30,    31,
      32,    33,   149,     0,   150,     0,     0,     0,     0,     2,
       0,     3,   276,     0,     0,     0,     6,     0,    45,     0,
      46,    47,    48,    49,     0,     0,    50,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    27,    56,    57,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,    45,     0,    46,    47,
      48,    49,     0,     0,    50,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    27,
      56,    57,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,   318,     0,
       0,     0,     6,     0,    45,     0,    46,    47,    48,    49,
       0,     0,    50,     0,     0,   119,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    27,    56,    57,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,   118,     0,     0,     0,
       6,     0,    45,     0,    46,    47,    48,    49,     0,     0,
      50,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    27,    56,    57,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     2,   360,     3,     0,     0,     0,     0,     6,     0,
      45,     0,    46,    47,    48,    49,     0,     0,    50,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,    27,    56,    57,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,   362,     0,     0,     0,     6,     0,    45,     0,
      46,    47,    48,    49,     0,     0,    50,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    27,    56,    57,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     2,   374,     3,
       0,     0,     0,     0,     6,     0,    45,     0,    46,    47,
      48,    49,     0,     0,    50,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    27,
      56,    57,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     0,     0,
       0,     0,     6,     0,    45,     0,    46,    47,    48,    49,
       0,     0,    50,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    27,    56,    57,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,    47,    48,    49,     0,     0,
      50,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57
};

static const yytype_int16 yycheck[] =
{
       9,     4,     2,     3,    50,    51,    59,    50,    26,    51,
     160,    52,    53,    81,    14,   250,    16,   149,   190,   135,
       4,     6,   106,     4,     4,    48,     9,     8,     3,   111,
      31,    32,   233,    33,     6,     5,    72,     7,    77,    78,
      79,    87,    15,   111,    87,     4,    50,    51,   249,    22,
      23,    24,     5,    89,    63,    55,   351,   352,   353,    82,
      10,    93,     5,    48,    23,    48,    98,   108,    38,   364,
      81,     5,    22,    45,    85,     4,    51,    57,    73,    49,
      75,    10,     4,    87,   337,   108,    44,     9,    61,   342,
       3,     4,    50,   104,   226,   348,   142,    82,   144,    82,
     142,   144,    83,   185,    74,   146,    76,    91,     4,   178,
     179,   180,     8,   122,    72,   161,   369,   370,    91,   119,
       4,    32,     6,   108,   256,   108,   242,     5,    15,   424,
      17,    89,   132,     4,   134,   105,    72,     8,   142,     9,
     144,   187,   188,   227,   187,   186,   188,    99,   100,   149,
     351,   352,   353,     4,     4,    35,    36,     8,     8,   177,
       3,     4,   230,   364,    81,    82,     5,   167,     7,   215,
      35,    36,   215,   173,     5,   221,    31,    32,    33,    34,
       0,   181,   383,   187,   188,   357,     4,   233,     6,   189,
     236,     5,   238,   236,   429,   238,    94,    95,    96,    97,
       4,     7,     6,   249,   354,     4,    92,     6,    47,     3,
       4,   215,    51,    52,    53,    54,    55,   221,   218,     4,
       4,     6,     6,   424,   103,     4,   226,     6,   102,   233,
      84,   231,   236,    72,   238,    74,    75,    76,    77,   101,
     240,    80,    80,    55,     6,   249,    44,    86,    87,    88,
      89,    90,    50,     5,     5,    72,   256,    72,   105,    72,
      38,     7,   262,     3,    72,     7,     5,   106,   107,    22,
      72,     9,    83,   105,    72,    72,    74,    75,    76,    77,
      72,    72,     5,     5,   325,     5,    72,     4,    83,    87,
      88,    89,     4,     8,     4,    72,    72,   365,     6,    72,
      72,     4,     3,     9,     6,   351,   352,   353,   106,   107,
       4,   311,   358,    83,   332,    14,   316,    24,   364,   328,
       3,   330,     4,    37,    83,     6,     6,    72,    72,     3,
       9,   331,    10,   333,     6,   403,     3,   383,   440,    10,
     349,   343,   422,   389,   335,   383,   389,   351,   352,   353,
     133,   365,   153,   111,   358,   278,   405,    21,   258,   130,
     364,   171,   445,   397,   340,   374,   185,   191,   161,   185,
     192,   194,   193,   198,   203,   209,   422,   213,   424,   383,
     422,   214,   185,    87,   425,   389,   404,   147,   195,   185,
     358,    -1,    -1,   446,    -1,    -1,    -1,   206,   407,   445,
     409,   410,   445,    -1,   413,    -1,    -1,    -1,    -1,    -1,
      -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,
     424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   434,     5,    -1,     7,   444,     9,    -1,    11,    12,
      13,   445,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
       3,    -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,     9,   106,   107,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,     3,    -1,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,
      48,    12,    -1,    72,    -1,    74,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    -1,    44,    82,    -1,    47,   106,   107,    50,
      51,    52,    53,    54,    55,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,    -1,     5,     6,     7,    -1,    -1,
     108,    72,    12,    74,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,   106,   107,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,   106,   107,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,   106,   107,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    72,    -1,
      74,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,   106,   107,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    72,    -1,    74,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
     106,   107,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,   106,   107,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,   106,   107,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
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
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    -1,    72,    -1,    74,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,   106,   107,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107
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
     157,   158,   159,   160,   161,   172,   173,   176,   177,   178,
     185,   186,   188,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   215,   218,
     219,   220,   222,   223,   224,     6,    49,   153,     8,    83,
     153,    10,   124,    31,    32,    33,    34,   126,   166,   167,
     168,   169,     5,   138,     5,     5,     5,   153,   169,     3,
     153,   166,   169,   125,   169,   169,   154,    72,   214,    56,
      58,   153,   221,    72,   129,   131,   179,   180,   181,   183,
     184,   185,   223,   129,   130,   136,   136,     5,   153,     0,
     118,   169,   138,     5,     3,    51,     3,     4,    48,    82,
     108,     7,   157,    87,    88,   131,   175,   212,   169,    81,
      85,   104,    92,   102,   103,   101,    93,    98,   193,    94,
      95,    96,    97,   194,    99,   100,   195,    73,    75,   196,
      77,    78,    79,   197,    84,    80,   213,   136,     7,    38,
      49,   105,   155,   157,   159,   218,    55,     6,     6,   153,
       8,    83,    10,     5,   162,   167,    35,    36,   170,   153,
     146,   153,   152,    72,     9,    72,   139,     3,   129,     5,
     163,   131,    72,   136,   214,   221,    57,   155,    38,    81,
      82,   182,     7,   160,   183,   153,    91,    35,   170,   171,
     153,     3,   154,   161,   161,   161,     8,   153,    48,    82,
      93,    98,   108,   156,   174,   194,   195,   196,   197,   218,
     136,   131,   129,   153,   198,   199,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   131,    72,   131,
     216,     5,   217,   221,   213,     8,     7,   157,     8,   153,
     132,   133,   184,     6,    45,   164,   131,   131,     6,   153,
       6,   152,    83,    22,   142,   143,     9,    72,   134,   135,
     184,   164,    72,   105,   165,   221,   180,     6,    72,     6,
     162,     5,     5,     5,    72,   189,   190,    83,     4,     8,
       6,   153,     8,     8,     4,    72,   191,     6,   136,    72,
      72,   138,     3,   138,     6,   153,   154,   153,    10,   142,
      72,   123,   165,     4,   191,   192,     3,   165,   123,     9,
     165,   138,     6,   132,   132,   132,   160,     4,   199,   216,
       6,   132,   157,   158,    83,   165,   165,    14,   138,     6,
       6,    23,   141,    24,   144,     4,    10,     3,   134,     8,
     131,   187,    37,   121,     4,     6,     6,   189,   154,   163,
     138,   138,   138,   153,    83,   138,    72,    72,    10,   130,
       9,   132,   136,   164,   124,     3,   117,   122,     6,     3,
     187,    10
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
     153,   153,   154,   154,   154,   154,   155,   155,   156,   156,
     156,   156,   157,   157,   157,   158,   158,   158,   159,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   172,   173,   174,   174,
     174,   174,   174,   175,   175,   175,   175,   176,   176,   177,
     178,   178,   178,   179,   180,   180,   181,   181,   182,   182,
     182,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   189,   189,   190,   190,   191,   191,   191,   192,   192,
     193,   193,   194,   194,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   212,   212,   212,   212,   212,   213,
     213,   213,   213,   213,   213,   213,   214,   214,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   220,   220,   220,
     220,   220,   220,   220,   221,   221,   221,   222,   222,   223,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224
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
       1,     3,     1,     3,     3,     3,     3,     0,     1,     1,
       1,     1,     3,     4,     5,     2,     3,     2,     5,     4,
       4,     1,     1,     1,     4,     2,     1,     2,     1,     2,
       1,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     1,     1,     5,     9,     1,     1,
       1,     1,     1,     7,     6,     5,     4,     1,     2,     3,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       0,     2,     1,     2,     1,     1,     1,     1,     3,     4,
       7,     3,     1,     1,     2,     1,     2,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     5,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     2,     2,     2,     2,     1,     2,     2,     1,
       1,     3,     3,     2,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     1,     1,     2,     3,     2,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     1
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
#line 159 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1743 "src/parser.c"
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
#line 162 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); /* no need for LIST_REM here */}
#line 2044 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 163 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2050 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 166 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); LIST_FIRST((yyval.ast)) }
#line 2056 "src/parser.c"
    break;

  case 5: /* ast: ast section  */
#line 167 "src/gwion.y"
                { LIST_NEXT((yyval.ast), (yyvsp[-1].ast), Ast, !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL)) }
#line 2062 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 171 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); LIST_REM((yyval.section)) }
#line 2068 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 172 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2074 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 173 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2080 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 174 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2086 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 175 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2092 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 176 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2098 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 177 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2104 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 180 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2110 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 180 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2116 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier "<identifier>" decl_template class_ext "{" class_body "}"  */
#line 183 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), (yyloc));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2130 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 193 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2136 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 193 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2142 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 195 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2148 "src/parser.c"
    break;

  case 20: /* id_list: "<identifier>"  */
#line 197 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym)); LIST_FIRST((yyval.id_list)) }
#line 2154 "src/parser.c"
    break;

  case 21: /* id_list: id_list "," "<identifier>"  */
#line 198 "src/gwion.y"
                           { LIST_NEXT((yyval.id_list), (yyvsp[-2].id_list), ID_List, new_id_list(mpool(arg), (yyvsp[0].sym))) }
#line 2160 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 200 "src/gwion.y"
                 { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2166 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt_list stmt  */
#line 201 "src/gwion.y"
                 { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2172 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty "<identifier>" decl_template  */
#line 203 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2179 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty "<identifier>" decl_template  */
#line 206 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2186 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 209 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2196 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array "<identifier>" decl_template ";"  */
#line 215 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2207 "src/parser.c"
    break;

  case 28: /* type_decl_array: type_decl array  */
#line 222 "src/gwion.y"
                                 { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2213 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 224 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2221 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 228 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2229 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 233 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2235 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 234 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2241 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 236 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyvsp[0].arg_list)) }
#line 2247 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 237 "src/gwion.y"
                        {
     LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list))
     if(next->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
   }
#line 2257 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 243 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2263 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 244 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_FIRST((yyval.arg_list)) }
#line 2269 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_list "," fptr_arg  */
#line 244 "src/gwion.y"
                                                                           { LIST_NEXT((yyval.arg_list), (yyvsp[-2].arg_list), Arg_List, (yyvsp[0].arg_list)) }
#line 2275 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 247 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, (yyloc)); }
#line 2281 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 248 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list), (yyloc)); LIST_REM((yyvsp[-1].stmt_list)) }
#line 2287 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 252 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), (yyloc)); }
#line 2293 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 253 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), (yyloc)); }
#line 2299 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 254 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), (yyloc)); }
#line 2305 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 255 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), (yyloc)); }
#line 2311 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 256 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), (yyloc)); }
#line 2317 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 257 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), (yyloc)); }
#line 2323 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 258 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), (yyloc)); }
#line 2329 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 259 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), (yyloc)); }
#line 2335 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 260 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), (yyloc)); }
#line 2341 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 261 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), (yyloc)); }
#line 2347 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 262 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), (yyloc)); }
#line 2353 "src/parser.c"
    break;

  case 61: /* opt_id: %empty  */
#line 276 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2359 "src/parser.c"
    break;

  case 62: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 279 "src/gwion.y"
                                           {
    (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), (yyloc));
    (yyval.enum_def)->flag = (yyvsp[-4].flag);
    LIST_REM((yyvsp[-1].id_list))
  }
#line 2369 "src/parser.c"
    break;

  case 63: /* when_exp: "when" exp  */
#line 285 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2375 "src/parser.c"
    break;

  case 64: /* when_exp: %empty  */
#line 285 "src/gwion.y"
                                               { (yyval.exp) = NULL; }
#line 2381 "src/parser.c"
    break;

  case 65: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 288 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, (yyloc));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
    LIST_REM((yyvsp[-3].exp))
    LIST_REM((yyvsp[0].stmt_list))
}
#line 2394 "src/parser.c"
    break;

  case 66: /* match_list: match_case_stmt  */
#line 298 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); LIST_FIRST((yyval.stmt_list)) }
#line 2400 "src/parser.c"
    break;

  case 67: /* match_list: match_list match_case_stmt  */
#line 299 "src/gwion.y"
                               { LIST_NEXT((yyval.stmt_list), (yyvsp[-1].stmt_list), Stmt_List, new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL)) }
#line 2406 "src/parser.c"
    break;

  case 68: /* where_stmt: "where" stmt  */
#line 301 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2412 "src/parser.c"
    break;

  case 69: /* where_stmt: %empty  */
#line 301 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2418 "src/parser.c"
    break;

  case 70: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 303 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, (yyloc));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
  LIST_REM((yyvsp[-4].exp))
  LIST_REM((yyvsp[-2].stmt_list))
}
#line 2431 "src/parser.c"
    break;

  case 71: /* flow: "while"  */
#line 313 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2437 "src/parser.c"
    break;

  case 72: /* flow: "until"  */
#line 314 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2443 "src/parser.c"
    break;

  case 73: /* loop_stmt: flow "(" exp ")" stmt  */
#line 318 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0, (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2449 "src/parser.c"
    break;

  case 74: /* loop_stmt: "do" stmt flow exp ";"  */
#line 320 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1, (yyloc)); LIST_REM((yyvsp[-2].ival)) }
#line 2455 "src/parser.c"
    break;

  case 75: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 322 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt), (yyloc)); }
#line 2461 "src/parser.c"
    break;

  case 76: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 324 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2467 "src/parser.c"
    break;

  case 77: /* loop_stmt: "foreach" "(" "<identifier>" ":" binary_exp ")" stmt  */
#line 326 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2473 "src/parser.c"
    break;

  case 78: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 328 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2479 "src/parser.c"
    break;

  case 79: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 331 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt), (yyloc)); }
#line 2485 "src/parser.c"
    break;

  case 80: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 335 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt), (yyloc)); LIST_REM((yyvsp[-2].exp)) }
#line 2491 "src/parser.c"
    break;

  case 81: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 337 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt), (yyloc)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); LIST_REM((yyvsp[-4].exp)) }
#line 2497 "src/parser.c"
    break;

  case 82: /* breaks: "break"  */
#line 340 "src/gwion.y"
                  { (yyval.ival) = ae_stmt_break; }
#line 2503 "src/parser.c"
    break;

  case 83: /* breaks: "continue"  */
#line 340 "src/gwion.y"
                                                      { (yyval.ival) = ae_stmt_continue; }
#line 2509 "src/parser.c"
    break;

  case 84: /* jump_stmt: "return" exp ";"  */
#line 342 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2515 "src/parser.c"
    break;

  case 85: /* jump_stmt: "return" ";"  */
#line 343 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_return, (yyloc)); }
#line 2521 "src/parser.c"
    break;

  case 86: /* jump_stmt: breaks "<integer>" ";"  */
#line 344 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-2].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = (yyvsp[-1].lval); }
#line 2527 "src/parser.c"
    break;

  case 87: /* jump_stmt: breaks ";"  */
#line 345 "src/gwion.y"
                          { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), (yyloc)); (yyval.stmt)->d.stmt_index.idx = -1; }
#line 2533 "src/parser.c"
    break;

  case 88: /* exp_stmt: exp ";"  */
#line 349 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 2539 "src/parser.c"
    break;

  case 89: /* exp_stmt: ";"  */
#line 350 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, (yyloc)); }
#line 2545 "src/parser.c"
    break;

  case 90: /* exp: binary_exp  */
#line 354 "src/gwion.y"
                         { (yyval.exp) = (yyvsp[0].exp); LIST_FIRST((yyval.exp)) }
#line 2551 "src/parser.c"
    break;

  case 91: /* exp: exp "," binary_exp  */
#line 355 "src/gwion.y"
                         { LIST_NEXT((yyval.exp), (yyvsp[-2].exp), Exp, (yyvsp[0].exp)) }
#line 2557 "src/parser.c"
    break;

  case 93: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 359 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2563 "src/parser.c"
    break;

  case 94: /* binary_exp: binary_exp "<dynamic_operator>" decl_exp  */
#line 360 "src/gwion.y"
                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2569 "src/parser.c"
    break;

  case 95: /* binary_exp: binary_exp OPTIONS decl_exp  */
#line 361 "src/gwion.y"
                                    { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 2575 "src/parser.c"
    break;

  case 96: /* call_template: ":[" type_list "]"  */
#line 364 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2581 "src/parser.c"
    break;

  case 97: /* call_template: %empty  */
#line 364 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2587 "src/parser.c"
    break;

  case 102: /* array_exp: "[" exp "]"  */
#line 369 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp));  LIST_REM((yyvsp[-1].exp)) }
#line 2593 "src/parser.c"
    break;

  case 103: /* array_exp: "[" exp "]" array_exp  */
#line 370 "src/gwion.y"
                                {
    LIST_REM((yyvsp[-2].exp))
    if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp));
  }
#line 2602 "src/parser.c"
    break;

  case 104: /* array_exp: "[" exp "]" "[" "]"  */
#line 374 "src/gwion.y"
                                     { LIST_REM(2) gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2608 "src/parser.c"
    break;

  case 105: /* array_empty: "[" "]"  */
#line 378 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2614 "src/parser.c"
    break;

  case 106: /* array_empty: array_empty "[" "]"  */
#line 379 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2620 "src/parser.c"
    break;

  case 107: /* array_empty: array_empty array_exp  */
#line 380 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2626 "src/parser.c"
    break;

  case 108: /* range: "[" exp ":" exp "]"  */
#line 384 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); LIST_REM(2) LIST_REM((yyvsp[-1].exp)) }
#line 2632 "src/parser.c"
    break;

  case 109: /* range: "[" exp ":" "]"  */
#line 385 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL);  LIST_REM((yyvsp[-2].exp)) }
#line 2638 "src/parser.c"
    break;

  case 110: /* range: "[" ":" exp "]"  */
#line 386 "src/gwion.y"
                                                  { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); LIST_REM((yyvsp[-1].exp)) }
#line 2644 "src/parser.c"
    break;

  case 114: /* decl_exp: type_decl_flag2 flag type_decl_array var_decl_list  */
#line 392 "src/gwion.y"
                                                       { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list), (yyloc)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2650 "src/parser.c"
    break;

  case 115: /* func_args: "(" arg_list  */
#line 394 "src/gwion.y"
                             { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2656 "src/parser.c"
    break;

  case 116: /* func_args: "("  */
#line 394 "src/gwion.y"
                                                                { (yyval.arg_list) = NULL; }
#line 2662 "src/parser.c"
    break;

  case 117: /* fptr_args: "(" fptr_list  */
#line 395 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); LIST_REM((yyvsp[0].arg_list)) }
#line 2668 "src/parser.c"
    break;

  case 118: /* fptr_args: "("  */
#line 395 "src/gwion.y"
                                                               { (yyval.arg_list) = NULL; }
#line 2674 "src/parser.c"
    break;

  case 119: /* arg_type: "..." ")"  */
#line 396 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2680 "src/parser.c"
    break;

  case 120: /* arg_type: ")"  */
#line 396 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2686 "src/parser.c"
    break;

  case 121: /* decl_template: ":[" id_list "]"  */
#line 398 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); LIST_REM(2) }
#line 2692 "src/parser.c"
    break;

  case 122: /* decl_template: %empty  */
#line 398 "src/gwion.y"
                                                              { (yyval.id_list) = NULL; }
#line 2698 "src/parser.c"
    break;

  case 123: /* global: "global"  */
#line 400 "src/gwion.y"
               { (yyval.flag) = ae_flag_global; arg->global = 1; }
#line 2704 "src/parser.c"
    break;

  case 124: /* storage_flag: "static"  */
#line 402 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2710 "src/parser.c"
    break;

  case 126: /* access_flag: "private"  */
#line 404 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2716 "src/parser.c"
    break;

  case 127: /* access_flag: "protect"  */
#line 405 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2722 "src/parser.c"
    break;

  case 128: /* flag: access_flag  */
#line 408 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2728 "src/parser.c"
    break;

  case 129: /* flag: storage_flag  */
#line 409 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2734 "src/parser.c"
    break;

  case 130: /* flag: access_flag storage_flag  */
#line 410 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2740 "src/parser.c"
    break;

  case 131: /* flag: %empty  */
#line 411 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2746 "src/parser.c"
    break;

  case 132: /* final: "final"  */
#line 414 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2752 "src/parser.c"
    break;

  case 133: /* final: %empty  */
#line 414 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2758 "src/parser.c"
    break;

  case 134: /* modifier: "abstract"  */
#line 416 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2764 "src/parser.c"
    break;

  case 136: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 419 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), (yyloc));
  }
#line 2774 "src/parser.c"
    break;

  case 137: /* abstract_fdef: "fun" flag "abstract" type_decl_empty "<identifier>" decl_template fptr_args arg_type ";"  */
#line 427 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, (yyloc));
    }
#line 2786 "src/parser.c"
    break;

  case 143: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 438 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2792 "src/parser.c"
    break;

  case 144: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 440 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2798 "src/parser.c"
    break;

  case 145: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 442 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2807 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 447 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2816 "src/parser.c"
    break;

  case 147: /* operator: "operator"  */
#line 452 "src/gwion.y"
                   { (yyval.flag) = ae_flag_none; }
#line 2822 "src/parser.c"
    break;

  case 148: /* operator: "operator" global  */
#line 452 "src/gwion.y"
                                                            { (yyval.flag) = ae_flag_global; }
#line 2828 "src/parser.c"
    break;

  case 149: /* op_def: operator op_base code_stmt  */
#line 454 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), (yyloc)); (yyvsp[-1].func_base)->fbflag |= fbflag_op; (yyvsp[-1].func_base)->flag |= (yyvsp[-2].flag); }
#line 2834 "src/parser.c"
    break;

  case 152: /* func_def: op_def  */
#line 456 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2840 "src/parser.c"
    break;

  case 153: /* type_decl_tmpl: "<identifier>" call_template  */
#line 459 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), (yyloc)); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2846 "src/parser.c"
    break;

  case 155: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 464 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2852 "src/parser.c"
    break;

  case 156: /* type_decl_noflag: type_decl_next  */
#line 468 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2858 "src/parser.c"
    break;

  case 157: /* type_decl_noflag: typeof_exp  */
#line 469 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 2864 "src/parser.c"
    break;

  case 158: /* option: "?"  */
#line 472 "src/gwion.y"
            { (yyval.uval) = 1; }
#line 2870 "src/parser.c"
    break;

  case 159: /* option: OPTIONS  */
#line 472 "src/gwion.y"
                                  { (yyval.uval) = strlen(s_name((yyvsp[0].sym))); }
#line 2876 "src/parser.c"
    break;

  case 160: /* option: %empty  */
#line 472 "src/gwion.y"
                                                                 { (yyval.uval) = 0; }
#line 2882 "src/parser.c"
    break;

  case 161: /* type_decl_opt: type_decl_noflag option  */
#line 473 "src/gwion.y"
                                       { (yyval.type_decl) = (yyvsp[-1].type_decl); (yyval.type_decl)->option |= (yyvsp[0].uval); }
#line 2888 "src/parser.c"
    break;

  case 163: /* type_decl: type_decl_flag type_decl_opt  */
#line 474 "src/gwion.y"
                                                        { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2894 "src/parser.c"
    break;

  case 164: /* type_decl_flag: "LATE"  */
#line 477 "src/gwion.y"
         { (yyval.flag) = ae_flag_late; }
#line 2900 "src/parser.c"
    break;

  case 165: /* type_decl_flag: "const"  */
#line 478 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2906 "src/parser.c"
    break;

  case 166: /* type_decl_flag2: "var"  */
#line 480 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2912 "src/parser.c"
    break;

  case 168: /* union_list: type_decl_empty "<identifier>" ";"  */
#line 482 "src/gwion.y"
                                   { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), (yyloc)); }
#line 2918 "src/parser.c"
    break;

  case 169: /* union_list: type_decl_empty "<identifier>" ";" union_list  */
#line 483 "src/gwion.y"
                                      { (yyval.union_list) = new_union_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyloc)); (yyval.union_list)->next = (yyvsp[0].union_list); }
#line 2924 "src/parser.c"
    break;

  case 170: /* union_def: "union" flag "<identifier>" decl_template "{" union_list "}"  */
#line 486 "src/gwion.y"
                                                         {
      (yyval.union_def) = new_union_def(mpool(arg), (yyvsp[-1].union_list), (yyloc));
      (yyval.union_def)->xid = (yyvsp[-4].sym);
      (yyval.union_def)->flag = (yyvsp[-5].flag);
      if((yyvsp[-3].id_list))
        (yyval.union_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
    }
#line 2936 "src/parser.c"
    break;

  case 171: /* var_decl_list: var_decl "," var_decl_list  */
#line 496 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2942 "src/parser.c"
    break;

  case 172: /* var_decl_list: var_decl  */
#line 497 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2948 "src/parser.c"
    break;

  case 173: /* var_decl: "<identifier>"  */
#line 500 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 2954 "src/parser.c"
    break;

  case 174: /* var_decl: "<identifier>" array  */
#line 501 "src/gwion.y"
               { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 2960 "src/parser.c"
    break;

  case 175: /* arg_decl: "<identifier>"  */
#line 503 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)); }
#line 2966 "src/parser.c"
    break;

  case 176: /* arg_decl: "<identifier>" array_empty  */
#line 504 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), (yyloc)); }
#line 2972 "src/parser.c"
    break;

  case 177: /* arg_decl: "<identifier>" array_exp  */
#line 505 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2978 "src/parser.c"
    break;

  case 179: /* fptr_arg_decl: %empty  */
#line 506 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, (yyloc)); }
#line 2984 "src/parser.c"
    break;

  case 193: /* opt_exp: exp  */
#line 514 "src/gwion.y"
             { (yyval.exp) = (yyvsp[0].exp); LIST_REM((yyvsp[0].exp)) }
#line 2990 "src/parser.c"
    break;

  case 194: /* opt_exp: %empty  */
#line 514 "src/gwion.y"
                                         { (yyval.exp) = NULL; }
#line 2996 "src/parser.c"
    break;

  case 196: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 517 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc)); }
#line 3002 "src/parser.c"
    break;

  case 197: /* con_exp: log_or_exp "?:" con_exp  */
#line 519 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp), (yyloc)); }
#line 3008 "src/parser.c"
    break;

  case 199: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 521 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3014 "src/parser.c"
    break;

  case 201: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 522 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3020 "src/parser.c"
    break;

  case 203: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 523 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3026 "src/parser.c"
    break;

  case 205: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 524 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3032 "src/parser.c"
    break;

  case 207: /* and_exp: and_exp "&" eq_exp  */
#line 525 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3038 "src/parser.c"
    break;

  case 209: /* eq_exp: eq_exp eq_op rel_exp  */
#line 526 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3044 "src/parser.c"
    break;

  case 211: /* rel_exp: rel_exp rel_op shift_exp  */
#line 527 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3050 "src/parser.c"
    break;

  case 213: /* shift_exp: shift_exp shift_op add_exp  */
#line 528 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3056 "src/parser.c"
    break;

  case 215: /* add_exp: add_exp add_op mul_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3062 "src/parser.c"
    break;

  case 217: /* mul_exp: mul_exp mul_op dur_exp  */
#line 530 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3068 "src/parser.c"
    break;

  case 219: /* dur_exp: dur_exp "::" cast_exp  */
#line 531 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3074 "src/parser.c"
    break;

  case 221: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 534 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp), (yyloc)); }
#line 3080 "src/parser.c"
    break;

  case 230: /* unary_exp: unary_op unary_exp  */
#line 541 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp), (yyloc)); }
#line 3086 "src/parser.c"
    break;

  case 231: /* unary_exp: "(" OPID_E ")" unary_exp  */
#line 542 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp), (yyloc)); }
#line 3092 "src/parser.c"
    break;

  case 232: /* unary_exp: "new" type_decl_exp  */
#line 543 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl), (yyloc)); }
#line 3098 "src/parser.c"
    break;

  case 233: /* unary_exp: "spork" code_stmt  */
#line 544 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3104 "src/parser.c"
    break;

  case 234: /* unary_exp: "fork" code_stmt  */
#line 545 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt), (yyloc)); }
#line 3110 "src/parser.c"
    break;

  case 235: /* unary_exp: "$" type_decl_empty  */
#line 546 "src/gwion.y"
                        { (yyval.exp) = new_exp_td(mpool(arg), (yyvsp[0].type_decl), (yyloc)); }
#line 3116 "src/parser.c"
    break;

  case 236: /* lambda_list: "<identifier>"  */
#line 549 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, (yyloc)), NULL); }
#line 3122 "src/parser.c"
    break;

  case 237: /* lambda_list: "<identifier>" lambda_list  */
#line 550 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, (yyloc)), (yyvsp[0].arg_list)); }
#line 3128 "src/parser.c"
    break;

  case 238: /* lambda_arg: "\\" lambda_list  */
#line 551 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3134 "src/parser.c"
    break;

  case 239: /* lambda_arg: "\\"  */
#line 551 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3140 "src/parser.c"
    break;

  case 240: /* type_list: type_decl_empty  */
#line 554 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3146 "src/parser.c"
    break;

  case 241: /* type_list: type_decl_empty "," type_list  */
#line 555 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3152 "src/parser.c"
    break;

  case 242: /* call_paren: "(" exp ")"  */
#line 559 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3158 "src/parser.c"
    break;

  case 243: /* call_paren: "(" ")"  */
#line 559 "src/gwion.y"
                                                                         { (yyval.exp) = NULL; }
#line 3164 "src/parser.c"
    break;

  case 246: /* dot_exp: post_exp "." "<identifier>"  */
#line 563 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym), (yyloc));
}
#line 3177 "src/parser.c"
    break;

  case 248: /* post_exp: post_exp array_exp  */
#line 574 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub), (yyloc)); }
#line 3183 "src/parser.c"
    break;

  case 249: /* post_exp: post_exp range  */
#line 576 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range), (yyloc)); }
#line 3189 "src/parser.c"
    break;

  case 250: /* post_exp: post_exp call_template call_paren  */
#line 578 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp), (yyloc));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3196 "src/parser.c"
    break;

  case 251: /* post_exp: post_exp post_op  */
#line 581 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3202 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp OPID_E  */
#line 583 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym), (yyloc)); }
#line 3208 "src/parser.c"
    break;

  case 253: /* post_exp: dot_exp  */
#line 584 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3214 "src/parser.c"
    break;

  case 254: /* interp_exp: "<interp string>`"  */
#line 588 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3220 "src/parser.c"
    break;

  case 255: /* interp_exp: "<interp string>" interp_exp  */
#line 589 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), (yyloc)); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3226 "src/parser.c"
    break;

  case 256: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 590 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); LIST_REM((yyvsp[-2].exp)) }
#line 3232 "src/parser.c"
    break;

  case 257: /* interp: "`" interp_exp  */
#line 592 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3238 "src/parser.c"
    break;

  case 258: /* interp: interp "`" interp_exp  */
#line 593 "src/gwion.y"
                                 {
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos.last = (yyvsp[0].exp)->pos.last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  (yyvsp[-2].exp)->next = (yyvsp[0].exp);
}
#line 3253 "src/parser.c"
    break;

  case 259: /* typeof_exp: "typeof" "(" exp ")"  */
#line 604 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM((yyvsp[-1].exp)) }
#line 3259 "src/parser.c"
    break;

  case 260: /* prim_exp: "<identifier>"  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), (yyloc)); }
#line 3265 "src/parser.c"
    break;

  case 261: /* prim_exp: "<integer>"  */
#line 608 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), (yyloc)); }
#line 3271 "src/parser.c"
    break;

  case 262: /* prim_exp: FLOATT  */
#line 609 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), (yyloc)); }
#line 3277 "src/parser.c"
    break;

  case 263: /* prim_exp: interp  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp), (yyloc)); }
#line 3283 "src/parser.c"
    break;

  case 264: /* prim_exp: "<litteral string>"  */
#line 611 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3289 "src/parser.c"
    break;

  case 265: /* prim_exp: "<litteral char>"  */
#line 612 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), (yyloc)); }
#line 3295 "src/parser.c"
    break;

  case 266: /* prim_exp: array  */
#line 613 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), (yyloc)); }
#line 3301 "src/parser.c"
    break;

  case 267: /* prim_exp: range  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), (yyloc)); }
#line 3307 "src/parser.c"
    break;

  case 268: /* prim_exp: "<<<" exp ">>>"  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp), (yyloc)); LIST_REM(2) }
#line 3313 "src/parser.c"
    break;

  case 269: /* prim_exp: "(" exp ")"  */
#line 616 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp); LIST_REM((yyvsp[-1].exp)) }
#line 3319 "src/parser.c"
    break;

  case 270: /* prim_exp: lambda_arg code_stmt  */
#line 617 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda( mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt), (yyloc)); }
#line 3325 "src/parser.c"
    break;

  case 271: /* prim_exp: "(" ")"  */
#line 618 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     (yyloc)); }
#line 3331 "src/parser.c"
    break;

  case 272: /* prim_exp: typeof_exp  */
#line 619 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3337 "src/parser.c"
    break;


#line 3341 "src/parser.c"

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

#line 621 "src/gwion.y"

