#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file's name
 * @text_content: string
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y;
	size_t z;


	if (filename == NULL)
                return (-1);

	x = open(filename, O_WRONLY | O_APPEND);
	z = 0;

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
	return(1);
}
