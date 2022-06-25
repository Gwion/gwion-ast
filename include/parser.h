/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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
    TRY = 284,                     /* "try"  */
    PERFORM = 285,                 /* "perform"  */
    HANDLET = 286,                 /* "handle"  */
    RETRY = 287,                   /* "retry"  */
    CLASS = 288,                   /* "class"  */
    STRUCT = 289,                  /* "struct"  */
    TRAIT = 290,                   /* "trait"  */
    STATIC = 291,                  /* "static"  */
    GLOBAL = 292,                  /* "global"  */
    PRIVATE = 293,                 /* "private"  */
    PROTECT = 294,                 /* "protect"  */
    ABSTRACT = 295,                /* "abstract"  */
    FINAL = 296,                   /* "final"  */
    EXTENDS = 297,                 /* "extends"  */
    DOT = 298,                     /* "."  */
    OPERATOR = 299,                /* "operator"  */
    TYPEDEF = 300,                 /* "typedef"  */
    DISTINCT = 301,                /* "distinct"  */
    FUNPTR = 302,                  /* "funptr"  */
    NOELSE = 303,                  /* NOELSE  */
    UNION = 304,                   /* "union"  */
    CONSTT = 305,                  /* "const"  */
    ELLIPSE = 306,                 /* "..."  */
    DEFER = 307,                   /* "defer"  */
    BACKSLASH = 308,               /* "\\"  */
    OPID_A = 309,                  /* OPID_A  */
    LOCALE = 310,                  /* LOCALE  */
    LOCALE_INI = 311,              /* LOCALE_INI  */
    LOCALE_END = 312,              /* LOCALE_END  */
    LATE = 313,                    /* "late"  */
    NUM = 314,                     /* "<integer>"  */
    FLOATT = 315,                  /* "<float>"  */
    STRING_LIT = 316,              /* "<litteral string>"  */
    CHAR_LIT = 317,                /* "<litteral char>"  */
    INTERP_START = 318,            /* "${"  */
    INTERP_EXP = 319,              /* INTERP_EXP  */
    PP_COMMENT = 320,              /* "<comment>"  */
    PP_INCLUDE = 321,              /* "#include"  */
    PP_DEFINE = 322,               /* "#define"  */
    PP_PRAGMA = 323,               /* "#pragma"  */
    PP_UNDEF = 324,                /* "#undef"  */
    PP_IFDEF = 325,                /* "#ifdef"  */
    PP_IFNDEF = 326,               /* "#ifndef"  */
    PP_ELSE = 327,                 /* "#else"  */
    PP_ENDIF = 328,                /* "#if"  */
    PP_NL = 329,                   /* "\n"  */
    PP_IMPORT = 330,               /* "import"  */
    SPREAD = 331,                  /* "}..."  */
    INTERP_LIT = 332,              /* "<interp string lit>"  */
    INTERP_END = 333,              /* "<interp string end>"  */
    ID = 335,                      /* "<identifier>"  */
    PLUS = 336,                    /* "+"  */
    PLUSPLUS = 337,                /* "++"  */
    MINUS = 338,                   /* "-"  */
    MINUSMINUS = 339,              /* "--"  */
    TIMES = 340,                   /* "*"  */
    DIVIDE = 341,                  /* "/"  */
    PERCENT = 342,                 /* "%"  */
    DOLLAR = 343,                  /* "$"  */
    QUESTION = 344,                /* "?"  */
    OPTIONS = 345,                 /* OPTIONS  */
    COLON = 346,                   /* ":"  */
    COLONCOLON = 347,              /* "::"  */
    QUESTIONCOLON = 348,           /* "?:"  */
    NEW = 349,                     /* "new"  */
    SPORK = 350,                   /* "spork"  */
    FORK = 351,                    /* "fork"  */
    L_HACK = 352,                  /* "<<<"  */
    R_HACK = 353,                  /* ">>>"  */
    AND = 354,                     /* "&&"  */
    EQ = 355,                      /* "=="  */
    GE = 356,                      /* ">="  */
    GT = 357,                      /* ">"  */
    LE = 358,                      /* "<="  */
    LT = 359,                      /* "<"  */
    NEQ = 360,                     /* "!="  */
    SHIFT_LEFT = 361,              /* "<<"  */
    SHIFT_RIGHT = 362,             /* ">>"  */
    S_AND = 363,                   /* "&"  */
    S_OR = 364,                    /* "|"  */
    S_XOR = 365,                   /* "^"  */
    OR = 366,                      /* "||"  */
    TMPL = 367,                    /* ":["  */
    TILDA = 368,                   /* "~"  */
    EXCLAMATION = 369,             /* "!"  */
    AROBASE = 370,                 /* "@"  */
    DYNOP = 371,                   /* "<dynamic_operator>"  */
    LOCALE_EXP = 372,              /* "`foo`"  */
    RANGE_EMPTY = 373,             /* RANGE_EMPTY  */
    UMINUS = 374,                  /* UMINUS  */
    UTIMES = 375,                  /* UTIMES  */
    STMT_ASSOC = 377,              /* STMT_ASSOC  */
    STMT_NOASSOC = 378             /* STMT_NOASSOC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
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
#define TRY 284
#define PERFORM 285
#define HANDLET 286
#define RETRY 287
#define CLASS 288
#define STRUCT 289
#define TRAIT 290
#define STATIC 291
#define GLOBAL 292
#define PRIVATE 293
#define PROTECT 294
#define ABSTRACT 295
#define FINAL 296
#define EXTENDS 297
#define DOT 298
#define OPERATOR 299
#define TYPEDEF 300
#define DISTINCT 301
#define FUNPTR 302
#define NOELSE 303
#define UNION 304
#define CONSTT 305
#define ELLIPSE 306
#define DEFER 307
#define BACKSLASH 308
#define OPID_A 309
#define LOCALE 310
#define LOCALE_INI 311
#define LOCALE_END 312
#define LATE 313
#define NUM 314
#define FLOATT 315
#define STRING_LIT 316
#define CHAR_LIT 317
#define INTERP_START 318
#define INTERP_EXP 319
#define PP_COMMENT 320
#define PP_INCLUDE 321
#define PP_DEFINE 322
#define PP_PRAGMA 323
#define PP_UNDEF 324
#define PP_IFDEF 325
#define PP_IFNDEF 326
#define PP_ELSE 327
#define PP_ENDIF 328
#define PP_NL 329
#define PP_IMPORT 330
#define SPREAD 331
#define INTERP_LIT 332
#define INTERP_END 333
#define ID 335
#define PLUS 336
#define PLUSPLUS 337
#define MINUS 338
#define MINUSMINUS 339
#define TIMES 340
#define DIVIDE 341
#define PERCENT 342
#define DOLLAR 343
#define QUESTION 344
#define OPTIONS 345
#define COLON 346
#define COLONCOLON 347
#define QUESTIONCOLON 348
#define NEW 349
#define SPORK 350
#define FORK 351
#define L_HACK 352
#define R_HACK 353
#define AND 354
#define EQ 355
#define GE 356
#define GT 357
#define LE 358
#define LT 359
#define NEQ 360
#define SHIFT_LEFT 361
#define SHIFT_RIGHT 362
#define S_AND 363
#define S_OR 364
#define S_XOR 365
#define OR 366
#define TMPL 367
#define TILDA 368
#define EXCLAMATION 369
#define AROBASE 370
#define DYNOP 371
#define LOCALE_EXP 372
#define RANGE_EMPTY 373
#define UMINUS 374
#define UTIMES 375
#define STMT_ASSOC 377
#define STMT_NOASSOC 378

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "src/gwion.y"

  bool yybool;
  ae_stmt_t stmt_t;
  char* sval;
  struct AstString string;
  int ival;
  long unsigned int lval;
  m_uint uval;
  ae_flag flag;
  enum fbflag fbflag;
  enum cflag cflag;
  m_float fval;
  Symbol sym;
  struct Vector_ vector;
  Array_Sub array_sub;
  Range* range;
  struct Var_Decl_ var_decl;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  struct Stmt_ stmt;
  Stmt stmt_ptr;
  Handler handler;
  ParserHandler handler_list;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Capture capture;
  Capture_List captures;
  struct ParserArg default_args;
  Arg arg;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section section;
  ID_List id_list;
  Specialized_List specialized_list;
  Type_List type_list;
  Union_Member union_member;
  Union_List union_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Trait_Def trait_def;
  Ast ast;

#line 356 "include/parser.h"

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
