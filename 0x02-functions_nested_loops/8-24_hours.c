#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * jack_bauer - Entry point
 *
 * Return: Always int
 *
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int s;

	for (a = 0; a <= 2; a++)
	{
		if (a == 2)
			s = 4;
		else
			s = 10;
		for (b = 0; b < s; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
