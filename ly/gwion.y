%define api.pure full
%parse-param { Scanner* arg }
%lex-param  { void* scan }
%name-prefix "gwion_"
%{
#include <stdio.h> // strlen in paste operation
#include <string.h> // strlen in paste operation
#include <math.h>
#include "defs.h"
#include "err_msg.h"
#include "vector.h"
#include "map.h"
#include "symbol.h"
#include "absyn.h"
#include "hash.h"
#include "macro.h"
#include "scanner.h"
#include "parser.h"
#include "lexer.h"
#define YYMALLOC xmalloc
#define scan arg->scanner
#define CHECK_FLAG(a,b,c) if(GET_FLAG(b, c)) { gwion_error(a, "flag set twice");  ; } SET_FLAG(b, c);
#define CHECK_TEMPLATE(a, b, c, free_function) { if(c->tmpl) {\
        free_id_list(b);\
        free_function(c);\
        gwion_error(a, "double template decl");\
        YYERROR;\
      }\
      c->tmpl = new_tmpl_class(b, -1);\
    };
#define OP_SYM(a) insert_symbol(op2str(a))
ANN uint get_pos(const Scanner*);
ANN void gwion_error(const Scanner*, const m_str s);
m_str op2str(const Operator op);
%}

%union {
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
  ID_List class_ext;
  Class_Def class_def;
  Ast ast;
};

%token SEMICOLON CHUCK COMMA DIVIDE TIMES PERCENT L_HACK R_HACK
  LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE PLUSCHUCK MINUSCHUCK TIMESCHUCK
  DIVIDECHUCK MODULOCHUCK ATCHUCK UNCHUCK TRIG UNTRIG PERCENTPAREN SHARPPAREN
  ATSYM FUNCTION DOLLAR TILDA QUESTION COLON EXCLAMATION IF ELSE WHILE DO UNTIL
  LOOP FOR GOTO SWITCH CASE ENUM RETURN BREAK CONTINUE PLUSPLUS MINUSMINUS NEW
  SPORK CLASS STATIC GLOBAL PRIVATE PROTECT EXTENDS DOT COLONCOLON AND EQ GE GT LE LT
  MINUS PLUS NEQ SHIFT_LEFT SHIFT_RIGHT S_AND S_OR S_XOR OR AST_DTOR OPERATOR
  TYPEDEF RSL RSR RSAND RSOR RSXOR TEMPLATE
  NOELSE LTB GTB UNION ATPAREN TYPEOF CONST AUTO PASTE ELLIPSE

%token<lval> NUM
%type<ival>op shift_op post_op rel_op eq_op unary_op add_op mul_op op_op
%type<ival> atsym vec_type
%token<fval> FLOAT
%token<sval> ID STRING_LIT CHAR_LIT

  PP_COMMENT PP_INCLUDE PP_DEFINE PP_UNDEF PP_IFDEF PP_IFNDEF PP_ELSE PP_ENDIF PP_NL
%type<flag> flag func_flag type_flag opt_flag arg_type
%type<sym>id opt_id
%type<var_decl> var_decl
%type<var_decl_list> var_decl_list
%type<type_decl> type_decl type_decl2 class_ext
%type<exp> primary_exp decl_exp decl_exp2 decl_exp3 binary_exp call_paren
%type<exp> con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp unary_exp dur_exp
%type<exp> post_exp cast_exp exp
%type<array_sub> array_exp array_empty
%type<stmt> stmt loop_stmt selection_stmt jump_stmt code_stmt exp_stmt
%type<stmt> case_stmt label_stmt goto_stmt switch_stmt
%type<stmt> enum_stmt func_type stmt_type union_stmt 
%type<stmt_list> stmt_list
%type<arg_list> arg_list func_args
%type<decl_list> decl_list
%type<func_def> func_def func_def_base
%type<section> section
%type<class_def> class_def
%type<class_body> class_body class_body2
%type<id_list> id_list id_dot decl_template
%type<type_list> type_list template
%type<ast> ast

%start ast

%nonassoc NOELSE
%nonassoc ELSE
//%expect 51

%destructor { free_stmt($$); } <stmt>
%destructor { free_exp($$); } <exp>
%%

ast
  : section { arg->ast = $$ = new_ast($1, NULL);  }
  | section ast { arg->ast = $$ = new_ast($1, $2); }
  ;

