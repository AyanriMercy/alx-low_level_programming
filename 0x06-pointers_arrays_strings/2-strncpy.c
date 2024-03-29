#include "main.h"

/**
 * *_strncpy - copies a string
 * Description: a function that copies the string pointed to by src,
 * including the terminating null byte ('\0'), to the buffer pointed to by dest
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 * @n: number of characters to be copied from source
 * Return: pointer to the destination string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
