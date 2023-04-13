#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * *string_nconcat - concatenates two strings
 * Description: in this function, the returned pointer shall point to a newly
 * allocated space in memory, which contains s1, followed by the first n bytes
 * of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int string1 = 0, string2 = 0, bytes;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[string1] != '\0')
		string1++;
	while (s2[string2] != '\0')
		string2++;
	if (n > string2)
		n = string2;

	pointer = malloc((string1 + n + 1) * sizeof(char));
	if (pointer == NULL)
		return (0);
	for (bytes = 0; bytes < string1; bytes++)
	{
		pointer[bytes] = s1[bytes];
	}
	for (; bytes < (string1 + n); bytes++)
	{
		pointer[bytes] = s2[bytes - string1];
	}
	pointer[bytes] = '\0';
	return (pointer);
}
