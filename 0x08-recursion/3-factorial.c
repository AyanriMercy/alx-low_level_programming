#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * Description: Factorial of a non-negative integer is the multiplication
 * of all positive integers smaller than or equal to n
 * A factorial is represented by a number and a  ” ! ”  mark at the end
 * For example factorial of 6 (6!) is 6*5*4*3*2*1 which is 720
 *
 * @n: given positive number
 * Return: factorial of a given number
 * If n is lower than 0, the function should return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
