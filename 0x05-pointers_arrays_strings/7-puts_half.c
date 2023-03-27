#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * Description: a function
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last
 * n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: string character to be checked
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int b = 0;
	int x;
	int y;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		y = (a - 1) / 2;
	}
	else
	{
		y = a / 2;
	}
	x = a - y;
	while (b < y)
	{
		_putchar(str[b + x]);
		b++;
	}
	_putchar('\n');
}
