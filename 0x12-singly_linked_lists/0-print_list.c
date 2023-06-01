#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list.
 * @h: pointer
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	for (; h != NULL; h = h->next, x++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	}
	return (x);
}
