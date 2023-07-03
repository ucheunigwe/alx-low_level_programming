#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _memcpy - Entry point
 *
 * @src: Param
 * @dest: Param
 * @n: Param
 *
 * Return: Pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
