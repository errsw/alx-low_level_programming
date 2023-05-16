#include <stdlib.h>
#include "main.h"

/**
 * func - helper
 * @str: string to evaluate
 * Return: number of words
 */
int func(char *str)
{
	int x, a, b;

	x = 0;
	b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **a, *b;
	int x, y = 0, z = 0, w, i = 0, j, h;

	while (*(str + z))
		z++;
	w = func(str);
	if (w == 0)
		return (NULL);

	a = (char **) malloc(sizeof(char *) * (w + 1));
	if (a == NULL)
		return (NULL);

	for (x = 0; x <= z; z++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (i)
			{
				h = x;
				b = (char *) malloc(sizeof(char) * (i + 1));
				if (b == NULL)
					return (NULL);
				while (j < h)
					*b++ = str[j++];
				*b = '\0';
				a[y] = b - i;
				y++;
				i = 0;
			}
		}
		else if (i++ == 0)
			j = x;
	}

	a[y] = NULL;

	return (a);
}
