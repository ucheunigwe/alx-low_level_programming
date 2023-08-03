#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * get_endianness - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 */
int get_endianness(void)
{
	int val = 0x01020304;

	char * c = (char *)&val;
	if (c[0] == 0x01)
		return (0);
	return (1);
}
