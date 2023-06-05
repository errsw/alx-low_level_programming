#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	for (x = head; x != NULL; x = head)
	{
		head = x->next;
		free(x);
		x = head;
	}
}
