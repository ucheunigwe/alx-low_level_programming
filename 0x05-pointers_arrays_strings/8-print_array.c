#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_array - Entry point
 *
 * @a: Param
 * @n: Param
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
