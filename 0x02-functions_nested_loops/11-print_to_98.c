#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers to 98
 * @n: starting integer
 * Description: Print all numbers
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
