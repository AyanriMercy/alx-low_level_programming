#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * Description: a function that converts every characters to uppercase (if
 * there is an uppercase version). If a character does not have an uppercase
 * equivalent, it remains unchanged. For example, special symbols remain
 * unchanged
 * @words: string to capitalize
 * Return: a copy of the current string converted to uppercase
 */

char *string_toupper(char *words)
{
	int a;

	for (a = 0; words[a] != '\0'; a++)
	{
		if (words[a] <= 'z' && words[a] >= 'a')
			words[a] -= 32;
	}
	return (words);
}
