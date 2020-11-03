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
  YYSYMBOL_ID = 55,                        /* "<identifier>"  */
  YYSYMBOL_STRING_LIT = 56,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 57,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 58,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 59,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 60,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 61,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 62,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 63,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 64,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 65,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 66,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 67,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 68,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 69,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 70,                  /* "#if"  */
  YYSYMBOL_PP_NL = 71,                     /* "\n"  */
  YYSYMBOL_PP_REQUIRE = 72,                /* "require"  */
  YYSYMBOL_73_operator_id_ = 73,           /* "@<operator id>"  */
  YYSYMBOL_74_operator_id_ = 74,           /* "$<operator id>"  */
  YYSYMBOL_PLUS = 75,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 76,                  /* "++"  */
  YYSYMBOL_MINUS = 77,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 78,                /* "--"  */
  YYSYMBOL_TIMES = 79,                     /* "*"  */
  YYSYMBOL_DIVIDE = 80,                    /* "/"  */
  YYSYMBOL_PERCENT = 81,                   /* "%"  */
  YYSYMBOL_DOLLAR = 82,                    /* "$"  */
  YYSYMBOL_QUESTION = 83,                  /* "?"  */
  YYSYMBOL_COLON = 84,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 85,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 86,             /* "?:"  */
  YYSYMBOL_NEW = 87,                       /* "new"  */
  YYSYMBOL_SPORK = 88,                     /* "spork"  */
  YYSYMBOL_FORK = 89,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 90,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 91,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 92,                    /* ">>>"  */
  YYSYMBOL_AND = 93,                       /* "&&"  */
  YYSYMBOL_EQ = 94,                        /* "=="  */
  YYSYMBOL_GE = 95,                        /* ">="  */
  YYSYMBOL_GT = 96,                        /* ">"  */
  YYSYMBOL_LE = 97,                        /* "<="  */
  YYSYMBOL_LT = 98,                        /* "<"  */
  YYSYMBOL_NEQ = 99,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 100,               /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 101,              /* ">>"  */
  YYSYMBOL_S_AND = 102,                    /* "&"  */
  YYSYMBOL_S_OR = 103,                     /* "|"  */
  YYSYMBOL_S_XOR = 104,                    /* "^"  */
  YYSYMBOL_OR = 105,                       /* "||"  */
  YYSYMBOL_TMPL = 106,                     /* ":["  */
  YYSYMBOL_TILDA = 107,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 108,              /* "!"  */
  YYSYMBOL_DYNOP = 109,                    /* "<dynamic_operator>"  */
  YYSYMBOL_UMINUS = 110,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 111,                   /* UTIMES  */
  YYSYMBOL_112_ = 112,                     /* "="  */
  YYSYMBOL_YYACCEPT = 113,                 /* $accept  */
  YYSYMBOL_prg = 114,                      /* prg  */
  YYSYMBOL_ast = 115,                      /* ast  */
  YYSYMBOL_section = 116,                  /* section  */
  YYSYMBOL_class_type = 117,               /* class_type  */
  YYSYMBOL_class_def = 118,                /* class_def  */
  YYSYMBOL_class_ext = 119,                /* class_ext  */
  YYSYMBOL_class_body = 120,               /* class_body  */
  YYSYMBOL_id_list = 121,                  /* id_list  */
  YYSYMBOL_stmt_list = 122,                /* stmt_list  */
  YYSYMBOL_fptr_base = 123,                /* fptr_base  */
  YYSYMBOL_func_base = 124,                /* func_base  */
  YYSYMBOL_fptr_def = 125,                 /* fptr_def  */
  YYSYMBOL_type_def = 126,                 /* type_def  */
  YYSYMBOL_type_decl_array = 127,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 128,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 129,          /* type_decl_empty  */
  YYSYMBOL_arg = 130,                      /* arg  */
  YYSYMBOL_arg_list = 131,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 132,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 133,                /* fptr_list  */
  YYSYMBOL_code_stmt = 134,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 135,                  /* stmt_pp  */
  YYSYMBOL_stmt = 136,                     /* stmt  */
  YYSYMBOL_id = 137,                       /* id  */
  YYSYMBOL_opt_id = 138,                   /* opt_id  */
  YYSYMBOL_enum_def = 139,                 /* enum_def  */
  YYSYMBOL_label_stmt = 140,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 141,                /* goto_stmt  */
  YYSYMBOL_when_exp = 142,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 143,          /* match_case_stmt  */
  YYSYMBOL_match_list = 144,               /* match_list  */
  YYSYMBOL_where_stmt = 145,               /* where_stmt  */
  YYSYMBOL_match_stmt = 146,               /* match_stmt  */
  YYSYMBOL_flow = 147,                     /* flow  */
  YYSYMBOL_loop_stmt = 148,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 149,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 150,           /* selection_stmt  */
  YYSYMBOL_breaks = 151,                   /* breaks  */
  YYSYMBOL_jump_stmt = 152,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 153,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 154,                 /* exp_stmt  */
  YYSYMBOL_exp = 155,                      /* exp  */
  YYSYMBOL_binary_exp = 156,               /* binary_exp  */
  YYSYMBOL_call_template = 157,            /* call_template  */
  YYSYMBOL_op = 158,                       /* op  */
  YYSYMBOL_array_exp = 159,                /* array_exp  */
  YYSYMBOL_array_empty = 160,              /* array_empty  */
  YYSYMBOL_range = 161,                    /* range  */
  YYSYMBOL_array = 162,                    /* array  */
  YYSYMBOL_decl_exp = 163,                 /* decl_exp  */
  YYSYMBOL_union_exp = 164,                /* union_exp  */
  YYSYMBOL_func_args = 165,                /* func_args  */
  YYSYMBOL_fptr_args = 166,                /* fptr_args  */
  YYSYMBOL_arg_type = 167,                 /* arg_type  */
  YYSYMBOL_decl_template = 168,            /* decl_template  */
  YYSYMBOL_storage_flag = 169,             /* storage_flag  */
  YYSYMBOL_access_flag = 170,              /* access_flag  */
  YYSYMBOL_flag = 171,                     /* flag  */
  YYSYMBOL_final = 172,                    /* final  */
  YYSYMBOL_modifier = 173,                 /* modifier  */
  YYSYMBOL_func_def_base = 174,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 175,            /* abstract_fdef  */
  YYSYMBOL_op_op = 176,                    /* op_op  */
  YYSYMBOL_op_base = 177,                  /* op_base  */
  YYSYMBOL_op_def = 178,                   /* op_def  */
  YYSYMBOL_func_def = 179,                 /* func_def  */
  YYSYMBOL_ref = 180,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 181,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 182,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 183,         /* type_decl_noflag  */
  YYSYMBOL_type_decl = 184,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 185,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 186,          /* type_decl_flag2  */
  YYSYMBOL_decl_list = 187,                /* decl_list  */
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
#define YYFINAL  179
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1556

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  456

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   367


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
     105,   106,   107,   108,   109,   110,   111,   112
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   144,   144,   145,   148,   149,   153,   154,   155,   156,
     157,   158,   159,   162,   162,   164,   175,   175,   177,   177,
     179,   179,   181,   181,   183,   186,   189,   195,   202,   202,
     204,   208,   213,   214,   216,   217,   226,   227,   227,   234,
     235,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   265,   267,   267,   270,   273,   275,   277,   277,
     280,   288,   289,   291,   291,   293,   301,   302,   305,   307,
     309,   311,   313,   315,   319,   322,   324,   329,   330,   331,
     334,   335,   338,   338,   341,   342,   345,   345,   348,   349,
     350,   352,   352,   354,   354,   354,   357,   358,   359,   363,
     364,   365,   369,   370,   371,   374,   374,   376,   377,   379,
     381,   381,   382,   382,   383,   383,   385,   385,   387,   388,
     391,   392,   395,   396,   397,   398,   401,   401,   403,   403,
     406,   413,   422,   422,   422,   422,   422,   424,   426,   428,
     433,   438,   441,   441,   441,   443,   443,   446,   450,   451,
     455,   456,   459,   459,   462,   463,   464,   465,   466,   467,
     468,   470,   470,   472,   473,   476,   496,   497,   500,   501,
     503,   504,   505,   506,   506,   508,   508,   509,   509,   509,
     509,   510,   510,   511,   511,   512,   512,   512,   514,   514,
     515,   516,   518,   521,   521,   522,   522,   523,   523,   524,
     524,   525,   525,   526,   526,   527,   527,   528,   528,   529,
     529,   530,   530,   531,   531,   533,   533,   536,   536,   536,
     537,   537,   537,   537,   540,   541,   542,   543,   544,   545,
     548,   549,   550,   550,   553,   554,   557,   557,   559,   559,
     561,   569,   570,   572,   574,   577,   579,   581,   585,   586,
     587,   589,   590,   601,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616
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
  "\"<identifier>\"", "\"<litteral string>\"", "\"<litteral char>\"",
  "\"`\"", "\"<interp string>\"", "INTERP_EXP", "\"<interp string>`\"",
  "\"<comment>\"", "\"#include\"", "\"#define\"", "\"#pragma\"",
  "\"#undef\"", "\"#ifdef\"", "\"#ifndef\"", "\"#else\"", "\"#if\"",
  "\"\\n\"", "\"require\"", "\"@<operator id>\"", "\"$<operator id>\"",
  "\"+\"", "\"++\"", "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"",
  "\"?\"", "\":\"", "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"",
  "\"typeof\"", "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"",
  "\">\"", "\"<=\"", "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"",
  "\"|\"", "\"^\"", "\"||\"", "\":[\"", "\"~\"", "\"!\"",
  "\"<dynamic_operator>\"", "UMINUS", "UTIMES", "\"=\"", "$accept", "prg",
  "ast", "section", "class_type", "class_def", "class_ext", "class_body",
  "id_list", "stmt_list", "fptr_base", "func_base", "fptr_def", "type_def",
  "type_decl_array", "type_decl_exp", "type_decl_empty", "arg", "arg_list",
  "fptr_arg", "fptr_list", "code_stmt", "stmt_pp", "stmt", "id", "opt_id",
  "enum_def", "label_stmt", "goto_stmt", "when_exp", "match_case_stmt",
  "match_list", "where_stmt", "match_stmt", "flow", "loop_stmt",
  "varloop_stmt", "selection_stmt", "breaks", "jump_stmt", "_exp_stmt",
  "exp_stmt", "exp", "binary_exp", "call_template", "op", "array_exp",
  "array_empty", "range", "array", "decl_exp", "union_exp", "func_args",
  "fptr_args", "arg_type", "decl_template", "storage_flag", "access_flag",
  "flag", "final", "modifier", "func_def_base", "abstract_fdef", "op_op",
  "op_base", "op_def", "func_def", "ref", "type_decl_tmpl",
  "type_decl_next", "type_decl_noflag", "type_decl", "type_decl_flag",
  "type_decl_flag2", "decl_list", "union_def", "var_decl_list", "var_decl",
  "arg_decl", "fptr_arg_decl", "eq_op", "rel_op", "shift_op", "add_op",
  "mul_op", "opt_exp", "con_exp", "log_or_exp", "log_and_exp",
  "inc_or_exp", "exc_or_exp", "and_exp", "eq_exp", "rel_exp", "shift_exp",
  "add_exp", "mul_exp", "dur_exp", "cast_exp", "unary_op", "unary_exp",
  "lambda_list", "lambda_arg", "type_list", "call_paren", "post_op",
  "dot_exp", "post_exp", "interp_exp", "interp", "typeof_exp", "prim_exp", YY_NULLPTR
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
     365,   366,   367
};
#endif

