#include<stdio.h>
#include<stdlib.h>

typedef struct {
	float x;
	float y;
} point;

void point_debug(point* p)
{
	printf("(%f ; %f)",p->x,p->y);
}

point point_creer(float x,float y)
{
	point p;
	p.x = x;
	p.y = y;
	return p;
}

//pour bien optimiser la memoire (ram) weshouldnt use it too much
point* point_creer_dyn(float x,float y)
{
	point* p = malloc (sizeof (point));
	p->x = x;
	p->y = y;
	return p;
}
//p.x+=3.6; //in a function will not work
void f (point *p)
{
	p->x += 3.6;
}

int	main (int argc, char *argv[])
{
	point p = point_creer(12.0,-3.0);

	point_debug(&p);
	printf("\n");

	f (&p);

	point_debug(&p);
	printf("\n");
	return EXIT_SUCCESS;
}
