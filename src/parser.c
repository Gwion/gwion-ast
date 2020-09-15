/* A Bison parser, made by GNU Bison 3.6.4.  */

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
#define YYBISON_VERSION "3.6.4"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEMICOLON = 258,               /* ";"  */
    COMMA = 259,                   /* ","  */
    LPAREN = 260,                  /* "("  */
    RPAREN = 261,                  /* ")"  */
    LBRACK = 262,                  /* "["  */
    RBRACK = 263,                  /* "]"  */
    LBRACE = 264,                  /* "{"  */
    RBRACE = 265,                  /* "}"  */
    FUNCTION = 266,                /* "fun"  */
    VAR = 267,                     /* "var"  */
    IF = 268,                      /* "if"  */
    ELSE = 269,                    /* "else"  */
    WHILE = 270,                   /* "while"  */
    DO = 271,                      /* "do"  */
    UNTIL = 272,                   /* "until"  */
    LOOP = 273,                    /* "repeat"  */
    FOR = 274,                     /* "for"  */
    FOREACH = 275,                 /* "foreach"  */
    GOTO = 276,                    /* "goto"  */
    MATCH = 277,                   /* "match"  */
    CASE = 278,                    /* "case"  */
    WHEN = 279,                    /* "when"  */
    WHERE = 280,                   /* "where"  */
    ENUM = 281,                    /* "enum"  */
    TRETURN = 282,                 /* "return"  */
    BREAK = 283,                   /* "break"  */
    CONTINUE = 284,                /* "continue"  */
    CLASS = 285,                   /* "class"  */
    STRUCT = 286,                  /* "struct"  */
    STATIC = 287,                  /* "static"  */
    GLOBAL = 288,                  /* "global"  */
    PRIVATE = 289,                 /* "private"  */
    PROTECT = 290,                 /* "protect"  */
    EXTENDS = 291,                 /* "extends"  */
    DOT = 292,                     /* "."  */
    OPERATOR = 293,                /* "operator"  */
    TYPEDEF = 294,                 /* "typedef"  */
    NOELSE = 295,                  /* NOELSE  */
    UNION = 296,                   /* "union"  */
    CONSTT = 297,                  /* "const"  */
    PASTE = 298,                   /* "##"  */
    ELLIPSE = 299,                 /* "..."  */
    VARLOOP = 300,                 /* "varloop"  */
    BACKSLASH = 301,               /* "\\"  */
    OPID_A = 302,                  /* OPID_A  */
    OPID_D = 303,                  /* OPID_D  */
    REF = 304,                     /* "ref"  */
    NONNULL = 305,                 /* "nonnull"  */
    NUM = 306,                     /* "<integer>"  */
    FLOATT = 307,                  /* FLOATT  */
    ID = 308,                      /* "<identifier>"  */
    STRING_LIT = 309,              /* "<litteral string>"  */
    CHAR_LIT = 310,                /* "<litteral char>"  */
    INTERP_START = 311,            /* "`"  */
    INTERP_LIT = 312,              /* "<interp string>"  */
    INTERP_EXP = 313,              /* INTERP_EXP  */
    INTERP_END = 314,              /* "<interp string>`"  */
    PP_COMMENT = 315,              /* "<comment>"  */
    PP_INCLUDE = 316,              /* "#include"  */
    PP_DEFINE = 317,               /* "#define"  */
    PP_PRAGMA = 318,               /* "#pragma"  */
    PP_UNDEF = 319,                /* "#undef"  */
    PP_IFDEF = 320,                /* "#ifdef"  */
    PP_IFNDEF = 321,               /* "#ifndef"  */
    PP_ELSE = 322,                 /* "#else"  */
    PP_ENDIF = 323,                /* "#if"  */
    PP_NL = 324,                   /* "\n"  */
    PLUS = 327,                    /* "+"  */
    PLUSPLUS = 328,                /* "++"  */
    MINUS = 329,                   /* "-"  */
    MINUSMINUS = 330,              /* "--"  */
    TIMES = 331,                   /* "*"  */
    DIVIDE = 332,                  /* "/"  */
    PERCENT = 333,                 /* "%"  */
    DOLLAR = 334,                  /* "$"  */
    QUESTION = 335,                /* "?"  */
    COLON = 336,                   /* ":"  */
    COLONCOLON = 337,              /* "::"  */
    QUESTIONCOLON = 338,           /* "?:"  */
    NEW = 339,                     /* "new"  */
    SPORK = 340,                   /* "spork"  */
    FORK = 341,                    /* "fork"  */
    TYPEOF = 342,                  /* "typeof"  */
    L_HACK = 343,                  /* "<<<"  */
    R_HACK = 344,                  /* ">>>"  */
    AND = 345,                     /* "&&"  */
    EQ = 346,                      /* "=="  */
    GE = 347,                      /* ">="  */
    GT = 348,                      /* ">"  */
    LE = 349,                      /* "<="  */
    LT = 350,                      /* "<"  */
    NEQ = 351,                     /* "!="  */
    SHIFT_LEFT = 352,              /* "<<"  */
    SHIFT_RIGHT = 353,             /* ">>"  */
    S_AND = 354,                   /* "&"  */
    S_OR = 355,                    /* "|"  */
    S_XOR = 356,                   /* "^"  */
    OR = 357,                      /* "||"  */
    TMPL = 358,                    /* ":["  */
    TILDA = 359,                   /* "~"  */
    EXCLAMATION = 360,             /* "!"  */
    DYNOP = 361,                   /* "<dynamic_operator>"  */
    UMINUS = 362,                  /* UMINUS  */
    UTIMES = 363                   /* UTIMES  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SEMICOLON 258
#define COMMA 259
#define LPAREN 260
#define RPAREN 261
#define LBRACK 262
#define RBRACK 263
#define LBRACE 264
#define RBRACE 265
#define FUNCTION 266
#define VAR 267
#define IF 268
#define ELSE 269
#define WHILE 270
#define DO 271
#define UNTIL 272
#define LOOP 273
#define FOR 274
#define FOREACH 275
#define GOTO 276
#define MATCH 277
#define CASE 278
#define WHEN 279
#define WHERE 280
#define ENUM 281
#define TRETURN 282
#define BREAK 283
#define CONTINUE 284
#define CLASS 285
#define STRUCT 286
#define STATIC 287
#define GLOBAL 288
#define PRIVATE 289
#define PROTECT 290
#define EXTENDS 291
#define DOT 292
#define OPERATOR 293
#define TYPEDEF 294
#define NOELSE 295
#define UNION 296
#define CONSTT 297
#define PASTE 298
#define ELLIPSE 299
#define VARLOOP 300
#define BACKSLASH 301
#define OPID_A 302
#define OPID_D 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_START 311
#define INTERP_LIT 312
#define INTERP_EXP 313
#define INTERP_END 314
#define PP_COMMENT 315
#define PP_INCLUDE 316
#define PP_DEFINE 317
#define PP_PRAGMA 318
#define PP_UNDEF 319
#define PP_IFDEF 320
#define PP_IFNDEF 321
#define PP_ELSE 322
#define PP_ENDIF 323
#define PP_NL 324
#define PLUS 327
#define PLUSPLUS 328
#define MINUS 329
#define MINUSMINUS 330
#define TIMES 331
#define DIVIDE 332
#define PERCENT 333
#define DOLLAR 334
#define QUESTION 335
#define COLON 336
#define COLONCOLON 337
#define QUESTIONCOLON 338
#define NEW 339
#define SPORK 340
#define FORK 341
#define TYPEOF 342
#define L_HACK 343
#define R_HACK 344
#define AND 345
#define EQ 346
#define GE 347
#define GT 348
#define LE 349
#define LT 350
#define NEQ 351
#define SHIFT_LEFT 352
#define SHIFT_RIGHT 353
#define S_AND 354
#define S_OR 355
#define S_XOR 356
#define OR 357
#define TMPL 358
#define TILDA 359
#define EXCLAMATION 360
#define DYNOP 361
#define UMINUS 362
#define UTIMES 363

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
  Range* range;
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Def class_def;
  Ast ast;

#line 388 "src/parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int gwion_parse (Scanner* arg);

#endif /* !YY_GWION_INCLUDE_PARSER_H_INCLUDED  */
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
  YYSYMBOL_EXTENDS = 36,                   /* "extends"  */
  YYSYMBOL_DOT = 37,                       /* "."  */
  YYSYMBOL_OPERATOR = 38,                  /* "operator"  */
  YYSYMBOL_TYPEDEF = 39,                   /* "typedef"  */
  YYSYMBOL_NOELSE = 40,                    /* NOELSE  */
  YYSYMBOL_UNION = 41,                     /* "union"  */
  YYSYMBOL_CONSTT = 42,                    /* "const"  */
  YYSYMBOL_PASTE = 43,                     /* "##"  */
  YYSYMBOL_ELLIPSE = 44,                   /* "..."  */
  YYSYMBOL_VARLOOP = 45,                   /* "varloop"  */
  YYSYMBOL_BACKSLASH = 46,                 /* "\\"  */
  YYSYMBOL_OPID_A = 47,                    /* OPID_A  */
  YYSYMBOL_OPID_D = 48,                    /* OPID_D  */
  YYSYMBOL_REF = 49,                       /* "ref"  */
  YYSYMBOL_NONNULL = 50,                   /* "nonnull"  */
  YYSYMBOL_NUM = 51,                       /* "<integer>"  */
  YYSYMBOL_FLOATT = 52,                    /* FLOATT  */
  YYSYMBOL_ID = 53,                        /* "<identifier>"  */
  YYSYMBOL_STRING_LIT = 54,                /* "<litteral string>"  */
  YYSYMBOL_CHAR_LIT = 55,                  /* "<litteral char>"  */
  YYSYMBOL_INTERP_START = 56,              /* "`"  */
  YYSYMBOL_INTERP_LIT = 57,                /* "<interp string>"  */
  YYSYMBOL_INTERP_EXP = 58,                /* INTERP_EXP  */
  YYSYMBOL_INTERP_END = 59,                /* "<interp string>`"  */
  YYSYMBOL_PP_COMMENT = 60,                /* "<comment>"  */
  YYSYMBOL_PP_INCLUDE = 61,                /* "#include"  */
  YYSYMBOL_PP_DEFINE = 62,                 /* "#define"  */
  YYSYMBOL_PP_PRAGMA = 63,                 /* "#pragma"  */
  YYSYMBOL_PP_UNDEF = 64,                  /* "#undef"  */
  YYSYMBOL_PP_IFDEF = 65,                  /* "#ifdef"  */
  YYSYMBOL_PP_IFNDEF = 66,                 /* "#ifndef"  */
  YYSYMBOL_PP_ELSE = 67,                   /* "#else"  */
  YYSYMBOL_PP_ENDIF = 68,                  /* "#if"  */
  YYSYMBOL_PP_NL = 69,                     /* "\n"  */
  YYSYMBOL_70_operator_id_ = 70,           /* "@<operator id>"  */
  YYSYMBOL_71_operator_id_ = 71,           /* "$<operator id>"  */
  YYSYMBOL_PLUS = 72,                      /* "+"  */
  YYSYMBOL_PLUSPLUS = 73,                  /* "++"  */
  YYSYMBOL_MINUS = 74,                     /* "-"  */
  YYSYMBOL_MINUSMINUS = 75,                /* "--"  */
  YYSYMBOL_TIMES = 76,                     /* "*"  */
  YYSYMBOL_DIVIDE = 77,                    /* "/"  */
  YYSYMBOL_PERCENT = 78,                   /* "%"  */
  YYSYMBOL_DOLLAR = 79,                    /* "$"  */
  YYSYMBOL_QUESTION = 80,                  /* "?"  */
  YYSYMBOL_COLON = 81,                     /* ":"  */
  YYSYMBOL_COLONCOLON = 82,                /* "::"  */
  YYSYMBOL_QUESTIONCOLON = 83,             /* "?:"  */
  YYSYMBOL_NEW = 84,                       /* "new"  */
  YYSYMBOL_SPORK = 85,                     /* "spork"  */
  YYSYMBOL_FORK = 86,                      /* "fork"  */
  YYSYMBOL_TYPEOF = 87,                    /* "typeof"  */
  YYSYMBOL_L_HACK = 88,                    /* "<<<"  */
  YYSYMBOL_R_HACK = 89,                    /* ">>>"  */
  YYSYMBOL_AND = 90,                       /* "&&"  */
  YYSYMBOL_EQ = 91,                        /* "=="  */
  YYSYMBOL_GE = 92,                        /* ">="  */
  YYSYMBOL_GT = 93,                        /* ">"  */
  YYSYMBOL_LE = 94,                        /* "<="  */
  YYSYMBOL_LT = 95,                        /* "<"  */
  YYSYMBOL_NEQ = 96,                       /* "!="  */
  YYSYMBOL_SHIFT_LEFT = 97,                /* "<<"  */
  YYSYMBOL_SHIFT_RIGHT = 98,               /* ">>"  */
  YYSYMBOL_S_AND = 99,                     /* "&"  */
  YYSYMBOL_S_OR = 100,                     /* "|"  */
  YYSYMBOL_S_XOR = 101,                    /* "^"  */
  YYSYMBOL_OR = 102,                       /* "||"  */
  YYSYMBOL_TMPL = 103,                     /* ":["  */
  YYSYMBOL_TILDA = 104,                    /* "~"  */
  YYSYMBOL_EXCLAMATION = 105,              /* "!"  */
  YYSYMBOL_DYNOP = 106,                    /* "<dynamic_operator>"  */
  YYSYMBOL_UMINUS = 107,                   /* UMINUS  */
  YYSYMBOL_UTIMES = 108,                   /* UTIMES  */
  YYSYMBOL_109_ = 109,                     /* "="  */
  YYSYMBOL_YYACCEPT = 110,                 /* $accept  */
  YYSYMBOL_prg = 111,                      /* prg  */
  YYSYMBOL_ast = 112,                      /* ast  */
  YYSYMBOL_section = 113,                  /* section  */
  YYSYMBOL_class_type = 114,               /* class_type  */
  YYSYMBOL_class_def = 115,                /* class_def  */
  YYSYMBOL_class_ext = 116,                /* class_ext  */
  YYSYMBOL_class_body = 117,               /* class_body  */
  YYSYMBOL_id_list = 118,                  /* id_list  */
  YYSYMBOL_stmt_list = 119,                /* stmt_list  */
  YYSYMBOL_fptr_base = 120,                /* fptr_base  */
  YYSYMBOL_fdef_base = 121,                /* fdef_base  */
  YYSYMBOL_fptr_def = 122,                 /* fptr_def  */
  YYSYMBOL_type_def = 123,                 /* type_def  */
  YYSYMBOL_type_decl_array = 124,          /* type_decl_array  */
  YYSYMBOL_type_decl_exp = 125,            /* type_decl_exp  */
  YYSYMBOL_type_decl_empty = 126,          /* type_decl_empty  */
  YYSYMBOL_arg = 127,                      /* arg  */
  YYSYMBOL_arg_list = 128,                 /* arg_list  */
  YYSYMBOL_fptr_arg = 129,                 /* fptr_arg  */
  YYSYMBOL_fptr_list = 130,                /* fptr_list  */
  YYSYMBOL_code_stmt = 131,                /* code_stmt  */
  YYSYMBOL_stmt_pp = 132,                  /* stmt_pp  */
  YYSYMBOL_stmt = 133,                     /* stmt  */
  YYSYMBOL_id = 134,                       /* id  */
  YYSYMBOL_opt_id = 135,                   /* opt_id  */
  YYSYMBOL_enum_def = 136,                 /* enum_def  */
  YYSYMBOL_label_stmt = 137,               /* label_stmt  */
  YYSYMBOL_goto_stmt = 138,                /* goto_stmt  */
  YYSYMBOL_when_exp = 139,                 /* when_exp  */
  YYSYMBOL_match_case_stmt = 140,          /* match_case_stmt  */
  YYSYMBOL_match_list = 141,               /* match_list  */
  YYSYMBOL_where_stmt = 142,               /* where_stmt  */
  YYSYMBOL_match_stmt = 143,               /* match_stmt  */
  YYSYMBOL_flow = 144,                     /* flow  */
  YYSYMBOL_loop_stmt = 145,                /* loop_stmt  */
  YYSYMBOL_varloop_stmt = 146,             /* varloop_stmt  */
  YYSYMBOL_selection_stmt = 147,           /* selection_stmt  */
  YYSYMBOL_breaks = 148,                   /* breaks  */
  YYSYMBOL_jump_stmt = 149,                /* jump_stmt  */
  YYSYMBOL__exp_stmt = 150,                /* _exp_stmt  */
  YYSYMBOL_exp_stmt = 151,                 /* exp_stmt  */
  YYSYMBOL_exp = 152,                      /* exp  */
  YYSYMBOL_binary_exp = 153,               /* binary_exp  */
  YYSYMBOL_call_template = 154,            /* call_template  */
  YYSYMBOL_op = 155,                       /* op  */
  YYSYMBOL_array_exp = 156,                /* array_exp  */
  YYSYMBOL_array_empty = 157,              /* array_empty  */
  YYSYMBOL_range = 158,                    /* range  */
  YYSYMBOL_array = 159,                    /* array  */
  YYSYMBOL_decl_exp = 160,                 /* decl_exp  */
  YYSYMBOL_union_exp = 161,                /* union_exp  */
  YYSYMBOL_func_args = 162,                /* func_args  */
  YYSYMBOL_fptr_args = 163,                /* fptr_args  */
  YYSYMBOL_arg_type = 164,                 /* arg_type  */
  YYSYMBOL_decl_template = 165,            /* decl_template  */
  YYSYMBOL_storage_flag = 166,             /* storage_flag  */
  YYSYMBOL_access_flag = 167,              /* access_flag  */
  YYSYMBOL_flag = 168,                     /* flag  */
  YYSYMBOL_func_def_base = 169,            /* func_def_base  */
  YYSYMBOL_op_op = 170,                    /* op_op  */
  YYSYMBOL_func_def = 171,                 /* func_def  */
  YYSYMBOL_ref = 172,                      /* ref  */
  YYSYMBOL_type_decl_tmpl = 173,           /* type_decl_tmpl  */
  YYSYMBOL_type_decl_next = 174,           /* type_decl_next  */
  YYSYMBOL_type_decl_noflag = 175,         /* type_decl_noflag  */
  YYSYMBOL_type_decl = 176,                /* type_decl  */
  YYSYMBOL_type_decl_flag = 177,           /* type_decl_flag  */
  YYSYMBOL_type_decl_flag2 = 178,          /* type_decl_flag2  */
  YYSYMBOL_decl_list = 179,                /* decl_list  */
  YYSYMBOL_union_def = 180,                /* union_def  */
  YYSYMBOL_var_decl_list = 181,            /* var_decl_list  */
  YYSYMBOL_var_decl = 182,                 /* var_decl  */
  YYSYMBOL_arg_decl = 183,                 /* arg_decl  */
  YYSYMBOL_fptr_arg_decl = 184,            /* fptr_arg_decl  */
  YYSYMBOL_eq_op = 185,                    /* eq_op  */
  YYSYMBOL_rel_op = 186,                   /* rel_op  */
  YYSYMBOL_shift_op = 187,                 /* shift_op  */
  YYSYMBOL_add_op = 188,                   /* add_op  */
  YYSYMBOL_mul_op = 189,                   /* mul_op  */
  YYSYMBOL_opt_exp = 190,                  /* opt_exp  */
  YYSYMBOL_con_exp = 191,                  /* con_exp  */
  YYSYMBOL_log_or_exp = 192,               /* log_or_exp  */
  YYSYMBOL_log_and_exp = 193,              /* log_and_exp  */
  YYSYMBOL_inc_or_exp = 194,               /* inc_or_exp  */
  YYSYMBOL_exc_or_exp = 195,               /* exc_or_exp  */
  YYSYMBOL_and_exp = 196,                  /* and_exp  */
  YYSYMBOL_eq_exp = 197,                   /* eq_exp  */
  YYSYMBOL_rel_exp = 198,                  /* rel_exp  */
  YYSYMBOL_shift_exp = 199,                /* shift_exp  */
  YYSYMBOL_add_exp = 200,                  /* add_exp  */
  YYSYMBOL_mul_exp = 201,                  /* mul_exp  */
  YYSYMBOL_dur_exp = 202,                  /* dur_exp  */
  YYSYMBOL_cast_exp = 203,                 /* cast_exp  */
  YYSYMBOL_unary_op = 204,                 /* unary_op  */
  YYSYMBOL_unary_exp = 205,                /* unary_exp  */
  YYSYMBOL_lambda_list = 206,              /* lambda_list  */
  YYSYMBOL_lambda_arg = 207,               /* lambda_arg  */
  YYSYMBOL_type_list = 208,                /* type_list  */
  YYSYMBOL_call_paren = 209,               /* call_paren  */
  YYSYMBOL_post_op = 210,                  /* post_op  */
  YYSYMBOL_dot_exp = 211,                  /* dot_exp  */
  YYSYMBOL_post_exp = 212,                 /* post_exp  */
  YYSYMBOL_interp_exp = 213,               /* interp_exp  */
  YYSYMBOL_interp = 214,                   /* interp  */
  YYSYMBOL_typeof_exp = 215,               /* typeof_exp  */
  YYSYMBOL_prim_exp = 216                  /* prim_exp  */
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
#define YYFINAL  190
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  441

