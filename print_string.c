#include "main.h"

/**
 *print_string - Print the string and  count it.
 *@args: The name of the variadic listi.
 *@s: unused format.
 *Return: the number  of characters printed.
 */

int print_string(va_list args, char *s)
{
	char *str;
	int count;

	(void)s;
	str = va_arg(args, char *);

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}

	count = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}
