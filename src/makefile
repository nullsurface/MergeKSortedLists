CC = gcc
CFLAGS = -Wall 
OBJS = main.o list.o

all: mergeklists

mergeklists:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o mergeklists

main.o: main.c list.h
		$(CC) -c $(CFLAGS) main.c

list.o: list.c list.h
		$(CC) -c $(CFLAGS) list.c

clean:
		rm -rf *.o rn2Int
