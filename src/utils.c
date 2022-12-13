#include "utils.h"

double distance2 ( double_3d pi, double_3d pj)
{
	const double dx = ( pj.x - pi.x),
				 dy = ( pj.y - pi.y),
				 dz = ( pj.z - pi.z);

	const double d2 = (dx * dx) + (dy * dy) + (dz * dz);
	return (double) d2;
}
