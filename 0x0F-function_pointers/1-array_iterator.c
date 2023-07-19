#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * array_iterator - Entry point
 *
 * @array: Param
 * @size: Param
 * @action: Param
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((action != NULL) && (array != NULL) && size)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
