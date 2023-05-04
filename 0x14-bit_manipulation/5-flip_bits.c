#include "main.h"

/**
 * flip_bits - counts the number of bits needed to be flipped to convert n to m
 * @n: original number
 * @m: desired number
 *
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num_flips = 0;
	unsigned long int num_bits = sizeof(unsigned long int) * 8;

	for (i = 0; i < num_bits; i++)
	{
		if ((m & 1) != (n & 1))
			num_flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (num_flips);
}
