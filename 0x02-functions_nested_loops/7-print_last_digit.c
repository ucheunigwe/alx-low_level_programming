#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - Entry point
 *
 * Return: Always int
 * @n: Param
 */
int print_last_digit(int n)
{
	int r;

	r = abs(n % 10);
	_putchar(r + '0');
	return (r);
}
