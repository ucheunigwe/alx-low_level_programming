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
 * cap_string - Entry point
 *
 * @s: Param
 * Return: a char pointer
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char temp;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		if ((*(s + i) == ' ') || (*(s + i) == '\t') || (*(s + i) == '\n') || (*(s + i) == ',') || (*(s + i) == ';') || (*(s + i) == '.') || (*(s + i) == '!') || (*(s + i) == '?') || (*(s + i) == '"') || (*(s + i) == '(') || (*(s + i) == ')') || (*(s + i) == '{') || (*(s + i) == '}'))
		{
			temp = upper(*(s + i + 1));
			*(s + i + 1) = temp;
		}
	}
	return (s);
}
