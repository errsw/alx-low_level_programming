#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: head of the list
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	for (; x != NULL; x = x->next)
	{
		sum += x->n;
	}
	return (sum);
}
