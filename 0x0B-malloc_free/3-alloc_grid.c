#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the newly allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

