#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the list
 * @index: index of node
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *y;

	for (x = 0; y = head; y != NULL; x++; y = y->next)
	{
		if (x == index)
			return (y);
	}
	return (NULL);
}
