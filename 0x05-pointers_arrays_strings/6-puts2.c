#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * puts2 - Entry point
 *
 * @str: Param
 */
void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);

	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
