#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * Description: a function that writes a string to stdout up to but not
 * including the null character. A newline character is appended to the output
 * @s: C string to be written
 * Return: If successful, non-negative value is returned
 * On error, the function returns EOF
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
