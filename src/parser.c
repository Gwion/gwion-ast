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
  YYSYMBOL_72_operator_id_ = 72,           /* "@<operator id>"  */
  YYSYMBOL_73_operator_id_ = 73,           /* "$<operator id>"  */
  YYSYMBOL_PLUS = 74,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 75,                  /* "++"  */
  YYSYMBOL_MINUS = 76,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 77,                /* "--"  */
  YYSYMBOL_TIMES = 78,                     /* "*"  */
  YYSYMBOL_DIVIDE = 79,                    /* "/"  */
  YYSYMBOL_PERCENT = 80,                   /* "%"  */
  YYSYMBOL_DOLLAR = 81,                    /* "$"  */
  YYSYMBOL_QUESTION = 82,                  /* "?"  */
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
  YYSYMBOL_UMINUS = 109,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 110,                   /* UTIMES  */
  YYSYMBOL_111_ = 111,                     /* "="  */
  YYSYMBOL_YYACCEPT = 112,                 /* $accept  */
  YYSYMBOL_prg = 113,                      /* prg  */
  YYSYMBOL_ast = 114,                      /* ast  */
  YYSYMBOL_section = 115,                  /* section  */
  YYSYMBOL_class_type = 116,               /* class_type  */
  YYSYMBOL_class_def = 117,                /* class_def  */
  YYSYMBOL_class_ext = 118,                /* class_ext  */
  YYSYMBOL_class_body = 119,               /* class_body  */
  YYSYMBOL_id_list = 120,                  /* id_list  */
  YYSYMBOL_stmt_list = 121,                /* stmt_list  */
  YYSYMBOL_fptr_base = 122,                /* fptr_base  */
  YYSYMBOL_func_base = 123,                /* func_base  */
  YYSYMBOL_fptr_def = 124,                 /* fptr_def  */
  YYSYMBOL_type_def = 125,                 /* type_def  */
  YYSYMBOL_type_decl_array = 126,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 127,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 128,          /* type_decl_empty  */
  YYSYMBOL_arg = 129,                      /* arg  */
  YYSYMBOL_arg_list = 130,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 131,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 132,                /* fptr_list  */
  YYSYMBOL_code_stmt = 133,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 134,                  /* stmt_pp  */
  YYSYMBOL_stmt = 135,                     /* stmt  */
  YYSYMBOL_id = 136,                       /* id  */
  YYSYMBOL_opt_id = 137,                   /* opt_id  */
  YYSYMBOL_enum_def = 138,                 /* enum_def  */
  YYSYMBOL_label_stmt = 139,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 140,                /* goto_stmt  */
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
  YYSYMBOL_union_exp = 163,                /* union_exp  */
  YYSYMBOL_func_args = 164,                /* func_args  */
  YYSYMBOL_fptr_args = 165,                /* fptr_args  */
  YYSYMBOL_arg_type = 166,                 /* arg_type  */
  YYSYMBOL_decl_template = 167,            /* decl_template  */
  YYSYMBOL_storage_flag = 168,             /* storage_flag  */
  YYSYMBOL_access_flag = 169,              /* access_flag  */
  YYSYMBOL_flag = 170,                     /* flag  */
  YYSYMBOL_final = 171,                    /* final  */
  YYSYMBOL_modifier = 172,                 /* modifier  */
  YYSYMBOL_func_def_base = 173,            /* func_def_base  */
  YYSYMBOL_abstract_fdef = 174,            /* abstract_fdef  */
  YYSYMBOL_op_op = 175,                    /* op_op  */
  YYSYMBOL_op_base = 176,                  /* op_base  */
  YYSYMBOL_op_def = 177,                   /* op_def  */
  YYSYMBOL_func_def = 178,                 /* func_def  */
  YYSYMBOL_ref = 179,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 180,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 181,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 182,         /* type_decl_noflag  */
  YYSYMBOL_type_decl = 183,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 184,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 185,          /* type_decl_flag2  */
  YYSYMBOL_decl_list = 186,                /* decl_list  */
  YYSYMBOL_union_def = 187,                /* union_def  */
  YYSYMBOL_var_decl_list = 188,            /* var_decl_list  */
  YYSYMBOL_var_decl = 189,                 /* var_decl  */
  YYSYMBOL_arg_decl = 190,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 191,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 192,                    /* eq_op  */
  YYSYMBOL_rel_op = 193,                   /* rel_op  */
  YYSYMBOL_shift_op = 194,                 /* shift_op  */
  YYSYMBOL_add_op = 195,                   /* add_op  */
  YYSYMBOL_mul_op = 196,                   /* mul_op  */
  YYSYMBOL_opt_exp = 197,                  /* opt_exp  */
  YYSYMBOL_con_exp = 198,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 199,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 200,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 201,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 202,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 203,                  /* and_exp  */
  YYSYMBOL_eq_exp = 204,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 205,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 206,                /* shift_exp  */
  YYSYMBOL_add_exp = 207,                  /* add_exp  */
  YYSYMBOL_mul_exp = 208,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 209,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 210,                 /* cast_exp  */
  YYSYMBOL_unary_op = 211,                 /* unary_op  */
  YYSYMBOL_unary_exp = 212,                /* unary_exp  */
  YYSYMBOL_lambda_list = 213,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 214,               /* lambda_arg  */
  YYSYMBOL_type_list = 215,                /* type_list  */
  YYSYMBOL_call_paren = 216,               /* call_paren  */
  YYSYMBOL_post_op = 217,                  /* post_op  */
  YYSYMBOL_dot_exp = 218,                  /* dot_exp  */
  YYSYMBOL_post_exp = 219,                 /* post_exp  */
  YYSYMBOL_interp_exp = 220,               /* interp_exp  */
  YYSYMBOL_interp = 221,                   /* interp  */
  YYSYMBOL_typeof_exp = 222,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 223                  /* prim_exp  */
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
#define YYFINAL  178
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  455

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   366


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
     105,   106,   107,   108,   109,   110,   111
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
     248,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   264,   266,   266,   269,   272,   274,   276,   276,   279,
     287,   288,   290,   290,   292,   300,   301,   304,   306,   308,
     310,   312,   314,   318,   321,   323,   328,   329,   330,   333,
     334,   337,   337,   340,   341,   344,   344,   347,   348,   349,
     351,   351,   353,   353,   353,   356,   357,   358,   362,   363,
     364,   368,   369,   370,   373,   373,   375,   376,   378,   380,
     380,   381,   381,   382,   382,   384,   384,   386,   387,   390,
     391,   394,   395,   396,   397,   400,   400,   402,   402,   405,
     412,   421,   421,   421,   421,   421,   423,   425,   427,   432,
     437,   440,   440,   440,   442,   442,   445,   449,   450,   454,
     455,   458,   458,   461,   462,   463,   464,   465,   466,   467,
     469,   469,   471,   472,   475,   495,   496,   499,   500,   502,
     503,   504,   505,   505,   507,   507,   508,   508,   508,   508,
     509,   509,   510,   510,   511,   511,   511,   513,   513,   514,
     515,   517,   520,   520,   521,   521,   522,   522,   523,   523,
     524,   524,   525,   525,   526,   526,   527,   527,   528,   528,
     529,   529,   530,   530,   532,   532,   535,   535,   535,   536,
     536,   536,   536,   539,   540,   541,   542,   543,   544,   547,
     548,   549,   549,   552,   553,   556,   556,   558,   558,   560,
     568,   569,   571,   573,   576,   578,   580,   584,   585,   586,
     588,   589,   600,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615
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
  "\"\\n\"", "\"@<operator id>\"", "\"$<operator id>\"", "\"+\"", "\"++\"",
  "\"-\"", "\"--\"", "\"*\"", "\"/\"", "\"%\"", "\"$\"", "\"?\"", "\":\"",
  "\"::\"", "\"?:\"", "\"new\"", "\"spork\"", "\"fork\"", "\"typeof\"",
  "\"<<<\"", "\">>>\"", "\"&&\"", "\"==\"", "\">=\"", "\">\"", "\"<=\"",
  "\"<\"", "\"!=\"", "\"<<\"", "\">>\"", "\"&\"", "\"|\"", "\"^\"",
  "\"||\"", "\":[\"", "\"~\"", "\"!\"", "\"<dynamic_operator>\"", "UMINUS",
  "UTIMES", "\"=\"", "$accept", "prg", "ast", "section", "class_type",
  "class_def", "class_ext", "class_body", "id_list", "stmt_list",
  "fptr_base", "func_base", "fptr_def", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def",
  "label_stmt", "goto_stmt", "when_exp", "match_case_stmt", "match_list",
  "where_stmt", "match_stmt", "flow", "loop_stmt", "varloop_stmt",
  "selection_stmt", "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "range",
  "array", "decl_exp", "union_exp", "func_args", "fptr_args", "arg_type",
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
     365,   366
};
#endif

