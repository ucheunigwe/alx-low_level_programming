#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * @argc: Param
 * @argv: Param
 *
 * Return: Always Success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *endptr;
			long value = strtol(argv[i], &endptr, 10);

			if (errno == ERANGE || *endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += value;
		}
		printf("%d\n", sum);
	}
	return (0);
}
