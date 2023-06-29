#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strncat- Entry point
 *
 * @dest: Param
 * @src: Param
 * @n: Param
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
