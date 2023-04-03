#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * Description: a function
 * @a: array
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum;
	int side1 = 0, side2 = 0;

	for (sum = 0; sum <= size * size; sum = sum + size + 1)
	{
		side1 = side1 + *(a + sum);
	}
	for (sum = size - 1; sum < (size * size - 1); sum = sum + size - 1)
	{
		side2 = side2 + *(a + sum);
	}
	printf("%d, %d\n", side1, side2);
}
