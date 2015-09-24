TARGET = hello
CC = gcc
#include dir
IDIR = ../include
# obj dir
ODIR = obj
#lib dir
LDIR = ../lib
LIBS = -lm
CFLAGS = -I$(IDIR)
_DEPS = function.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
_OBJ = hello.o function.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f $(TARGET) $(ODIR)/*.o *~ $(DIR)/*~
