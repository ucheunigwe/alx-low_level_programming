#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

	/* your code goes there */
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}
}