section
  : stmt_list  { $$ = new_section_stmt_list($1); }
  | func_def   { $$ = new_section_func_def ($1); }
  | class_def  { $$ = new_section_class_def($1); }
  ;

class_def
  : CLASS opt_flag id_list class_ext LBRACE class_body RBRACE
      { $$ = new_class_def($2, $3, $4, $6); }
  | decl_template class_def { CHECK_TEMPLATE(arg, $1, $2, free_class_def); $$ = $2; }
  ;

class_ext : EXTENDS type_decl2 { $$ = $2; } | { $$ = NULL; };

class_body : class_body2 | { $$ = NULL; };

class_body2
  : section             { $$ = new_class_body($1, NULL); }
  | section class_body2 { $$ = new_class_body($1, $2); }
  ;

id_list: id { $$ = new_id_list($1, get_pos(arg)); } | id COMMA id_list  { $$ = prepend_id_list($1, $3, get_pos(arg)); };
id_dot:  id  { $$ = new_id_list($1, get_pos(arg)); } | id DOT id_dot     { $$ = prepend_id_list($1, $3, get_pos(arg)); };

stmt_list: stmt { $$ = new_stmt_list($1, NULL);} | stmt stmt_list { $$ = new_stmt_list($1, $2);};

func_type: type_flag type_decl2 id func_args arg_type { $$ = new_stmt_fptr($3, $2, $4, $5); $2->flag |= $1; };
stmt_type: type_flag type_decl2 id SEMICOLON { $$ = new_stmt_type($2, $3); $2->flag |= $1; };;

type_decl2
  : type_decl
  | type_decl array_empty             { $$ = add_type_decl_array($1, $2); }
  | type_decl array_exp               { $$ = add_type_decl_array($1, $2); }
  ;

arg_list
  : type_decl var_decl { $$ = new_arg_list($1, $2, NULL); }
  | type_decl var_decl COMMA arg_list { $$ = new_arg_list($1, $2, $4); }
  ;

code_stmt
  : LBRACE RBRACE { $$ = new_stmt(ae_stmt_code, get_pos(arg)); }
  | LBRACE stmt_list RBRACE { $$ = new_stmt_code($2); }
  ;



stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | label_stmt
  | goto_stmt
  | switch_stmt
  | case_stmt
  | enum_stmt
  | jump_stmt
  | func_type
  | stmt_type
  | union_stmt
;

id
  : ID { $$ = insert_symbol($1); }
  | ID PASTE id {
    char c[strlen(s_name($3)) + strlen($1)];
    sprintf(c, "%s%s", $1, s_name($3));
    $$ = insert_symbol(c);
  }
  ;

opt_id: id | { $$ = NULL; };

enum_stmt
  : ENUM opt_flag LBRACE id_list RBRACE opt_id SEMICOLON    { $$ = new_stmt_enum($4, $6);
    $$->d.stmt_enum.flag = $2; };

label_stmt: id COLON {  $$ = new_stmt_jump($1, 1, get_pos(arg)); };

goto_stmt: GOTO id SEMICOLON {  $$ = new_stmt_jump($2, 0, get_pos(arg)); };
case_stmt: CASE exp COLON { $$ = new_stmt_exp(ae_stmt_case, $2); };
switch_stmt: SWITCH exp code_stmt { $$ = new_stmt_switch($2, $3);};

loop_stmt
  : WHILE LPAREN exp RPAREN stmt
    { $$ = new_stmt_flow(ae_stmt_while, $3, $5, 0); }
  | DO stmt WHILE exp SEMICOLON
    { $$ = new_stmt_flow(ae_stmt_while, $4, $2, 1); }
  | FOR LPAREN exp_stmt exp_stmt RPAREN stmt
      { $$ = new_stmt_for($3, $4, NULL, $6); }
  | FOR LPAREN exp_stmt exp_stmt exp RPAREN stmt
      { $$ = new_stmt_for($3, $4, $5, $7); }
  | FOR LPAREN AUTO atsym id COLON binary_exp RPAREN stmt
      { $$ = new_stmt_auto($5, $7, $9); $$->d.stmt_auto.is_ptr = $4; }
  | UNTIL LPAREN exp RPAREN stmt
      { $$ = new_stmt_flow(ae_stmt_until, $3, $5, 0); }
  | DO stmt UNTIL exp SEMICOLON
      { $$ = new_stmt_flow(ae_stmt_until, $4, $2, 1); }
  | LOOP LPAREN exp RPAREN stmt
      { $$ = new_stmt_loop($3, $5); }
  ;

