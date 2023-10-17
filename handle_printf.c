#include "main.h"
/**
  *handle_printf - function prints an argument based on its type
  *@specifier: the format strcut to print the arguments
  *@buffer: buffer array to handle print
  *@list: list of arguments to be printed
  *@flags: flags specificstion
  *@width: width specificer to get active width
  *@precision: precision specification
  *@size: size specifier
  *
  *Return: 1 or 2;
  */
int handle_printf(const char *specifier, va_list list,
		char buffer[], int flags, int width,
		int precision, int size)
{
	int i;

	convert_t format[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexidecimal},
		{'X', print_hexa_upper},
		{'p', print_pointer},
		{'\0', NULL}
	};

	for (i = 0; format[i].func; i++)
	{
		if (format[i].specifier == *specifier)
			return (format[i].func);
	}
	return (NULL);
}
