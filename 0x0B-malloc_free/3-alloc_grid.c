#include <stdlib.h>

/**
 * alloc_grid - grid allocator
 * @width: width of the gridd
 * @height: height of the grid
 * Description: grid allocator
 * Return: pointer to a pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;


	grid = (int **)malloc(sizeof(int *) * width);


	for (x = 0; x < width; x++)
	{
		grid[x] = malloc(sizeof(int) * height);
		for (y = 0; y < height; y++)
		{
			grid[x][y] = 0;
		}

	}

	
	return (grid);
}
