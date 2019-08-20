all: insertion_sort clean
insertion_sort: insertion_sort.o main.o
	gcc -o insertion_sort insertion_sort.o main.o
insertion_sort.o: insertion_sort.c
	gcc -o insertion_sort.o -c insertion_sort.c -W -Wall -ansi -pedantic -std=gnu11
main.o: main.c insertion_sort.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic -std=gnu11
clean:
	rm -rf *.o
mrproper: clean
	rm -rf insertion_sort