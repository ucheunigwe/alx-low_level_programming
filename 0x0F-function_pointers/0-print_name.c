#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_name - Entry point
 *
 * @name: Param
 * @f: Param
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
