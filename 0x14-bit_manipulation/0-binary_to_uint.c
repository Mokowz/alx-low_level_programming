#include "main.h"

/**
 * unsigned int binary_to_uint - convert a binary to a number
 * @b: Binary number
 *
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i, lenth;

	sum = 0;
	length = strlen(b);

	if (b == NULL)
		return (sum);

	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * (power(2, length - i - 1));
	}

	return (sum);
}

/**
 * power - powers a number
 * @base: Number
 * @exp: Exponential
 * Return: numebr
 */
int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; i++)
		num *= base;

	return (num);
}
