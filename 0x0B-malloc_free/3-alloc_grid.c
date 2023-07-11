#include <string.h>
#include <stdlib.h>
#include "main.h"
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
	int i;
	int j;

	if ((width != 0) && (height != 0))
	{
		ptr = (int **)malloc(height * sizeof(ptr));
		if (ptr != NULL)
		{
			for (j = 0; j < height; j++)
			{
				{
					cpy = (int *)malloc(width * sizeof(int));
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
						ptr = NULL;
						return (ptr);
					}
				}
			}
		}
	}
	else
		ptr = NULL;
	return (ptr);
}
