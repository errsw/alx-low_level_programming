#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	int x;
	char a;

	srand(time(NULL));
	while (x <= 2645)
	{
		a = rand() % 94;
		x = x + a;
		putchar(a);
	}
	putchar(2772 - x);
	return (0);
}
