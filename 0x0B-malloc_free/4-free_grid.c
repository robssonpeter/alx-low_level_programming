#include <stdlib.h>

/**
 * free_grid - memmory freer
 * @grid: the grid
 * @height: the height
 * Description: memory Freer
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
