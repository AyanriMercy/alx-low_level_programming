#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 *
 * Return: 0 (on success)
 */

int main(void)
{
	char alpbt = 'a';

	/* my code goes here */
	while (alpbt <= 'z')
	{
		putchar(alpbt);
		alpbt++;
	}

	alpbt = 'A';

	while (alpbt <= 'Z')
	{
		putchar(alpbt);
		alpbt++;
	}

	putchar('\n');
	return (0);
}