selection_stmt
  : IF LPAREN exp RPAREN stmt %prec NOELSE
      { $$ = new_stmt_if($3, $5); }
  | IF LPAREN exp RPAREN stmt ELSE stmt
      { $$ = new_stmt_if($3, $5); $$->d.stmt_if.else_body = $7; }
  ;

jump_stmt
  : RETURN SEMICOLON    { $$ = new_stmt(ae_stmt_return, get_pos(arg)); $$->d.stmt_exp.self = $$; }
  | RETURN exp SEMICOLON { $$ = new_stmt_exp(ae_stmt_return, $2); }
  | BREAK SEMICOLON      { $$ = new_stmt(ae_stmt_break, get_pos(arg)); }
  | CONTINUE SEMICOLON   { $$ = new_stmt(ae_stmt_continue, get_pos(arg)); }
  ;

exp_stmt
  : exp SEMICOLON { $$ = new_stmt_exp(ae_stmt_exp, $1); }
  | SEMICOLON     { $$ = new_stmt(ae_stmt_exp, get_pos(arg)); }
  ;

exp: binary_exp | binary_exp COMMA exp  { $$ = prepend_exp($1, $3); };

binary_exp: decl_exp2 | binary_exp op decl_exp2     { $$ = new_exp_binary($1, $2, $3); };

template: LTB type_list GTB { $$ = $2; } | { $$ = NULL; };

op: CHUCK { $$ = op_chuck; } | UNCHUCK { $$ = op_unchuck; } | EQ { $$ = op_eq; }
  | ATCHUCK     { $$ = op_ref; } | PLUSCHUCK   { $$ = op_radd; }
  | MINUSCHUCK  { $$ = op_rsub; } | TIMESCHUCK  { $$ = op_rmul; }
  | DIVIDECHUCK { $$ = op_rdiv; } | MODULOCHUCK { $$ = op_rmod; }
  | TRIG { $$ = op_trig; } | UNTRIG { $$ = op_untrig; }
  | RSL { $$ = op_rsl; } | RSR { $$ = op_rsr; } | RSAND { $$ = op_rsand; }
  | RSOR { $$ = op_rsor; } | RSXOR { $$ = op_rsxor; }
  ;

array_exp
  : LBRACK exp RBRACK           { $$ = new_array_sub($2); }
  | LBRACK exp RBRACK array_exp { if($2->next){ gwion_error(arg, "invalid format for array init [...][...]..."); free_exp($2); free_array_sub($4); YYERROR; } $$ = prepend_array_sub($4, $2); }
  | LBRACK exp RBRACK LBRACK RBRACK { gwion_error(arg, "partially empty array init [...][]..."); free_exp($2); YYERROR; }
  ;

array_empty
  : LBRACK RBRACK             { $$ = new_array_sub(NULL); }
  | array_empty LBRACK RBRACK { $$ = prepend_array_sub($1, NULL); }
  | array_empty array_exp     { gwion_error(arg, "partially empty array init [][...]"); free_array_sub($1); free_array_sub($2); YYERROR; }
  ;

decl_exp2: con_exp | decl_exp3;
decl_exp: type_decl var_decl_list { $$= new_exp_decl($1, $2); };

decl_exp3: decl_exp | flag decl_exp { $2->d.exp_decl.td->flag |= $1; $$ = $2; };
  ;

func_args: LPAREN arg_list { $$ = $2; } | LPAREN { $$ = NULL; };
arg_type: ELLIPSE RPAREN { $$ = ae_flag_variadic; }| RPAREN { $$ = 0; };

decl_template: TEMPLATE LTB id_list GTB { $$ = $3; };

flag: flag flag { $$ = $1 | $2; }
  | STATIC { $$ = ae_flag_static; }
  | GLOBAL { $$ = ae_flag_global; }
  | PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

