#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - Entry point
 *
 * @j: position of row in grid
 * @ptr: the entire grid
 */
void free_grid(int **ptr, int j)
{
	int *cpy;

	if (j == 0)
	{
		free(*ptr);
		free(ptr);
	}
	else
	{
		cpy = *(ptr + j - 1);
		free_grid(ptr, j - 1);
		free(cpy);
	}
}
