#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * (excluded), followed by a new line
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23
 * Description: a program
 * Return: 0
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
