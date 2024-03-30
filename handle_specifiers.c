#include "main.h"

/**
* get_handlers - Retrieves the handler function for a given specifier
* @s: The format specifier
* Return: Pointer to the handling function
*/
int (*get_handlers(char s))(va_list)
{

	int i;

	static SpecifierHandler valid_types[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		/* Add more specifiers as needed */
		{NULL, NULL}
	};

	for (i = 0; valid_types[i].specifier; i++)

	{

		if (s == valid_types[i].specifier[0])
		{
			return (valid_types[i].f);
		}
	}

	return (NULL);
}

/**
* handle_specifiers - Handles the specifiers
* by calling the appropriate functions
* @args: Argument list
* @spec: The specifier to handle
* Return: Number of characters printed
*/
int handle_specifiers(va_list args, char spec)
{
	int (*func)(va_list) = get_handlers(spec);
	int char_count = 0;

	if (func != NULL)
	{
		char_count = func(args);
	} else
	{
		/* Print the specifier as a literal character if no handler is found */
		_putchar('%');
		_putchar(spec);
		char_count = 2;
	}

	return (char_count);
}
