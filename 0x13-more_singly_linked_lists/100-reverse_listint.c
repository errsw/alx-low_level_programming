#include "lists.h"

/**
 * reverse_listint -  reverses a list
 * @head: head of the list
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL, *y = NULL;

	if (*head == NULL)
		return (NULL);
	x = *head;
	*head = NULL;
	for (; x != NULL; )
	{
		y = x->next;
		x->next = *head;
		*head = x;
		x = y;
	}
	return (*head);
}
