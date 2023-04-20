#include "variadic_functions.h"

void print_all(const char * const format, ...);

/**
 * print_all -  prints anything
 * Description: a function that takes a format string and a variable number of
 * arguments, and formats and prints them according to the format string.
 * The format string can include placeholders for the arguments,
 * and the arguments are passed in after the format string.
 * @format: pointer to a const char type, which represents the
 * format string that specifies the format of the output
 * Return: no return value
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str_arg;
	int int_arg;
	float float_arg;
	char format_char;
	int arg_index = 0;

	va_start(args, format);

	while (format[arg_index] != '\0')
	{
		format_char = format[arg_index];
		switch (format_char)
		{
			case 'c':
				int_arg = va_arg(args, int);
				printf("%c", int_arg);
				break;
			case 'i':
				int_arg = va_arg(args, int);
				printf("%d", int_arg);
				break;
			case 'f':
				float_arg = va_arg(args, double);
				printf("%f", float_arg);
				break;
			case 's':
				str_arg = va_arg(args, char*);
				if (str_arg == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str_arg);
					break;
				}
		}
		arg_index++;
		if (format[arg_index] != '\0' && (format[arg_index] == 'c' ||
					format[arg_index] == 'i' ||
					format[arg_index] == 'f' ||
					format[arg_index] == 's'))
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
