#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 *
 * Return: Null
 */
void print_most_numbers(void)
{
	int num = '0';

	while (num < '10')
	{
		if (num != '2' || num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
