#include "lists.h"
#include <stdio.h>

/**
 * add_end - prints the number of nodes in a linked list
 * @head: the linked list head
 * @temp: node to be added
 */
list_t *add_end(list_t **head, list_t **temp)
{
	list_t *tail = *head;
	list_t *temp1 = *temp;


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
 * add_node_end - prints the number of nodes in a linked list
 * @head: pointer to the linked list head
 * @str: node string to be added
 * Return: Number of nodes in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	char *str_cpy;
	unsigned int str_len = 0;

	temp = malloc(sizeof(list_t));

	if (temp != NULL)
	{
		if (str == NULL)
		{
			temp->str = NULL;
			temp->len = 0;
		}
		else
		{
			str_cpy = strdup(str);
			if (str_cpy != NULL)
			{
				while (*str)
				{
					str_len++;
					str++;
				}
				temp->str = str_cpy;
				temp->len = str_len;
			}
			else
			{
				free(temp);
				temp = NULL;
				return (temp);
			}
		}
		temp = add_end(head, &temp);
	}
	return (temp);
}

