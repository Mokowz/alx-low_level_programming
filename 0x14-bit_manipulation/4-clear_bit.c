#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n: Number
 * @index: Index to be changed
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = mask << index;
	*n &= ~mask;

	return (1);
}
