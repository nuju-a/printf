#include "main.h"

/**
 * print_char - Prints a character.
 * @args: variadic arguments.
 * @s: The string the check for specifier for.
 * Return: the number of character printed.
 */

int print_char(va_list args)
{
	int counter;
	char c;

	counter = 0;
	c = va_arg(ag, int);
	write(1, &c, 1);
	count++;

	return (count);
}
