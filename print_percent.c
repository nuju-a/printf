#include "main.h"

/**
 *print_percent - Print the sign % to the terminal.
 *
 *Return: the number  of characters printed.
 */

int print_percent(void)
{
	int counter;

	write(1, "%", 1);
	counter++;

	return (counter);
}
