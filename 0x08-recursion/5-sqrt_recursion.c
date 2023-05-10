#include "main.h"

/**
 * _sqrt1 - to help
 * @n: number
 * @x: iterate number
 * Return: the natural square
*/

int _sqrt1(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt1(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number
 * Return: n or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt1(n, 1));
}
