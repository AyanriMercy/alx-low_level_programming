#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * Description: a program
 * Your program should print a number, followed by a new line
 *
 * @argc: number of arguments passed
 * @argv: pointer array which points to each argument passed to the program
 * Return: Always 0 (on success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
