GWION_PACKAGE=gwion_ast

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
endif

obj    := $(src:.c=.o)
obj += src/lexer.c src/parser.c

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

include/lexer.h src/lexer.c: src/gwion.l
	$(info generating lexer)
	@${LEX} --header-file=include/lexer.h -o $@ $<

include/parser.h src/parser.c: src/gwion.y
	$(info generating parser)
	@${YACC} --defines=include/parser.h -Wno-yacc -o $@ $<

clean:
	$(info cleaning)
	@rm -f src/*.o *.a src/*.gcno src/*.gcda
	@rm -f grammar/*.o tool/*.o

install: translation-install libgwion_ast.a
	$(info installing ${GWION_PACKAGE} in ${PREFIX}/lib)
	install libgwion_ast.a ${DESTDIR}/${PREFIX}/lib
	@mkdir -p ${DESTDIR}/${PREFIX}/include/gwion/ast
	@cp include/*.h ${DESTDIR}/${PREFIX}/include/gwion/ast

uninstall: translation-uninstall
	$(info uninstalling ${GWION_PACKAGE} from ${PREFIX})
	rm ${DESTDIR}/${PREFIX}/bin/lib${PACKAGE}.a
	rm -r ${DESTDIR}/${PREFIX}/include/gwion/ast

include $(wildcard .d/*.d)
include ${UTIL_DIR}/locale.mk
