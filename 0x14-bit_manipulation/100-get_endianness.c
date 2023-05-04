#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int num = 0x01020304;
	char *ptr = (char *)&num;

	if (*ptr == 0x04)
		return (1); /* little endian */
	else
		return (0); /* big endian */
}
