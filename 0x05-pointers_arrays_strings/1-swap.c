#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap values of two integers
 * @a: the first pointer to integer
 * @b: the second pointer to integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
