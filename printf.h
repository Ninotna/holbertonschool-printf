#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <float.h>
#include <unistd.h>
#include <string.h>

/**
* struct format_specifier - Structure to map format specifiers
* to corresponding print functions
* @specifier: Pointer to a character array representing the format specifier
* @print_func: Pointer to the corresponding print function
*/
typedef struct format_specifier
{
	char *specifier;

	int (*print_func)(va_list arg);
} form_spec_t;

int _printf(const char *format, ...);
int (*get_print_func(const char *specifiers))(va_list);
int _putchar(char c);
int _strlen(char *s);

/* all calls from specifier */
int print_string(va_list list);
int print_int_dec(va_list list);
int print_percent(va_list list);
int print_char(va_list list);
int print_unsigned_int(va_list list);

#endif
