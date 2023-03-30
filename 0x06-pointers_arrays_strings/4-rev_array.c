#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * Description: a function that reverses the order of the elements in a
 * one-dimensional Array or in a portion of the Array
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, array;

	for (i = n - 1; i > n / 2; i--)
	{
		array = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = array;
	}
}
