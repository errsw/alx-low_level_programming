#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of the list
 * Return: int
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *x = head, *a;
	size_t y = 0;

	for (; x != NULL; x = x->next)
	{
		printf("[%p] %d\n", (void *)x, x->n);
		y++;
		for (a = head;  a != x; a = a->next)
		{
			if (x->next == a)
			{
			printf("[%p] %d\n", (void *)x->next, x->next->n);
			exit(98);
			}
		}
	}
	return (y);
}
