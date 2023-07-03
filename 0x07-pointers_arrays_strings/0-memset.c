#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _memset - Entry point
 *
 * @s: Param
 * @b: Param
 * @n: Param
 *
 * Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
