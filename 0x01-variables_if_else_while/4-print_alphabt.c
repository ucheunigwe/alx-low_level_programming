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

	n = 'a';
	/* your code goes there */
	while (n <= 'z')
	{
		if ((n != 'q') && (n != 'e'))
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
