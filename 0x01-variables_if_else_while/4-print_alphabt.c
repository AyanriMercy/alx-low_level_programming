#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 *
 * Return: 0 (on success)
 */

int main(void)
{
	char alpbt;

	/* my code goes here */
	for (alpbt = 'a'; alpbt <= 'z'; alpbt++)
	{
		if (alpbt != 'e' && alpbt  != 'q')
			putchar(alpbt);
	}
	putchar('\n');

	return (0);
}
