#include <stdio.h>
#include <stdarg.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_numbers - Entry point
 *
 * @n: Param
 * @s: Param
 */
void print_numbers(const char *s, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;


	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (s != NULL)
		{
			if (i < (n - 1))
				printf("%s", s);
		}
	}
	va_end(arg);
	printf("\n");

}
