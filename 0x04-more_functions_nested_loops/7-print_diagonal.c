#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_diagonal - Entry point
 * @n : me
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	j = 0;
	while (j < n)
	{
		i = 0;
		while (i <= j)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
