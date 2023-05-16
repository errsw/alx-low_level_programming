#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: input
 * @av: pointer array
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	x = malloc(sizeof(char) * d + 1);
	if (x == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			x[c] = av[a][b];
			c++;
		}
		if (x[c] == '\0')
		{
			x[c++] = '\n';
		}
	}
	return (x);
}
