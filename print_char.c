#include "main.h"

/**
 * print_char - Prints a character.
 * @args: variadic arguments.
 * Return: the number of character printed.
 */

int print_char(va_list args)
{
	int count;
	char c;

	count = 0;
	c = va_arg(args, int);
	write(1, &c, 1);
	count++;

	return (count);
}
