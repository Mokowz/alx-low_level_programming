#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: Number
 *
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
