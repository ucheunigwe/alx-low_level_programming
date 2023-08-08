#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * create_file - converts a binary string into a decimal integer
 *
 * Return: the ineger result or zero(0) for invalid strings
 * @filename: Param
 * @text_content: Param
 */
int create_file(const char *filename, char *text_content)
{
	FILE *f;
	int fd;
	char c;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);

	f = fdopen(fd, "w");
	if (f == NULL)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i])
		{
			c = text_content[i];
			if (fwrite(&c, 1, 1, f) != 1)
			{
				fclose(f);
				close(fd);
				return (-1);
			}
			i++;
		}
	}

	fclose(f);
	close(fd);

	return (1);
}
