#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
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

	putchar('\n');
	return (0);
}
