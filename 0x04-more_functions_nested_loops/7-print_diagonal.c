#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Description: a function
 * @n: number of times the character \ should be printted
 * Return: void
 */

void print_diagonal(int n)
{
	int x = 0, xx;

	while (x < n && n > 0)
	{
		xx = 0;
		while (xx < x)
		{
			_putchar(' ');
			xx++;
		}

		_putchar('\\');
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
