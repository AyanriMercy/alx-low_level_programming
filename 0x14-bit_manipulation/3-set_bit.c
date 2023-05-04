#include "main.h"

/**
 * _pow_recursion - returns the result of a number raised to a given power
 * @base: number base
 * @exp: power
 *
 * Return: result of base raised to the power of exp.
 **/
unsigned long int _pow_recursion(unsigned int base, unsigned int exp)
{
	if (exp == 1)
		return (base);
	if (exp == 0)
		return (1);
	return (_pow_recursion(base, exp - 1) * base);
}

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to modify
 * @index: position to insert 1
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);
	bit = _pow_recursion(2, index);
	*n = *n | bit;
	return (1);
}
