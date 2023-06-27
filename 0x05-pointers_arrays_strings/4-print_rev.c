#include <string.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_rev - Entry point
 *
 * @s: Param
 */
void print_rev(char *s)
{
	int i;
	char *end;

	i = strlen(s);
	end = (s + i - 1);

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');

}
