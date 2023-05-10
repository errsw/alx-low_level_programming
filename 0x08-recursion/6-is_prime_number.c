#include "main.h"

/**
 * is_prime - helps
 * @n: number
 * @x: int
 * Return: 1 or 0
*/

int is_prime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % x == 0 && x > 1)
	{
		return (0);
	}
	else if ((n / x) < x)
	{
		return (1);
	}
	return (is_prime(n, x + 1));
}

/**
 * is_prime_number - check if prime number
 * @n: number
 * Return: int value
*/

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
