#include<stdio.h>
#include<stdlib.h>

// including header files.
#include"intarray.h"


int	main (int argc, char *argv[])
{

  printf("----------------------------------------------------------------------\n\n");


	int i,n;
	intarray toto = intarray_create(10);
	intarray_set (toto, 0, 141);
	intarray_set (toto, 1, 100);
	intarray_set (toto, 2, 77);
	intarray_set (toto, 3, 11);
	intarray_set (toto, 4, -42);
  intarray_set (toto, 5, -42);
  intarray_set (toto, 6, 55);
	intarray_debugg (toto);

	printf("\n\n----------------------------------------------------------------------\n\n\n");
  printf("sum = %d\n",intarray_sum(toto) );
  printf("average = %f\n",intarray_average(toto) );
  printf("median = %f\n",intarray_median(toto) );


  intarray_destroy(toto);
	return EXIT_SUCCESS;
}
