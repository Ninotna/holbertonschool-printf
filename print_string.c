#include "printf.h"

/**
* print_string - function that prints a string when s specifier is encountered
*
* @list: variable argument list containing the integer to print
*
* Return: return the number of characters in string
*/
int print_string(va_list list)
{
	int string_count, index;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	string_count = _strlen(str);

	for (index = 0; index < string_count; index++)
	{
		_putchar(str[index]);
	}
	return (string_count);
}
