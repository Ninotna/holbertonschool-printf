#include "printf.h"

/**
* print_percent - function that prints a percent symbol
*
* @list: variable argument list containing the integer to print
*
* Return: percent
*/
int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}

/**
* print_char - function that prints a char when c specifier is encountered
*
* @list: variable argument list containing the integer to print
*
* Return: character
*/
int print_char(va_list list)
{
	char ch = (char)va_arg(list, int);

	_putchar(ch);
	return (1);
}
