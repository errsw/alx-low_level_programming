#include <stdlib.h>
#include "main.h"

/**
 * *_func - helper
 * @s: memory
 * @b: char
 * @n: copy frequency
 * Return: pointer
 */
char *func(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	func(x, 0, nmemb * size);

	return (x);
}
