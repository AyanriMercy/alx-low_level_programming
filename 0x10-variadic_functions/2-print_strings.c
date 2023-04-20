#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings, followed by a new line.
 * Description: a function that takes a variable number of string arguments
 * and prints them to the console separated by the given separator string
 * @separator: pointer to a const char type, which is a string that
 * will be used to separate each string in the output.
 * @n: number of arguments that follow
 * Return: no return value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	char *string;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char *);
		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("%p", string);
		}

		if (separator != NULL  && index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
