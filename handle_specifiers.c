#include "main.h"
/**
 * handle_specifiers - Handles the specifiers
 * by calling the appropriate functions
 * @args: Argument list
 * @spec: The specifier to handle
 * Return: Number of characters printed
 */
int handle_specifiers(va_list args, char spec)
{
	SpecifierHandler handlers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
	};
	int handlers_count = sizeof(handlers) / sizeof(handlers[0]);
	int i;

	for (i = 0; i < handlers_count; i++)
	{
		if (handlers[i].specifier == spec)
		{
			return (handlers[i].print_func(args));
		}
	}

	return (0);
}
