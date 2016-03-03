CC = gcc
CFLAGS = -Wall -Werror -std=c99

all: hcompress linkedlist
	$(CC) -o hcompress hcompress.o linkedlist.o $(CFLAGS)

hcompress:
	$(CC) hcompress.c -c $(CFLAGS)

linkedlist:
	$(CC) linkedList.c -c $(CFLAGS)
