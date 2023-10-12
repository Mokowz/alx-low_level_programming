#include "main.h"

/**
 * _isdigit - Check for digits
 * @c: Digit given
 *
 * Return: 1 if digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
