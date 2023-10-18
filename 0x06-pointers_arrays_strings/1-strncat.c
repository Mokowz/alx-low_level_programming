#include "main.h"

/**
 * _strncat - concatenate two strings by n characters
 * @dest: Destination string
 * @src: Source string
 * @n: Size
 *
 * Return: Destination string updated
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
