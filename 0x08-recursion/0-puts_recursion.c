#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _puts_recursion - Entry point
 *
 * @s: Param
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
