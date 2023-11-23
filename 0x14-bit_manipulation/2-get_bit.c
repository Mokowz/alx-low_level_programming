#include "main.h"

/**
 * get_bit - return value of a bit at an index
 * @n: Number
 * @index: Index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
