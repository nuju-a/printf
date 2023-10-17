#include "main.h"

/**
 * print_char - Prints a character.
 * @args: variadic arguments.
 * @s: unused format.
 * Return: the number of character printed.
 */

int print_char(va_list args, char *s)
{
	int count;
	char c;

	(void)s;
	count = 0;
	c = va_arg(args, int);
	write(1, &c, 1);
	count++;

	return (count);
}
