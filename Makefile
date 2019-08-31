GWION_PACKAGE=gwion_ast
CFLAGS += -DGWION_PACKAGE='"${GWION_PACKAGE}"'

ifeq (,$(wildcard config.mk))
$(shell cp config.mk.orig config.mk)
endif
include config.mk
include ${UTIL_DIR}/config.mk

src := $(wildcard src/*.c)

ifeq (${BUILD_ON_WINDOWS}, 1)
ifeq (${CC}, clang)
CFLAGS += -DYY_NO_UNISTD_H
endif
CFLAGS+=-DBUILD_ON_WINDOWS=1 -D_XOPEN_SOURCE=700
endif

obj := $(src:.c=.o)

CFLAGS += -Iinclude -D_GNU_SOURCE

# (parser) internationalization (linux only for now)
ifeq ($(shell uname), Linux)
-DYYENABLE_NLS=1 -DENABLE_NLS
endif

all: options-show libgwion_ast.a

options-show:
	@$(call _options)

libgwion_ast.a: ${obj}
	@$(info linking $@)
	@${AR} ${AR_OPT}

parser: ly/gwion.y
	$(info generating parser)
	@${YACC} -o src/parser.c --defines=include/parser.h ly/gwion.y -Wno-yacc

lexer: ly/gwion.l
	$(info generating lexer)
	@${LEX} -o src/lexer.c ly/gwion.l

ly/gwion.y: m4/gwion.ym4
	$(info meta-generating parser)
	m4 m4/gwion.ym4 > ly/gwion.y;

ly/gwion.l: m4/gwion.lm4
	$(info meta-generating lexer)
	m4 m4/gwion.lm4 > ly/gwion.l;

clean:
	$(info cleaning)
	@rm -f src/*.o *.a src/*.gcno src/*.gcda

include $(wildcard .d/*.d)
include ${UTIL_DIR}/intl.mk
