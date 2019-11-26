/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_GWION_INCLUDE_PARSER_H_INCLUDED
# define YY_GWION_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gwion_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    COMMA = 259,
    LPAREN = 260,
    RPAREN = 261,
    LBRACK = 262,
    RBRACK = 263,
    LBRACE = 264,
    RBRACE = 265,
    PERCENTPAREN = 266,
    SHARPPAREN = 267,
    ATPAREN = 268,
    FUNCTION = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    UNTIL = 274,
    LOOP = 275,
    FOR = 276,
    GOTO = 277,
    MATCH = 278,
    CASE = 279,
    WHEN = 280,
    WHERE = 281,
    ENUM = 282,
    TRETURN = 283,
    BREAK = 284,
    CONTINUE = 285,
    CLASS = 286,
    STATIC = 287,
    GLOBAL = 288,
    PRIVATE = 289,
    PROTECT = 290,
    EXTENDS = 291,
    DOT = 292,
    OPERATOR = 293,
    TYPEDEF = 294,
    NOELSE = 295,
    UNION = 296,
    CONSTT = 297,
    AUTO = 298,
    PASTE = 299,
    ELLIPSE = 300,
    RARROW = 301,
    BACKSLASH = 302,
    BACKTICK = 303,
    NUM = 304,
    FLOATT = 305,
    ID = 306,
    STRING_LIT = 307,
    CHAR_LIT = 308,
    PP_COMMENT = 309,
    PP_INCLUDE = 310,
    PP_DEFINE = 311,
    PP_PRAGMA = 312,
    PP_UNDEF = 313,
    PP_IFDEF = 314,
    PP_IFNDEF = 315,
    PP_ELSE = 316,
    PP_ENDIF = 317,
    PP_NL = 318,
    PLUS = 319,
    PLUSPLUS = 320,
    MINUS = 321,
    MINUSMINUS = 322,
    TIMES = 323,
    DIVIDE = 324,
    PERCENT = 325,
    DOLLAR = 326,
    QUESTION = 327,
    COLON = 328,
    COLONCOLON = 329,
    QUESTIONCOLON = 330,
    ATSYM = 331,
    GTPAREN = 332,
    LTPAREN = 333,
    NEW = 334,
    SPORK = 335,
    FORK = 336,
    TYPEOF = 337,
    L_HACK = 338,
    R_HACK = 339,
    AND = 340,
    EQ = 341,
    GE = 342,
    GT = 343,
    LE = 344,
    LT = 345,
    NEQ = 346,
    SHIFT_LEFT = 347,
    SHIFT_RIGHT = 348,
    S_AND = 349,
    S_OR = 350,
    S_XOR = 351,
    OR = 352,
    LTMPL = 353,
    RTMPL = 354,
    TILDA = 355,
    EXCLAMATION = 356,
    DYNOP = 357,
    UMINUS = 358,
    UTIMES = 359
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define COMMA 259
#define LPAREN 260
#define RPAREN 261
#define LBRACK 262
#define RBRACK 263
#define LBRACE 264
#define RBRACE 265
#define PERCENTPAREN 266
#define SHARPPAREN 267
#define ATPAREN 268
#define FUNCTION 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define DO 273
#define UNTIL 274
#define LOOP 275
#define FOR 276
#define GOTO 277
#define MATCH 278
#define CASE 279
#define WHEN 280
#define WHERE 281
#define ENUM 282
#define TRETURN 283
#define BREAK 284
#define CONTINUE 285
#define CLASS 286
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
#define AUTO 298
#define PASTE 299
#define ELLIPSE 300
#define RARROW 301
#define BACKSLASH 302
#define BACKTICK 303
#define NUM 304
#define FLOATT 305
#define ID 306
#define STRING_LIT 307
#define CHAR_LIT 308
#define PP_COMMENT 309
#define PP_INCLUDE 310
#define PP_DEFINE 311
#define PP_PRAGMA 312
#define PP_UNDEF 313
#define PP_IFDEF 314
#define PP_IFNDEF 315
#define PP_ELSE 316
#define PP_ENDIF 317
#define PP_NL 318
#define PLUS 319
#define PLUSPLUS 320
#define MINUS 321
#define MINUSMINUS 322
#define TIMES 323
#define DIVIDE 324
#define PERCENT 325
#define DOLLAR 326
#define QUESTION 327
#define COLON 328
#define COLONCOLON 329
#define QUESTIONCOLON 330
#define ATSYM 331
#define GTPAREN 332
#define LTPAREN 333
#define NEW 334
#define SPORK 335
#define FORK 336
#define TYPEOF 337
#define L_HACK 338
#define R_HACK 339
#define AND 340
#define EQ 341
#define GE 342
#define GT 343
#define LE 344
#define LT 345
#define NEQ 346
#define SHIFT_LEFT 347
#define SHIFT_RIGHT 348
#define S_AND 349
#define S_OR 350
#define S_XOR 351
#define OR 352
#define LTMPL 353
#define RTMPL 354
#define TILDA 355
#define EXCLAMATION 356
#define DYNOP 357
#define UMINUS 358
#define UTIMES 359

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

#line 295 "include/parser.h"

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
