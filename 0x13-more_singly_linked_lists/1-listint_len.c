#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the number of nodes in a linked list
 * @h: pointer to the linked list head
 * Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		n = 0;
	else
	{
		listint_t *temp = (listint_t *)h;

		do {
			temp = temp->next;
			n++;
		} while (temp);
	}
	return (n);
}

