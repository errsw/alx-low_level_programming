#include "main.h"
/**
 * print_times_table - print n times table
 * @n: inputs
*/
void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				m = a * b;
				if (b == 0)
				{
					_putchar(m + '0');
				}
				else if (m < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			} _putchar('\n');
		}
	}
}
