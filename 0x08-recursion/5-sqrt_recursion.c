#include "main.h"

/**
 * issqr - find if number is a root
 * @x: number to check
 * @y: base case
 * Return: square or -1
 */

int issqr(unsigned long x, unsigned long y)
{
	if (x == y)
	{
		return (-1);
	}
	if (x * x == y)
	{
		return (x);
	}
	else
	{
		return (issqr((x + 1), y));
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * Description: returns the nonnegative square root of n
 * @n: floating point value
 * Return: square root of n
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0 || n == 2)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (issqr(2, n));
}
