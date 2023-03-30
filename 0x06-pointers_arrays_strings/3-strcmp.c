#include "main.h"

/**
 * _strcmp - compares two strings
 * Description: a function that compares the two strings s1 and s2
 * if Return value < 0 then it indicates str1 is less than str2
 * if Return value > 0 then it indicates str2 is less than str1
 * if Return value = 0 then it indicates str1 is equal to str2
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer >0, <0 or =0
 */

int _strcmp(char *s1, char *s2)
{
	int in = 0, a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			in = s1[a] - s2[a];
			return (in);
		}
		a++;
	}

	return (in);
}
