TARGET = guess
CC = gcc
IDIR = ../include
LIBDIR = ../lib 
LIBS = -lfunction
CFLAGS = -I$(IDIR) -L$(LIBDIR) $(LIBS)
DEPS = function.h
guess: main.c test.c 
	$(CC) -o $(TARGET) main.c $(CFLAGS)
	$(CC) -o test test.c $(CFLAGS)
	mv $(TARGET) ../bin
	mv test ../bin
	export LD_LIBRARy_PATH=../lib

#test: test.c function.c
#	$(CC) -o test test.c function.c $(CFLAGS)
clean:
	rm *.o *.s
