#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input
 * @size: input
*/

void print_diagsums(int *a, int size)
{
	int x, y, s1 = 0, s2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		s1 = s1 + a[x];
	for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
		s2 = s2 + a[y];
	printf("%d, %d\n", s1, s2);
}
