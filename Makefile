VERSIONS=a b c d
CFLAGS= -g -Wall -Werror -Wextra -pedantic -std=c11

% : %.c
	@gcc $(CFLAGS) -o $@ $<
	@./$@
	@rm $@

all:
	@for v in $(VERSIONS); do \
		for i in $$(seq 1 10); do \
			echo "$$v$$i.c:"; \
			make -s $$v$$i; \
			echo ""; \
		done; \
	done

