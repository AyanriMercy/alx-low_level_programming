#include "main.h"

/**
 * *str_concat - concatenates two strings
 * Description: a function that concatenates the destination string and the
 * source string and the result is stored in the destination string
 * The returned pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2
 * and null terminated
 *
 * @s1: pointer to the destination array, which should contain a C string
 * and should be large enough to contain the concatenated resulting string.
 * @s2: This is the string to be appended. This should not overlap the
 * destination.
 * Return: pointer to the resulting string s1
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int number;
	int size1 = 0, size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	pointer = malloc((size1 + size2 + 1) * sizeof(char));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (number = 0; number < size1; number++)
	{
		pointer[number] = s1[number];
	}
	for (; number < (size1 + size2); number++)
	{
		pointer[number] = s2[number - size1];
	}
	pointer[number] = '\0';
	return (pointer);
}
