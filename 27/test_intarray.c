#include<stdio.h>
#include<stdlib.h>

// including header files.
#include"intarray.h"


int	main (int argc, char *argv[])
{

  printf("----------------------------------------------------------------------\n\n");


	int i,n;
	intarray toto = intarray_create(8);
	intarray_set (toto, 0, 2);
	intarray_set (toto, 1, 5);
	intarray_set (toto, 2, 8);
	intarray_set (toto, 3, 11);
	intarray_set (toto, 4, -42);
	intarray_set (toto, 5, 17);
	intarray_set (toto, 7, -999);
	intarray_debugg (toto);
	printf ("\n\n");
	intarray_sort1 (toto);
	intarray_debugg (toto);

	printf("\n\n----------------------------------------------------------------------\n\n\n");
	intarray_destroy(toto);
	return EXIT_SUCCESS;
}
