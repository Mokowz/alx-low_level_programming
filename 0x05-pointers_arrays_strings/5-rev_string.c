#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, i = 0;

	length = strlen(s) - 1;

	while (length > i)
	{
		swap_char(s +length, s + i);
		i++;
		length--;
	}
}

/**
 * swap_char - swap characters
 * @a: first character
 * @b: second character
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
