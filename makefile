CC = gcc
CFLAGS = -Wall -Werror -std=c99

all: hcompress linkedlist

hcompress:
	$(CC) hcompress.c -o hcompress $(CFLAGS)

linkedlist:
	$(CC) linkedList.c -c $(CFLAGS)
