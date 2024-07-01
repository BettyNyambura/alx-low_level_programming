#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string
 * @dest: character type strig
 * @src: string
 * Description: copying the string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
