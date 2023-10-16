#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int size, i;

	size = _strlen(s) - 1;

	while (size > i)
	{
		swap_char(s + size, s + i);
		i++;
		size--;
	}
}

/**
 * swap_char - swap characters of a string
 * @a: First character
 * @b: Second character
 *
 * Return: void
 */
void swap_char(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
