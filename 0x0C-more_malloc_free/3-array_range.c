#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *x;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	x = malloc(sizeof(int) * b);

	if (x == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		x[a] = min++;

	return (x);
}
