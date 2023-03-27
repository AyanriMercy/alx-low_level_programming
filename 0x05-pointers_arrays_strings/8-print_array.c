#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @n: number of elements of the array to be printed
 * @a: pointer array
 * Description: a function
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
		{
			printf("%d", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
	}
	printf("\n");
}
