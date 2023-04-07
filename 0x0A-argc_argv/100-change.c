#include "main.h"

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * Description: a program
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1, print
 * Error followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0, followed by a new
 * line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: number of arguments passed
 * @argv: pointer array which points to each argument passed to the program
 * Return: Always 0 (on success)
 */

int main(int argc, char *argv[])
{
	int coin = 0;
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	if (number >= 25)
	{
		coin = number / 25;
		number = number % 25;
	}
	if (number >= 10)
	{
		coin += number / 10;
		number = number % 10;
	}
	if (number >= 5)
	{
		coin += number / 5;
		number = number % 5;
	}
	if (number >= 2)
	{
		coin += number / 2;
		number = number % 2;
	}
	coin += number;
	printf("%d\n", coin);
	return (0);
}
