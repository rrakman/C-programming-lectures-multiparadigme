#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	unsigned char toto;
	toto = 0;
	while(toto < 255)
	{
		printf("%c ", toto);
		toto += 1;
	}

	return EXIT_SUCCESS;
}
