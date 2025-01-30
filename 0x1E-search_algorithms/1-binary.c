#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @low: The starting index of the array/subarray
 * @high: The ending index of the array/subarray
 */

void print_array(int *array. size_t low, size_t high)
{
	size_t i;

	for (i = low; i <= high; i++)
	{
	if (i != low)
	printf(", ");
	printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using Binary Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)
	return (-1);

	while (low <= high)
	{
	mid = low + (high - low) / 2;
	printf("Searching in array: ");
	print_array(array, low, high);

	if (array[mid] == value)
	return (mid);
	else if (array[mid] < value)
	low = mid + 1;
	else
	high = mid - 1;
	}

	return (-1);
}
