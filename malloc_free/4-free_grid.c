#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - free a grid created by alloc_grid
 * @grid: the grid to free
 * @height: the heaigt of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
