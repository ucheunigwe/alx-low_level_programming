#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * times_table - Entry point
 *
 * Return: Always int
 *
 */
void times_table(void)
{
	int a;
	int b;
	int r;
	int t;
	int u;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = a * b;
			if (r < 10)
				_putchar('0' + r);
			else
			{
				t = r / 10;
				u = r % 10;
				_putchar('0' + t);
				_putchar('0' + u);
			}
			if (b != 9)
			{
				_putchar(',');
				if (r < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
