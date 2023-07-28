#include "lists.h"
#include <stdio.h>

/**
 * free_list - prints the number of nodes in a linked list
 * @head: pointer to the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		if (temp->str)
			free(temp->str);
		free(temp);
	}
}

