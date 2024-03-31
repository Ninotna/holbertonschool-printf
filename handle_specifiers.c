#include "main.h"

/**
* get_handlers - Retrieves the handler function for a given specifier
* @s: The format specifier
* Return: Pointer to the handling function
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
