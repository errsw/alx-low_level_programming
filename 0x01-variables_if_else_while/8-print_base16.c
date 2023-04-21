#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{putchar(x + '0');
	}

	for (x = 0; x < 6; x++)
	{putchar(x + 'a');
	}

	putchar('\n');
	return (0);
}
