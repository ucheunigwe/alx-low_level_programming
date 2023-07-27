#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the strings in a linked list
 *  @h: pointer to the linked list head
 *  Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	if (h == NULL)
		return (n);
	else
	{
		list_t *temp = (list_t *)h;
		do {
			if (temp->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			n++;
		} while (temp);
	}
	return (n);
}

