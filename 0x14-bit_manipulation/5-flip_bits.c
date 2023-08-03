#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * flip_bits - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @n: Param
 * @m: Param
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val, i;

	val = n ^ m;
	i = 0;
	while (val)
	{
		unsigned long int cmp = 1;
		int det = 0;

		det = val & cmp;
		if (det)
			i++;
		val = val >> 1;

	}
	return (i);
}
