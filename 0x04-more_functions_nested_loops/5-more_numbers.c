#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: Null
 */
void more_numbers(void)
{
	int num, i;

	for (i = '0'; i <= '9'; i++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