func_flag: FUNCTION { $$ = 0; } | FUNCTION flag { $$ = $2; };
type_flag: TYPEDEF  { $$ = 0; } | TYPEDEF  flag { $$ = $2; };
opt_flag:  { $$ = 0; } | flag { $$ = $1; };

func_def_base
  : func_flag type_decl2 id func_args arg_type code_stmt
    { $$ = new_func_def($2, $3, $4, $6, $1 | $5); }
  | decl_template func_def_base
    {
      if($2->tmpl) {
        free_id_list($1);
        free_func_def($2);
        gwion_error(arg, "double template decl");
        YYERROR;
      }
      $2->tmpl = new_tmpl_list($1, -1);
      $$ = $2; SET_FLAG($$, template);
    };
  ;

op_op: op | shift_op | post_op | rel_op | mul_op | add_op;
func_def
  : func_def_base
  |  OPERATOR op_op type_decl2 func_args RPAREN code_stmt
    { $$ = new_func_def($3, OP_SYM($2), $4, $6, ae_flag_op); }
  |  unary_op OPERATOR type_decl2 func_args RPAREN code_stmt
    { $$ = new_func_def($3, OP_SYM($1), $4, $6, ae_flag_op | ae_flag_unary); }
  | AST_DTOR code_stmt
    { $$ = new_func_def(new_type_decl(new_id_list(insert_symbol("void"), get_pos(arg)), 0),
       insert_symbol("dtor"), NULL, $2, ae_flag_dtor); }
  ;

atsym: { $$ = 0; } | ATSYM { $$ = ae_flag_ref; };

type_decl
  : id atsym { $$ = new_type_decl(new_id_list($1, get_pos(arg)), $2); }
  | LT id_dot GT atsym { $$ = new_type_decl($2, $4); }
  | LTB type_list GTB id atsym  { $$ = new_type_decl(new_id_list($4, get_pos(arg)),
      $5); $$->types = $2; }
  | LTB type_list GTB LT id_dot GT atsym { $$ = new_type_decl($5, $7);
      $$->types = $2; }
  | TYPEOF LPAREN id_dot RPAREN atsym { $$ = new_type_decl2($3, $5); }
  | CONST type_decl { CHECK_FLAG(arg, $2, const); $$ = $2; }
  ;

decl_list
  : decl_exp SEMICOLON { $$ = new_decl_list($1, NULL); }
  | decl_exp SEMICOLON decl_list { $$ = new_decl_list($1, $3); }
  ;

union_stmt
  : UNION opt_flag opt_id LBRACE decl_list RBRACE opt_id SEMICOLON {
      $$ = new_stmt_union($5, get_pos(arg));
      $$->d.stmt_union.type_xid = $3;
      $$->d.stmt_union.xid = $7;
      $$->d.stmt_union.flag = $2;
    }
  | UNION opt_flag opt_id LBRACE error RBRACE opt_id SEMICOLON {
    err_msg(get_pos(arg), "Unions should only contain declarations.");
    YYERROR;
    }
  ;

var_decl_list
  : var_decl { $$ = new_var_decl_list($1, NULL); }
  | var_decl COMMA var_decl_list { $$ = new_var_decl_list($1, $3); }
  ;

var_decl
  : id              { $$ = new_var_decl($1, NULL, get_pos(arg)); }
  | id array_exp    { $$ = new_var_decl($1,   $2, get_pos(arg)); }
  | id array_empty  { $$ = new_var_decl($1,   $2, get_pos(arg)); }
  ;

eq_op : EQ { $$ = op_eq; } | NEQ { $$ = op_ne; };
rel_op: LT { $$ = op_lt; } | GT { $$ = op_gt; } | LE { $$ = op_le; } | GE { $$ = op_ge; };
shift_op: SHIFT_LEFT  { $$ = op_shl; } | SHIFT_RIGHT { $$ = op_shr; };
add_op: PLUS { $$ = op_add; } | MINUS { $$ = op_sub; };
mul_op: TIMES { $$ = op_mul; } | DIVIDE { $$ = op_div; } | PERCENT { $$ = op_mod; };
con_exp: log_or_exp | log_or_exp QUESTION exp COLON con_exp
      { $$ = new_exp_if($1, $3, $5); };

