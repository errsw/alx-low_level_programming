#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char
 * @size: size of array
 * @c: char
 * Return: array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}