#define YYPACT_NINF (-317)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     551,    36,   819,   876,   656,   146,  -317,    65,  -317,   752,
    -317,    69,    81,    91,    54,  1332,   146,  1332,  -317,  -317,
    -317,  -317,  1324,   146,   146,   146,    -5,  1332,    54,  -317,
      50,  -317,  -317,  -317,  -317,  -317,   933,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,    39,   102,   102,   109,  1332,  -317,  -317,   116,  -317,
     551,   146,  -317,  -317,  -317,  -317,  -317,  -317,   752,    37,
    -317,  -317,  -317,  -317,   118,  -317,  -317,  -317,   128,  -317,
    -317,  -317,   138,    28,  -317,   139,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,   146,  -317,  -317,   -33,    61,    55,
      63,    66,   -43,    92,    -1,    -7,    25,    80,    88,  1387,
    -317,   102,  -317,  -317,    33,   112,  -317,  -317,  -317,  -317,
     168,  -317,   170,  -317,  1332,    23,  -317,   172,  -317,  -317,
    -317,  -317,   178,  -317,    56,   103,  1332,    46,  1332,   444,
     133,   187,   182,    54,   190,  -317,  -317,  -317,  1404,    93,
     102,   157,  -317,  -317,   192,   -11,    39,  -317,    39,   198,
      39,    54,  -317,   155,    44,    54,  -317,  -317,   933,  -317,
     137,  -317,  -317,  -317,  -317,  -317,  1332,   117,  -317,  -317,
     126,  -317,  -317,  1332,  -317,  -317,  1332,  1332,  -317,  -317,
    -317,  1332,   990,  -317,   -11,  1332,  1387,  1387,  1387,  1387,
    1387,  1387,  -317,  -317,  1387,  -317,  -317,  -317,  -317,  1387,
    -317,  -317,  1387,  -317,  -317,  1387,  -317,  -317,  -317,  1387,
    1387,    39,  -317,  -317,  1047,    54,  -317,    39,   202,  -317,
    -317,  -317,   933,  1387,  -317,   201,   192,  1104,  -317,    39,
      29,  -317,    39,  -317,    39,   204,  1332,   205,   444,  -317,
      54,  -317,   189,  -317,   207,  -317,   178,  -317,   208,  -317,
    -317,  -317,  -317,   209,  -317,  -317,    54,  1161,  -317,  -317,
     212,    54,    39,    29,    54,   113,  -317,  -317,  -317,  -317,
     933,   213,  -317,  -317,  -317,    54,   214,  -317,  -317,  -317,
    -317,   215,    54,  -317,   141,  -317,    61,    55,    63,    66,
     -43,    92,    -1,    -7,    25,    80,    88,  -317,  -317,   218,
     220,  1218,  -317,  -317,  -317,  -317,  -317,   139,  -317,   221,
    -317,   222,    54,  -317,   224,   102,    54,    54,   752,   228,
     752,  1275,   151,  1332,   189,   225,    54,   226,    39,    39,
    -317,    39,   113,   233,  -317,    54,   240,   113,    54,   236,
    -317,  -317,   113,   752,   192,  -317,   243,  1387,    39,  -317,
    -317,   242,  -317,    39,   192,   166,  -317,  -317,   113,   113,
     237,  -317,  -317,   752,   247,  1332,   230,  -317,   231,   248,
     253,  -317,   255,   254,   256,   258,    39,  -317,  -317,  -317,
    -317,   257,   -11,   229,  -317,  -317,    54,  -317,  -317,  -317,
    -317,  -317,   139,  1332,   198,  -317,   752,  -317,   752,    24,
    1332,   180,   752,  -317,  -317,    54,    39,   102,  -317,  -317,
    -317,  -317,   261,    54,   259,    39,   264,  -317,   -13,    29,
    -317,  -317,   752,  -317,   752,  -317,  -317,   262,  -317,   -11,
    -317,    54,  -317,   551,   267,  -317,  -317,  -317,  -317,   272,
    -317,   269,  -317,  -317,  -317
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    92,     0,     0,     0,   134,   170,     0,    75,     0,
      76,     0,     0,     0,     0,     0,   134,    86,    87,    88,
      13,    14,     0,   134,   134,   134,   164,     0,   242,   163,
     165,   264,   265,    61,   267,   268,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   247,   226,   248,
     227,     0,   230,   231,     0,     0,   232,   229,     0,     2,
       4,   134,     8,     6,    11,    12,    54,    59,    22,   263,
       9,    55,    56,    57,     0,    52,    60,    53,     0,    58,
      94,    51,     0,    95,   114,   115,   270,   269,    97,   151,
     152,   153,     7,   171,   134,    10,   116,   199,   202,   204,
     206,   208,   210,   212,   214,   216,   218,   220,   222,     0,
     224,     0,   228,   256,   233,   266,   275,   250,    91,   274,
       0,   263,     0,   108,     0,     0,    39,     0,   127,   128,
     129,   130,     0,   132,   131,   136,     0,     0,     0,     0,
     154,     0,     0,    63,     0,   230,   231,    31,     0,   101,
       0,   157,   159,   161,    28,     0,     0,   160,     0,     0,
       0,    63,   167,   168,     0,   239,   241,   166,     0,   257,
       0,   260,    30,   236,   237,   238,     0,     0,     1,     5,
     136,    23,    65,     0,    90,    93,     0,     0,   102,   103,
     104,     0,     0,   110,     0,   198,     0,     0,     0,     0,
       0,     0,   184,   185,     0,   189,   187,   188,   186,     0,
     190,   191,     0,   192,   193,     0,   194,   195,   196,     0,
       0,     0,   234,   273,     0,     0,   255,     0,     0,   251,
     252,   254,     0,     0,   272,     0,   105,     0,    40,   120,
       0,   133,     0,   135,     0,     0,     0,     0,     0,   155,
       0,    66,     0,    62,     0,    89,     0,   141,     0,   143,
     142,   145,   144,     0,   156,   150,     0,     0,    29,   162,
       0,     0,   122,     0,     0,   126,   169,    83,   240,   258,
       0,     0,   271,   137,   138,     0,     0,    96,    98,    99,
     109,     0,     0,   197,     0,   201,   203,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   249,   243,
       0,     0,   253,   261,   235,   113,   106,   107,   112,     0,
      34,   119,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
     158,     0,   126,    37,   121,   183,     0,   126,     0,     0,
     259,   262,   126,     0,   177,   117,   175,     0,     0,   100,
     246,     0,   111,     0,   179,    33,   123,   139,   126,   126,
      84,    78,    82,     0,     0,     0,    68,    71,    73,     0,
      20,   149,     0,     0,     0,     0,     0,   182,    36,    26,
      24,     0,     0,    17,    77,   178,     0,   200,   244,   245,
      35,   181,   180,     0,     0,    25,     0,    79,     0,     0,
       0,     0,     0,    74,    64,     0,     0,     0,   148,    27,
      38,   125,     0,     0,     0,     0,     0,   176,    32,     0,
      85,    80,     0,    67,     0,    72,    21,     0,   147,   172,
     118,    63,    16,    19,     0,    81,    69,   146,   173,     0,
      18,     0,   140,   174,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,   -58,  -317,  -317,  -317,  -317,  -317,  -315,    -3,
    -317,  -317,  -317,  -317,   -45,  -144,    -6,  -282,  -317,  -317,
    -103,   -35,  -317,     1,     0,  -148,  -317,  -317,  -317,  -317,
    -317,   -50,  -317,  -317,   154,  -317,  -317,  -317,  -317,  -317,
     285,  -118,     9,   -24,   145,   140,   -77,  -216,   181,  -149,
    -125,  -317,    40,  -107,  -254,  -250,   164,  -317,    18,   120,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,    35,
    -140,  -214,   149,  -317,  -137,  -317,   -93,  -317,  -316,  -317,
    -317,   156,   158,   160,   162,  -317,  -189,  -317,   114,   115,
     119,   121,   111,   110,   106,   105,   104,   125,   127,   301,
     -82,   159,  -317,   -26,  -317,   -66,  -317,  -317,  -145,  -317,
     122,  -317
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,    59,    60,    61,    62,   426,   451,   379,    63,
     159,   132,    64,    65,   147,   173,   309,   320,   321,   343,
     344,    66,    67,    68,   121,   254,    70,    71,    72,   411,
     334,   335,   413,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   228,   191,    84,    85,    86,    87,
      88,   422,   240,   273,   325,   349,   133,   134,   135,   244,
     285,    89,    90,   258,   150,    91,    92,   250,   151,   152,
     153,   154,    93,    94,   424,    95,   355,   356,   365,   388,
     204,   209,   212,   215,   219,   294,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   166,   111,   310,   312,   112,   113,   114,   171,   115,
     116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   127,   179,   164,    69,   268,   172,   295,   193,    69,
     137,   122,   125,   275,   141,   269,   148,   174,   175,   346,
     317,   248,   149,   279,   142,   322,   144,   222,   165,   387,
     432,   236,   186,   391,   143,   323,   187,   229,  -101,     1,
     224,   158,   160,   161,    33,   170,   162,   163,   231,   195,
     202,   149,   196,     4,   292,   203,   382,   383,   345,   384,
      69,     8,   288,    10,   177,   181,   289,   213,    69,   214,
     136,   197,   225,   187,   138,   324,   223,   187,    54,   180,
     188,   400,   263,   226,    26,   189,   139,   313,   128,   129,
      29,    30,   385,   187,    33,   190,   140,   390,   210,   211,
     436,   167,   393,   216,   217,   218,   237,   440,    47,    33,
      49,     4,   194,   271,   176,   265,   178,   188,   404,   405,
     182,   188,   189,   183,   322,   322,   189,   322,    54,   277,
     331,   184,   190,   235,   437,   350,   190,   188,   227,   242,
     243,   185,   189,   253,   157,   245,   192,   247,   402,   322,
     270,   314,   190,   198,   274,   149,   149,   199,   149,   316,
     149,   253,   283,   243,   220,   165,   200,   201,   397,   221,
     232,   155,   345,   157,   233,   444,   234,   170,   128,   129,
     130,   131,   238,   239,   249,   281,   205,   206,   207,   208,
     251,   252,   286,   255,   149,   287,   266,   280,   227,   267,
     155,   291,   322,   272,   293,   395,   276,   311,   282,   315,
     328,   330,   333,   338,   339,   307,   336,   341,   348,   351,
     353,   149,   358,   236,   357,   308,   363,   149,   359,   362,
     366,   371,   381,   125,   375,   378,   326,   386,   327,   149,
     193,   170,   149,   389,   149,   392,   319,   396,   399,   403,
     332,   406,   423,   408,   410,   329,   412,   415,   414,   416,
     417,   419,   418,   434,   439,   421,   149,   425,   447,   441,
     452,   342,   149,   443,   347,   453,   291,   157,   157,   454,
     157,   442,   157,   420,   377,   352,   118,   401,   257,   170,
     367,   246,   354,   449,   264,   230,   337,   429,   241,   423,
     284,   340,   448,   427,   259,   155,   260,   155,   261,   155,
     262,   296,   300,   297,   301,   302,   157,   303,   298,   304,
     361,   299,   364,   156,   278,   193,   368,   369,    69,   370,
      69,   372,   398,     0,     0,     0,   380,     0,   149,   149,
     374,   149,   376,   157,   305,   364,     0,   306,   380,   157,
       0,   409,     0,    69,   394,     0,     0,     0,   149,     0,
       0,   157,     0,   149,   157,     0,   157,     0,     0,     0,
     155,     0,     0,    69,   407,     0,   155,     0,     0,   428,
     172,     0,   438,     0,     0,   450,   149,     0,   155,     0,
       0,   155,   149,   155,   157,     0,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,   430,    69,   431,
       0,     0,    69,   435,     0,   380,   149,     0,     0,   433,
       0,   155,     0,   364,     0,   149,     0,     0,     0,     0,
       0,   446,    69,   445,    69,     0,     0,     0,     0,   149,
       0,   253,     0,    69,     0,     0,     0,     1,     0,     2,
       0,     3,     0,     0,     0,     0,     6,     0,     0,     0,
     157,   157,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,     0,     0,     0,     0,   157,     0,   155,   155,    26,
     155,     0,    28,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,   155,   157,     0,
       0,     0,   155,     0,   157,     0,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,   155,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
      56,    57,     0,     0,     1,     0,     2,     0,     3,     0,
       4,   157,     5,     6,     7,   155,     8,     9,    10,    11,
      12,    13,    14,    15,   155,     0,     0,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,     0,    25,    26,     0,    27,    28,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     1,
       0,     2,     0,     3,     0,     4,   126,     0,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,    28,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     3,
       0,     4,    56,    57,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
      28,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     2,   119,     3,    47,    48,    49,
      50,     6,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,     0,     0,     0,    26,     0,     0,    28,     0,   120,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     2,     0,     3,   123,     0,     0,     0,     6,     0,
       0,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    28,    56,    57,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,    47,    48,    49,    50,     0,     0,     0,     0,   124,
       0,     0,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    28,    56,    57,    29,    30,    31,    32,    33,    34,
      35,    36,   168,     0,   169,     2,     0,     3,   290,     0,
       0,     0,     6,     0,     0,     0,     0,     0,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    28,    56,
      57,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,     2,     0,     3,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    28,    56,    57,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     2,
       0,     3,   318,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
     124,     0,     0,    51,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    28,    56,    57,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     2,     0,     3,   123,
       0,     0,     0,     6,     0,     0,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
      56,    57,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     2,   360,     3,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,    56,    57,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       2,   373,     3,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    28,    56,    57,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    29,    30,    26,     0,    33,
      28,    56,    57,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     2,     0,     3,     0,     0,     0,     0,    47,
      48,    49,    50,     0,     0,     0,     0,    47,    48,    49,
      50,   145,   146,    54,     0,     0,     0,     0,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,     0,     0,    28,     0,     0,    56,    57,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,   256,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,   213,    47,
     214,    49,   216,   217,   218,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,     0,   188,   205,   206,
     207,   208,   189,   210,   211,     0,     0,     0,     0,     0,
       0,     0,   190
};