#define YYMAXUTOK   364


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
     105,   106,   107,   108,   109
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   149,   150,   151,   152,
     153,   154,   155,   158,   158,   160,   169,   169,   171,   171,
     173,   173,   175,   175,   177,   179,   182,   189,   196,   196,
     198,   202,   207,   208,   210,   211,   220,   221,   221,   228,
     229,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   259,   260,   267,   267,   270,   273,   275,   277,   277,
     280,   288,   289,   291,   291,   293,   301,   302,   305,   307,
     309,   311,   313,   315,   319,   322,   324,   329,   330,   331,
     334,   335,   338,   338,   341,   342,   345,   345,   348,   349,
     350,   352,   352,   354,   354,   354,   357,   358,   359,   363,
     364,   365,   369,   370,   371,   374,   374,   376,   377,   379,
     381,   381,   382,   382,   383,   383,   385,   385,   387,   388,
     391,   392,   395,   396,   397,   398,   402,   405,   405,   405,
     405,   405,   408,   409,   411,   413,   415,   420,   420,   423,
     427,   428,   432,   433,   436,   436,   439,   440,   441,   442,
     443,   444,   445,   447,   447,   449,   450,   453,   473,   474,
     477,   478,   480,   481,   482,   483,   485,   485,   486,   486,
     486,   486,   487,   487,   488,   488,   489,   489,   489,   491,
     491,   492,   493,   495,   498,   498,   499,   499,   500,   500,
     501,   501,   502,   502,   503,   503,   504,   504,   505,   505,
     506,   506,   507,   507,   508,   508,   510,   510,   513,   513,
     513,   514,   514,   514,   514,   517,   518,   519,   520,   521,
     522,   525,   526,   527,   527,   530,   531,   534,   534,   536,
     536,   538,   539,   540,   542,   544,   547,   549,   551,   555,
     556,   557,   559,   560,   574,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   588,   589
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
  "\"global\"", "\"private\"", "\"protect\"", "\"extends\"", "\".\"",
  "\"operator\"", "\"typedef\"", "NOELSE", "\"union\"", "\"const\"",
  "\"##\"", "\"...\"", "\"varloop\"", "\"\\\\\"", "OPID_A", "OPID_D",
  "\"ref\"", "\"nonnull\"", "\"<integer>\"", "FLOATT", "\"<identifier>\"",
  "\"<litteral string>\"", "\"<litteral char>\"", "\"`\"",
  "\"<interp string>\"", "INTERP_EXP", "\"<interp string>`\"",
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
  "fptr_base", "fdef_base", "fptr_def", "type_def", "type_decl_array",
  "type_decl_exp", "type_decl_empty", "arg", "arg_list", "fptr_arg",
  "fptr_list", "code_stmt", "stmt_pp", "stmt", "id", "opt_id", "enum_def",
  "label_stmt", "goto_stmt", "when_exp", "match_case_stmt", "match_list",
  "where_stmt", "match_stmt", "flow", "loop_stmt", "varloop_stmt",
  "selection_stmt", "breaks", "jump_stmt", "_exp_stmt", "exp_stmt", "exp",
  "binary_exp", "call_template", "op", "array_exp", "array_empty", "range",
  "array", "decl_exp", "union_exp", "func_args", "fptr_args", "arg_type",
  "decl_template", "storage_flag", "access_flag", "flag", "func_def_base",
  "op_op", "func_def", "ref", "type_decl_tmpl", "type_decl_next",
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364
};
#endif

