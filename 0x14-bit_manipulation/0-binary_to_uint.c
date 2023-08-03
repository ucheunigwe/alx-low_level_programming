#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * binary_to_uint - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @b: Param
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val, i;

	val = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		char digit;

		digit = b[i];
		val *= 2;
		if (digit == '0')
			val += 0;
		else if (digit == '1')
			val += 1;
		else
			return (0);

	}
	return (val);
}
