#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	int i;
	int tab[10];

	for (i = 0; i < 10; i++)
	{
		printf("entrer votre int numero %d : ",i+1 );
		scanf("%d",&tab[i] );
		printf("\n");
	}

	printf("Voici les entiers que vous avez entrer en votre ordre.\n" );
	for (i = 0; i < 10; i++)
	{
		if (i < 9) {
			printf("%d,",tab[i] );
		}
		else
			printf("%d.\n", tab[i]);
	}
	printf("Voici les entiers que vous avez entrer en ordre inverse.\n" );
	for (i = 9; i >= 0; i--)
	{
		if (i > 0 ) {
			printf("%d,",tab[i] );
		}
		else
			printf("%d.\n", tab[i]);
	}
	return EXIT_SUCCESS;
}
