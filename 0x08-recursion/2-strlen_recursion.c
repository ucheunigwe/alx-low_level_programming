#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strlen_recursion - Entry point
 *
 * @s: Param
 *
 * Return: integer values
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