#define YYPACT_NINF (-303)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     579,    26,   841,   898,   682,    19,  -303,    36,  -303,   776,
    -303,    66,    89,    99,    12,  1354,    19,  1354,  -303,  -303,
    -303,  -303,  1430,    19,    19,    -1,  1354,    12,  -303,    59,
    -303,  -303,    70,  -303,  -303,   955,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
     147,   109,   109,   118,  1354,  -303,  -303,   124,  -303,   579,
      19,  -303,  -303,  -303,  -303,  -303,  -303,   776,    45,  -303,
    -303,  -303,  -303,   129,  -303,  -303,  -303,   136,  -303,  -303,
    -303,   142,    21,  -303,   141,  -303,  -303,  -303,  -303,  -303,
    -303,    19,  -303,  -303,   -36,    61,    49,    54,    51,   -51,
     -18,   -42,   -12,    60,    77,    81,  1409,  -303,   109,  -303,
    -303,    32,   100,  -303,  -303,  -303,  -303,   155,  -303,   161,
    1464,  -303,  1354,    16,  -303,   160,  -303,  -303,  -303,  -303,
      48,  -303,   147,  1354,    74,  1354,   475,   122,   170,   165,
      12,   172,   147,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,   147,  -303,
    -303,  -303,  -303,   147,   147,    12,  -303,   127,    37,    12,
    -303,  -303,    12,   955,  -303,   119,  -303,  -303,  -303,    76,
     143,  -303,  -303,   174,   -15,  -303,  -303,  -303,  1354,    93,
    -303,  -303,    12,  -303,  -303,  1354,  -303,  -303,  1354,  1354,
    1354,  1012,  -303,   -15,  1354,  1464,  1464,  1464,  1464,  1464,
    1464,  -303,  -303,  1464,  1464,  1464,  1464,  1464,  1464,   147,
     147,  -303,  -303,  1069,    12,  -303,   147,   178,  -303,  -303,
    -303,   955,  1464,  -303,   177,   174,  1126,  -303,  -303,    29,
    -303,    12,   182,  1354,   184,   475,  -303,    12,  -303,   168,
    -303,   186,  -303,   193,   194,   196,    29,    12,   101,  -303,
    -303,  -303,  -303,  -303,   955,  -303,    12,  1183,  -303,  -303,
     200,  -303,   101,   201,  -303,  -303,  -303,  -303,   202,    12,
    -303,   121,  -303,    61,    49,    54,    51,   -51,   -18,   -42,
     -12,    60,    77,    81,  -303,   203,  -303,   205,   206,  1240,
    -303,  -303,  -303,  -303,  -303,   141,  -303,   207,  -303,   210,
     109,   101,   776,   208,   776,  1297,   132,  1354,   168,   211,
      12,   147,   219,   147,   147,   214,   101,    12,   220,  -303,
    -303,  -303,   192,   776,   174,  -303,   226,  1464,   147,   147,
    -303,  -303,   225,  -303,  -303,  -303,   193,   218,  -303,  -303,
     776,   229,  1354,   212,  -303,   213,   227,   235,  -303,   236,
      12,   109,   238,   237,  -303,    95,   242,   -15,   147,   243,
    -303,  -303,    12,  -303,   239,  -303,  -303,  -303,   776,  -303,
     776,    10,  1354,   163,   776,  -303,  -303,    12,   147,   244,
     175,  -303,   147,   109,  -303,   147,  -303,  -303,   250,    12,
     248,  -303,   579,  -303,   109,  -303,  -303,   776,  -303,   776,
    -303,  -303,  -303,   251,   141,  1354,   240,  -303,   256,  -303,
      12,   -15,  -303,    12,  -303,   252,  -303,  -303,  -303,    -4,
     109,   147,   244,  -303,  -303,   258,  -303,  -303,  -303,   141,
    -303
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,    93,     0,     0,     0,   132,   163,     0,    76,     0,
      77,     0,     0,     0,     0,     0,   132,    87,    88,    89,
      13,    14,     0,   132,   132,   157,     0,   234,   156,   158,
     256,   257,    61,   259,   260,     0,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   239,   218,   240,   219,
       0,   222,   223,     0,     0,   224,   221,     0,     2,     4,
     132,     8,     6,    11,    12,    54,    59,    22,   255,     9,
      55,    56,    57,     0,    52,    60,    53,     0,    58,    95,
      51,     0,    96,   115,   116,   262,   261,    98,   142,     7,
     164,   132,    10,   117,   191,   194,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   214,     0,   216,     0,   220,
     248,   225,   258,   267,   242,    92,   266,     0,   255,     0,
       0,   109,     0,     0,    39,     0,   128,   129,   130,   131,
     134,   133,     0,     0,     0,     0,     0,   147,     0,     0,
      64,     0,     0,   184,   185,   186,   187,   188,   103,   181,
     179,   180,   178,   104,   182,   183,   105,   137,     0,   139,
     138,   141,   140,     0,     0,    64,   160,   161,     0,   231,
     233,   159,     0,     0,   249,     0,   252,    30,   228,   102,
     150,   152,   154,    28,     0,   153,   229,   230,     0,     0,
       1,     5,     0,    23,    66,     0,    91,    94,     0,     0,
       0,     0,   111,     0,   190,     0,     0,     0,     0,     0,
       0,   176,   177,     0,     0,     0,     0,     0,     0,     0,
       0,   226,   265,     0,     0,   247,     0,     0,   243,   244,
     246,     0,     0,   264,     0,   106,     0,    40,   135,     0,
      31,     0,     0,     0,     0,     0,   148,     0,    67,     0,
      63,     0,    90,     0,     0,     0,     0,     0,   127,   162,
      84,   232,    62,   250,     0,   149,     0,     0,    29,   155,
       0,   263,   127,     0,    97,    99,   100,   110,     0,     0,
     189,     0,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,     0,   241,   235,     0,     0,
     245,   253,   227,   114,   107,   108,   113,     0,   125,     0,
       0,   127,     0,     0,     0,     0,     0,     0,    71,     0,
       0,   121,     0,     0,     0,     0,   127,     0,     0,   251,
     151,   254,    17,     0,   170,   118,   168,     0,     0,     0,
     101,   238,     0,   112,   124,   136,     0,    85,    79,    83,
       0,     0,     0,    69,    72,    74,     0,    20,    34,   120,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
      78,   171,     0,   192,     0,   236,   237,    25,     0,    80,
       0,     0,     0,     0,     0,    75,    65,     0,     0,   172,
      33,   146,     0,     0,    27,   123,    24,   126,     0,     0,
       0,    16,    19,   169,     0,    86,    81,     0,    68,     0,
      73,    21,    35,     0,   173,     0,     0,   144,    37,   122,
      64,   165,   119,    64,    18,     0,   145,    82,    70,    32,
       0,     0,   174,    36,   166,     0,    15,   143,    38,   175,
     167
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,   -56,  -303,  -303,  -303,  -303,  -303,  -299,    -3,
    -303,  -303,  -303,  -303,   -43,  -105,  -100,  -170,  -303,  -303,
    -167,    44,  -303,     1,     0,  -147,  -303,  -303,  -303,  -303,
    -303,   -53,  -303,  -303,   133,  -303,  -303,  -303,  -303,  -303,
     267,  -123,   268,   -21,    90,   255,   -78,  -227,   167,  -168,
    -121,  -303,   -74,  -303,    18,  -241,  -303,   150,    87,  -303,
    -303,  -303,  -303,  -303,    15,  -173,  -302,   -33,  -303,  -139,
    -303,   -88,  -303,  -113,  -303,  -303,   265,   270,   271,   273,
    -303,  -193,  -303,    83,    92,    88,    98,    94,    84,    86,
     103,    82,    85,   108,     2,   -86,   139,  -303,   -38,  -303,
       4,  -303,  -303,  -150,  -303,    91,  -303
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    57,    58,    59,    60,    61,   369,   425,   356,    62,
     256,   239,    63,    64,   240,   178,   297,   358,   359,   418,
     419,    65,    66,    67,   118,   251,    69,    70,    71,   383,
     318,   319,   385,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   227,   200,    83,    84,    85,    86,
      87,   398,   322,   396,   310,   328,   130,   131,   132,    88,
     158,    89,   247,   180,   181,   182,   183,    90,    91,   400,
      92,   335,   336,   390,   433,   213,   214,   215,   216,   217,
     281,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   120,   107,   170,   108,   298,   300,
     109,   110,   111,   176,   112,   113,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,   125,   106,   191,    68,   168,   202,   177,   305,    68,
     134,   269,   282,   245,   138,   268,   407,   184,   258,   360,
     221,   360,   360,   263,   235,   198,   163,   169,   366,     1,
     279,   332,   241,   228,   221,   308,   360,  -102,    32,   223,
     211,   133,   253,   199,   204,   212,     4,   205,   166,   167,
     179,   126,   127,   128,   129,   154,   155,   199,   254,    68,
     143,   106,   144,   255,   193,    32,   206,    68,   199,   224,
     346,   135,    53,   309,   149,   150,   151,   152,   275,   276,
     225,   301,   128,   129,   199,   365,   360,   148,   411,     8,
     360,    10,   153,   420,   136,   186,   187,   236,   394,   184,
     395,   148,   156,   140,   137,    46,   153,    48,   171,   184,
     164,   165,   148,   172,   329,   230,   156,   153,     4,   294,
     295,   257,   315,   188,   190,   184,   194,   156,   148,   420,
     184,   184,   179,   153,   195,   226,   145,   146,   147,   196,
     250,   185,   179,   156,   373,   197,   302,   192,   201,   208,
     210,   207,   222,   362,   363,   209,   231,   304,   179,   218,
     219,   232,   414,   179,   179,   250,   371,   233,   374,   169,
     237,   246,   262,   248,   249,   252,   259,   264,   203,   226,
     266,   267,   271,   299,   179,   303,   184,   184,   312,    25,
     314,   317,   272,   184,   399,   320,    28,    29,   321,   323,
      32,   324,   337,   179,   327,   439,   331,   333,   338,   339,
     235,   348,   260,   352,   340,   343,   344,   364,   412,   179,
     179,   355,   416,   185,   296,   361,   179,   202,   368,   367,
     372,   376,   378,   185,    53,   380,   382,   386,   384,   387,
     388,   311,   392,   393,   409,   404,   430,   316,   399,   185,
     397,   413,   402,   421,   185,   185,   415,   326,   423,   121,
     431,   440,   436,   401,   438,   354,   179,   243,   115,   265,
     119,   123,   377,   432,   325,   185,   435,   157,   229,   334,
     238,   330,   434,   139,   403,   141,   422,   159,   184,   283,
     184,   184,   160,   161,   185,   162,   285,   288,   291,   284,
     289,   375,   292,   175,   287,   184,   184,   286,   261,     0,
     185,   185,    68,   347,    68,   349,     0,   185,   290,     0,
     357,   179,   189,   179,   179,   177,   293,   357,     0,     0,
       0,   381,     0,    68,   370,   184,   202,     0,   179,   179,
       0,     0,     0,     0,     0,     0,   424,     0,     0,     0,
      68,   379,     0,     0,   345,   184,     0,     0,     0,   184,
     389,   202,   184,     0,     0,     0,     0,   179,   179,     0,
       0,     0,   334,     0,     0,     0,     0,     0,    68,   405,
      68,   406,     0,     0,    68,   410,     0,   357,   179,     0,
     234,     0,   179,     0,   429,   179,     0,     0,   184,   389,
       0,   242,    68,   244,   106,   391,   428,    68,   427,    68,
       0,     0,   185,     0,   185,   185,     0,     0,     0,     0,
     250,   179,     0,   250,     0,     0,     0,     0,     0,   185,
     185,   179,     0,     0,     0,     0,     0,   417,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,   426,     0,
       0,     0,     0,     0,     0,     0,   270,     0,   185,   185,
       0,     0,     0,   273,     0,     0,   274,     0,     0,   278,
       0,     0,   280,     0,   437,     0,     0,     0,     1,   185,
       2,     0,     3,   185,     0,     0,   185,     6,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,     0,   307,     0,     0,     0,     0,     0,
       0,   313,   185,     0,     0,     0,     0,    25,     0,     0,
       0,    27,   185,     0,    28,    29,    30,    31,    32,    33,
      34,    35,   175,     0,     0,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,     0,     0,     0,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,     0,     1,   351,     2,   353,     3,     0,     4,     0,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    22,    23,     0,
      24,    25,     0,     0,    26,    27,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,     0,     0,     0,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
     408,     0,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     1,     0,     2,     0,     3,
       0,     4,   124,     0,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    26,    27,     0,
       0,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,     0,    46,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     0,     3,     0,     4,    55,    56,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    26,    27,     0,     0,    28,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     2,   116,     3,    46,
      47,    48,    49,     6,     0,     0,     0,     0,     0,     0,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,     0,    25,     0,     0,     0,    27,     0,   117,
      28,    29,    30,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     2,     0,     3,   121,     0,     0,     0,
       6,     0,     0,     0,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,    27,    55,    56,    28,    29,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     6,     0,     0,
       0,    46,    47,    48,    49,     0,     0,     0,     0,   122,
       0,     0,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    27,    55,    56,    28,    29,    30,    31,    32,    33,
      34,    35,   173,     0,   174,     0,     0,     2,     0,     3,
     277,     0,     0,     0,     6,     0,     0,     0,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,    27,    55,
      56,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       0,     6,     0,     0,     0,    46,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,    27,    55,    56,    28,    29,
      30,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     2,     0,     3,   306,     0,     0,     0,     6,     0,
       0,     0,    46,    47,    48,    49,     0,     0,     0,     0,
     122,     0,     0,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,    27,    55,    56,    28,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     2,     0,
       3,   121,     0,     0,     0,     6,     0,     0,     0,    46,
      47,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    27,
      55,    56,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     2,   341,     3,     0,     0,
       0,     0,     6,     0,     0,     0,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,    27,    55,    56,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     2,   350,     3,     0,     0,     0,     0,     6,
       0,     0,     0,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,    50,    51,    52,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,    27,    55,    56,    28,    29,    30,    31,
      32,    33,    34,    35,     0,     0,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     6,     0,     0,     0,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
      27,    55,    56,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     2,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,     0,    50,    51,
      52,    53,    54,     0,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    55,    56,
      30,    31,    32,    33,    34,    35,     0,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     0,   142,     0,     0,
       0,     0,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,     0,     0,
       0,     0,   143,    46,   144,    48,   145,   146,   147,     0,
      27,     0,     0,    55,    56,    30,    31,    32,    33,    34,
      35,   148,   149,   150,   151,   152,   153,   154,   155,     0,
       0,     0,     0,     0,     0,     0,   156,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,     0,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56
};

