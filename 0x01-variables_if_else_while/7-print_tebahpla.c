#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
