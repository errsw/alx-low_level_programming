#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of list
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *z;
	char *x;
	size_t y;

	for (y = 0; str[y] != '\0'; y++)
		;
	x = strdup(str);
	if (x == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(list_t));
	if (a == NULL)
	{
		free(x);
		return (NULL);
	}
	a->str = x;
	a->len = y;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
	}
	else
	{
		for (z = *head; z->next != NULL; z = z->next)
		{
			;
		}
		z->next = a;
	}
	return (a);
}
