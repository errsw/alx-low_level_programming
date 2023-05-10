#include "main.h"

/**
 * func1 - helps
 * @x: firts int
 * @y: scd int
 * @s: string
 * Return: 0
*/
int func1(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
		{
			return (1);
		}
		return (0 + func1(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * func2 - helps
 * @s: string
 * Return: length of string
*/
int func2(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + func2(s + 1));
}
/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (func1(s, 0, func2(s) - 1));
}
