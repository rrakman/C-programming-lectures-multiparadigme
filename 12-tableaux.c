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
	for (i = 0; i < 9; i++)
			printf("%d,",tab[i] );
	printf("%d\n",tab[9]);

	printf("Voici les entiers que vous avez entrer en ordre inverse.\n" );
	for (i = 9; i > 0; i--)
			printf("%d,", tab[i]);
	printf("%d\n",tab[0]);
	return EXIT_SUCCESS;
}