#define YYPACT_NINF (-320)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     517,    41,   870,   928,   623,   174,  -320,    59,  -320,   720,
    -320,    68,    71,    75,    29,  1392,   174,  1392,  -320,  -320,
    -320,  -320,   122,   174,   174,   174,    67,  1392,    29,  -320,
      37,  -320,  -320,  -320,  -320,  -320,   986,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,    48,    86,    86,    96,  1392,  -320,  -320,    98,
    -320,   517,   174,  -320,  -320,  -320,  -320,  -320,  -320,   720,
      39,  -320,  -320,  -320,  -320,   102,  -320,  -320,  -320,   130,
    -320,  -320,  -320,   132,    30,  -320,   133,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,   174,  -320,  -320,   -23,    16,
      55,    60,    61,   -32,   121,   -45,    27,    11,    83,    88,
    1448,  -320,    86,  -320,  -320,    35,   113,  -320,  -320,  -320,
    -320,   166,  -320,   173,  -320,  1392,    43,  -320,   175,  -320,
    -320,  -320,  -320,   179,  -320,    93,   106,  1392,    53,  1392,
     809,   136,   186,   182,    29,   191,  -320,  -320,  -320,   374,
      91,    86,   164,  -320,  -320,   197,     4,    48,  -320,    48,
     209,    48,    29,  -320,   169,    22,    29,  -320,  -320,   986,
    -320,   161,  -320,  -320,  -320,  -320,  -320,  1392,   131,  -320,
    -320,   115,  -320,  -320,  1392,  -320,  -320,  1392,  1392,  -320,
    -320,  -320,  1392,  1044,  -320,     4,  1392,  1448,  1448,  1448,
    1448,  1448,  1448,  -320,  -320,  1448,  -320,  -320,  -320,  -320,
    1448,  -320,  -320,  1448,  -320,  -320,  1448,  -320,  -320,  -320,
    1448,  1448,    48,  -320,  -320,  1102,    29,  -320,    48,   219,
    -320,  -320,  -320,   986,  1448,  -320,   217,   197,  1160,  -320,
      48,    32,  -320,    48,  -320,    48,   221,  1392,   225,   809,
    -320,    29,  -320,   210,  -320,   223,  -320,   179,  -320,   230,
    -320,  -320,  -320,  -320,   232,  -320,  -320,    29,  1218,  -320,
    -320,   234,    29,    48,    32,    29,   135,  -320,  -320,  -320,
    -320,   986,   240,  -320,  -320,  -320,    29,   242,  -320,  -320,
    -320,  -320,   241,    29,  -320,   168,  -320,    16,    55,    60,
      61,   -32,   121,   -45,    27,    11,    83,    88,  -320,  -320,
     250,   247,  1276,  -320,  -320,  -320,  -320,  -320,   133,  -320,
     249,  -320,   254,    29,  -320,   255,    86,    29,    29,   720,
     257,   720,  1334,   178,  1392,   210,   253,    29,   258,    48,
      48,  -320,    48,   135,   261,  -320,    29,   263,   135,    29,
     259,  -320,  -320,   135,   720,   197,  -320,   265,  1448,    48,
    -320,  -320,   264,  -320,    48,   197,   194,  -320,  -320,   135,
     135,   267,  -320,  -320,   720,   277,  1392,   268,  -320,   260,
     284,   283,  -320,   291,   290,   292,   296,    48,  -320,  -320,
    -320,  -320,   293,     4,   262,  -320,  -320,    29,  -320,  -320,
    -320,  -320,  -320,   133,  1392,   209,  -320,   720,  -320,   720,
      23,  1392,   218,   720,  -320,  -320,    29,    48,    86,  -320,
    -320,  -320,  -320,   300,    29,   295,    48,   297,  -320,   -13,
      32,  -320,  -320,   720,  -320,   720,  -320,  -320,   301,  -320,
       4,  -320,    29,  -320,   517,   305,  -320,  -320,  -320,  -320,
     306,  -320,   302,  -320,  -320,  -320
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    93,     0,     0,     0,   135,   171,     0,    76,     0,
      77,     0,     0,     0,     0,     0,   135,    87,    88,    89,
      13,    14,     0,   135,   135,   135,   165,     0,   243,   164,
     166,   265,   266,    62,   268,   269,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   248,   227,
     249,   228,     0,   231,   232,     0,     0,   233,   230,     0,
       2,     4,   135,     8,     6,    11,    12,    55,    60,    22,
     264,     9,    56,    57,    58,     0,    53,    61,    54,     0,
      59,    95,    52,     0,    96,   115,   116,   271,   270,    98,
     152,   153,   154,     7,   172,   135,    10,   117,   200,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   221,   223,
       0,   225,     0,   229,   257,   234,   267,   276,   251,    92,
     275,     0,   264,     0,   109,     0,     0,    39,     0,   128,
     129,   130,   131,     0,   133,   132,   137,     0,     0,     0,
       0,   155,     0,     0,    64,     0,   231,   232,    31,     0,
     102,     0,   158,   160,   162,    28,     0,     0,   161,     0,
       0,     0,    64,   168,   169,     0,   240,   242,   167,     0,
     258,     0,   261,    30,   237,   238,   239,     0,     0,     1,
       5,   137,    23,    66,     0,    91,    94,     0,     0,   103,
     104,   105,     0,     0,   111,     0,   199,     0,     0,     0,
       0,     0,     0,   185,   186,     0,   190,   188,   189,   187,
       0,   191,   192,     0,   193,   194,     0,   195,   196,   197,
       0,     0,     0,   235,   274,     0,     0,   256,     0,     0,
     252,   253,   255,     0,     0,   273,     0,   106,     0,    40,
     121,     0,   134,     0,   136,     0,     0,     0,     0,     0,
     156,     0,    67,     0,    63,     0,    90,     0,   142,     0,
     144,   143,   146,   145,     0,   157,   151,     0,     0,    29,
     163,     0,     0,   123,     0,     0,   127,   170,    84,   241,
     259,     0,     0,   272,   138,   139,     0,     0,    97,    99,
     100,   110,     0,     0,   198,     0,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   250,
     244,     0,     0,   254,   262,   236,   114,   107,   108,   113,
       0,    34,   120,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,   159,     0,   127,    37,   122,   184,     0,   127,     0,
       0,   260,   263,   127,     0,   178,   118,   176,     0,     0,
     101,   247,     0,   112,     0,   180,    33,   124,   140,   127,
     127,    85,    79,    83,     0,     0,     0,    69,    72,    74,
       0,    20,   150,     0,     0,     0,     0,     0,   183,    36,
      26,    24,     0,     0,    17,    78,   179,     0,   201,   245,
     246,    35,   182,   181,     0,     0,    25,     0,    80,     0,
       0,     0,     0,     0,    75,    65,     0,     0,     0,   149,
      27,    38,   126,     0,     0,     0,     0,     0,   177,    32,
       0,    86,    81,     0,    68,     0,    73,    21,     0,   148,
     173,   119,    64,    16,    19,     0,    82,    70,   147,   174,
       0,    18,     0,   141,   175,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,   -59,  -320,  -320,  -320,  -320,  -320,  -319,    -3,
    -320,  -320,  -320,  -320,   -47,  -116,    -7,  -307,  -320,  -320,
     -76,   -37,  -320,     1,     0,  -154,  -320,  -320,  -320,  -320,
    -320,   -22,  -320,  -320,   176,  -320,  -320,  -320,  -320,  -320,
     314,  -113,     9,   -24,   167,   170,   -68,  -216,   201,  -142,
    -134,  -320,    63,   -83,  -254,  -188,   189,  -320,    25,   144,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,    66,
    -149,  -234,    31,  -320,  -114,  -320,   -63,  -320,  -309,  -320,
    -320,   187,   195,   198,   199,  -320,  -178,  -320,   140,   151,
     153,   155,   156,   152,   150,   148,   146,   145,   157,   345,
     -87,   203,  -320,    13,  -320,   -72,  -320,  -320,  -144,  -320,
     123,  -320
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,    61,    62,    63,   427,   452,   380,    64,
     160,   133,    65,    66,   148,   174,   310,   321,   322,   344,
     345,    67,    68,    69,   122,   255,    71,    72,    73,   412,
     335,   336,   414,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   229,   192,    85,    86,    87,    88,
      89,   423,   241,   274,   326,   350,   134,   135,   136,   245,
     286,    90,    91,   259,   151,    92,    93,   251,   152,   153,
     154,   155,    94,    95,   425,    96,   356,   357,   366,   389,
     205,   210,   213,   216,   220,   295,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   167,   112,   311,   313,   113,   114,   115,   172,   116,
     117,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,   128,   180,   165,    70,   173,   323,   270,   276,    70,
     138,   123,   126,   269,   142,   149,   175,   176,   194,   296,
     347,   318,   150,   223,   143,   280,   145,   249,   166,   433,
     392,     4,   383,   384,   187,   385,   188,   388,   324,   346,
    -102,   144,   225,   232,     1,   171,   293,   230,   159,   161,
     162,   237,   150,   156,   289,   211,   212,   401,   290,    33,
     196,    70,   203,   197,   137,   178,   182,   204,     8,    70,
      10,   188,   188,   139,   226,   224,   140,   264,   325,   188,
     141,   189,   198,   156,    33,   227,   190,   181,   168,   314,
     217,   218,   219,    26,    55,     4,   191,   437,   179,    29,
      30,   177,   214,    33,   215,   323,   323,   184,   323,   199,
     438,    48,   272,    50,   266,   441,   189,   189,   163,   164,
     195,   190,   190,   183,   189,   129,   130,   238,   278,   190,
     323,   191,   191,   185,   236,   186,   332,   351,    55,   191,
     193,   228,   243,   244,   254,   158,   246,   315,   248,   403,
     271,   284,   244,   346,   275,   386,   150,   150,   200,   150,
     391,   150,   254,   202,   201,   394,   166,    26,   221,   317,
     222,   233,   234,    29,    30,   158,   445,    33,   171,   235,
     398,   405,   406,   323,   240,   239,   282,   250,   156,   252,
     156,   253,   156,   287,   256,   150,   288,   228,    48,    49,
      50,    51,   292,   267,   268,   294,   129,   130,   131,   132,
     146,   147,    55,   396,   273,   308,   206,   207,   208,   209,
     277,   281,   150,   283,   312,   316,   309,   329,   150,    57,
      58,   331,   337,   334,   126,   339,   327,   340,   328,   342,
     150,   349,   171,   150,   424,   150,   352,   320,   354,   237,
     194,   333,   358,   156,   359,   360,   330,   363,   364,   156,
     372,   367,   376,   379,   382,   387,   390,   150,   393,   397,
     400,   156,   343,   150,   156,   348,   156,   292,   404,   158,
     158,   407,   158,   409,   158,   413,   353,   416,   450,   368,
     171,   424,   411,   355,   415,   417,   418,   402,   419,   420,
     426,   422,   435,   440,   156,   442,   444,   448,   453,   454,
     443,   421,   455,   378,   247,   119,   231,   265,   158,   258,
     338,   362,   430,   365,   242,   285,   449,   369,   370,    70,
     371,    70,   373,   341,   428,   194,   260,   381,   297,   150,
     150,   375,   150,   377,   261,   158,   365,   262,   263,   381,
     298,   158,   410,   299,    70,   395,   300,   302,   301,   150,
     303,   304,   305,   158,   150,   306,   158,   157,   158,   279,
     156,   156,   399,   156,    70,   408,     0,     0,   307,   173,
     429,   439,     0,     0,     0,   451,     0,   150,     0,     0,
     156,     0,     0,   150,     0,   156,   158,   355,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,   431,    70,
     432,     0,     0,    70,   436,     0,   381,   150,   156,     0,
     434,     0,     0,   257,   365,     0,   150,     0,     0,     0,
       0,     0,   447,    70,   446,    70,     0,     0,     0,     0,
     150,     0,   254,     0,    70,     0,     0,     0,   156,   214,
      48,   215,    50,   217,   218,   219,     0,   156,     0,     0,
       0,     0,   158,   158,     0,   158,     0,     0,   189,   206,
     207,   208,   209,   190,   211,   212,     0,     0,     0,     0,
       0,     0,   158,   191,     0,     0,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     158,     0,     0,     0,     0,     0,   158,     0,     0,     0,
       1,     0,     2,     0,     3,     0,     4,     0,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
     158,     0,     0,    16,    17,    18,    19,    20,    21,   158,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
       0,    25,    26,   158,    27,    28,     0,     0,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,     1,     0,     2,     0,
       3,     0,     4,   127,     0,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,     0,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,    28,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     0,     3,     0,     4,
      57,    58,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     1,     0,     2,     0,     3,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    28,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     2,   120,     3,     0,     0,
       0,     0,     6,     0,     0,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    57,    58,    28,     0,
     121,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     2,     0,     3,   124,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    57,    58,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,   125,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    57,    58,    29,    30,    31,
      32,    33,    34,    35,    36,   169,     0,   170,     0,     2,
       0,     3,   291,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    57,    58,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    57,    58,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     2,     0,     3,   319,     0,
       0,     0,     6,     0,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,   125,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    57,
      58,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     2,     0,     3,   124,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    57,    58,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     2,   361,     3,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    57,    58,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     2,
     374,     3,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    57,    58,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      28,    57,    58,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    57,
      58,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58
};