static const yytype_int16 yycheck[] =
{
       0,     4,     0,    59,     4,    26,    84,    50,   235,     9,
       9,   184,   205,   136,    14,   183,     6,    50,   165,   321,
     106,   323,   324,   173,     8,     4,    22,    27,   327,     3,
     203,   272,   132,   111,   120,     6,   338,     5,    53,     7,
      91,     5,   142,    47,    80,    96,     9,    83,    49,    50,
      50,    32,    33,    34,    35,    97,    98,    47,   158,    59,
      72,    59,    74,   163,    67,    53,   102,    67,    47,    37,
     311,     5,    87,    44,    92,    93,    94,    95,   199,   200,
      48,   231,    34,    35,    47,   326,   388,    91,   387,    15,
     392,    17,    96,   395,     5,    51,    52,    81,     3,   132,
       5,    91,   106,    16,     5,    73,    96,    75,    49,   142,
      23,    24,    91,    43,   264,   111,   106,    96,     9,   219,
     220,   164,   245,     5,     0,   158,    81,   106,    91,   431,
     163,   164,   132,    96,     5,   103,    76,    77,    78,     3,
     140,    50,   142,   106,   337,     3,   232,    60,     7,   100,
      99,    90,   108,   323,   324,   101,    56,   235,   158,    82,
      79,     6,   389,   163,   164,   165,   334,     6,   338,   169,
      10,    49,   172,     3,     9,     3,    49,    58,    91,   103,
      37,     7,    89,     5,   184,     8,   219,   220,     6,    42,
       6,    23,   192,   226,   367,     9,    49,    50,     5,     5,
      53,     5,    81,   203,   103,   432,     6,     6,     5,     4,
       8,     3,   168,    81,     8,     8,     6,     3,   388,   219,
     220,    10,   392,   132,   224,     6,   226,   305,    36,     9,
       4,     6,    14,   142,    87,     6,    24,    10,    25,     4,
       4,   241,     4,     6,    81,     6,     6,   247,   421,   158,
       8,     7,     9,     3,   163,   164,    81,   257,    10,     8,
       4,     3,    10,   368,   431,   318,   266,   134,     1,   179,
       2,     3,   346,   420,   256,   184,   423,    22,   111,   279,
     130,   266,   421,    15,   372,    17,   399,    22,   321,   206,
     323,   324,    22,    22,   203,    22,   208,   213,   216,   207,
     214,   339,   217,    35,   210,   338,   339,   209,   169,    -1,
     219,   220,   312,   312,   314,   314,    -1,   226,   215,    -1,
     320,   321,    54,   323,   324,   368,   218,   327,    -1,    -1,
      -1,   352,    -1,   333,   333,   368,   414,    -1,   338,   339,
      -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,
     350,   350,    -1,    -1,   310,   388,    -1,    -1,    -1,   392,
     360,   439,   395,    -1,    -1,    -1,    -1,   367,   368,    -1,
      -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,   378,   378,
     380,   380,    -1,    -1,   384,   384,    -1,   387,   388,    -1,
     122,    -1,   392,    -1,   415,   395,    -1,    -1,   431,   399,
      -1,   133,   402,   135,   402,   361,   409,   407,   407,   409,
      -1,    -1,   321,    -1,   323,   324,    -1,    -1,    -1,    -1,
     420,   421,    -1,   423,    -1,    -1,    -1,    -1,    -1,   338,
     339,   431,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   367,   368,
      -1,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,   201,
      -1,    -1,   204,    -1,   430,    -1,    -1,    -1,     3,   388,
       5,    -1,     7,   392,    -1,    -1,   395,    12,    -1,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,
      -1,   243,   421,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,   431,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,   264,    -1,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,   299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,     3,   315,     5,   317,     7,    -1,     9,    -1,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
     382,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,     3,    -1,     5,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,    -1,     7,    -1,     9,   104,   105,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     5,     6,     7,    73,
      74,    75,    76,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,   104,   105,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,   104,   105,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    -1,    -1,     5,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,   104,
     105,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,   104,   105,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,     5,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,   104,   105,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
     104,   105,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,   104,   105,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,   104,   105,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,   104,   105,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,   104,   105,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    -1,
      46,    -1,    -1,   104,   105,    51,    52,    53,    54,    55,
      56,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     9,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    38,    39,    41,    42,    45,    46,    49,    50,
      51,    52,    53,    54,    55,    56,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    73,    74,    75,    76,
      84,    85,    86,    87,    88,   104,   105,   111,   112,   113,
     114,   115,   119,   122,   123,   131,   132,   133,   134,   136,
     137,   138,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   156,   157,   158,   159,   160,   169,   171,
     177,   178,   180,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   207,   210,
     211,   212,   214,   215,   216,   150,     6,    48,   134,   152,
     204,     8,    81,   152,    10,   119,    32,    33,    34,    35,
     166,   167,   168,     5,   133,     5,     5,     5,   134,   152,
     168,   152,    47,    72,    74,    76,    77,    78,    91,    92,
      93,    94,    95,    96,    97,    98,   106,   155,   170,   186,
     187,   188,   189,   210,   168,   168,    49,    50,   153,   134,
     206,    49,    43,    57,    59,   152,   213,   124,   125,   134,
     173,   174,   175,   176,   177,   215,   131,   131,     5,   152,
       0,   112,   168,   119,    81,     5,     3,     3,     4,    47,
     155,     7,   156,   168,    80,    83,   102,    90,   100,   101,
      99,    91,    96,   185,   186,   187,   188,   189,    82,    79,
      38,   205,   131,     7,    37,    48,   103,   154,   156,   158,
     210,    56,     6,     6,   152,     8,    81,    10,   167,   121,
     124,   126,   152,   144,   152,   151,    49,   172,     3,     9,
     134,   135,     3,   126,   126,   126,   120,   124,   135,    49,
     131,   206,   134,   213,    58,   154,    37,     7,   159,   175,
     152,    89,   134,   152,   152,   160,   160,     8,   152,   175,
     152,   190,   191,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   126,   126,   134,   126,   208,     5,
     209,   213,   205,     8,   156,   157,     8,   152,     6,    44,
     164,   134,     6,   152,     6,   151,   134,    23,   140,   141,
       9,     5,   162,     5,     5,   164,   134,   103,   165,   213,
     174,     6,   165,     6,   134,   181,   182,    81,     5,     4,
       8,     6,   152,     8,     6,   131,   165,   133,     3,   133,
       6,   152,    81,   152,   141,    10,   118,   134,   127,   128,
     176,     6,   127,   127,     3,   165,   118,     9,    36,   116,
     133,   159,     4,   191,   127,   208,     6,   162,    14,   133,
       6,   153,    24,   139,    25,   142,    10,     4,     4,   134,
     183,   131,     4,     6,     3,     5,   163,     8,   161,   175,
     179,   125,     9,   181,     6,   133,   133,     6,   152,    81,
     133,   118,   127,     7,   157,    81,   127,   131,   129,   130,
     176,     3,   183,    10,   112,   117,   131,   133,   119,   153,
       6,     4,   135,   184,   179,   135,    10,   131,   130,   157,
       3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   121,   122,   123,   124,   124,
     125,   126,   127,   127,   128,   128,   129,   130,   130,   131,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   137,   138,   139,   139,
     140,   141,   141,   142,   142,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   146,   147,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     153,   154,   154,   155,   155,   155,   156,   156,   156,   157,
     157,   157,   158,   158,   158,   159,   159,   160,   160,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   168,   168,   169,   170,   170,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   177,   177,
     177,   177,   177,   178,   178,   179,   179,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     186,   186,   187,   187,   188,   188,   189,   189,   189,   190,
     190,   191,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   204,   205,   205,   205,   205,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   212,   212,   212,   212,   212,   212,   212,   213,
     213,   213,   214,   214,   215,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     2,     0,     1,     0,
       1,     3,     1,     2,     4,     4,     5,     6,     1,     2,
       1,     1,     4,     2,     1,     3,     2,     1,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     0,     6,     2,     3,     2,     0,
       5,     1,     2,     2,     0,     6,     1,     1,     5,     5,
       6,     7,     8,     5,     3,     5,     7,     1,     1,     1,
       3,     2,     2,     1,     2,     1,     1,     3,     1,     3,
       3,     3,     0,     1,     1,     1,     3,     4,     4,     2,
       3,     2,     5,     4,     4,     1,     1,     1,     4,     2,
       2,     1,     2,     1,     2,     1,     3,     0,     1,     1,
       1,     1,     0,     1,     1,     2,     5,     1,     1,     1,
       1,     1,     1,     9,     7,     7,     6,     0,     1,     2,
       1,     3,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     2,     3,     1,     1,     2,     3,     9,     1,     3,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     5,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     2,
       2,     1,     2,     2,     1,     1,     3,     3,     2,     1,
       1,     3,     1,     2,     2,     3,     2,     2,     1,     1,
       2,     3,     2,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     1
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
    case 112: /* ast  */
#line 137 "src/gwion.y"
             { free_ast(mpool(arg), ((*yyvaluep).ast)); }
#line 1992 "src/parser.c"
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
/* The lookahead symbol.  */
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
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
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

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


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
  case 2:
#line 140 "src/gwion.y"
         { arg->ast = (yyval.ast) = (yyvsp[0].ast); }
#line 2308 "src/parser.c"
    break;

  case 3:
#line 141 "src/gwion.y"
                { gwion_error(&(yyloc), arg, "file is empty."); YYERROR; }
#line 2314 "src/parser.c"
    break;

  case 4:
#line 144 "src/gwion.y"
            { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[0].section), NULL) : new_ast(mpool(arg), (yyvsp[0].section), NULL); }
