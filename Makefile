CC=g++
CFLAGS=-c -Wall
LFLAGS=-o

all: program_name

program_name: program_name.o
	$(CC) $(LFLAGS) program_name program_name.o

program_name.o: program_name.cpp array.h
	$(CC) $(CFLAGS) program_name.cpp

clean:
	rm -f *.o program_name
