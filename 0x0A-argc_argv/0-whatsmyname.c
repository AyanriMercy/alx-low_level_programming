#include "main.h"

/**
 * main - prints its name, followed by a new line
 * Description: a program
 * If you rename the program, it will print the new name, without having
 * to compile it again
 * You should not remove the path before the name of the program
 *
 * @argc: number of arguments passed
 * @argv: pointer array which points to each argument passed to the program
 * Return: Always 0 (on success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
