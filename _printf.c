#include "printf.h"

/**
* _printf - Custom printf function to format and print data
* @format: The format string containing the characters and format specifiers
* Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, char_count = 0;
	SpecifierHandler handlers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
	};
	int handlers_count = sizeof(handlers) / sizeof(SpecifierHandler);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < handlers_count; j++)
			{
				if (format[i] == handlers[j].specifier)
				{
					char_count += handlers[j].print_func(args);
					break;
				}
			}
			if (j == handlers_count) /* No matching handler found */
			{
				_putchar('%');
				_putchar(format[i]);
				char_count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
	}
	va_end(args);
	return (char_count);
}
