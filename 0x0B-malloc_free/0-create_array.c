#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with
 * a specific char
 * Description: a function that Creates a new array of the specified length
 * that is initialized with default values for the array’s inferred data type
 * @size: seize of the array
 * @c: specific character to initialize
 * Return: new array created. Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int number;

	if (array == 0)
	{
		return (0);
	}

	if (size > 0)
	{
		for (number = 0; number < size; number++)
		{
			array[number] = c;
		}
	}
	else
	{
		return (0);
	}
	return (array);
}
