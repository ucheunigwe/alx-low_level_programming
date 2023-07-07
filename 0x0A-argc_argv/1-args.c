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
	if (argv[0] != NULL)
		printf("%d\n", argc);
	return (0);
}
