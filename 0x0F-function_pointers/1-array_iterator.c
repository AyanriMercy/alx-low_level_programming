#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * Description: a function
 * @array: array given
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t number;

	if (action && array)
	{
		for (number = 0; number < size; number++)
		{
			action(array[number]);
		}
	}
}
