#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer
 * Return: int
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		x++;
	}
	return (x);
}
