#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);

/**
 * *get_op_func - selects the correct function to perform the operation
 * asked by the user
 * Description: a function that returns a pointer to the function that
 * corresponds to the operator given as a parameter
 * @s: operator passed as argument to the program
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (strcmp((ops[i].op), s) == 0)
		{
		return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
