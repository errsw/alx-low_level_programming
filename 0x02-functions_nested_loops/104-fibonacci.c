#include "main.h"

/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	int i = 0;

	while (i < 98)
	{
		printf("%lu, ", x);
		unsigned long t = x + y;

		x = y;
		y = t;
		i++;
	}
	printf("%lu\n", a);
	return (0);
}
