#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: files's name
 * @letters: number of letters
 * Return: int
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t y;
	char *z;

	if (filename == NULL || letters == 0)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	z = malloc(sizeof(char) * letters);
	y = read(x, z, letters);
	y = write(STDOUT_FILENO, z, y);
	free(z);
	close(x);
	return (y);
}
