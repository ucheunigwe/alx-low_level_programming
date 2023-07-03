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
char *_strchr(char *s, char c)
{
	char *i;

	i = s;

	while (*i != '\0')
	{
		if(*i == c)
			return (i);
		i = i + 1;
			
	}
	return (NULL);
}
