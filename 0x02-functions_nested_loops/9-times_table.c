#include "main.h"

/**
 * times_table - print the 9 times table starting with 0
*/

void times_table(void)
{
	int a, b, multiplication;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			multiplication = a * b;
			if (multiplication <= 9)
				_putchar(' ');
			else
				_putchar((multiplication / 10) + '0');
			_putchar((multiplication % 10) + '0');
		}
		_putchar('\n');
	}
}
