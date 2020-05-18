#include<stdio.h>
#include<stdlib.h>
/*
	Les structs en C
	the commented code below is the introduction to structs !
	making a point type f data was so usefuel to understand
*/

typedef struct point point;

struct point {
	float	x;
	float y;

};

void point_debug(point A)
{
	printf("(%f ; %f)",A.x,A.y);
}

point point_creer(float x,float y)
{
	point p;
	p.x = x;
	p.y = y;
	return p;
}
int	main (int argc, char *argv[])
{
	point p = point_creer(42.00,13.37);

	point_debug(p);
	printf("\n");
	p.x += 3.14;
	point_debug(p);
	printf("\n");
	return EXIT_SUCCESS;
}
