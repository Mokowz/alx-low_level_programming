#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: First string
 * @s2: String 2
 *
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
