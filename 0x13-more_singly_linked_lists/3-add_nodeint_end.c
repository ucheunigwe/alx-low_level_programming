#include "lists.h"
#include <stdio.h>

/**
 * add_end - prints the number of nodes in a linked list
 * @head: the linked list head
 * @temp: node to be added
 * Return: Pointer to node
 */
listint_t *add_end(listint_t **head, listint_t **temp)
{
	listint_t *tail = *head;
	listint_t *temp1 = *temp;


	if (*head == NULL)
	{
		temp1->next = NULL;
		*head = temp1;
	}
	else
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = temp1;
		temp1->next = NULL;
	}
	return (temp1);
}

/**
 * add_nodeint_end - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * @n: node string to be added
 * Return: Number of nodes in the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp != NULL)
	{
		temp->n = n;
		temp = add_end(head, &temp);
	}
	return (temp);
}

