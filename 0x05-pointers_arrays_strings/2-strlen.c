#include <stdio.h>
#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: String s
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size += 1;
	}
	return size;
}
