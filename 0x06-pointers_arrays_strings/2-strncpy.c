#include "main.h"

/**
 * _strncpy - Copy a string to another string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to copy
 *
 * Return: Destnination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
