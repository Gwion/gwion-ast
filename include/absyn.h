/** @file: absyn.h
\brief Abstract Syntaxic tree
*/

#ifndef __ABSYN
#define __ABSYN

#include <inttypes.h>
#define AST_NEW(type, name, ...) type new_##name(MemPool p, __VA_ARGS__)

#define AST_FREE(type, name) void free_##name(MemPool p NUSED, type a NUSED)

typedef struct Class_Def_ *    Class_Def;
typedef struct Extend_Def_ *   Extend_Def;
typedef struct Func_Def_ *     Func_Def;
typedef struct Exp          Exp;
typedef struct Stmt          Stmt;
typedef struct Array_Sub_ *    Array_Sub;
typedef struct Fptr_Def_ *     Fptr_Def;
typedef struct Type_Decl_  Type_Decl;


typedef struct SectionList* Ast;

typedef struct Tag {
  Symbol sym;
  loc_t  loc;
} Tag;
#define MK_TAG(a, b) (Tag){ .sym = (a), .loc = (b) }

MK_VECTOR_TYPE(Tag, tag);

typedef struct Var_Decl_ {
  Tag tag;
  struct Value_ * value; ///< corresponding value
} Var_Decl;


typedef struct Stmt_Exp_ {
  Exp* val;
} *Stmt_Exp;

typedef struct Stmt_Index_ {
  m_int idx;
} *Stmt_Index;

typedef struct Stmt_Flow_ {
  Exp*  cond;
  Stmt* body;
  bool is_do;
} *Stmt_Flow;

typedef struct Match {
  Exp*      cond;
  struct StmtList *list;
  union {
    Stmt* where;
    Exp*  when;
  };
} *Stmt_Match;

typedef struct Stmt_Code_ {
  struct StmtList *stmt_list;
} *Stmt_Code;

struct Stmt_For_ {
  Stmt* c1;
  Stmt* c2;
  Exp*  c3;
  Stmt* body;
};

struct Stmt_Each_ {
  Var_Decl var;
  Exp*     exp;
  Stmt*    body;
  Var_Decl idx;
  bool     is_ref;
};

struct Stmt_Loop_ {
  Exp*      cond;
  Stmt*     body;
  Var_Decl  idx;
};

struct Stmt_If_ {
  Exp*  cond;
  Stmt* if_body;
  Stmt* else_body;
};

typedef struct Handler_ {
  Tag  tag;
  Stmt* stmt;
} Handler;
MK_VECTOR_TYPE(Handler, handler)

typedef struct ParserHandler {
  HandlerList *handlers;
  bool has_xid;
} ParserHandler;

typedef struct Stmt_Try_ {
  Stmt*         stmt;
  HandlerList *handler;
} * Stmt_Try;

enum ae_pp_type {
  ae_pp_include,
  ae_pp_define,
  ae_pp_pragma,
  ae_pp_undef,
  ae_pp_ifdef,
  ae_pp_ifndef,
  ae_pp_else,
  ae_pp_endif,
  ae_pp_locale,
  ae_pp_nl
};


struct Stmt_PP_ {
  m_str data;
  Exp*   exp;
  Symbol xid;
  enum ae_pp_type pp_type;
};

struct Stmt_Defer_ {
  Stmt* stmt;
};

typedef struct Stmt_Using_ {
  union {
    Type_Decl *td;
    Exp *exp;
  } d;
  Tag tag;
} *Stmt_Using;
typedef struct Stmt_Using_ UsingStmt;
typedef Stmt_Using Using;
MK_VECTOR_TYPE(UsingStmt, usingstmt)
MK_VECTOR_TYPE(Using, using)

typedef struct Stmt_Import_ {
  Tag tag;
  UsingStmtList *selection;
} *Stmt_Import;

typedef struct Spread_Def_ {
  Tag      tag;
  TagList *list;
  m_str    data;
} *Spread_Def;


typedef enum {
  ae_stmt_exp,
  ae_stmt_while,
  ae_stmt_until,
  ae_stmt_for,
  ae_stmt_each,
  ae_stmt_loop,
  ae_stmt_if,
  ae_stmt_code,
  ae_stmt_break,
  ae_stmt_continue,
  ae_stmt_return,
  ae_stmt_try,
  ae_stmt_retry,
  ae_stmt_match,
  ae_stmt_pp,
  ae_stmt_defer,
  ae_stmt_spread,
  ae_stmt_using,
  ae_stmt_import,
} ae_stmt_t;

