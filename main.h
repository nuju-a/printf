#ifndef MAIN_H
#define MAIN_H

/*standard library*/
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
  *struct convert - a new type defining my format struct
  *
  *@specifier: The format
  *@func: The function associated
  */
typedef struct convert
{
	char specifier;
	int (*func)(va_list, char*);
} convert_t;

/*function*/
int _printf(const char *format, ...);
int handle_printf(const char *specifier, va_list list);

/*function for format specifiers*/
/*string and characters*/
int print_char(va_list args, char*);
int print_string(va_list args, char*);
int print_percent(va_list args, char*);
/*numbers*/
int print_int(va_list args, char*);
int print_binary(va_list args, char*);

#endif /*MAIN_H*/
