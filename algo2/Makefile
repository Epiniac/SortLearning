CC=g++
CFLAGS=-c -Wall
LFLAGS=-o

all: bubble_sort

bubble_sort: bubble_sort.o
	$(CC) $(LFLAGS) bubble_sort bubble_sort.o

bubble_sort.o: bubble_sort.cpp array.h
	$(CC) $(CFLAGS) bubble_sort.cpp

clean:
	rm -f *.o bubble_sort
