#include "main.h"
/**
  *handle_printf - function prints an argument based on its type
  *@specifier: the format strcut to print the arguments
  *@list: list of arguments to be printed
  *
  *Return: 1 or 2;
  */
int handle_printf(const char *specifier, va_list list)
{
	int i;

	convert_t identifer[] = {
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

	for (i = 0; identifer[i].specifier; i++)
	{
		if (identifer[i].specifier == *specifier)
			return (identifer[i].func);
	}
	return (NULL);
}
