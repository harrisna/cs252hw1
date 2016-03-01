CC = gcc
CFLAGS = -Wall -Werror -std=c99

all:
	$(CC) hcompress.c -o hcompress $(CFLAGS)
