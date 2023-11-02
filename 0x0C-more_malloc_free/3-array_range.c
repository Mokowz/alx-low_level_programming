#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers from min to max
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Created array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	len = (max - min) + 1;

	arr = malloc(len * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			arr[i] = min;
			min++;
		}
	}
	return (arr);
}
