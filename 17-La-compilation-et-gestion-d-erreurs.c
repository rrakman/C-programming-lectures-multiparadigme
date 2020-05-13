/* if you wonder why file 16.c dosent exists cause the lecture
 is how to install cygwin for windows and i use linux so :p */

#include<stdio.h>
#include<stdlib.h>
/*#include "assert.h"  this library give us a function called assert and it helps us find errors in our code*/



int fact(int n)
			{
				if( (n<0) || (n>12))
				{
					printf("nous nous pouvons pas calculer la valeur de %d\n",n);
					return -1;
				}
				int i,f=1;

				for (i = 1; i <= n; i++)
				{
					f *= i;
				}
				return f;
			}


int	main (int argc, char *argv[])
{
	int n,rslt;
	printf("entrer votre numero n : ");
	scanf("%d",&n );
	if(fact(n) != -1)
	{
		printf("%d! = %d \n",n,fact(n));
	}
	return EXIT_SUCCESS;
}
