#include "main.h"
#include <stdio.h>

/*
 * _printf - Produce output according to a format.
 * @format: the format string.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ag;
	int i, count;
	char *str;
	char c;

	if (format == NULL)
		return (1);

	va_start(ag, format);

	count = 0;
	return (0);
}
