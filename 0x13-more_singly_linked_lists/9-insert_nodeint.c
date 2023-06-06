#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: index of the node
 * @n: value
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x, *y = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (y == NULL)
		return (NULL);
	y->n = n;
	y->next = NULL;
	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}
	x = *head;
	while (x != NULL)
	{
		if (a == idx - 1)
		{
			y->next = x->next;
			x->next = y;
			return (y);
		}
		a++;
		x = x->next;
	}
	free(y);
	return (NULL);
}
