SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))
CFLAGS=-g
LDFLAGS=-pthread
all: $(PROGS)
%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
clean:
	rm -f $(PROGS)
