#include "lists.h"

/**
 * print_listint - prints all the strings in a linked list
 * @h: pointer to the linked list head
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		n = 0;
	else
	{
		listint_t *temp = (listint_t *)h;

		do {
			printf("%d\n", temp->n);
			temp = temp->next;
			n++;
		} while (temp);
	}
	return (n);
}

