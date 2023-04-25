#include "main.h"

/**
 * _isalpha - ckeck if c is lowercase or uppercase
 * @c: ckecker of the input
 * Return: 0 if lowercase or uppercase oherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
