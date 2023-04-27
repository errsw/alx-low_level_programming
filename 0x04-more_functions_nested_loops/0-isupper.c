#include "main.h"

/**
 * _isupper - check if the alphabet is upper
 * @c: input
 * Return: 1 if upper 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
