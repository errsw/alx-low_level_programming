#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of list
 * @str: string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	char *y;
	size_t z;

	for (z = 0; str[z] != '\0'; z++)
		;
	y = strdup(str);
	if (y == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(list_t));
	if (x == NULL)
	{
		free(y);
		return (NULL);
	}
	x->str = y;
	x->len = z;
	x->next = *head;
	*head = x;
	return (x);
}
