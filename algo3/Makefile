CC=g++
CFLAGS=-c -Wall
LFLAGS=-o

all: insertion_sort

insertion_sort: insertion_sort.o
	$(CC) $(LFLAGS) insertion_sort insertion_sort.o

insertion_sort.o: insertion_sort.cpp array.h
	$(CC) $(CFLAGS) insertion_sort.cpp

clean:
	rm -f *.o insertion_sort
