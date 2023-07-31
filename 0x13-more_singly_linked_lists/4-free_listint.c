#include "lists.h"
#include <stdio.h>

/**
 * free_listint - prints the number of nodes in a linked list
 * @head: pointer to the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}

