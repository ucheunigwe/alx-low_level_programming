#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * dealocate_grid - Entry point
 *
 * @j: position of row in grid
 * @cpy: pointer to row to be populated
 * @ptr: the entire grid
 *
 * 
 */
void dealocate_grid(int **ptr, int j)
{
	int *cpy;

	if (j == 0)
	{
		free (*ptr);
		free (ptr);
		ptr = NULL;
	}
	else
	{
		cpy = *(ptr + j - 1);
		dealocate_grid(ptr, j - 1);
		free (cpy);
	}
}


/**
 * pop_row - Entry point
 *
 * @width: width of row to be populated
 * @j: position of row in grid
 * @cpy: pointer to row to be populated
 * @ptr: the entire grid
 *
 * 
 */
void pop_row(int **ptr, int *cpy, int width, int j)
{
	int i;

	if (cpy != NULL)
	{
		for (i = 0; i < width; i++)
		{
			*(cpy + i) = 0;
		}
		*(ptr + j) = cpy;
	}
	else
	{
		dealocate_grid(ptr, j);
	}
}


/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * alloc_grid - Entry point
 *
 * @width: size of Array to be created
 * @height: character to populate the create Array with.
 *
 * Return: Always Success
 */
int **alloc_grid(int width, int height)
{
	int *cpy;
	int **ptr;
	int j;

	if ((width != 0) && (height != 0))
	{
		ptr = (int **)malloc(height * sizeof(ptr));
		if (ptr != NULL)
		{
			for (j = 0; j < height; j++)
			{
				cpy = (int *)malloc(width * sizeof(int));
				pop_row(ptr, cpy, width, j);
			}
		}
	}
	else
		ptr = NULL;
	return (ptr);
}
