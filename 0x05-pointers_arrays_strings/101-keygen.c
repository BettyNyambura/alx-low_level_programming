#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - proram to generate
 * Return: always zero
 */

int main(void)
{
	char pass[100];
	int i, sum = 0, target = 2772;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 99; i++)
	{
	pass[i] = rand() % 94 + 33;
	sum += pass[i];
	putchar(pass[i]);
	if (sum >= target - 33)
	{
	break;
	}
	}
	if (sum < target)
	{
	pass[i] = target - sum;
	sum += pass[i];
	putchar(pass[i]);
	}
	pass[i + 1] = '\0';
	printf("%s\n", pass);
	return (0);
}
