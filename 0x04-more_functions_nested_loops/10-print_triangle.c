#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_triangle - Entry point
 * @n : me
 * Return: Always 0 (Success)
 */
void print_triangle(int n)
{
	int i;
	int j;

	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n)
		{
			if ((n - i - 1) > j)
				_putchar(' ');
			else
				_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
