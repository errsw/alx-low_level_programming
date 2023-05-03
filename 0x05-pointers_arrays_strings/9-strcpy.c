#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: char
 * @src: char
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
