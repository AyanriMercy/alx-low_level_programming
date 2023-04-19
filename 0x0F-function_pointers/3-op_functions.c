#include "3-calc.h"

int op_add(int a, int b);
/**
 * op_add - returns the sum of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b);
/**
 * op_sub - the difference of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b);
/**
 * op_mul - product of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b);
/**
 * op_div - result of the division of a by b
 * @a: integer 1
 * @b: integer 2
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b);
/**
 * op_mod - remainder of the division of a by b
 * @a: integer 1
 * @b: integer 2
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
