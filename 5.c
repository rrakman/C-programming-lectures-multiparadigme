#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	for(unsigned char toto = 0; toto < 255 ; toto++)
		printf("%c ", toto);
	return EXIT_SUCCESS;
}
