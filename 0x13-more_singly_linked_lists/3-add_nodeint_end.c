#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: mew node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));
	listint_t *y;

	if (x == NULL)
	{
		return (NULL);
	}
	x->next = NULL;
	x->n = n;
	if (*head == NULL)
		*head = x;
	else
	{
		y = *head;
		for (; y->next != NULL; y = y->next)
			;
		y->next = x;
	}
	return (x);
}
