TARGET?=
GWION_PACKAGE=gwion_ast

ifneq (,$(findstring -DGWION_PACKAGE,$(MAKEFLAGS)))
CFLAGS += -DGWION_PACKAGE='"${GWION_PACKAGE}"'
endif

ifeq (,$(wildcard config.mk))
$(shell cp config.mk.orig config.mk)
endif
include config.mk
include ${UTIL_DIR}/config.mk

src    := include/parser.h include/lexer.h $(wildcard src/*.c) src/parser.c src/lexer.c

ifeq (${BUILD_ON_WINDOWS}, 1)
ifeq (${CC}, clang)
CFLAGS += -DYY_NO_UNISTD_H
endif
CFLAGS+=-DBUILD_ON_WINDOWS=1 -D_XOPEN_SOURCE=700
endif

obj    := $(src:.c=.o)

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
	${AR} ${AR_OPT}

_${TARGET}lib: ${TARGET}
	@CFLAGS="${CFLAGS} -I${TARGET}" make -s libgwion_${TARGET}.a

include/lexer.h: src/lexer.c
src/lexer.c: src/gwion.l
	$(info generating lexer)
	@${LEX} --header-file=include/lexer.h -o $@ $<

include/parser.h: src/parser.c
src/parser.c: src/gwion.y
	$(info generating parser)
	@${YACC} --defines=src/parser.h -Wno-yacc -o $@ $<

clean:
	$(info cleaning)
	@rm -f src/*.o *.a src/*.gcno src/*.gcda
	@rm -f grammar/*.o tool/*.o

install: translation-install libgwion_ast.a
	$(info installing ${GWION_PACKAGE} in ${PREFIX})
	install libgwion_ast.a ${DESTDIR}/${PREFIX}/bin
	@mkdir -p ${DESTDIR}/${PREFIX}/include/gwion/ast
	@cp include/*.h ${DESTDIR}/${PREFIX}/include/gwion/ast

uninstall: translation-uninstall
	$(info uninstalling ${GWION_PACKAGE} from ${PREFIX})
	rm ${DESTDIR}/${PREFIX}/bin/lib${PACKAGE}.a

include $(wildcard .d/*.d)
include ${UTIL_DIR}/intl.mk
