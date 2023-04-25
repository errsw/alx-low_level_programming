#include <"main.h">

/**
 * _islower - check if caracter is lowercase
 * @c: checks input of function
 * Return: 1 if c is lowercase otherwise 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