#line 2320 "src/parser.c"
    break;

  case 5:
#line 145 "src/gwion.y"
                { (yyval.ast) = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)) : new_ast(mpool(arg), (yyvsp[-1].section), (yyvsp[0].ast)); }
#line 2326 "src/parser.c"
    break;

  case 6:
#line 149 "src/gwion.y"
              { (yyval.section) = new_section_stmt_list(mpool(arg), (yyvsp[0].stmt_list)); }
#line 2332 "src/parser.c"
    break;

  case 7:
#line 150 "src/gwion.y"
              { (yyval.section) = new_section_func_def (mpool(arg), (yyvsp[0].func_def)); }
#line 2338 "src/parser.c"
    break;

  case 8:
#line 151 "src/gwion.y"
              { (yyval.section) = new_section_class_def(mpool(arg), (yyvsp[0].class_def)); }
#line 2344 "src/parser.c"
    break;

  case 9:
#line 152 "src/gwion.y"
              { (yyval.section) = new_section_enum_def(mpool(arg), (yyvsp[0].enum_def)); }
#line 2350 "src/parser.c"
    break;

  case 10:
#line 153 "src/gwion.y"
              { (yyval.section) = new_section_union_def(mpool(arg), (yyvsp[0].union_def)); }
#line 2356 "src/parser.c"
    break;

  case 11:
#line 154 "src/gwion.y"
              { (yyval.section) = new_section_fptr_def(mpool(arg), (yyvsp[0].fptr_def)); }
#line 2362 "src/parser.c"
    break;

  case 12:
#line 155 "src/gwion.y"
              { (yyval.section) = new_section_type_def(mpool(arg), (yyvsp[0].type_def)); }
#line 2368 "src/parser.c"
    break;

  case 13:
#line 158 "src/gwion.y"
                  { (yyval.flag) = ae_flag_none; }
#line 2374 "src/parser.c"
    break;

  case 14:
#line 158 "src/gwion.y"
                                                  { (yyval.flag) = ae_flag_struct; }
#line 2380 "src/parser.c"
    break;

  case 15:
#line 161 "src/gwion.y"
    {
      if((yyvsp[-7].flag) == ae_flag_struct && (yyvsp[-3].type_decl))
        { gwion_error(&(yyloc), arg, "'struct' inherit other types"); YYERROR; }
      (yyval.class_def) =new_class_def(mpool(arg), (yyvsp[-7].flag) | (yyvsp[-6].flag), (yyvsp[-5].sym), (yyvsp[-3].type_decl), (yyvsp[-1].ast), GET_LOC(&(yyloc)));
      if((yyvsp[-4].id_list))
        (yyval.class_def)->base.tmpl = new_tmpl_base(mpool(arg), (yyvsp[-4].id_list));
  }
#line 2392 "src/parser.c"
    break;

  case 16:
#line 169 "src/gwion.y"
                                  { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2398 "src/parser.c"
    break;

  case 17:
#line 169 "src/gwion.y"
                                                 { (yyval.type_decl) = NULL; }
#line 2404 "src/parser.c"
    break;

  case 19:
#line 171 "src/gwion.y"
                   { (yyval.ast) = NULL; }
#line 2410 "src/parser.c"
    break;

  case 20:
#line 173 "src/gwion.y"
            { (yyval.id_list) = new_id_list(mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 2416 "src/parser.c"
    break;

  case 21:
#line 173 "src/gwion.y"
                                                                                    { (yyval.id_list) = prepend_id_list(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].id_list), loc_cpy(mpool(arg), &(yylsp[-2]))); }
#line 2422 "src/parser.c"
    break;

  case 22:
#line 175 "src/gwion.y"
                { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL);}
#line 2428 "src/parser.c"
    break;

  case 23:
#line 175 "src/gwion.y"
                                                                              { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2434 "src/parser.c"
    break;

  case 24:
#line 177 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2441 "src/parser.c"
    break;

  case 25:
#line 179 "src/gwion.y"
                                                      { (yyval.func_base) = new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym), (yyvsp[0].arg_list));
  if((yyvsp[-1].id_list)) (yyval.func_base)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list)); }
#line 2448 "src/parser.c"
    break;

  case 26:
#line 182 "src/gwion.y"
                                                    {
  if((yyvsp[-2].func_base)->td->array && (yyvsp[-2].func_base)->td->array->exp) {
    gwion_error(&(yyloc), arg, "type must be defined with empty []'s");
    YYERROR;
  }
  (yyval.fptr_def) = new_fptr_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[-3].flag) | (yyvsp[-1].flag));
}
#line 2460 "src/parser.c"
    break;

  case 27:
#line 189 "src/gwion.y"
                                                                  {
  (yyval.type_def) = new_type_def(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].sym));
  (yyvsp[-3].type_decl)->flag |= (yyvsp[-4].flag);
  if((yyvsp[-1].id_list))
    (yyval.type_def)->tmpl = new_tmpl_base(mpool(arg), (yyvsp[-1].id_list));
}
#line 2471 "src/parser.c"
    break;

  case 29:
#line 196 "src/gwion.y"
                                             { (yyvsp[-1].type_decl)->array = (yyvsp[0].array_sub); }
#line 2477 "src/parser.c"
    break;

  case 30:
#line 198 "src/gwion.y"
                               { if((yyvsp[0].type_decl)->array && !(yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "can't instantiate with empty '[]'"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2485 "src/parser.c"
    break;

  case 31:
#line 202 "src/gwion.y"
                                 { if((yyvsp[0].type_decl)->array && (yyvsp[0].type_decl)->array->exp)
    { gwion_error(&(yyloc), arg, "type must be defined with empty []'s"); YYERROR;}
  (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 2493 "src/parser.c"
    break;

  case 32:
#line 207 "src/gwion.y"
                                      { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-2].var_decl), NULL); (yyval.arg_list)->exp = (yyvsp[0].exp); }
#line 2499 "src/parser.c"
    break;

  case 33:
#line 208 "src/gwion.y"
                       { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2505 "src/parser.c"
    break;

  case 34:
#line 210 "src/gwion.y"
         { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2511 "src/parser.c"
    break;

  case 35:
#line 211 "src/gwion.y"
                        {
     Arg_List last = (yyvsp[-2].arg_list);
     while(last->next)
       last = last->next;
     if(last->exp && !(yyvsp[0].arg_list)->exp)
        { gwion_error(&(yylsp[0]), arg, "missing default argument"); YYERROR;}
     last->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
   }
#line 2524 "src/parser.c"
    break;

  case 36:
#line 220 "src/gwion.y"
                                  { (yyval.arg_list) = new_arg_list(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl), NULL); }
#line 2530 "src/parser.c"
    break;

  case 37:
#line 221 "src/gwion.y"
                    { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2536 "src/parser.c"
    break;

  case 38:
#line 221 "src/gwion.y"
                                                            {
  if(!(yyvsp[-2].arg_list))
    { gwion_error(&(yyloc), arg, "invalid function pointer argument"); YYERROR;}
    (yyvsp[-2].arg_list)->next = (yyvsp[0].arg_list); (yyval.arg_list) = (yyvsp[-2].arg_list);
}
#line 2546 "src/parser.c"
    break;

  case 39:
#line 228 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&(yyloc))); }
#line 2552 "src/parser.c"
    break;

  case 40:
#line 229 "src/gwion.y"
                            { (yyval.stmt) = new_stmt_code(mpool(arg), (yyvsp[-1].stmt_list)); }
#line 2558 "src/parser.c"
    break;

  case 41:
#line 233 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_comment, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2564 "src/parser.c"
    break;

  case 42:
#line 234 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_include, (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2570 "src/parser.c"
    break;

  case 43:
#line 235 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_define,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2576 "src/parser.c"
    break;

  case 44:
#line 236 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_pragma,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2582 "src/parser.c"
    break;

  case 45:
#line 237 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_undef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2588 "src/parser.c"
    break;

  case 46:
#line 238 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifdef,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2594 "src/parser.c"
    break;

  case 47:
#line 239 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_ifndef,  (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2600 "src/parser.c"
    break;

  case 48:
#line 240 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_else,    (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2606 "src/parser.c"
    break;

  case 49:
#line 241 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_endif,   (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2612 "src/parser.c"
    break;

  case 50:
#line 242 "src/gwion.y"
               { (yyval.stmt) = new_stmt_pp(mpool(arg), ae_pp_nl,      (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 2618 "src/parser.c"
    break;

  case 61:
#line 259 "src/gwion.y"
       { (yyval.sym) = insert_symbol((yyvsp[0].sval)); }
#line 2624 "src/parser.c"
    break;

  case 62:
#line 260 "src/gwion.y"
                {
    char c[strlen(s_name((yyvsp[0].sym))) + strlen((yyvsp[-2].sval))];
    sprintf(c, "%s%s", (yyvsp[-2].sval), s_name((yyvsp[0].sym)));
    (yyval.sym) = insert_symbol(c);
  }
#line 2634 "src/parser.c"
    break;

  case 64:
#line 267 "src/gwion.y"
             { (yyval.sym) = NULL; }
#line 2640 "src/parser.c"
    break;

  case 65:
#line 270 "src/gwion.y"
                                              { (yyval.enum_def) = new_enum_def(mpool(arg), (yyvsp[-1].id_list), (yyvsp[-3].sym), GET_LOC(&(yyloc)));
    (yyval.enum_def)->flag = (yyvsp[-4].flag); }
#line 2647 "src/parser.c"
    break;

  case 66:
#line 273 "src/gwion.y"
                     {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 1, GET_LOC(&(yyloc))); }
#line 2653 "src/parser.c"
    break;

  case 67:
#line 275 "src/gwion.y"
                             {  (yyval.stmt) = new_stmt_jump(mpool(arg), (yyvsp[-1].sym), 0, GET_LOC(&(yyloc))); }
#line 2659 "src/parser.c"
    break;

  case 68:
#line 277 "src/gwion.y"
                   { (yyval.exp) = (yyvsp[0].exp); }
#line 2665 "src/parser.c"
    break;

  case 69:
#line 277 "src/gwion.y"
                                  { (yyval.exp) = NULL; }
#line 2671 "src/parser.c"
    break;

  case 70:
#line 280 "src/gwion.y"
                                      {
    (yyval.stmt) = new_stmt(mpool(arg), 0, GET_LOC(&(yyloc)));
    (yyval.stmt)->d.stmt_match.cond = (yyvsp[-3].exp);
    (yyval.stmt)->d.stmt_match.list = (yyvsp[0].stmt_list);
    (yyval.stmt)->d.stmt_match.when = (yyvsp[-2].exp);
}
#line 2682 "src/parser.c"
    break;

  case 71:
#line 288 "src/gwion.y"
                    { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[0].stmt), NULL); }
#line 2688 "src/parser.c"
    break;

  case 72:
#line 289 "src/gwion.y"
                               { (yyval.stmt_list) = new_stmt_list(mpool(arg), (yyvsp[-1].stmt), (yyvsp[0].stmt_list)); }
#line 2694 "src/parser.c"
    break;

  case 73:
#line 291 "src/gwion.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2700 "src/parser.c"
    break;

  case 74:
#line 291 "src/gwion.y"
                                      { (yyval.stmt) = NULL; }
#line 2706 "src/parser.c"
    break;

  case 75:
#line 293 "src/gwion.y"
                                                          {
  (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&(yyloc)));
  (yyval.stmt)->d.stmt_match.cond  = (yyvsp[-4].exp);
  (yyval.stmt)->d.stmt_match.list  = (yyvsp[-2].stmt_list);
  (yyval.stmt)->d.stmt_match.where = (yyvsp[0].stmt);
}
#line 2717 "src/parser.c"
    break;

  case 76:
#line 301 "src/gwion.y"
          { (yyval.ival) = ae_stmt_while; }
#line 2723 "src/parser.c"
    break;

  case 77:
#line 302 "src/gwion.y"
          { (yyval.ival) = ae_stmt_until; }
#line 2729 "src/parser.c"
    break;

  case 78:
#line 306 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-4].ival), (yyvsp[-2].exp), (yyvsp[0].stmt), 0); }
#line 2735 "src/parser.c"
    break;

  case 79:
#line 308 "src/gwion.y"
    { (yyval.stmt) = new_stmt_flow(mpool(arg), (yyvsp[-2].ival), (yyvsp[-1].exp), (yyvsp[-3].stmt), 1); }
#line 2741 "src/parser.c"
    break;

  case 80:
#line 310 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, (yyvsp[0].stmt)); }
#line 2747 "src/parser.c"
    break;

  case 81:
#line 312 "src/gwion.y"
      { (yyval.stmt) = new_stmt_for(mpool(arg), (yyvsp[-4].stmt), (yyvsp[-3].stmt), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2753 "src/parser.c"
    break;

  case 82:
#line 314 "src/gwion.y"
      { (yyval.stmt) = new_stmt_auto(mpool(arg), (yyvsp[-4].sym), (yyvsp[-2].exp), (yyvsp[0].stmt)); (yyval.stmt)->d.stmt_auto.is_ptr = (yyvsp[-5].ival); }
#line 2759 "src/parser.c"
    break;

  case 83:
#line 316 "src/gwion.y"
      { (yyval.stmt) = new_stmt_loop(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2765 "src/parser.c"
    break;

  case 84:
#line 319 "src/gwion.y"
                                           { (yyval.stmt) = new_stmt_varloop(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].stmt)); }
#line 2771 "src/parser.c"
    break;

  case 85:
#line 323 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].stmt)); }
#line 2777 "src/parser.c"
    break;

  case 86:
#line 325 "src/gwion.y"
      { (yyval.stmt) = new_stmt_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].stmt)); (yyval.stmt)->d.stmt_if.else_body = (yyvsp[0].stmt); }
#line 2783 "src/parser.c"
    break;

  case 87:
#line 329 "src/gwion.y"
              { (yyval.ival) = ae_stmt_return; }
#line 2789 "src/parser.c"
    break;

  case 88:
#line 330 "src/gwion.y"
              { (yyval.ival) = ae_stmt_break; }
#line 2795 "src/parser.c"
    break;

  case 89:
#line 331 "src/gwion.y"
              { (yyval.ival) = ae_stmt_continue; }
#line 2801 "src/parser.c"
    break;

  case 90:
#line 334 "src/gwion.y"
                          { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_return, (yyvsp[-1].exp)); }
#line 2807 "src/parser.c"
    break;

  case 91:
#line 335 "src/gwion.y"
                        { (yyval.stmt) = new_stmt(mpool(arg), (yyvsp[-1].ival), GET_LOC(&(yyloc))); }
#line 2813 "src/parser.c"
    break;

  case 92:
#line 338 "src/gwion.y"
                               { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2819 "src/parser.c"
    break;

  case 93:
#line 338 "src/gwion.y"
                                                        { (yyval.stmt) = NULL; }
#line 2825 "src/parser.c"
    break;

  case 94:
#line 341 "src/gwion.y"
                  { (yyval.stmt) = new_stmt_exp(mpool(arg), ae_stmt_exp, (yyvsp[-1].exp)); }
#line 2831 "src/parser.c"
    break;

  case 95:
#line 342 "src/gwion.y"
                  { (yyval.stmt) = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&(yyloc))); }