static const yytype_int16 yycheck[] =
{
       0,     4,    60,    27,     4,   154,    51,   196,    85,     9,
       9,     2,     3,   161,    14,   155,    22,    52,    53,   273,
     236,   139,    22,   168,    15,   239,    17,   109,    28,   345,
       6,     8,     4,   348,    16,     6,    49,   114,     5,     3,
       7,    23,    24,    25,    55,    36,    51,    52,   114,    82,
      93,    51,    85,     9,   194,    98,   338,   339,   272,   341,
      60,    15,   187,    17,    55,    68,   191,    74,    68,    76,
       5,   104,    39,    49,     5,    46,   111,    49,    89,    61,
      93,   363,   148,    50,    45,    98,     5,   232,    32,    33,
      51,    52,   342,    49,    55,   108,     5,   347,    99,   100,
     415,    51,   352,    78,    79,    80,    83,   423,    75,    55,
      77,     9,    94,   158,     5,   150,     0,    93,   368,   369,
      83,    93,    98,     5,   338,   339,    98,   341,    89,   164,
     248,     3,   108,   124,   416,   280,   108,    93,   105,    36,
      37,     3,    98,   143,    22,   136,     7,   138,   364,   363,
     156,   233,   108,    92,   160,   155,   156,   102,   158,   236,
     160,   161,    36,    37,    84,   165,   103,   101,   357,    81,
      58,    22,   386,    51,     6,   429,     6,   168,    32,    33,
      34,    35,    10,     5,    51,   176,    94,    95,    96,    97,
       3,     9,   183,     3,   194,   186,    39,    60,   105,     7,
      51,   192,   416,     5,   195,   354,    51,     5,    91,     8,
       6,     6,    23,     5,     5,   221,     9,     5,   105,     6,
       6,   221,     4,     8,    83,   225,     4,   227,     8,     8,
       6,     3,     6,   224,    83,    10,   242,     4,   244,   239,
     317,   232,   242,     3,   244,     9,   237,     4,     6,    83,
     250,    14,   392,     6,    24,   246,    25,     4,    10,     4,
       6,     3,     6,    83,     3,     8,   266,    38,     6,    10,
       3,   271,   272,     9,   274,     3,   267,   155,   156,    10,
     158,   425,   160,   386,   334,   285,     1,   364,   148,   280,
     325,   137,   292,   441,   149,   114,   256,   404,   134,   439,
     180,   266,   439,   396,   148,   156,   148,   158,   148,   160,
     148,   197,   201,   198,   204,   209,   194,   212,   199,   215,
     311,   200,   322,    22,   165,   402,   326,   327,   328,   328,
     330,   330,   358,    -1,    -1,    -1,   336,    -1,   338,   339,
     331,   341,   333,   221,   219,   345,    -1,   220,   348,   227,
      -1,   375,    -1,   353,   353,    -1,    -1,    -1,   358,    -1,
      -1,   239,    -1,   363,   242,    -1,   244,    -1,    -1,    -1,
     221,    -1,    -1,   373,   373,    -1,   227,    -1,    -1,   403,
     425,    -1,   417,    -1,    -1,   443,   386,    -1,   239,    -1,
      -1,   242,   392,   244,   272,    -1,   396,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   406,   406,   408,   408,
      -1,    -1,   412,   412,    -1,   415,   416,    -1,    -1,   410,
      -1,   272,    -1,   423,    -1,   425,    -1,    -1,    -1,    -1,
      -1,   434,   432,   432,   434,    -1,    -1,    -1,    -1,   439,
      -1,   441,    -1,   443,    -1,    -1,    -1,     3,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
     338,   339,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     358,    -1,    -1,    -1,    -1,   363,    -1,   338,   339,    45,
     341,    -1,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,   358,   386,    -1,
      -1,    -1,   363,    -1,   392,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,   386,    -1,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,
     106,   107,    -1,    -1,     3,    -1,     5,    -1,     7,    -1,
       9,   439,    11,    12,    13,   416,    15,    16,    17,    18,
      19,    20,    21,    22,   425,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    44,    45,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,     3,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
      -1,     9,   106,   107,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     5,     6,     7,    75,    76,    77,
      78,    12,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,   106,   107,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,   106,   107,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,     5,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,   106,
     107,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,   106,   107,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,     5,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,   106,   107,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,     5,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
     106,   107,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,   106,   107,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,   106,   107,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    51,    52,    45,    -1,    55,
      48,   106,   107,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    87,    88,    89,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,    48,    -1,    -1,   106,   107,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    40,    41,    42,    44,    45,    47,    48,    51,
      52,    53,    54,    55,    56,    57,    58,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    75,    76,    77,
      78,    86,    87,    88,    89,    90,   106,   107,   113,   114,
     115,   116,   117,   121,   124,   125,   133,   134,   135,   136,
     138,   139,   140,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   158,   159,   160,   161,   162,   173,
     174,   177,   178,   184,   185,   187,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   214,   217,   218,   219,   221,   222,   223,   152,     6,
      50,   136,   154,     8,    83,   154,    10,   121,    32,    33,
      34,    35,   123,   168,   169,   170,     5,   135,     5,     5,
       5,   136,   154,   170,   154,    87,    88,   126,   128,   136,
     176,   180,   181,   182,   183,   184,   211,   222,   170,   122,
     170,   170,    51,    52,   155,   136,   213,    51,    59,    61,
     154,   220,   126,   127,   133,   133,     5,   154,     0,   114,
     170,   121,    83,     5,     3,     3,     4,    49,    93,    98,
     108,   157,     7,   158,   170,    82,    85,   104,    92,   102,
     103,   101,    93,    98,   192,    94,    95,    96,    97,   193,
      99,   100,   194,    74,    76,   195,    78,    79,    80,   196,
      84,    81,   212,   133,     7,    39,    50,   105,   156,   158,
     160,   217,    58,     6,     6,   154,     8,    83,    10,     5,
     164,   168,    36,    37,   171,   154,   146,   154,   153,    51,
     179,     3,     9,   136,   137,     3,    49,   157,   175,   193,
     194,   195,   196,   217,   156,   133,    39,     7,   161,   182,
     128,   126,     5,   165,   128,   137,    51,   133,   213,   220,
      60,   154,    91,    36,   171,   172,   154,   154,   162,   162,
       8,   154,   182,   154,   197,   198,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   128,   136,   128,
     215,     5,   216,   220,   212,     8,   158,   159,     8,   154,
     129,   130,   183,     6,    46,   166,   128,   128,     6,   154,
       6,   153,   136,    23,   142,   143,     9,   164,     5,     5,
     181,     5,   136,   131,   132,   183,   166,   136,   105,   167,
     220,     6,   136,     6,   136,   188,   189,    83,     4,     8,
       6,   154,     8,     4,   136,   190,     6,   133,   136,   136,
     135,     3,   135,     6,   154,    83,   154,   143,    10,   120,
     136,     6,   129,   129,   129,   167,     4,   190,   191,     3,
     167,   120,     9,   167,   135,   161,     4,   198,   215,     6,
     129,   158,   159,    83,   167,   167,    14,   135,     6,   155,
      24,   141,    25,   144,    10,     4,     4,     6,     6,     3,
     132,     8,   163,   182,   186,    38,   118,   188,   155,   165,
     135,   135,     6,   154,    83,   135,   120,   129,   133,     3,
     190,    10,   127,     9,   166,   135,   121,     6,   186,   137,
     114,   119,     3,     3,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   124,   125,   126,   126,
     127,   128,   129,   129,   130,   130,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   137,   137,   138,   139,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   146,   146,   147,   147,   147,
     147,   147,   147,   148,   149,   149,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   157,   157,   157,   158,   158,   158,   159,   159,
     159,   160,   160,   160,   161,   161,   162,   162,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     174,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     177,   178,   178,   178,   179,   179,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   184,   184,   184,   184,   184,
     185,   185,   186,   186,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   191,   192,   192,   193,   193,   193,   193,
     194,   194,   195,   195,   196,   196,   196,   197,   197,   198,
     198,   198,   199,   199,   200,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   211,   211,   211,
     211,   211,   211,   212,   212,   212,   212,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   217,   218,
     219,   219,   219,   219,   219,   219,   219,   220,   220,   220,
     221,   221,   222,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223
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
       1,     1,     1,     0,     6,     2,     3,     2,     0,     5,
       1,     2,     2,     0,     6,     1,     1,     5,     5,     6,
       7,     8,     5,     3,     5,     7,     1,     1,     1,     3,
       2,     2,     1,     2,     1,     1,     3,     1,     3,     3,
       3,     0,     1,     1,     1,     3,     4,     4,     2,     3,
       2,     5,     4,     4,     1,     1,     1,     4,     2,     2,
       1,     2,     1,     2,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     1,     1,     5,
       9,     1,     1,     1,     1,     1,     7,     6,     5,     4,
       3,     1,     1,     1,     0,     1,     2,     1,     3,     1,
       1,     1,     2,     1,     1,     1,     2,     2,     2,     3,
       1,     1,     2,     3,     9,     1,     3,     1,     2,     1,
       2,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       5,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     2,     2,     2,     1,
       2,     2,     1,     1,     3,     3,     2,     1,     1,     3,
       1,     2,     2,     3,     2,     2,     1,     1,     2,     3,
       2,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     2,     1
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
#line 1709 "src/parser.c"
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
#line 2010 "src/parser.c"
    break;

  case 3: /* prg: %empty  */
#line 145 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2016 "src/parser.c"
    break;

  case 4: /* ast: section  */
#line 148 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2022 "src/parser.c"
    break;

  case 5: /* ast: section ast  */
#line 149 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2028 "src/parser.c"
    break;

  case 6: /* section: stmt_list  */
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2034 "src/parser.c"
    break;

  case 7: /* section: func_def  */
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2040 "src/parser.c"
    break;

  case 8: /* section: class_def  */
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2046 "src/parser.c"
    break;

  case 9: /* section: enum_def  */
#line 156 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2052 "src/parser.c"
    break;

  case 10: /* section: union_def  */
#line 157 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2058 "src/parser.c"
    break;

  case 11: /* section: fptr_def  */
#line 158 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2064 "src/parser.c"
    break;

  case 12: /* section: type_def  */
#line 159 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2070 "src/parser.c"
    break;

  case 13: /* class_type: "class"  */
#line 162 "src/gwion.y"
                  { (yyval.cflag) = cflag_none; }
#line 2076 "src/parser.c"
    break;

  case 14: /* class_type: "struct"  */
#line 162 "src/gwion.y"
                                                { (yyval.cflag) = cflag_struct; }
#line 2082 "src/parser.c"
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
#line 2096 "src/parser.c"
    break;

  case 16: /* class_ext: "extends" type_decl_exp  */
#line 175 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2102 "src/parser.c"
    break;

  case 17: /* class_ext: %empty  */
#line 175 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2108 "src/parser.c"
    break;

  case 19: /* class_body: %empty  */
#line 177 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2114 "src/parser.c"
    break;

  case 20: /* id_list: id  */
#line 179 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2120 "src/parser.c"
    break;

  case 21: /* id_list: id "," id_list  */
#line 179 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2126 "src/parser.c"
    break;

  case 22: /* stmt_list: stmt  */
#line 181 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2132 "src/parser.c"
    break;

  case 23: /* stmt_list: stmt stmt_list  */
#line 181 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2138 "src/parser.c"
    break;

  case 24: /* fptr_base: flag type_decl_empty id decl_template  */
#line 183 "src/gwion.y"
                                                 { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2145 "src/parser.c"
    break;

  case 25: /* func_base: flag final type_decl_empty id decl_template  */
#line 186 "src/gwion.y"
                                                       { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[-1].sym), NULL, (yyvsp[-4].flag) | (yyvsp[-3].flag));
  if((yyvsp[0].id_list)) { (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[0].id_list)); } }
