#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free space allocated to the 2D array
 * @grid: Array
 * @height: Row
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
