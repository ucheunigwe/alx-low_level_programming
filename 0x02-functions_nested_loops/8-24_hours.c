#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - Entry point
 *
 * Return: Always int
 * @n: Param
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int s;


	a = 0;
	b = 0;
	c = 0;
	d = 0;

	while (a <= 2)
	{
		b = 0;
		if (a == 2)
			s = 4;
		else
			s = 10;
		while (b < s)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}

}
