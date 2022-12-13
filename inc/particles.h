#ifndef _H_PARTICLES
#define _H_PARTICLES

#include "utils.h"

typedef struct
{
	int kind;
	double_3d coord;
}particle;

typedef particle * particles;

//~ particle read_particle ( FILE * fin);

particle * read_particle_file ( char * path, int n_part);

void free_particle_vect ( particle * v_part);

#endif
