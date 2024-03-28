#include "printf.h"

/**
* get_print_func - selects the correct function to print
* a character string according to a format specifier
*
* @format: operator passed as argument to the program
*
* Return: pointer to the function that corresponds
* to the specifier given as a parameter,
* Or NULL if it doesn't match any of the 5 expected specifier characters.
*/

int (*get_print_func(const char *format))(va_list)
{
	int index;

	form_spec_t format_specifier[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_string},
		{"d", print_int_dec},
		{"i", print_int_dec},
		{NULL, NULL},
		};


	for (index = 0; format_specifier[index].specifier; index++)
	{
		if (*format == format_specifier[index].specifier[0])
			return (format_specifier[index].print_func);
	}
	return (NULL);
}
