#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointers
 * @str: string to copy
 * Return: the copy of string
 */
char *_strdup(char *str)
{
	int a, b = 0;
	char *x;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	x = malloc(sizeof(char) * (a + 1));

	if (x == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		x[b] = str[b];

	return (x);
}
