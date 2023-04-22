#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100 ; b++)
		{
			if (a != b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
