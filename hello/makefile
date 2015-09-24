TARGET = hello
CC = gcc
CFLAGS = -I.
DEPS = function.h
OBJ = hello.o function.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -f $(TARGET) *.o
