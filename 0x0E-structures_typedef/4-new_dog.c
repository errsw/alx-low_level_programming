#include <stdlib.h>
#include "dog.h"

/**
* _strlen - helps
* @s: string
* Return: int
*/
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
* *_strcpy - helps
* @a: pointer
* @b: string
* Return: pointer
*/
char *_strcpy(char *a, char *b)
{
	int x, y;

	y = 0;

	while (src[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (y);
}
/**
* new_dog - creates a new dog
* @name: of the dog new dog
* @age: of the dog new dog
* @owner: of the dog new dog
* Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	int x, y;

	x = _strlen(name);
	y = _strlen(owner);

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);

	a->name = malloc(sizeof(char) * (x + 1));
	if (a->name == NULL)
	{
		free(a);
		return (NULL);
	}
	a->owner = malloc(sizeof(char) * (y + 1));
	if (a->owner == NULL)
	{
		free(a);
		free(a->name);
		return (NULL);
	}
	_strcpy(a->name, name);
	_strcpy(a->owner, owner);
	a->age = age;
	return (a);
}
