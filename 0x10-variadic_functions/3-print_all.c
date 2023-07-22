#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * print_all - Entry point
 *
 * @format: Param
 */
void print_all(const char * const format, ...)
{
	va_list param;
	char *str, *sep = "";
	int i = 0;

	if (format == NULL)
	{
		printf("(nil)\n");
		return;
	}
	va_start(param, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				{
					printf("%s%c", sep, va_arg(param, int));
					break;
				}
			case 'i':
				{
					printf("%s%d", sep, va_arg(param, int));
					break;
				}
			case 'f':
				{
					printf("%s%f", sep, va_arg(param, double));
					break;
				}
			case 's':
				{
					str = va_arg(param, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				}
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
		va_end(param);
	}
	printf("\n");
}
