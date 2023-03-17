#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0 (on success)
 */

int main(void)
{
	int cmbntn;

	/* my code goes here */
	while (cmbntn < 10)
	{
		putchar(48 + cmbntn);
		if (cmbntn != 9)
		{
			putchar(',');
			putchar(' ');
		}
		cmbntn++;
	}
	putchar('\n');

	return (0);
}
