#include <stdio.h>
#include <stdlib.h>

#include "lj_potential.h"

#define N_PART 1000
#define	F_PART "particule.xyz"
#define R_STAR 3.0
#define E_STAR 0.2


int main ( int argc, char ** argv)
{
	particle * v_part = read_particle_file ( F_PART, N_PART);
	
	double U_lj = microscopic_energy ( v_part, N_PART, R_STAR, E_STAR);
	
	printf ("Energie microscopique : %lf\n", U_lj);

	free_particle_vect ( v_part);
	
	return 0;
}
