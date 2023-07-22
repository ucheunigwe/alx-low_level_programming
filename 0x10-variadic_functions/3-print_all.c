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
	char *str = "";
	int i, count = 0;

	i = 0;
	count = strlen(format);
	va_start(param, format);
	while (format[i])
	{
		switch (format[i]){
			case 'c':
				{
					printf("%c", va_arg(param, int));
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(param, int));
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(param, double));
					break;
				}
			case 's':
				{
					str = va_arg(param, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				}
			default:
				i++;
				continue;
		}
		if (i < (count - 1))
			printf(", ");
		i++;
	}
	va_end(param);
	printf("\n");
}
