#include "main.h"

/**
 * is_prime - helps
 * @n: number
 * @x: int
 * Return: 1 or 0
*/

int is_prime(int n, int x)
{
	if (x * x > n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (is_prime(n, x + 1));


/**
 * is_prime_number - check if prime number
 * @n: number
 * Return: int value
*/

int is_prime_number(int n)
{
	return (is_prime(n, 1));
