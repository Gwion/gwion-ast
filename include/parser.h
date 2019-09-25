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
    AST_GACK = 294,
    OPERATOR = 295,
    TYPEDEF = 296,
    NOELSE = 297,
    UNION = 298,
    CONSTT = 299,
    AUTO = 300,
    PASTE = 301,
    ELLIPSE = 302,
    RARROW = 303,
    BACKSLASH = 304,
    BACKTICK = 305,
    NUM = 306,
    FLOATT = 307,
    ID = 308,
    STRING_LIT = 309,
    CHAR_LIT = 310,
    PLUS = 311,
    PLUSPLUS = 312,
    MINUS = 313,
    MINUSMINUS = 314,
    TIMES = 315,
    DIVIDE = 316,
    PERCENT = 317,
    DOLLAR = 318,
    QUESTION = 319,
    COLON = 320,
    COLONCOLON = 321,
    QUESTIONCOLON = 322,
    ATSYM = 323,
    GTPAREN = 324,
    LTPAREN = 325,
    NEW = 326,
    SPORK = 327,
    FORK = 328,
    TYPEOF = 329,
    L_HACK = 330,
    R_HACK = 331,
    AND = 332,
    EQ = 333,
    GE = 334,
    GT = 335,
    LE = 336,
    LT = 337,
    NEQ = 338,
    SHIFT_LEFT = 339,
    SHIFT_RIGHT = 340,
    S_AND = 341,
    S_OR = 342,
    S_XOR = 343,
    OR = 344,
    LTMPL = 345,
    RTMPL = 346,
    TILDA = 347,
    EXCLAMATION = 348,
    DYNOP = 349,
    PP_COMMENT = 350,
    PP_INCLUDE = 351,
    PP_DEFINE = 352,
    PP_UNDEF = 353,
    PP_IFDEF = 354,
    PP_IFNDEF = 355,
    PP_ELSE = 356,
    PP_ENDIF = 357,
    PP_NL = 358,
    UMINUS = 359,
    UTIMES = 360
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
#define AST_GACK 294
#define OPERATOR 295
#define TYPEDEF 296
#define NOELSE 297
#define UNION 298
#define CONSTT 299
#define AUTO 300
#define PASTE 301
#define ELLIPSE 302
#define RARROW 303
#define BACKSLASH 304
#define BACKTICK 305
#define NUM 306
#define FLOATT 307
#define ID 308
#define STRING_LIT 309
#define CHAR_LIT 310
#define PLUS 311
#define PLUSPLUS 312
#define MINUS 313
#define MINUSMINUS 314
#define TIMES 315
#define DIVIDE 316
#define PERCENT 317
#define DOLLAR 318
#define QUESTION 319
#define COLON 320
#define COLONCOLON 321
#define QUESTIONCOLON 322
#define ATSYM 323
#define GTPAREN 324
#define LTPAREN 325
#define NEW 326
#define SPORK 327
#define FORK 328
#define TYPEOF 329
#define L_HACK 330
#define R_HACK 331
#define AND 332
#define EQ 333
#define GE 334
#define GT 335
#define LE 336
#define LT 337
#define NEQ 338
#define SHIFT_LEFT 339
#define SHIFT_RIGHT 340
#define S_AND 341
#define S_OR 342
#define S_XOR 343
#define OR 344
#define LTMPL 345
#define RTMPL 346
#define TILDA 347
#define EXCLAMATION 348
#define DYNOP 349
#define PP_COMMENT 350
#define PP_INCLUDE 351
#define PP_DEFINE 352
#define PP_UNDEF 353
#define PP_IFDEF 354
#define PP_IFNDEF 355
#define PP_ELSE 356
#define PP_ENDIF 357
#define PP_NL 358
#define UMINUS 359
#define UTIMES 360

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

#line 297 "include/parser.h"

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
