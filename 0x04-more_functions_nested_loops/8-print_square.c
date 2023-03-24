#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * Description: a function
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int a = 0, aa;

	while (a < size && size > 0)
	{
		aa = 0;
		while (aa < size)
		{
			_putchar('#');
			aa++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
