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
	if ((s == 'a') || (s == 'A'))
		return ('4');
	else if ((s == 'e') || (s == 'E'))
		return ('3');
	else if ((s == 't') || (s == 'T'))
		return ('7');
	else if ((s == 'o') || (s == 'O'))
		return ('0');
	else
		return ('1');
}

/**
 * leet - Entry point
 *
 * @s: Param
 * Return: a char pointer
 */
char *leet(char *s)
{
	int i;
	int j;
	char temp;

	j = strlen(s);
	for (i = 0; i < j; i++)
	{
		if ((*(s + i) == 'a') || (*(s + i) == 'A') || (*(s + i) == 'e') || (*(s + i) == 'E') || (*(s + i) == 'o') || (*(s + i) == 'O') || (*(s + i) == 't') || (*(s + i) == 'T') || (*(s + i) == 'l') || (*(s + i) == 'L'))
		{
			temp = upper(*(s + i));
			*(s + i) = temp;
		}
	}
	return (s);
}
