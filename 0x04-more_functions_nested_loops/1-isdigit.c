#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isdigit - Entry point
 *
 * Return: Always int
 * @c: Param
 */
int _isdigit(int c)
{
	int r;

	r = isdigit(c);

	if (r == 0)
		return (0);
	else
		return (1);
}
