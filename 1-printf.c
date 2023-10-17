#include "main.h"


/*
 * _printf - Produce output according to a format.
 * @format: the format string.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ag;
	int i, count;
	char c;

	if (format == NULL)
		return (-1);

	va_start(ag, format);

	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, format, 1);
		}
		else
		{
			i++;
			if (format[i] == 'd')
			{
				va_arg(ag, double);
			}
			else if (format[i] == 'i')
			{	