#line 2152 "src/parser.c"
    break;

  case 26: /* fptr_def: "funcdef" fptr_base fptr_args arg_type ";"  */
#line 189 "src/gwion.y"
                                                         {
  (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
  (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-3].func_base));
}
#line 2162 "src/parser.c"
    break;

  case 27: /* type_def: "typedef" flag type_decl_array id decl_template ";"  */
#line 195 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2173 "src/parser.c"
    break;

  case 29: /* type_decl_array: type_decl array  */
#line 202 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2179 "src/parser.c"
    break;

  case 30: /* type_decl_exp: type_decl_array  */
#line 204 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2187 "src/parser.c"
    break;

  case 31: /* type_decl_empty: type_decl_array  */
#line 208 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2195 "src/parser.c"
    break;

  case 32: /* arg: type_decl arg_decl ":" binary_exp  */
#line 213 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2201 "src/parser.c"
    break;

  case 33: /* arg: type_decl arg_decl  */
#line 214 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2207 "src/parser.c"
    break;

  case 34: /* arg_list: arg  */
#line 216 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2213 "src/parser.c"
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
#line 2226 "src/parser.c"
    break;

  case 36: /* fptr_arg: type_decl fptr_arg_decl  */
#line 226 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2232 "src/parser.c"
    break;

  case 37: /* fptr_list: fptr_arg  */
