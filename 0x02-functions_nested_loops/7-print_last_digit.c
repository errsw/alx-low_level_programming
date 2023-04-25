#include "main.h"

/**
 * print_last_digit -print the last digit of a number
 * @n: integer
 * Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = -(n % 10);
	else
		d = n % 10;
	_putchar(d + '0')
	return (d);
}
