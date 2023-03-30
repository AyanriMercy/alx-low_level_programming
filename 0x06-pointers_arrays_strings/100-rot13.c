#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * Description: a function that  simple letter substitution cipher that
 * replaces a letter with the letter 13 letters after it in the alphabet
 * @word: string to be checked
 * Return: string ciphered with Rot13
 */

char *rot13(char *word)
{
	int a, b;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replce[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; word[a] != '\0'; a++)
	{
		for (b = 0; b < 54; b++)
		{
			if (((word[a] <= 'z' && word[a] >= 'a') || (word[a] <= 'Z' &&
						word[a] >= 'A')) && word[a] == letter[b])
			{
				word[a] = replce[b];
				break;
			}
		}
	}
	return (word);
}
