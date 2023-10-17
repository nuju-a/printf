#include "main.h"

/**
 *print_percent - Print the sign % to the terminal.
 *
 *Return: the number  of characters printed.
 */

int print_percent(va_list args)
{
	int count = 0;

	(void)args;
	write(1, "%", 1);
	count++;

	return (count);
}
