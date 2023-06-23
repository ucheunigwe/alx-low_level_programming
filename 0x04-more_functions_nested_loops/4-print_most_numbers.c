#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{

	/* your code goes there */
	char c;

	c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}

	_putchar('\n');
}
