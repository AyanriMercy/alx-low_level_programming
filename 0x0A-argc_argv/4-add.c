#include "main.h"

/**
 * main - adds positive numbers
 * Description: a program
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can
 * be stored in an int
 *
 * @argc: number of arguments passed
 * @argv: pointer array which points to each argument passed to the program
 * Return: Always 0 (on success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num1, num2, array;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
		if (*argv[num1] == 48)
		{
			array = 0;
		}
		else
		{
			for (num2 = 0; argv[num1][num2] != '\0'; num2++)
			{
				if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[num1]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			array = atoi(argv[num1]);
			sum += array;
		}
	}
	printf("%d\n", sum);
	return (0);
}
