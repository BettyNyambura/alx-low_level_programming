#include <unistd.h>

/**
 * _putchar -writes the charcter c to stdout
 * &c writes the character to print
 * Return: returns 1
 * main - entry point
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
