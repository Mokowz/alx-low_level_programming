#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns an error
 * @b: Size
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
		exit(98);
	return (arr);
}
