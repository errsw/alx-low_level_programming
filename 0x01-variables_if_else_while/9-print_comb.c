#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	for (x = 0; x < 100; x++)
	{putchar(x + '0');
		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
