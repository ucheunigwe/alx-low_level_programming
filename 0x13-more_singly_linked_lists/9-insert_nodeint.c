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
	unsigned int n, i;
	listint_t *temp, *temp2;

	n = listint_len(*head);
	temp2 = malloc(sizeof(listint_t));
	if ((n < index) || !*head || !temp2)
		return (NULL);
	else
	{
		temp2->n = data;
		temp = *head;
		if (index == 0)
		{
			temp2->next = (*head);
			*head = temp2;
			return (temp2);
		}
		for (i = 0; i < index && temp; i++)
		{
			if (i == index - 1)
			{
				temp2->next = temp->next;
				temp->next = temp2;
				return (temp2);
			}
			else
				temp = temp->next;
		}

	}
	return (temp2);
}
