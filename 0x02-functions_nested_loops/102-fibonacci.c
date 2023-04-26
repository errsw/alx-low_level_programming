#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long long int x = 1, y = 2, z;
	int a;

	printf("%d, %d, ", x, y);

	for (a = 2; a < 50; a++)
	{
		z = x + y;
		printf("%d, ", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
