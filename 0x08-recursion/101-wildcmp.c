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
* comp - string comparison
* @s1: pointer to the constant character (immutable string)
* @s2: pointer to a constant character
* @x: iterator for s1
* @y: iterator for s2
* @firstwc: first wildcard
* @lastwc: last wildcard
* @length: length s1
* Return: <, >, = 0
**/

int comp(char *s1, char *s2, int x, int y, int firstwc, int lastwc, int length)
{
	if (s2[y] == '\0' && (s2[y - 1] == '*' || s2[y - 1] == s1[length - 1]))
	{
		return (1);
	}
	if (s2[y] == '*')
	{
		lastwc = ++y;
		firstwc = 1;
		return (comp(s1, s2, x, y, firstwc, lastwc, length));
	}
	if (s2[y] == s1[x])
	{
		x++;
		y++;
		firstwc = 0;
		return (comp(s1, s2, x, y, firstwc, lastwc, length));
	}
	if (s1[x] != s2[y] && firstwc == 1)
	{
		if (s1[x] == '\0')
		return (0);
		x++;
		return (comp(s1, s2, x, y, firstwc, lastwc, length));
	}
	if (s1[x] == '\0')
		return (0);
	if (s1[x] != s2[y] && firstwc == 0)
	{
		y = lastwc;
		firstwc = 1;
		if (lastwc == 0)
		return (0);
		return (comp(s1, s2, x, y, firstwc, lastwc, length));
	}
	return (0);
}

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * Description: Commonly used wildcard characters are the asterisk (*)
 * It represents zero or more characters in a string of characters
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	int x = 0, y = 0;
	int firstwc = 1, lastwc = 0;
	int length;

	length = _strlen_recursion(s1);
	{
		return (comp(s1, s2, x, y, firstwc, lastwc, length));
	}
}
