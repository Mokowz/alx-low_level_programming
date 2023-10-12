#include "main.h"

/**
 * print_triangle - print a triangel
 * @size: Size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line = 0, space, hash;

	if (size > 0)
	{
		while (line < size)
		{
			for (space = size - 1; space > line; space--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < line + 1; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
