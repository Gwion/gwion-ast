%define api.pure full
%define parse.error detailed
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
#define gwion_error(a,b,c) parser_error(a,b,c, 0200)
#define scan arg->scanner
#define mpool(arg) arg->st->p
#define insert_symbol(a) insert_symbol(arg->st, (a))

#define LIST_FIRST(a)  map_set(&arg->map, (m_uint)a, (m_uint)a);

#define LIST_NEXT(a, b, t, c)                      \
  a = b;                                           \
  const t next = c;                                \
  const t list = (t)map_get(&arg->map, (m_uint)a); \
  list->next = next;                               \
  map_set(&arg->map, (m_uint) a, (m_uint)next);    \

#define LIST_REM(a) map_remove(&arg->map, (m_uint)a);

ANN static int parser_error(loc_t*, Scanner*const, const char *, const uint);
ANN Symbol lambda_name(const Scanner*);
ANN Symbol sig_name(const Scanner*, const pos_t);
%}

%union {
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
  Var_Decl var_decl;
  Var_Decl_List var_decl_list;
  Type_Decl* type_decl;
  Exp   exp;
  struct Func_Base_ *func_base;
  Stmt stmt;
  Handler_List handler_list;
  Stmt_List stmt_list;
  Arg_List arg_list;
  Func_Def func_def;
  Enum_Def enum_def;
  Union_Def union_def;
  Fptr_Def fptr_def;
  Type_Def type_def;
  Section* section;
  ID_List id_list;
  Specialized_List specialized_list;
  Type_List type_list;
  Union_List union_list;
  Extend_Def extend_def;
  Class_Def class_def;
  Trait_Def trait_def;
  Ast ast;
};


%token SEMICOLON ";" COMMA ","
  LPAREN "(" RPAREN ")" LBRACK "[" RBRACK "]" LBRACE "{" RBRACE "}"
  FUNCTION "fun" VAR "var"
  IF "if" ELSE "else" WHILE "while" DO "do" UNTIL "until"
  LOOP "repeat" FOR "for" FOREACH "foreach" MATCH "match" CASE "case" WHEN "when" WHERE "where" ENUM "enum"
  TRETURN "return" BREAK "break" CONTINUE "continue" TRY "try" PERFORM "perform" HANDLET "handle" RETRY "retry"
  CLASS "class" STRUCT "struct" TRAIT "trait"
  STATIC "static" GLOBAL "global" PRIVATE "private" PROTECT "protect" ABSTRACT "abstract" FINAL "final"
  EXTENDS "extends" DOT "."
  OPERATOR "operator"
  TYPEDEF "typedef" DISTINCT "distinct" FUNPTR "funptr"
  NOELSE UNION "union" CONSTT "const" ELLIPSE "..." VARLOOP "varloop" DEFER "defer"
  BACKSLASH "\\" OPID_A OPID_E
  LATE "late"

%token<lval> NUM "<integer>"
%type<stmt_t> flow breaks
%type<yybool> type_def_type
%token<fval> FLOATT "<float>"
%token<sval> STRING_LIT "<litteral string>" CHAR_LIT "<litteral char>" INTERP_START "`" INTERP_EXP
  PP_COMMENT "<comment>" PP_INCLUDE "#include" PP_DEFINE "#define" PP_PRAGMA "#pragma"
  PP_UNDEF "#undef" PP_IFDEF "#ifdef" PP_IFNDEF "#ifndef" PP_ELSE "#else" PP_ENDIF "#if" PP_NL "\n" PP_IMPORT "import"
%token<string> INTERP_LIT "<interp string lit>" INTERP_END "<interp string end>" 
%type<sym>op shift_op post_op rel_op eq_op unary_op add_op mul_op op_op OPID_A "@<operator id>" OPID_E "&<operator id>"
%token <sym> ID "<identifier>" PLUS "+" PLUSPLUS "++" MINUS "-" MINUSMINUS "--" TIMES "*" DIVIDE "/" PERCENT "%"
  DOLLAR "$" QUESTION "?" OPTIONS COLON ":" COLONCOLON "::" QUESTIONCOLON "?:"
  NEW "new" SPORK "spork" FORK "fork"
  L_HACK "<<<" R_HACK ">>>"
  AND "&&" EQ "==" GE ">=" GT ">" LE "<=" LT "<"
  NEQ "!=" SHIFT_LEFT "<<" SHIFT_RIGHT ">>" S_AND "&" S_OR "|" S_XOR "^" OR "||"
  TMPL ":["
  TILDA "~" EXCLAMATION "!" AROBASE "@" DYNOP "<dynamic_operator>"
%type<uval> option
%type<flag> flag final modifier operator class_flag
  global storage_flag access_flag type_decl_flag type_decl_flag2
