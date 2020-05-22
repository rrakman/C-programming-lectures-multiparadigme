#include<stdio.h>
#include<stdlib.h>

#include"tools.h"
/*
	fonction : string to int.
	string "442"
	'4' - 48 = 4
	'2' - 48 = 2
   4  * 10 + 4 = 44
	44 * 10 + 2 = 442
*/

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

int	main (int argc, char *argv[])
{
	char* num = "0000";
	int titi = string_to_int(num);
	printf("titi = %d\n", titi);
	return EXIT_SUCCESS;
}
