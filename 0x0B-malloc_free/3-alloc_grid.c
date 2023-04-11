#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * Description: a function
 * Each element of the grid should be initialized to 0
 * @width: breadth
 * @height: length
 * Return: a pointer to a 2 dimensional array of integers
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int length;
	int breadth;
	int **two_dim;

	if (width < 1 || height < 1)
	{
		return (0);
	}

	two_dim = (int **) malloc(height * sizeof(*two_dim));

	if (two_dim == NULL)
	{
		return (0);
	}
	for (breadth = 0; breadth < height; breadth++)
	{
		two_dim[breadth] = malloc(width * sizeof(int));
		if (two_dim[breadth] == NULL)
		{
			for (length = 0; length < breadth; length++)
			{
				free(two_dim[length]);
			}
			free(two_dim);
			return (0);
		}
		for (length = 0; length < width; length++)
		{
			two_dim[breadth][length] = 0;
		}
	}
	return (two_dim);
}