%type<yybool> opt_var
%type<fbflag> arg_type
%type<sym>opt_id
%type<vector>func_effects _func_effects
%type<var_decl> var_decl arg_decl fptr_arg_decl
%type<var_decl_list> var_decl_list
%type<type_decl> type_decl_tmpl type_decl_base type_decl_noflag type_decl_opt type_decl type_decl_array type_decl_empty type_decl_exp class_ext
%type<exp> prim_exp decl_exp binary_exp call_paren interp interp_exp
%type<exp> opt_exp con_exp log_or_exp log_and_exp inc_or_exp exc_or_exp and_exp eq_exp
%type<exp> rel_exp shift_exp add_exp mul_exp dur_exp unary_exp dict_list
%type<exp> post_exp dot_exp cast_exp exp when_exp typedef_when
%type<array_sub> array_exp array_empty array
%type<range> range
%type<stmt> stmt loop_stmt selection_stmt jump_stmt try_stmt retry_stmt code_stmt exp_stmt where_stmt varloop_stmt defer_stmt func_code
%type<stmt> match_case_stmt match_stmt stmt_pp trait_stmt
%type<handler_list> handler_list handler
%type<stmt_list> stmt_list match_list trait_stmt_list
%type<arg_list> arg arg_list func_args lambda_arg lambda_list fptr_list fptr_arg fptr_args
%type<func_def> func_def op_def func_def_base abstract_fdef
%type<func_base> func_base fptr_base op_base
%type<enum_def> enum_def
%type<union_def> union_def
%type<fptr_def> fptr_def
%type<type_def> type_def
%type<section> section trait_section
%type<extend_def> extend_def
%type<class_def> class_def
%type<trait_def> trait_def
%type<ast> class_body extend_body trait_body
%type<id_list> id_list traits
%type<specialized_list> specialized_list decl_template
%type<type_list> type_list call_template
%type<union_list> union_decl union_list
%type<ast> ast prg trait_ast

%start prg

%right RANGE_EMPTY

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

%nonassoc STMT_ASSOC
%nonassoc STMT_NOASSOC
%nonassoc NOELSE
%nonassoc ELSE

%%

prg: ast { arg->ppa->ast = $$ = $1; /* no need for LIST_REM here */}
  | /* empty */ { loc_t loc = { {1, 1}, {1,1} }; parser_error(&loc, arg, "file is empty.", 0201); YYERROR; }

ast
  : section { $$ = new_ast(mpool(arg), $1, NULL); LIST_FIRST($$) }
  | ast section { LIST_NEXT($$, $1, Ast, new_ast(mpool(arg), $2, NULL)) }
  ;

section
  : stmt_list    { $$ = new_section_stmt_list(mpool(arg), $1); LIST_REM($$) }
  | func_def     { $$ = new_section_func_def (mpool(arg), $1); }
  | class_def    { $$ = new_section_class_def(mpool(arg), $1); }
  | trait_def    { $$ = new_section_trait_def(mpool(arg), $1); }
  | extend_def   { $$ = new_section_extend_def(mpool(arg), $1); }
  | enum_def     { $$ = new_section_enum_def(mpool(arg), $1); }
  | union_def    { $$ = new_section_union_def(mpool(arg), $1); }
  | fptr_def     { $$ = new_section_fptr_def(mpool(arg), $1); }
  | type_def     { $$ = new_section_type_def(mpool(arg), $1); }
  ;

class_flag: flag modifier { $$ = $1 | $2; }
class_def
  : "class" class_flag ID decl_template class_ext traits "{" class_body "}"
    {
      $$ = new_class_def(mpool(arg), $2, $3, $5, $8, @3);
      if($4)
        $$->base.tmpl = new_tmpl_base(mpool(arg), $4);
      $$->traits = $6;
    }
  | "struct" class_flag ID decl_template traits "{" class_body "}"
    {
      $$ = new_class_def(mpool(arg), $2, $3, NULL, $7, @3);
      if($4)
        $$->base.tmpl = new_tmpl_base(mpool(arg), $4);
      $$->cflag |= cflag_struct;
      $$->traits = $5;
    };

trait_stmt: exp_stmt {
    if($1->d.stmt_exp.val->exp_type != ae_exp_decl)
    { parser_error(&@$, arg, "trait can only contains variable requests and functions", 0211); YYERROR;}
    $$ = $1;
  } | stmt_pp;
trait_stmt_list: trait_stmt  { $$ = new_stmt_list(mpool(arg), $1, NULL); LIST_FIRST($$) } |
  trait_stmt_list trait_stmt { LIST_NEXT($$, $1, Stmt_List, new_stmt_list(mpool(arg), $2, NULL)) };

trait_section
  : trait_stmt_list    { $$ = new_section_stmt_list(mpool(arg), $1); LIST_REM($$) }
  | func_def     { $$ = new_section_func_def (mpool(arg), $1); }
  ;

trait_ast
  : trait_section { $$ = new_ast(mpool(arg), $1, NULL); LIST_FIRST($$) }
  | trait_ast trait_section { LIST_NEXT($$, $1, Ast, new_ast(mpool(arg), $2, NULL)) }
  ;

trait_body : trait_ast | { $$ = NULL; };