static const yytype_int16 yycheck[] =
{
       0,     4,    61,    27,     4,    52,   240,   156,   162,     9,
       9,     2,     3,   155,    14,    22,    53,    54,    86,   197,
     274,   237,    22,   110,    15,   169,    17,   140,    28,     6,
     349,     9,   339,   340,     4,   342,    49,   346,     6,   273,
       5,    16,     7,   115,     3,    36,   195,   115,    23,    24,
      25,     8,    52,    22,   188,   100,   101,   364,   192,    55,
      83,    61,    94,    86,     5,    56,    69,    99,    15,    69,
      17,    49,    49,     5,    39,   112,     5,   149,    46,    49,
       5,    94,   105,    52,    55,    50,    99,    62,    51,   233,
      79,    80,    81,    45,    90,     9,   109,   416,     0,    51,
      52,     5,    75,    55,    77,   339,   340,     5,   342,    93,
     417,    76,   159,    78,   151,   424,    94,    94,    51,    52,
      95,    99,    99,    84,    94,    32,    33,    84,   165,    99,
     364,   109,   109,     3,   125,     3,   249,   281,    90,   109,
       7,   106,    36,    37,   144,    22,   137,   234,   139,   365,
     157,    36,    37,   387,   161,   343,   156,   157,   103,   159,
     348,   161,   162,   102,   104,   353,   166,    45,    85,   237,
      82,    58,     6,    51,    52,    52,   430,    55,   169,     6,
     358,   369,   370,   417,     5,    10,   177,    51,   157,     3,
     159,     9,   161,   184,     3,   195,   187,   106,    76,    77,
      78,    79,   193,    39,     7,   196,    32,    33,    34,    35,
      88,    89,    90,   355,     5,   222,    95,    96,    97,    98,
      51,    60,   222,    92,     5,     8,   226,     6,   228,   107,
     108,     6,     9,    23,   225,     5,   243,     5,   245,     5,
     240,   106,   233,   243,   393,   245,     6,   238,     6,     8,
     318,   251,    84,   222,     4,     8,   247,     8,     4,   228,
       3,     6,    84,    10,     6,     4,     3,   267,     9,     4,
       6,   240,   272,   273,   243,   275,   245,   268,    84,   156,
     157,    14,   159,     6,   161,    25,   286,     4,   442,   326,
     281,   440,    24,   293,    10,     4,     6,   365,     6,     3,
      38,     8,    84,     3,   273,    10,     9,     6,     3,     3,
     426,   387,    10,   335,   138,     1,   115,   150,   195,   149,
     257,   312,   405,   323,   135,   181,   440,   327,   328,   329,
     329,   331,   331,   267,   397,   403,   149,   337,   198,   339,
     340,   332,   342,   334,   149,   222,   346,   149,   149,   349,
     199,   228,   376,   200,   354,   354,   201,   205,   202,   359,
     210,   213,   216,   240,   364,   220,   243,    22,   245,   166,
     339,   340,   359,   342,   374,   374,    -1,    -1,   221,   426,
     404,   418,    -1,    -1,    -1,   444,    -1,   387,    -1,    -1,
     359,    -1,    -1,   393,    -1,   364,   273,   397,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   407,   407,   409,
     409,    -1,    -1,   413,   413,    -1,   416,   417,   387,    -1,
     411,    -1,    -1,    49,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,   435,   433,   433,   435,    -1,    -1,    -1,    -1,
     440,    -1,   442,    -1,   444,    -1,    -1,    -1,   417,    75,
      76,    77,    78,    79,    80,    81,    -1,   426,    -1,    -1,
      -1,    -1,   339,   340,    -1,   342,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   359,   109,    -1,    -1,    -1,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     387,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,
       3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
     417,    -1,    -1,    26,    27,    28,    29,    30,    31,   426,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      -1,    44,    45,   440,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,   108,     3,    -1,     5,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,     9,
     107,   108,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,   107,   108,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   107,   108,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   107,   108,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   107,   108,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,   107,   108,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   107,
     108,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   107,   108,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   107,   108,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   107,   108,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,   107,   108,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,   107,
     108,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    40,    41,    42,    44,    45,    47,    48,    51,
      52,    53,    54,    55,    56,    57,    58,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    76,    77,
      78,    79,    87,    88,    89,    90,    91,   107,   108,   114,
     115,   116,   117,   118,   122,   125,   126,   134,   135,   136,
     137,   139,   140,   141,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   159,   160,   161,   162,   163,
     174,   175,   178,   179,   185,   186,   188,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   215,   218,   219,   220,   222,   223,   224,   153,
       6,    50,   137,   155,     8,    84,   155,    10,   122,    32,
      33,    34,    35,   124,   169,   170,   171,     5,   136,     5,
       5,     5,   137,   155,   171,   155,    88,    89,   127,   129,
     137,   177,   181,   182,   183,   184,   185,   212,   223,   171,
     123,   171,   171,    51,    52,   156,   137,   214,    51,    59,
      61,   155,   221,   127,   128,   134,   134,     5,   155,     0,
     115,   171,   122,    84,     5,     3,     3,     4,    49,    94,
      99,   109,   158,     7,   159,   171,    83,    86,   105,    93,
     103,   104,   102,    94,    99,   193,    95,    96,    97,    98,
     194,   100,   101,   195,    75,    77,   196,    79,    80,    81,
     197,    85,    82,   213,   134,     7,    39,    50,   106,   157,
     159,   161,   218,    58,     6,     6,   155,     8,    84,    10,
       5,   165,   169,    36,    37,   172,   155,   147,   155,   154,
      51,   180,     3,     9,   137,   138,     3,    49,   158,   176,
     194,   195,   196,   197,   218,   157,   134,    39,     7,   162,
     183,   129,   127,     5,   166,   129,   138,    51,   134,   214,
     221,    60,   155,    92,    36,   172,   173,   155,   155,   163,
     163,     8,   155,   183,   155,   198,   199,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   129,   137,
     129,   216,     5,   217,   221,   213,     8,   159,   160,     8,
     155,   130,   131,   184,     6,    46,   167,   129,   129,     6,
     155,     6,   154,   137,    23,   143,   144,     9,   165,     5,
       5,   182,     5,   137,   132,   133,   184,   167,   137,   106,
     168,   221,     6,   137,     6,   137,   189,   190,    84,     4,
       8,     6,   155,     8,     4,   137,   191,     6,   134,   137,
     137,   136,     3,   136,     6,   155,    84,   155,   144,    10,
     121,   137,     6,   130,   130,   130,   168,     4,   191,   192,
       3,   168,   121,     9,   168,   136,   162,     4,   199,   216,
       6,   130,   159,   160,    84,   168,   168,    14,   136,     6,
     156,    24,   142,    25,   145,    10,     4,     4,     6,     6,
       3,   133,     8,   164,   183,   187,    38,   119,   189,   156,
     166,   136,   136,     6,   155,    84,   136,   121,   130,   134,
       3,   191,    10,   128,     9,   167,   136,   122,     6,   187,
     138,   115,   120,     3,     3,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   125,   126,   127,   127,
     128,   129,   130,   130,   131,   131,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   138,   138,   139,   140,   141,   142,   142,
     143,   144,   144,   145,   145,   146,   147,   147,   148,   148,
     148,   148,   148,   148,   149,   150,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   157,   157,   158,   158,   158,   159,   159,   159,   160,
     160,   160,   161,   161,   161,   162,   162,   163,   163,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   175,   176,   176,   176,   176,   176,   177,   177,   177,
     177,   178,   179,   179,   179,   180,   180,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   185,   185,   185,   185,
     185,   186,   186,   187,   187,   188,   189,   189,   190,   190,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   194,
     194,   195,   195,   196,   196,   197,   197,   197,   198,   198,
     199,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   212,   212,
     212,   212,   212,   212,   213,   213,   213,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     219,   220,   220,   220,   220,   220,   220,   220,   221,   221,
     221,   222,   222,   223,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224
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
       3,     3,     0,     1,     1,     1,     3,     4,     4,     2,
       3,     2,     5,     4,     4,     1,     1,     1,     4,     2,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     0,     1,     1,
       5,     9,     1,     1,     1,     1,     1,     7,     6,     5,
       4,     3,     1,     1,     1,     0,     1,     2,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       3,     1,     1,     2,     3,     9,     1,     3,     1,     2,
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
#line 141 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1718 "src/parser.c"
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
#line 144 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2019 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 145 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2025 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 148 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2031 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 149 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2037 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2043 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2049 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2055 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 156 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2061 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 157 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2067 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 158 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2073 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 159 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2079 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 162 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2085 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 162 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2091 "src/parser.c"
    break;

  case 15: /* class_def: class_type flag modifier id decl_template class_ext "{" class_body "}"  */
#line 165 "src/gwion.y"
    {
      if((yyvsp[-8].cflag) == cflag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) = new_class_def(mpool(arg), (yyvsp[-8].cflag) | (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
      if((yyvsp[-8].cflag))
        (yyval.class_def)->cflag |= cflag_struct;
  }
#line 2105 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 175 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2111 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 175 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2117 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 177 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2123 "src/parser.c"
    break;

  case 20: /* id_list: id  */
#line 179 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2129 "src/parser.c"
    break;

  case 21: /* id_list: id "," id_list  */
#line 179 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2135 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 181 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2141 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 181 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2147 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty id decl_template  */
#line 183 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2154 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty id decl_template  */
#line 186 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2161 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 189 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2171 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array id decl_template ";"  */
#line 195 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2182 "src/parser.c"
    break;

  case 29: /* type_decl_array: type_decl array  */
#line 202 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2188 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 204 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2196 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 208 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2204 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 213 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2210 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 214 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2216 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 216 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2222 "src/parser.c"
    break;

  case 35: /* arg_list: arg_list "," arg  */
#line 217 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2235 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 226 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2241 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 227 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2247 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_arg "," fptr_list  */
#line 227 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2257 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 234 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2263 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 235 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2269 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2275 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 240 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2281 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 241 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2287 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 242 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2293 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 243 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2299 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 244 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2305 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 245 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2311 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 246 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2317 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 247 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2323 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 248 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2329 "src/parser.c"
    break;

  case 51: /* stmt_pp: "require"  */
#line 249 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_require, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2335 "src/parser.c"
    break;

  case 62: /* id: "<identifier>"  */
#line 265 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2341 "src/parser.c"
    break;

  case 64: /* opt_id: %empty  */
#line 267 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2347 "src/parser.c"
    break;

  case 65: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 270 "src/gwion.y"
                                              { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2354 "src/parser.c"
    break;

  case 66: /* label_stmt: id ":"  */
#line 273 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2360 "src/parser.c"
    break;

  case 67: /* goto_stmt: "goto" id ";"  */
#line 275 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2366 "src/parser.c"
    break;

  case 68: /* when_exp: "when" exp  */
#line 277 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2372 "src/parser.c"
    break;

  case 69: /* when_exp: %empty  */
#line 277 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2378 "src/parser.c"
    break;

  case 70: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 280 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2389 "src/parser.c"
    break;

  case 71: /* match_list: match_case_stmt  */
#line 288 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2395 "src/parser.c"
    break;

  case 72: /* match_list: match_case_stmt match_list  */
#line 289 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2401 "src/parser.c"
    break;

  case 73: /* where_stmt: "where" stmt  */
#line 291 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2407 "src/parser.c"
    break;

  case 74: /* where_stmt: %empty  */
#line 291 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2413 "src/parser.c"
    break;

  case 75: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 293 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2424 "src/parser.c"
    break;

  case 76: /* flow: "while"  */
#line 301 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2430 "src/parser.c"
    break;

  case 77: /* flow: "until"  */
#line 302 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2436 "src/parser.c"
    break;

  case 78: /* loop_stmt: flow "(" exp ")" stmt  */
#line 306 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2442 "src/parser.c"
    break;

  case 79: /* loop_stmt: "do" stmt flow exp ";"  */
#line 308 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2448 "src/parser.c"
    break;

  case 80: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2454 "src/parser.c"
    break;

  case 81: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2460 "src/parser.c"
    break;

  case 82: /* loop_stmt: "foreach" "(" ref id ":" binary_exp ")" stmt  */
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2466 "src/parser.c"
    break;

  case 83: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2472 "src/parser.c"
    break;

  case 84: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 319 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2478 "src/parser.c"
    break;

  case 85: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 323 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2484 "src/parser.c"
    break;

  case 86: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 325 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2490 "src/parser.c"
    break;

  case 87: /* breaks: "return"  */
#line 329 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2496 "src/parser.c"
    break;

  case 88: /* breaks: "break"  */
#line 330 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2502 "src/parser.c"
    break;

  case 89: /* breaks: "continue"  */
#line 331 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2508 "src/parser.c"
    break;

  case 90: /* jump_stmt: "return" exp ";"  */
#line 334 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2514 "src/parser.c"
    break;

  case 91: /* jump_stmt: breaks ";"  */
#line 335 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2520 "src/parser.c"
    break;

  case 92: /* _exp_stmt: ";" _exp_stmt  */
#line 338 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2526 "src/parser.c"
    break;

  case 93: /* _exp_stmt: ";"  */
#line 338 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2532 "src/parser.c"
    break;

  case 94: /* exp_stmt: exp ";"  */
#line 341 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2538 "src/parser.c"
    break;

  case 95: /* exp_stmt: _exp_stmt  */
#line 342 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2544 "src/parser.c"
    break;

  case 97: /* exp: binary_exp "," exp  */
#line 345 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2550 "src/parser.c"
    break;

  case 99: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 349 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2556 "src/parser.c"
    break;

  case 100: /* binary_exp: binary_exp op decl_exp  */
#line 350 "src/gwion.y"
                               { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2562 "src/parser.c"
    break;

  case 101: /* call_template: ":[" type_list "]"  */
#line 352 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2568 "src/parser.c"
    break;

  case 102: /* call_template: %empty  */
#line 352 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2574 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]"  */
#line 357 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2580 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]" array_exp  */
#line 358 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2586 "src/parser.c"
    break;

  case 108: /* array_exp: "[" exp "]" array_empty  */
#line 359 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2592 "src/parser.c"
    break;

  case 109: /* array_empty: "[" "]"  */
#line 363 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2598 "src/parser.c"
    break;

  case 110: /* array_empty: array_empty "[" "]"  */
#line 364 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2604 "src/parser.c"
    break;

  case 111: /* array_empty: array_empty array_exp  */
#line 365 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2610 "src/parser.c"
    break;

  case 112: /* range: "[" exp ":" exp "]"  */
#line 369 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2616 "src/parser.c"
    break;

  case 113: /* range: "[" exp ":" "]"  */
#line 370 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2622 "src/parser.c"
    break;

  case 114: /* range: "[" ":" exp "]"  */
#line 371 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2628 "src/parser.c"
    break;

  case 118: /* decl_exp: type_decl_flag2 flag type_decl_noflag var_decl_list  */
#line 377 "src/gwion.y"
                                                        { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2634 "src/parser.c"
    break;

  case 119: /* union_exp: type_decl_noflag arg_decl  */
#line 379 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2640 "src/parser.c"
    break;

  case 120: /* func_args: "(" arg_list  */
#line 381 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2646 "src/parser.c"
    break;

  case 121: /* func_args: "("  */
#line 381 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2652 "src/parser.c"
    break;

  case 122: /* fptr_args: "(" fptr_list  */
#line 382 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2658 "src/parser.c"
    break;

  case 123: /* fptr_args: "("  */
#line 382 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2664 "src/parser.c"
    break;

  case 124: /* arg_type: "..." ")"  */
#line 383 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2670 "src/parser.c"
    break;

  case 125: /* arg_type: ")"  */
#line 383 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2676 "src/parser.c"
    break;

  case 126: /* decl_template: ":[" id_list "]"  */
#line 385 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2682 "src/parser.c"
    break;

  case 127: /* decl_template: %empty  */
#line 385 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2688 "src/parser.c"
    break;

  case 128: /* storage_flag: "static"  */
#line 387 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2694 "src/parser.c"
    break;

  case 129: /* storage_flag: "global"  */
#line 388 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2700 "src/parser.c"
    break;

  case 130: /* access_flag: "private"  */
#line 391 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2706 "src/parser.c"
    break;

  case 131: /* access_flag: "protect"  */
#line 392 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2712 "src/parser.c"
    break;

  case 132: /* flag: access_flag  */
#line 395 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2718 "src/parser.c"
    break;

  case 133: /* flag: storage_flag  */
#line 396 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2724 "src/parser.c"
    break;

  case 134: /* flag: access_flag storage_flag  */
#line 397 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2730 "src/parser.c"
    break;

  case 135: /* flag: %empty  */
#line 398 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2736 "src/parser.c"
    break;

  case 136: /* final: "final"  */
#line 401 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2742 "src/parser.c"
    break;

  case 137: /* final: %empty  */
#line 401 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2748 "src/parser.c"
    break;

  case 138: /* modifier: "abstract"  */
#line 403 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2754 "src/parser.c"
    break;

  case 140: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 406 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2764 "src/parser.c"
    break;

  case 141: /* abstract_fdef: "fun" flag "abstract" type_decl_empty id decl_template fptr_args arg_type ";"  */
#line 414 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, GET_LOC(&(yyloc)));
    }
#line 2776 "src/parser.c"
    break;

  case 147: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 425 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2782 "src/parser.c"
    break;

  case 148: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 427 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2788 "src/parser.c"
    break;

  case 149: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 429 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2797 "src/parser.c"
    break;

  case 150: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 434 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2806 "src/parser.c"
    break;

  case 151: /* op_def: "operator" op_base code_stmt  */
#line 439 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2812 "src/parser.c"
    break;

  case 154: /* func_def: op_def  */
#line 441 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2818 "src/parser.c"
    break;

  case 155: /* ref: %empty  */
#line 443 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 2824 "src/parser.c"
    break;

  case 156: /* ref: "ref"  */
#line 443 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 2830 "src/parser.c"
    break;

  case 157: /* type_decl_tmpl: id call_template  */
#line 446 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2836 "src/parser.c"
    break;

  case 159: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 451 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2842 "src/parser.c"
    break;

  case 160: /* type_decl_noflag: type_decl_next  */
#line 455 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2848 "src/parser.c"
    break;

  case 161: /* type_decl_noflag: typeof_exp  */
#line 456 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2854 "src/parser.c"
    break;

  case 163: /* type_decl: type_decl_flag type_decl_noflag  */
#line 459 "src/gwion.y"
                                                              { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2860 "src/parser.c"
    break;

  case 164: /* type_decl_flag: "ref"  */
#line 462 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 2866 "src/parser.c"
    break;

  case 165: /* type_decl_flag: "const"  */
#line 463 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2872 "src/parser.c"
    break;

  case 166: /* type_decl_flag: "nonnull"  */
#line 464 "src/gwion.y"
            { (yyval.flag) = ae_flag_nonnull; }
#line 2878 "src/parser.c"
    break;

  case 167: /* type_decl_flag: "nonnull" "ref"  */
#line 465 "src/gwion.y"
                { (yyval.flag) = ae_flag_nonnull | ae_flag_ref; }
#line 2884 "src/parser.c"
    break;

  case 168: /* type_decl_flag: "const" "ref"  */
#line 466 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 2890 "src/parser.c"
    break;

  case 169: /* type_decl_flag: "const" "nonnull"  */
#line 467 "src/gwion.y"
                   { (yyval.flag) = ae_flag_const | ae_flag_nonnull; }
#line 2896 "src/parser.c"
    break;

  case 170: /* type_decl_flag: "const" "nonnull" "ref"  */
#line 468 "src/gwion.y"
                       { (yyval.flag) = ae_flag_const | ae_flag_nonnull | ae_flag_ref; }
#line 2902 "src/parser.c"
    break;

  case 171: /* type_decl_flag2: "var"  */
#line 470 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2908 "src/parser.c"
    break;

  case 173: /* decl_list: union_exp ";"  */
#line 472 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2914 "src/parser.c"
    break;

  case 174: /* decl_list: union_exp ";" decl_list  */
#line 473 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2920 "src/parser.c"
    break;

  case 175: /* union_def: "union" flag opt_id decl_template "{" decl_list "}" opt_id ";"  */
#line 476 "src/gwion.y"
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
#line 2942 "src/parser.c"
    break;

  case 176: /* var_decl_list: var_decl  */
#line 496 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2948 "src/parser.c"
    break;

  case 177: /* var_decl_list: var_decl "," var_decl_list  */
#line 497 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2954 "src/parser.c"
    break;

  case 178: /* var_decl: id  */
#line 500 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2960 "src/parser.c"
    break;

  case 179: /* var_decl: id array  */
#line 501 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2966 "src/parser.c"
    break;

  case 180: /* arg_decl: id  */
#line 503 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2972 "src/parser.c"
    break;

  case 181: /* arg_decl: id array_empty  */
#line 504 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2978 "src/parser.c"
    break;

  case 182: /* arg_decl: id array_exp  */
#line 505 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2984 "src/parser.c"
    break;

  case 184: /* fptr_arg_decl: %empty  */
#line 506 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 2990 "src/parser.c"
    break;

  case 199: /* opt_exp: %empty  */
#line 514 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 2996 "src/parser.c"
    break;

  case 201: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 517 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3002 "src/parser.c"
    break;

  case 202: /* con_exp: log_or_exp "?:" con_exp  */
#line 519 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3008 "src/parser.c"
    break;

  case 204: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 521 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3014 "src/parser.c"
    break;

  case 206: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 522 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3020 "src/parser.c"
    break;

  case 208: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 523 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3026 "src/parser.c"
    break;

  case 210: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 524 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3032 "src/parser.c"
    break;

  case 212: /* and_exp: and_exp "&" eq_exp  */
#line 525 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3038 "src/parser.c"
    break;

  case 214: /* eq_exp: eq_exp eq_op rel_exp  */
#line 526 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3044 "src/parser.c"
    break;

  case 216: /* rel_exp: rel_exp rel_op shift_exp  */
#line 527 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3050 "src/parser.c"
    break;

  case 218: /* shift_exp: shift_exp shift_op add_exp  */
#line 528 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3056 "src/parser.c"
    break;

  case 220: /* add_exp: add_exp add_op mul_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3062 "src/parser.c"
    break;

  case 222: /* mul_exp: mul_exp mul_op dur_exp  */
#line 530 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3068 "src/parser.c"
    break;

  case 224: /* dur_exp: dur_exp "::" cast_exp  */
#line 531 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3074 "src/parser.c"
    break;

  case 226: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 534 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3080 "src/parser.c"
    break;

  case 235: /* unary_exp: unary_op unary_exp  */
#line 541 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3086 "src/parser.c"
    break;

  case 236: /* unary_exp: "(" OPID_D ")" unary_exp  */
#line 542 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 3092 "src/parser.c"
    break;

  case 237: /* unary_exp: "new" type_decl_exp  */
#line 543 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3098 "src/parser.c"
    break;

  case 238: /* unary_exp: "spork" code_stmt  */
#line 544 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3104 "src/parser.c"
    break;

  case 239: /* unary_exp: "fork" code_stmt  */
#line 545 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3110 "src/parser.c"
    break;

  case 240: /* lambda_list: id  */
#line 548 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3116 "src/parser.c"
    break;

  case 241: /* lambda_list: id lambda_list  */
#line 549 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3122 "src/parser.c"
    break;

  case 242: /* lambda_arg: "\\" lambda_list  */
#line 550 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3128 "src/parser.c"
    break;

  case 243: /* lambda_arg: "\\"  */
#line 550 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3134 "src/parser.c"
    break;

  case 244: /* type_list: type_decl_empty  */
#line 553 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3140 "src/parser.c"
    break;

  case 245: /* type_list: type_decl_empty "," type_list  */
#line 554 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3146 "src/parser.c"
    break;

  case 246: /* call_paren: "(" exp ")"  */
#line 557 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3152 "src/parser.c"
    break;

  case 247: /* call_paren: "(" ")"  */
#line 557 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3158 "src/parser.c"
    break;

  case 250: /* dot_exp: post_exp "." id  */
#line 561 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym));
}
#line 3171 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp array_exp  */
#line 571 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3177 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp range  */
#line 573 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3183 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp call_template call_paren  */
#line 575 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3190 "src/parser.c"
    break;

  case 255: /* post_exp: post_exp post_op  */
#line 578 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3196 "src/parser.c"
    break;

  case 256: /* post_exp: post_exp OPID_D  */
#line 580 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3202 "src/parser.c"
    break;

  case 257: /* post_exp: dot_exp  */
#line 581 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3208 "src/parser.c"
    break;

  case 258: /* interp_exp: "<interp string>`"  */
#line 585 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3214 "src/parser.c"
    break;

  case 259: /* interp_exp: "<interp string>" interp_exp  */
#line 586 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3220 "src/parser.c"
    break;

  case 260: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 587 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3226 "src/parser.c"
    break;

  case 261: /* interp: "`" interp_exp  */
#line 589 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3232 "src/parser.c"
    break;

  case 262: /* interp: interp "`" interp_exp  */
#line 590 "src/gwion.y"
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
#line 3247 "src/parser.c"
    break;

  case 263: /* typeof_exp: "typeof" "(" exp ")"  */
#line 601 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3253 "src/parser.c"
    break;

  case 264: /* prim_exp: id  */
#line 604 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3259 "src/parser.c"
    break;

  case 265: /* prim_exp: "<integer>"  */
#line 605 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3265 "src/parser.c"
    break;

  case 266: /* prim_exp: FLOATT  */
#line 606 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3271 "src/parser.c"
    break;

  case 267: /* prim_exp: interp  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp)); }
#line 3277 "src/parser.c"
    break;

  case 268: /* prim_exp: "<litteral string>"  */
#line 608 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3283 "src/parser.c"
    break;

  case 269: /* prim_exp: "<litteral char>"  */
#line 609 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3289 "src/parser.c"
    break;

  case 270: /* prim_exp: array  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3295 "src/parser.c"
    break;

  case 271: /* prim_exp: range  */
#line 611 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3301 "src/parser.c"
    break;

  case 272: /* prim_exp: "<<<" exp ">>>"  */
#line 612 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3307 "src/parser.c"
    break;

  case 273: /* prim_exp: "(" exp ")"  */
#line 613 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3313 "src/parser.c"
    break;

  case 274: /* prim_exp: lambda_arg code_stmt  */
#line 614 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3319 "src/parser.c"
    break;

  case 275: /* prim_exp: "(" ")"  */
#line 615 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3325 "src/parser.c"
    break;

  case 276: /* prim_exp: typeof_exp  */
#line 616 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3331 "src/parser.c"
    break;


#line 3335 "src/parser.c"

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

#line 618 "src/gwion.y"

