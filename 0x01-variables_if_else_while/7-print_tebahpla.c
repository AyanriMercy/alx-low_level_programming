#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: 0 (on success)
 */

int main(void)
{
	char alpbt;

	/* my code goes here */
	for (alpbt = 'z'; alpbt >= 'a'; alpbt--)
	{
		putchar(alpbt);
	}
	putchar('\n');

	return (0);
}
