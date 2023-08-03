#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * clear_bit - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @n: Param
 * @index: Param
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cmp;

	cmp = 1;
	if (n == NULL)
		return (-1);
	cmp = cmp << index;
	cmp = ~cmp;
	*n = *n & cmp;
	return (1);
}
