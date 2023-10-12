#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: Length of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 0, spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
