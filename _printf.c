#include "main.h"

/**
 *_printf - Produce output according to a format.
 * @format: the format string.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0')
			|| (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if  (*format == '%')
			{
				write(1, "%", 1), count++;
			}
			else
				handle_printf(&count, (char *)format, args);
			format++;
		}
		else
		{
			write(1, format, 1);
			count++, format++;
		}
	}

	va_end(args);
	return (count);
}
