#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
*/

void print_binary(unsigned long int n)
{
	int x, y;

	y = 0;

	for (x = sizeof(n) * 8; x;)
	{
		if (n & 1L << --x)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (y == 0)
		_putchar('0');
}
