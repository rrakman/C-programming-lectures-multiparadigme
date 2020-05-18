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

int	main (int argc, char *argv[])
{
	intarray toto = intarray_create(6);
	intarray_set(toto,1,2);
	intarray_set(toto,2,4);
	intarray_set(toto,3,6);
	intarray_set(toto,4,800);
	intarray_set(toto,5,-900);
	intarray_set(toto,0,500);
	intarray_debugg(toto);
	printf("\n");
	printf("intarray_get return us this : %d\n", intarray_get(toto,4));
	printf("tab toto length is : %d cases\n",intarray_len(toto));
	intarray_destroy(toto);
	return EXIT_SUCCESS;
}
