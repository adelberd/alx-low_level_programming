#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a grid created by alloc_grid function.
* @grid: grid to free memory from.
* @height: height of the grid.
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
