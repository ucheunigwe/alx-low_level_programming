#include <stdio.h>
#include <stdarg.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_strings - Entry point
 *
 * @n: Param
 * @s: Param
 */
void print_strings(const char *s, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *val;


	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(arg, char*);
		if (val == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", val);
		if (s != NULL)
		{
			if (i < (n - 1))
				printf("%s", s);
		}
	}
	va_end(arg);
	printf("\n");

}
