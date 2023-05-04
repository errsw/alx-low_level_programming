#include "main.h"

/**
 * _strncat - prints a string, in reverse
 * @dest: pointer
 * @src: pointer
 * @n: max numbers
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);

