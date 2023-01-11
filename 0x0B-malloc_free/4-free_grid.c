#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional grid created in alloc_grid
 * @grid: pointer to poiter
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
