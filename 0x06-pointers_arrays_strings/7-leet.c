#include "main.h"

/**
 * *leet - encodes a string into 1337
 * Description: a function that uses various combinations of ASCII characters
 * to replace Latinate letters. The basic data unit of L33t is the unsigned
 * byte which can represent ASCII values and numbers in the range 0-255
 * Letters a & A should be replaced by 4, Letters e & E should be replaced by 3
 * Letters o & O should be replaced by 0, Letters t & T should be replaced by 7
 * Letters l & L should be replaced by 1
 * @words: string to be encoded
 * Return: encoded string
 */

char *leet(char *words)
{
	int a, b = 0;
	char letter[] = "aAeEoOtTlL";
	char replace[] = "43071";

	while (words[b] != '\0')
	{
		for (a = 0; a < 10; a++)
		{
			if (words[b] == letter[a])
			{
				words[b] = replace[a / 2];
			}
		}
		b++;
	}
	return (words);
}
