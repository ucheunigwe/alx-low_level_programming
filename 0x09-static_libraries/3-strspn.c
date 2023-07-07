#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strspn - Entry point
 *
 * @s: Param
 * @accept: Param
 *
 *
 * Return: Pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	/*
	 * char *i;
	 * i = s;
	 * while (*i != '\0')
	 * {
	 *	if (*i == c)
	 *		return (i);
	 *	i = i + 1;
	 * }
	 * i = NULL;
	 */
	return (strspn(s, accept));
}
