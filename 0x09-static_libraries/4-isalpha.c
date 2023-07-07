#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha - Entry point
 *
 * Return: Always int
 * @c: Param
 */
int _isalpha(int c)
{
	int r;

	r = isalpha(c);

	if (r == 0)
		return (0);
	else
		return (1);
}
