#include "main.h"

void *malloc_checked(unsigned int b);

/**
 * *malloc_checked - allocates memory using malloc
 * Description: this function accepts a single argument b of type unsigned int
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 * @b: argument
 * Return: void pointer to the first allocated byte of memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
