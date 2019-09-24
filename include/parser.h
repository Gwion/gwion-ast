/* A Bison parser, made by GNU Bison 3.4.  */

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
    AST_DTOR = 293,
    OPERATOR = 294,
    TYPEDEF = 295,
    NOELSE = 296,
    UNION = 297,
    CONSTT = 298,
    AUTO = 299,
    PASTE = 300,
    ELLIPSE = 301,
    RARROW = 302,
    BACKSLASH = 303,
    BACKTICK = 304,
    NUM = 305,
    FLOATT = 306,
    ID = 307,
    STRING_LIT = 308,
    CHAR_LIT = 309,
    PLUS = 310,
    PLUSPLUS = 311,
    MINUS = 312,
    MINUSMINUS = 313,
    TIMES = 314,
    DIVIDE = 315,
    PERCENT = 316,
    DOLLAR = 317,
    QUESTION = 318,
    COLON = 319,
    COLONCOLON = 320,
    QUESTIONCOLON = 321,
    ATSYM = 322,
    GTPAREN = 323,
    LTPAREN = 324,
    NEW = 325,
    SPORK = 326,
    FORK = 327,
    TYPEOF = 328,
    L_HACK = 329,
    R_HACK = 330,
    AND = 331,
    EQ = 332,
    GE = 333,
    GT = 334,
    LE = 335,
    LT = 336,
    NEQ = 337,
    SHIFT_LEFT = 338,
    SHIFT_RIGHT = 339,
    S_AND = 340,
    S_OR = 341,
    S_XOR = 342,
    OR = 343,
    LTMPL = 344,
    RTMPL = 345,
    TILDA = 346,
    EXCLAMATION = 347,
    DYNOP = 348,
    PP_COMMENT = 349,
    PP_INCLUDE = 350,
    PP_DEFINE = 351,
    PP_UNDEF = 352,
    PP_IFDEF = 353,
    PP_IFNDEF = 354,
    PP_ELSE = 355,
    PP_ENDIF = 356,
    PP_NL = 357,
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
#define AST_DTOR 293
#define OPERATOR 294
#define TYPEDEF 295
#define NOELSE 296
#define UNION 297
#define CONSTT 298
#define AUTO 299
#define PASTE 300
#define ELLIPSE 301
#define RARROW 302
#define BACKSLASH 303
#define BACKTICK 304
#define NUM 305
#define FLOATT 306
#define ID 307
#define STRING_LIT 308
#define CHAR_LIT 309
#define PLUS 310
#define PLUSPLUS 311
#define MINUS 312
#define MINUSMINUS 313
#define TIMES 314
#define DIVIDE 315
#define PERCENT 316
#define DOLLAR 317
#define QUESTION 318
#define COLON 319
#define COLONCOLON 320
#define QUESTIONCOLON 321
#define ATSYM 322
#define GTPAREN 323
#define LTPAREN 324
#define NEW 325
#define SPORK 326
#define FORK 327
#define TYPEOF 328
#define L_HACK 329
#define R_HACK 330
#define AND 331
#define EQ 332
#define GE 333
#define GT 334
#define LE 335
#define LT 336
#define NEQ 337
#define SHIFT_LEFT 338
#define SHIFT_RIGHT 339
#define S_AND 340
#define S_OR 341
#define S_XOR 342
#define OR 343
#define LTMPL 344
#define RTMPL 345
#define TILDA 346
#define EXCLAMATION 347
#define DYNOP 348
#define PP_COMMENT 349
#define PP_INCLUDE 350
#define PP_DEFINE 351
#define PP_UNDEF 352
#define PP_IFDEF 353
#define PP_IFNDEF 354
#define PP_ELSE 355
#define PP_ENDIF 356
#define PP_NL 357
#define UMINUS 358
#define UTIMES 359

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "ly/gwion.y"

  char* sval;
  int ival;
  long unsigned int lval;
  ae_flag flag;
  m_float fval;
  Symbol sym;
  Array_Sub array_sub;
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
  Class_Body class_body;
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
