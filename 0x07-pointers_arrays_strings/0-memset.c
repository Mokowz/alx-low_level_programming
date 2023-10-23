#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: Pointer to the memory
 * @b: Character to fill the memory
 * @n: Size
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
