#include "function_pointers.h"

void print_name(char *name, void (*f)(char *));

/**
 * print_name - prints a name
 * Description: a function
 * @name: name to be printed
 * @f: poiter to function that prints a name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
