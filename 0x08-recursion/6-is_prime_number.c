#include "main.h"
/**
 * prime - returns 1 if the input integer is a prime number
 * @x: base case
 * @y: iteration
 * Return: bool
 */

int prime(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (prime(x, y - 1));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * Description: A prime number is defined as a natural number greater than 1
 * and is divisible by only 1 and itself. In other words, the prime number
 * is a positive integer greater than 1 that has xactly two factors
 * 1 and the number itself. First few prime numbers are 2, 3, 5, 7, 11, 13, 17
 * @n: number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (prime(n, n - 1));
}
