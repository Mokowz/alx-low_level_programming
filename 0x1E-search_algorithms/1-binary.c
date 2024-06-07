#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left_branch, right_branch;

	if (array == NULL)
		return (-1);

	for (left_branch = 0, right_branch = size - 1; right_branch >= left_branch;)
	{
		printf("Searching in array: ");
		for (i = left_branch; i < right_branch; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left_branch + (right_branch - left_branch) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right_branch = i - 1;
		else
			left_branch = i + 1;
	}

	return (-1);
}
