#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 * Return: int
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *x, *y;
	size_t z = 0;

	if (h == NULL || *h == NULL)
		return (0);
	x = *h;
	for (; x != NULL; z++)
	{
		if (x->next >= x)
		{
			y = x->next;
			x->next = NULL;
			break;
		}
		y = x;
		x = x->next;
		free(y);
	}
	*h = NULL;
	return (y);
}