#line 2837 "src/parser.c"
    break;

  case 97:
#line 345 "src/gwion.y"
                                        { (yyval.exp) = prepend_exp((yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 2843 "src/parser.c"
    break;

  case 99:
#line 349 "src/gwion.y"
                                   { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2849 "src/parser.c"
    break;

  case 100:
#line 350 "src/gwion.y"
                               { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 2855 "src/parser.c"
    break;

  case 101:
#line 352 "src/gwion.y"
                                     { (yyval.type_list) = (yyvsp[-1].type_list); }
#line 2861 "src/parser.c"
    break;

  case 102:
#line 352 "src/gwion.y"
                                                    { (yyval.type_list) = NULL; }
#line 2867 "src/parser.c"
    break;

  case 106:
#line 357 "src/gwion.y"
                                { (yyval.array_sub) = new_array_sub(mpool(arg), (yyvsp[-1].exp)); }
#line 2873 "src/parser.c"
    break;

  case 107:
#line 358 "src/gwion.y"
                                { if((yyvsp[-2].exp)->next){ gwion_error(&(yyloc), arg, "invalid format for array init [...][...]..."); YYERROR; } (yyval.array_sub) = prepend_array_sub((yyvsp[0].array_sub), (yyvsp[-2].exp)); }
#line 2879 "src/parser.c"
    break;

  case 108:
#line 359 "src/gwion.y"
                                  { gwion_error(&(yyloc), arg, "partially empty array init [...][]..."); YYERROR; }
#line 2885 "src/parser.c"
    break;

  case 109:
#line 363 "src/gwion.y"
                              { (yyval.array_sub) = new_array_sub(mpool(arg), NULL); }
#line 2891 "src/parser.c"
    break;

  case 110:
#line 364 "src/gwion.y"
                              { (yyval.array_sub) = prepend_array_sub((yyvsp[-2].array_sub), NULL); }
#line 2897 "src/parser.c"
    break;

  case 111:
#line 365 "src/gwion.y"
                              { gwion_error(&(yyloc), arg, "partially empty array init [][...]"); YYERROR; }
#line 2903 "src/parser.c"
    break;

  case 112:
#line 369 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-3].exp), (yyvsp[-1].exp)); }
#line 2909 "src/parser.c"
    break;

  case 113:
#line 370 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), (yyvsp[-2].exp), NULL); }
#line 2915 "src/parser.c"
    break;

  case 114:
#line 371 "src/gwion.y"
                                { (yyval.range) = new_range(mpool(arg), NULL, (yyvsp[-1].exp)); }
#line 2921 "src/parser.c"
    break;

  case 118:
#line 377 "src/gwion.y"
                                                        { (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), (yyvsp[0].var_decl_list)); (yyval.exp)->d.exp_decl.td->flag |= (yyvsp[-3].flag) | (yyvsp[-2].flag); }
#line 2927 "src/parser.c"
    break;

  case 119:
#line 379 "src/gwion.y"
                                     { (yyvsp[-1].type_decl)->flag |= ae_flag_ref; (yyval.exp)= new_exp_decl(mpool(arg), (yyvsp[-1].type_decl), new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL)); }
#line 2933 "src/parser.c"
    break;

  case 120:
#line 381 "src/gwion.y"
                           { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2939 "src/parser.c"
    break;

  case 121:
#line 381 "src/gwion.y"
                                                 { (yyval.arg_list) = NULL; }
#line 2945 "src/parser.c"
    break;

  case 122:
#line 382 "src/gwion.y"
                            { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 2951 "src/parser.c"
    break;

  case 123:
#line 382 "src/gwion.y"
                                                  { (yyval.arg_list) = NULL; }
#line 2957 "src/parser.c"
    break;

  case 124:
#line 383 "src/gwion.y"
                         { (yyval.flag) = ae_flag_variadic; }
#line 2963 "src/parser.c"
    break;

  case 125:
#line 383 "src/gwion.y"
                                                            { (yyval.flag) = 0; }
#line 2969 "src/parser.c"
    break;

  case 126:
#line 385 "src/gwion.y"
                                   { (yyval.id_list) = (yyvsp[-1].id_list); }
#line 2975 "src/parser.c"
    break;

  case 127:
#line 385 "src/gwion.y"
                                                  { (yyval.id_list) = NULL; }
#line 2981 "src/parser.c"
    break;

  case 128:
#line 387 "src/gwion.y"
                     { (yyval.flag) = ae_flag_static; }
#line 2987 "src/parser.c"
    break;

  case 129:
#line 388 "src/gwion.y"
           { (yyval.flag) = ae_flag_global; }
#line 2993 "src/parser.c"
    break;

  case 130:
#line 391 "src/gwion.y"
                     { (yyval.flag) = ae_flag_private; }
#line 2999 "src/parser.c"
    break;

  case 131:
#line 392 "src/gwion.y"
            { (yyval.flag) = ae_flag_protect; }
#line 3005 "src/parser.c"
    break;

  case 132:
#line 395 "src/gwion.y"
      { (yyval.flag) = ae_flag_none; }
#line 3011 "src/parser.c"
    break;

  case 133:
#line 396 "src/gwion.y"
               { (yyval.flag) = (yyvsp[0].flag); }
#line 3017 "src/parser.c"
    break;

  case 134:
#line 397 "src/gwion.y"
                 { (yyval.flag) = (yyvsp[0].flag); }
#line 3023 "src/parser.c"
    break;

  case 135:
#line 398 "src/gwion.y"
                             { (yyval.flag) = (yyvsp[-1].flag) | (yyvsp[0].flag); }
#line 3029 "src/parser.c"
    break;

  case 136:
#line 403 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), (yyvsp[-2].func_base), (yyvsp[0].stmt), (yyvsp[-3].flag) | (yyvsp[-1].flag), GET_LOC(&(yyloc))); }
#line 3035 "src/parser.c"
    break;

  case 143:
#line 410 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-6].type_decl), (yyvsp[-7].sym), (yyvsp[-4].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); (yyvsp[-4].arg_list)->next = (yyvsp[-2].arg_list);}
#line 3041 "src/parser.c"
    break;

  case 144:
#line 412 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-5].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op, GET_LOC(&(yyloc))); }
#line 3047 "src/parser.c"
    break;

  case 145:
#line 414 "src/gwion.y"
    { (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-4].type_decl), (yyvsp[-6].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_unary, GET_LOC(&(yyloc))); }
#line 3053 "src/parser.c"
    break;

  case 146:
#line 416 "src/gwion.y"
    {
 (yyval.func_def) = new_func_def(mpool(arg), new_func_base(mpool(arg), (yyvsp[-3].type_decl), (yyvsp[-4].sym), (yyvsp[-2].arg_list)), (yyvsp[0].stmt), ae_flag_op | ae_flag_typedef, GET_LOC(&(yyloc)));
    }
#line 3061 "src/parser.c"
    break;

  case 147:
#line 420 "src/gwion.y"
     { (yyval.ival) = 0; }
#line 3067 "src/parser.c"
    break;

  case 148:
#line 420 "src/gwion.y"
                       { (yyval.ival) = ae_flag_ref; }
#line 3073 "src/parser.c"
    break;

  case 149:
#line 423 "src/gwion.y"
                     { (yyval.type_decl) = new_type_decl(mpool(arg), (yyvsp[-1].sym), GET_LOC(&(yyloc))); (yyval.type_decl)->types = (yyvsp[0].type_list); }
#line 3079 "src/parser.c"
    break;

  case 151:
#line 428 "src/gwion.y"
                                      { (yyvsp[-2].type_decl)->next = (yyvsp[0].type_decl); }
#line 3085 "src/parser.c"
    break;

  case 152:
#line 432 "src/gwion.y"
                   { (yyval.type_decl) = (yyvsp[0].type_decl); }
#line 3091 "src/parser.c"
    break;

  case 153:
#line 433 "src/gwion.y"
               { (yyval.type_decl) = new_type_decl2(mpool(arg), (yyvsp[0].exp), GET_LOC(&(yyloc))); }
#line 3097 "src/parser.c"
    break;

  case 155:
#line 436 "src/gwion.y"
                                                              { (yyval.type_decl) = (yyvsp[0].type_decl); (yyval.type_decl)->flag |= (yyvsp[-1].flag); }
#line 3103 "src/parser.c"
    break;

  case 156:
#line 439 "src/gwion.y"
        { (yyval.flag) = ae_flag_ref; }
#line 3109 "src/parser.c"
    break;

  case 157:
#line 440 "src/gwion.y"
           { (yyval.flag) = ae_flag_const; }
#line 3115 "src/parser.c"
    break;

  case 158:
#line 441 "src/gwion.y"
            { (yyval.flag) = ae_flag_nonnull; }
#line 3121 "src/parser.c"
    break;

  case 159:
#line 442 "src/gwion.y"
                { (yyval.flag) = ae_flag_nonnull | ae_flag_ref; }
#line 3127 "src/parser.c"
    break;

  case 160:
#line 443 "src/gwion.y"
               { (yyval.flag) = ae_flag_const | ae_flag_ref; }
#line 3133 "src/parser.c"
    break;

  case 161:
#line 444 "src/gwion.y"
                   { (yyval.flag) = ae_flag_const | ae_flag_nonnull; }
#line 3139 "src/parser.c"
    break;

  case 162:
#line 445 "src/gwion.y"
                       { (yyval.flag) = ae_flag_const | ae_flag_nonnull | ae_flag_ref; }
#line 3145 "src/parser.c"
    break;

  case 163:
#line 447 "src/gwion.y"
                        { (yyval.flag) = ae_flag_none; }
#line 3151 "src/parser.c"
    break;

  case 165:
#line 449 "src/gwion.y"
                               { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-1].exp), NULL); }
#line 3157 "src/parser.c"
    break;

  case 166:
#line 450 "src/gwion.y"
                                  { (yyval.decl_list) = new_decl_list(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].decl_list)); }
#line 3163 "src/parser.c"
    break;

  case 167:
#line 453 "src/gwion.y"
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
#line 3185 "src/parser.c"
    break;

  case 168:
#line 473 "src/gwion.y"
             { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[0].var_decl), NULL); }
#line 3191 "src/parser.c"
    break;

  case 169:
#line 474 "src/gwion.y"
                                 { (yyval.var_decl_list) = new_var_decl_list(mpool(arg), (yyvsp[-2].var_decl), (yyvsp[0].var_decl_list)); }
#line 3197 "src/parser.c"
    break;

  case 170:
