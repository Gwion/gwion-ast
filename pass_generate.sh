#!/bin/sh
scriptdir=`dirname "${BASH_SOURCE[0]}"`

modify() {
  final=$(cat "$1" |
  sed "s/XXX/$2/g" |
  sed "s/xxx/$3/g")

  if [ -z "$4" ]; then
    echo "$final" | sed "s/ mod//g"
  else 
    echo "$final" | 
      sed "s/, c)/, \&c)/g"  |
      sed "s/\bmod\b/$4/g"  |
      sed "s/_ptr_at/_at/g" |
      sed "s/\*c = /c = /"  |
      sed "s/c->/c./g"
  fi
}

modify "$scriptdir/pass/xxx.c" $1 $2 $3
#modify "$scriptdir/pass/xxx.h" $1 $2 $3
