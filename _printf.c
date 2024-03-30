#include "printf.h"

/**
* _printf - emulate the original printf
* @format: string to print and format by specifier
* Description: prints better than the original printf, belive in that
* Return: lenght of the output
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	SpecifierHandler handlers[] = {
		{'d', print_int},
		{'c', print_char},
		{'s', print_string},
	};



	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (int j = 0; j < sizeof(handlers) / sizeof(SpecifierHandler); j++)

			{
				if (format[i] == handlers[j].specifier)
				{
					handlers[j].print_func(args);
					break;
				}
			}
		} else
		{
			my_putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (0);
}

