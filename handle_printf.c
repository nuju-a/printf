#include "main.h"

/**
 * handle_printf - function prints an argument based on its typ
 * @identifier: the format strcut to print the arguments
 * @list: list of arguments to be printed
 *
 * Return: 0 or 1;
 */

int handle_printf(convert_t *identifier, va_list list)
{
	switch (identifier->specifier)
	{
		case 'c':
			print_char(list);
			break;
		case 's':
			print_string(list);
			break;
		case '%':
			print_percent(list);
			break;
	}

	return (0);
}
