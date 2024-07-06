
SRCS=$(wildcard *.c)
TRGT=$(SRCS:.c=.out)


all: ${TRGT}

%.out:%.c
	gcc $^ -o $@
clean:
	rm ${TRGT}
