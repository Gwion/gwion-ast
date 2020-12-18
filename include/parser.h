/* A Bison parser, made by GNU Bison 3.7.2.51-de63.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
    MATCH = 276,                   /* "match"  */
    CASE = 277,                    /* "case"  */
    WHEN = 278,                    /* "when"  */
    WHERE = 279,                   /* "where"  */
    ENUM = 280,                    /* "enum"  */
    TRETURN = 281,                 /* "return"  */
    BREAK = 282,                   /* "break"  */
    CONTINUE = 283,                /* "continue"  */
    CLASS = 284,                   /* "class"  */
    STRUCT = 285,                  /* "struct"  */
    STATIC = 286,                  /* "static"  */
    GLOBAL = 287,                  /* "global"  */
    PRIVATE = 288,                 /* "private"  */
    PROTECT = 289,                 /* "protect"  */
    ABSTRACT = 290,                /* "abstract"  */
    FINAL = 291,                   /* "final"  */
    EXTENDS = 292,                 /* "extends"  */
    DOT = 293,                     /* "."  */
    OPERATOR = 294,                /* "operator"  */
    TYPEDEF = 295,                 /* "typedef"  */
    FUNCDEF = 296,                 /* "funcdef"  */
    NOELSE = 297,                  /* NOELSE  */
    UNION = 298,                   /* "union"  */
    CONSTT = 299,                  /* "const"  */
    ELLIPSE = 300,                 /* "..."  */
    VARLOOP = 301,                 /* "varloop"  */
    BACKSLASH = 302,               /* "\\"  */
    OPID_A = 303,                  /* OPID_A  */
    OPID_E = 304,                  /* OPID_E  */
    LATE = 305,                    /* "LATE"  */
    NUM = 306,                     /* "<integer>"  */
    FLOATT = 307,                  /* FLOATT  */
    STRING_LIT = 308,              /* "<litteral string>"  */
    CHAR_LIT = 309,                /* "<litteral char>"  */
    INTERP_START = 310,            /* "`"  */
    INTERP_LIT = 311,              /* "<interp string>"  */
    INTERP_EXP = 312,              /* INTERP_EXP  */
    INTERP_END = 313,              /* "<interp string>`"  */
    PP_COMMENT = 314,              /* "<comment>"  */
    PP_INCLUDE = 315,              /* "#include"  */
    PP_DEFINE = 316,               /* "#define"  */
    PP_PRAGMA = 317,               /* "#pragma"  */
    PP_UNDEF = 318,                /* "#undef"  */
    PP_IFDEF = 319,                /* "#ifdef"  */
    PP_IFNDEF = 320,               /* "#ifndef"  */
    PP_ELSE = 321,                 /* "#else"  */
    PP_ENDIF = 322,                /* "#if"  */
    PP_NL = 323,                   /* "\n"  */
    PP_REQUIRE = 324,              /* "require"  */
    ID = 327,                      /* "<identifier>"  */
    PLUS = 328,                    /* "+"  */
    PLUSPLUS = 329,                /* "++"  */
    MINUS = 330,                   /* "-"  */
    MINUSMINUS = 331,              /* "--"  */
    TIMES = 332,                   /* "*"  */
    DIVIDE = 333,                  /* "/"  */
    PERCENT = 334,                 /* "%"  */
    DOLLAR = 335,                  /* "$"  */
    QUESTION = 336,                /* "?"  */
    OPTIONS = 337,                 /* OPTIONS  */
    COLON = 338,                   /* ":"  */
    COLONCOLON = 339,              /* "::"  */
    QUESTIONCOLON = 340,           /* "?:"  */
    NEW = 341,                     /* "new"  */
    SPORK = 342,                   /* "spork"  */
    FORK = 343,                    /* "fork"  */
    TYPEOF = 344,                  /* "typeof"  */
    L_HACK = 345,                  /* "<<<"  */
    R_HACK = 346,                  /* ">>>"  */
    AND = 347,                     /* "&&"  */
    EQ = 348,                      /* "=="  */
    GE = 349,                      /* ">="  */
    GT = 350,                      /* ">"  */
    LE = 351,                      /* "<="  */
    LT = 352,                      /* "<"  */
    NEQ = 353,                     /* "!="  */
    SHIFT_LEFT = 354,              /* "<<"  */
    SHIFT_RIGHT = 355,             /* ">>"  */
    S_AND = 356,                   /* "&"  */
    S_OR = 357,                    /* "|"  */
    S_XOR = 358,                   /* "^"  */
    OR = 359,                      /* "||"  */
    TMPL = 360,                    /* ":["  */
    TILDA = 361,                   /* "~"  */
    EXCLAMATION = 362,             /* "!"  */
    DYNOP = 363,                   /* "<dynamic_operator>"  */
    RANGE_EMPTY = 364,             /* RANGE_EMPTY  */
    UMINUS = 365,                  /* UMINUS  */
    UTIMES = 366,                  /* UTIMES  */
    STMT_ASSOC = 368,              /* STMT_ASSOC  */
    STMT_NOASSOC = 369             /* STMT_NOASSOC  */
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
#define MATCH 276
#define CASE 277
#define WHEN 278
#define WHERE 279
#define ENUM 280
#define TRETURN 281
#define BREAK 282
#define CONTINUE 283
#define CLASS 284
#define STRUCT 285
#define STATIC 286
#define GLOBAL 287
#define PRIVATE 288
#define PROTECT 289
#define ABSTRACT 290
#define FINAL 291
#define EXTENDS 292
#define DOT 293
#define OPERATOR 294
#define TYPEDEF 295
#define FUNCDEF 296
#define NOELSE 297
#define UNION 298
#define CONSTT 299
#define ELLIPSE 300
#define VARLOOP 301
#define BACKSLASH 302
#define OPID_A 303
#define OPID_E 304
#define LATE 305
#define NUM 306
#define FLOATT 307
#define STRING_LIT 308
#define CHAR_LIT 309
#define INTERP_START 310
#define INTERP_LIT 311
#define INTERP_EXP 312
#define INTERP_END 313
#define PP_COMMENT 314
#define PP_INCLUDE 315
#define PP_DEFINE 316
#define PP_PRAGMA 317
#define PP_UNDEF 318
#define PP_IFDEF 319
#define PP_IFNDEF 320
#define PP_ELSE 321
#define PP_ENDIF 322
#define PP_NL 323
#define PP_REQUIRE 324
#define ID 327
#define PLUS 328
#define PLUSPLUS 329
#define MINUS 330
#define MINUSMINUS 331
#define TIMES 332
#define DIVIDE 333
#define PERCENT 334
#define DOLLAR 335
#define QUESTION 336
#define OPTIONS 337
#define COLON 338
#define COLONCOLON 339
#define QUESTIONCOLON 340
#define NEW 341
#define SPORK 342
#define FORK 343
#define TYPEOF 344
#define L_HACK 345
#define R_HACK 346
#define AND 347
#define EQ 348
#define GE 349
#define GT 350
#define LE 351
#define LT 352
#define NEQ 353
#define SHIFT_LEFT 354
#define SHIFT_RIGHT 355
#define S_AND 356
#define S_OR 357
#define S_XOR 358
#define OR 359
#define TMPL 360
#define TILDA 361
#define EXCLAMATION 362
#define DYNOP 363
#define RANGE_EMPTY 364
#define UMINUS 365
#define UTIMES 366
#define STMT_ASSOC 368
#define STMT_NOASSOC 369

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  m_uint uval;
  ae_flag flag;
  enum fbflag fbflag;
  enum cflag cflag;
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
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Union_List union_list;
  Class_Def class_def;
  Ast ast;

#line 321 "include/parser.h"

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
