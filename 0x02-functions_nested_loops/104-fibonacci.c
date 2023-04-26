#include "main.h"

/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	unsigned long x = 1;
	unsigned long y = 1;
	unsigned long t;

	printf("%lu, ", x);

	while (y < 100000000)
	{
		t = x + y;
		printf("%lu, ", t);
		x = y;
		y = t;
	}
	return (0);
}
