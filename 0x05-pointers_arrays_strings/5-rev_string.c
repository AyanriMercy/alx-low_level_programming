#include "main.h"

/**
 * rev_string - reverses a string
 * Description: a function
 * @s: string charcter
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char str;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a > 0)
	{
		for (b = 0; b < (a - 1); b++)
		{
			str = s[b + 1];
			s[b + 1] = s[b];
			s[b] = str;
		}
		a--;
	}
}
