#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: imput array
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
	printf("%d", a[index_of_array]);
	if (index_of_array != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}

