#include <string.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strncpy - Entry point
 *
 * @dest: Param
 * @src: Param
 * @n: Param
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
