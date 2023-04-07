#include "main.h"

/**
 * *_strcat - concatenates two strings
 * Description: a function that appends the src string to the dest string
 * overwriting the terminating null byte ('\0') at the end of dest
 * and then adds a terminating null byte
 * @dest: string to append src to
 * @src: the appending string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
		dest[b++] = src[a];

	return (dest);
}
