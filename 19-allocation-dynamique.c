#include<stdio.h>
#include<stdlib.h>

/* 18 eme cours : creation d'un module, partie 1.  */
/*
		procédure intarray_display(tab : tableau d'entiers)
 		VAR i : entier
		debut
			pour i allant de 0 à tab.taille faire :
			debut
			afficher (tab[i])
			fin
		fin
*/
void intarray_debugg(int* tab,int len)
{
	int i;
	printf("[ ");
	for (i = 0; i < (len - 1); i++)
	{
		printf("%d, ",tab[i]);
	}
	printf("%d.",tab[len - 1]);
	printf(" ]");
}

int	main (int argc, char *argv[])
{
	int n;

	printf("combien de cases voullez vous remplir : ");
	scanf("%d",&n );

	int* tab = malloc (n * sizeof (int));

	for (int i = 0; i < n ; i++)
	{
		tab[i] = 2 * i + 5;
	}

	intarray_debugg(tab,n);
	free (tab);
	return EXIT_SUCCESS;
}
