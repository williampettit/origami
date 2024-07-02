CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = origami.c chunk.c debug.c memory.c value.c
HEADERS = chunk.h common.h debug.h memory.h value.h version.h
OBJS = $(SRCS:.c=.o)

all: origami

origami: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) origami

.PHONY: all clean
