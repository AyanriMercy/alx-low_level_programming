#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * Description: a function that calculate the power of a number using recursion
 * @x: base case
 * @y: exponential
 * Return: value of x raised to the power of y
 * If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
