#ifndef _H_UTILS_
#define _H_UTILS_

typedef struct
{
	double	x,
			y,
			z;
} double_3d;

typedef struct
{
	float	x,
			y,
			z;
} float_3d;


#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))

double distance2 ( double_3d pi, double_3d pj);

#endif
