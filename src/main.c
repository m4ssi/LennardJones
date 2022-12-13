#include <stdio.h>
#include <stdlib.h>

#include "particles.h"

#define N_PART 1000
#define	F_PART "particule.xyz"

int main ( int argc, char ** argv)
{
	particle * v_part = read_particle_file ( F_PART, N_PART);
	
	int bool = 0;
	for (int i = 0; i < N_PART; i++)
	{
		if ( v_part[i].kind != 2)
		{
			bool = 1;
		}
	} 

	free_particle_vect ( v_part);
	
	return 0;
}
