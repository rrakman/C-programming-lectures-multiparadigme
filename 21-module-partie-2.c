#include<stdio.h>
#include<stdlib.h>
/*la video numero 20 etais apropos de HTML et c'est hors serie lol */
/*
	Trois fonctions :
			1 - une qui affiche tous les numero positive ou nul d'un tableau;
			2 - une fonction qui cherche un entier dans le tableau:
								retourne 1 si il le trouve
								retourne 0 si l entier est pas dans le tableu
			3 - une fonction qui compte le nombre d'occurence(s) d un entier;

			AND YESSSS I DID MAKE ALL THOSE FUNCTIONS WiTHOUT WATCHING THE VIDEO thanks to @khafni again for the support
*/
void positive (int* tab,int len);
int int_array_search (int* tab,int len,int n);
int int_array_nb_occurences (int *tab,int len,int n);

int int_array_nb_occurences (int *tab,int len,int n)
{
	int i=0;
	int num=0;

	while (i <= len)
	{
		if (tab[i] == n)
		{
			num++;
		}
		i++;
	}
	return num;

}
int int_array_search (int* tab,int len,int n)
{
	int i=0;
	while (i <= len)
	{
		if (tab[i] == n)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

void positive (int* tab,int len)
{
	int i;
	printf("[ ");
	for (i = 0; i < (len - 1); i++)
	{
		if (tab[i] >= 0)
		{
			printf("%d, ",tab[i]);
		}
	}
	if (tab[i] >= 0)
	{
	printf("%d",tab[len - 1]);
	}
	printf("]\n");
}

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
		scanf("%d",&(tab[i]) );
	}

	intarray_debugg(tab,n);
	printf("\n");
	positive(tab,n);


	if(int_array_search(tab,n,3) == 1)
	{
			printf("your number is found !\n");
	}
	else
	{
		printf("ton numero nest pas dans le tableu\n" );
	}
	
	printf("le nombre d'occurence du num 3 : %d\n",int_array_nb_occurences(tab,n,3));

	free (tab);
	return EXIT_SUCCESS;
}
