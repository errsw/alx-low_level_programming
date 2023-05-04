#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: n
*/

char *leet(char *n)
{
	int a, b;
	char alphabet[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == alphabet[b])
			{
				n[a] = number[b];
			}
		}
	}
	return (n);
}
