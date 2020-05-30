#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	char* toto = "Bonjour a tous \n";
	for (int i = 0;toto[i] != '\0';i++)
			printf("%c ",toto[i]);
	return EXIT_SUCCESS;
}
