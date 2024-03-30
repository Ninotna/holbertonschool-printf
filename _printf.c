#include "printf.h"

/**
* _printf - Custom printf function by Ines & Antonin
* @format: string to print and format by specifier
* Description: prints better than the original printf, belive in that
* Return: The function returns the number of characters printed (excluding the
* null terminator) if successful. If an error occurs, it returns -1.
*/
int _printf(const char *format, ...)
{
	va_list list;
	int index = 0, length = 0;
	int (*format_func)(va_list) = NULL;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[index])
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			index++;
			length++;
			continue;
		}
		index++;
		format_func = get_print_func(&format[index]);
		if (format_func != NULL)
			length += format_func(list);
		else
		{
			if (format[index] == '\0')
				return (-1);
			if (format[index] == '%')
				length += _putchar('%');
			else
				length += _putchar(format[index]);
		}
		index++;
	}
	va_end(list);
	return (length);
}
