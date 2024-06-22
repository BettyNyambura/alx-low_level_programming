#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar('0' + d);
		if (d <= 8)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');

	return (0);
}
