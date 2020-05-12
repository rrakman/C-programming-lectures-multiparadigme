#include<stdio.h>
#include<stdlib.h>

int fact(int n)
			{
				int i,f=1;

				for (i = 1; i <= n; i++)
				{
					f *= i;
				}
				/*printf("%d\n",f );  *this s working*  */
				return f;
			}


int	main (int argc, char *argv[])
{
	int n;
	printf("entrer votre numero n : ");
	scanf("%d",&n );
	printf("%d! = %d \n",n,fact(n));

	return EXIT_SUCCESS;
}
