#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * recure- converts a binary string into a decimal integer
 *
 *
 * @n: Param
 */
void recure(unsigned long int n)
{
	unsigned int val, cmp;
	char c;

	cmp = 1;

	if (n == 0)
		return;
	val = n & cmp;
	n = n >> 1;
	c = '0' + val;
	recure(n);
	_putchar(c);
}

/**
 * print_binary - converts a binary string into a decimal integer
 *
 *
 * @n: Param
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recure(n);
}
