#include<stdio.h>
#include<stdlib.h>

#include"intarray.h"
#include"tools.h"

intarray int_swap(int* m,int* n)
{
		int tmp = *m;
		*m = *n;
		*n = tmp;
}

int string_to_int(char* str)
{
	int okk;
	int n = safe_string_to_int(str,&okk);
	if (okk == 0)
	{
		printf("safe_string_to_int :la valeur de %s n'est pas numrique.\n",str);
	}
	return n;

}

int safe_string_to_int(char* str,int* ok)
{
	if(str[0] == '-')
	{
		return - safe_string_to_int(str + 1,ok);
	}
	*ok = 1;

	if (str[0] == '\0')
	{
		*ok = 0;
		return 0;
	}

	int i = 0;
	int result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9') {
			*ok = 0;
		}
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	return result;
}
