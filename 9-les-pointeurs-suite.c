#include<stdio.h>
#include<stdlib.h>

int	main (int argc, char *argv[])
{
	char a = 'M';
	char* p = &a;
	char** q = &p;

/*example de pointeur du pointeur */
	printf("%c \n",a );
	printf("%c \n",*p );
	printf("%c \n",**q );
	return EXIT_SUCCESS;
}
