#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_numbers - prints numbers, followed by a new line.
 * Description: a function that takes a separator string and a
 * variable number of integers to print. The separator string is used to
 * separate the printed numbers, and the number of integers to print is
 * specified by n
 * @separator: pointer to a constant character string that specifies
 * the separator to be used between the numbers
 * @n: number of numbers to be printed.
 * Return: no value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);
	if (n != 0)
	{
		for (index = 0; (index < n - 1); index++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d", va_arg(args, int));
			}
		}
		printf("%d", va_arg(args, int));
		va_end(args);
	}
	printf("\n");
}
