#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * Description: a function that finds the first character in the string s
 * that matches any character specified in accept.
 * This does not include the terminating null-characters.
 * @s: C string to be scanned
 * @accept: C string containing the characters to match
 * Return: a pointer to the character in s that matches one of the characters
 * in accept or NULL if no such character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