#line 227 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2238 "src/parser.c"
    break;

  case 38: /* fptr_list: fptr_arg "," fptr_list  */
#line 227 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2248 "src/parser.c"
    break;

  case 39: /* code_stmt: "{" "}"  */
#line 234 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2254 "src/parser.c"
    break;

  case 40: /* code_stmt: "{" stmt_list "}"  */
#line 235 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2260 "src/parser.c"
    break;

  case 41: /* stmt_pp: "<comment>"  */
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2266 "src/parser.c"
    break;

  case 42: /* stmt_pp: "#include"  */
#line 240 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2272 "src/parser.c"
    break;

  case 43: /* stmt_pp: "#define"  */
#line 241 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2278 "src/parser.c"
    break;

  case 44: /* stmt_pp: "#pragma"  */
#line 242 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2284 "src/parser.c"
    break;

  case 45: /* stmt_pp: "#undef"  */
#line 243 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2290 "src/parser.c"
    break;

  case 46: /* stmt_pp: "#ifdef"  */
#line 244 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2296 "src/parser.c"
    break;

  case 47: /* stmt_pp: "#ifndef"  */
#line 245 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2302 "src/parser.c"
    break;

  case 48: /* stmt_pp: "#else"  */
#line 246 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2308 "src/parser.c"
    break;

  case 49: /* stmt_pp: "#if"  */
