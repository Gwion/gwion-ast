%define api.pure full
%parse-param { Scanner* arg }
%lex-param  { void* scan }
%name-prefix "gwion_"
%locations

%{
#include <math.h>
#include "gwion_util.h"
#include "gwion_ast.h"
#include "bison_compat.h"
#include "parser.h"
#include "lexer.h"

#define YYERROR_VERBOSE
#define YYMALLOC xmalloc
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))
#define GET_LOC(a) loc_cpy(mpool(arg), a)
ANN void gwion_error(loc_t, const Scanner*, const char *);
ANN Symbol lambda_name(const Scanner*);
%}

%union {
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
};


%token SEMICOLON ";" COMMA ","
  LPAREN "(" RPAREN ")" LBRACK "[" RBRACK "]" LBRACE "{" RBRACE "}"
  FUNCTION "fun"
  IF "if" ELSE "else" WHILE "while" DO "do" UNTIL "until"
  LOOP "repeat" FOR "for" GOTO "goto" MATCH "match" CASE "case" WHEN "when" WHERE "where" ENUM "enum"
  TRETURN "return" BREAK "break" CONTINUE "continue"
  CLASS "class" STRUCT "struct"
  STATIC "static" GLOBAL "global" PRIVATE "private" PROTECT "protect"
  EXTENDS "extends" DOT "."
  OPERATOR "operator"
  TYPEDEF "typedef"
  NOELSE UNION "union" CONSTT "const" AUTO "auto" PASTE "##" ELLIPSE "..." VARLOOP "varloop"
  RARROW "->" BACKSLASH "\\" BACKTICK "`" OPID
  REF "ref" NONNULL "nonnull"

%token<lval> NUM "<integer>"
%type<ival> ref decl_flag flow breaks
%token<fval> FLOATT
%token<sval> ID "<identifier>" STRING_LIT "<litteral string>" CHAR_LIT "<litteral char>" INTERP_LIT "<interp string>" INTERP_EXP
  PP_COMMENT "<comment>" PP_INCLUDE "#include" PP_DEFINE "#define" PP_PRAGMA "#pragma"
  PP_UNDEF "#undef" PP_IFDEF "#ifdef" PP_IFNDEF "#ifndef" PP_ELSE "#else" PP_ENDIF "#if" PP_NL "\n"
%type<sym>op shift_op post_op rel_op eq_op unary_op add_op mul_op op_op OPID "@<operator id>"
%token <sym>  PLUS "+" PLUSPLUS "++" MINUS "-" MINUSMINUS "--" TIMES "*" DIVIDE "/" PERCENT "%"
  DOLLAR "$" QUESTION "?" COLON ":" COLONCOLON "::" QUESTIONCOLON "?:"
  NEW "new" SPORK "spork" FORK "fork" TYPEOF "typeof"
  L_HACK "<<<" R_HACK ">>>"
  AND "&&" EQ "==" GE ">=" GT ">" LE "<=" LT "<"
  NEQ "!=" SHIFT_LEFT "<<" SHIFT_RIGHT ">>" S_AND "&" S_OR "|" S_XOR "^" OR "||"
  LTMPL "<~" RTMPL "~>"
  TILDA "~" EXCLAMATION "!" DYNOP "<dynamic_operator>"
%type<flag> flag opt_flag class_type
  storage_flag access_flag arg_type
