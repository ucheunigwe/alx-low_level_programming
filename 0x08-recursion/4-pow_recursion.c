#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _pow_recursion - Entry point
 *
 * @x: Param
 * @y: Param
 *
 * Return: integer values
 *
 */
int _pow_recursion(int x, int y)
{
	int c;

	if (y == 0)
		c = 1;
	else if (y < 0)
		c = -1;
	else
	{
		c = x * _pow_recursion(x, y - 1);
	}
	return (c);
}
