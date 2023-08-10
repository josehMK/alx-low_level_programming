#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimesional arrays
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}

