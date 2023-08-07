#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * error - print error
 * @t: text to print
 * @a: file
 * @b: code
 */

void error(const char *t, const char *a, int b)
{
	fprintf(stderr, t, a, b);
	exit(b);
}

/**
 * main - Entry point
 * @c: arg
 * @v: arg
 * Return: 1 or 0
 */

int main(int c, char **v)
{
	int x, y;
	ssize_t z;
	char a[BUF];

	x = 0;
	y = 0;

	if (c != 3)
		error("Usage : cp file_from file_to\n", "", 97);
	x = open(v[1], O_RDONLY);
	if (x == -1)
		error("Error: Can't read from file %s\n", v[1], 98);
	y = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (y == -1)
		error("Error: Can't write to %s\n", v[2], 99);
	while ((z = read(x, a, BUF)) > 0)
	{
		if (write(y, a, z) != z)
			error("Error: Can't write to %s\n", v[2], 99);
		if (z == -1)
			error("Error: Can't read from file %s\n", v[1], 98);
	}
	if (z == -1)
		error("Error: Can't read from file %s\n", v[1], 98);
	if (close(x) == -1)
		error("Error: Can't close fd %s\n", v[1], 100);
	if (close(y) == -1)
		error("Error: Can't close fd %s\n", v[2], 100);
	return (0);
}