typedef struct Stmt_For_ *    Stmt_For;
typedef struct Stmt_Each_ *   Stmt_Each;
typedef struct Stmt_Loop_ *   Stmt_Loop;
typedef struct Stmt_If_ *     Stmt_If;
typedef struct Stmt_PP_ *     Stmt_PP;
typedef struct Stmt_Defer_ *  Stmt_Defer;

struct Stmt {
  union stmt_data {
    struct Stmt_Exp_     stmt_exp;
    struct Stmt_Code_    stmt_code;
    struct Stmt_Flow_    stmt_flow;
    struct Stmt_Loop_    stmt_loop;
    struct Stmt_For_     stmt_for;
    struct Stmt_Each_    stmt_each;
    struct Stmt_If_      stmt_if;
    struct Stmt_Try_     stmt_try;
    struct Match         stmt_match;
    struct Stmt_Index_   stmt_index;
    struct Stmt_PP_      stmt_pp;
    struct Stmt_Defer_   stmt_defer;
    struct Spread_Def_   stmt_spread;
    struct Stmt_Using_   stmt_using;
    struct Stmt_Import_  stmt_import;
  } d;
  loc_t loc; ///< position
  ae_stmt_t stmt_type;
  bool poison;
};

MK_VECTOR_TYPE(Stmt, stmt)

#define MK_STMT(_type, _loc, ...) (Stmt){ .stmt_type = _type, \
  .d = { __VA_ARGS__ }, .loc = _loc }
#define MK_STMT_PP(_type, _pos, ...) MK_STMT(ae_stmt_pp, _pos, .stmt_pp = { .pp_type = ae_pp_##_type, __VA_ARGS__ })
#define MK_STMT_EXP(_pos, _exp) MK_STMT(ae_stmt_exp, _pos, .stmt_exp = { .val = _exp })
#define MK_STMT_RETURN(_pos, _exp) MK_STMT(ae_stmt_return, _pos, .stmt_exp = { .val = _exp })

static inline Stmt* stmt_self(const void *data) {
  return container_of((char *)data, Stmt, d);
}

ANEW     AST_NEW(Stmt*, stmt, const ae_stmt_t, const loc_t);
ANN ANEW AST_NEW(Stmt*, stmt_exp, const ae_stmt_t, Exp*,
                 const loc_t);
ANN ANEW AST_NEW(Stmt*, stmt_code, StmtList*, const loc_t);
ANN ANEW AST_NEW(Stmt*, stmt_if, Exp*, Stmt*, const loc_t);
ANEW ANN AST_NEW(Stmt*, stmt_flow, const ae_stmt_t, Exp*, Stmt*,
                 const bool, const loc_t);
ANN2(1, 2, 3, 5)
ANEW     AST_NEW(Stmt*, stmt_for, Stmt*, Stmt*, Exp*, Stmt*,
                 const loc_t);
ANEW ANN AST_NEW(Stmt*, stmt_each, struct Symbol_ *, Exp*, Stmt*,
                 const loc_t);
ANEW ANN AST_NEW(Stmt*, stmt_loop, Exp*, Stmt*, const loc_t);
ANEW ANN2(1, 3) AST_NEW(Stmt*, stmt_pp, const enum ae_pp_type type, const m_str,
                        const loc_t);
ANEW ANN AST_NEW(Stmt*, stmt_defer, Stmt*, const loc_t);
ANEW ANN AST_NEW(Stmt*, stmt_try, Stmt*, HandlerList*);

ANN void free_stmt(MemPool p, Stmt*);


/** variable declaration **/
typedef struct Variable_ {
  Type_Decl *td;
  Var_Decl   vd;
} Variable;
#define MK_VAR(a, b) (Variable){ .td = (a), .vd = (b) }
MK_VECTOR_TYPE(Variable, variable)

ANN void free_variablelist(MemPool p, VariableList*);

enum tmplarg_t {
  tmplarg_td,
  tmplarg_exp
};

