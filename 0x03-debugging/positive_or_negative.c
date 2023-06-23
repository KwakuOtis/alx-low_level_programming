#include "main.h"
/**
 * main - Determine whethere a number is positive or negativeor zero
 * (0): is the number to be checked
 * Return : 0n Success
 */
void positive_or_negative(int i)
{
	if (i < 0 )
	{ printf("%d is %s\n", i, "negative"); }
	else if (1 > 0)
	{ printf("%d is %s\n", i, "positive"); }
	else
	{ printf("%d is %s\n", i, "zero"); }
	return;
}
