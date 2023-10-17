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
	int i, j, count;
	char *str;
	char c;

	if (format == NULL)
		return (1);

	va_start(ag, format);

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			break;
	
			if (format[i] == 's')
			{
				str = va_arg(ag, char *);
				j = 0;
				while (str[j])
				{
					write(1, &str[j], 1);
					count++;
				}
			}
			else if (format[i] == 'c')
			{
				c = va_arg(ag, int);
				write(1, &c, 1);
				count++;
			}
			else if (format[i] == '%')
			{
				write(1, format, 1);
				count++;
			}
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
