#include "main.h"

/**
 * *array_range - creates an array of integers.
 * Prototype: int *array_range(int min, int max);
 * Description: in this function, the array created should contain all the
 * values from min (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If min > max, return NULL
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int array;

	if (min > max)
		return (0);

	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
		return (0);
	for (array = 0; array < (max - min + 1); array++)
	{
		pointer[array] = array + min;
	}
	return (pointer);
}
