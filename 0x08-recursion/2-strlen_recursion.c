#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * Description: a fucntion that computes the length of the string str up to
 * but not including the terminating null character
 * @s: string whose length is to be found
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
