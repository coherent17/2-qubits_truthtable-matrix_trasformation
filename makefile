all: main.c TruthTable.c function.h
	gcc -g -Wall main.c TruthTable.c -o test

clear:
	rm -f test