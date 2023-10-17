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
	const char specifier;
	int (*conversion_func)(va_list, char *);
} convert_t;

/*function*/
int _printf(const char *format, ...);
void handle_printf(int *, char *, va_list);

/*function for format specifiers*/
/*string and characters*/
int print_char(va_list args, char *);
int print_string(va_list args, char *);
int print_percent(va_list args);

int print_int(va_list args, char *);
void change_neg(unsigned int *pNum, int num);
void print_buffer(char buff[11], int index, int *count);

#endif /*MAIN_H*/
