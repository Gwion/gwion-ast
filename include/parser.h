/* A Bison parser, made by GNU Bison 3.6.4.  */

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
    IF = 267,                      /* "if"  */
    ELSE = 268,                    /* "else"  */
    WHILE = 269,                   /* "while"  */
    DO = 270,                      /* "do"  */
    UNTIL = 271,                   /* "until"  */
    LOOP = 272,                    /* "repeat"  */
    FOR = 273,                     /* "for"  */
    GOTO = 274,                    /* "goto"  */
    MATCH = 275,                   /* "match"  */
    CASE = 276,                    /* "case"  */
    WHEN = 277,                    /* "when"  */
    WHERE = 278,                   /* "where"  */
    ENUM = 279,                    /* "enum"  */
    TRETURN = 280,                 /* "return"  */
    BREAK = 281,                   /* "break"  */
    CONTINUE = 282,                /* "continue"  */
    CLASS = 283,                   /* "class"  */
    STRUCT = 284,                  /* "struct"  */
    STATIC = 285,                  /* "static"  */
    GLOBAL = 286,                  /* "global"  */
    PRIVATE = 287,                 /* "private"  */
    PROTECT = 288,                 /* "protect"  */
    EXTENDS = 289,                 /* "extends"  */
    DOT = 290,                     /* "."  */
    OPERATOR = 291,                /* "operator"  */
    TYPEDEF = 292,                 /* "typedef"  */
    NOELSE = 293,                  /* NOELSE  */
    UNION = 294,                   /* "union"  */
    CONSTT = 295,                  /* "const"  */
    AUTO = 296,                    /* "auto"  */
    PASTE = 297,                   /* "##"  */
    ELLIPSE = 298,                 /* "..."  */
    VARLOOP = 299,                 /* "varloop"  */
    RARROW = 300,                  /* "->"  */
    BACKSLASH = 301,               /* "\\"  */
    BACKTICK = 302,                /* "`"  */
    OPID = 303,                    /* OPID  */
    REF = 304,                     /* "ref"  */
    NONNULL = 305,                 /* "nonnull"  */
    NUM = 306,                     /* "<integer>"  */
    FLOATT = 307,                  /* FLOATT  */
    ID = 308,                      /* "<identifier>"  */
    STRING_LIT = 309,              /* "<litteral string>"  */
    CHAR_LIT = 310,                /* "<litteral char>"  */
    INTERP_LIT = 311,              /* "<interp string>"  */
    INTERP_EXP = 312,              /* INTERP_EXP  */
    PP_COMMENT = 313,              /* "<comment>"  */
    PP_INCLUDE = 314,              /* "#include"  */
    PP_DEFINE = 315,               /* "#define"  */
    PP_PRAGMA = 316,               /* "#pragma"  */
    PP_UNDEF = 317,                /* "#undef"  */
    PP_IFDEF = 318,                /* "#ifdef"  */
    PP_IFNDEF = 319,               /* "#ifndef"  */
    PP_ELSE = 320,                 /* "#else"  */
    PP_ENDIF = 321,                /* "#if"  */
    PP_NL = 322,                   /* "\n"  */
    PLUS = 324,                    /* "+"  */
    PLUSPLUS = 325,                /* "++"  */
    MINUS = 326,                   /* "-"  */
    MINUSMINUS = 327,              /* "--"  */
    TIMES = 328,                   /* "*"  */
    DIVIDE = 329,                  /* "/"  */
    PERCENT = 330,                 /* "%"  */
    DOLLAR = 331,                  /* "$"  */
    QUESTION = 332,                /* "?"  */
    COLON = 333,                   /* ":"  */
    COLONCOLON = 334,              /* "::"  */
    QUESTIONCOLON = 335,           /* "?:"  */
    NEW = 336,                     /* "new"  */
    SPORK = 337,                   /* "spork"  */
    FORK = 338,                    /* "fork"  */
    TYPEOF = 339,                  /* "typeof"  */
    L_HACK = 340,                  /* "<<<"  */
    R_HACK = 341,                  /* ">>>"  */
    AND = 342,                     /* "&&"  */
    EQ = 343,                      /* "=="  */
    GE = 344,                      /* ">="  */
    GT = 345,                      /* ">"  */
    LE = 346,                      /* "<="  */
    LT = 347,                      /* "<"  */
    NEQ = 348,                     /* "!="  */
    SHIFT_LEFT = 349,              /* "<<"  */
    SHIFT_RIGHT = 350,             /* ">>"  */
    S_AND = 351,                   /* "&"  */
    S_OR = 352,                    /* "|"  */
    S_XOR = 353,                   /* "^"  */
    OR = 354,                      /* "||"  */
    LTMPL = 355,                   /* "<~"  */
    RTMPL = 356,                   /* "~>"  */
    TILDA = 357,                   /* "~"  */
    EXCLAMATION = 358,             /* "!"  */
    DYNOP = 359,                   /* "<dynamic_operator>"  */
    UMINUS = 360,                  /* UMINUS  */
    UTIMES = 361                   /* UTIMES  */
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
#define IF 267
#define ELSE 268
#define WHILE 269
#define DO 270
#define UNTIL 271
#define LOOP 272
#define FOR 273
#define GOTO 274
#define MATCH 275
#define CASE 276
#define WHEN 277
#define WHERE 278
#define ENUM 279
#define TRETURN 280
#define BREAK 281
#define CONTINUE 282
#define CLASS 283
#define STRUCT 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define OPERATOR 291
#define TYPEDEF 292
#define NOELSE 293
#define UNION 294
#define CONSTT 295
#define AUTO 296
#define PASTE 297
#define ELLIPSE 298
#define VARLOOP 299
#define RARROW 300
#define BACKSLASH 301
#define BACKTICK 302
#define OPID 303
#define REF 304
#define NONNULL 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define INTERP_LIT 311
#define INTERP_EXP 312
#define PP_COMMENT 313
#define PP_INCLUDE 314
#define PP_DEFINE 315
#define PP_PRAGMA 316
#define PP_UNDEF 317
#define PP_IFDEF 318
#define PP_IFNDEF 319
#define PP_ELSE 320
#define PP_ENDIF 321
#define PP_NL 322
#define PLUS 324
#define PLUSPLUS 325
#define MINUS 326
#define MINUSMINUS 327
#define TIMES 328
#define DIVIDE 329
#define PERCENT 330
#define DOLLAR 331
#define QUESTION 332
#define COLON 333
#define COLONCOLON 334
#define QUESTIONCOLON 335
#define NEW 336
#define SPORK 337
#define FORK 338
#define TYPEOF 339
#define L_HACK 340
#define R_HACK 341
#define AND 342
#define EQ 343
#define GE 344
#define GT 345
#define LE 346
#define LT 347
#define NEQ 348
#define SHIFT_LEFT 349
#define SHIFT_RIGHT 350
#define S_AND 351
#define S_OR 352
#define S_XOR 353
#define OR 354
#define LTMPL 355
#define RTMPL 356
#define TILDA 357
#define EXCLAMATION 358
#define DYNOP 359
#define UMINUS 360
#define UTIMES 361

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

#line 306 "include/parser.h"

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