trait_def: "trait" class_flag ID traits "{" trait_body "}"
    {
      $$ = new_trait_def(mpool(arg), $2, $3, $6, @3);
      $$->traits = $4;
      if(GET_FLAG($$, abstract)) {
        { scanner_secondary(arg, "abstract should not be used on ${/+trait{0} declaration", @3); }
        UNSET_FLAG($$, abstract);
      }
    };

class_ext : "extends" type_decl_exp { $$ = $2; } | { $$ = NULL; };
traits: { $$ = NULL; } | ":" id_list {
  ID_List base = $$ = $2;
  while(base) {
    ID_List curr = base->next;
    while(curr) {
      if(base->xid == curr->xid) // could use ID_List location
      { scanner_secondary(arg, "duplicated trait", @2); }
      curr = curr->next;
    }    
    base = base->next;
  }
};
extend_body
  : func_def {
    Section * section= new_section_func_def (mpool(arg), $1);
    $$ = new_ast(mpool(arg), section, NULL); LIST_FIRST($$)
  }
  | extend_body func_def {
    Section * section = new_section_func_def (mpool(arg), $2);
    LIST_NEXT($$, $1, Ast, new_ast(mpool(arg), section, NULL))
  }
  ;

extend_def: "extends" type_decl_empty traits "{" extend_body "}" {
  $$ = new_extend_def(mpool(arg), $2, $5);
  $$->traits = $3;
}


class_body : ast | { $$ = NULL; };

id_list: ID { $$ = new_id_list(mpool(arg), $1); LIST_FIRST($$) }
       | id_list "," ID  { LIST_NEXT($$, $1, ID_List, new_id_list(mpool(arg), $3)) };

specialized_list: ID traits { $$ = new_specialized_list(mpool(arg), $1, $2, @1); LIST_FIRST($$) }
       | specialized_list "," ID  traits { LIST_NEXT($$, $1, Specialized_List, new_specialized_list(mpool(arg), $3, $4, @3)) };

stmt_list: stmt  { $$ = new_stmt_list(mpool(arg), $1, NULL); LIST_FIRST($$) } |
  stmt_list stmt { LIST_NEXT($$, $1, Stmt_List, new_stmt_list(mpool(arg), $2, NULL)) };

fptr_base: flag type_decl_empty ID decl_template { $$ = new_func_base(mpool(arg), $2, $3, NULL, $1, @2);
  if($4) { $$->tmpl = new_tmpl_base(mpool(arg), $4); } }

_func_effects: "perform" ID { vector_init(&$$); vector_add(&$$, (m_uint)$2); } | _func_effects ID { vector_add(&$$, (m_uint)$2); }
func_effects: { $$.ptr = NULL; } | _func_effects { $$.ptr = $1.ptr; }

func_base: flag final type_decl_empty ID decl_template { $$ = new_func_base(mpool(arg), $3, $4, NULL, $1 | $2, @4);
  if($5) { $$->tmpl = new_tmpl_base(mpool(arg), $5); } }

fptr_def: "funptr" fptr_base fptr_args arg_type func_effects ";" {
  $2->args = $3;
  $2->fbflag |= $4;
  $$ = new_fptr_def(mpool(arg), $2);
  $$->base->effects.ptr = $5.ptr;
};

typedef_when: { $$ = NULL;} | "when" binary_exp { $$ = $2; }
type_def_type: "typedef" { $$ = false; } | "distinct" { $$ = true; };
type_def: type_def_type flag type_decl_array ID decl_template typedef_when ";" {
  $$ = new_type_def(mpool(arg), $3, $4, @4);
  $3->flag |= $2;
  $$->when = $6;
  if($5)
    $$->tmpl = new_tmpl_base(mpool(arg), $5);
  $$->distinct = $1;
};

type_decl_array: type_decl array { $1->array = $2; } | type_decl

type_decl_exp: type_decl_array { if($1->array && !$1->array->exp)
    { parser_error(&@$, arg, "can't instantiate with empty `[]`", 0203); YYERROR;}
  $$ = $1; }

type_decl_empty: type_decl_array { if($1->array && $1->array->exp)
    { parser_error(&@$, arg, "type must be defined with empty []'s", 0204); YYERROR;}
  $$ = $1; }

arg
  : type_decl_array arg_decl ":" binary_exp { $$ = new_arg_list(mpool(arg), $1, $2, NULL); $$->exp = $4; }
  | type_decl_array arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); };
arg_list:
     arg { $$ = $1; LIST_FIRST($1) }
  |  arg_list "," arg {
     LIST_NEXT($$, $1, Arg_List, $3)
     if(next->exp && !$3->exp)
        { parser_error(&@3, arg, "missing default argument", 0205); YYERROR;}
   };

fptr_arg: type_decl_array fptr_arg_decl { $$ = new_arg_list(mpool(arg), $1, $2, NULL); }
fptr_list: fptr_arg { $$ = $1; LIST_FIRST($$) } | fptr_list "," fptr_arg { LIST_NEXT($$, $1, Arg_List, $3) };

code_stmt
  : "{" "}" { $$ = new_stmt(mpool(arg), ae_stmt_code, @$); }
  | "{" stmt_list "}" { $$ = new_stmt_code(mpool(arg), $2, @$); LIST_REM($2) }
  ;

