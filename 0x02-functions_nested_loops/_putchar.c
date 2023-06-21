#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, -1 is eturned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
