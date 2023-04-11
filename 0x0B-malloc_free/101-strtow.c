#include "main.h"

/**
 * **strtow - splits a string into words
 * Description: The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * @str: string to be split
 * Return: pointer to an array of strings (words)
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **pointer;
	int str1 = 0, str2 = 0, total = 0, len = 0, word = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (str[str2] != '\0')
	{
		total++;
		if (str[str2] != 32 && (str[str2 + 1] == 32 || str[str2 + 1] == '\0'))
			len++;
	str2++;
	}
	if (len == 0)
		return (0);
	pointer = (char **)malloc(sizeof(char *) * (len + 1));
	if (pointer == NULL)
		return (0);
	str2 = 0;
	total = 0;
	while (str[str2] != '\0')
	{
		if (str[str2] != 32)
			total++;
		{
			if (total > 0 && (str[str2 + 1] == 32 || str[str2 + 1] == '\0'))
			{
				pointer[word] = (char *)malloc((total + 1) * sizeof(char));
				if (pointer[word] == NULL)
					return (0);
				for (str1 = 0; str1 < total; str1++)
					pointer[word][str1] = str[str2 - total + 1 + str1];
				pointer[word][str1] = '\0';
				word++;
				total = 0;
			}
		}
		str2++;
	}
	pointer[len] = '\0';
	return (pointer);
}
