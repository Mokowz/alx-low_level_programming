#include "main.h"

/**
 * _pow_recursion - return power of x
 * @x: Base int
 * @y: Power
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _power_recursion(x, y - 1);
	}
}
