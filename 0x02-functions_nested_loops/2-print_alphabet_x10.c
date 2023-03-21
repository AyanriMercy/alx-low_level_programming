#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Description: a function
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int alpabt, z;

	for (z = 0; z < 10; z++)
	{
		for (alpabt = 'a'; alpabt <= 'z'; alpabt++)
		{
			_putchar(alpabt);
		}
		_putchar('\n');
	}
}
