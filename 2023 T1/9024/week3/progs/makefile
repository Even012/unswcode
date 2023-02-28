binary : binary.o stack.o
	gcc -o binary binary.o stack.o

binary.o : binary.c stack.h
	gcc -Wall -Werror -std=c11 -c binary.c

stack.o : stack.c stack.h
	gcc -Wall -Werror -std=c11 -c stack.c