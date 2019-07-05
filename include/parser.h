/* A Bison parser, made by GNU Bison 3.3.2.  */

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
    SWITCH = 278,
    CASE = 279,
    ENUM = 280,
    RETURN = 281,
    BREAK = 282,
    CONTINUE = 283,
    CLASS = 284,
    STATIC = 285,
    GLOBAL = 286,
    PRIVATE = 287,
    PROTECT = 288,
    EXTENDS = 289,
    DOT = 290,
    AST_DTOR = 291,
    OPERATOR = 292,
    TYPEDEF = 293,
    NOELSE = 294,
    UNION = 295,
    CONSTT = 296,
    AUTO = 297,
    PASTE = 298,
    ELLIPSE = 299,
    BACKSLASH = 300,
    BACKTICK = 301,
    NUM = 302,
    FLOATT = 303,
    ID = 304,
    STRING_LIT = 305,
    CHAR_LIT = 306,
    PLUS = 307,
    PLUSPLUS = 308,
    MINUS = 309,
    MINUSMINUS = 310,
    TIMES = 311,
    DIVIDE = 312,
    PERCENT = 313,
    DOLLAR = 314,
    QUESTION = 315,
    COLON = 316,
    ATSYM = 317,
    NEW = 318,
    SPORK = 319,
    FORK = 320,
    TYPEOF = 321,
    L_HACK = 322,
    R_HACK = 323,
    AND = 324,
    EQ = 325,
    GE = 326,
    GT = 327,
    LE = 328,
    LT = 329,
    NEQ = 330,
    SHIFT_LEFT = 331,
    SHIFT_RIGHT = 332,
    S_AND = 333,
    S_OR = 334,
    S_XOR = 335,
    OR = 336,
    LTMPL = 337,
    RTMPL = 338,
    TILDA = 339,
    EXCLAMATION = 340,
    DYNOP = 341,
    PP_COMMENT = 342,
    PP_INCLUDE = 343,
    PP_DEFINE = 344,
    PP_UNDEF = 345,
    PP_IFDEF = 346,
    PP_IFNDEF = 347,
    PP_ELSE = 348,
    PP_ENDIF = 349,
    PP_NL = 350
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
#define SWITCH 278
#define CASE 279
#define ENUM 280
#define RETURN 281
#define BREAK 282
#define CONTINUE 283
#define CLASS 284
#define STATIC 285
#define GLOBAL 286
#define PRIVATE 287
#define PROTECT 288
#define EXTENDS 289
#define DOT 290
#define AST_DTOR 291
#define OPERATOR 292
#define TYPEDEF 293
#define NOELSE 294
#define UNION 295
#define CONSTT 296
#define AUTO 297
#define PASTE 298
#define ELLIPSE 299
#define BACKSLASH 300
#define BACKTICK 301
#define NUM 302
#define FLOATT 303
#define ID 304
#define STRING_LIT 305
#define CHAR_LIT 306
#define PLUS 307
#define PLUSPLUS 308
#define MINUS 309
#define MINUSMINUS 310
#define TIMES 311
#define DIVIDE 312
#define PERCENT 313
#define DOLLAR 314
#define QUESTION 315
#define COLON 316
#define ATSYM 317
#define NEW 318
#define SPORK 319
#define FORK 320
#define TYPEOF 321
#define L_HACK 322
#define R_HACK 323
#define AND 324
#define EQ 325
#define GE 326
#define GT 327
#define LE 328
#define LT 329
#define NEQ 330
#define SHIFT_LEFT 331
#define SHIFT_RIGHT 332
#define S_AND 333
#define S_OR 334
#define S_XOR 335
#define OR 336
#define LTMPL 337
#define RTMPL 338
#define TILDA 339
#define EXCLAMATION 340
#define DYNOP 341
#define PP_COMMENT 342
#define PP_INCLUDE 343
#define PP_DEFINE 344
#define PP_UNDEF 345
#define PP_IFDEF 346
#define PP_IFNDEF 347
#define PP_ELSE 348
#define PP_ENDIF 349
#define PP_NL 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "ly/gwion.y" /* yacc.c:1921  */

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
  Stmt_Fptr func_type;
  Stmt stmt;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Decl_List decl_list;
  Func_Def func_def;
  Section* section;
  ID_List id_list;
  Type_List type_list;
  Class_Body class_body;
//  ID_List class_ext;
  Class_Def class_def;
  Ast ast;

#line 276 "include/parser.h" /* yacc.c:1921  */
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
