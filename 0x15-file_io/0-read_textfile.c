#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * read_textfile - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @filename: Param
 * @lettes: Param
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char c;
	size_t  printed;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	printed = 0;
	while (letters && ((c = fgetc(f)) != EOF))
	{
		if (write(STDOUT_FILENO, &c, 1) != 1)
			return (0);
		printed++;
		letters--;
	}
	fclose(f);

	return (printed);
}
