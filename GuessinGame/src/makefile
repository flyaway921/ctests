TARGET = guess
CC = gcc
IDIR = ../include
#why include ??? can be compiled without include xxx.h
CFLAGS = -I$(IDIR)
DEPS = function.h
guess: main.c test.c function.c
	$(CC) -o $(TARGET) main.c function.c $(CFLAGS)
	$(CC) -o test test.c function.c $(CFLAGS)

#test: test.c function.c
#	$(CC) -o test test.c function.c $(CFLAGS)
clean:
	rm guess test
