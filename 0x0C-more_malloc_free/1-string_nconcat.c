#include <string.h>
#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * string_nconcat - Entry point
 *
 * @s1: size of Array to be created
 * @s2: size of Array to be created
 * @n: size of Array to be created
 *
 * Return: Always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (s);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	if (n < len2)
	{
		while (j < n)
			s[i++] = s2[j++];
	}
	else
	{
		while (j < len2)
			s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
