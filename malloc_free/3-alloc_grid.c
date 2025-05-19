#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - allocate a 2d array
 * @width: array width
 * @height: array height
 *
 * Return: the address of the newly created 2d array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}
		i++;
	}

	return (grid);
}
