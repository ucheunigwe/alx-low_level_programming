#include <string.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * create_array - Entry point
 *
 * @size: size of Array to be created
 * @c: character to populate the create Array with.
 *
 * Return: Always Success
 */
char *create_array(unsigned int size, char c)
{
	char *cpy;
	unsigned int i;

	if (size != 0)
	{
		cpy = (char *)malloc(size * sizeof(char));
		if (cpy != NULL)
		{
			for (i = 0; i < size; i++)
			{
				*(cpy + i) = c;
			}
		}
	}
	else
		cpy = NULL;
	return (cpy);
}
