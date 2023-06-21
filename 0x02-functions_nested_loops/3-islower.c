#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower(int c) - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int r;
	
	r = islower(c);
	return r;
}
