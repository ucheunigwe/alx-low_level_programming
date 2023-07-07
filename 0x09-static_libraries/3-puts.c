#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _puts - Entry point
 *
 * @str: Param
 */
void _puts(char *str)
{
	char c;

	c = *str;
	while (c != '\0')
	{
		_putchar(c);
		str++;
		c = *str;
	}
	_putchar('\n');

}
