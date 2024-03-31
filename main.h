#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <float.h>
#include <unistd.h>
#include <string.h>


typedef struct SpecifierHandler
{
	char *specifier;

	int (*f)(va_list);
} form_spec_t;


/* Function prototypes */
int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int (*get_print_func(const char *specifiers))(va_list);

#endif /* MAIN_H */
