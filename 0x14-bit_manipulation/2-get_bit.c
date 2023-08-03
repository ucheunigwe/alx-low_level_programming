#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * get_bit - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @n: Param
 * @index: Param
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val, cmp;

	if (index > 63)
		return (-1);
	n = n >> index;
	cmp = 1;
	val = n & cmp;
	return (val);
}
