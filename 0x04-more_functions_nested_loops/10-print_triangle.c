#include "main.h"

/**
 * print_triangle - funtion to print a triangle
 * @size: triangle size
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	if (j < size - (i + 1))
	{
	_putchar(' ');
	}
	else
	{
	_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
