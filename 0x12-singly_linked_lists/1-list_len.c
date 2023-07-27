#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the number of nodes in a linked list
 * @h: pointer to the linked list head
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		n = 0;
	else
	{
		list_t *temp = (list_t *)h;

		do {
			n++;
		} while (temp);
	}
	return (n);
}

