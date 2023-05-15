#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	conct = malloc(sizeof(char) * (a + b + 1));

	if (conct == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		x[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		x[a] = s2[b];
		a++, b++;
	}
	x[a] = '\0';
	return (x);
}
