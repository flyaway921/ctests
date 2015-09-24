#Makefile by wcao
object:=main.o print.o
@echo ===================================
project:$(object)
@echo we link $(project) && cc -o project.output $(project)
%.o:%.c
$(printscreen)
@echo we compile $(patsubst %.o,%.c,$(object)) && cc -c main.c print.c $(patsubst %.o,%.c,$(object))
.PHONY:clean
clean:rm project.output *.o
