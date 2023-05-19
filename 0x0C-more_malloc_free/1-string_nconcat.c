#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, x = 0, y = 0;
	char *str;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		str = malloc(sizeof(char) * (x + n + 1));
	else
		str = malloc(sizeof(char) * (x + y + 1));

	if (!str)
		return (NULL);

	while (a < x)
	{
		str[a] = s1[a];
		a++;
	}

	while (n < y && a < (x + n))
		str[x++] = s2[b++];

	while (n >= y && a < (x + y))
		str[a++] = s2[b++];

	str[a] = '\0';

	return (str);
}