#line 477 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3203 "src/parser.c"
    break;

  case 171:
#line 478 "src/gwion.y"
                { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3209 "src/parser.c"
    break;

  case 172:
#line 480 "src/gwion.y"
             { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3215 "src/parser.c"
    break;

  case 173:
#line 481 "src/gwion.y"
                   { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3221 "src/parser.c"
    break;

  case 174:
#line 482 "src/gwion.y"
                      { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))); }
#line 3227 "src/parser.c"
    break;

  case 175:
#line 483 "src/gwion.y"
                       { (yyval.var_decl) = new_var_decl(mpool(arg), (yyvsp[-1].sym),   (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3233 "src/parser.c"
    break;

  case 190:
#line 491 "src/gwion.y"
               { (yyval.exp) = NULL; }
#line 3239 "src/parser.c"
    break;

  case 192:
#line 494 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-4].exp), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 3245 "src/parser.c"
    break;

  case 193:
#line 496 "src/gwion.y"
      { (yyval.exp) = new_exp_if(mpool(arg), (yyvsp[-2].exp), NULL, (yyvsp[0].exp)); }
#line 3251 "src/parser.c"
    break;

  case 195:
#line 498 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3257 "src/parser.c"
    break;

  case 197:
#line 499 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3263 "src/parser.c"
    break;

  case 199:
#line 500 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3269 "src/parser.c"
    break;

  case 201:
#line 501 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3275 "src/parser.c"
    break;

  case 203:
#line 502 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3281 "src/parser.c"
    break;

  case 205:
#line 503 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3287 "src/parser.c"
    break;

  case 207:
#line 504 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3293 "src/parser.c"
    break;

  case 209:
#line 505 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3299 "src/parser.c"
    break;

  case 211:
#line 506 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3305 "src/parser.c"
    break;

  case 213:
#line 507 "src/gwion.y"
                                                     { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3311 "src/parser.c"
    break;

  case 215:
#line 508 "src/gwion.y"
                                                  { (yyval.exp) = new_exp_binary(mpool(arg), (yyvsp[-2].exp), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3317 "src/parser.c"
    break;

  case 217:
#line 511 "src/gwion.y"
    { (yyval.exp) = new_exp_cast(mpool(arg), (yyvsp[0].type_decl), (yyvsp[-2].exp)); }
#line 3323 "src/parser.c"
    break;

  case 226:
#line 518 "src/gwion.y"
                       { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].exp)); }
#line 3329 "src/parser.c"
    break;

  case 227:
#line 519 "src/gwion.y"
                                   { (yyval.exp) = new_exp_unary(mpool(arg), (yyvsp[-2].sym), (yyvsp[0].exp)); }
#line 3335 "src/parser.c"
    break;

  case 228:
#line 520 "src/gwion.y"
                      {(yyval.exp) = new_exp_unary2(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].type_decl)); }
#line 3341 "src/parser.c"
    break;

  case 229:
#line 521 "src/gwion.y"
                      { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3347 "src/parser.c"
    break;

  case 230:
#line 522 "src/gwion.y"
                     { (yyval.exp) = new_exp_unary3(mpool(arg), (yyvsp[-1].sym), (yyvsp[0].stmt)); }
#line 3353 "src/parser.c"
    break;

  case 231:
#line 525 "src/gwion.y"
    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[0].sym), NULL, GET_LOC(&(yyloc))), NULL); }
#line 3359 "src/parser.c"
    break;

  case 232:
#line 526 "src/gwion.y"
                    { (yyval.arg_list) = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), (yyvsp[-1].sym), NULL, GET_LOC(&(yyloc))), (yyvsp[0].arg_list)); }
#line 3365 "src/parser.c"
    break;

  case 233:
#line 527 "src/gwion.y"
                                  { (yyval.arg_list) = (yyvsp[0].arg_list); }
#line 3371 "src/parser.c"
    break;

  case 234:
#line 527 "src/gwion.y"
                                                           { (yyval.arg_list) = NULL; }
#line 3377 "src/parser.c"
    break;

  case 235:
#line 530 "src/gwion.y"
                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[0].type_decl), NULL); }
#line 3383 "src/parser.c"
    break;

  case 236:
#line 531 "src/gwion.y"
                                    { (yyval.type_list) = new_type_list(mpool(arg), (yyvsp[-2].type_decl), (yyvsp[0].type_list)); }
#line 3389 "src/parser.c"
    break;

  case 237:
#line 534 "src/gwion.y"
                               { (yyval.exp) = (yyvsp[-1].exp); }
#line 3395 "src/parser.c"
    break;

  case 238:
#line 534 "src/gwion.y"
                                                            { (yyval.exp) = NULL; }
#line 3401 "src/parser.c"
    break;

  case 241:
#line 538 "src/gwion.y"
                         { (yyval.exp) = new_exp_dot(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].sym)); }
#line 3407 "src/parser.c"
    break;

  case 243:
#line 541 "src/gwion.y"
    { (yyval.exp) = new_exp_array(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].array_sub)); }
#line 3413 "src/parser.c"
    break;

  case 244:
#line 543 "src/gwion.y"
    { (yyval.exp) = new_exp_slice(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].range)); }
#line 3419 "src/parser.c"
    break;

  case 245:
#line 545 "src/gwion.y"
    { (yyval.exp) = new_exp_call(mpool(arg), (yyvsp[-2].exp), (yyvsp[0].exp));
      if((yyvsp[-1].type_list))(yyval.exp)->d.exp_call.tmpl = new_tmpl_call(mpool(arg), (yyvsp[-1].type_list)); }
#line 3426 "src/parser.c"
    break;

  case 246:
#line 548 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3432 "src/parser.c"
    break;

  case 247:
#line 550 "src/gwion.y"
    { (yyval.exp) = new_exp_post(mpool(arg), (yyvsp[-1].exp), (yyvsp[0].sym)); }
#line 3438 "src/parser.c"
    break;

  case 248:
#line 551 "src/gwion.y"
            { (yyval.exp) = (yyvsp[0].exp); }
#line 3444 "src/parser.c"
    break;

  case 249:
#line 555 "src/gwion.y"
               { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3450 "src/parser.c"
    break;

  case 250:
#line 556 "src/gwion.y"
                          { (yyval.exp) = new_prim_string(mpool(arg), (yyvsp[-1].sval), GET_LOC(&(yyloc))); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3456 "src/parser.c"
    break;

  case 251:
#line 557 "src/gwion.y"
                              { (yyval.exp) = (yyvsp[-2].exp); (yyval.exp)->next = (yyvsp[0].exp); }
#line 3462 "src/parser.c"
    break;

  case 252:
#line 559 "src/gwion.y"
                                { (yyval.exp) = (yyvsp[0].exp); }
#line 3468 "src/parser.c"
    break;

  case 253:
#line 560 "src/gwion.y"
                                 {
  Exp e = (yyvsp[-2].exp);
  while(e->next)
    e = e->next;
  if(!(yyvsp[0].exp)->next) {
    char c[strlen((yyvsp[-2].exp)->d.prim.d.str) + strlen((yyvsp[0].exp)->d.prim.d.str) + 1];
    sprintf(c, "%s%s\n", (yyvsp[-2].exp)->d.prim.d.str, (yyvsp[0].exp)->d.prim.d.str);
    (yyvsp[-2].exp)->d.prim.d.str = s_name(insert_symbol(c));
    (yyvsp[-2].exp)->pos->last = (yyvsp[0].exp)->pos->last;
    free_exp(mpool(arg), (yyvsp[0].exp));
  } else
  e->next = (yyvsp[0].exp);
}
#line 3486 "src/parser.c"
    break;

  case 254:
#line 574 "src/gwion.y"
                                     { (yyval.exp) = new_prim_typeof(mpool(arg), (yyvsp[-1].exp)); }
#line 3492 "src/parser.c"
    break;

  case 255:
#line 577 "src/gwion.y"
                        { (yyval.exp) = new_prim_id(     mpool(arg), (yyvsp[0].sym), GET_LOC(&(yyloc))); }
#line 3498 "src/parser.c"
    break;

  case 256:
#line 578 "src/gwion.y"
                        { (yyval.exp) = new_prim_int(    mpool(arg), (yyvsp[0].lval), GET_LOC(&(yyloc))); }
#line 3504 "src/parser.c"
    break;

  case 257:
#line 579 "src/gwion.y"
                        { (yyval.exp) = new_prim_float(  mpool(arg), (yyvsp[0].fval), GET_LOC(&(yyloc))); }
#line 3510 "src/parser.c"
    break;

  case 258:
#line 580 "src/gwion.y"
                        { (yyval.exp) = !(yyvsp[0].exp)->next ? (yyvsp[0].exp) : new_prim_interp(mpool(arg), (yyvsp[0].exp)); }
#line 3516 "src/parser.c"
    break;

  case 259:
#line 581 "src/gwion.y"
                        { (yyval.exp) = new_prim_string( mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3522 "src/parser.c"
    break;

  case 260:
#line 582 "src/gwion.y"
                        { (yyval.exp) = new_prim_char(   mpool(arg), (yyvsp[0].sval), GET_LOC(&(yyloc))); }
#line 3528 "src/parser.c"
    break;

  case 261:
#line 583 "src/gwion.y"
                        { (yyval.exp) = new_prim_array(  mpool(arg), (yyvsp[0].array_sub), GET_LOC(&(yyloc))); }
#line 3534 "src/parser.c"
    break;

  case 262:
#line 584 "src/gwion.y"
                        { (yyval.exp) = new_prim_range(  mpool(arg), (yyvsp[0].range), GET_LOC(&(yyloc))); }
#line 3540 "src/parser.c"
    break;

  case 263:
#line 585 "src/gwion.y"
                        { (yyval.exp) = new_prim_hack(   mpool(arg), (yyvsp[-1].exp)); }
#line 3546 "src/parser.c"
    break;

  case 264:
#line 586 "src/gwion.y"
                        { (yyval.exp) = (yyvsp[-1].exp);                }
#line 3552 "src/parser.c"
    break;

  case 265:
#line 587 "src/gwion.y"
                         { (yyval.exp) = new_exp_lambda(     mpool(arg), lambda_name(arg), (yyvsp[-1].arg_list), (yyvsp[0].stmt)); }
#line 3558 "src/parser.c"
    break;

  case 266:
#line 588 "src/gwion.y"
                        { (yyval.exp) = new_prim_nil(    mpool(arg),     GET_LOC(&(yyloc))); }
#line 3564 "src/parser.c"
    break;

  case 267:
#line 589 "src/gwion.y"
               { (yyval.exp) = (yyvsp[0].exp); }
#line 3570 "src/parser.c"
    break;


#line 3574 "src/parser.c"

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
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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

#line 591 "src/gwion.y"

