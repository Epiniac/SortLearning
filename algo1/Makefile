CC=g++
CFLAGS=-c -Wall
LFLAGS=-o

all: selection_sort

selection_sort: selection_sort.o
	$(CC) $(LFLAGS) selection_sort selection_sort.o

selection_sort.o: selection_sort.cpp array.h
	$(CC) $(CFLAGS) selection_sort.cpp

clean:
	rm -f *.o selection_sort
