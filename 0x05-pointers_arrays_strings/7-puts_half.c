#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * puts_half - Entry point
 *
 * @str: Param
 */
void puts_half(char *str)
{
	int i;
	int j;

	j = strlen(str);
	if ((j % 2) == 0)
		i = j / 2;
	else
		i = ((j - 1) / 2) + 1;

	for (i = i; i < j; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
