#include "main.h"

/**
 * is_divisible - is the number divisible?
 * @n: The number
 * @div: Divisor
 *
 * Return: Result
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);

	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - is the number a prime number
 * @n: The number
 *
 * Return: result
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