log_or_exp: log_and_exp | log_or_exp OR log_and_exp  { $$ = new_exp_binary($1, op_or, $3); };
log_and_exp: inc_or_exp | log_and_exp AND inc_or_exp { $$ = new_exp_binary($1, op_and, $3); };
inc_or_exp: exc_or_exp | inc_or_exp S_OR exc_or_exp  { $$ = new_exp_binary($1, op_sor, $3); };
exc_or_exp: and_exp | exc_or_exp S_XOR and_exp       { $$ = new_exp_binary($1, op_sxor, $3); };
and_exp: eq_exp | and_exp S_AND eq_exp               { $$ = new_exp_binary($1, op_sand, $3); };
eq_exp: rel_exp | eq_exp eq_op rel_exp               { $$ = new_exp_binary($1, $2, $3); };
rel_exp: shift_exp | rel_exp rel_op shift_exp        { $$ = new_exp_binary($1, $2, $3); };
shift_exp: add_exp | shift_exp shift_op add_exp      { $$ = new_exp_binary($1, $2, $3); };
add_exp: mul_exp | add_exp add_op mul_exp            { $$ = new_exp_binary($1, $2, $3); };
mul_exp: cast_exp | mul_exp mul_op cast_exp          { $$ = new_exp_binary($1, $2, $3); };

cast_exp: unary_exp | cast_exp DOLLAR type_decl2
    { $$ = new_exp_cast($3, $1); };

unary_op : MINUS { $$ = op_sub; } | TIMES { $$ = op_mul; }
  | post_op
  | EXCLAMATION { $$ = op_not; } | SPORK { $$ = op_spork; } | TILDA { $$ = op_cmp; }
  ;

unary_exp : dur_exp | unary_op unary_exp { $$ = new_exp_unary($1, $2); }
  | NEW type_decl2
    {
      if($2->array && !$2->array->exp) {
        free_type_decl($2);
        gwion_error(arg, "can't use empty '[]' in 'new' expression");
        YYERROR;
      }
      $$ = new_exp_unary2(op_new, $2);
    }
  | SPORK code_stmt
        { $$ = new_exp_unary3(op_spork, $2); };
  ;

dur_exp: post_exp | dur_exp COLONCOLON post_exp
    { $$ = new_exp_dur($1, $3); };

type_list
  : type_decl2 { $$ = new_type_list($1, NULL); }
  | type_decl2 COMMA type_list { $$ = new_type_list($1, $3); }
  ;

call_paren : LPAREN exp RPAREN { $$ = $2; } | LPAREN RPAREN { $$ = NULL; };

post_op : PLUSPLUS { $$ = op_inc; } | MINUSMINUS { $$ = op_dec; };

post_exp: primary_exp | post_exp array_exp
    { $$ = new_exp_array($1, $2); }
  | post_exp template call_paren
    { $$ = new_exp_call($1, $3);
      if($2)$$->d.exp_call.tmpl = new_tmpl_call($2); }
  | post_exp DOT id
    { $$ = new_exp_dot($1, $3); }
  | post_exp post_op
    { $$ = new_exp_post($1, $2); }
  ;

vec_type: SHARPPAREN   { $$ = ae_primary_complex; }
        | PERCENTPAREN { $$ = ae_primary_polar;   }
        | ATPAREN      { $$ = ae_primary_vec;     };

primary_exp
  : id                  { $$ = new_exp_prim_id(     $1, get_pos(arg)); }
  | NUM                 { $$ = new_exp_prim_int(    $1, get_pos(arg)); }
  | FLOAT               { $$ = new_exp_prim_float(  $1, get_pos(arg)); }
  | STRING_LIT          { $$ = new_exp_prim_string( $1, get_pos(arg)); }
  | CHAR_LIT            { $$ = new_exp_prim_char(   $1, get_pos(arg)); }
  | array_exp           { $$ = new_exp_prim_array(  $1, get_pos(arg)); }
  | array_empty         { $$ = new_exp_prim_array(  $1, get_pos(arg)); }
  | vec_type exp RPAREN { $$ = new_exp_prim_vec($1, $2); }
  | L_HACK exp R_HACK   { $$ = new_exp_prim_hack(   $2); }
  | LPAREN exp RPAREN   { $$ =                      $2;                }
  | LPAREN RPAREN       { $$ = new_exp_prim_nil(        get_pos(arg)); }
  ;
%%
