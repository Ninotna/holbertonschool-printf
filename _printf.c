#include "main.h"

/**
 * _printf - Custom printf function to format and print data
 * @format: The format string containing the characters and format specifiers
 * Return: The number of characters printed, or -1 for an incomplete specifier
 *
 * Description: Mimics the standard printf function, processing
 * format specifiers and printing the corresponding outputs. It handles
 * a lone '%' character by not printing anything and returning -1.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0, char_count = 0;
	int (*func)(va_list) = NULL;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[index])
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			index++;
			char_count++;
			continue;
		}
		index++;
		func = get_print_func(&format[index]);

		if (func != NULL)
			char_count += func(args);
		else
		{
			if (format[index] == '\0')
				return (-1);
			if (format[index] == '%')
				char_count += _putchar('%');
			else
				char_count += _putchar(format[index]);
		}
		index++;
	}
	va_end(args);
	return (char_count);
}
