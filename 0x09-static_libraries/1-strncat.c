#include "main.h"

/**
 * *_strncat - concatenates two strings
 * Description: a function similar to strcat except that
 * it will use at most n bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes
 * As with strcat(), the resulting string in dest is always null-terminated
 * @dest: string to append src to
 * @src: the appending string
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

	return (dest);
}
