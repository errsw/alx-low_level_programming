#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	for (x = *head; x != NULL; x = *head)
	{
		*head = (*head)->next;
		free(x);
	}
}