typedef struct TmplArg {
  union {
    Type_Decl *td;
    Exp* exp;
  } d;
  enum tmplarg_t type;
} TmplArg;
MK_VECTOR_TYPE(TmplArg, tmplarg)
#define MK_TMPLARG_TD(a)  \
  (TmplArg) {             \
    .type = tmplarg_td,   \
    .d = { .td = (a) },   \
  }
#define MK_TMPLARG_EXP(a) \
  (TmplArg) {             \
    .type = tmplarg_exp,  \
    .d = { .exp = (a) },  \
  }


struct Type_Decl_ {
  Tag          tag;
  Array_Sub    array;
  TmplArgList *types;
  Type_Decl   *next;
  Fptr_Def     fptr;
  uint8_t      option;
  ae_flag      flag;
  bool         ref;
};
typedef Type_Decl* TD;
MK_VECTOR_TYPE(TD, td)
ANEW ANN AST_NEW(Type_Decl *, type_decl, const Symbol, const loc_t);
ANN void free_type_decl(MemPool p, Type_Decl *);

ANN static inline uint32_t tmplarg_has_const(const TmplArgList *tl) {
  for(uint32_t i = 0; i < tl->len; i++) {
    const TmplArg ta = tmplarglist_at(tl, i);
    if(ta.type == tmplarg_exp) return true;
  }
  return false;
}

ANN static inline uint32_t tmplarg_ntypes(const TmplArgList *tl) {
  uint32_t ret = 0;
  for(uint32_t i = 0; i < tl->len; i++) {
    const TmplArg ta = tmplarglist_at(tl, i);
    if(ta.type == tmplarg_td) ret++;
  }
  return ret;
}

typedef struct Arg_ {
  Variable      var;
  Exp*           exp;
  struct Type_ *type; // can be removed by using var_decl.value->type
  loc_t         loc;
} Arg;
MK_VECTOR_TYPE(Arg, arg)

enum fbflag {
  fbflag_none     = 1 << 0,
  fbflag_op       = 1 << 1,
  fbflag_unary    = 1 << 3,
  fbflag_postfix  = 1 << 4,
  fbflag_internal = 1 << 5,
  fbflag_lambda   = 1 << 6,
  fbflag_default  = 1 << 7,
  fbflag_locale   = 1 << 8,
} __attribute__((packed));

/** a dot expression. @code object.member @endcode */
typedef struct {
  Var_Decl var;
  Exp *base;
} Exp_Dot;

typedef struct Capture {
  Var_Decl var;
  struct Value_ *temp;
  uint32_t offset;
  bool is_ref;
} Capture;
MK_VECTOR_TYPE(Capture, capture)

/** a lambda expression. @code \a b { <<< a + b >>>; } @endcode */
typedef struct {
  Func_Def      def;
  struct Type_ *owner;
} Exp_Lambda;
ANN2(1,2,4) AST_NEW(Exp*, exp_lambda, const Symbol, ArgList*, StmtList*,
            const loc_t);
AST_NEW(Exp*, exp_lambda2, const Symbol xid, ArgList *args, Exp* exp,
        const loc_t);
/** array_subscript. @code [0][0] @endcode */
struct Array_Sub_ {
  Exp*           exp;
  struct Type_ *type;
  uint16_t      depth;
};
ANEW AST_NEW(Array_Sub, array_sub, Exp*);
ANN2(1) Array_Sub prepend_array_sub(const Array_Sub, Exp*);
ANN void free_array_sub(MemPool p, Array_Sub);

/** array expression. @code instrument_list[1][2] @endcode */
typedef struct {
  Exp*       base;
  Array_Sub array;
} Exp_Array;
ANEW ANN AST_NEW(Exp*, exp_array, Exp*, const Array_Sub,
                 const loc_t);

/** range. @code [12:12] @endcode or @code [1:] @endcode or @code [:12]
 * @endcode*/
typedef struct Range_ {
  Exp* start; ///< start of range expression
  Exp* end;   ///< end   of range expression
  bool inclusive;
} Range;
AST_NEW(Range *, range, Exp*, Exp*);

/** slice. @code "test"[12:12] @endcode see \ref Range_ */
typedef struct {
  Exp*    base;
  Range *range;
} Exp_Slice;
ANEW ANN AST_NEW(Exp*, exp_slice, Exp*, Range *, const loc_t);


