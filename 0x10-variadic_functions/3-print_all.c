#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: arguments
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *y, *z = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", z, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", z, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", z, va_arg(lst, double));
					break;
				case 's':
					y = va_arg(lst, char *);
					if (!y)
						y = "(nil)";
					printf("%s%s", z, y);
					break;
				default:
					x++;
					continue;
			}
			z = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(lst);
}
