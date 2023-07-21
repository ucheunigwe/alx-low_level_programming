#include <string.h>
#include <stdarg.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * sum_them_all - Entry point
 *
 * @n: Param
 * Return: int val
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);

}
