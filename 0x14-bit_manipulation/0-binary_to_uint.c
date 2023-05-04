#include "main.h"

/**
 * power - returns the value of x raised to the power of y
 * @base: base number
 * @exp: exponent
 *
 * Return: base raised to the power of exp
 **/
int power(int base, int exp)
{
	if (exp < 0)
		return (-1);
	else if (exp == 0)
		return (1);
	else
		return (base * power(base, exp - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or if there is one or
 * more chars in the string b that is not 0 or 1
 **/
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0;
	unsigned int num = 0, val = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = 0; i < len; i++)
	{
		val = b[len - 1 - i] - '0';
		num += val * power(2, i);
	}

	return (num);
}
