#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it with values
 * @size: Size of array
 * @c: Character
 *
 * Return: Pointer to character
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
