ifeq (,$(wildcard config.mk))
$(shell cp config.mk.orig config.mk)
endif
include config.mk

DEPDIR := .d
$(shell mkdir -p $(DEPDIR) >/dev/null)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$(@F:.o=.Td)

src := $(wildcard src/*.c)
obj := $(src:.c=.o)

CFLAGS += -I${UTIL_DIR}/include -Iinclude -D_GNU_SOURCE

all: libgwion_ast.a

libgwion_ast.a: ${obj}
	@$(info linking $@)
	@ar rcs $@ $^

parser:
	$(info generating parser)
	@${YACC} -o src/parser.c --defines=include/parser.h ly/gwion.y

lexer:
	$(info generating lexer)
	@${LEX}  -o src/lexer.c ly/gwion.l

generate_parser:
	$(info meta-generating parser)
	m4 m4/gwion.ym4 > ly/gwion.y;

generate_lexer:
	$(info meta-generating lexer)
	m4 m4/gwion.lm4 > ly/gwion.l;

.c.o: $(DEPDIR)/%.d
	$(info compile $(<:.c=))
	@${CC} $(DEPFLAGS) ${CFLAGS} -c $< -o $(<:.c=.o)
	@mv -f $(DEPDIR)/$(@F:.o=.Td) $(DEPDIR)/$(@F:.o=.d) && touch $@

clean:
	$(info cleaning)
	@rm -f src/*.o *.a

include $(wildcard .d/*.d)
