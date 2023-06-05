#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *y;

	if (head == NULL || *head == NULL)
		return (0);
	y = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = y;
	return (x);
}
