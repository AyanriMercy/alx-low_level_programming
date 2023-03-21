#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Description: a function
 * Return: 0
 */

void print_alphabet(void)
{
	int alpabt;

	for (alpabt = 'a'; alpabt <= 'z'; alpabt++)
	{
		_putchar(alpabt);
	}
	_putchar('\n');
}
