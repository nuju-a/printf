#include "main.h"

/**
 * print_string - Print the string and  count it.
 * @args: The name of the variadic list.
 * @s: the format string.
 * Return: the number  of characters printed.
 */

int print_string(va_list args)
{
	char *str;
	int counter;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		return (write(1, "(nil)", 5));
	}

	counter = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}
