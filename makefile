sources= $(shell ls ./scaner/*.c)
IncludePath= ./include
all:
	gcc $(sources) -I $(IncludePath) -g -o  mtscript.out
clear:
	rm *.out
 
