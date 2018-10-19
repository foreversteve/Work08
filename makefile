all: sieve.o main.o
	gcc sieve.o main.o
sieve.o: sieve.h sieve.c
	gcc -c sieve.c
main.o: main.c
	gcc -c main.c
run:
	./a.out