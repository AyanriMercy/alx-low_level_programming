#include "main.h"

/**
 * print_binary_helper - prints binary representation of a number
 * @num: number to convert and print
 *
 * Return: no return
 **/
void print_binary_helper(unsigned long int num)
{
	if (num == 0)
		return;

	print_binary_helper(num >> 1);
	_putchar((num & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 *
 * Return: no return
 **/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_binary_helper(n);
	}
}
