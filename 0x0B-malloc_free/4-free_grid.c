#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free previously allocated memory
 * @grid: address of an array
 * @height: no of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
