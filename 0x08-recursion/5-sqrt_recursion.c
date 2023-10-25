#include "main.h"

/**
 * _sqrt - finds square root
 * @prev: Previous number
 * @root: Square value
 *
 * Return: Square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);

	return (_sqrt(prev + 1, root));
}

/**
 * _sqrt_recursion - get square root recursively
 * @n: Number
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}
