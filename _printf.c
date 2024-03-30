#include "main.h"

/**
* _printf - Custom printf function to format and print data
* @format: The format string containing the characters and format specifiers
* Return: The number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i, char_count = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				break;
			}
			char_count += handle_specifiers(args, format[i]);
		} else
		{
			_putchar(format[i]);
			char_count++;
		}
	}

	va_end(args);
	return (char_count);
}
