#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	int L, l;
	printf("entrer la longeur du rectangle : ");
	scanf("%d", &L);

	while(L <= 0)
	{
		printf("Anormalie détectée : la longeur doit etre strictement positive.\n");
		printf("entrer la longeur du rectangle : ");
		scanf("%d", &L);;
	}

	printf("Entrez la largeur du rectalngle : ");
	scanf("%d", &l);

	while(l <= 0)
	{
		printf("Anormalie détectée : la largeur doit etre strictement positive.\n");
		printf("Entrez la largeur du rectalngle : ");
		scanf("%d", &l);
	}


	if( L > l )
	{
		printf("Anormalie détectée : la largeur  %d est superieur a la longeur %d\n", L, l);
	}

	printf("L'air du rectangle est : %d\n", l * L);

	return EXIT_SUCCESS;
}
