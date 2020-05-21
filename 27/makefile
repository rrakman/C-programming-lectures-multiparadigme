toto.out : test_intarray.o intarray.o
	gcc test_intarray.o intarray.o -o toto.out

intarray.o : intarray.c intarray.h
	gcc -c intarray.c

test_intarray.o : test_intarray.c intarray.h
	gcc -c test_intarray.c
