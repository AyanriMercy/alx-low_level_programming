#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character to be checked
 * Description: a function
 * Return: string length
 */

int _strlen(char *s)
{
	int lng = 0;

	while (*s != '\0')
	{
		s++;
		lng++;
	}
	return (lng);
}
