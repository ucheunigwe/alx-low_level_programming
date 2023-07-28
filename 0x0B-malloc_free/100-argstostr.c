#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * argstostr- Entry point
 *
 * @ac: position of row in grid
 * @av: the entire grid
 *
 * Return: success
 */
char *argstostr(int ac, char **av)
{
	char *cpy;
	int len;
	int i;

	len = 0;
	if (ac == 0 || av == NULL)
		cpy = NULL;
	else
	{
		for (i = 0; i < ac; i++)
		{
			len += (int) strlen(*(av + i));
		}
		cpy = malloc((len * sizeof(char) + ac) + 1);
		if (cpy)
		{
			*cpy = '\0';
			for (i = 0; i < ac; i++)
			{
				strcat(cpy, *(av + i));
				len = (int) strlen(cpy);
				if (len != 0)
					*(cpy + len) = '\n';
			}
		}

	}
	return (cpy);
}
