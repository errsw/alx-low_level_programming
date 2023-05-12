#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - prints the sum of args
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int a, sum = 0;
	char *b;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			b = argv[x];

			for (a = 0; a < strlen(b); a++)
			{
				if (b[a] < 48 || b[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(b);
			b++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
