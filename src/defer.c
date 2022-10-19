#include "gwion_util.h"
#include "gwion_ast.h"

ANN static bool defer_stmt_list(Stmt_List list);
ANN bool defer_stmt(Stmt stmt);

#define CHECK_B(a) if(!(a)) return false;

ANN static inline bool defer_stmt_match(const Stmt_Match stmt) {
  if (stmt->where) CHECK_B(defer_stmt(stmt->where));
  Stmt_List l = stmt->list;
  for(m_uint i = 0; i < l->len; i++) {
    const Stmt s = mp_vector_at(l, struct Stmt_, i);
    CHECK_B(defer_stmt_list(s->d.stmt_match.list));
  }
  return true;
}

ANN static inline bool defer_stmt_try(const Stmt_Try stmt) {
  CHECK_B(defer_stmt(stmt->stmt));
  Handler_List handlers = stmt->handler;
  for(uint32_t i = 0; i < handlers->len; i++) {
    Handler * handler = mp_vector_at(handlers, Handler, i);
    CHECK_B(defer_stmt(handler->stmt));
  }
  return true;
}

ANN static inline bool defer_stmt_flow(const Stmt_Flow stmt) {
  return defer_stmt(stmt->body);
}

ANN static inline bool defer_stmt_for(const Stmt_For stmt) {
  CHECK_B(defer_stmt(stmt->c1));
  CHECK_B(defer_stmt(stmt->c2));
  return defer_stmt(stmt->body);
}

ANN static inline bool defer_stmt_each(const Stmt_Each stmt) {
  return defer_stmt(stmt->body);
}

ANN static inline bool defer_stmt_loop(const Stmt_Loop stmt) {
  return defer_stmt(stmt->body);
}

ANN static inline bool defer_stmt_if(const Stmt_If stmt) {
  CHECK_B(defer_stmt(stmt->if_body));
  if(stmt->else_body)CHECK_B(defer_stmt(stmt->else_body));
  return true;
}

ANN static inline bool defer_stmt_code(const Stmt_Code stmt) {
  if (stmt->stmt_list) { CHECK_B(defer_stmt_list(stmt->stmt_list)); }
  return true;
}

#define defer_stmt_while    defer_stmt_flow
#define defer_stmt_until    defer_stmt_flow

static bool defer_func(void* arg NUSED) { return true; }
#define defer_stmt_continue defer_func
#define defer_stmt_break    defer_func
#define defer_stmt_retry    defer_func
#define defer_stmt_pp       defer_func
#define defer_stmt_spread   defer_func
#define defer_stmt_exp      defer_func

ANN static bool defer_stmt_return(const Stmt_Exp stmt NUSED) {
  return false;
}

ANN static bool defer_stmt_defer(const Stmt_Defer stmt) {
  return defer_stmt(stmt->stmt);
}

typedef bool (*_defer_stmt_func)(union stmt_data *);
const _defer_stmt_func defer_stmt_func[] = {
      (_defer_stmt_func)defer_stmt_exp,                                \
      (_defer_stmt_func)defer_stmt_while,                              \
      (_defer_stmt_func)defer_stmt_until,                              \
      (_defer_stmt_func)defer_stmt_for,                                \
      (_defer_stmt_func)defer_stmt_each,                               \
      (_defer_stmt_func)defer_stmt_loop,                               \
      (_defer_stmt_func)defer_stmt_if,                                 \
      (_defer_stmt_func)defer_stmt_code,                               \
      (_defer_stmt_func)defer_stmt_break,                              \
      (_defer_stmt_func)defer_stmt_continue,                           \
      (_defer_stmt_func)defer_stmt_return,                             \
      (_defer_stmt_func)defer_stmt_try,                                \
      (_defer_stmt_func)defer_stmt_retry,                              \
      (_defer_stmt_func)defer_stmt_match,                              \
      (_defer_stmt_func)defer_stmt_pp,                                 \
      (_defer_stmt_func)defer_stmt_defer,                              \
      (_defer_stmt_func)defer_stmt_spread};

ANN bool defer_stmt(const Stmt stmt) {
  return defer_stmt_func[stmt->stmt_type](&stmt->d);
}

ANN static bool defer_stmt_list(Stmt_List l) {
  for(m_uint i = 0; i < l->len; i++) {
    const Stmt s = mp_vector_at(l, struct Stmt_, i);
    CHECK_B(defer_stmt(s));
  }
  return true;
}
