#include "main.h"

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
	int i = 0;

	form_spec_t valid_types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{NULL, NULL}
	};

	while (valid_types[i].specifier != NULL)
	{
		if (specifiers[0] == valid_types[i].specifier[0])
		{
			return (valid_types[i].f);
		}
		i++;
	}
	return (NULL);
}
