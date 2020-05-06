#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	char* toto = "Bonjour a tous \n";

	int i =0;
	while (*(toto+i) != '\0') {
			printf("%c ",*(toto +i));
			i = i + 1;
	}
	return EXIT_SUCCESS;
}
