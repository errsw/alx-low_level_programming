#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string
 * @n: number of strings
 * @...: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *y;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (y = va_arg(ap, char *)) ? y : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
