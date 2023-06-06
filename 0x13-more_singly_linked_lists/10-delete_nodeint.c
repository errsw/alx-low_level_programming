#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: head of the list
 * @index: index of the node
 * Return: -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x, *y;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		x = *head;
		*head = (*head)->next;
		free(x);
		return (1);
	}
	x = *head;
	while (x != NULL)
	{
		if (a == index)
		{
			y->next = x->next;
			free(x);
			return (1);
		}
		a++;
		y = x;
		x = x->next;
	}
	return (-1);
}
