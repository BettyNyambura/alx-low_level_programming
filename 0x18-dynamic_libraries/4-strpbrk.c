#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - function
 * @s: char
 * @accept: char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
