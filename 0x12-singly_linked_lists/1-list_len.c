#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer
 * Return: size of the list
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	for (; h != NULL; h = h->next)
	{
		x++;
	}
	return (x);
}
