#include "lists.h"
#include <stdio.h>
/**
 * listint_len - prints the number of nodes in a linked list
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
/**
 * get_nodeint_at_index - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * @index: index to return
 * Return: pointer to the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *temp;

	n = listint_len(head);
	if (n <= index)
		temp = NULL;
	else
	{
		temp = head;
		while (index)
		{
			temp = temp->next;
			index--;
		}
	}
	return (temp);
}
