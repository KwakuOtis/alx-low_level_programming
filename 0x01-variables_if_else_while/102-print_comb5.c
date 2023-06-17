#include <stdio.h>
/**
 * main - Print all possible combinations
 * do not repeat two dgits numbers
 * Return Always 0 (Success)
 */

int (void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (1 != 98 || j != 99)
			{
					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