stmt_pp
  : PP_COMMENT { if(!arg->ppa->lint)return 0; $$ = new_stmt_pp(mpool(arg), ae_pp_comment, $1, @$); }
  | PP_INCLUDE { $$ = new_stmt_pp(mpool(arg), ae_pp_include, $1, @$); }
  | PP_DEFINE  { $$ = new_stmt_pp(mpool(arg), ae_pp_define,  $1, @$); }
  | PP_PRAGMA  { $$ = new_stmt_pp(mpool(arg), ae_pp_pragma,  $1, @$); }
  | PP_UNDEF   { $$ = new_stmt_pp(mpool(arg), ae_pp_undef,   $1, @$); }
  | PP_IFDEF   { $$ = new_stmt_pp(mpool(arg), ae_pp_ifdef,   $1, @$); }
  | PP_IFNDEF  { $$ = new_stmt_pp(mpool(arg), ae_pp_ifndef,  $1, @$); }
  | PP_ELSE    { $$ = new_stmt_pp(mpool(arg), ae_pp_else,    $1, @$); }
  | PP_ENDIF   { $$ = new_stmt_pp(mpool(arg), ae_pp_endif,   $1, @$); }
  | PP_NL      { if(!arg->ppa->lint)return 0; $$ = new_stmt_pp(mpool(arg), ae_pp_nl,      $1, @$); }
  | PP_IMPORT  { $$ = new_stmt_pp(mpool(arg), ae_pp_import, $1, @$); }
  ;

stmt
  : exp_stmt
  | loop_stmt
  | selection_stmt
  | code_stmt
  | match_stmt
  | jump_stmt
  | stmt_pp
  | varloop_stmt
  | defer_stmt
  | try_stmt
  | retry_stmt
  ;

retry_stmt: "retry" ";" {
  if(!arg->handling)
    { parser_error(&@1, arg, "`retry` outside of `handle` block", 0); YYERROR; }
  $$ = new_stmt(mpool(arg), ae_stmt_retry, @1);
};
handler: "handle" { arg->handling = true; } opt_id stmt { $$ = new_handler_list(mpool(arg), $3, $4, $3 ? @3 :@1); arg->handling = false; };
handler_list: handler
  | handler_list handler  {
        if(!$1->xid)
        { parser_error(&@2, arg, "specific `handle` after a catch-all block", 0); YYERROR; }
        Handler_List list = $2;
        while(list) {
          if(list->xid == $1->xid)
          { parser_error(&@2, arg, "duplicated `handle`", 0); YYERROR; }
          list = list->next;
        }
        $$ = $1;
        $1->next = $2;
  }
try_stmt: "try" stmt handler_list { $$ = new_stmt_try(mpool(arg), $2, $3); };

opt_id: ID | { $$ = NULL; };

enum_def
  : "enum" flag ID "{" id_list "}" {
    $$ = new_enum_def(mpool(arg), $5, $3, @$);
    $$->flag = $2;
    LIST_REM($5)
  };

when_exp: "when" exp { $$ = $2; LIST_REM($2) } | { $$ = NULL; }

match_case_stmt
  : "case" exp when_exp ":" stmt_list {
    $$ = new_stmt(mpool(arg), 0, @$);
    $$->d.stmt_match.cond = $2;
    $$->d.stmt_match.list = $5;
    $$->d.stmt_match.when = $3;
    LIST_REM($2)
    LIST_REM($5)
};

match_list
  : match_case_stmt { $$ = new_stmt_list(mpool(arg), $1, NULL); LIST_FIRST($$) }
  | match_list match_case_stmt { LIST_NEXT($$, $1, Stmt_List, new_stmt_list(mpool(arg), $2, NULL)) }

where_stmt: "where" stmt { $$ = $2; } | { $$ = NULL; }

match_stmt: "match" exp "{" match_list "}" where_stmt {
  $$ = new_stmt(mpool(arg), ae_stmt_match, @$);
  $$->d.stmt_match.cond  = $2;
  $$->d.stmt_match.list  = $4;
  $$->d.stmt_match.where = $6;
  LIST_REM($2)
  LIST_REM($4)
};

flow
  : "while" { $$ = ae_stmt_while; }
  | "until" { $$ = ae_stmt_until; }
  ;

