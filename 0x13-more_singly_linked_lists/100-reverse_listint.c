#include "lists.h"
/**
 * reverse_listint - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * Return: pointer to the node at index
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *new_list;

	if (!*head)
		return (NULL);
	new_list = NULL;
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		temp->next = new_list;
		new_list = temp;
	}
	*head = new_list;
	return (new_list);
}
