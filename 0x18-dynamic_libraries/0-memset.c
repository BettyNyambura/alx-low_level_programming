#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - function
 * @s: char
 * @b: char
 * @n: integer
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
