#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * rev_string - Entry point
 *
 * @s: Param
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
