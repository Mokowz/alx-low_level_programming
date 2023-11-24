#include "main.h"

/**
 * set_bit - set value of bit to 1
 * @n: Number
 * @: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (mask << index);

	return (1);
}
