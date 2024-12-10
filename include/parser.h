/* A Bison parser, made by GNU Bison 3.8.2.  */

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
    RBRACK2 = 264,                 /* ",]"  */
    LBRACE = 265,                  /* "{"  */
    RBRACE = 266,                  /* "}"  */
    FUNCTION = 267,                /* "fun"  */
    VAR = 268,                     /* "var"  */
    IF = 269,                      /* "if"  */
    ELSE = 270,                    /* "else"  */
    WHILE = 271,                   /* "while"  */
    DO = 272,                      /* "do"  */
    UNTIL = 273,                   /* "until"  */
    LOOP = 274,                    /* "repeat"  */
    FOR = 275,                     /* "for"  */
    FOREACH = 276,                 /* "foreach"  */
    MATCH = 277,                   /* "match"  */
    CASE = 278,                    /* "case"  */
    WHEN = 279,                    /* "when"  */
    WHERE = 280,                   /* "where"  */
    ENUM = 281,                    /* "enum"  */
    TRETURN = 282,                 /* "return"  */
    BREAK = 283,                   /* "break"  */
    CONTINUE = 284,                /* "continue"  */
    TRY = 285,                     /* "try"  */
    PERFORM = 286,                 /* "perform"  */
    HANDLET = 287,                 /* "handle"  */
    RETRY = 288,                   /* "retry"  */
    CLASS = 289,                   /* "class"  */
    STRUCT = 290,                  /* "struct"  */
    TRAIT = 291,                   /* "trait"  */
    STATIC = 292,                  /* "static"  */
    GLOBAL = 293,                  /* "global"  */
    PRIVATE = 294,                 /* "private"  */
    PROTECT = 295,                 /* "protect"  */
    ABSTRACT = 296,                /* "abstract"  */
    FINAL = 297,                   /* "final"  */
    EXTENDS = 298,                 /* "extends"  */
    DOT = 299,                     /* "."  */
    OPERATOR = 300,                /* "operator"  */
    PRIMITIVE = 301,               /* "primitive"  */
    TYPEDEF = 302,                 /* "typedef"  */
    DISTINCT = 303,                /* "distinct"  */
    FUNPTR = 304,                  /* "funptr"  */
    NOELSE = 305,                  /* NOELSE  */
    UNION = 306,                   /* "union"  */
    CONSTT = 307,                  /* "const"  */
    ELLIPSE = 308,                 /* "..."  */
    DEFER = 309,                   /* "defer"  */
    BACKSLASH = 310,               /* "\\"  */
    OPID_A = 311,                  /* OPID_A  */
    LOCALE = 312,                  /* LOCALE  */
    LOCALE_INI = 313,              /* LOCALE_INI  */
    LOCALE_END = 314,              /* LOCALE_END  */
    LATE = 315,                    /* "late"  */
    USING = 316,                   /* "using"  */
    IMPORT = 317,                  /* "import"  */
    NAMED = 318,                   /* "="  */
    INTEGER = 319,                 /* INTEGER  */
    FLOATT = 321,                  /* "<float>"  */
    STRING_LIT = 322,              /* "<litteral string>"  */
    CHAR_LIT = 323,                /* "<litteral char>"  */
    INTERP_START = 324,            /* "${"  */
    INTERP_EXP = 325,              /* INTERP_EXP  */
    PP_COMMENT = 326,              /* "<comment>"  */
    PP_INCLUDE = 327,              /* "#include"  */
    PP_DEFINE = 328,               /* "#define"  */
    PP_PRAGMA = 329,               /* "#pragma"  */
    PP_UNDEF = 330,                /* "#undef"  */
    PP_IFDEF = 331,                /* "#ifdef"  */
    PP_IFNDEF = 332,               /* "#ifndef"  */
    PP_ELSE = 333,                 /* "#else"  */
    PP_ENDIF = 334,                /* "#if"  */
    PP_NL = 335,                   /* "\n"  */
    SPREAD = 336,                  /* "}..."  */
    INTERP_LIT = 337,              /* "<interp string lit>"  */
    INTERP_END = 338,              /* "<interp string end>"  */
    ID = 340,                      /* "<identifier>"  */
    PLUS = 341,                    /* "+"  */
    PLUSPLUS = 342,                /* "++"  */
    MINUS = 343,                   /* "-"  */
    MINUSMINUS = 344,              /* "--"  */
    TIMES = 345,                   /* "*"  */
    DIVIDE = 346,                  /* "/"  */
    PERCENT = 347,                 /* "%"  */
    DOLLAR = 348,                  /* "$"  */
    QUESTION = 349,                /* "?"  */
    OPTIONS = 350,                 /* OPTIONS  */
    COLON = 351,                   /* ":"  */
    COLONCOLON = 352,              /* "::"  */
    QUESTIONCOLON = 353,           /* "?:"  */
    NEW = 354,                     /* "new"  */
    SPORK = 355,                   /* "spork"  */
    FORK = 356,                    /* "fork"  */
    L_HACK = 357,                  /* "<<<"  */
    R_HACK = 358,                  /* ">>>"  */
    AND = 359,                     /* "&&"  */
    EQ = 360,                      /* "=="  */
    GE = 361,                      /* ">="  */
    GT = 362,                      /* ">"  */
    LE = 363,                      /* "<="  */
    LT = 364,                      /* "<"  */
    NEQ = 365,                     /* "!="  */
    SHIFT_LEFT = 366,              /* "<<"  */
    SHIFT_RIGHT = 367,             /* ">>"  */
    S_AND = 368,                   /* "&"  */
    S_OR = 369,                    /* "|"  */
    S_XOR = 370,                   /* "^"  */
    OR = 371,                      /* "||"  */
    TMPL = 372,                    /* ":["  */
    TILDA = 373,                   /* "~"  */
    EXCLAMATION = 374,             /* "!"  */
    AROBASE = 375,                 /* "@"  */
    DYNOP = 376,                   /* "<dynamic_operator>"  */
    LOCALE_EXP = 377,              /* "`foo`"  */
    RANGE_EMPTY = 378,             /* RANGE_EMPTY  */
    UMINUS = 379,                  /* UMINUS  */
    UTIMES = 380,                  /* UTIMES  */
    SECTION_LIST = 381,            /* SECTION_LIST  */
    STMT_LIST3 = 382,              /* STMT_LIST3  */
    STMT_LIST2 = 383,              /* STMT_LIST2  */
    STMT_LIST1 = 384               /* STMT_LIST1  */
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
#define RBRACK2 264
#define LBRACE 265
#define RBRACE 266
#define FUNCTION 267
#define VAR 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define UNTIL 273
#define LOOP 274
#define FOR 275
#define FOREACH 276
#define MATCH 277
#define CASE 278
#define WHEN 279
#define WHERE 280
#define ENUM 281
#define TRETURN 282
#define BREAK 283
#define CONTINUE 284
#define TRY 285
#define PERFORM 286
#define HANDLET 287
#define RETRY 288
#define CLASS 289
#define STRUCT 290
#define TRAIT 291
#define STATIC 292
#define GLOBAL 293
#define PRIVATE 294
#define PROTECT 295
#define ABSTRACT 296
#define FINAL 297
#define EXTENDS 298
#define DOT 299
#define OPERATOR 300
#define PRIMITIVE 301
#define TYPEDEF 302
#define DISTINCT 303
#define FUNPTR 304
#define NOELSE 305
#define UNION 306
#define CONSTT 307
#define ELLIPSE 308
#define DEFER 309
#define BACKSLASH 310
#define OPID_A 311
#define LOCALE 312
#define LOCALE_INI 313
#define LOCALE_END 314
#define LATE 315
#define USING 316
#define IMPORT 317
#define NAMED 318
#define INTEGER 319
#define FLOATT 321
#define STRING_LIT 322
#define CHAR_LIT 323
#define INTERP_START 324
#define INTERP_EXP 325
#define PP_COMMENT 326
#define PP_INCLUDE 327
#define PP_DEFINE 328
#define PP_PRAGMA 329
#define PP_UNDEF 330
#define PP_IFDEF 331
#define PP_IFNDEF 332
#define PP_ELSE 333
#define PP_ENDIF 334
#define PP_NL 335
#define SPREAD 336
#define INTERP_LIT 337
#define INTERP_END 338
#define ID 340
#define PLUS 341
#define PLUSPLUS 342
#define MINUS 343
#define MINUSMINUS 344
#define TIMES 345
#define DIVIDE 346
#define PERCENT 347
#define DOLLAR 348
#define QUESTION 349
#define OPTIONS 350
#define COLON 351
#define COLONCOLON 352
#define QUESTIONCOLON 353
#define NEW 354
#define SPORK 355
#define FORK 356
#define L_HACK 357
#define R_HACK 358
#define AND 359
#define EQ 360
#define GE 361
#define GT 362
#define LE 363
#define LT 364
#define NEQ 365
#define SHIFT_LEFT 366
#define SHIFT_RIGHT 367
#define S_AND 368
#define S_OR 369
#define S_XOR 370
#define OR 371
#define TMPL 372
#define TILDA 373
#define EXCLAMATION 374
#define AROBASE 375
#define DYNOP 376
#define LOCALE_EXP 377
#define RANGE_EMPTY 378
#define UMINUS 379
#define UTIMES 380
#define SECTION_LIST 381
#define STMT_LIST3 382
#define STMT_LIST2 383
#define STMT_LIST1 384

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "src/gwion.y"

  bool yybool;
  ae_stmt_t stmt_t;
  char* sval;
  long long integer;
  struct yyint yyint;
  struct gwint gwint;
  struct AstString string;
  int ival;
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
  Exp*   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Stmt* stmt_ptr;
  Handler handler;
  ParserHandler handler_list;
  StmtList *stmt_list;
  ArgList *arg_list;
  Capture capture;
  CaptureList *captures;
  Arg arg;
  Func_Def func_def;
  EnumValue enum_value;
  EnumValueList *enum_list;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section section;
  TagList *taglist;
  Specialized specialized;
  SpecializedList *specialized_list;
  TmplArg tmplarg;
  TmplArgList *tmplarg_list;
  Variable variable;
  VariableList *variable_list;
  struct Stmt_Using_ import_item;
  UsingStmtList *import_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Trait_Def trait_def;
  Prim_Def prim_def;
  Ast ast;

#line 376 "include/parser.h"

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