loop_stmt
  : flow "(" exp ")" stmt
    { $$ = new_stmt_flow(mpool(arg), $1, $3, $5, false, @$); LIST_REM($3) }
  | "do" stmt flow exp ";"
    { $$ = new_stmt_flow(mpool(arg), $3, $4, $2, true, @$); LIST_REM($3) }
  | "for" "(" exp_stmt exp_stmt ")" stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, NULL, $6, @$); }
  | "for" "(" exp_stmt exp_stmt exp ")" stmt
      { $$ = new_stmt_for(mpool(arg), $3, $4, $5, $7, @$); LIST_REM($5) }
  | "foreach" "(" ID ":" opt_var binary_exp ")" stmt
      { $$ = new_stmt_each(mpool(arg), $3, $6, $8, @$); }
  | "foreach" "(" ID "," ID ":" opt_var binary_exp ")" stmt
      {
        $$ = new_stmt_each(mpool(arg), $5, $8, $10, @$);
        $$->d.stmt_each.idx = mp_malloc(mpool(arg), EachIdx);
        $$->d.stmt_each.idx->sym = $3;
        $$->d.stmt_each.idx->pos = @3;
        $$->d.stmt_each.idx->is_var = $7;
      }
  | "repeat" "(" binary_exp ")" stmt
      { $$ = new_stmt_loop(mpool(arg), $3, $5, @$); LIST_REM($3) }
  | "repeat" "(" ID "," binary_exp ")" stmt
      {
        $$ = new_stmt_loop(mpool(arg), $5, $7, @$);
        $$->d.stmt_loop.idx = mp_malloc(mpool(arg), EachIdx);
        $$->d.stmt_loop.idx->sym = $3;
        $$->d.stmt_loop.idx->pos = @3;
        LIST_REM($5)
      }
  ;

varloop_stmt: "varloop" binary_exp code_stmt { $$ = new_stmt_varloop(mpool(arg), $2, $3, @$); }

defer_stmt: "defer" stmt { $$ = new_stmt_defer(mpool(arg), $2, @$); }

selection_stmt
  : "if" "(" exp ")" stmt %prec NOELSE
      { $$ = new_stmt_if(mpool(arg), $3, $5, @$); LIST_REM($3) }
  | "if" "(" exp ")" stmt "else" stmt
      { $$ = new_stmt_if(mpool(arg), $3, $5, @$); $$->d.stmt_if.else_body = $7; LIST_REM($3) }
  ;

breaks: "break"     { $$ = ae_stmt_break; } | CONTINUE  { $$ = ae_stmt_continue; };
jump_stmt
  : "return" exp ";" { $$ = new_stmt_exp(mpool(arg), ae_stmt_return, $2, @$); LIST_REM($2) }
  | "return" ";"     { $$ = new_stmt(mpool(arg), ae_stmt_return, @$); }
  | breaks NUM ";"   { $$ = new_stmt(mpool(arg), $1, @$); $$->d.stmt_index.idx = $2; }
  | breaks ";"       { $$ = new_stmt(mpool(arg), $1, @$); $$->d.stmt_index.idx = -1; }
  ;

exp_stmt
  : exp ";" { $$ = new_stmt_exp(mpool(arg), ae_stmt_exp, $1, @$); LIST_REM($1) }
  | ";"     { $$ = new_stmt(mpool(arg), ae_stmt_exp, @$); }
  ;

exp:
    binary_exp           { $$ = $1; LIST_FIRST($$) }
  | exp "," binary_exp
    {
      if($3->next) {
        parser_error(&@3, arg, "invalid format for expression", 0);
        YYERROR;
      }
      LIST_NEXT($$, $1, Exp, $3)
    };


binary_exp
  : decl_exp
  | binary_exp OPID_A  decl_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); }
  | binary_exp "@"     decl_exp   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); }
  | binary_exp DYNOP   decl_exp   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); }
  | binary_exp OPTIONS decl_exp { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };


call_template: ":[" type_list "]" { $$ = $2; } | { $$ = NULL; };

op: "==" | "!=" | "@" | DYNOP | OPTIONS;

array_exp
  : "[" exp "]"           { $$ = new_array_sub(mpool(arg), $2);  LIST_REM($2) }
  | "[" exp "]" array_exp {
    LIST_REM($2)
    if($2->next){ parser_error(&@2, arg, "invalid format for array init [...][...]...", 0x0208); YYERROR; } $$ = prepend_array_sub($4, $2);
  }
  | "[" exp "]" "[" "]"  { LIST_REM(2) parser_error(&@3, arg, "partially empty array init [...][]...", 0x0209); YYERROR; }
  ;

array_empty
  : "[" "]"               { $$ = new_array_sub(mpool(arg), NULL); }
  | array_empty "[" "]"   { $$ = prepend_array_sub($1, NULL); }
  | array_empty array_exp { parser_error(&@1, arg, "partially empty array init [][...]", 0x0210); YYERROR; }
  ;

dict_list:
    binary_exp ":" binary_exp { $1->next = $3; $$ = $1; }
  | binary_exp ":" binary_exp "," dict_list  { $1->next = $3; $3-> next = $5; $$ = $1; }

range
  : "[" exp ":" exp "]" { $$ = new_range(mpool(arg), $2, $4); LIST_REM($2) LIST_REM($4) }
  | "[" exp ":" "]"     { $$ = new_range(mpool(arg), $2, NULL);  LIST_REM($2) }
  | "[" %prec RANGE_EMPTY ":" exp "]"     { $$ = new_range(mpool(arg), NULL, $3); LIST_REM($3) }
  ;


array: array_exp | array_empty;
decl_exp: con_exp
  | type_decl_flag2 flag type_decl_array var_decl_list { $$= new_exp_decl(mpool(arg), $3, $4, @$); $$->d.exp_decl.td->flag |= $1 | $2; };

