#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int x = 1, y = 2, z;
	int a;

	printf("%lu, %lu, ", x, y);

	for (a = 2; a < 50; a++)
	{
		z = x + y;
		printf("%lu, ", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
