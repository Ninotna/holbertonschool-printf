#include "main.h"

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
* print_percent - Prints the percent symbol
* @args: List of arguments, not used in this function
* Return: Number of characters printed
*/
int print_percent(va_list args)
{
	(void)args; /* Cast args to void to avoid unused variable warning */
	_putchar('%');
	return (1);
}
