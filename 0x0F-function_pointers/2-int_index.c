#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: int
 * @size: array size
 * @cmp: function pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
