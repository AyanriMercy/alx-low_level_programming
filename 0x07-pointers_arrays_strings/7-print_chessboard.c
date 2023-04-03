#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * Description: a function that prints a 8x8 chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int side;
	int sides;

	for (side = 0; side < 8; side++)
	{
		for (sides = 0; sides < 8; sides++)
		{
			_putchar(a[side][sides]);
		}
		_putchar('\n');
	}
}
