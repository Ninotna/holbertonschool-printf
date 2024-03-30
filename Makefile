# compilation process

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
NAME = printf
SRC = test/main.c
SRC_FULL = test/main-full.c

all:
	$(CC) $(CFLAGS) *.c $(SRC) -o $(NAME)

full:
	$(CC) $(CFLAGS) *.c $(SRC_FULL) -o $(NAME)
