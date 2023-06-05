#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: mew node
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));

	if (x == NULL)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
