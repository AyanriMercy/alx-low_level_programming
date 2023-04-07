#include "main.h"

/**
 * main - multiplies two numbers
 * Description: a program
 * Your program should print the result of the multiplication, followed by a
 * new line.
 * You can assume that the two numbers and result of the multiplication can
 * be stored in an integer.
 * If the program does not receive two arguments, your program should print
 * Error, followed by a new line, and return 1
 *
 * @argc: number of arguments passed
 * @argv: pointer array which points to each argument passed to the program
 * Return: Always 0 (on success)
 */

int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	product = number1 * number2;
	printf("%d\n", product);
	return (0);
}
