#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Description: a program
 * Return: 0
 */

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", num);
	return (0);
}
