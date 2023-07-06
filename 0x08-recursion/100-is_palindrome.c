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

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * palind - Entry point
 *
 * @s: Param
 * @n: Param
 *
 * Return: Enter
 */
int palind(char *s, int n)
{
	int j = n - 1;
	int r = 0;

	if (j <= 0)
	{
		r = 1;
	}
	else
	{
		if (*s == *(s + j))
			r = palind(s + 1, n - 2);
	}
	return (r);
}


/**
 * is_palindrome - Entry point
 *
 * @s: Param
 *
 * Return: integer values
 *
 */
int is_palindrome(char *s)
{
	int c;
	int r;

	c = _strlen_recursion(s);
	if (c == 0)
		r = 1;
	else
		r = palind(s, c);
	return (r);
}
