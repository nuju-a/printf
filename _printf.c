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
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
		}
	}

	va_end(ag);
	return (count);
}

int main(void)
{
	int str_count;

	_printf("Orizon\n");
	_printf("c\n", 'v');
	str_count = _printf("s\n", "String");
	_printf("%%\n", '%');

	printf("%d\n", str_count);


	return (0);
}
