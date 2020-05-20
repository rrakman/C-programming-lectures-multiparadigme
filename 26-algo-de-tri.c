#include<stdio.h>
#include<stdlib.h>

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
void intarray_destroy(intarray tab);
int intarray_get(intarray tab,int index);
void intarray_set(intarray tab,int index,int value);
int intarray_len(intarray tab);

/*retourne la concatenation des 2 intarray t& et t2 */
intarray intarray_concat (intarray T1,intarray T2);

/* retourne la minimum valeur des cases du tab*/
int intarray_get_min(intarray tab);

/* retourne l'index de la minimum valeur des cases du tab*/
int intarray_get_index_of_min(intarray tab);

/* retourne l'index de la minimum valeur des cases du tab*/
int intarray_get_index_of_min_from(intarray tab,int index);

/* swipe between the value of 2 cases pointed by m and n	*/
intarray intarray_swap(int* m,int* n);


int intarray_get_index_of_min_from(intarray tab,int index)
{
	if ((index < 0) || (index >= tab.len))
	{
		printf("intarray_get_index_of_min_from error : please enter number between 0 and %d\n",tab.len );
		return 0;
	}

	int mini,i;
	int index_mini = index;

	mini = tab.data[index];

	for (i = index + 1; i <= tab.len - 1; i++)
	{
		if (tab.data[i] < mini)
		{
			mini = tab.data[i];
			index_mini = i;
		}
	}
	return index_mini;
}

int intarray_get_index_of_min(intarray tab)
{
	return intarray_get_index_of_min_from(tab,0);
}

int intarray_get_min(intarray tab)
{
	int index_mini = intarray_get_index_of_min(tab);
	return tab.data[index_mini];
}

intarray intarray_concat (intarray T1,intarray T2)
{
	intarray T = intarray_create (T1.len + T2.len);
	int i;
	int j=0;

	for (i = 0; i < T1.len; i++)
	{
		T.data[j] = T1.data[i];
		j++;
	}
	for (i = 0; i < T.len -1 ; i++)
	{
		T.data[j] = T2.data[i];
		j++;
	}
	return T;
}

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

void intarray_set(intarray tab,int index,int value)
{
	if ((index < 0) || index > (tab.len - 1	))
	{
		printf("intarrray_set : index[%d] invalide.\nVous devez entrer un index entre 0 et %d .\n",index ,tab.len - 1 );
		return;
	}
	tab.data[index] = value;
}

int intarray_get(intarray tab,int index)
{
	if ((index < 0) || index > (tab.len - 1	))
	{
		printf("intarrray_get : index[%d] invalide.\nVous devez entrer un index entre 0 et %d .\n",index ,tab.len - 1 );
		return -1;
	}
	return tab.data[index];
}



void intarray_destroy(intarray tab)
{
	free(tab.data);
}

int intarray_len(intarray tab)
{
		return tab.len;
}


/*
	procedure triparselection(tab : tableau d'entiers)
	debut
	pour i allant de 0 à tab.taille - 2
		debut
			min_indice = intarray_get_index_of_min_from(tab,i)
			echanger(tab,i,min_indice)
		fin
	fin
*/
intarray intarray_sort1(intarray tab)
{
	//this is some tests. to see how the algo works uncomment them!
	//intarray_debugg(tab);
	//printf("\n" );
	int i,min_indice,tmp;
	for (i = 0; i <= tab.len - 2; i++)
	{
		min_indice = intarray_get_index_of_min_from(tab,i);
		intarray_swap(tab.data + i,tab.data + min_indice);
		//intarray_debugg(tab);
		//printf("\n" );
	}

}

intarray intarray_swap(int* m,int* n)
{
		int tmp = *m;
		*m = *n;
		*n = tmp;
}

int	main (int argc, char *argv[])
{

  printf("----------------------------------------------------------------------\n\n");


	int i,n;
	intarray toto = intarray_create(8);
	intarray_set (toto, 0, 2);
	intarray_set (toto, 1, 5);
	intarray_set (toto, 2, 8);
	intarray_set (toto, 3, 11);
	intarray_set (toto, 4, -42);
	intarray_set (toto, 5, 17);
	intarray_set (toto, 7, -999);
	intarray_debugg (toto);
	printf ("\n\n");
	intarray_sort1 (toto);
	intarray_debugg (toto);

	printf("\n\n----------------------------------------------------------------------\n\n\n");
	intarray_destroy(toto);
	return EXIT_SUCCESS;
}
