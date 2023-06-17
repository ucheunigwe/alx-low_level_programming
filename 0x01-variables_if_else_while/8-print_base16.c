#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 48;
	/* your code goes there */
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	n = 'a';
	/* your code goes there */
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
