#include "main.h"

/**
 * print_numbers - pritn numbers from 0 to 9
 *
 * Return: Null
 */
void print_numbers(void)
{
	int num = '0';

	while (num < '10')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
