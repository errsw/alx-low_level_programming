#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *x;

	for (x = head; x != NULL; x = head)
	{
		head = head->next;
		free(x->str);
		free(x);
		x = head;
	}
}
