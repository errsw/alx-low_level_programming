#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
