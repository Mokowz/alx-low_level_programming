#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: Character being checked
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