%type<sym>id opt_id
%type<var_decl> var_decl arg_decl fptr_arg_decl
%type<var_decl_list> var_decl_list
%type<type_decl> type_decl_tmpl type_decl_noflag type_decl0 type_decl_next type_decl type_decl_array type_decl_empty type_decl_exp class_ext
%type<exp> prim_exp decl_exp union_exp decl_exp2 decl_exp3 binary_exp call_paren interp interp_exp
%type<exp> opt_exp con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp dur_exp unary_exp typeof_exp
%type<exp> post_exp dot_exp cast_exp exp when_exp
%type<array_sub> array_exp array_empty array
%type<range> range
%type<stmt> stmt loop_stmt selection_stmt jump_stmt code_stmt exp_stmt where_stmt varloop_stmt
%type<stmt> match_case_stmt label_stmt goto_stmt match_stmt stmt_pp
%type<stmt_list> stmt_list match_list
%type<arg_list> arg arg_list func_args lambda_arg lambda_list fptr_list fptr_arg fptr_args
%type<decl_list> decl_list
%type<func_def> func_def func_def_base
%type<func_base> fdef_base fptr_base
%type<enum_def> enum_def
%type<union_def> union_def
%type<fptr_def> fptr_def
%type<type_def> type_def
%type<section> section
%type<class_def> class_def
%type<ast> class_body
%type<id_list> id_list decl_template
%type<type_list> type_list call_template
%type<ast> ast prg

%start prg

%left "."
%right "!" "~"
%left "*" "/" "%"
%left "+" "-"
%right UMINUS UTIMES
%left "<<" ">>"
%left "&"
%left "^"
%left "|"
%left "<" "<=" ">" ">="
%left "=="  "!="
%left "&&"
%left "||"
%right "?:" "::"
%right "="

%nonassoc NOELSE
%nonassoc ELSE

%destructor  { free_ast(mpool(arg), $$); } ast
%%

prg: ast { arg->ast = $$ = $1; }
  | /* empty */ { gwion_error(&@$, arg, "file is empty.\n"); YYERROR; }

ast
  : section { $$ = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), $1, NULL) : new_ast(mpool(arg), $1, NULL); }
  | section ast { $$ = !((Scanner*)arg)->ppa->lint ? new_ast_expand(mpool(arg), $1, $2) : new_ast(mpool(arg), $1, $2); }
  ;

section
  : stmt_list { $$ = new_section_stmt_list(mpool(arg), $1); }
  | func_def  { $$ = new_section_func_def (mpool(arg), $1); }
  | class_def { $$ = new_section_class_def(mpool(arg), $1); }
  | enum_def  { $$ = new_section_enum_def(mpool(arg), $1); }
  | union_def { $$ = new_section_union_def(mpool(arg), $1); }
  | fptr_def  { $$ = new_section_fptr_def(mpool(arg), $1); }
  | type_def  { $$ = new_section_type_def(mpool(arg), $1); }
  ;

class_type: CLASS { $$ = ae_flag_none; } | STRUCT { $$ = ae_flag_struct; }
class_def
  : class_type opt_flag decl_template id class_ext LBRACE class_body RBRACE
    {
      if($1 == ae_flag_struct && $5)
        { gwion_error(&@$, arg, "'struct' inherit other types"); YYERROR; }
      $$ =new_class_def(mpool(arg), $1 | $2, $4, $5, $7, GET_LOC(&@$));
      if($3)
        $$->base.tmpl = new_tmpl_base(mpool(arg), $3);
  };

class_ext : EXTENDS type_decl_exp { $$ = $2; } | { $$ = NULL; };

class_body : ast | { $$ = NULL; };

id_list: id { $$ = new_id_list(mpool(arg), $1, GET_LOC(&@$)); } | id COMMA id_list  { $$ = prepend_id_list(mpool(arg), $1, $3, loc_cpy(mpool(arg), &@1)); };

stmt_list: stmt { $$ = new_stmt_list(mpool(arg), $1, NULL);} | stmt stmt_list { $$ = new_stmt_list(mpool(arg), $1, $2); } ;

fptr_base: type_decl_array id decl_template fptr_args { $$ = new_func_base(mpool(arg), $1, $2, $4);
  if($3) $$->tmpl = new_tmpl_base(mpool(arg), $3); }
fdef_base: type_decl_empty id decl_template func_args { $$ = new_func_base(mpool(arg), $1, $2, $4);
  if($3) $$->tmpl = new_tmpl_base(mpool(arg), $3); }

