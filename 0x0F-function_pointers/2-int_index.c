#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * int_index - Entry point
 *
 * @array: Param
 * @size: Param
 * @cmp: Param
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if ((cmp != NULL) && (array != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}
	return (-1);
}
