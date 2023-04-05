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

/**
 * comp - compares
 * @s: character string
 * @x: start point
 * @y: end point
 * Return: bool
 */

int comp(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	if (x < y)
	{
		return (comp(s, x + 1, y - 1));
	}
	return (1);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * Description: An empty string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	char *temp;
	int size;
	int start = 0, stop;

	temp = s;
	size = _strlen_recursion(temp);
	stop = size - 1;
	{
		return (comp(s, start, stop));
	}
}
