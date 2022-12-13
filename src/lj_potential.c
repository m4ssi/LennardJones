#include "particles.h"

#include <stdio.h>

double microscopic_energy ( particle * v_part, int n_part, const double r_star, const double e_star)
{
	double U_lj =0.0f;

	const double r_6 = CUBE ( SQUARE ( r_star));
	const double r_12 = SQUARE ( r_6);

	for (int i = 0; i < n_part; i++)
	{
		particle pi = v_part[i];

		for (int j = i + 1; j < n_part; j++)
		{
			particle pj = v_part[j];
			
			const double d2 = distance2 ( pi.coord, pj.coord);
			
			const double r_ij_3 = CUBE(d2);
			
			const double u_ij = (( r_12 / SQUARE(r_ij_3)) - 2 * ( r_6 / r_ij_3) );
			
			U_lj += (4.0 * e_star * u_ij);
		}
	}
	return U_lj;
}
