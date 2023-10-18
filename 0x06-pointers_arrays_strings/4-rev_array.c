#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @a: Array to be reversed
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[j - 1];
		a[j - 1] = temp;
		i++;
		j--;
	}
}
