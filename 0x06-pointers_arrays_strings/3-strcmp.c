#include "main.h"

/**
 * _strcmp - compares pointers
 * @s1: first pointer
 * @s2: pointer to the second string
 * Return: the negative difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
