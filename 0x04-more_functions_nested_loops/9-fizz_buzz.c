#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	j = 1;
	while (j <= 100)
	{
		if ((j % 3 != 0) && (j % 5 != 0))
			printf("%d", j);
		else
		{
			if (j % 3 == 0)
				printf("Fizz");
			if (j % 5 == 0)
				printf("Buzz");
		}
		printf(" ");
		j++;
	}
	printf("\n");
	return (0);
}