func_args: "(" arg_list   { $$ = $2; LIST_REM($2) } | "(" { $$ = NULL; };
fptr_args: "(" fptr_list { $$ = $2; LIST_REM($2) } | "(" { $$ = NULL; };
arg_type: "..." ")" { $$ = fbflag_variadic; }| ")" { $$ = 0; };

decl_template: ":[" specialized_list "]" { $$ = $2; LIST_REM(2) } | { $$ = NULL; };

global: GLOBAL { $$ = ae_flag_global; arg->global = true; }

storage_flag: STATIC { $$ = ae_flag_static; } | global;

access_flag: PRIVATE { $$ = ae_flag_private; }
  | PROTECT { $$ = ae_flag_protect; }
  ;

flag: access_flag { $$ = $1; }
  |  storage_flag { $$ = $1; }
  |  access_flag storage_flag { $$ = $1 | $2; }
  | { $$ = ae_flag_none; }
  ;

final: "final" { $$ = ae_flag_final; } | { $$ = ae_flag_none; };

modifier: "abstract" final { $$ = ae_flag_abstract | $2; } | final ;

func_code: code_stmt | ";" { $$ = NULL; }
func_def_base
  : "fun" func_base func_args arg_type func_code {
    $2->args = $3;
    $2->fbflag |= $4;
    $$ = new_func_def(mpool(arg), $2, $5);
//    $$->trait = $5;
    if(!$5) {
      SET_FLAG($2, abstract);
    }
  };

abstract_fdef
  : "fun" flag "abstract" type_decl_empty ID decl_template fptr_args arg_type ";"
    { Func_Base *base = new_func_base(mpool(arg), $4, $5, NULL, $2 | ae_flag_abstract, @5);
      if($6)
        base->tmpl = new_tmpl_base(mpool(arg), $6);
      base->args = $7;
      base->fbflag |= $8;
      $$ = new_func_def(mpool(arg), base, NULL);
    };

op_op: op | shift_op | rel_op | mul_op | add_op;
op_base
  :  type_decl_empty op_op decl_template "(" arg "," arg ")"
    { $$ = new_func_base(mpool(arg), $1, $2, $5, ae_flag_none, @2); $5->next = $7;
      if($3)$$->tmpl = new_tmpl_base(mpool(arg), $3);
    }
  |  type_decl_empty post_op decl_template "(" arg ")"
    { $$ = new_func_base(mpool(arg), $1, $2, $5, ae_flag_none, @2);
      if($3)$$->tmpl = new_tmpl_base(mpool(arg), $3);
    }
  |  unary_op type_decl_empty decl_template "(" arg ")"
    {
      $$ = new_func_base(mpool(arg), $2, $1, $5, ae_flag_none, @1);
      $$->fbflag |= fbflag_unary;
      if($3)$$->tmpl = new_tmpl_base(mpool(arg), $3);
    }
  | type_decl_empty OPID_A func_args ")"
    {
      $$ = new_func_base(mpool(arg), $1, $2, $3, ae_flag_none, @2);
      $$->fbflag |= fbflag_internal;
    };

operator: "operator" { $$ = ae_flag_none; } | "operator" global { $$ = $2; };
op_def
  : operator op_base code_stmt
  { $$ = new_func_def(mpool(arg), $2, $3); $2->fbflag |= fbflag_op; $2->flag |= $1; }
  | operator op_base ";"
  { $$ = new_func_def(mpool(arg), $2, NULL); $2->fbflag |= fbflag_op; $2->flag |= $1 | ae_flag_abstract; }
  | operator "abstract" op_base ";"
  { $$ = new_func_def(mpool(arg), $3, NULL); $3->fbflag |= fbflag_op; $3->flag |= $1 | ae_flag_abstract; };

func_def: func_def_base | abstract_fdef | op_def { $$ = $1; $$->base->fbflag |= fbflag_op; }
  |  operator "new" func_args arg_type code_stmt
    { Func_Base *const base = new_func_base(mpool(arg), NULL, $2, $3, $1, @2);
      base->fbflag = $4;
      $$ = new_func_def(mpool(arg), base, $5);
    }
  |  operator "new" func_args arg_type ";"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, $2, $3, $1 | ae_flag_abstract, @2);
      base->fbflag = $4;
      $$ = new_func_def(mpool(arg), base, NULL);
    }
  |  operator "abstract" "new" func_args arg_type ";"
    { Func_Base *const base = new_func_base(mpool(arg), NULL, $3, $4, $1 | ae_flag_abstract, @3);
      base->fbflag = $5;
      $$ = new_func_def(mpool(arg), base, NULL);
    }

type_decl_base
  : ID { $$ = new_type_decl(mpool(arg), $1, @$); }
  | "(" flag type_decl_empty decl_template fptr_args arg_type func_effects ")" {
      const Symbol name = sig_name(arg, @3.first);
      $$ = new_type_decl(mpool(arg), name, @1);
      Func_Base *fb = new_func_base(mpool(arg), $3, name, NULL, $2, @1);
      if($4)
        fb->tmpl = new_tmpl_base(mpool(arg), $4);
      fb->args = $5;
      fb->fbflag |= $6;
      const Fptr_Def fptr = new_fptr_def(mpool(arg), fb);
      fptr->base->effects.ptr = $7.ptr;
      $$->fptr = fptr;
  }
  ;

