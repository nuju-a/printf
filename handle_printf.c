#include "main.h"

/**
 * handle_printf - function prints an argument based on its typ
 * @count: the content length.
 * @format: format of the functions.
 * @args: the variaadic list name.
 */

void handle_printf(int *count, char *format, va_list args)
{
	char *str = format;
	int i = 0;

	convert_t identifier[5] = {
		{'c', print_char}, {'s', print_string}, {'d', print_int},
		{'i', print_int}, {'u',  print_int}};

	if (*str == 'c' || *str == 's' || *str == 'd' || *str == 'i' || *str == 'u')
	{
		for (i = 0; i < 5; i++)
		{
			if (identifier[i].specifier == *str)
				*count += identifier[i].conversion_func(args, format);
		}
	}
	else if (*str == '%')
	{
		format++;
	}
	else
	{
		write(1, "%", 1);
		write(1, format, 1);
		*count += 2;
	}
}
