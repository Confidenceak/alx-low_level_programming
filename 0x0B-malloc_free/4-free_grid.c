#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2 dimensional frid previously created
 * @grid: the address of the 2nd grid
 * @height: height of the grid
 *
 * Return: Nothing.
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
