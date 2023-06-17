#include <stdio.h>

/**
 * main - Reverse print of alphabet in lower case
 *
 * Return Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
