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
void change(char c,char *sep, va_list param)
{
	switch (c)
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
			char *str = va_arg(param, char*);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		}
		default:
			break;
	}
}


/**
 * print_all - Entry point
 *
 * @format: Param
 */
void print_all(const char * const format, ...)
{
	va_list param;
	char *sep = "";
	int i = 0;

	if (format != NULL)
	{
		va_start(param, format);
		while (format[i])
		{
			change(format[i], sep, param);
			sep = ", ";
			i++;
			va_end(param);
		}
	}	
	printf("\n");
}
