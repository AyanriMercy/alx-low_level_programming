#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * Description: a function that Converts initial character of a string to upper
 * case. it is useful for use before plotting, if one wants capitalized
 * axis labels or factor levels
 * @string: character vector
 * Return: character vector with upper case initial values
 */

char *cap_string(char *string)
{
	int x = 0;

	while (string[x] != '\0')
	{
		if (string[0] <= 122 && string[0] >= 97)
		{
			string[0] = string[0] - 32;
		}

		if (string[x] == 32 || string[x] == 44 || string[x] == 46 ||
				string[x] == 59 || string[x] == '\t' ||
				string[x] == '\n' || string[x] == '!' ||
				string[x] == '?' || string[x] == '(' ||
				string[x] == ')' || string[x] == '{' ||
				string[x] == '}')
		{
			if (string[x + 1] <= 122 && string[x + 1] >= 97)
			{
				string[x + 1] = string[x + 1] - 32;
			}
		}
		x++;
	}
	return (string);
}
