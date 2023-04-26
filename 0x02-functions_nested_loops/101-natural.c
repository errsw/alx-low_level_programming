#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n, num;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}

