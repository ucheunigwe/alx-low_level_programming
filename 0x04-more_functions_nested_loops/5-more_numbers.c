#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{

	/* your code goes there */
	int num;
	int i;
	int t;
	int u;

	i = 0;
	while (i < 10)
	{
		t = 0;
		num = 0;
		while (num <= 14)
		{
			if (num < 10)
				u = num;
			else
			{
				t = num / 10;
				u = num % 10;
			}
			if (t != 0)
				_putchar('0' + t);
			_putchar('0' + u);
			num++;
		}
		_putchar('\n');
		i++;
	}
}
