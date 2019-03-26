#ifndef __ABSYN
#define __ABSYN

typedef struct Ast_           * Ast;
typedef struct Class_Def_     * Class_Def;
typedef struct Func_Def_      * Func_Def;
typedef struct Stmt_List_     * Stmt_List;
typedef struct Exp_           * Exp;
typedef struct Stmt_          * Stmt;
typedef struct Var_Decl_      * Var_Decl;
typedef struct Var_Decl_List_ * Var_Decl_List;
typedef struct Array_Sub_     * Array_Sub;
typedef struct Arg_List_      * Arg_List;
typedef struct ID_List_       * ID_List;
typedef struct Type_List_     * Type_List;

typedef struct {
  Exp base;
  struct Type_ *t_base;
  struct Symbol_ *xid;
  Exp self;
} Exp_Dot;
typedef struct {
  Arg_List arg;
  Stmt code;
  Func_Def def;
  struct Type_*owner;
  Symbol name;
  Exp self;
} Exp_Lambda;
ANN Exp new_exp_lambda(const Arg_List,const Stmt);
struct Array_Sub_ {
  Exp    exp;
  struct Type_ *type;
  m_uint depth;
};
ANEW Array_Sub new_array_sub(const Exp);
ANN2(1) Array_Sub prepend_array_sub(const Array_Sub, const Exp);
ANN void free_array_sub(Array_Sub);

typedef struct {
  Exp       base;
  Array_Sub array;
  Exp       self;
} Exp_Array;

ANEW ANN Exp new_exp_array(const Exp, const Array_Sub);

struct Var_Decl_ {
  struct Symbol_* xid;
  struct Value_ * value;
  Array_Sub array;
  void* addr;
  uint pos;
};
ANN2(1) ANEW Var_Decl new_var_decl(struct Symbol_*, const Array_Sub, const uint);

struct Var_Decl_List_ {
  Var_Decl self;
  Var_Decl_List next;
};
ANN2(1) ANEW Var_Decl_List new_var_decl_list(const Var_Decl, const Var_Decl_List);

typedef struct Type_Decl_ {
  ID_List xid;
  Array_Sub array;
  Exp_Dot* dot;
  Type_List types;
  ae_flag flag;
} Type_Decl;
ANEW ANN Type_Decl* new_type_decl(const ID_List, const ae_flag);
ANEW ANN Type_Decl* new_type_decl2(const ID_List, const ae_flag);
ANN void free_type_decl(Type_Decl* a);
ANN Type_Decl* add_type_decl_array(Type_Decl*, const Array_Sub);

struct ID_List_    {
  struct Symbol_* xid;
  ID_List next;
  ID_List ref;
  uint pos;
};
ANEW ANN ID_List new_id_list(struct Symbol_*, const uint);
ANEW ANN2(1) ID_List prepend_id_list(struct Symbol_*, ID_List, const uint);
ANN void free_id_list(ID_List a);

struct Type_List_  {
  Type_Decl* td;
  Type_List next;
};
ANN2(1) ANEW Type_List new_type_list(Type_Decl*, const Type_List);
ANN void free_type_list(Type_List a);

typedef struct {
  Exp    exp;
  m_uint dim;
} Vec;

struct Arg_List_ {
  Type_Decl* td;
  Var_Decl var_decl;
  struct Type_* type;
  Arg_List  next;
};
ANN2(2) ANEW Arg_List new_arg_list(Type_Decl*, const Var_Decl, const Arg_List);
ANN void free_arg_list(Arg_List a);

typedef enum { ae_exp_decl, ae_exp_binary, ae_exp_unary, ae_exp_primary,
               ae_exp_cast, ae_exp_post, ae_exp_call, ae_exp_array,
               ae_exp_if, ae_exp_dot, ae_exp_lambda
} ae_exp_t;
typedef enum { ae_meta_var, ae_meta_value, ae_meta_protect } ae_Exp_Meta;
typedef enum { ae_primary_id, ae_primary_num, ae_primary_float,
               ae_primary_str, ae_primary_array,
               ae_primary_hack, ae_primary_complex, ae_primary_polar, ae_primary_vec,
               ae_primary_char, ae_primary_nil
             } ae_prim_t;
