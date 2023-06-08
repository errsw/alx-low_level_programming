#include "main.h"

/**
 * get_bi - returns the value of a bit at a given index
 * @n: number
 * @index: bit
 * Return: bit at index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index >= sizeof(n) * 8)
		return (-1);
	x = (n >> index);
	return (x & 1);
}