typedef struct Specialized {
  Tag        tag;
  Type_Decl *td;
  TagList   *traits;
} Specialized;
MK_VECTOR_TYPE(Specialized, specialized)

ANN void free_specialized_list(MemPool p, SpecializedList*);

ANN void free_tmplarg_list(MemPool p, TmplArgList *);

ANN void free_arg_list(MemPool p, ArgList*);

typedef enum {
  ae_exp_decl,
  ae_exp_binary,
  ae_exp_unary,
  ae_exp_primary,
  ae_exp_cast,
  ae_exp_post,
  ae_exp_call,
  ae_exp_array,
  ae_exp_slice,
  ae_exp_if,
  ae_exp_dot,
  ae_exp_lambda,
  ae_exp_td,
  ae_exp_named,
} ae_exp_t;
typedef enum { ae_meta_var, ae_meta_value, ae_meta_protect } ae_Exp_Meta;

struct AstString {
  m_str    data;
  uint16_t delim;
};

typedef enum {
  ae_prim_id,
  ae_prim_num,
  ae_prim_float,
  ae_prim_str,
  ae_prim_array,
  ae_prim_range,
  ae_prim_dict,
  ae_prim_hack,
  ae_prim_char,
  ae_prim_nil,
  ae_prim_interp,
  ae_prim_perform,
  ae_prim_locale
} ae_prim_t;

typedef struct {
  Variable   var;
  struct Type_ *type;
  Exp* args;
} Exp_Decl;

enum gwint_type {
  gwint_decimal,
  gwint_binary,
  gwint_hexa,
  gwint_octal
};

struct gwint {
  m_int num;
  enum gwint_type int_type;
};
#define GWINT(a, b) ((struct gwint){ .num = a, .int_type = b})

//! a gwint with a larger int type for parsing
struct yyint {
  long long num;
  enum gwint_type int_type;
};

typedef struct {
  struct Value_ *value;
  union prim_data {
    struct Symbol_  *var;
    struct gwint     gwint;
    m_float          fnum;
    m_str            chr;
    struct AstString string;
    Array_Sub        array;
    Range *          range;
    Exp*              exp;
  } d;
  ae_prim_t prim_type;
} Exp_Primary;

typedef struct Tmpl_ {
  SpecializedList *list;
  TmplArgList      *call;
} Tmpl;

ANN ANEW AST_NEW(Tmpl *, tmpl, SpecializedList*);
ANN ANEW AST_NEW(Tmpl *, tmpl_call, TmplArgList*);
ANN void free_tmpl(MemPool p, Tmpl *);
ANN static inline bool is_spread_tmpl(const Tmpl *tmpl) {
  const Specialized spec = specializedlist_at(tmpl->list, tmpl->list->len - 1);
  return !strcmp(s_name(spec.tag.sym), "...");
}


static inline bool tmpl_base(const Tmpl *a) {
  if (a && !a->call) return true;
  return false;
}

typedef struct Exp_Call_ {
  Exp*   func;
  Exp*   args;
  Tmpl *tmpl;
  Exp*   other;
  bool checked;
} Exp_Call;
typedef struct {
  Type_Decl *td;
  Exp*        exp;
} Exp_Cast;
typedef struct {
  Exp*    lhs;
  Exp*    rhs;
  Symbol op;
} Exp_Binary;
typedef struct {
  Symbol op;
  Exp*    exp;
} Exp_Postfix;
typedef struct {
  Exp* cond;
  Exp* if_exp;
  Exp* else_exp;
} Exp_If;
enum unary_type { unary_exp, unary_td, unary_code };
struct UnaryNew {
  Type_Decl *td;
  Exp* exp;
};
typedef struct {
  Symbol op;
  union {
    Exp*      exp;
    StmtList *code;
    struct UnaryNew ctor;
  };
  CaptureList *captures;
  enum unary_type unary_type;
} Exp_Unary;

typedef struct {
  Exp *exp;
  Tag  tag;
  bool is_arg;
} Exp_Named;

AST_NEW(Exp*, exp_named, Exp *exp, const Tag tag, const loc_t loc);

enum exp_state {
  exp_state_meta, // ae_meta_value
  exp_state_prot, // ae_meta_protect
  exp_state_addr,
  exp_state_use,
};

