#include "main.h"

/**
 * _memcpy - copy a number of bytes to a memory area
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Number of bytes
 *
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
