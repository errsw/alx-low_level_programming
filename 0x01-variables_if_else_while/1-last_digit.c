#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit)
	if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit)
	if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit)
	return (0);
}
