#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: a function
 * @val: number to get last digits
 * Return: last digit value
 */

int print_last_digit(int val)
{
	int digit;

	if (val < 0)
	{
		val = -val;
	}

	/* print last digit number */
	digit = val % 10;

	if (digit < 0)
	{
		digit = -digit;
	}
	_putchar(digit + '0');

	return (digit);
}