#line 247 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2314 "src/parser.c"
    break;

  case 50: /* stmt_pp: "\n"  */
#line 248 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2320 "src/parser.c"
    break;

  case 61: /* id: "<identifier>"  */
#line 264 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2326 "src/parser.c"
    break;

  case 63: /* opt_id: %empty  */
#line 266 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2332 "src/parser.c"
    break;

  case 64: /* enum_def: "enum" flag opt_id "{" id_list "}"  */
#line 269 "src/gwion.y"
                                              { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2339 "src/parser.c"
    break;

  case 65: /* label_stmt: id ":"  */
#line 272 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2345 "src/parser.c"
    break;

  case 66: /* goto_stmt: "goto" id ";"  */
#line 274 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2351 "src/parser.c"
    break;

  case 67: /* when_exp: "when" exp  */
#line 276 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2357 "src/parser.c"
    break;

  case 68: /* when_exp: %empty  */
#line 276 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2363 "src/parser.c"
    break;

  case 69: /* match_case_stmt: "case" exp when_exp ":" stmt_list  */
#line 279 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2374 "src/parser.c"
    break;

  case 70: /* match_list: match_case_stmt  */
#line 287 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2380 "src/parser.c"
    break;

  case 71: /* match_list: match_case_stmt match_list  */
#line 288 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2386 "src/parser.c"
    break;

  case 72: /* where_stmt: "where" stmt  */
#line 290 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2392 "src/parser.c"
    break;

  case 73: /* where_stmt: %empty  */
#line 290 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2398 "src/parser.c"
    break;

  case 74: /* match_stmt: "match" exp "{" match_list "}" where_stmt  */
#line 292 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2409 "src/parser.c"
    break;

  case 75: /* flow: "while"  */
#line 300 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2415 "src/parser.c"
    break;

  case 76: /* flow: "until"  */
#line 301 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2421 "src/parser.c"
    break;

  case 77: /* loop_stmt: flow "(" exp ")" stmt  */
#line 305 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2427 "src/parser.c"
    break;

  case 78: /* loop_stmt: "do" stmt flow exp ";"  */
#line 307 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2433 "src/parser.c"
    break;

  case 79: /* loop_stmt: "for" "(" exp_stmt exp_stmt ")" stmt  */
#line 309 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2439 "src/parser.c"
    break;

  case 80: /* loop_stmt: "for" "(" exp_stmt exp_stmt exp ")" stmt  */
#line 311 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2445 "src/parser.c"
    break;

  case 81: /* loop_stmt: "foreach" "(" ref id ":" binary_exp ")" stmt  */
#line 313 "src/gwion.y"
      { (yyval.stmt) = new_stmt_each(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_each.is_ptr = (yyvsp[-5].ival); }
#line 2451 "src/parser.c"
    break;

  case 82: /* loop_stmt: "repeat" "(" exp ")" stmt  */
#line 315 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2457 "src/parser.c"
    break;

  case 83: /* varloop_stmt: "varloop" binary_exp code_stmt  */
#line 318 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2463 "src/parser.c"
    break;

  case 84: /* selection_stmt: "if" "(" exp ")" stmt  */
#line 322 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2469 "src/parser.c"
    break;

  case 85: /* selection_stmt: "if" "(" exp ")" stmt "else" stmt  */
#line 324 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2475 "src/parser.c"
    break;

  case 86: /* breaks: "return"  */
#line 328 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2481 "src/parser.c"
    break;

  case 87: /* breaks: "break"  */
#line 329 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2487 "src/parser.c"
    break;

  case 88: /* breaks: "continue"  */
#line 330 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2493 "src/parser.c"
    break;

  case 89: /* jump_stmt: "return" exp ";"  */
#line 333 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2499 "src/parser.c"
    break;

  case 90: /* jump_stmt: breaks ";"  */
#line 334 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2505 "src/parser.c"
    break;

  case 91: /* _exp_stmt: ";" _exp_stmt  */
#line 337 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2511 "src/parser.c"
    break;

  case 92: /* _exp_stmt: ";"  */
#line 337 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2517 "src/parser.c"
    break;

  case 93: /* exp_stmt: exp ";"  */
#line 340 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2523 "src/parser.c"
    break;

  case 94: /* exp_stmt: _exp_stmt  */
#line 341 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2529 "src/parser.c"
    break;

  case 96: /* exp: binary_exp "," exp  */
#line 344 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2535 "src/parser.c"
    break;

  case 98: /* binary_exp: binary_exp OPID_A decl_exp  */
#line 348 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2541 "src/parser.c"
    break;

  case 99: /* binary_exp: binary_exp op decl_exp  */
#line 349 "src/gwion.y"
                               { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2547 "src/parser.c"
    break;

  case 100: /* call_template: ":[" type_list "]"  */
#line 351 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2553 "src/parser.c"
    break;

  case 101: /* call_template: %empty  */
#line 351 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2559 "src/parser.c"
    break;

  case 105: /* array_exp: "[" exp "]"  */
#line 356 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2565 "src/parser.c"
    break;

  case 106: /* array_exp: "[" exp "]" array_exp  */
#line 357 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2571 "src/parser.c"
    break;

  case 107: /* array_exp: "[" exp "]" array_empty  */
#line 358 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2577 "src/parser.c"
    break;

  case 108: /* array_empty: "[" "]"  */
#line 362 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2583 "src/parser.c"
    break;

  case 109: /* array_empty: array_empty "[" "]"  */
#line 363 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2589 "src/parser.c"
    break;

  case 110: /* array_empty: array_empty array_exp  */
#line 364 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2595 "src/parser.c"
    break;

  case 111: /* range: "[" exp ":" exp "]"  */
#line 368 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2601 "src/parser.c"
    break;

  case 112: /* range: "[" exp ":" "]"  */
#line 369 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2607 "src/parser.c"
    break;

  case 113: /* range: "[" ":" exp "]"  */
#line 370 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2613 "src/parser.c"
    break;

  case 117: /* decl_exp: type_decl_flag2 flag type_decl_noflag var_decl_list  */
#line 376 "src/gwion.y"
                                                        { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2619 "src/parser.c"
    break;

  case 118: /* union_exp: type_decl_noflag arg_decl  */
#line 378 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2625 "src/parser.c"
    break;

  case 119: /* func_args: "(" arg_list  */
#line 380 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2631 "src/parser.c"
    break;

  case 120: /* func_args: "("  */
#line 380 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2637 "src/parser.c"
    break;

  case 121: /* fptr_args: "(" fptr_list  */
#line 381 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2643 "src/parser.c"
    break;

  case 122: /* fptr_args: "("  */
#line 381 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2649 "src/parser.c"
    break;

  case 123: /* arg_type: "..." ")"  */
#line 382 "src/gwion.y"
                         { (yyval.fbflag) = fbflag_variadic; }
#line 2655 "src/parser.c"
    break;

  case 124: /* arg_type: ")"  */
#line 382 "src/gwion.y"
                                                           { (yyval.fbflag) = 0; }
#line 2661 "src/parser.c"
    break;

  case 125: /* decl_template: ":[" id_list "]"  */
#line 384 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2667 "src/parser.c"
    break;

  case 126: /* decl_template: %empty  */
#line 384 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2673 "src/parser.c"
    break;

  case 127: /* storage_flag: "static"  */
#line 386 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2679 "src/parser.c"
    break;

  case 128: /* storage_flag: "global"  */
#line 387 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2685 "src/parser.c"
    break;

  case 129: /* access_flag: "private"  */
#line 390 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2691 "src/parser.c"
    break;

  case 130: /* access_flag: "protect"  */
#line 391 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 2697 "src/parser.c"
    break;

  case 131: /* flag: access_flag  */
#line 394 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2703 "src/parser.c"
    break;

  case 132: /* flag: storage_flag  */
#line 395 "src/gwion.y"
                  { (yyval.flag) = (yyvsp[0].flag); }
#line 2709 "src/parser.c"
    break;

  case 133: /* flag: access_flag storage_flag  */
#line 396 "src/gwion.y"
                              { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 2715 "src/parser.c"
    break;

  case 134: /* flag: %empty  */
#line 397 "src/gwion.y"
    { (yyval.flag) = ae_flag_none; }
#line 2721 "src/parser.c"
    break;

  case 135: /* final: "final"  */
#line 400 "src/gwion.y"
             { (yyval.flag) = ae_flag_final; }
#line 2727 "src/parser.c"
    break;

  case 136: /* final: %empty  */
#line 400 "src/gwion.y"
                                       { (yyval.flag) = ae_flag_none; }
#line 2733 "src/parser.c"
    break;

  case 137: /* modifier: "abstract"  */
#line 402 "src/gwion.y"
                   { (yyval.flag) = ae_flag_abstract; }
#line 2739 "src/parser.c"
    break;

  case 139: /* func_def_base: "fun" func_base func_args arg_type code_stmt  */
#line 405 "src/gwion.y"
                                                    {
    (yyvsp[-3].func_base)->args = (yyvsp[-2].arg_list);
    (yyvsp[-3].func_base)->fbflag |= (yyvsp[-1].fbflag);
    (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-3].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc)));
  }
#line 2749 "src/parser.c"
    break;

  case 140: /* abstract_fdef: "fun" flag "abstract" type_decl_empty id decl_template fptr_args arg_type ";"  */
#line 413 "src/gwion.y"
    { Func_Base *base = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), NULL, (yyvsp[-7].flag) | ae_flag_abstract);
      if((yyvsp[-3].id_list))
        base->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-3].id_list));
      base->args = (yyvsp[-2].arg_list);
      base->fbflag |= (yyvsp[-1].fbflag);
      (yyval.func_def) = new_func_def(mpool(arg), base, NULL, GET_LOC(&(yyloc)));
    }
