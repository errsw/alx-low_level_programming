#include "main.h"

/**
 * print_times_table - print n times table
 * @n: inputs
*/

void print_times_table(int n)
{
	int a, b, rslt;

	if (n >= 0 && n <= 15)
		for (a = 0; a <= n; a++)
			       _putchar('0');
			for (b = 0; b <= n; b++)
				_putchar(',');
                                        _putchar(' ');
		{
				rslt = a * b;
					_putchar(',');
					_putchar(' ');
				if (rslt < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(rslt + '0');
				}
				else if (rslt < 100)
				{
					_putchar(' ');
					_putchar(rslt / 10 + '0');
					_putchar(rslt % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((rslt / 10) % 10 + '0');
					_putchar(rslt % 10 + '0');
				}
				if (b == n)
					_putchar('\n');
		}
}
