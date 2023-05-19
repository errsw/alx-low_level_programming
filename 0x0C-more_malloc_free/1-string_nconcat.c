#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	if (n >= y)
		n = y;

	s = malloc(sizeof(char) * (x + n + 1));
	if (s == NULL)
		return (NULL);

	for (a = 0; a < x; a++)
		s[a] = s1[a];

	for (b = 0; b < n; b++)
		s[a + b] = s2[b];

	s[a + b] = '\0';

	return (s);
}