fptr_def: TYPEDEF opt_flag fptr_base arg_type SEMICOLON {
  if($3->td->array && $3->td->array->exp) {
    gwion_error(&@$, arg, "type must be defined with empty []'s");
    YYERROR;
  }
  $$ = new_fptr_def(mpool(arg), $3, $2 | $4);
};
type_def: TYPEDEF opt_flag type_decl_array id decl_template SEMICOLON {
  $$ = new_type_def(mpool(arg), $3, $4);
  $3->flag |= $2;
  if($5)
    $$->tmpl = new_tmpl_base(mpool(arg), $5);
};

type_decl_array: type_decl | type_decl array { $1->array = $2; };

type_decl_exp: type_decl_array { if($1->array && !$1->array->exp)
    { gwion_error(&@$, arg, "can't instantiate with empty '[]'"); YYERROR;}
  $$ = $1; }

type_decl_empty: type_decl_array { if($1->array && $1->array->exp)
    { gwion_error(&@$, arg, "type must be defined with empty []'s"); YYERROR;}
  $$ = $1; }

arg
  : type_decl arg_decl ":" binary_exp { $$ = new_arg_list(mpool(arg), $1, $2, NULL); $$->exp = $4; }
  | type_decl arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); };
arg_list:
     arg { $$ = $1; }
  |  arg_list COMMA arg {
     Arg_List last = $1;
     while(last->next)
       last = last->next;
     if(last->exp && !$3->exp)
        { gwion_error(&@3, arg, "missing default argument"); YYERROR;}
     last->next = $3; $$ = $1;
   };

fptr_arg: type_decl fptr_arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); }
fptr_list: fptr_arg { $$ = $1; } | fptr_arg COMMA fptr_list {
  if(!$1)
    { gwion_error(&@$, arg, "invalid function pointer argument"); YYERROR;}
    $1->next = $3; $$ = $1;
};

code_stmt
  : LBRACE RBRACE { $$ = new_stmt(mpool(arg), ae_stmt_code, GET_LOC(&@$)); }
  | LBRACE stmt_list RBRACE { $$ = new_stmt_code(mpool(arg), $2); }
  ;

stmt_pp
  : PP_COMMENT { $$ = new_stmt_pp(mpool(arg), ae_pp_comment, $1, GET_LOC(&@$)); }
  | PP_INCLUDE { $$ = new_stmt_pp(mpool(arg), ae_pp_include, $1, GET_LOC(&@$)); }
  | PP_DEFINE  { $$ = new_stmt_pp(mpool(arg), ae_pp_define,  $1, GET_LOC(&@$)); }
  | PP_PRAGMA  { $$ = new_stmt_pp(mpool(arg), ae_pp_pragma,  $1, GET_LOC(&@$)); }
  | PP_UNDEF   { $$ = new_stmt_pp(mpool(arg), ae_pp_undef,   $1, GET_LOC(&@$)); }
  | PP_IFDEF   { $$ = new_stmt_pp(mpool(arg), ae_pp_ifdef,   $1, GET_LOC(&@$)); }
  | PP_IFNDEF  { $$ = new_stmt_pp(mpool(arg), ae_pp_ifndef,  $1, GET_LOC(&@$)); }
  | PP_ELSE    { $$ = new_stmt_pp(mpool(arg), ae_pp_else,    $1, GET_LOC(&@$)); }
  | PP_ENDIF   { $$ = new_stmt_pp(mpool(arg), ae_pp_endif,   $1, GET_LOC(&@$)); }
  | PP_NL      { $$ = new_stmt_pp(mpool(arg), ae_pp_nl,      $1, GET_LOC(&@$)); }
  ;

stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | label_stmt
  | goto_stmt
  | match_stmt
  | jump_stmt
  | stmt_pp
  | varloop_stmt
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

enum_def
  : ENUM opt_flag opt_id LBRACE id_list RBRACE    { $$ = new_enum_def(mpool(arg), $5, $3, GET_LOC(&@$));
    $$->flag = $2; };

