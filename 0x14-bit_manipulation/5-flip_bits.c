#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number
 * @m: number
 * Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int y = 0;

	x = n ^ m;

	while (x > 0)
	{
		if (x & 1)
			y++;
		x >>= 1;
	}
	return (y);
}
