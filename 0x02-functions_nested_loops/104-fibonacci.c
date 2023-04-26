#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int x;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int l = 1000000000;
	unsigned long int a1, b1;
	unsigned long int a2, b2;

	printf("%lu", a);
	for (x = 1; x < 91; x++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}
	a1 = (a / l);
	a2 = (a % l);
	b1 = (b / l);
	b2 = (b % l);
	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", b1 + (b2 / l));
		printf("%lu", b2 % l);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
