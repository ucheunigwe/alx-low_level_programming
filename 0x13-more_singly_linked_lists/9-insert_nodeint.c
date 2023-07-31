#include "lists.h"
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
 * insert_nodeint_at_index - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * @index: index to return
 * @data: data to insert
 * Return: pointer to the node at index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index,
	int data)
{
	unsigned int n;
	listint_t *temp, *temp2;

	n = listint_len(*head);
	if (n < index)
		temp = NULL;
	else
	{
		temp = *head;
		index--;
		while (index)
		{
			temp = temp->next;
			index--;
		}
		temp2 = malloc(sizeof(listint_t));
		if (temp2)
		{
			temp2->n = data;
			temp2->next = temp->next;
			temp->next = temp2;
		}

	}
	return (temp2);
}
