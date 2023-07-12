#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function retuens a pointer to a pointer
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(grid[w]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
