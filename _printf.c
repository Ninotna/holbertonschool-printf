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
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i, char_count = 0;

    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                va_end(args);
                return(0);  /* Indicate an incomplete format specifier */
            }
            else if (format[i + 1] == '%')
            {
                _putchar('%');
                char_count++;
                i++;  /* Skip the next '%' */
            }
            else
            {
                // Use get_handlers directly to get the function pointer
                int (*func)(va_list) = get_handlers(format[i + 1]);
                if (func != NULL)
                {
                    char_count += func(args);
                    i++;  /* Skip the specifier */
                }
                else
                {
                    _putchar('%');
                    _putchar(format[i + 1]);
                    char_count += 2;
                    i++;  /* Skip the invalid specifier */
                }
            }
        }
        else
        {
            _putchar(format[i]);
            char_count++;
        }
    }

    va_end(args);
    return char_count;
}
