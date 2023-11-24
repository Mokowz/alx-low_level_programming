#include "main.h"

/**
 * flip_bits - flip bit to get to another number
 * @n: Number
 * @m: 2nd number
 * Return: number of change bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int flip;

	flip = n ^ m;

	while (flip)
	{
		num += flip & 1;
		flip = flip >> 1;
	}

	return (num);
}