label_stmt: id COLON {  $$ = new_stmt_jump(mpool(arg), $1, 1, GET_LOC(&@$)); };

goto_stmt: GOTO id SEMICOLON {  $$ = new_stmt_jump(mpool(arg), $2, 0, GET_LOC(&@$)); };

when_exp: WHEN exp { $$ = $2; } | { $$ = NULL; }

match_case_stmt
  : CASE exp when_exp COLON stmt_list {
    $$ = new_stmt(mpool(arg), 0, GET_LOC(&@$));
    $$->d.stmt_match.cond = $2;
    $$->d.stmt_match.list = $5;
    $$->d.stmt_match.when = $3;
};

match_list
  : match_case_stmt { $$ = new_stmt_list(mpool(arg), $1, NULL); }
  | match_case_stmt match_list { $$ = new_stmt_list(mpool(arg), $1, $2); }

where_stmt: WHERE stmt { $$ = $2; } | { $$ = NULL; }

match_stmt: MATCH exp LBRACE match_list RBRACE where_stmt {
  $$ = new_stmt(mpool(arg), ae_stmt_match, GET_LOC(&@$));
  $$->d.stmt_match.cond  = $2;
  $$->d.stmt_match.list  = $4;
  $$->d.stmt_match.where = $6;
};

flow
  : WHILE { $$ = ae_stmt_while; }
  | UNTIL { $$ = ae_stmt_until; }

loop_stmt
  : flow LPAREN exp RPAREN stmt
    { $$ = new_stmt_flow(mpool(arg), $1, $3, $5, 0); }
  | DO stmt flow exp SEMICOLON
    { $$ = new_stmt_flow(mpool(arg), $3, $4, $2, 1); }
  | FOR LPAREN exp_stmt exp_stmt RPAREN stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, NULL, $6); }
  | FOR LPAREN exp_stmt exp_stmt exp RPAREN stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, $5, $7); }
  | FOR LPAREN AUTO ref id COLON binary_exp RPAREN stmt
      { $$ = new_stmt_auto(mpool(arg), $5, $7, $9); $$->d.stmt_auto.is_ptr = $4; }
  | LOOP LPAREN exp RPAREN stmt
      { $$ = new_stmt_loop(mpool(arg), $3, $5); }
  ;

varloop_stmt: VARLOOP binary_exp code_stmt { $$ = new_stmt_varloop(mpool(arg), $2, $3); }

selection_stmt
  : IF LPAREN exp RPAREN stmt %prec NOELSE
      { $$ = new_stmt_if(mpool(arg), $3, $5); }
  | IF LPAREN exp RPAREN stmt ELSE stmt
      { $$ = new_stmt_if(mpool(arg), $3, $5); $$->d.stmt_if.else_body = $7; }
  ;

breaks
  : TRETURN   { $$ = ae_stmt_return; }
  | BREAK     { $$ = ae_stmt_break; }
  | CONTINUE  { $$ = ae_stmt_continue; }
  ;
jump_stmt
  : TRETURN exp SEMICOLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_return, $2); }
  | breaks SEMICOLON    { $$ = new_stmt(mpool(arg), $1, GET_LOC(&@$)); }
  ;

exp_stmt
  : exp SEMICOLON { $$ = new_stmt_exp(mpool(arg), ae_stmt_exp, $1); }
  | SEMICOLON     { $$ = new_stmt(mpool(arg), ae_stmt_exp, GET_LOC(&@$)); }
  ;

exp: binary_exp | binary_exp COMMA exp  { $$ = prepend_exp($1, $3); };

binary_exp: decl_exp2 | binary_exp op decl_exp2     { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };

call_template: LTMPL type_list RTMPL { $$ = $2; } | { $$ = NULL; };

op: EQ | NEQ | DYNOP;

array_exp
  : LBRACK exp RBRACK           { $$ = new_array_sub(mpool(arg), $2); }
  | LBRACK exp RBRACK array_exp { if($2->next){ gwion_error(&@$, arg, "invalid format for array init [...][...]..."); YYERROR; } $$ = prepend_array_sub($4, $2); }
  | LBRACK exp RBRACK array_empty { gwion_error(&@$, arg, "partially empty array init [...][]..."); YYERROR; }
  ;

