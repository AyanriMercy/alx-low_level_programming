#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...);

/**
 * sum_them_all - returns the sum of all its parameters
 * Description: a function
 * @n: number of arguments that the function will receive
 * Return: an integer value, which is the sum of its arguments
 * if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int number = 0;

	if (n)
	{
		va_start(args, n);
		for (number = 0; number < n; number++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
