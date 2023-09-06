#include "main.h"

/**
 * free_grid - frees a 2d grid previously created by your alloc_grid function.
 * @grid: Grid
 * @height: Height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