array_empty
  : LBRACK RBRACK             { $$ = new_array_sub(mpool(arg), NULL); }
  | array_empty LBRACK RBRACK { $$ = prepend_array_sub($1, NULL); }
  | array_empty array_exp     { gwion_error(&@$, arg, "partially empty array init [][...]"); YYERROR; }
  ;

range
  : LBRACK exp COLON exp RBRACK { $$ = new_range(mpool(arg), $2, $4); }
  | LBRACK exp COLON RBRACK     { $$ = new_range(mpool(arg), $2, NULL); }
  | LBRACK COLON exp RBRACK     { $$ = new_range(mpool(arg), NULL, $3); }
  ;

array: array_exp | array_empty;
decl_exp2: con_exp | decl_exp3
  | AUTO decl_flag var_decl_list { $$= new_exp_decl(mpool(arg), new_type_decl(mpool(arg),
     insert_symbol("auto"), GET_LOC(&@$)), $3); }
decl_exp: type_decl var_decl_list { $$= new_exp_decl(mpool(arg), $1, $2); };
union_exp: type_decl_noflag arg_decl { $1->flag |= ae_flag_ref; $$= new_exp_decl(mpool(arg), $1, new_var_decl_list(mpool(arg), $2, NULL)); };
decl_exp3: decl_exp | flag decl_exp { $2->d.exp_decl.td->flag |= $1; $$ = $2; };

func_args: LPAREN arg_list { $$ = $2; } | LPAREN { $$ = NULL; };
fptr_args: LPAREN fptr_list { $$ = $2; } | LPAREN { $$ = NULL; };
arg_type: ELLIPSE RPAREN { $$ = ae_flag_variadic; }| RPAREN { $$ = 0; };

decl_template: LTMPL id_list RTMPL { $$ = $2; } | { $$ = NULL; };

storage_flag: STATIC { $$ = ae_flag_static; }
  | GLOBAL { $$ = ae_flag_global; }
  ;

access_flag: PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

flag: access_flag { $$ = $1; }
  | storage_flag { $$ = $1; }
  | storage_flag access_flag { $$ = $1 | $2; }
  ;

opt_flag:  { $$ = 0; } | flag { $$ = $1; };

func_def_base
  : FUNCTION opt_flag fdef_base arg_type code_stmt
    { $$ = new_func_def(mpool(arg), $3, $5, $2 | $4, GET_LOC(&@$)); };

op_op: op | shift_op | rel_op | mul_op | add_op;

func_def
  : func_def_base
  |  OPERATOR op_op type_decl_empty LPAREN arg COMMA arg RPAREN code_stmt
    { $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, $2, $5), $9, ae_flag_op, GET_LOC(&@$)); $5->next = $7;}
  |  OPERATOR post_op type_decl_empty LPAREN arg RPAREN code_stmt
    { $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, $2, $5), $7, ae_flag_op, GET_LOC(&@$)); }
  |  unary_op OPERATOR type_decl_empty LPAREN arg RPAREN code_stmt
    { $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, $1, $5), $7, ae_flag_op | ae_flag_unary, GET_LOC(&@$)); }
  | OPERATOR OPID type_decl_empty func_args RPAREN code_stmt
    {
 $$ = new_func_def(mpool(arg), new_func_base(mpool(arg), $3, $2, $4), $6, ae_flag_op | ae_flag_typedef, GET_LOC(&@$));
    };

ref: { $$ = 0; } | REF { $$ = ae_flag_ref; };
decl_flag: NONNULL { $$ = ae_flag_nonnull; } | ref;

type_decl_tmpl
  : id { $$ = new_type_decl(mpool(arg), $1, GET_LOC(&@$)); }
  | LTMPL type_list RTMPL id { $$ = new_type_decl(mpool(arg), $4, GET_LOC(&@$)); $$->types = $2; }
  ;