#line 2761 "src/parser.c"
    break;

  case 146: /* op_base: type_decl_empty op_op "(" arg "," arg ")"  */
#line 424 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-5].sym), (yyvsp[-3].arg_list), ae_flag_none); (yyvsp[-3].arg_list)->next = (yyvsp[-1].arg_list);}
#line 2767 "src/parser.c"
    break;

  case 147: /* op_base: type_decl_empty post_op "(" arg ")" code_stmt  */
#line 426 "src/gwion.y"
    { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-5].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list), ae_flag_none); }
#line 2773 "src/parser.c"
    break;

  case 148: /* op_base: unary_op type_decl_empty "(" arg ")"  */
#line 428 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_unary;
    }
#line 2782 "src/parser.c"
    break;

  case 149: /* op_base: type_decl_empty OPID_A func_args ")"  */
#line 433 "src/gwion.y"
    {
      (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[-1].arg_list), ae_flag_none);
      (yyval.func_base)->fbflag |= fbflag_internal;
    }
#line 2791 "src/parser.c"
    break;

  case 150: /* op_def: "operator" op_base code_stmt  */
#line 438 "src/gwion.y"
{ (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-1].func_base), (yyvsp[0].stmt), GET_LOC(&(yyloc))); }
#line 2797 "src/parser.c"
    break;

  case 153: /* func_def: op_def  */
#line 440 "src/gwion.y"
                                                 { (yyval.func_def) = (yyvsp[0].func_def); (yyval.func_def)->base->fbflag |= fbflag_op; }
#line 2803 "src/parser.c"
    break;

  case 154: /* ref: %empty  */
#line 442 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 2809 "src/parser.c"
    break;

  case 155: /* ref: "ref"  */
#line 442 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 2815 "src/parser.c"
    break;

  case 156: /* type_decl_tmpl: id call_template  */
#line 445 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 2821 "src/parser.c"
    break;

  case 158: /* type_decl_next: type_decl_tmpl "." type_decl_next  */
#line 450 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 2827 "src/parser.c"
    break;

  case 159: /* type_decl_noflag: type_decl_next  */
#line 454 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2833 "src/parser.c"
    break;

  case 160: /* type_decl_noflag: typeof_exp  */
#line 455 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 2839 "src/parser.c"
    break;

  case 162: /* type_decl: type_decl_flag type_decl_noflag  */
