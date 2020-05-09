#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	char* a = "Bonjour";
	/*         0123456       */

	printf("%c \n",*(a +6));
	printf("%c \n",a[6] );

	/* using for loop for a multiplication table */
	int i;
	for(i = 1;i <= 10;i++)
	{
		printf("%d ",i * 9 );
	}
	return EXIT_SUCCESS;
}
