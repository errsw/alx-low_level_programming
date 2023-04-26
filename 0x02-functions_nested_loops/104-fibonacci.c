#include "main.h"

/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	unsigned long x = 0;
	unsigned long y = 1;
	unsigned long t;

	printf("%lu, ", x);
	printf("%lu, ", y);

	while (1)
	{
		t = x + y;
		if (t < y)
		{
			break;
		}

		printf("%lu, ", t);
		x = y;
		y = t;
	}
	return (0);
}