#line 458 "src/gwion.y"
                                                              { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 2845 "src/parser.c"
    break;

  case 163: /* type_decl_flag: "ref"  */
#line 461 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 2851 "src/parser.c"
    break;

  case 164: /* type_decl_flag: "const"  */
#line 462 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 2857 "src/parser.c"
    break;

  case 165: /* type_decl_flag: "nonnull"  */
#line 463 "src/gwion.y"
            { (yyval.flag) = ae_flag_nonnull; }
#line 2863 "src/parser.c"
    break;

  case 166: /* type_decl_flag: "nonnull" "ref"  */
#line 464 "src/gwion.y"
                { (yyval.flag) = ae_flag_nonnull | ae_flag_ref; }
#line 2869 "src/parser.c"
    break;

  case 167: /* type_decl_flag: "const" "ref"  */
#line 465 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 2875 "src/parser.c"
    break;

  case 168: /* type_decl_flag: "const" "nonnull"  */
#line 466 "src/gwion.y"
                   { (yyval.flag) = ae_flag_const | ae_flag_nonnull; }
#line 2881 "src/parser.c"
    break;

  case 169: /* type_decl_flag: "const" "nonnull" "ref"  */
#line 467 "src/gwion.y"
                       { (yyval.flag) = ae_flag_const | ae_flag_nonnull | ae_flag_ref; }
#line 2887 "src/parser.c"
    break;

  case 170: /* type_decl_flag2: "var"  */
#line 469 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 2893 "src/parser.c"
    break;

  case 172: /* decl_list: union_exp ";"  */
#line 471 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 2899 "src/parser.c"
    break;

  case 173: /* decl_list: union_exp ";" decl_list  */
#line 472 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 2905 "src/parser.c"
    break;

  case 174: /* union_def: "union" flag opt_id decl_template "{" decl_list "}" opt_id ";"  */
#line 475 "src/gwion.y"
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
#line 2927 "src/parser.c"
    break;

  case 175: /* var_decl_list: var_decl  */
#line 495 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 2933 "src/parser.c"
    break;

  case 176: /* var_decl_list: var_decl "," var_decl_list  */
#line 496 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 2939 "src/parser.c"
    break;

  case 177: /* var_decl: id  */
#line 499 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2945 "src/parser.c"
    break;

  case 178: /* var_decl: id array  */
#line 500 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2951 "src/parser.c"
    break;

  case 179: /* arg_decl: id  */
#line 502 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 2957 "src/parser.c"
    break;

  case 180: /* arg_decl: id array_empty  */
#line 503 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 2963 "src/parser.c"
    break;

  case 181: /* arg_decl: id array_exp  */
#line 504 "src/gwion.y"
                 { gwion_error(&(yyloc), arg, "argument/union must be defined with empty []'s"); YYERROR; }
#line 2969 "src/parser.c"
    break;

  case 183: /* fptr_arg_decl: %empty  */
#line 505 "src/gwion.y"
                          { (yyval.var_decl) = new_var_decl(mpool(arg), NULL, NULL, GET_LOC(&(yyloc))); }
#line 2975 "src/parser.c"
    break;

  case 198: /* opt_exp: %empty  */
#line 513 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 2981 "src/parser.c"
    break;

  case 200: /* con_exp: log_or_exp "?" opt_exp ":" con_exp  */
#line 516 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2987 "src/parser.c"
    break;

  case 201: /* con_exp: log_or_exp "?:" con_exp  */
#line 518 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 2993 "src/parser.c"
    break;

  case 203: /* log_or_exp: log_or_exp "||" log_and_exp  */
#line 520 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2999 "src/parser.c"
    break;

  case 205: /* log_and_exp: log_and_exp "&&" inc_or_exp  */
#line 521 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3005 "src/parser.c"
    break;

  case 207: /* inc_or_exp: inc_or_exp "|" exc_or_exp  */
#line 522 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3011 "src/parser.c"
    break;

  case 209: /* exc_or_exp: exc_or_exp "^" and_exp  */
#line 523 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3017 "src/parser.c"
    break;

  case 211: /* and_exp: and_exp "&" eq_exp  */
#line 524 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3023 "src/parser.c"
    break;

  case 213: /* eq_exp: eq_exp eq_op rel_exp  */
#line 525 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3029 "src/parser.c"
    break;

  case 215: /* rel_exp: rel_exp rel_op shift_exp  */
#line 526 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3035 "src/parser.c"
    break;

  case 217: /* shift_exp: shift_exp shift_op add_exp  */
#line 527 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3041 "src/parser.c"
    break;

  case 219: /* add_exp: add_exp add_op mul_exp  */
#line 528 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3047 "src/parser.c"
    break;

  case 221: /* mul_exp: mul_exp mul_op dur_exp  */
#line 529 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3053 "src/parser.c"
    break;

  case 223: /* dur_exp: dur_exp "::" cast_exp  */
#line 530 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3059 "src/parser.c"
    break;

  case 225: /* cast_exp: cast_exp "$" type_decl_empty  */
#line 533 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3065 "src/parser.c"
    break;

  case 234: /* unary_exp: unary_op unary_exp  */
#line 540 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3071 "src/parser.c"
    break;

  case 235: /* unary_exp: "(" OPID_D ")" unary_exp  */
#line 541 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 3077 "src/parser.c"
    break;

  case 236: /* unary_exp: "new" type_decl_exp  */
#line 542 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3083 "src/parser.c"
    break;

  case 237: /* unary_exp: "spork" code_stmt  */
#line 543 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3089 "src/parser.c"
    break;

  case 238: /* unary_exp: "fork" code_stmt  */
#line 544 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3095 "src/parser.c"
    break;

  case 239: /* lambda_list: id  */
#line 547 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3101 "src/parser.c"
    break;

  case 240: /* lambda_list: id lambda_list  */
#line 548 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3107 "src/parser.c"
    break;

  case 241: /* lambda_arg: "\\" lambda_list  */
#line 549 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3113 "src/parser.c"
    break;

  case 242: /* lambda_arg: "\\"  */
#line 549 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3119 "src/parser.c"
    break;

  case 243: /* type_list: type_decl_empty  */
#line 552 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3125 "src/parser.c"
    break;

  case 244: /* type_list: type_decl_empty "," type_list  */
#line 553 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3131 "src/parser.c"
    break;

  case 245: /* call_paren: "(" exp ")"  */
#line 556 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3137 "src/parser.c"
    break;

  case 246: /* call_paren: "(" ")"  */
#line 556 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3143 "src/parser.c"
    break;

  case 249: /* dot_exp: post_exp "." id  */
#line 560 "src/gwion.y"
                         {
  if((yyvsp[-2].exp)->next) {
    gwion_error(&(yyloc), arg, "can't use multiple expression"
      " in dot member base expression");
    YYERROR;
  };
  (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym));
}
#line 3156 "src/parser.c"
    break;

  case 251: /* post_exp: post_exp array_exp  */
#line 570 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3162 "src/parser.c"
    break;

  case 252: /* post_exp: post_exp range  */
#line 572 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3168 "src/parser.c"
    break;

  case 253: /* post_exp: post_exp call_template call_paren  */
#line 574 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3175 "src/parser.c"
    break;

  case 254: /* post_exp: post_exp post_op  */
#line 577 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3181 "src/parser.c"
    break;

  case 255: /* post_exp: post_exp OPID_D  */
#line 579 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3187 "src/parser.c"
    break;

  case 256: /* post_exp: dot_exp  */
#line 580 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3193 "src/parser.c"
    break;

  case 257: /* interp_exp: "<interp string>`"  */
#line 584 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3199 "src/parser.c"
    break;

  case 258: /* interp_exp: "<interp string>" interp_exp  */
#line 585 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3205 "src/parser.c"
    break;

  case 259: /* interp_exp: exp INTERP_EXP interp_exp  */
#line 586 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3211 "src/parser.c"
    break;

  case 260: /* interp: "`" interp_exp  */
#line 588 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3217 "src/parser.c"
    break;

  case 261: /* interp: interp "`" interp_exp  */
#line 589 "src/gwion.y"
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
#line 3232 "src/parser.c"
    break;

  case 262: /* typeof_exp: "typeof" "(" exp ")"  */
#line 600 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3238 "src/parser.c"
    break;

  case 263: /* prim_exp: id  */
#line 603 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3244 "src/parser.c"
    break;

  case 264: /* prim_exp: "<integer>"  */
#line 604 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3250 "src/parser.c"
    break;

  case 265: /* prim_exp: FLOATT  */
#line 605 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3256 "src/parser.c"
    break;

  case 266: /* prim_exp: interp  */
#line 606 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp)); }
#line 3262 "src/parser.c"
    break;

  case 267: /* prim_exp: "<litteral string>"  */
#line 607 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3268 "src/parser.c"
    break;

  case 268: /* prim_exp: "<litteral char>"  */
#line 608 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3274 "src/parser.c"
    break;

  case 269: /* prim_exp: array  */
#line 609 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3280 "src/parser.c"
    break;

  case 270: /* prim_exp: range  */
#line 610 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3286 "src/parser.c"
    break;

  case 271: /* prim_exp: "<<<" exp ">>>"  */
#line 611 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3292 "src/parser.c"
    break;

  case 272: /* prim_exp: "(" exp ")"  */
#line 612 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3298 "src/parser.c"
    break;

  case 273: /* prim_exp: lambda_arg code_stmt  */
#line 613 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3304 "src/parser.c"
    break;

  case 274: /* prim_exp: "(" ")"  */
#line 614 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3310 "src/parser.c"
    break;

  case 275: /* prim_exp: typeof_exp  */
#line 615 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3316 "src/parser.c"
    break;


#line 3320 "src/parser.c"

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

#line 617 "src/gwion.y"

