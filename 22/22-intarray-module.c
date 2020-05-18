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
typedef struct intarray intarray;
struct intarray {
	int* data;
	int len;
};

/* Prototypes des fonctions de manipulations des intarray*/
void positive (intarray tab);
int int_array_search (intarray tab,int n);
int int_array_nb_occurences (intarray tab,int n);
void intarray_debugg(intarray tab);
intarray intarray_create (int len);





intarray intarray_create (int len) {
	intarray tab;
	int i;
	tab.len =len;
	tab.data = malloc(len * sizeof(int));
	for (i = 0; i < len; i++) {
		tab.data[i] = 0;
	}
	return tab;
}





int int_array_nb_occurences (intarray tab,int n)
{
	int i=0;
	int num=0;

	while (i <= tab.len)
	{
		if (tab.data[i] == n)
		{
			num++;
		}
		i++;
	}
	return num;

}
int int_array_search (intarray tab,int n)
{
	int i=0;
	while (i <= tab.len)
	{
		if (tab.data[i] == n)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

void positive (intarray tab)
{
	int i;
	printf("[ ");
	for (i = 0; i < (tab.len - 1); i++)
	{
		if (tab.data[i] >= 0)
		{
			printf("%d, ",tab.data[i]);
		}
	}
	if (tab.data[i] >= 0)
	{
	printf("%d",tab.data[tab.len - 1]);
	}
	printf("]\n");
}

void intarray_debugg(intarray tab)
{
	int i;
	printf("[ ");
	for (i = 0; i < (tab.len - 1); i++)
	{
		printf("%d, ",tab.data[i]);
	}
	printf("%d.",tab.data[tab.len - 1]);
	printf(" ]");
}

int	main (int argc, char *argv[])
{
	intarray toto = intarray_create(10);
	toto.data[5] = -13;
	intarray_debugg(toto);


	free(toto.data);
	return EXIT_SUCCESS;
}
