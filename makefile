sources= $(shell ls ./src/*.cpp)
IncludePath= ./include
all:
	gcc -o mtscript.out $(sources) -I $(IncludePath) 
clear:
	rm *.out
 
