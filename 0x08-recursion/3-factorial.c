#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * factorial - Entry point
 *
 * @n: Param
 *
 * Return: integer values
 *
 */
int factorial(int n)
{
	int c;

	if (n == 0)
		c = 0;
	else if (n < 0)
		c = -1;
	else
	{
		c = n * factorial(n - 1);
	}
	return (c);
}
