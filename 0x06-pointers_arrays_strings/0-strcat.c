#include "main.h"
#include <stdio.h>

/**
 * _strcat - conctenates string
 * @dest: destination string
 * @src: sorce string
 * Return: A pointer to the pointing strin
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
	dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
	dest[dlen] = src[i];
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
