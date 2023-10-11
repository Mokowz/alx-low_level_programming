#include "main.h"

/**
 * _islower - checks if cahracter is lower case or not
 * @c: c is a letter
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
