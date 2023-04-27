#include "main.h"

/**
 * print_times_table - print n times table
 * @n: inputs
*/

void print_times_table(int n)
{
	int rslt, a, b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n ; b++)
			{
				_putchar(',');
				_putchar(' ');

				rslt = a * b;

				if (rslt <= 9)
					_putchar(' ');
				if (rslt <= 99)
					_putchar(' ');
				if (rslt >= 100)
				{
					_putchar((rslt / 100) + 48);
					_putchar((rslt / 10) % 10 + 48);
				}
				else if (rslt <= 99 && rslt >= 10)
				{
					_putchar((rslt / 10) + 48);
					_putchar(rslt % 10 + 48);
				}
				_putchar('\n');
			}
		}
	}
}
