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

	if (y * y == x)
		c = y;
	else if (y * y > x)
		c = -1;
	else
	{
		c = root(x, y + 1);
	}
	return (c);
}


#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _sqrt_recursion - Entry point
 *
 * @n: Param
 *
 * Return: integer values
 *
 */
int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
		result = -1;
	else if (n == 0)
		result = 0;
	else
		result = root(n, 1);
	return (result);
}
