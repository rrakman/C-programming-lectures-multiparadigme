#include<stdio.h>
#include<stdlib.h>

#include"intarray.h"
#include"tools.h"

int	main (int argc, char *argv[])
{
	intarray tab = intarray_create (argc - 1);
	int real_len_of_tab = 0;
	int i;
	for (i = 1; i < argc; i++)
	{
		int ok;
		int n = safe_string_to_int(argv[i],&ok);
		if(ok)
		{
			intarray_set(tab,real_len_of_tab,n);
			real_len_of_tab++;
		}
		else
			printf("\nwarning : \"%s\" this is not valid numbers , we ignore it.\n",argv[i] );
	}

	tab.len = real_len_of_tab; // bidouillage degeu (stoopid) we gonna learn how to use multi dimentions arrays and make a better solution.
	printf("\nyou've entered the numbers down here : \n");
	intarray_debugg(tab);
	int mini = intarray_get_min(tab);
	int maxi = intarray_get_maxi(tab);

	printf("\n\nhere are some stats about that table of ints: \n");
  printf("sum = %d\n",intarray_sum(tab) );
  printf("average = %f\n",intarray_average(tab) );
	printf("median = %f\n",intarray_median(tab) );
	printf("min = %d\n",mini);
	printf("maxi = %d\n",maxi);
	printf("Etendue= %d\n",maxi - mini);


	intarray_destroy(tab);
	return EXIT_SUCCESS;
}
