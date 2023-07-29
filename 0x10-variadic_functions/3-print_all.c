#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * change - Entry point
 *
 * @c: Param
 * @sep: Param
 * @param: param
 */
void change(char c, char **sep, va_list param)
{
	switch (c)
	{
		case 'c':
			{
				printf("%s%c", *sep, va_arg(param, int));
				*sep = ", ";
				break;
			}
		case 'i':
		{
			printf("%s%d", *sep, va_arg(param, int));
			*sep = ", ";
			break;
		}
		case 'f':
		{
			printf("%s%f", *sep, va_arg(param, double));
			*sep = ", ";
			break;
		}
		case 's':
		{
			char *str = va_arg(param, char*);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", *sep, str);
			*sep = ", ";
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
			change(format[i], &sep, param);
			i++;
			va_end(param);
		}
	}
	printf("\n");
}
