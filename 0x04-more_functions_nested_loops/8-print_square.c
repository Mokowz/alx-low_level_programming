#include "main.h"

/**
 * print_square - print a square
 * @size: Size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
