#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * swap_int - Entry point
 *
 * @a: Param
 * @b: Param
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
