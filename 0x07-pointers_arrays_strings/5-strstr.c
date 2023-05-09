#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			X++;
			Y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (NULL);
}
