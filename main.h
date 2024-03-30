#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


typedef struct SpecifierHandler
{
	char *specifier;

	int (*f)(va_list);
} SpecifierHandler;

typedef struct Handlers
{
	SpecifierHandler *array;
	int count;

} Handlers;

/* Function prototypes */
int _putchar(char c);

int _printf(const char *format, ...);

int handle_specifiers(va_list args, char spec);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int (*get_handlers(char s))(va_list);

#endif /* MAIN_H */
