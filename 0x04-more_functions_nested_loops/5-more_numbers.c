#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: Null
 */
void more_numbers(void)
{
	int num = 0, i = 0;

	while (i < 10)
	{
		while (num < 15)
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		num = 0;
		i++;
	}
}
