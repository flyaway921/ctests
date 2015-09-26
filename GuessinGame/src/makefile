TARGET = guess
CC = gcc
TEST = /usr/bin/test
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
	#This is a big problem!
	$(TEST) -f guess && rm guess
	$(TEST) -f test && rm test
	$(TEST) -f a.out && rm a.out
