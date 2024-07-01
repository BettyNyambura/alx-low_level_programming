#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
