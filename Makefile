CFLAGS= -g -Wall -Werror -Wextra -pedantic -std=c11

% : %.c
	@gcc $(CFLAGS) -o $@ $<
	@./$@
	@rm $@

all:
	@for i in *.c; do \
		echo "$$i:"; \
		make -s $${i%.*}; \
		echo ""; \
	done
