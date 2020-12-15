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
    ABSTRACT = 291,                /* "abstract"  */
    FINAL = 292,                   /* "final"  */
    EXTENDS = 293,                 /* "extends"  */
    DOT = 294,                     /* "."  */
    OPERATOR = 295,                /* "operator"  */
    TYPEDEF = 296,                 /* "typedef"  */
    FUNCDEF = 297,                 /* "funcdef"  */
    NOELSE = 298,                  /* NOELSE  */
    UNION = 299,                   /* "union"  */
    CONSTT = 300,                  /* "const"  */
    ELLIPSE = 301,                 /* "..."  */
    VARLOOP = 302,                 /* "varloop"  */
    BACKSLASH = 303,               /* "\\"  */
    OPID_A = 304,                  /* OPID_A  */
    OPID_E = 305,                  /* OPID_E  */
    LATE = 306,                    /* "LATE"  */
    NUM = 307,                     /* "<integer>"  */
    FLOATT = 308,                  /* FLOATT  */
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
    PP_REQUIRE = 325,              /* "require"  */
    ID = 328,                      /* "<identifier>"  */
    PLUS = 329,                    /* "+"  */
    PLUSPLUS = 330,                /* "++"  */
    MINUS = 331,                   /* "-"  */
    MINUSMINUS = 332,              /* "--"  */
    TIMES = 333,                   /* "*"  */
    DIVIDE = 334,                  /* "/"  */
    PERCENT = 335,                 /* "%"  */
    DOLLAR = 336,                  /* "$"  */
    QUESTION = 337,                /* "?"  */
    OPTIONS = 338,                 /* OPTIONS  */
    COLON = 339,                   /* ":"  */
    COLONCOLON = 340,              /* "::"  */
    QUESTIONCOLON = 341,           /* "?:"  */
    NEW = 342,                     /* "new"  */
    SPORK = 343,                   /* "spork"  */
    FORK = 344,                    /* "fork"  */
    TYPEOF = 345,                  /* "typeof"  */
    L_HACK = 346,                  /* "<<<"  */
    R_HACK = 347,                  /* ">>>"  */
    AND = 348,                     /* "&&"  */
    EQ = 349,                      /* "=="  */
    GE = 350,                      /* ">="  */
    GT = 351,                      /* ">"  */
    LE = 352,                      /* "<="  */
    LT = 353,                      /* "<"  */
    NEQ = 354,                     /* "!="  */
    SHIFT_LEFT = 355,              /* "<<"  */
    SHIFT_RIGHT = 356,             /* ">>"  */
    S_AND = 357,                   /* "&"  */
    S_OR = 358,                    /* "|"  */
    S_XOR = 359,                   /* "^"  */
    OR = 360,                      /* "||"  */
    TMPL = 361,                    /* ":["  */
    TILDA = 362,                   /* "~"  */
    EXCLAMATION = 363,             /* "!"  */
    DYNOP = 364,                   /* "<dynamic_operator>"  */
    RANGE_EMPTY = 365,             /* RANGE_EMPTY  */
    UMINUS = 366,                  /* UMINUS  */
    UTIMES = 367,                  /* UTIMES  */
    STMT_ASSOC = 369,              /* STMT_ASSOC  */
    STMT_NOASSOC = 370             /* STMT_NOASSOC  */
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
#define ABSTRACT 291
#define FINAL 292
#define EXTENDS 293
#define DOT 294
#define OPERATOR 295
#define TYPEDEF 296
#define FUNCDEF 297
#define NOELSE 298
#define UNION 299
#define CONSTT 300
#define ELLIPSE 301
#define VARLOOP 302
#define BACKSLASH 303
#define OPID_A 304
#define OPID_E 305
#define LATE 306
#define NUM 307
#define FLOATT 308
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
#define PP_REQUIRE 325
#define ID 328
#define PLUS 329
#define PLUSPLUS 330
#define MINUS 331
#define MINUSMINUS 332
#define TIMES 333
#define DIVIDE 334
#define PERCENT 335
#define DOLLAR 336
#define QUESTION 337
#define OPTIONS 338
#define COLON 339
#define COLONCOLON 340
#define QUESTIONCOLON 341
#define NEW 342
#define SPORK 343
#define FORK 344
#define TYPEOF 345
#define L_HACK 346
#define R_HACK 347
#define AND 348
#define EQ 349
#define GE 350
#define GT 351
#define LE 352
#define LT 353
#define NEQ 354
#define SHIFT_LEFT 355
#define SHIFT_RIGHT 356
#define S_AND 357
#define S_OR 358
#define S_XOR 359
#define OR 360
#define TMPL 361
#define TILDA 362
#define EXCLAMATION 363
#define DYNOP 364
#define RANGE_EMPTY 365
#define UMINUS 366
#define UTIMES 367
#define STMT_ASSOC 369
#define STMT_NOASSOC 370

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

#line 323 "include/parser.h"

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
