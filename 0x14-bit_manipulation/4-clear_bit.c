#include "main.h"

/**
 * power - returns the power of a given base and exponent.
 * @base: base number.
 * @exp: exponent number.
 * Return: the power result.
**/
unsigned long int power(int base, unsigned int exp)
{
	if (exp == 1)
		return (base);
	if (exp == 0)
		return (1);
	return (power(base, exp - 1) * base);
}

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to modify.
 * @index: position of the bit to set to 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 31)
		return (-1);
	bit = power(2, index);
	bit = ~bit;
	*n = *n & bit;
	return (1);
}
