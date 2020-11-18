all: test1.o test2.o test3.o
	gcc test1.o test2.o test3.o -o all
test1.o: test1.c my.h
	gcc -c test1.c
test2.o: test2.c my.h
	gcc -c test2.c
test3.o: test3.c my.h
	gcc -c test3.c 

clean:
	rm *.o
