#include "main.h"

/**
  * _puts_recursion - Prints a strig
  * @s: the string to print
  * Return: Nothing to be returned
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
