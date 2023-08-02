#include "lists.h"
/**
 * delete_nodeint_at_index - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * @index: index to return
 * Return: pointer to the node at index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;
	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp2 = (*head);
		*head = (*head)->next;
		free(temp2);
		return (1);
	}
	for (i = 0; (i < index - 1); i++)
	{
		if (!temp || !temp->next)
		{
			return (-1);
		}
		else
			temp = temp->next;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
