#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number to get the bit from
 * @index: index of the bit to get
 *
 * Return: the bit at the given index, or -1 if index is out of range
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
