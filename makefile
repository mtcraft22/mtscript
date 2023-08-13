sources = ./scaner/mtscript.c ./scaner/scanner.c ./scaner/token.c ./scaner/list.c
IncludePath= ./include
all:
	gcc $(sources) -I $(IncludePath) -g -o  mtscript.out
clear:
	rm *.out
 
