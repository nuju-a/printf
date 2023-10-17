#include "main.h"

/**
 * print_string - Print the string and  count it.
 * @args: The name of the variadic list.
 * @s: the format string.
 * Return: the number  of characters printed.
 */

int print_string(va_list args, char *s)
{
	char *str;
	int counter;

	str = va_arg(ag, s);

	if (str == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}

