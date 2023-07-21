#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_number - Entry point
 *
 * @c: Param
 */
void print_number(const char c, ...)
{
	va_list num;
	int i, count = 0;

	va_start(num, c);
	if (c == 'i')
		printf("%d", va_arg(num, int));
	if (c == 'f')
		printf("%f", va_arg(num, double));
	if (c == 'c')
		printf("%c", va_arg(num, int));
	i = va_arg(num, int);
	count = va_arg(num, int);
	if (i < (count -1))
		printf(", ");
	va_end(num);
}

/**
 * print_string - Entry point
 *
 * @c: Param
 */
void print_string(const char c, ...)
{
	va_list string;
	int i, count = 0;

	va_start(string, c);
	if (c == 's')
		printf("%s", va_arg(string, char*));
	i = va_arg(string, int);
	count = va_arg(string, int);
	if (i < (count -1))
		printf(", ");
	va_end(string);
}

/**
 * print_all - Entry point
 *
 * @format: Param
 */
void print_all(const char * const format, ...)
{
	va_list param;
	int i;
	int count;

	i = 0;
	count = strlen(format);
	va_start(param, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				{
					print_number(format[i], va_arg(param, int), i, count);
					break;
				}
			case 'i':
				{
					print_number(format[i], va_arg(param, int), i, count);
					break;
				}
			case 'f':
				{
					print_number(format[i], va_arg(param, double), i, count);
					break;
				}
			case 's':
				{
					print_string(format[i], va_arg(param, char*), i, count);
					break;
				}
			default:
				break;
		}
		i++;
	}
	va_end(param);
	printf("\n");
}
