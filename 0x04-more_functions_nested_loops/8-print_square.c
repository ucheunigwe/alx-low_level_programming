#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_square - Entry point
 * @n : me
 * Return: Always 0 (Success)
 */
void print_square(int n)
{
	int i;
	int j;

	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
