#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: n is the digit
 *
 * Return: Integer
 */
int print_last_digit(int n)
{
	int last_dgt = n % 10;

	if (n < 0)
		last_dgt = last_dgt * -1;
	_putchar(last_dgt + '0');
	return (last_dgt);
}
