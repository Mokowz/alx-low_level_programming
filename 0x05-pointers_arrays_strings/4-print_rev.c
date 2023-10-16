#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int size, i;

	size = strlen(s);

	for (i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
