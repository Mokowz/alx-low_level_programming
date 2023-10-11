#include "main.h"

/**
 * print_last_digit - Print last digit
 *
 * Return: Integer
 */
int print_last_digit(int n)
{
	int last_dgt = n % 10;

	_putchar(last_dgt);
	return (last_dgt);
}
