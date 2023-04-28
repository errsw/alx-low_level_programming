#include <stdio.h>
/**
 * main - the largest prime
 * Return: 0
 */

int main(void)
{
	long x = 612852475143;
	int a;

	for (a = 2; a <= x; a++)
	{
		while (x % a == 0)
		{
			x = x / a;
			if (x == 1)
			{
				printf("d\n", a - 1);
				return (0);
			}
		}
	}
}
