#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Desription: a function
 * @ch: character to be checked
 * Return: absolute value
 */

int _abs(int ch)
{
	if (ch < 0)
	{
		ch = -ch;
	}
	return (ch);
}
