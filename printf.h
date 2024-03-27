#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <float.h>
#include <unistd.h>

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
int specifier(int *i, const char *format, va_list list);
int _putchar(char c);

/* all calls from specifier */
int print_string(va_list p);
int print_int(va_list p);
int print_decimal(va_list p);

#endif