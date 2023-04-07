#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @src: string pointer
 * @dest: array
 * Description: a funcyion
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int lng = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	lng = a;
	for (a = 0; a < lng && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a <= lng; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
