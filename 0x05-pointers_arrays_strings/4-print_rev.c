#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string character
 * Description: a function
 * Return: void
 */

void print_rev(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		s++;
		str++;
	}
	while (str > 0)
	{
		s--;
		_putchar(*s);
		str--;
	}
	_putchar('\n');
}
