#!/bin/bash
[ $# -lt 2 ] && {
  echo "usage: $0 <structure name (followed by *)> AstDesc"
  exit 1
}

gtype="$1"
section=""
return_type="void"

####################
# utility function #
####################
cname() {
  echo "$1" | tr '[:upper:]' '[:lower:]' | sed 's/\*//g' | sed 's/ //g'
}

dname() {
  echo "$1" | tr '[:lower:]' '[:upper:]'
}

# section name
sname() {
  if [ "$1" ]
  then echo "$(cname "$1")_"
  fi
}

ctype() {
  name="$1"
  if [ "${name: -1}" = "*" ]
  then echo "${name:0:-1} *"
  else echo "$name "
  fi
}

####################
# common variables #
####################
gname="$(cname "$gtype")"


member() {
  echo "$@" | while read -r type name access
  do
    if [ "${type:0:1}" = "=" ]
    then
       type=$(cname "${type:1}")
       echo "  ${gname}_${s}$type(a, ${access}b);"
      continue
    fi
    if [ "${type:0:1}" = "&" ]
    then
       type=$(cname "${type:1}")
       echo "  ${gname}_${s}$type(a, ${access}b->$name);"
      continue
    fi
    if [ "${type:0:1}" = "!" ]
    then
       type=${type:1}
       echo "  ${gname}_$(cname "$type")_func[b->${type}_type](a, ${access}b->d);"
      continue
    fi
    if [ "${type:0:1}" = "?" ]
    then
      type=${type:1}
      opt=1
    fi
    type=$(cname "$type")
    if [ "$name" ]
    then n=$(cname "$name")
    else n="$type"
    fi
    if [ "$opt" ]
    then
      printf "  if(b->%s)\n  " "$n"
    fi
    echo  "  ${gname}_${s}${type}(a, ${access}b->${n});"
  done
}

struct() {
  echo "$@" | while read -r type name access
  do
    s=$(sname "$section")
    if [ "$name" ]
    then n=$(cname "$name")
    else n=$(cname "$type")
    fi
    echo  "ANN $return_type ${gname}_${s}${n}($(ctype "$gtype")a, $(ctype "$type")b);"  >> "${gname}.h"
    echo  "ANN $return_type ${gname}_${s}${n}($(ctype "$gtype")a, $(ctype "$type")b) {"
  done
}

vector() {
  type=$(echo "$1" | cut -d: -f1)
  elem=$(echo "$1" | cut -d: -f2)
  etype=$(echo "$elem" | tr '*' ' ')
  access=$(echo "$1" | cut -d: -f3)
  n=$(cname "$type")
  echo  "ANN $return_type ${gname}_${n}($(ctype "$gtype")a, $(ctype "$type")b) {"
  echo "  for(uint32_t i = 0; i < b->len; i++) {"
  echo "    $elem c = ${access}mp_vector_at(b, $etype, i);"
  echo "    ${gname}_$(cname $elem)(a, c);"
  echo "  }"
}

decl() {
  echo "$@" | while read -r type
  do
    echo "DECL_$(dname "$type")_FUNC($gname, $return_type, $gtype)"
  done
}

cat << EOF > "${gname}.h"
typedef struct {

} ${gtype/\*/};

EOF

cat << EOF > "${gname}.c"
#include "gwion_util.h"
#include "gwion_ast.h"
#include "${gname}.h"

EOF

while IFS= read -r line
do
  case "${line:0:1}" in
  "#");;
  "" ) printf "}\n\n";;
  "!" ) decl "${line:1}";;
  ":") section="${line:1}";;
  " ") member "$line";;
  "$") vector "${line:1}";;
  *) struct "$line";;
  esac
done < "$2" >> "${gname}.c"

cat << EOF >> "${gname}.c"
int main(int argc, char **argv) {
  MemPool mp = mempool_ini(sizeof(struct Exp_));
  SymTable* st = new_symbol_table(mp, 65347);
  struct PPArg_ ppa = {};
  ${gtype/\*/} ${gname} = {};
  pparg_ini(mp, &ppa);
  for(int i = 1; i < argc; ++i) {
    FILE* file = fopen(argv[i], "r");
    if(!file)
      continue;
    struct AstGetter_ arg = { argv[i], file, st , .ppa=&ppa };
    const Ast ast = parse(&arg);
    if(ast) {
      ${gname}_ast(&${gname}, ast);
      free_ast(mp, ast);
    }
    fclose(file);
  }
  pparg_end(&ppa);
  free_symbols(st);
  mempool_end(mp);
}
EOF