enum exp_comptime {
  comptime_no,
  comptime_yes,
  comptime_need
};

struct Exp {
  union exp_data {
    Exp_Postfix exp_post;
    Exp_Primary prim;
    Exp_Decl    exp_decl;
    Exp_Unary   exp_unary;
    Exp_Binary  exp_binary;
    Exp_Cast    exp_cast;
    Exp_Call    exp_call;
    Exp_If      exp_if;
    Exp_Dot     exp_dot;
    Exp_Array   exp_array;
    Exp_Slice   exp_slice;
    Exp_Lambda  exp_lambda;
    Type_Decl * exp_td;
    Exp_Named   exp_named;
  } d;
  struct Type_ *type;
  struct Type_ *cast_to;
  Exp*           next;
  Exp* ref;
  void *data;
  loc_t loc;
  ae_exp_t exp_type;
  int16_t  emit_var;
  enum exp_comptime comptime;
  bool poison;
  bool paren;
  bool is_call;
};
typedef Exp* E;
MK_VECTOR_TYPE(E, e)
ANN static inline int exp_getuse(const Exp* e) {
  return (e->emit_var & (1 << exp_state_use)) == (1 << exp_state_use);
}

ANN static inline void exp_setuse(Exp* e, const bool val) {
  if (val)
    e->emit_var |= 1 << exp_state_use;
  else
    e->emit_var &= ~(1 << exp_state_use);
}

ANN static inline int exp_getvar(const Exp* e) {
  return (e->emit_var & (1 << exp_state_addr)) == (1 << exp_state_addr);
}

ANN static inline void exp_setvar(Exp* e, const bool val) {
  if (val)
    e->emit_var |= 1 << exp_state_addr;
  else
    e->emit_var &= ~(1 << exp_state_addr);
}

ANN static inline int exp_getprot(const Exp* e) {
  return (e->emit_var & (1 << exp_state_prot)) == (1 << exp_state_prot);
}

ANN static inline void exp_setprot(Exp* e, const bool val) {
  if (val)
    e->emit_var |= 1 << exp_state_prot;
  else
    e->emit_var &= ~(1 << exp_state_prot);
}

ANN static inline int exp_getmeta(const Exp* e) {
  return (e->emit_var & (1 << exp_state_meta)) == (1 << exp_state_meta);
}

ANN static inline void exp_setmeta(Exp* e, const bool val) {
  if (val)
    e->emit_var |= 1 << exp_state_meta;
  else
    e->emit_var &= ~(1 << exp_state_meta);
}

ANN static inline m_str exp_access(const Exp* e) {
  if (exp_getmeta(e)) return (m_str) "non-mutable";
  return !exp_getprot(e) ? NULL : (m_str) "protected";
}

static inline Exp* exp_self(const void *data) {
  return container_of((char *)data, Exp, d);
}
static inline Exp_Primary *prim_self(const void *data) {
  return container_of((char *)data, Exp_Primary, d);
}
static inline Exp* prim_exp(const void *data) {
  const Exp_Primary *p = prim_self(data);
  return exp_self(p);
}
static inline loc_t prim_pos(const void *data) {
  const Exp* e = prim_exp(data);
  return e->loc;
}

ANEW ANN AST_NEW(Exp*, prim_id, struct Symbol_ *, const loc_t);
ANEW ANN2(1) AST_NEW(Exp*, prim_perform, struct Symbol_ *, const loc_t);
ANEW     AST_NEW(Exp*, prim_int, const m_uint, const loc_t);
ANEW     AST_NEW(Exp*, prim_float, const m_float, const loc_t);
ANEW ANN AST_NEW(Exp*, prim_string, const m_str, const uint16_t delim, const loc_t);
ANEW ANN AST_NEW(Exp*, prim_array, const Array_Sub, const loc_t);
ANEW ANN AST_NEW(Exp*, prim_range, Range *, const loc_t);
ANEW     AST_NEW(Exp*, prim_dict, Exp*, const loc_t);
ANEW     AST_NEW(Exp*, prim_hack, Exp*, const loc_t);
ANEW ANN AST_NEW(Exp*, prim_char, const m_str, const loc_t);
ANEW     AST_NEW(Exp*, prim_nil, const loc_t);
ANEW ANN AST_NEW(Exp*, prim_interp, Exp* exp, const loc_t);
ANEW ANN AST_NEW(Exp*, exp_decl, Type_Decl *, const Var_Decl*,
                 const loc_t);
