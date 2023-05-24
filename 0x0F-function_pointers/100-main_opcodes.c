#include <stdio.h>
#include <stdlib.h>

/**
* main -  prints the opcodes of its own main function
* @argc: number of arguments
* @argv: array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int bytes, x;
	char *y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	y = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", y[x]);
			break;
		}
		printf("%02hhx ", y[x]);
	}
	return (0);
}