type_decl_tmpl
  : type_decl_base call_template { $$ = $1; $$->types = $2; }
  | "&" type_decl_base call_template { $$ = $2; $$->ref = true; $$->types = $3; }
  ;

type_decl_noflag
  : type_decl_tmpl
  | type_decl_tmpl "." type_decl_noflag { $1->next = $3; }
  ;

option: "?" { $$ = 1; } | OPTIONS { $$ = strlen(s_name($1)); } | { $$ = 0; };
type_decl_opt: type_decl_noflag option { $$ = $1; $$->option = $2; };
type_decl: type_decl_opt | type_decl_flag type_decl_opt { $$ = $2; $$->flag |= $1; };

type_decl_flag
  : "late"  { $$ = ae_flag_late; }
  | "const" { $$ = ae_flag_const; };

opt_var: "var" { $$ = true; } | { $$ = false; };

type_decl_flag2: "var"  { $$ = ae_flag_none; } | type_decl_flag

union_decl:
            ID ";" {
  Type_Decl *td = new_type_decl(mpool(arg), insert_symbol("None"), @1);
  $$ = new_union_list(mpool(arg), td, $1, @1);
}
| type_decl_empty ID ";" { $$ = new_union_list(mpool(arg), $1, $2, @$); }

union_list: union_decl
  | union_decl union_list { $$ = $1; $$->next = $2; };

union_def
  : "union" flag ID decl_template "{" union_list "}" {
      $$ = new_union_def(mpool(arg), $6, @3);
      $$->xid = $3;
      $$->flag = $2;
      if($4)
        $$->tmpl = new_tmpl_base(mpool(arg), $4);
    }
  ;

var_decl_list
  : var_decl "," var_decl_list { $$ = new_var_decl_list(mpool(arg), $1, $3); }
  | var_decl { $$ = new_var_decl_list(mpool(arg), $1, NULL); }
  ;

var_decl: ID { $$ = new_var_decl(mpool(arg), $1, NULL, @1); }
  | ID array   { $$ = new_var_decl(mpool(arg), $1,   $2, @$); };

arg_decl: ID { $$ = new_var_decl(mpool(arg), $1, NULL, @$); }
  | ID array_empty { $$ = new_var_decl(mpool(arg), $1,   $2, @$); }
  | ID array_exp { parser_error(&@2, arg, "argument/union must be defined with empty []'s", 0210); YYERROR; };
fptr_arg_decl: arg_decl | { $$ = new_var_decl(mpool(arg), NULL, NULL, @$); }

eq_op : "==" | "!=";
rel_op: "<" | ">" | "<=" | ">=";
shift_op: "<<" | ">>";
add_op: "+" | "-";
mul_op: "*" | "/" | "%";

opt_exp: exp { $$ = $1; LIST_REM($1) } | { $$ = NULL; }
con_exp: log_or_exp
  | log_or_exp "?" opt_exp ":" con_exp
      { $$ = new_exp_if(mpool(arg), $1, $3, $5, @$); };
  | log_or_exp "?:" con_exp
      { $$ = new_exp_if(mpool(arg), $1, NULL, $3, @$); };