ANEW ANN AST_NEW(Exp*, exp_binary, Exp*, const Symbol, Exp*,
                 const loc_t);
ANEW ANN AST_NEW(Exp*, exp_post, Exp*, const Symbol, const loc_t);
ANN2(1, 2)
ANEW     AST_NEW(Exp*, exp_call, Exp*, Exp* args, const loc_t);
ANEW ANN AST_NEW(Exp*, exp_cast, Type_Decl *, Exp*, const loc_t);
ANN2(1, 2, 4)
ANEW AST_NEW(Exp*, exp_if, Exp*, Exp*, Exp*, const loc_t);
ANEW ANN AST_NEW(Exp*, exp_dot, Exp*, const Tag tag,
                 const loc_t);
ANEW ANN AST_NEW(Exp*, exp_unary, const Symbol, Exp*, const loc_t);
ANEW ANN2(1,2,3) AST_NEW(Exp*, exp_unary2, const Symbol, Type_Decl *,
                 Exp* exp, const loc_t);
ANEW ANN AST_NEW(Exp*, exp_unary3, const Symbol, StmtList*,
                 const loc_t);
ANN void free_stmt_list(MemPool, StmtList*);
ANEW ANN AST_NEW(Exp*, exp_td, Type_Decl *, const loc_t);

static inline uint32_t exp_count(Exp* exp) {
  uint32_t n = 0;
  while(exp) {
    n++;
    exp = exp->next;
  }
  return n;
}

// TODO: rename to exp_take
static inline Exp* take_exp(Exp* exp, const uint32_t n) {
  Exp* e = exp;
  for (uint32_t i = 1; i < n; i++) CHECK_O((e = e->next));
  return e;
}

ANN void free_exp(MemPool p, Exp*);

typedef struct EnumValue {
  Tag          tag;
  struct gwint gwint;
  bool         set;
} EnumValue;

MK_VECTOR_TYPE(EnumValue, enumvalue)

typedef struct Enum_Def_ {
  Tag            tag;
  EnumValueList *list;
  struct Type_  *type;
  ae_flag        flag;
} *Enum_Def;
ANN2(1, 2)
ANEW     AST_NEW(Enum_Def, enum_def, EnumValueList*, struct Symbol_ *,
                 const loc_t);
ANN void free_enum_def(MemPool p, Enum_Def);

typedef struct Upvalues {
  Scope           values;
  struct Upvalues *parent;
} Upvalues;

typedef struct Func_Base_ {
  Type_Decl *     td;
  Tag             tag;
  ArgList        *args;
  struct Func_ *  func;
  struct Type_ *  ret_type;
  Tmpl *          tmpl;
  Upvalues       *values;
  struct Vector_  effects;
  ae_flag         flag;
  enum fbflag     fbflag;
} Func_Base;

FLAG_FUNC(Func_Base *, fb)

ANN2(1)
AST_NEW(Func_Base *, func_base, Type_Decl *, const Symbol, ArgList*,
        const ae_flag flag, const loc_t);

struct Fptr_Def_ {
  Func_Base *    base;
  Class_Def cdef;
};
ANEW ANN AST_NEW(Fptr_Def, fptr_def, Func_Base *);
ANN void free_fptr_def(MemPool p, Fptr_Def);

typedef struct Type_Def_ *Type_Def;
struct Type_Def_ {
  Type_Decl *   ext;
  struct Type_ *type;
  Tag           tag;
  Tmpl *        tmpl;
  Exp*           when;
  Func_Def      when_def;
  bool          distinct;
};
ANEW ANN AST_NEW(Type_Def, type_def, Type_Decl *, const Symbol, const loc_t);
ANN void free_type_def(MemPool p, Type_Def);

typedef struct Union_Def_ {
  VariableList *l;
  Tag           tag;
  struct Type_ *type;
  Tmpl *        tmpl;
  ae_flag       flag;
} * Union_Def;
ANEW ANN AST_NEW(Union_Def, union_def, VariableList*, const loc_t);
ANN void free_union_def(MemPool p, Union_Def);

