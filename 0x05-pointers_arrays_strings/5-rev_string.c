#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int l, z, h;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	;
	z = 0;
	h = l / 2;

	while (h--)
	{
	temp = s[l - z - 1];
	s[l -z - 1] = s[z];
	s[z] = temp;
	z++;
	}
}
