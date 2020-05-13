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
	for (i = 0; i < (len - 1); i++) {
		printf("%d, ",tab[i]);
	}
	printf("%d.",tab[len - 1]);
	printf(" ]");
}

int	main (int argc, char *argv[])
{
	int n;
	printf("entrer le nombre des tableau : ");
	scanf("%d",&n );
	int tab[n];
	for (int i = 0; i < n ; i++) {
		tab[i] = 9 * i +2;
	}

	intarray_debugg(tab,n);
	return EXIT_SUCCESS;
}
