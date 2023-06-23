#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{

	/* your code goes there */
	char c;

	c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
