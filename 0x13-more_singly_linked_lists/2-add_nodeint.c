#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * @n: node data to be added
 * Return: Number of nodes in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}

