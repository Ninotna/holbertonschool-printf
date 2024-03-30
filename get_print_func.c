#include "printf.h"

/**
* get_print_func - function pointer that selects the correct function to print
* a character string according to a format specifier
*
* @specifiers: format specifier
*
* Return: print function that corresponds to expected specifier characters
* Or NULL if it doesn't match any of the 5 expected specifier characters.
*/

int (*get_print_func(const char *specifiers))(va_list)
{
	int index = 0;

	form_spec_t array_specifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int_dec},
		{"i", print_int_dec},
		{NULL, NULL}
		};


	while (array_specifier[index].specifier != NULL)
	{
		if (array_specifier[index].specifier[0] == specifiers[0])
		{
			return (array_specifier[index].print_func);
		}
		index++;
	}
	return (NULL);
}
