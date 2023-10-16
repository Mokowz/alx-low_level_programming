#include <stdio.h>
#include "main.h"

/**
 * puts_half - print second half of the string
 * @str: String to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int size, i, n;

	size = _strlen(str);

	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