struct Func_Def_ {
  Func_Base *base;
  union func_def_data {
    StmtList *code;
    void *dl_func_ptr;
  } d;
  CaptureList *captures;
  uint16_t stack_depth;
  uint16_t vt_index;
  bool builtin;
};
MK_VECTOR_TYPE(Func_Def, funcdef)
ANEW     AST_NEW(Func_Def, func_def, Func_Base *, StmtList*);
ANN void free_func_base(MemPool p, Func_Base *);
ANN void free_func_def(MemPool p, Func_Def);

typedef struct Trait_Def_ {
  Tag      tag;
  Ast      body;
  TagList *traits;
  ae_flag  flag;
} * Trait_Def;
ANN ANEW Trait_Def new_trait_def(MemPool p, const ae_flag, const Symbol,
                                 const Ast, const loc_t);
ANN void           free_trait_def(MemPool p, Trait_Def);

typedef struct Prim_Def_ {
  Tag tag;
  m_uint size;
  ae_flag flag;
} *Prim_Def;

AST_NEW(Prim_Def, prim_def, const Symbol name, const m_uint size, const loc_t, const ae_flag flag);
ANN void free_prim_def(MemPool p, Prim_Def);

static inline bool is_prim(const Exp* e) { return e->exp_type == ae_exp_primary; }

static inline bool is_prim_int(const Exp* e) {
  return (is_prim(e) && e->d.prim.prim_type == ae_prim_num);
}

static inline bool is_prim_float(const Exp* e) {
  return (is_prim(e) && e->d.prim.prim_type == ae_prim_float);
}

#define MK_SECTION(_type, _target, _data, _loc) (Section){ .section_type = ae_section_##_type, .d = { ._target = _data }, .loc = _loc }
typedef enum {
  ae_section_stmt,
  ae_section_func,
  ae_section_class,
  ae_section_trait,
  ae_section_extend,
  ae_section_enum,
  ae_section_union,
  ae_section_fptr,
  ae_section_type,
  ae_section_primitive
} ae_section_t;
typedef struct Section_ {
  union section_data {
    StmtList  *stmt_list;
    Trait_Def  trait_def;
    Class_Def  class_def;
    Extend_Def extend_def;
    Func_Def   func_def;
    Enum_Def   enum_def;
    Union_Def  union_def;
    Fptr_Def   fptr_def;
    Type_Def   type_def;
    Prim_Def   prim_def;
  } d;
  loc_t loc;
  ae_section_t section_type;
  bool poison;
} Section;
MK_VECTOR_TYPE(Section, section)
ANEW ANN AST_NEW(Section *, section_stmt_list, StmtList*);
ANEW ANN AST_NEW(Section *, section_func_def, const Func_Def);
ANEW ANN AST_NEW(Section *, section_class_def, const Class_Def);
ANEW ANN AST_NEW(Section *, section_trait_def, const Trait_Def);
ANEW ANN AST_NEW(Section *, section_extend_def, const Extend_Def);
ANEW ANN AST_NEW(Section *, section_enum_def, const Enum_Def);
ANEW ANN AST_NEW(Section *, section_union_def, const Union_Def);
ANEW ANN AST_NEW(Section *, section_fptr_def, const Fptr_Def);
ANEW ANN AST_NEW(Section *, section_type_def, const Type_Def);

struct Extend_Def_ {
  Type_Decl *    td;
  TagList       *traits;
  struct Type_  *type;
};

ANN2(1)
ANEW Extend_Def new_extend_def(MemPool p, Type_Decl *const, TagList*const);
ANN void        free_extend_def(MemPool p, Extend_Def);

enum cflag {
  cflag_none,
  cflag_struct,
};

struct Class_Def_ {
  struct Type_Def_  base;
  Ast               body;
  TagList          *traits;
  enum cflag        cflag;
  ae_flag           flag;
};

ANN static inline int cflag(const Class_Def c, const enum cflag flag) {
  return (c->cflag & flag) == flag;
}

ANN2(1)
ANEW Class_Def new_class_def(MemPool p, const ae_flag, const Tag,
                             Type_Decl *, const Ast);
ANN void free_class_def(MemPool p, Class_Def);

ANN void free_ast(MemPool p, Ast);
#endif
