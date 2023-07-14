#include <string.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * malloc_checked - Entry point
 *
 * @b: size of Array to be created
 *
 * Return: Always
 */
void *malloc_checked(unsigned int b)
{
	void *cpy = malloc(b);
	
	if (cpy == NULL)
		exit(98);
	else
		return (cpy);
}