log_or_exp: log_and_exp | log_or_exp "||" log_and_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
log_and_exp: inc_or_exp | log_and_exp "&&" inc_or_exp  { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
inc_or_exp: exc_or_exp | inc_or_exp "|" exc_or_exp     { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
exc_or_exp: and_exp | exc_or_exp S_XOR and_exp         { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
and_exp: eq_exp | and_exp "&" eq_exp                   { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
eq_exp: rel_exp | eq_exp eq_op rel_exp                 { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
rel_exp: shift_exp | rel_exp rel_op shift_exp          { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
shift_exp: add_exp | shift_exp shift_op add_exp        { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
add_exp: mul_exp | add_exp add_op mul_exp              { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
mul_exp: dur_exp | mul_exp mul_op dur_exp              { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };
dur_exp: cast_exp | dur_exp "::" cast_exp              { $$ = new_exp_binary(mpool(arg), $1, $2, $3, @$); };

cast_exp: unary_exp | cast_exp "$" type_decl_empty
    { $$ = new_exp_cast(mpool(arg), $3, $1, @$); };

unary_op : "-" %prec UMINUS | "*" %prec UTIMES | post_op
  | "!" | "spork" | "fork" | "~"
  ;

unary_exp : post_exp
  | unary_op unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @$); }
  | OPID_E unary_exp { $$ = new_exp_unary(mpool(arg), $1, $2, @$); }
  | "new" type_decl_exp "(" opt_exp ")" {
       $$ = new_exp_unary2(mpool(arg), $1, $2, $4 ?: new_prim_nil(mpool(arg), @4), @$);
  }
  | "new" type_decl_exp {$$ = new_exp_unary2(mpool(arg), $1, $2, NULL, @$); }
  | "spork" code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, $2, @$); };
  | "fork"  code_stmt   { $$ = new_exp_unary3(mpool(arg), $1, $2, @$); };
  | "$" type_decl_empty { $$ = new_exp_td(mpool(arg), $2, @2); };

lambda_list:
 ID { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, @1), NULL); }
|    ID lambda_list { $$ = new_arg_list(mpool(arg), NULL, new_var_decl(mpool(arg), $1, NULL, @1), $2); }
lambda_arg: "\\" lambda_list { $$ = $2; } | BACKSLASH { $$ = NULL; }

type_list
  : type_decl_empty { $$ = new_type_list(mpool(arg), $1, NULL); }
  | type_decl_empty "," type_list { $$ = new_type_list(mpool(arg), $1, $3); }
  ;


call_paren : "(" exp ")" { $$ = $2; LIST_REM($2) } | "(" ")" { $$ = NULL; };

post_op : "++" | "--";

dot_exp: post_exp "." ID {
  if($1->next) {
    parser_error(&@1, arg, "can't use multiple expression"
      " in dot member base expression", 0211);
    YYERROR;
  };
  $$ = new_exp_dot(mpool(arg), $1, $3, @$);
};

post_exp: prim_exp
  | post_exp array_exp
    { $$ = new_exp_array(mpool(arg), $1, $2, @$); }
  | post_exp range
    { $$ = new_exp_slice(mpool(arg), $1, $2, @$); }
  | post_exp call_template call_paren
    { $$ = new_exp_call(mpool(arg), $1, $3, @$);
      if($2)$$->d.exp_call.tmpl = new_tmpl_call(mpool(arg), $2); }
  | post_exp post_op
    { $$ = new_exp_post(mpool(arg), $1, $2, @$); }
  | post_exp OPID_E
    { $$ = new_exp_post(mpool(arg), $1, $2, @$); }
  | dot_exp { $$ = $1; }
  ;

interp_exp
  : INTERP_END { $$ = new_prim_string(mpool(arg), $1.data, $1.delim, @$); }
  | INTERP_LIT interp_exp { $$ = new_prim_string(mpool(arg), $1.data, $1.delim, @$); $$->next = $2; }
  | exp INTERP_EXP interp_exp { $$ = $1; $$->next = $3; LIST_REM($1) }

interp: INTERP_START interp_exp { $$ = $2; }
| interp INTERP_START interp_exp {
  if(!$3->next) {
    char c[strlen($1->d.prim.d.string.data) + strlen($3->d.prim.d.string.data) + 1];
    sprintf(c, "%s%s\n", $1->d.prim.d.string.data, $3->d.prim.d.string.data);
    $1->d.prim.d.string.data = s_name(insert_symbol(c));
    $1->pos.last = $3->pos.last;
    free_exp(mpool(arg), $3);
  } else
  $1->next = $3;
}

prim_exp
  : ID                   { $$ = new_prim_id(     mpool(arg), $1, @$); }
  | NUM                  { $$ = new_prim_int(    mpool(arg), $1, @$); }
  | FLOATT               { $$ = new_prim_float(  mpool(arg), $1, @$); }
  | interp               { $$ = !$1->next ? $1 : new_prim_interp(mpool(arg), $1, @$); }
  | STRING_LIT           { $$ = new_prim_string( mpool(arg), $1, 0, @$); }
  | CHAR_LIT             { $$ = new_prim_char(   mpool(arg), $1, @$); }
  | array                { $$ = new_prim_array(  mpool(arg), $1, @$); }
  | "{" dict_list "}"    { $$ = new_prim_dict(   mpool(arg), $2, @$); }
  | range                { $$ = new_prim_range(  mpool(arg), $1, @$); }
  | "<<<" exp ">>>"      { $$ = new_prim_hack(   mpool(arg), $2, @$); LIST_REM(2) }
  | "(" exp ")"          { $$ = $2; LIST_REM($2) }
  | lambda_arg code_stmt { $$ = new_exp_lambda( mpool(arg), lambda_name(arg), $1, $2, @1); };
  | "(" op_op ")"        { $$ = new_prim_id(     mpool(arg), $2, @$); }
  | "perform" ID         { $$ = new_prim_perform(mpool(arg), $2, @2); }
  | "(" ")"              { $$ = new_prim_nil(    mpool(arg),     @$); }
  ;
%%
#undef scan
ANN static int parser_error(loc_t *loc, Scanner *const scan, const char* diagnostic, const uint error_code) {
  char _main[strlen(diagnostic) + 1];
  strcpy(_main, diagnostic);
  char *_explain = strchr(_main, ','),
       *_fix = NULL;
  if(_explain) {
    _main[_explain - _main] = '\0';
    _explain += 2;
    _fix = strchr(_explain, ',');
    if(_fix) {
      _explain[_fix - _explain] = '\0';
      _fix += 2;
    }
  }
  scanner_error(scan, _main, _explain, _fix, *loc, error_code);
  return 0;
}
