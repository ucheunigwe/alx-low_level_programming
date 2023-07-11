#include <string.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strdup - Entry point
 *
 * @s1: Param
 * @s2: Param
 *
 * Return: Always Success
 */
char *str_concat(char *s1, char *s2)
{
	char *cpy;
	size_t n1;
	size_t n2;
	size_t i;

	if (s1 != NULL)
		n1 = strlen(s1);
	else
		n1 = 0;
	if (s2 != NULL)
		n2 = strlen(s2);
	else
		n2 = 0;
	cpy = (char *)malloc(((n1 + n2) * sizeof(char)) + 1);
	if (cpy != NULL)
	{
		for (i = 0; i < n1; i++)
		{
			*(cpy + i) = *(s1 + i);
		}
		
		for (i = 0; i < n2; i++)
		{
			*(cpy + n1 + i) = *(s2 + i);
		}
		
		*(cpy + n1 + n2) = '\0';
	}

	return (cpy);
}
