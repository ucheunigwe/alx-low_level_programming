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
int palind(char *s1, char *s2, int n)
{
	int j = n;
	int r = 0;

	if (j <= 0)
	{
		r = 1;
	}
	else
	{
		if (*s1 == *s2)
			r = palind(s1 + 1, s2 + 1, n - 1);
	}
	return (r);
}


/**
 * wildcmp - Entry point
 *
 * @s: Param
 *
 * Return: integer values
 *
 */
int wildcmp(char *s1, char *s2)
{
	int c;
	int a;
	int r;

	c = _strlen_recursion(s1);
	a = _strlen_recursion(s2);
	if (c != a)
		r = 0;
	else if (c == 0 && a == 0)
		r = 1;
	else
		r = palind(s1, s2, c);
	return (r);
}
