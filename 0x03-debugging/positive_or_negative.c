#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - prints a positive or a negative number
 * @i: integer
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
