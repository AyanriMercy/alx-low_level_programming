#include "3-calc.h"

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument array
 * Return: always 0 (on success)
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' ||
			*argv[2] == '/' || *argv[2] == '%')
	{
		count = (*get_op_func(argv[2]))((atoi(argv[1])),
				(atoi(argv[3])));
		printf("%d\n", count);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
