#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * *_calloc - allocates memory for an array, using malloc
 * Description: this function allocates the requested memory and returns
 * pointer to it. The difference in malloc and calloc is that malloc does not
 * set the memory to zero where as calloc sets allocated memory to zero
 * The _calloc function allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory
 * The memory is set to zero. If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * @nmemb: number of elements to be allocated.
 * @size: size of elements.
 * Return: pointer to the allocated memory, or NULL if the request fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (0);

	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (0);
	for (count = 0; count < nmemb * size; count++)
	{
		pointer[count] = 0;
	}
	return (pointer);
}
