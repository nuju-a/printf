#ifndef MAIN_H
#define MAIN_H

/*standard library*/
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
  *struct convert - a new type defining my format struct
  *
  *@specifier: The format
  *@func: The function associated
  */
typedef struct convert
{
	char specifier;
	int (*conversion_func)(va_list);
} convert_t;

/*function*/
int _printf(const char *format, ...);
int handle_printf(convert_t *identifier, va_list list);

/*function for format specifiers*/
/*string and characters*/
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
/*numbers*/
int print_int(va_list args);
int print_binary(va_list args);

#endif /*MAIN_H*/
