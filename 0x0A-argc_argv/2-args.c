#include "main.h"

/**
 * main - prints all arguments it receives
 * Description: a program
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: number of arguments passed
 * @argv: pointer array which points to each argument passed to the program
 * Return: Always 0 (on success)
 */

int main(int argc, char *argv[])
{
	int array;

	for (array = 0; array < argc; array++)
	{
		printf("%s\n", argv[array]);
	}
	return (0);
}
