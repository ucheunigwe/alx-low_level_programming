#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * set_bit - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @n: Param
 * @index: Param
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cmp;

	cmp = 1;
	if ((n == NULL) || (index > 63))
		return (-1);
	cmp = cmp << index;
	*n = *n | cmp;
	return (1);
}
