#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower(int c) - Entry point
 *
 * Return: Always int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