type_decl_next
  : type_decl_tmpl
  | type_decl_tmpl "->" type_decl_tmpl { $1->next = $3; }
  ;

type_decl_noflag
  : type_decl_next { $$ = $1; }
  | typeof_exp { $$ = new_type_decl2(mpool(arg), $1, GET_LOC(&@$)); }
  ;

type_decl0
  : type_decl_noflag decl_flag { $1->flag |= $2; $$ = $1; }
  ;

type_decl: type_decl0 { $$ = $1; }
  | CONSTT type_decl0 { $$ = $2; SET_FLAG($$, const); };
  | NONNULL type_decl0 { $$ = $2; SET_FLAG($$, nonnull); };

decl_list: union_exp SEMICOLON { $$ = new_decl_list(mpool(arg), $1, NULL); }
  | union_exp SEMICOLON decl_list { $$ = new_decl_list(mpool(arg), $1, $3); } ;

union_def
  : UNION opt_flag decl_template opt_id LBRACE decl_list RBRACE opt_id SEMICOLON {
      $$ = new_union_def(mpool(arg), $6, GET_LOC(&@$));
      $$->type_xid = $4;
      $$->xid = $8;
      $$->flag = $2;
      if($3) {
        if(!$4) {
          gwion_error(&@$, arg, _("Template unions requires type name\n"));
          YYERROR;
        }
        if($8) {
          gwion_error(&@$, arg, _("Can't instantiate template union types at declaration site.\n"));
          YYERROR;
        }
        $$->tmpl = new_tmpl_base(mpool(arg), $3);
      }
    }
  ;

var_decl_list
  : var_decl { $$ = new_var_decl_list(mpool(arg), $1, NULL); }
  | var_decl COMMA var_decl_list { $$ = new_var_decl_list(mpool(arg), $1, $3); }
  ;

var_decl: id { $$ = new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)); }
  | id array    { $$ = new_var_decl(mpool(arg), $1,   $2, GET_LOC(&@$)); };

arg_decl: id { $$ = new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)); }
  | id array_empty { $$ = new_var_decl(mpool(arg), $1,   $2, GET_LOC(&@$)); }
  | id array_exp { gwion_error(&@$, arg, "argument/union must be defined with empty []'s"); YYERROR; };
fptr_arg_decl: opt_id { $$ = new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)); }
  | opt_id array_empty { $$ = new_var_decl(mpool(arg), $1,   $2, GET_LOC(&@$)); }
  | opt_id array_exp { gwion_error(&@$, arg, "argument/union must be defined with empty []'s"); YYERROR; };

eq_op : EQ | NEQ;
rel_op: LT | GT | LE | GE;
shift_op: SHIFT_LEFT | SHIFT_RIGHT;
add_op: PLUS | MINUS;
mul_op: TIMES | DIVIDE | PERCENT;

opt_exp: exp | { $$ = NULL; }
con_exp: log_or_exp
  | log_or_exp QUESTION opt_exp COLON con_exp
      { $$ = new_exp_if(mpool(arg), $1, $3, $5); };
  | log_or_exp QUESTIONCOLON con_exp
      { $$ = new_exp_if(mpool(arg), $1, NULL, $3); };

