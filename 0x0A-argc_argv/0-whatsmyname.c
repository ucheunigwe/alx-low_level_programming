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
 */
int main(int argc, char* argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return(0);
}
