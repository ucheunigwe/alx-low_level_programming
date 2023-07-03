#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_chessboard - Entry point
 *
 * @a: Param
 *
 */
void print_chessboard(char (*a)[8])
{
	/*
	 * char *i;
	 * i = s;
	 * while (*i != '\0')
	 * {
	 *	if (*i == c)
	 *		return (i);
	 *	i = i + 1;
	 * }
	 * i = NULL;
	 */
	char *p;
	char c;
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		p = *(a + i);
		for (j = 0; j < 8; j++)
		{
			c = *(p + j);
			_putchar(c);
		}
		_putchar('\n');
	}
}
