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
* struct SpecifierHandler - A structure to map a format specifier to a function
* @specifier: The format specifier character
* @print_func: The function to call for the corresponding specifier
*
* This struct is used to define a relationship between a format specifier
* and the function that should be called when that specifier is encountered
* in a formatted string, allowing for modular and extensible printing logic.
*/
typedef struct SpecifierHandler
{
	char specifier;           /* Format specifier character */

	int (*print_func)(va_list);
	/* Pointer to function that prints the data and returns the count */
} SpecifierHandler;


int _putchar(char c);

int _printf(const char *format, ...);

int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int int_to_str(int n, char *str);

#endif /* PRINTF_H */
