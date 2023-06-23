#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isupper - Entry point
 *
 * Return: Always int
 * @c: Param
 */
int _isupper(int c)
{
	int r;

	r = isupper(c);

	if (r == 0)
		return (0);
	else
		return (1);
}
