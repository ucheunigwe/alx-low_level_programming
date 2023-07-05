#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _print_rev_recursion - Entry point
 *
 * @s: Param
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
