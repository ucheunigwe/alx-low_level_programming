#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower - Entry point
 *
 * Return: Always int
 * @c: Param
 */
int _islower(int c)
{
	int r;

	r = islower(c);

	if (r == 0)
		return (0);
	else
		return (1);
}
