#include <stdio.h>
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
	int  i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