typedef struct {
  Type_Decl* td;
  struct Type_* type;
  Var_Decl_List list;
  Class_Def base;
  Exp self;
} Exp_Decl;
typedef struct {
  struct Value_ * value;
  union exp_primary_data {
    struct Symbol_* var;
    unsigned long num;
    m_float fnum;
    m_str chr;
    m_str str;
    Array_Sub array;
    Exp exp;
    Vec vec;
  } d;
  Exp self;
  ae_prim_t primary_type;
} Exp_Primary;

typedef struct Tmpl_Call_ {
  Type_List types;
  ID_List base;
} Tmpl_Call;
ANEW ANN Tmpl_Call* new_tmpl_call(Type_List);
typedef struct {
  Exp func;
  Exp args;
  struct Func_* m_func;
  Tmpl_Call* tmpl;
  Exp self;
} Exp_Call;
typedef struct {
  Type_Decl* td;
  Exp exp;
  Exp self;
  struct Nspc_*nspc;
  struct Func_* func;
} Exp_Cast;
typedef struct {
  Exp lhs, rhs;
  Operator op;
  struct Nspc_*nspc;
  struct Func_ *func;
  Tmpl_Call* tmpl;
  Exp self;
} Exp_Binary;
typedef struct {
  Operator op;
  struct Nspc_*nspc;
  Exp exp;
  Exp self;
} Exp_Postfix;
typedef struct {
  Exp cond;
  Exp if_exp;
  Exp else_exp;
  Exp self;
} Exp_If;
typedef struct {
  Operator op;
  struct Nspc_*nspc;
  Exp exp;
  Type_Decl* td;
  Stmt code;
  m_uint code_depth;
  Exp self;
} Exp_Unary;
struct Exp_ {
  struct Type_* type;
  struct Type_* cast_to;
  Exp next;
  union exp_data {
    Exp_Postfix   exp_post;
    Exp_Primary   exp_primary;
    Exp_Decl      exp_decl;
    Exp_Unary     exp_unary;
    Exp_Binary    exp_binary;
    Exp_Cast      exp_cast;
    Exp_Call      exp_call;
    Exp_If        exp_if;
    Exp_Dot       exp_dot;
    Exp_Array     exp_array;
    Exp_Lambda    exp_lambda;
  } d;
  uint pos;
  ae_exp_t exp_type;
  ae_Exp_Meta meta;
  uint emit_var;
};

ANEW ANN Exp new_exp_prim_id(struct Symbol_*, const uint);
ANEW Exp new_exp_prim_int(const unsigned long, const uint);
ANEW Exp new_exp_prim_float(const m_float, const uint);
ANEW ANN Exp new_exp_prim_string(const m_str, const uint);
ANEW ANN Exp new_exp_prim_array(const Array_Sub, const uint);
ANEW Exp new_exp_prim_hack(const Exp);
ANEW ANN Exp new_exp_prim_vec(const ae_prim_t t, Exp);
ANEW ANN Exp new_exp_prim_char(const m_str, const uint);
ANEW Exp new_exp_prim_nil(const uint);
ANEW ANN Exp new_exp_decl(Type_Decl*, const Var_Decl_List);
ANEW ANN Exp new_exp_binary(const Exp, const Operator, const Exp);
ANEW ANN Exp new_exp_post(const Exp, const Operator);
ANN2(1) ANEW Exp new_exp_call(const Exp, const Exp args);
ANEW ANN Exp new_exp_cast(Type_Decl*, const Exp);
ANN2(1,2) ANEW Exp new_exp_if(const Exp, const Exp, const Exp);
ANEW ANN Exp new_exp_dot(const Exp, struct Symbol_*);
ANEW ANN Exp new_exp_unary(const Operator, const Exp);
ANEW ANN Exp new_exp_unary2(const Operator, Type_Decl*);
ANEW ANN Exp new_exp_unary3(const Operator, const Stmt);
ANEW ANN Exp prepend_exp(const Exp, const Exp);
ANN void free_exp(Exp exp);

typedef struct Decl_List_* Decl_List;
struct Decl_List_ {
  Exp self;
  Decl_List next;
};

ANN2(1) ANEW Decl_List new_decl_list(Exp d, Decl_List l);

typedef enum { ae_stmt_exp, ae_stmt_while, ae_stmt_until, ae_stmt_for, ae_stmt_auto, ae_stmt_loop,
               ae_stmt_if, ae_stmt_code, ae_stmt_switch, ae_stmt_break,
               ae_stmt_continue, ae_stmt_return, ae_stmt_case, ae_stmt_jump,
               ae_stmt_enum, ae_stmt_fptr, ae_stmt_type, ae_stmt_union,
#ifndef TINY_MODE
#ifdef TOOL_MODE
ae_stmt_pp
#endif
#endif
             } ae_stmt_t;

