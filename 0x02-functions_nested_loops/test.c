#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower - Entry point
 *
 * Return: On sucess 1.
 * On failure, -1
 * @c: Param
 */
int _islower(int c)
{
	int r;

	r = islower(c);

	if (r == 0)
		return (1);
	else
		return (0);
}
