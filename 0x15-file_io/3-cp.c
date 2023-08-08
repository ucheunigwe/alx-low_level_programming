#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * cp_file - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @filename: Param
 * @file_from: Param
 */
int cp_file(const char *filename, FILE *file_from)
{
	FILE *f;
	int fd;
	char c;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd < 0)
		return (-1);
	f = fdopen(fd, "w");
	if (f == NULL)
	{
		close(fd);
		return (-1);
	}
	if (file_from != NULL)
	{
		while ((c = fgetc(file_from)) != EOF)
		{
			if (fwrite(&c, 1, 1, f) != 1)
			{
				fclose(f);
				close(fd);
				return (-1);
			}
			i++;
		}
		if (ferror(file_from))
		{
			fclose(f);
			close(fd);
			return (-2);
		}
	}

	fclose(f);
	close(fd);
	return (i);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 * @ac: Param
 * @av: param
 */
int main(int ac, char **av)
{
	int res;
	FILE *f;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	f = fopen(av[1], "r");
	if (f == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	res = cp_file(av[2], f);
	if (res == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	else if (res == -2)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	return (0);
}
