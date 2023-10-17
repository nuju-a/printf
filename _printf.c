#include "main.h"
#include <stdio.h>

/*
 * _printf - Produce output according to a format.
 * @format: the format string.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count;

	if (format == NULL)
		return (write(1, "(nil)", 5));

	va_start(args, format);

	count = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			convert_t identifier[] = {
				{'c', print_char},
				{'s', print_string},
				{'%', print_percent}
				{'\0', NULL}
			};
			handle_printf(&identifer[count], args);
			count++;
		}
	}

	va_end(args);
	return (count);
}
