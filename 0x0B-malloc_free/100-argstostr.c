#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program
 * Description: a function
 * @ac: number of arguments
 * @av: pointer
 * Return: pointer to a new string
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */

char *argstostr(int ac, char **av)
{
	char *pointer;
	int string1 = 0, string2 = 0, count;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	while (string1 < ac)
	{
		string2 = 0;
		while (av[string1][string2] != '\0')
		{
			count++;
			string2++;
		}
		string1++;
	}

	pointer = malloc((count + ac + 1) * sizeof(char));
	if (pointer == NULL)
	{
		return (0);
	}
	string1 = 0;
	count = 0;
	while (string1 < ac)
	{
		string2 = 0;
		while (av[string1][string2] != '\0')
		{
			pointer[count] = av[string1][string2];
			string2++;
			count++;
		}
		pointer[count] = 10;
		count++;
		string2++;
		string1++;
	}
	return (pointer);
}
