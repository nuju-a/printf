#ifndef MAIN_H
#define MAIN_H

/*standard library*/
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/*macro definition*/
#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)
/**
  *struct convert - a new type defining my format struct
  *
  *@specifier: The format
  *@func: The function associated
  */
typedef struct convert
{
	char specifier;
	int (*func)(va_list, char[], int, int, int, int);
} convert_t;

/*function*/
int _printf(const char *format, ...);
int handle_printf(const char *specifier, va_list, char buffer[],
		int flags, int width, int precision, int size);

/*function for format specifiers*/
/*string and characters*/
int print_char(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_string(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_percent(va_list args, char buffer[], int flags,
		int width, int precision, int size);
/*numbers*/
int print_int(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_binary(va_list args, char buffer[], int flags,
		int precision, int width, int size);
int print_unsigned(va_list args, char buffer[], int flags,
		int precision, int size, int width);
int print_octal(va_list args, char bufffer[], int flags,
		int precision, int width, int size);
int print_hexa(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_hexa_upper(va_list args, char buffer[], int flags,
		int width, int precision, int size);
int print_hexidecimal(va_list args, char buffer[], int flags,
		int width, int precision, int size);

#endif /*MAIN_H*/
