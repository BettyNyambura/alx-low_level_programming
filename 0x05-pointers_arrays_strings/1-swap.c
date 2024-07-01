#include "main.h"

/**
 * swap_int - swaps two intager values after taking them
 * @a: swaps and storesaddress of b
 * @b: swaps and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *b;
	*b = *a;
	*a = swp;
}
