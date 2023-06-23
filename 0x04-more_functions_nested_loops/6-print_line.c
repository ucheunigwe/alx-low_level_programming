#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_line - Entry point
 * @n : me
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
