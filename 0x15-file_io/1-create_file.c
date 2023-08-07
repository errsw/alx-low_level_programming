#include "main.h"

/**
 * create_file - creates a file
 * @filename: file#s name
 * @text_content: string
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, z;

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	z = 0;

	if (filename == NULL)
		return (-1);
	if (x == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[z])
			z++;
		y = write(x, text_content, z);
		if (y == -1)
		{
			close(x);
			return (-1);
		}
	}
	close(x);
	return (1);
}
