#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * upper - Entry point
 *
 * @s: Param
 * Return: A char value
 */
char upper(char s)
{
	if ((s >= 'a') && (s <= 'z'))
		return (s - 32);
	else
		return (s);
}

/**
 * string_toupper - Entry point
 *
 * @s: Param
 * Return: a char pointer
 */
char *string_toupper(char *s)
{
	int i;
	int j;
	char temp;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		temp = upper(*(s + i));
		*(s + i) = temp;
	}
	return (s);
}
