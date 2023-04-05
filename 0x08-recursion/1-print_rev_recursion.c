#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * Description: a function that s used to reverse the given string
 * @s: given string which is needed to be reversed
 * Return: doesn’t return anything but the reversed string is stored
 * in the same string.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
