#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *)&x;

	return ((int)*c);
}
