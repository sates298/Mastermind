#Makefile

all: main

main: main.o 
	clang -Wall --pedantic -lm -o main -std=c11 main.o ...

main.o: main.c
	clang -c main.c




clean:
	rm -f main *.o *~
