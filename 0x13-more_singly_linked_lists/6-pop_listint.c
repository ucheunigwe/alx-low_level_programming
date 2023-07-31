#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - prints the number of nodes in a linked list
 * @head: pointer to the linked list
 * Return: the data to the deleed node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}

