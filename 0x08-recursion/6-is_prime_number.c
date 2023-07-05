#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * root - Entry point
 *
 * @x: Param
 * @y: Param
 *
 * Return: integer values
 *
 */
int root(int x, int y)
{
	int c;

	if (y == x)
		c = 1;
	else if (x % y == 0)
		c = 0;
	else
	{
		c = root(x, y + 1);
	}
	return (c);
}

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * is_prime_number - Entry point
 *
 * @n: Param
 *
 * Return: integer values
 *
 */
int is_prime_number(int n)
{
	int result;

	if (n <= 1)
		result = 0;
	else
		result = root(n, 2);
	return (result);
}
