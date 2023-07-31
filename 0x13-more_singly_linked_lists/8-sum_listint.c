#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * Return: sum of list data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		sum = 0;
	else
	{
		temp = head;
		sum = 0;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
