#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h: pointer
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	for (; h != NULL; h = h->next)
		x++;
	return (x);
}
