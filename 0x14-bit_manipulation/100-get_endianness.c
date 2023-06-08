#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned long int x;
	char *y = (char *)&x;
	return (*y);
}
