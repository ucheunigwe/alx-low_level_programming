#include <string.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strdup - Entry point
 *
 * @str: Param
 *
 * Return: Always Success
 */
char *_strdup(char *str)
{
	char *cpy;
	size_t n;
	size_t i;

	if (str == NULL)
		cpy = NULL;
	else
	{
		n = strlen(str);
		cpy = (char *)malloc((n * sizeof(char)) + 1);
		if (cpy != NULL)
		{
			for (i = 0; i < n; i++)
			{
				*(cpy + i) = *(str + i);
			}
			*(cpy + n) = '\0';
		}
	}

	return (cpy);
}
