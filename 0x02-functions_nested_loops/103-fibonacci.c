#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, c, sum = 2;

	while (b < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
