#include "particles.h"

#include <stdio.h>
#include <stdlib.h>

void read_comment ( FILE * fin)
{
	char buf[256] = "\0";
	fgets ( buf, 256, fin);
	
	int n1 = -1, n2 = -1;
	sscanf ( buf, "%d %d", &n1, &n2);
}

particle read_particle ( FILE * fin)
{
	particle p = {
					.kind = -1,
					.coord = (double_3d) { .x = 0.0f, .y = 0.0f, .z = 0.0f}
				 };
	fscanf ( fin, "%d %lf %lf %lf", &(p.kind), &(p.coord.x), &(p.coord.y), &(p.coord.z));
	return p;
}

particle * read_particle_file ( char * path, int n_part)
{
	FILE * fin = fopen ( path, "r");
	if ( !fin)
	{
		printf ("File %s not found\n", path);
		return NULL;
	}
	
	read_comment ( fin);

	particle * v_part = (particle *) malloc ( n_part * sizeof (particle));
	
	for (int i = 0; i < n_part; i++)
	{
		v_part[i] = read_particle ( fin);
	}
	
	fclose (fin);
	return v_part;
}

void free_particle_vect ( particle * v_part)
{
	free ( v_part);
}
