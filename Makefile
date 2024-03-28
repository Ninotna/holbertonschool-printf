# compilation process

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
NAME = printf
SRC_ALL = tests/main.c

all:
	$(CC) $(CFLAGS) *.c $(SRC_ALL) -o $(NAME)