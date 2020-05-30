#include<stdio.h>
#include<stdlib.h>

int lire_dimension(char* nom)
{
	int n;
	printf("Entrez %s du rectangle : ", nom);
	scanf("%d", &n);
	while(n <= 0)
	{
		printf("Anormalie détectée : %s doit etre strictement positive.\n",nom);
		printf("Entrez %s du rectalngle : ",nom);
		scanf("%d", &n);
	}
	return n;
}

int	main (int argc, char *argv[])
{
	int L, l;

	L = lire_dimension("la longeur");
	l = lire_dimension("la largeur");

	if( L > l )
	{
		printf("Anormalie détectée : la longeur  %d est superieur a la largeur %d\n", L, l);
	}

	printf("L'air du rectangle est : %d\n", L* l);

	return EXIT_SUCCESS;
}