typedef struct Stmt_Exp_     * Stmt_Exp;
typedef struct Stmt_Code_    * Stmt_Code;
typedef struct Stmt_For_     * Stmt_For;
typedef struct Stmt_Flow_    * Stmt_Flow;
typedef struct Stmt_Auto_    * Stmt_Auto;
typedef struct Stmt_Loop_    * Stmt_Loop;
typedef struct Stmt_If_      * Stmt_If;
typedef struct Stmt_Switch_  * Stmt_Switch;
typedef struct Stmt_Jump_    * Stmt_Jump;
typedef struct Stmt_Enum_    * Stmt_Enum;
typedef struct Stmt_Fptr_    * Stmt_Fptr;
typedef struct Stmt_Type_    * Stmt_Type;
typedef struct Stmt_Union_   * Stmt_Union;
#ifndef TINY_MODE
typedef struct Stmt_PP_      * Stmt_PP;
#endif
struct Stmt_Basic_ {
  uint pos;
};

struct Stmt_Exp_ {
  Exp val;
  Stmt self;
};

struct Stmt_Flow_ {
  Exp cond;
  Stmt body;
  Stmt self;
  uint is_do;
};

struct Stmt_Code_ {
  Stmt_List stmt_list;
};

struct Stmt_For_ {
  Stmt c1;
  Stmt c2;
  Exp c3;
  Stmt body;
  Stmt self;
};

struct Stmt_Auto_ {
  struct Symbol_* sym;
  Exp exp;
  Stmt body;
  struct Value_* v;
  m_bool is_ptr;
  Stmt self;
};

struct Stmt_Loop_ {
  Exp cond;
  Stmt body;
  Stmt self;
};

struct Stmt_If_ {
  Exp cond;
  Stmt if_body;
  Stmt else_body;
};

struct Stmt_Jump_ {
  struct Symbol_* name;
  union stmt_goto_data {
    struct Vector_ v;
    struct Instr_* instr;
  } data;
  m_bool is_label;
  Stmt self;
};

struct Stmt_Switch_ {
  Exp val;
  Stmt stmt;
  Stmt self;
};

struct Stmt_Enum_ {
  ID_List list;
  struct Symbol_* xid;
  struct Type_* t;
  struct Vector_ values;
  Stmt self;
  ae_flag flag;
};

struct Stmt_Fptr_ {
  Type_Decl* td;
  struct Type_*       type;
  struct Symbol_*     xid;
  Arg_List   args;
  struct Type_*       ret_type;
  struct Func_       *func;
  struct Value_      *value;
};

struct Stmt_Type_ {
  Type_Decl* td;
  struct Type_*       type;
  struct Symbol_*     xid;
};

struct Stmt_Union_ {
  Decl_List l;
  struct Symbol_* xid;
  struct Symbol_* type_xid;
union {
  struct Value_ *value;
  struct Type_* type;
};
  m_uint s;
  m_uint o;
  Stmt self;
  ae_flag flag;
};

#ifndef TINY_MODE
enum ae_pp_type {
  ae_pp_comment,
  ae_pp_include,
  ae_pp_define,
  ae_pp_undef,
  ae_pp_ifdef,
  ae_pp_ifndef,
  ae_pp_else,
  ae_pp_endif,
  ae_pp_nl
};
struct Stmt_PP_ {
  m_str data;
  enum ae_pp_type type;
};
#endif
struct Stmt_ {
  union stmt_data {
    struct Stmt_Exp_        stmt_exp;
    struct Stmt_Code_       stmt_code;
    struct Stmt_Flow_       stmt_flow;
    struct Stmt_Loop_       stmt_loop;
    struct Stmt_For_        stmt_for;
    struct Stmt_Auto_       stmt_auto;
    struct Stmt_If_         stmt_if;
    struct Stmt_Jump_       stmt_jump;
    struct Stmt_Switch_     stmt_switch;
    struct Stmt_Enum_       stmt_enum;
    struct Stmt_Fptr_       stmt_fptr;
    struct Stmt_Type_       stmt_type;
    struct Stmt_Union_      stmt_union;
#ifndef TINY_MODE
    struct Stmt_PP_    stmt_pp;
#endif
  } d;
  uint pos;
  ae_stmt_t stmt_type;
};

