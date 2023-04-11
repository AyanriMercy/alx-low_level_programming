#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function in question 3-alloc_grid.c
 * Description: a function
 * Note that we will compile with your alloc_grid.c file. Make sure it compiles
 * @grid: pointer
 * @height: iterator
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int size;

	if (grid != NULL && height > 0)
	{
		for (size = 0; size < height; size++)
		{
			free(grid[size]);
		}
		free(grid);
	}
}
