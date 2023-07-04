#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_diagsums - Entry point
 *
 * @a: Param
 * @size: Param
 *
 */
void print_diagsums(int *a, int size)
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
	int *p;
	int sum1;
	int sum2;
	int i;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		p = (a + (i * size));
		sum1 = sum1 + *(p + i);
		sum2 = sum2 + *(p + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);

}