ANEW Stmt new_stmt(const ae_stmt_t, const uint);
ANN ANEW Stmt new_stmt_exp(const ae_stmt_t, const Exp);
ANN ANEW Stmt new_stmt_code(const Stmt_List);
ANN ANEW Stmt new_stmt_if(const Exp, const Stmt);
ANEW ANN Stmt new_stmt_flow(const ae_stmt_t, const Exp, const Stmt, const m_bool);
ANN2(1,2,4) ANEW Stmt new_stmt_for(const Stmt, const Stmt, const Exp, const Stmt);
ANEW ANN Stmt new_stmt_auto(struct Symbol_*, const Exp, const Stmt);
ANEW ANN Stmt new_stmt_loop(const Exp, const Stmt);
ANEW ANN Stmt new_stmt_jump(struct Symbol_*, const m_bool, const uint);
ANN2(1) ANEW Stmt new_stmt_enum(const ID_List, struct Symbol_*);
ANEW ANN Stmt new_stmt_switch(Exp, Stmt);
ANEW ANN Stmt new_stmt_union(const Decl_List, const uint);
ANEW ANN Stmt new_stmt_fptr(struct Symbol_*, Type_Decl*, const Arg_List, const ae_flag);
ANEW ANN Stmt new_stmt_type(Type_Decl*, struct Symbol_*);
#ifndef TINY_MODE
ANEW     Stmt new_stmt_pp(const enum ae_pp_type, const m_str);
#endif
ANN void free_stmt(Stmt);
struct Stmt_List_ {
  Stmt stmt;
  Stmt_List next;
};
ANEW Stmt_List new_stmt_list(Stmt stmt, Stmt_List next);
ANN void free_stmt_list(Stmt_List);

typedef struct Class_Body_ * Class_Body;

typedef struct Tmpl_List_ {
  ID_List list;
  m_int  base;
} Tmpl_List;

struct Func_Def_ {
  Type_Decl* td;
  struct Type_* ret_type;
  struct Symbol_* name;
  Arg_List arg_list;
  m_uint stack_depth;
  struct Func_* func;
  union func_def_data {
    Stmt code;
    void* dl_func_ptr;
  } d;
  Tmpl_List* tmpl;
  ae_flag flag;
};
ANEW ANN Tmpl_List* new_tmpl_list(const ID_List, const m_int);
ANN void free_tmpl_list(Tmpl_List*);
m_bool tmpl_list_base(const Tmpl_List*);
ANEW Func_Def new_func_def(Type_Decl*, struct Symbol_*, const Arg_List, const Stmt, const ae_flag);
ANN m_bool compat_func(const restrict Func_Def lhs, const restrict Func_Def rhs);
ANN void free_func_def(Func_Def def);

typedef enum { ae_section_stmt, ae_section_func, ae_section_class } ae_section_t;
typedef struct Section_ {
  union section_data {
    Stmt_List stmt_list;
    Class_Def class_def;
    Func_Def func_def;
  } d;
  ae_section_t section_type;
} Section;
ANEW ANN Section* new_section_stmt_list(const Stmt_List);
ANEW ANN Section* new_section_func_def(const Func_Def);
ANEW ANN Section* new_section_class_def(const Class_Def);

struct Class_Body_ {
  Section* section;
  Class_Body next;
};

typedef struct Tmpl_Class_ {
  Tmpl_List list;
  Type_List base;
} Tmpl_Class;
ANEW ANN Tmpl_Class* new_tmpl_class(const ID_List, const m_bool);
m_bool tmpl_class_base(const Tmpl_Class*);
ANN void free_tmpl_class(Tmpl_Class*);
struct Class_Def_ {
  ID_List name;
  Type_Decl* ext;
  Class_Body body;
  struct Type_* type;
  Tmpl_Class*  tmpl;
  ae_flag flag;
};
ANN2(2) ANEW Class_Def new_class_def(const ae_flag, const ID_List,
                        Type_Decl*, const Class_Body);
ANN void free_class_def(Class_Def);
ANN2(1) ANEW Class_Body new_class_body(Section*, const Class_Body);
ANN void free_class_body(Class_Body);

struct Ast_ {
  Section* section;
  Ast next;
};
ANN2(1) ANEW Ast new_ast(Section*, const Ast);
ANN void free_ast(Ast);
#endif
