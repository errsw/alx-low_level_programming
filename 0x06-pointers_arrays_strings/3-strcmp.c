#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 or 0
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			a = ((int)*s1 - 48) - ((int)*s2 - 48);
		}
		s1++;
		s2++;
	}
	return (a);
}
