TARGET = guess
CC = gcc
IDIR = ../include
LIBDIR = ../lib 
LIBS = -lfunction
CFLAGS = -I$(IDIR) -L$(LIBDIR) $(LIBS)
DEPS = function.h
guess: main.c test.c 
	$(CC) -o ../bin/$(TARGET) main.c $(CFLAGS)
	$(CC) -o ../bin/test test.c $(CFLAGS)

#test: test.c function.c
#	$(CC) -o test test.c function.c $(CFLAGS)
clean:
	rm *.o *.s
	rm ../bin/*
