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
			for (b = 0; b <= n; b++)
			{
				rslt = a * b;
				if (b == 0)
					_putchar(rslt + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
				if (rslt >= 100)
				{
					_putchar(rslt / 100 + '0');
					_putchar((rslt / 100) / 10 + '0');
					_putchar(rslt % 10 + '0');
				}
				else if (rslt >= 10)
				{
					_putchar(' ');
					_putchar(rslt / 10 + '0');
					_putchar(rslt / 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(rslt + '0');
				}
			_putchar('\n');
			}
}
