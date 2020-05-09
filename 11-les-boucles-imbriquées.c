#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
/*using for loop for a multiplication table*/

	int i,j,k;
	for(i = 2;i <= 12;i++)
	{
		printf("Table de multiplication de %d :\n\n",i );

		for ( j = 1; j <= 12; j++)
		{
			k=j*i;
			printf("%d * %d = %d \n",i,j,k );
		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
