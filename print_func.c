#include "main.h"

/**
* _putchar - Helper function to write a character to stdout
* @c: character to write
*
* Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* int_to_str - Converts an integer to a string
* @n: the integer to convert
* @str: the string to store the converted integer
* Return: Length of the string
*/
int int_to_str(int n, char *str)
{
	return (sprintf(str, "%d", n));
}

/**
* print_int - Prints an integer
* @args: list of arguments from which the integer is extracted and printed
* Return: Number of characters printed
*/
int print_int(va_list args)
{
	int n = va_arg(args, int);

	char buffer[12];

	int i, count;

	count = int_to_str(n, buffer);
	for (i = 0; buffer[i]; i++)
	{
		_putchar(buffer[i]);
	}
	return (count);
}

/**
* print_char - Prints a character
* @args: list of arguments from which the character is extracted and printed
* Return: Number of characters printed (always 1)
*/
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1); /* Since it's a single character */
}

/**
* print_string - Prints a string
* @args: list of arguments from which the string is extracted and printed
* Return: Number of characters printed
*/
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i;
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)

	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}

/**
 * print_percent - Prints the percent symbol
 * @args: List of arguments, not used in this function
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
    (void)args; // Cast args to void to avoid unused variable warning
    _putchar('%');
    return 1;
}
