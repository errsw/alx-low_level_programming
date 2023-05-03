#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: input
 * Return: int
*/

int _atoi(char *s)
{
	unisigned int x = 0;
	int y = 1;

	do {
		if (*s == '-')
			y *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);
	return (x * y);
}
