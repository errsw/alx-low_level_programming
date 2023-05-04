#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of array
*/

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n--; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
