#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: numbers of parameter
 * @...: int.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (y--)
		x += va_arg(ap, int);
	va_end(ap);
	return (x);
}
