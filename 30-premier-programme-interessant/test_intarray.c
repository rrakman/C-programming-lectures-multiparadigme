#include<stdio.h>
#include<stdlib.h>

#include"intarray.h"
#include"tools.h"

int	main (int argc, char *argv[])
{
  int i;
  for(i = 0;i < argc;i++)
  {
    printf("%s\n",argv[i]);
  }

  printf("%d\n",string_to_int("-4357"));

  /*
  printf("sum = %d\n",intarray_sum(toto) );
  printf("average = %f\n",intarray_average(toto) );
  printf("median = %f\n",intarray_median(toto) );
  */
	return EXIT_SUCCESS;
}
