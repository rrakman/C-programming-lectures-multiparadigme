#include<stdio.h>
#include<stdlib.h>

#include"intarray.h"
#include"tools.h"

//this gets maxi of an intarray;
int intarray_get_index_of_maxi_from(intarray tab,int index)
{
	if ((index < 0) || (index >= tab.len))
	{
		printf("intarray_get_index_of_maxi_from error : please enter number between 0 and %d\n",tab.len );
		return 0;
	}

	int maxi,i;
	int index_maxi = index;

	maxi = tab.data[index];

	for (i = index + 1; i <= tab.len - 1; i++)
	{
		if (tab.data[i] > maxi)
		{
			maxi = tab.data[i];
			index_maxi = i;
		}
	}
	return index_maxi;
}

int intarray_get_index_of_maxi(intarray tab)
{
	return intarray_get_index_of_maxi_from(tab,0);
}

int intarray_get_maxi(intarray tab)
{
	int index_maxi = intarray_get_index_of_maxi(tab);
	return tab.data[index_maxi];
}

//this gets mini of an intarray;

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


intarray intarray_sort1(intarray tab)
{
	int i,min_indice,tmp;
	for (i = 0; i <= tab.len - 2; i++)
	{
		min_indice = intarray_get_index_of_min_from(tab,i);
		int_swap(tab.data + i,tab.data + min_indice);
	}
}

int intarray_sum(intarray tab)
{
	if (tab.len <= 0)
	{
		printf("error :ta taille du tableu est <= 0.\n");
		return -1;
	}
	int sum=0;
	int i =0;
	while (i <= intarray_len(tab))
	{
		sum = sum + tab.data[i];
		i++;
	}
	return sum;
}
float intarray_average(intarray tab)
{
	int sum = intarray_sum(tab);
	if (tab.len <= 0)
	{
		printf("error :ta taille du tableu est <= 0.\n");
		return -1.0;
	}
	return ((sum * 1.0) / tab.len);
}


intarray intarray_clone(intarray tab)
{
	intarray copy = intarray_create(tab.len);
	for (int i = 0; i < tab.len ; i++)
	{
		copy.data[i] = tab.data[i];
	}
	return copy ;
}

float intarray_median(intarray tab)
{
	if (tab.len <= 0)
	{
		printf("error :ta taille du tableu est <= 0.\n");
		return -1;
	}
	intarray copy = intarray_clone(tab);
	intarray_sort1(copy);
	if (copy.len % 2 == 1) {
		return(copy.data[copy.len / 2]);
	}
	else
	{
		int v1 = copy.data[(copy.len-1) / 2];
		int v2 = copy.data[copy.len / 2];
		return ((v1 + v2) / 2.0);
	}

	intarray_destroy(copy);
}
