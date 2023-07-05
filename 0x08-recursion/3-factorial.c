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
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
