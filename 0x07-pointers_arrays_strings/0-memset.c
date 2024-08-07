#include "main.h"

/**
 * _memset -entry point
 * @s: destination of the pointer
 * @b: constant byte
 * @n: bytes
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
