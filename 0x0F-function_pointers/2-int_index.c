#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int));

/**
 * int_index - searches for an integer
 * Description: a function that returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1. If size <= 0, return -1
 * @array: array given
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return:  index of the first element for which the cmp function
 * does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