log_or_exp: log_and_exp | log_or_exp OR log_and_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
log_and_exp: inc_or_exp | log_and_exp AND inc_or_exp { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
inc_or_exp: exc_or_exp | inc_or_exp S_OR exc_or_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
exc_or_exp: and_exp | exc_or_exp S_XOR and_exp       { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
and_exp: eq_exp | and_exp S_AND eq_exp               { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
eq_exp: rel_exp | eq_exp eq_op rel_exp               { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
rel_exp: shift_exp | rel_exp rel_op shift_exp        { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
shift_exp: add_exp | shift_exp shift_op add_exp      { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
add_exp: mul_exp | add_exp add_op mul_exp            { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
mul_exp: dur_exp | mul_exp mul_op dur_exp            { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };
dur_exp: cast_exp | dur_exp "::" cast_exp         { $$ = new_exp_binary(mpool(arg), $1, $2, $3); };

cast_exp: unary_exp | cast_exp DOLLAR type_decl_empty
    { $$ = new_exp_cast(mpool(arg), $3, $1); };

unary_op : MINUS %prec UMINUS | TIMES %prec UTIMES | post_op
  | EXCLAMATION | SPORK | FORK | TILDA
  ;

unary_exp : post_exp | unary_op unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2); }
  | NEW type_decl_exp {$$ = new_exp_unary2(mpool(arg), $1, $2); }
  | SPORK code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, $2); };
  | FORK code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, $2); };

lambda_list:
 id { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)), NULL); }
|    id lambda_list { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, GET_LOC(&@$)), $2); }
lambda_arg: BACKSLASH lambda_list { $$ = $2; } | BACKSLASH { $$ = NULL; }

type_list
  : type_decl_empty { $$ = new_type_list(mpool(arg), $1, NULL); }
  | type_decl_empty COMMA type_list { $$ = new_type_list(mpool(arg), $1, $3); }
  ;

call_paren : LPAREN exp RPAREN { $$ = $2; } | LPAREN RPAREN { $$ = NULL; };

post_op : PLUSPLUS | MINUSMINUS;

dot_exp: post_exp DOT id { $$ = new_exp_dot(mpool(arg), $1, $3); };
post_exp: prim_exp
  | post_exp array_exp
    { $$ = new_exp_array(mpool(arg), $1, $2); }
  | post_exp range
    { $$ = new_exp_slice(mpool(arg), $1, $2); }
  | post_exp call_template call_paren
    { $$ = new_exp_call(mpool(arg), $1, $3);
      if($2)$$->d.exp_call.tmpl = new_tmpl_call(mpool(arg), $2); }
  | post_exp post_op
    { $$ = new_exp_post(mpool(arg), $1, $2); } | dot_exp { $$ = $1; }
  ;

interp_exp: INTERP_LIT { $$ = new_prim_string(mpool(arg), $1, GET_LOC(&@$)); }
      | exp INTERP_EXP { $$ = $1; }

interp: interp interp_exp
{
  Exp next = $1;
  while(next->next) {
    if(!next->next)
      break;
  next = next->next; }
  next->next = $2; $$ = $1;
}
    | interp_exp { $$ = $1; }

typeof_exp: TYPEOF LPAREN exp RPAREN { $$ = new_prim_typeof(mpool(arg), $3); };

prim_exp
  : id                  { $$ = new_prim_id(     mpool(arg), $1, GET_LOC(&@$)); }
  | NUM                 { $$ = new_prim_int(    mpool(arg), $1, GET_LOC(&@$)); }
  | FLOATT              { $$ = new_prim_float(  mpool(arg), $1, GET_LOC(&@$)); }
  | STRING_LIT          { $$ = new_prim_string( mpool(arg), $1, GET_LOC(&@$)); }
  | CHAR_LIT            { $$ = new_prim_char(   mpool(arg), $1, GET_LOC(&@$)); }
  | array               { $$ = new_prim_array(  mpool(arg), $1, GET_LOC(&@$)); }
  | range               { $$ = new_prim_range(  mpool(arg), $1, GET_LOC(&@$)); }
  | L_HACK exp R_HACK   { $$ = new_prim_hack(   mpool(arg), $2); }
  | LPAREN exp RPAREN   { $$ = $2;                }
  | lambda_arg code_stmt { $$ = new_exp_lambda(     mpool(arg), lambda_name(arg), $1, $2); };
  | LPAREN RPAREN       { $$ = new_prim_nil(    mpool(arg),     GET_LOC(&@$)); }
  | BACKTICK interp       { $$ = new_prim_interp(mpool(arg),     $2); }
  | typeof_exp { $$ = $1; }
  ;
%%
