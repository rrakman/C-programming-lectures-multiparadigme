all : stats.out toto.out
	echo "compilation succed yey !"

stats.out : stats.o intarray.o tools.o
	gcc stats.o intarray.o tools.o -o stats.out

toto.out : test_intarray.o intarray.o tools.o
	gcc test_intarray.o intarray.o tools.o -o toto.out

intarray.o : intarray.c intarray.h
	gcc -c intarray.c

test_intarray.o : test_intarray.c intarray.h tools.h
	gcc -c test_intarray.c

tools.o : tools.c tools.h
	gcc -c tools.c
